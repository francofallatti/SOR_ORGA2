#!/bin/bash

echo "Enter folder name"

read folder

mkdir $folder

echo "folder created"
ls

rmdir $folder
echo "deleted folder"

ls
