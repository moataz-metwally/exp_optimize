#include<stdio.h>

long long dictionary[10000]={ 0 };

long long power(long x , long n){
 if(dictionary[n] != 0){

//printf("dictionary triggered n=%ld x=%ld value=%ld\r\n",n,x,dictionary[n]);
return dictionary[n];
 }
 if(n ==1){
     
printf("tree bottom triggered \r\n");
dictionary[n]  = x;
     return x;
 }
   
   if(n%2){

dictionary[n] = power(x,n-1)*x;

   }else{
dictionary[n] = power(x,(n/2))*power(x,(n/2));

   }


printf("dictionary triggered n=%ld x=%ld value=%ld\r\n",n,x,dictionary[n]);
    return  dictionary[n];
}


void main(){



printf("%ld\r\n",power(3,19));

    return;
}