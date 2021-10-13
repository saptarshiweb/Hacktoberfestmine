#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
const char pass[] = "0123456789!@#$%^&*abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
int string_length = sizeof(pass)-1;
int main()
{
    int len,choice;

    cout<<"\n-----------------------------\n";
    cout<<"  Random Password Generator\n";
    cout<<"-----------------------------\n\n";
    cout << "    1. Generate Password\n";
    cout << "    2. Exit";
    
    do{
        cout<<"\n\nPress 1 to Generate Password and key 2 to exit  : ";
        cin>>choice;

        if(choice==1)
        {
            cout<<"Enter the length of password: ";
            cin>>len;
            srand(time(0));
            cout<<"Generated password is: ";
            for(int i = 0; i < len; i++)
            cout << pass[rand() % string_length];
        }
        else if(choice==2)
        {
            cout<<"Thanks for visiting\nClosing the program....\n\n";
            return 0;
        }
        else{
            cout<<"Invalid choice\nTry Again......";
        }
    } while (1);
}