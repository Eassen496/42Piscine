declare -i n=2
declare -i length=$(ls -l | wc -l)

while [ "$n" -lt "$length" ]
do
ls -l | cat -n | grep $n | cat 
let n=$n+2
done
