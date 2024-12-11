#!/bin/bash

# Get the directory of the script
SCRIPT_DIR=$(dirname "$0")

# Go to script directory
cd "$SCRIPT_DIR"
make -s;
./PhoneBook < ./input.txt
