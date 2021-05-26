----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    10:40:12 05/04/2021 
-- Design Name: 
-- Module Name:    Processeur - Behavioral 
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
use IEEE.STD_LOGIC_UNSIGNED.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values


-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity Processeur is
    PORT( 
			CLK : in  STD_LOGIC;
			RST : in  STD_LOGIC;
			A : out  STD_LOGIC_VECTOR (7 downto 0)
			);
end Processeur;

architecture struct of Processeur is 
	
	COMPONENT IP
	 PORT( 
			CLK : in  STD_LOGIC;
         RST : in  STD_LOGIC;
         SENS : in  STD_LOGIC;
         LOAD : in  STD_LOGIC;
         EN : in  STD_LOGIC;
         Din  : in  STD_LOGIC_VECTOR (7 downto 0);
         Dout : out  STD_LOGIC_VECTOR (7 downto 0)
			);
	END COMPONENT;
	
	
	COMPONENT Mem_instructions
	 PORT( 
			adr : in  STD_LOGIC_VECTOR (7 downto 0);
         CLK : in  STD_LOGIC;
         sortie : out  STD_LOGIC_VECTOR (31 downto 0)
			);
	END COMPONENT;
	
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
	 
	COMPONENT ALU
    PORT(
         A : IN  std_logic_vector(7 downto 0);
         B : IN  std_logic_vector(7 downto 0);
         Ctrl_Alu : IN  std_logic_vector(2 downto 0);
         S : OUT  std_logic_vector(7 downto 0);
         N : OUT  std_logic;
         O : OUT  std_logic;
         Z : OUT  std_logic;
         C : OUT  std_logic
        );
   END COMPONENT;
	
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
	
	COMPONENT Pipeline
		PORT(
			  OPin : in  STD_LOGIC_VECTOR (7 downto 0);
			  Ain : in  STD_LOGIC_VECTOR (15 downto 0);
           Bin : in  STD_LOGIC_VECTOR (15 downto 0);
           Cin : in  STD_LOGIC_VECTOR (15 downto 0);
			  OPout : out  STD_LOGIC_VECTOR (7 downto 0);
           Aout : out  STD_LOGIC_VECTOR (15 downto 0);
           Bout : out  STD_LOGIC_VECTOR (15 downto 0);
           Cout : out  STD_LOGIC_VECTOR (15 downto 0);
			  CLK : in STD_LOGIC
			  );
	END COMPONENT;
	
	
	signal IP_OUT: STD_LOGIC_VECTOR (7 downto 0);
	signal LC_OP : STD_LOGIC ;
	signal QA_OUT, QB_OUT: std_logic_vector(7 downto 0); 
	signal mem_instr_OUT : std_logic_vector(31 downto 0);
	signal LC_UAL : STD_LOGIC_VECTOR (2 downto 0);
	signal LC_MEM_DONNEE : STD_LOGIC;
	signal S_OUT: std_logic_vector(7 downto 0);
	signal ADR_IN: std_logic_vector(7 downto 0);
	signal OUT_MEM_DONNEE: std_logic_vector(7 downto 0);

	
	signal LI_DI_A_OUT:  STD_LOGIC_VECTOR (7 downto 0);
	signal LI_DI_B_OUT:  STD_LOGIC_VECTOR (7 downto 0);
	signal LI_DI_C_OUT:  STD_LOGIC_VECTOR (7 downto 0);
	signal LI_DI_OP_OUT: STD_LOGIC_VECTOR (7 downto 0);
	
	signal DI_EX_A_OUT:  STD_LOGIC_VECTOR (7 downto 0);
	signal DI_EX_B_OUT:  STD_LOGIC_VECTOR (7 downto 0);
	signal DI_EX_C_OUT:  STD_LOGIC_VECTOR (7 downto 0);
	signal DI_EX_OP_OUT: STD_LOGIC_VECTOR (7 downto 0);
	
	signal EX_MEM_A_OUT:  STD_LOGIC_VECTOR (7 downto 0);
	signal EX_MEM_B_OUT:  STD_LOGIC_VECTOR (7 downto 0);
	signal EX_MEM_C_OUT:  STD_LOGIC_VECTOR (7 downto 0);
	signal EX_MEM_OP_OUT: STD_LOGIC_VECTOR (7 downto 0);
	
	signal MEM_RE_A_OUT:  STD_LOGIC_VECTOR (7 downto 0);
	signal MEM_RE_B_OUT:  STD_LOGIC_VECTOR (7 downto 0);
	signal MEM_RE_C_OUT:  STD_LOGIC_VECTOR (7 downto 0);
	signal MEM_RE_OP_OUT: STD_LOGIC_VECTOR (7 downto 0);

	
