objects = main.o AAA.o BBB.o CCC.o 
cc = gcc
edit : $(objects)
    cc -o edit $(objects)

main.o : main.c  
AAA.o : AAA.c   AAA.h
BBB.o : BBB.c   BBB.h
CCC.o : CCC.c   CCC.h
.PHONY : clean
clean :
    rm edit main.o AAA.o BBB.o CCC.o 
