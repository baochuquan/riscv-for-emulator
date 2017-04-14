#include <stdio.h>
#include "../common/encoding.h"


int main(){
    int a = 2; 
    int b = 5;
    int c = a + b; 

    printf("c = %d\n", c);
	printf("cycle:%ld,mcycle:%ld\n",read_csr(cycle),read_csr(mcycle));	
	return 0;
}
