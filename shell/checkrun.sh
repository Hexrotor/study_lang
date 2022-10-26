#!/bin/bash
# Bash only, idk
check=$(ps -A|grep -o frps)
if [ "${check}" == "" ] ;then
	echo "Not run"
else
	echo "Running"
fi
