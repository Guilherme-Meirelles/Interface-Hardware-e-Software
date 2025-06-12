# Átividade Prática de Programação para Interfaceamento de Hardware e Software

## 1. Introdução e Objetivos

Este trabalho prático tem como o objetivo demonstrar a integração entre:

- Módulos e bibliotecas de funções escritas na linguagem C,
- Código fonte de alto nível (Javascript, Lua ou Python) embutido via interpretador em
uma aplicação escrita na linguagem C e
- Código fonte de alto nível (Javascript, Lua ou Python) estendido através de novas
funcionalidades implementadas via chamada de funções escritas na linguagem C.

Parar alcançar estes objetivos pretende construir um programa em python que execute o algoritmo de levenshtein, construído em linguagem C. Para estabelecer esta relação foi construido o arquivo library.c que utiliza as bibliotecas pocketpy.h e pocketpy.c, as quais trazem funcionalidades necessárias para realizar a integração e execução entre os arquivos python e C.

## 2.Desenvolvimento

Este programa implementou alguns arquivos, os quais são:

### 2.1. levenshtein.c

Código em C que executa o algoritmo de Levenshtein, este algoritmo compara duas palavras(strings) e devolve a quantidade caracteres que deveriam ser alterados, adicionados ou removidos em ambas as palavras para que as duas fiquem iguais. Observação: neste algoritmo, caracteres maiúsculos e minúsculos são considerados caracteres diferentes.

### 2.2. main.py

Arquivo em python onde é executado e testado algorimo de Levenshtein implementado em levenshtein.c

### 2.3. pocketpy.h e pocketpy.c

Bibliotecas utilizadas para realizar a integração de arquivos e códigos em python e em C. O arquivo pocketpy.h apresenta a declaração das funções e estruturas de integração, enquanto o pocketpy.c apresenta as intruções pertecentes a cada função declarada em pocketpy.h.

### 2.4. library.c

Arquivo responsável pela execução do algoritmo de levenshtein.c em main.py. Para isto, importa-se o arquivo levnshtein.c e as bibliotecas pocketpy.h e pocketpy.c, a primeira chamada no arquivo e a segunda chamada na execução pelo terminal. Além disso, o arquivo main.py é lido por library.c através das funções de leitura de arquivo 'fopen ' e 'fread', para depois main.py ser executado.

### 2.5. Makefile

Apresenta os comando que são chamadas no terminal para o programa ser executado. Os comandos são:

#### 2.5.1. make

Executa as linhas de comando: 

gcc -Wall -c library.c -o library.o
gcc -Wall -c pocketpy.c -o pocketpy.o
gcc library.o pocketpy.o -o main -lm

Elas são responsáveis por criar um arquivo executavel 'main' que executa o programa

#### 2.5.2. make run

Executa a linha de comando:

./main

Responsável pela execução do arquivo executável 'main'. Este comando também executa o comando 'make' caso ele não tenha sido executado antes.

#### 2.5.3. make clean

Desfaz o comando 'make', removendo os arquivos que são gerados, que são: pocketpy.o, library.o e main. 

## 3.Conclusão

A integração dos arquivos python e C ocorreu com sucesso, sendo possível implementar a função em C e executá-las no python.

