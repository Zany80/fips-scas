#include "generated.h"

const char *embedded_table = "#### INSTRUCTION\n\
# INS [MNOMIC] [VALUE]\n\
# MNOMIC is any series of case-insenstive characters with support for special\n\
# characters to define additional functionality. MNOMIC may not have whitespace.\n\
# Special Characters:\n\
#  '_': Required whitespace\n\
#  '-': Optional whitespace\n\
#  '%#<bits[s]>': Immediate value (# is a character to use to identify later)\n\
#  '^#<bits[s]>': Immediate value relative to PC (# is a character to use to identify later)\n\
#  '@#<group>': Operand (# is a character to use to identify later)\n\
#  '&': Special - RST value\n\
# \n\
# VALUE is a value in binary, which may include references to immediate values and operands\n\
# in use above. For example, in the MNOMIC 'hello,-world_%A<16>_@B<a>', the value could be\n\
# '01011 %A 10110 @B'\n\
#\n\
#### OPERAND GROUP\n\
# OPERAND [GROUP NAME] [OPERAND NAME] [VALUE]\n\
# GROUP NAME is the name of the operand group this belongs to. This is used to reference the\n\
# group in a MNOMIC with the @ operator. OPERAND NAME is the name to match, such as A, B, IX,\n\
# etc. VALUE is the value in binary of this operand.\n\
\n\
ARCH limn\n\
\n\
OPERAND registers  R0  00000000\n\
OPERAND registers  R1  00000001\n\
OPERAND registers  R2  00000010                      \n\
OPERAND registers  R3  00000011\n\
OPERAND registers  R4  00000100\n\
OPERAND registers  R5  00000101\n\
OPERAND registers  R6  00000110\n\
OPERAND registers  R7  00000111\n\
OPERAND registers  R8  00001000\n\
OPERAND registers  R9  00001001\n\
OPERAND registers  R10 00001010\n\
OPERAND registers  R11 00001011\n\
OPERAND registers  R12 00001100\n\
OPERAND registers  R13 00001101\n\
OPERAND registers  R14 00001110\n\
OPERAND registers  R15 00001111\n\
OPERAND registers  R16 00010000\n\
OPERAND registers  R17 00010001\n\
OPERAND registers  R18 00010010\n\
OPERAND registers  R19 00010011\n\
OPERAND registers  R20 00010100\n\
OPERAND registers  R21 00010101\n\
OPERAND registers  R22 00010110\n\
OPERAND registers  R23 00010111\n\
OPERAND registers  R24 00011000\n\
OPERAND registers  R25 00011001\n\
OPERAND registers  R26 00011010\n\
OPERAND registers  R27 00011011\n\
OPERAND registers  R28 00011100\n\
OPERAND registers  R29 00011101\n\
OPERAND registers  R30 00011110\n\
OPERAND registers   RF 00011111\n\
OPERAND registers   PC 00100000\n\
OPERAND registers   SP 00100001\n\
OPERAND registers   RS 00100010\n\
OPERAND registers  IVT 00100011\n\
OPERAND registers HTTA 00100100\n\
OPERAND registers  USP 00100101\n\
OPERAND registers   K0 00100110\n\
OPERAND registers   K1 00100111\n\
OPERAND registers   K2 00101000\n\
OPERAND registers   K3 00101001\n\
\n\
INS NOP 00000000\n\
INS LI_@A<registers>-,-%B<32> 00000001 @A %B\n\
INS MOV_@A<registers>-,-@B<registers> 00000010 @A @B\n\
INS XCH_@A<registers>-,-@B<registers> 00000011 @A @B\n\
INS LRI.B_@A<registers>-,-%B<32> 00000100 @A %B\n\
INS LRI.I_@A<registers>-,-%B<32> 00000101 @A %B\n\
INS LRI.L_@A<registers>-,-%B<32> 00000110 @A %B\n\
INS SIR.B_%A<32>-,-@B<registers> 00000111 %A @B\n\
INS SIR.I_%A<32>-,-@B<registers> 00001000 %A @B\n\
INS SIR.L_%A<32>-,-@B<registers> 00001001 %A @B\n\
INS LRR.B_@A<registers>-,-@B<registers> 00001010 @A @B\n\
INS LRR.I_@A<registers>-,-@B<registers> 00001011 @A @B\n\
INS LRR.L_@A<registers>-,-@B<registers> 00001100 @A @B\n\
INS SRR.B_@A<registers>-,-@B<registers> 00001101 @A @B\n\
INS SRR.I_@A<registers>-,-@B<registers> 00001110 @A @B\n\
INS SRR.L_@A<registers>-,-@B<registers> 00001111 @A @B\n\
INS SII.B_%A<32>-,-%B<8> 00010000 %A %B\n\
INS SII.I_%A<32>-,-%B<16> 00010001 %A %B\n\
INS SII.L_%A<32>-,-%B<32> 00010010 %A %B\n\
INS SRI.B_@A<registers>-,-%B<8> 00010011 @A %B\n\
INS SRI.I_@A<registers>-,-%B<16> 00010100 @A %B\n\
INS SRI.L_@A<registers>-,-%B<32> 00010101 @A %B\n\
INS PUSH_@A<registers> 00010110 @A\n\
INS PUSHI_%A<32> 00010111 %A\n\
INS PUSHA 00011001\n\
INS POP_@A<registers> 00011000 @A\n\
INS POPA 00011010\n\
INS B_%A<32> 00011011 %A\n\
INS BR_@A<registers> 00011100 @A\n\
INS BE_%A<32> 00011101 %A\n\
INS BNE_%A<32> 00011110 %A\n\
INS BG_%A<32> 00011111 %A\n\
INS BL_%A<32> 00100000 %A\n\
INS BGE_%A<32> 00100001 %A\n\
INS BLE_%A<32> 00100010 %A\n\
INS CALL_%A<32> 00100011 %A\n\
INS RET 00100100\n\
INS CMP_@A<registers>-,-@B<registers> 00100101 @A @B\n\
INS CMPI_@A<registers>-,-%B<32> 00100110 @A %B\n\
INS ADD_@A<registers>-,-@B<registers>-,-@C<registers> 00100111 @A @B @C\n\
INS ADDI_@A<registers>-,-@B<registers>-,-%C<32> 00101000 @A @B %C\n\
INS SUB_@A<registers>-,-@B<registers>-,-@C<registers> 00101001 @A @B @C\n\
INS SUBI_@A<registers>-,-@B<registers>-,-%C<32> 00101010 @A @B %C\n\
INS MUL_@A<registers>-,-@B<registers>-,-@C<registers> 00101011 @A @B @C\n\
INS MULI_@A<registers>-,-@B<registers>-,-%C<32> 00101100 @A @B %C\n\
INS DIV_@A<registers>-,-@B<registers>-,-@C<registers> 00101101 @A @B @C\n\
INS DIVI_@A<registers>-,-@B<registers>-,-%C<32> 00101110 @A @B %C\n\
INS MOD_@A<registers>-,-@B<registers>-,-@C<registers> 00101111 @A @B @C\n\
INS MODI_@A<registers>-,-@B<registers>-,-%C<32> 00110000 @A @B %C\n\
INS NOT_@A<registers>-,-@B<registers> 00110001 @A @B\n\
INS IOR_@A<registers>-,-@B<registers>-,-@C<registers> 00110010 @A @B @C\n\
INS IORI_@A<registers>-,-@B<registers>-,-%C<32> 00110011 @A @B %C\n\
INS NOR_@A<registers>-,-@B<registers>-,-@C<registers> 00110100 @A @B @C\n\
INS NORI_@A<registers>-,-@B<registers>-,-%C<32> 00110101 @A @B %C\n\
INS EOR_@A<registers>-,-@B<registers>-,-@C<registers> 00110110 @A @B @C\n\
INS EORI_@A<registers>-,-@B<registers>-,-%C<32> 00110111 @A @B %C\n\
INS AND_@A<registers>-,-@B<registers>-,-@C<registers> 00111000 @A @B @C\n\
INS ANDI_@A<registers>-,-@B<registers>-,-%C<32> 00111001 @A @B %C\n\
INS NAND_@A<registers>-,-@B<registers>-,-@C<registers> 00111010 @A @B @C\n\
INS NANDI_@A<registers>-,-@B<registers>-,-%C<32> 00111011 @A @B %C\n\
INS LSH_@A<registers>-,-@B<registers>-,-@C<registers> 00111100 @A @B @C\n\
INS LSHI_@A<registers>-,-@B<registers>-,-%C<8> 00111101 @A @B %C\n\
INS RSH_@A<registers>-,-@B<registers>-,-@C<registers> 00111110 @A @B @C\n\
INS RSHI_@A<registers>-,-@B<registers>-,-%C<8> 00111111 @A @B %C\n\
INS BSET_@A<registers>-,-@B<registers>-,-@C<registers> 01000000 @A @B @C\n\
INS BSETI_@A<registers>-,-@B<registers>-,-%C<8> 01000001 @A @B %C\n\
INS BCLR_@A<registers>-,-@B<registers>-,-@C<registers> 01000010 @A @B @C\n\
INS BCLRI_@A<registers>-,-@B<registers>-,-%C<8> 01000011 @A @B %C\n\
INS SYS_%A<32> 01000100 %A\n\
INS CLI 01000101\n\
INS BRK 01000110\n\
INS HLT 01000111\n\
INS IRET 01001000\n\
INS BSWAP_@A<registers>-,-@B<registers> 01001001 @A @B\n\
INS HTTL 01001010\n\
INS HTTS 01001011\n\
INS CPU 01001100\n\
INS RSP_@A<registers> 01001101 @A\n\
INS SSP_@A<registers> 01001110 @A\n\
INS PUSHV_@A<registers>-,-@B<registers> 01001111 @A @B\n\
INS PUSHVI_@A<registers>-,-%B<32> 01010000 @A %B\n\
INS POPV_@A<registers>-,-@B<registers> 01010001 @A @B\n\
INS POPVI_@A<registers>-,-%B<32> 01010010 @A %B\n\
INS CMPS_@A<registers>-,-@B<registers> 01010011 @A @B\n\
INS CMPSI_@A<registers>-,-%B<32> 01010100 @A %B\n\
";
