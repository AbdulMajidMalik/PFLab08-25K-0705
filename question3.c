#include<stdio.h>
int main(){
	int arr[][3][3]={
	{{9,-3,5},{2,-8,4},{5,-1,2}},
	{{3,3,-4},{7,6,5},{-8,0,2}},
	{{1,2,-3},{8,-9,10},{3,6,9}}
};
printf("Robotic Movement matrix is\n");
for(int i=0;i<3;i++){
	for(int j=0;j<3;j++){
		for(int k=0;k<3;k++){
		
			printf("%d\t",arr[i][j][k]);
		}
		printf("\n");
	}
	printf("\n");
}
printf("New Normalized movement matrix is\n");
for(int i=0;i<3;i++){
	for(int j=0;j<3;j++){
		for(int k=0;k<3;k++){
			if(arr[i][j][k]<0){
				arr[i][j][k]*=-1;
			}
			printf("%d\t",arr[i][j][k]);
		}
		printf("\n");
	}
	printf("\n");
}
	
	return 0;
}
