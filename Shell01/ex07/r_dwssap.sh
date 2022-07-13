#!/bin/sh
FT_LINE1=7
FT_LINE2=15
cat /etc/passwd | grep -v '#' | awk 'NR%2==0' | rev | sed 's/.*://' | sort -r | awk "NR >= $FT_LINE1 && NR <= $FT_LINE2" | tr '\n' ' ' | sed 's/ /, /g' | sed 's/..$/./'
