#! /bin/bash
num=1
maxNumber=4
while ((${num}<maxNumber))
do
	md51=$(echo -n "${num}"|md5sum)
	echo ${md51}|cut -d ' ' -f 1 >> md5.txt
	((num++))
done

