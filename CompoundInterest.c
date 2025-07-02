#include<stdio.h>
#include<math.h>

    int main()
    {
        int p=10000; // initial amount
        double r=0.05; // rate of interest
        int n=4;//(quarterly)
        int t=3; // number of year
        double firstpart=(1+(r/n));
        int secondpart=n*t;
        
        double ci=p*pow(firstpart,secondpart);
        double amount=ci-p;
       
        printf("\n Compund Interest is : %lf",amount);
    }