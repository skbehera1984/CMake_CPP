#!/usr/bin/env bash

SCRIPT=$(readlink -f "$0")
# Absolute path this script is in, thus /home/user/bin
SCRIPTPATH=$(dirname "$SCRIPT")
TOP_DIR=$(dirname "${SCRIPTPATH}")

CMAKE=$(which cmake)

echo $CMAKE
echo $TOP_DIR

cmd="${CMAKE} ${TOP_DIR}"

#run the command
$cmd

MAKE=$(which make)

#run the make command
$MAKE $@
