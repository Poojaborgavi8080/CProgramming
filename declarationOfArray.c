//compile type inilization
/*
#include<stdio.h>
int main()
{
    //int a[];//error
   // int a[3]={9,8};
   //int a[3]={}; no error
   
    int a[4]={1,2,4,7,8,9};
    for(int i=0;i<4;i++)
    {
       printf("%d\n",a[i]);
    }

    //printf("%d",a[3]); // access element
}
    */

    // runtime initization
    #include<stdio.h>
    int main()
    {
        int i;
        int a[5];
        printf("Enter element : \n");

        for(i=0;i<5;i++)
        {1
            scanf("%d",&a[i]);
            
        }

       printf("Entered Elements are : ");
       for(int i=0;i<5;i++)
       {
        printf("%d",a[i]);
       }
       return 0;
    }