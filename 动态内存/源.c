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
	printf("mallocʱ��%p\n", pp);
	pp = realloc(pp, 50);
	if (pp == NULL) {
		printf("reallocʱ��pp�ǿգ�����\n");
	}
	else {
		printf("reallocʱ��pp�ǿգ�����\n%p\n",pp);
	}
	system("pause");
	return 0;
}




/*unsigned char a = 255;
printf("%p\n", a);
char b = -128;
printf("%p\n", b);
printf("%d\n", b);*/