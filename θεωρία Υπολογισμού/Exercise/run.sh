#!/bin/bash

bison -d -v -r all parcer.y
flex lexer.l
gcc -o executable lex.yy.c parcer.tab.c cgen.c -lfl
./executable < test_1.in