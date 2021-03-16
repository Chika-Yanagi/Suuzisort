#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
void sort(int n, int* a){
  bool done = false;
  while(!done) {
    done = true;
    for(int i = 1; i < n; ++i){
      if(a[i-1] > a[i]) { 
       int x = a[i]; a[i] = a[i-1]; a[i-1] = x;
       done = false;
       }
    }
  }
}
int main(int argc,char *argv[]){
	int i;
	int size = argc - 1;
	int* a=(int*)calloc(size, sizeof(int));
	
	for(i=1; i<argc; i++)
		a[i-1] = atoi(argv[i]);

	sort(size, a);
	
	for(i=0; i<size; i++)
		printf("%d ", a[i]);
	printf("\n");

	free(a);
	
	return 0;
}
