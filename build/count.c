#include <stdio.h>
// extern int index;
#include <iostream>
#include <map>
// std::map < const char* , int> instmapper ;
int total = 0;
std::map < char*, int> instmapper; 
extern "C"{
void print(){
	for (std::map< char*, int>::iterator i = instmapper.begin(); i != instmapper.end(); i++){
		printf("%s %d\n", i->first, i->second);
	}
	printf("Total : %d\n", total);
}
void count(char* a){
	// index = 0;
    // printf(a); printf("\n");
    char* opcode = a;
    int val = instmapper[opcode];
    instmapper[opcode] = val + 1;
    total += 1;

    // printf("------------------");
    // printf("%d\n", total);
    // if (a == "ret")
	   //  print();
}

}

// bool isPresent(char *a, char* *list){

// }
