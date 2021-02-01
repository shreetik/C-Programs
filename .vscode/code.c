#include <stdio.h> 

int main(){
int i,j,arr[3][3],arr1[3][3],arr2[3][3];

for(i=0;i<3;i++){
  for(j=0;j<3;j++){
    printf("Enter a number :: ");
    scanf("%d",&arr[i][j]);
  }
}

for(i=0;i<3;i++){
  for(j=0;j<3;j++){
    printf("Enter for 2nd matrix :: ");
    scanf("%d",&arr1[i][j]);
  }
}

for(i=0;i<3;i++){
  for(j=0;j<3;j++){
    arr2[i][j] = arr[i][j] - arr1[i][j];
  }
}

for(i=0;i<3;i++){
  for(j=0;j<3;j++){
   printf("%d ",arr2[i][j]);
  }
  printf("\n");
}



return 0;
}
