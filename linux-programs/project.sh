#!/bin/sh
mkdir DIR
cd DIR
PATH_NAME=$(pwd)
export PATH=$PATH:$PATH_NAME
echo $PATH
