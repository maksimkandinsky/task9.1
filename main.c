#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
const n = 3;
const m = 3;
int main()
{
    setlocale(LC_ALL,"Rus");
int a[n][m];
int b[n*m];
int i,j,k;
printf("¬ведите таблицу 3 на 3\n");
for(i = 0;i<n;i++){
    for(j = 0;j<m;j++){
        scanf("%d",&a[i][j]);
        k = i*m+j;
    b[k]=a[i][j];
    }
}
for(k = 0;k<m*n;k++){
    printf("%d ",b[k]);
}
printf("\n¬ведите массив длины 9\n");
for(k = 0;k<m*n;k++){
    scanf("%d",&b[k]);
    j = k % m;
    i = (k - j)/m;
    a[i][j]=b[k];
}
for(i = 0;i<n;i++){
    for(j = 0;j<m;j++){
            if(j == m-1){
               printf("%d\n",a[i][j]);
            }else{
    printf("%d ",a[i][j]);
    }
}
}
printf("\n");
k = 1;
    for (j = 0;j<m;j++){
        a[0][j]=j+1;
    }
     for (i = 0;i<n;i++){
        a[i][0]=i+1;
    }
    for(i = 1;i<n;i++){
        for(j=1;j<m;j++){
            a[i][j]= a[i-1][j-1];
        }
    }
     for(i = 0;i<n;i++){
    for(j = 0;j<m;j++){
            if(j == m-1){
               printf("%d\n",a[i][j]);
            }else{
    printf("%d ",a[i][j]);
    }
}
     }
printf("\n");

for(i = 1;i<n;i++){
        for(j=1;j<m;j++){
            a[i][j]= 0;
        }
    }
k =1;
for(j=0;j<m;j++){
    a[0][j]= k;
    k++;
}
for(i=1;i<n;i++){
    a[i][m-1]=k;
    k++;
}
for(j=m-2;j>-1;j--){
    a[n-1][j]=k;
    k++;
}
for(i=n-2;i>=1;i--){
    a[i][0]=k;
    k++;
}
i=1;
j=1;
    while(k<=m*n){
            a[i][j]=k;
        k++;
        if((a[i][j-1]*a[i][j+1]*a[i-1][j]>0) || (a[i][j-1]*a[i][j+1]*a[i+1][j]>0) || (a[i][j-1]*a[i+1][j]*a[i-1][j]>0) || (a[i][j+1]*a[i-1][j]*a[i+1][j]>0)){
                if(a[i-1][j]==0){
                    i--;
                }else{
                if(a[i+1][j]==0){
                    i++;
                }else{
                if(a[i][j+1]==0){
                    j++;
                }else{
                if (a[i][j-1]==0){
                    j--;
                }
                }
                }
                }
        }else {
        if(a[i][j-1]==0 && a[i-1][j]==0){
                j--;
                }
                if(a[i-1][j]==0 && a[i][j+1]==0){
                    i--;
                }
                if(a[i][j+1]==0 && a[i+1][j]==0){
                    j++;
                }
                if(a[i+1][j]==0 && a[i][j-1]==0){
                    i++;
                }
        }
            }
    for(i = 0;i<n;i++){
    for(j = 0;j<m;j++){
            if(j == m-1){
               printf("%d\n",a[i][j]);
            }else{
    printf("%d ",a[i][j]);
    }
}
     }
    return 0;
}
