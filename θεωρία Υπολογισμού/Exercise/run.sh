#!/bin/bash

bison -d -v -r all parcer.y -Wcounterexamples
flex lexer.l
gcc -o executable lex.yy.c parcer.tab.c cgen.c -lfl
./executable < test_7 > actual_test.c
gcc -o actual_executable actual_test.c
