#!/bin/bash
RUNNING="0"

while(( RUNNING < 2 ))
do
if(( RUNNING == 0 ))
then
	./guess.sh;
	RUNNING=$(( RUNNING+1 ));
fi
if(( RUNNING == 1 ))
then
	./guess;
	RUNNING=$(( RUNNING+1 ));
fi
done
	toilet -f banner --metal WINNER
