#include <stdio.h>
#include <stdlib.h>




int main() {
	//int *p = (int*)malloc(sizeof(int));
	//*p = 444;
	//printf("%p,%d\n", p, *p);
	//free(p);
	//printf("%p\n", p);

	int *p = calloc(10, 4);
	printf("%d\n", *p);
	int *pp = (int *)malloc(sizeof(int)*10);
	printf("malloc时候：%p\n", pp);
	pp = realloc(pp, 50);
	if (pp == NULL) {
		printf("realloc时候：pp是空！！！\n");
	}
	else {
		printf("realloc时候：pp非空！！！\n%p\n",pp);
	}
	system("pause");
	return 0;
}




/*unsigned char a = 255;
printf("%p\n", a);
char b = -128;
printf("%p\n", b);
printf("%d\n", b);*/