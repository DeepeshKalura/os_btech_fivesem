# #!/bin/bash

# echo Please input the intial value
# read iv

# echo please enter the length of the array
# read n

# array=()

# echo enter the values

# for((i=0; i<$n; i++)); do
# 	read values
# 	array+=($values)
# done
# abs() {
# 	result=$(($1-$2))
# 	if [ $result -lt 0 ];
# 	then
# 		result=$(($result * -1))
# 	fi
# 	echo "result=$result"
# 	return $result
# }
# seek=0
# min=11100
# safe=-1
# for((i=0; i<$n; i++)); do
# 	for((j=0; j<$n; j++)); do
# 		value=$(abs $iv ${array[j]})
# 		echo $value
# 		if [ $value -lt $min ];
# 		then
# 			min=$value
# 			safe=$j
# 		fi

# 	done
	
# 	seek=$(($seek+$min))
# 	vi=${result[$safe]}
# 	result[$safe]=11100

# done

# echo the value of seek is $seek



#!/bin/bash

echo "Please input the initial value"
read iv

echo "Please enter the length of the array"
read n

array=()

echo "Enter the values"

for ((i=0; i<$n; i++)); do
	read values
	array+=("$values")
done

abs() {
	result=$(($1-$2))
	if [ $result -lt 0 ]; then
		result=$(($result * -1))
	fi
	echo "result=$result"
	return result
}

seek=0
min=11100
safe=-1

for ((i=0; i<$n; i++)); do
	for ((j=0; j<$n; j++)); do
		value=$(abs $iv ${array[j]})
		echo $value
		if [ $value -lt $min ]; then
			min=$value
			safe=$j
		fi
	done
	
	seek=$(($seek+$min))
	array[$safe]=11100
done

echo "The value of seek is $seek"


