#include<stdio.h>
int main(){
	int stdmarks[][3]={{27,45,64},{90,79,85},{55,45,29}};
	int transposemarks[3][4];
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			transposemarks[i][j]=stdmarks[j][i];
		}
	}
	printf("original matrix\n");
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("%d\t", stdmarks[i][j]);
		}
		printf("\n");
	}
	printf("transpose matrix\n");
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("%d\t", transposemarks[i][j]);
		}
		printf("\n");
	}
	return 0;
}
