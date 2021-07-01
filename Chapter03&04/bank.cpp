#include <iostream>
using namespace std;

enum BankOption { EXIT, VIEW_BALANCE, DEPOSIT, WITHDRAW };

int main() {
  double balance{100.0};
  BankOption status = VIEW_BALANCE;
  cout << "Welcome to SMU Bank" << endl;

  do {
    int input;

    cout << "\n\nPlease select an option: " << endl;
    cout << "1. View Balance" << endl;
    cout << "2. Deposit" << endl;
    cout << "3. Withdraw" << endl;
    cout << "0. Exit" << endl;
    cout << "Choose an option: ";
    cin >> input;

    status = static_cast<BankOption>(input);

    double deposit{0};
    double withdraw{0};

    switch (status) {
      case EXIT:
        cout << "Good Bye!";
        break;

      case VIEW_BALANCE:
        cout << "Balance is $" << balance << endl;
        break;

      case DEPOSIT:
        cout << "How much would you like to deposit? $";
        cin >> deposit;
        balance += deposit;
        cout << "Thank you!" << endl;
        break;

      case WITHDRAW:
        cout << "How much would you like to withdraw? $";
        cin >> withdraw;
        if (withdraw > balance) {
          cout << "Cannot withdraw more than balance" << endl;
        } else {
          balance -= withdraw;
          cout << "Thank you!" << endl;
        }
        break;

      default:
        cout << "Incorrect Option. Please select a value between 0 - 3" << endl;
    }

  } while (status != EXIT);

  return 0;
}
