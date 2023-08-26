#!/bin/bash

function Error(){
	echo "Carpeta no ingresada"
}

echo "Ingrese nombre de la carpeta a crear"
read folder


#si el usuario no ingresa el nombre de la carpeta
if [ -z $folder ]; #si cant de parametros es < 1 -> Error
then
	Error
	exit 1
fi

cd $HOME
if [ -d $folder ]; #verifica si existe la carpeta pasada
then
	echo "La carpeta ya existe"
else
	echo "Creando carpeta."
	mkdir $folder
	cd $folder
	ls -lR / | grep '\.txt$' > "text.txt" #lista de archivos .txt

	date >> text.txt #agrega la fecha

	cat "text.txt" #muestra el archivo

	echo "fin del programa :)"
fi
