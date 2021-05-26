----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    14:21:52 04/16/2021 
-- Design Name: 
-- Module Name:    Mem_donnee - Behavioral 
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
use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity Mem_donnee is
    Port ( adr : in  STD_LOGIC_VECTOR (7 downto 0);
           entree : in  STD_LOGIC_VECTOR (7 downto 0);
           RW : in  STD_LOGIC;
           RST : in  STD_LOGIC;
           CLK : in  STD_LOGIC;
           sortie : out  STD_LOGIC_VECTOR (7 downto 0));
end Mem_donnee;

architecture Behavioral of Mem_donnee is

type memoire is ARRAY(0 to 255) OF STD_LOGIC_VECTOR(7 downto 0);
signal mem: memoire;


begin
	
	process
	begin
		wait until CLK'event and CLK='0';
		if RST='0' then 
			mem <= (others => X"00");
		else		
			if RW='0' then
				mem(TO_INTEGER(unsigned(adr)))<=entree;
			end if;
		end if ;
	end process;
	
	sortie<=mem(TO_INTEGER(unsigned(adr)));

end Behavioral;

