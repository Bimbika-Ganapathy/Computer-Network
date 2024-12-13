#include<stdio.h>

int main(){
    int w,i,f,frame[50];
    printf("enter the window size");
    scanf("%d",&w);

    printf("enter the no of frames to be transmitted");
    scanf("%d",&f);

    printf("The %d frames are: ",f);

    for(i=1;i<=f; i++){
      scanf("%d", &frame[i]);
    }

    printf("The sliding window protocol sends the frames in the following manner \n");
    printf("The sender sends the %d frames and waits for the acknowledgement from the receiver ",w);


    for(i=1;i<=f;i++)
    {
        if(i%w==0){
            printf("%d",&frame[i]);
            printf("The acknowledgement is received");
        }

        else{
             printf("%d",&frame[i]);
        }
    }

    if(f%w!=0){
           printf("The acknowledgement is received");
    }
    return 0;
}