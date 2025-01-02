#include <iostream>
using namespace std;

void show(){
    cout<<"Welcome to Traffic Management System"<<endl;
    cout<<"Enter one of the options to continue:"<<endl;
    cout<<"1: Red"<<endl;
    cout<<"2: Yellow"<<endl;
    cout<<"3: Green"<<endl;
    cout<<"4: TO EXIT"<<endl;
 // edited code
  }
int showManage() {
    char choice;


    do {
        cout<<"Enter your choice:"<<endl;
    cin>>choice;
        switch(choice) {
            case '1':
                cout<<"Stop!"<<endl;
            break;
            case '2':
                cout<<"Stay Ready!"<<endl;
            break;
            case '3':
                cout<<"Go!"<<endl;
            break;
            case '4':
                cout<<"You Chose to exit, Goodbye!"<<endl;
            return 0;
            break;
            default:
                cout<<"Invalid Choice, Enter numbers from 1-4!"<<endl;
            break;
        }
    }while(choice!=4);

}
int main() {
    show();
    showManage();
    return 0;
}
