#!/bin/bash


echo Enter the number of element
read n

array=()
sum=0
echo Enter the array values
for((i=0; i<$n; i++)); do
	read value;
	array+=($value)
done

for((i=0; i<$n; i++)); do
	echo ${array[i]}
	sum=$((sum + ${array[i]}))
done

echo the sum of element is $sum
