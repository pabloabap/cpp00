#!/bin/bash

# COLORS
DEFAULT='\033[0m'
PROCESSING='\033[5;38;5;15m'
RED='\033[7;38;5;9m'
GREEN='\033[7;38;5;10m'

#Get the directory of the script
SCRIPT_DIR=$(dirname "$0")

#Go to script directory
cd "$SCRIPT_DIR"
make -s

#Compare outputs removing timestamps, their execution can be at 
# different time period.
if diff -s <( cut ./19920104_091532.log -d ' ' -f 2- ) \
	<( ./bankLogs | cut -d ' ' -f 2- )
	then
		echo -e "${GREEN}OK${DEFAULT}";
else
	echo -e "${RED}KO${DEFAULT}";
fi;

make fclean -s;
