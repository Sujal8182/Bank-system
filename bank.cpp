#include<iostream>
using namespace std;

class Bank{
    private:
    int accn;
    string accholder;
    long long balance;

    public:
    void set(int a, string n, long long b){
        accn = a;
        accholder = n;
        balance = b;
    }
    void get(){
        cout << "The account no : - "<< accn << endl;
        cout << "The account holder name : - "<< accholder << endl;
        cout << "The account balance : - "<< balance << endl;
    }
    double Balance() {
        return balance;
    }
    void deposit(){
        double deposit;
        cout << "How much cash do you wanna deposit : ";
        cin >> deposit;
        balance = balance + deposit;
        cout << "the current balance = "<< balance << endl;
    }
    void withdraw(){
        double withdraw;
        cout << "How much cash do you wanna withdraw : ";
        cin >> withdraw;
        balance = balance - withdraw;
        cout << "the current balance = "<< balance << endl;

    }
    void getBalance(){
        cout << "the current balance = "<< balance << endl;
    }
};

class sav : public Bank{
    public:
    double intrate;
    void calint() {
        cout << "Interest rate of this bank is 0.7% per annum" << endl;
        double balance = Balance();  
        intrate = balance * 0.007;
        cout << "Interest: " << intrate << endl;
    } 
};
class fix : public sav{
    public:

    double term;
    void calint() {  
        cout << "how many years of fixed amount : " << endl;
        cin >> term;
        double balance = Balance();  
        double interest = balance * 0.007 * term;
        
        cout << "The term is: " << term << " years" << endl;
        cout << "The interest on your fixed deposit is: " << interest << endl;
    }
} ;
int main()
{
    sav saving;;
    cout << "---- Saving accout ------" << endl;
    saving.set(786512, "Ankit sabariya", 50000);
    saving.get();
    sav checking;
    cout << "---- checking accout ------" << endl;
    checking.set(5555,"bhavik sirvi", 10000);
    checking.get();
    cout << "---- fixed accout ------" << endl;
    fix fixed;
    fixed.set(12345,"sujal soni",25000);
    fixed.get();
    int user1;
    cout << "which account you wanna proceed to : ";
    cin >> user1;

    if(user1 == 1){
        int user;
    do
    {
        cout << "Enter 1 to deposit" << endl;
        cout << "Enter 2 to withdraw" << endl;
        cout << "Enter 3 to get balance" << endl;
        cout << "Enter 4 to check Interest rate" << endl;
        cout << "Enter 5 to check Account Info" << endl;
        cout << "Enter 0 to exit" << endl;
        cout << "Enter the number to proceed : ";
        cin >> user;

        switch (user)
        {
        case 1:
            saving.deposit();
            break;
        case 2:
            saving.withdraw();
            break;
        case 3:
            saving.getBalance();
            break;
        case 4:
            saving.calint();
            break;
        case 5:
            saving.get();
        case 0:
            cout << "We are happy to bring our best";
            break;
        default:
            break;
        }
        } while (user != 0);
    }else if(user1 == 2){
        int user;
    do
    {
        cout << "Enter 1 to deposit" << endl;
        cout << "Enter 2 to withdraw" << endl;
        cout << "Enter 3 to display information" << endl;
        cout << "Enter 4 to check Interest rate" << endl;
        cout << "Enter 5 to check Account Info" << endl;
        cout << "Enter 0 to exit" << endl;
        cout << "Enter the number to proceed : ";
        cin >> user;

        switch (user)
        {
        case 1:
            checking.deposit();
            break;
        case 2:
            checking.withdraw();
            break;
        case 3:
            checking.get();
            break;
        case 4:
            checking.calint();
            break;
        case 5:
            checking.get();
            break;
        case 0:
            cout << "We are happy to bring our best";
            break;
        default:
            break;
        }
        } while (user != 0);
    }else if(user1 == 3){
        int user;
    do
    {
        cout << "Enter 1 to deposit" << endl;
        cout << "Enter 2 to withdraw" << endl;
        cout << "Enter 3 to display information" << endl;
        cout << "Enter 4 to check Interest rate" << endl;
        cout << "Enter 5 to check fixed deposit" << endl;
        cout << "Enter 6 to check Account Info" << endl;
        cout << "Enter 0 to exit" << endl;
        cout << "Enter the number to proceed : ";
        cin >> user;

        switch (user)
        {
        case 1:
            fixed.deposit();
            break;
        case 2:
            fixed.withdraw();
            break;
        case 3:
            fixed.get();
            break;
        case 4:
        fixed.sav::calint();
        break;
        case 5:
            fixed.calint();
        break;
        case 6:
            fixed.get();
            break;
        case 0:
            cout << "We are happy to bring our best";
            break;
        default:
            break;
        }
        } while (user != 0);
    }else{
        cout << "wrong input" << endl;
    }
}