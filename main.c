#include <stdio.h>
#include <unistd.h>

int main(int arg,char**argv){
	printf("Hello world!\n");
	
	for(int i = 0 ; i<5 ; i++){
		printf("For Counter %d\n",i);
	}
	
	/*
           1. membuat suatu aplikasi dari sistem yang diminta.
		
	*/
	int counter = 0;
	while(1){ // ----->>>> Kalau di python sama kaya while True:
		printf("while Counter %d\n",counter);
		counter++;
		if(counter==5) break;
	}
	return 0;
}
