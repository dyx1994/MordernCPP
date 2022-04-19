#!/usr/bin/env bash

echo "The number of lines present in the file"
wc -l data.dat

echo "The number of lines in the file contain dolor or dalor"
grep -c 'dolor\|dalor' data.dat

echo "The number of words in the file"
wc -w data.dat

echo "The number of words start with mol in the file"
grep -o '\<mol' data.dat | wc -w
