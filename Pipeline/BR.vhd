----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    11:52:50 04/14/2021 
-- Design Name: 
-- Module Name:    BR - Behavioral 
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
USE ieee.numeric_std.all; 

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity BR is
    Port ( adr_A : in  STD_LOGIC_VECTOR (3 downto 0);
           adr_B : in  STD_LOGIC_VECTOR (3 downto 0);
			  adr_W : in  STD_LOGIC_VECTOR (3 downto 0);
           W : in  STD_LOGIC;
           DATA : in  STD_LOGIC_VECTOR (7 downto 0);
           RST : in  STD_LOGIC;
           CLK : in  STD_LOGIC;
           QA : out  STD_LOGIC_VECTOR (7 downto 0);
           QB : out  STD_LOGIC_VECTOR (7 downto 0));
end BR;

architecture Behavioral of BR is

type bancRegistre is ARRAY(0 to 15) OF STD_LOGIC_VECTOR(7 downto 0);
signal reg: bancRegistre;

begin

	process
	begin
		wait until CLK'event and CLK='1';
		if RST='0' then 
		  reg <= (others => X"00");
		
     else		
		if W='1' then
			reg(TO_INTEGER(unsigned(adr_W)))<= DATA;
		end if;
		end if ;
	end process;

QA<=reg(TO_INTEGER(unsigned(adr_A)));
QB<=reg(TO_INTEGER(unsigned(adr_B)));


end Behavioral;

