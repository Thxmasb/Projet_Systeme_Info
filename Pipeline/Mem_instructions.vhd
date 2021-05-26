----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    14:55:33 04/16/2021 
-- Design Name: 
-- Module Name:    Mem_instructions - Behavioral 
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

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity Mem_instructions is
    Port ( adr : in  STD_LOGIC_VECTOR (7 downto 0);
           CLK : in  STD_LOGIC;
           sortie : out  STD_LOGIC_VECTOR (31 downto 0));
end Mem_instructions;

architecture Behavioral of Mem_instructions is

type memoire is ARRAY(0 to 255) OF STD_LOGIC_VECTOR(31 downto 0);
--signal mem: memoire;
constant mem: memoire:=(X"00000000",X"06000800",X"06010300",X"00000000",X"00000000",X"00000000",X"01030001",X"05020000",X"02040100",X"03050100",X"00000000",X"00000000",X"00000000",X"08050000",X"00000000",X"00000000",X"00000000",X"07060500", others=>X"00000000");

begin

	process
	begin
		wait until CLK'event and CLK='1';

			sortie<=mem(TO_INTEGER(unsigned(adr)));

	end process;


	

end Behavioral;