begin 
	
	A<= QA_OUT ;
				
	memoire_instructions: Mem_instructions PORT MAP(IP_OUT,CLK,mem_instr_OUT);
	mybr: BR PORT MAP (LI_DI_B_OUT(3 downto 0),LI_DI_C_OUT(3 downto 0),MEM_RE_A_OUT(3 downto 0),LC_OP,MEM_RE_B_OUT,RST,CLK,QA_OUT,QB_OUT);
	myalu: ALU PORT MAP (DI_EX_B_OUT,DI_EX_C_OUT,LC_UAL,S_OUT ,OPEN ,OPEN ,OPEN , OPEN );
	memoire_donnee : Mem_donnee PORT MAP (ADR_IN,EX_MEM_B_OUT,LC_MEM_DONNEE,RST,CLK,OUT_MEM_DONNEE);


	LC_OP <= '1' WHEN MEM_RE_OP_OUT=X"01" 
	             or MEM_RE_OP_OUT=X"02" 
					 or MEM_RE_OP_OUT=X"03" 
					 or MEM_RE_OP_OUT=X"04" 
					 or MEM_RE_OP_OUT=X"05" 
					 or MEM_RE_OP_OUT=X"06" 
					 or MEM_RE_OP_OUT=X"07" 
				ELSE '0';
	
	--LC_UAL	
	LC_UAL <= "000" when DI_EX_OP_OUT = X"01" else  --ADD
				 "010" when DI_EX_OP_OUT = X"02" else --MUL
				 "001" when DI_EX_OP_OUT = X"03"; --SUB
				
	--RW à 1 pour lecture (LOAD) et 0 pour écriture	(STORE)
	LC_MEM_DONNEE <= '0' when EX_MEM_OP_OUT = X"08" else '1';
	
	ADR_IN <= EX_MEM_A_OUT when EX_MEM_OP_OUT=X"08" else EX_MEM_B_OUT;
	
	process
		begin
			wait until rising_edge(clk) ;

			if RST='0' then 
				IP_OUT<= X"00";  
			else 
				IP_OUT<=IP_OUT + 1;
			
				LI_DI_OP_OUT <= mem_instr_OUT(31 downto 24);
				LI_DI_A_OUT <= mem_instr_OUT(23 downto 16);
				LI_DI_B_OUT <= mem_instr_OUT(15 downto 8);
				LI_DI_C_OUT <= mem_instr_OUT(7 downto 0);

				DI_EX_C_OUT  <= QB_OUT;
				DI_EX_OP_OUT <= LI_DI_OP_OUT;
				DI_EX_A_OUT  <= LI_DI_A_OUT;
				if LI_DI_OP_OUT =X"06" or LI_DI_OP_OUT =X"07"  then
					DI_EX_B_OUT  <= LI_DI_B_OUT;
				else
					DI_EX_B_OUT  <= QA_OUT;
				end if; --AFC
				
		
				EX_MEM_OP_OUT <= DI_EX_OP_OUT;
				EX_MEM_A_OUT <= DI_EX_A_OUT;
				if ((DI_EX_OP_OUT=X"05") or (DI_EX_OP_OUT=X"06") or (DI_EX_OP_OUT=X"08") or (DI_EX_OP_OUT=X"07")) then
					EX_MEM_B_OUT <= DI_EX_B_OUT;
				else
					EX_MEM_B_OUT <= S_OUT; 
				end if;--quand OP:COP ou AFC
				
				
				if (EX_MEM_OP_OUT=X"07" or  EX_MEM_OP_OUT=X"08") then MEM_RE_B_OUT <= OUT_MEM_DONNEE ;else MEM_RE_B_OUT <= EX_MEM_B_OUT;	end if;  
				-- quand OP est STORE ou LOAD
									 
									 
				MEM_RE_A_OUT <= EX_MEM_A_OUT; 
				MEM_RE_OP_OUT <= EX_MEM_OP_OUT;
			end if;
			
		end process;

end struct;

	
	

