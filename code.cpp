#include<iostream>
using namespace std;

int main(){
    // A basic calculator made in C++ using the switch case
    int num1,num2;
    cout<<"Enter the first number"<<endl;
    cin>>num1;
    cout<<"Enter the second number"<<endl;
    cin>>num2;

    char opera;
    cout<<"Choose which operation yoou want to perform"<<endl;
    cin>>opera;
    //conditiong using switch function starts
    switch(opera){

        case '+':cout<< "The sum of the two numbers is: " <<(num1+num2)<<endl;
                cout<<"Thank You"<<endl;
                break;
        case '-':cout<<"The difference of the two numbers is:"<<(num1-num2)<<endl;
                cout<<"Thank You"<<endl;
                break;
        case '*':cout<< "The product of the two numbers is: " <<(num1*num2)<<endl;
                cout<<"Thank You"<<endl;
                break;
        case '/':cout<< "The quotient of the two numbers is: " <<(num1/num2)<<endl;
                cout<<"Thank You"<<endl;
                break;
        case '%':cout<< "The modulo of the two numbers is: " <<(num1%num2)<<endl;
                cout<<"Thank You"<<endl;
                break;

        default:cout<<"Please enter a valid operation!"<<endl;
            break;


    }

}