#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(int argc, char *argv[]) {
	
	
	int i;
	int grade[5];
	int average=0;
	int *gptr;
		
	for (i=0;i<5;i++){
		
		printf("grade[%i]=",i);
		scanf("%d",&grade[i]);
	}




	
	
	gptr=grade; //�迭�� ù�κ��� ����Ŵ 
	 
	for (i=0;i<5;i++){
		
		printf("grade[%d]=%d\n",i,*(gptr+i));
		 
		average+=*(gptr+i);
		
	}
		
	printf("average is %d",average/5);
	
	
	return 0;
}







