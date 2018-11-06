#include<stdio.h>
int main()
{
    int days,years,weeks,RemainingDays;
    printf("Number of days: ");
    scanf("%d",&days);
    int tempoYear=0, tempoWeeks=0, tempoRemainingDays= 0;

    if((days/365)!=0)
    {
        tempoYear = days/365;
        days = days-(tempoYear*365);
    }
        printf("Years: %d",tempoYear);

    if((days/7)!=0)
    {
        tempoWeeks = days/7;
        days = days - (tempoWeeks*7);
    }
        printf("\nWeeks: %d",tempoWeeks);

    if((days/24)!=0)
    {
        tempoRemainingDays = days/24;
        printf("Days: %d",tempoRemainingDays);
    }
    else
        printf("\nDays: %d",days);

        //I just did my first git push




    return 0;

}
