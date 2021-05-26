----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    10:31:48 05/04/2021 
-- Design Name: 
-- Module Name:    Pipeline - Behavioral 
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
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity Pipeline is
    Port ( Ain : in  STD_LOGIC_VECTOR (15 downto 0);
           OPin : in  STD_LOGIC_VECTOR (7 downto 0);
           Bin : in  STD_LOGIC_VECTOR (15 downto 0);
           Cin : in  STD_LOGIC_VECTOR (15 downto 0);
           Aout : out  STD_LOGIC_VECTOR (15 downto 0);
           OPout : out  STD_LOGIC_VECTOR (7 downto 0);
           Bout : out  STD_LOGIC_VECTOR (15 downto 0);
           Cout : out  STD_LOGIC_VECTOR (15 downto 0);
			  CLK : in  STD_LOGIC);
end Pipeline;

architecture Behavioral of Pipeline is

begin
	process
	begin
		wait until CLK'event and CLK='1';
		Aout<=Ain; 
		OPout<=OPin;
		Bout<=Bin;
	end process;

end Behavioral;

