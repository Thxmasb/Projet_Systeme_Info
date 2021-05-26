----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    10:04:03 04/14/2021 
-- Design Name: 
-- Module Name:    ALU - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.std_logic_arith.ALL;
use IEEE.std_logic_unsigned.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity ALU is
    Port ( A : in  STD_LOGIC_VECTOR (7 downto 0);
           B : in  STD_LOGIC_VECTOR (7 downto 0);
           Ctrl_Alu : in  STD_LOGIC_VECTOR (2 downto 0);
           S : out  STD_LOGIC_VECTOR (7 downto 0);
           N : out  STD_LOGIC;
           O : out  STD_LOGIC;
           Z : out  STD_LOGIC;
           C : out  STD_LOGIC);
end ALU;

architecture Behavioral of ALU is

		--Signal
		signal Result : STD_LOGIC_VECTOR(15 downto 0);

		signal R_add : STD_LOGIC_VECTOR(8 downto 0);
		signal R_sub : STD_LOGIC_VECTOR(8 downto 0);
		signal R_mul : STD_LOGIC_VECTOR(15 downto 0);

begin

	R_add <= ("0" & A) + ("0" & B);
	R_sub <= ("0" & A) - ("0" & B);
	R_mul <= A * B;

	Result <= R_mul when Ctrl_Alu="010" else
				 ("0000000" & R_add) when Ctrl_Alu="000" else
				 ("0000000" & R_sub) when Ctrl_Alu="001" else
				 x"0000";

	S<=Result(7 downto 0);
	Z<='1' when Result(7 downto 0) = x"00" else '0';
	N<=Result(7);
	O<='1' when Result(15 downto 9) /= x"00" else '0';
	C<=R_add(8) when Ctrl_Alu="000" else '0';

		


end Behavioral;

