#!/bin/bash
if [ -z $1 ];
then
echo "$0 [filepath]"
echo "Where filepath is a path to the .deb file"
else
sudo reprepro --priority include* -C main includedeb master $1
fi
