--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   13:34:46 04/16/2021
-- Design Name:   
-- Module Name:   /home/ballotin/Projet_Syst_Info/Test_BR.vhd
-- Project Name:  Projet_Syst_Info
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: BR
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY Test_BR IS
END Test_BR;
 
ARCHITECTURE behavior OF Test_BR IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT BR
    PORT(
         adr_A : IN  std_logic_vector(3 downto 0);
         adr_B : IN  std_logic_vector(3 downto 0);
         adr_W : IN  std_logic_vector(3 downto 0);
         W : IN  std_logic;
         DATA : IN  std_logic_vector(7 downto 0);
         RST : IN  std_logic;
         CLK : IN  std_logic;
         QA : OUT  std_logic_vector(7 downto 0);
         QB : OUT  std_logic_vector(7 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal adr_A : std_logic_vector(3 downto 0) := (others => '0');
   signal adr_B : std_logic_vector(3 downto 0) := (others => '0');
   signal adr_W : std_logic_vector(3 downto 0) := (others => '0');
   signal W : std_logic := '0';
   signal DATA : std_logic_vector(7 downto 0) := (others => '0');
   signal RST : std_logic := '0';
   signal CLK : std_logic := '0';

 	--Outputs
   signal QA : std_logic_vector(7 downto 0);
   signal QB : std_logic_vector(7 downto 0);

   -- Clock period definitions
   constant CLK_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: BR PORT MAP (
          adr_A => adr_A,
          adr_B => adr_B,
          adr_W => adr_W,
          W => W,
          DATA => DATA,
          RST => RST,
          CLK => CLK,
          QA => QA,
          QB => QB
        );

   -- Clock process definitions
   CLK_process :process
   begin
		CLK <= '0';
		wait for CLK_period/2;
		CLK <= '1';
		wait for CLK_period/2;
   end process;
 
      -- insert stimulus here 
		RST <= '0', '1' after 10 ns; 
		adr_A<="0001", "0010" after 50 ns, "0011" after 150 ns, "0111" after 200 ns;
		adr_B<="0100", "0100" after 50 ns, "1100" after 150 ns, "1111" after 200 ns;
		W<='1', '0' after 100 ns;
		adr_W<="0001", "0011" after 50 ns, "0010" after 100 ns, "0100" after 150 ns; 
		DATA<="00000001", "00010101" after 50 ns,  "00001010" after 100 ns;


END;
