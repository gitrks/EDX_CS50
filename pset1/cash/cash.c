#include<stdio.h>
#include<cs50.h>
#include<math.h>
/*declaring variables   */
int main(void)
{
float change;
float change_in_cents;
int no_of_coins=0;
/* Asking the user for the change desired */
do
    {
        printf("Welcome to the store! Please Enter the change you desire in the format x.00 or x:");
        change = get_float();
    }
    while (change < 0);
printf("The value you entered is %f\n",change);
change_in_cents = round(change * 100);
printf("The change to be rendered in cents is %f\n", change_in_cents);
/* check for denominations */
while(change_in_cents >= 25) {
    no_of_coins ++;
    change_in_cents = change_in_cents - 25;

}
while((change_in_cents >= 10) && (change_in_cents>0)) {
    no_of_coins ++;
    change_in_cents = change_in_cents - 10 ;

}

while((change_in_cents >= 5) && (change_in_cents>0)) {
    no_of_coins ++;
    change_in_cents = change_in_cents - 5 ;

}

while((change_in_cents >=1) && (change_in_cents>0)) {
    no_of_coins ++;
    change_in_cents = change_in_cents - 1 ;

}

printf("\nNumber of coins %d\n" , no_of_coins);



return 0;
}