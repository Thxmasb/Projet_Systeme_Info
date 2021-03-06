----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    11:46:52 05/04/2021 
-- Design Name: 
-- Module Name:    IP - Behavioral 
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

entity IP is
    Port ( CLK : in  STD_LOGIC;
           RST : in  STD_LOGIC;
           SENS : in  STD_LOGIC;
           LOAD : in  STD_LOGIC;
           EN : in  STD_LOGIC;
           Din  : in  STD_LOGIC_VECTOR (7 downto 0);
           Dout : out  STD_LOGIC_VECTOR (7 downto 0));
end IP;
architecture Behavioral of Compteur is
signal compteur:std_logic_vector(7 downto 0);
begin
	Dout<=compteur; --en parallele avec le process
	process
	
	begin
		wait until CK'event and CK='1';
		if RST='0'
		then compteur<="00000000";
		else
			if LOAD='1' 
			then compteur <= Din;
			elsif EN='0'
			then 
				if SENS='1'
				then compteur<=compteur+1;
				elsif SENS='0'
				then compteur<=compteur-1;
				end if;
			end if;
		end if;
	end process;
end Behavioral;
