#include<stdio.h>
int main(){
	int result[3][3];
	int quat1[][3]={{1000,2000,3000},{4000,5000,6000},{7000,8000,9000}};
	int quat2[][3]={{1000,5000,6000},{3000,5000,9000},{1000,2000,3000}};
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
		result[i][j]=quat1[i][j]+quat2[i][j];
		}
	}
	printf("matrix 1 is \n");
		for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("%d\t",quat1[i][j]);
		
		}
		printf("\n");
		
	}
	printf("matrix 2 is \n");
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("%d\t",quat2[i][j]);
		
		}
		printf("\n");
	}
	printf("result matrix is \n");
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
		
		printf("%d\t",result[i][j]);
		}
		printf("\n");
	}
	return 0;
}
