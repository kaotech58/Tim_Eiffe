#/bin/bash
# Author: Timothy Eiffe
# Purpose: Guessing game in shell
# Date: 02/06/2021
GREEN="\e[92m"
RED="\e[0;31m"
STOP="\e[0m"

(( answer = RANDOM % 42 +1 ))

while (( guess != answer ));
	do
	  read -p "Try to guess the correct number between 0 - 42: " guess
	if (( guess > answer ));
	  then
		printf "${RED}"
		echo -e "\nThat's too high, try again."
		printf "${STOP}"
	elif (( guess < answer ));
	  then
		printf "${RED}"
		echo -e "\nThat's too low, try again."
		printf "${STOP}"
	fi
done
printf "${GREEN}"
echo -e "\ncorrect, the answer was"
printf "${STOP}"
toilet -f slant -F border --gay $answer
