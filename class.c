#include<stdio.h>
int main(){
    
    int fbyte,sbyte,tbyte,fourbyte;

    printf("enter ip address");
    scanf("%d %d %d %d",&fbyte,&sbyte,&tbyte,&fourbyte);

    if((fbyte>=0) && (fbyte<=127)){
         printf("IP Address Belongs to class A");
        printf("the network id is %d",fbyte);
          printf("the host id is %d %d %d",sbyte,tbyte,fourbyte);
          exit(0);

    }

    if((fbyte>=128) && (fbyte<=191)){
         printf("IP Address Belongs to class B");
        printf("the network id is %d  %d ",fbyte,sbyte);
          printf("the host id is%d %d",tbyte,fourbyte);
               exit(0);

    }

     if((fbyte>=192) && (fbyte<=223)){
        printf("IP Address Belongs to class C");
        printf("the network id is %d  %d  %d ",fbyte,sbyte,tbyte);
          printf("the host id is %d",fourbyte);
               exit(0);

    }

    
     if((fbyte>=224) && (fbyte<=239)){
        printf("It is a multicast address");
          printf("Belongs to class D");
               exit(0);

    }

     if((fbyte>=240) && (fbyte<=255)){
        printf("Belongs to class E");
             printf("Reserved for future use");
                  exit(0);
       

    }
  return 0;


}