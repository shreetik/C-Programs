#include <stdio.h>
int main(){
int n,i,j,c=0;
printf("enter size of array :: ");
scanf("%d",&n);
int arr[n];
for(i=0;i<n;i++){
    printf("Input number in array :: ");
    scanf("%d",&arr[i]);
}

for(i=0;i<n;i++){
    j=i;
    for(j+=1;j<n;j++){
        if(arr[i]==arr[j]){
            c ++;
            break;
        }

    }
    
}

printf("Here total %d duplicate elements",c);

return 0;
}

