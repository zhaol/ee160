#include <stdio.h>

main() {
    float account_balance;

    printf ("Please enter the account balance: ");
    scanf ("%f", &account_balance);
    
    if (account_balance < 100000) {
      if (account_balance < 1000) {
        printf ("A minimum balance needs to be charged to this account.\n");
      } else {
        printf ("A minimum balance does not need to be charged to this account.\n");
      }
    } else {
      if (account_balance < 500) {
        printf ("A minimum balance needs to be charged to this account.\n");
      } else {
        printf ("A minimum balance does not need to be charged to this account.\n");
      }
    }
}