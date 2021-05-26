--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   14:33:40 04/16/2021
-- Design Name:   
-- Module Name:   /home/ballotin/Projet_Syst_Info/Test_Mem_donnee.vhd
-- Project Name:  Projet_Syst_Info
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: Mem_donnee
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
 
ENTITY Test_Mem_donnee IS
END Test_Mem_donnee;
 
ARCHITECTURE behavior OF Test_Mem_donnee IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT Mem_donnee
    PORT(
         adr : IN  std_logic_vector(7 downto 0);
         entree : IN  std_logic_vector(7 downto 0);
         RW : IN  std_logic;
         RST : IN  std_logic;
         CLK : IN  std_logic;
         sortie : OUT  std_logic_vector(7 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal adr : std_logic_vector(7 downto 0) := (others => '0');
   signal entree : std_logic_vector(7 downto 0) := (others => '0');
   signal RW : std_logic := '0';
   signal RST : std_logic := '0';
   signal CLK : std_logic := '0';

 	--Outputs
   signal sortie : std_logic_vector(7 downto 0);

   -- Clock period definitions
   constant CLK_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: Mem_donnee PORT MAP (
          adr => adr,
          entree => entree,
          RW => RW,
          RST => RST,
          CLK => CLK,
          sortie => sortie
        );

   -- Clock process definitions
   CLK_process :process
   begin
		CLK <= '0';
		wait for CLK_period/2;
		CLK <= '1';
		wait for CLK_period/2;
   end process;
 

		RST<='1', '0' after 50 ns;
		RW<='1', '0' after 250 ns; 
		adr<="00000001", "00000010" after 100 ns, "00000110" after 150 ns, "00001111" after 200 ns;
		entree<="00100010", "01010100" after 150 ns;

END;
