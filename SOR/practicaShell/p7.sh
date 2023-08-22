#!/bin/bash
touch p7.txt
salida="p7.txt"

echo "Informacion del sistema:" > "$salida"
echo "Kernel: $(uname -r)" >> "$salida"
echo "Arquitectura de la PC: $(uname -m)" >> "$salida"
echo "Informacion del CPU: $(lscpu)" >> "$salida"
echo "Primeras 10 interrupciones: $(cat /proc/interrupts | head -n 10)" >> "$salida"
echo "Informacion de la memoria swap: $(free -h | grep Swap)" >> "$salida"
echo "Informacion de la memoria principal $(free -h | grep Mem)" >> "$salida"
echo "Placa de video $(lspci | grep VGA)" >> "$salida"
