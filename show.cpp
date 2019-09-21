#include "show.h"

typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start,int len){
	int i;
	for(i=0;i<len;i++)
	printf("%.2x",start[i]);
	printf("/n");
} 

void show_short(short int x){
	show_bytes((byte_pointer) &x, sizeof(short int));
}

void show_long(long int x){
	show_bytes((byte_pointer) &x, sizeof(long int));
}

void show_double(double x){
	show_bytes((byte_pointer) &x,sizeof(double));
}
