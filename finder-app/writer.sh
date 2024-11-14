#!/bin/bash

if [ $# -lt 2 ]
then
	echo "Missing arguments!"
	exit 1
fi

writefile=$1
writestr=$2

mkdir -p "${writefile%/*}"
touch "$writefile"
echo "$writestr" > "$writefile"
