#!/bin/bash

# COLORS
DEFAULT='\033[0m'
PROCESSING='\033[5;38;5;15m'
RED='\033[7;38;5;9m'
GREEN='\033[7;38;5;10m'

# Execute silent make. Compiling files if needed.
make -s;

# Store output of commands in variables. Piping the result to cat -e to check 
# that the output of the command ends with a newline.
out_1=$( ./megaphone "shhhhh... I think the students are asleep..." | cat -e )
out_2=$( ./megaphone Damnit " ! " "Sorry students, I thought this thing was \
off." | cat -e )
out_3="$( ./megaphone | cat -e )"

# Print the outputs. 
echo "$out_1"
echo "$out_2"
echo "$out_3"

# Check the outputs against expected results and print the comparation result.
if [[ $out_1 == "SHHHHH... I THINK THE STUDENTS ARE ASLEEP...$" ]] 
	then 
		echo -e "${GREEN} TEST 1  - OK! ${DEFAULT}";
else
	echo -e "${RED} TEST 1 - KO! ${DEFAULT}";
fi;	
if [[ $out_2 == 'DAMNIT ! SORRY STUDENTS, I THOUGHT THIS THING WAS OFF.$' ]]
	then 
		echo -e "${GREEN} TEST 2  - OK! ${DEFAULT}";
else
	echo -e "${RED} TEST 2 - KO! ${DEFAULT}";
fi;	
if [[ $out_3 == '* LOUD AND UNBEARABLE FEEDBACK NOISE *$' ]] 
	then 
		echo -e "${GREEN} TEST 3  - OK! ${DEFAULT}";
else
	echo -e "${RED} TEST 3 - KO! ${DEFAULT}";
fi;	
