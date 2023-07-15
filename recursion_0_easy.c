/* %%TO PRINT 1 TO N
#include <stdio.h>

void print(int k){
if(k==1) {printf("%d",k);return;}
  print(k-1);
  printf("%d",k);
}
int main(){
int n;
scanf("%d",&n);
print(n);


    return 0;
} 
 */




#include <stdio.h>

void print(int k){
if(k==1) {printf("%d",k);return;}
printf("%d ",k);
  print(k-1);
 
}
int main(){
int n;
scanf("%d",&n);
print(n);


    return 0;
} 
 

