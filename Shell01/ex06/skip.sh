declare -i n=2
declare -i length=$(ls -l | wc -l)

while [ "$n" -lt "$length" ]
do
ls -l | cat -n | sed 's/total $length//' | grep $n | cat 
let n++
let n++
echo $n
done
