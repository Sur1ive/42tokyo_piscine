#!/bin/bash

function r_dwssap () {
    cat /etc/passwd | sed '/^#.*/d' | awk 'NR % 2 == 0' | sed 's/:.*//g' | rev | sort -r | sed -n $FT_LINE1,${FT_LINE2}p | tr '\n' ',' | sed 's/,/, /g' | sed 's/, $//g' | tr '\n' '.'
}

r_dwssap
