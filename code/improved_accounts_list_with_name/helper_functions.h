float net_balance(float account_balance, float minimum_balance_fee);
float get_account_balance();
char get_account_type();
void get_account_holder(char list_of_account_holders[][MAX_ACCOUNT_HOLDER_SIZE], int account_number);
int ask_to_exit();
void update_account_summary_information(int *total_number_of_accounts, float *total_amount_in_accounts, float account_balance);
void output_account_summary_to_file(int total_number_of_accounts, float total_amount_in_accounts, float total_minimum_balance_fees, int total_accounts_with_minimum_balance_fees);
void output_list_of_account_balances(
  char list_of_account_holders[][MAX_ACCOUNT_HOLDER_SIZE],
  float account_balances[][MAX_NUMBER_OF_ATTRIBUTES],
  int number_of_accounts);