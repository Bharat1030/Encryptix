#include <iostream>

using namespace std;

int main(){
    int num1;
    int num2;
    char operand;
    int result;

    cout<< "I am a calculator which can perform task like addition, subtraction, multiplication and division \n";

    cout<< "Enter first number = ";
    cin>> num1;
    cout<< "Enter second number = ";
    cin>> num2;
    cout<< "Enter the operand to perform the operation = ";
    cin>> operand;


    if (operand == '+')
    {
        result = num1+num2;
        cout<< result;
    }

   else if(operand == '-'){
        result = num1-num2;
        cout<< result;
    }

    else if(operand == '*'){
        result = num1*num2;
        cout<< result;
    }

    else if(operand == '/'){
        if(num2 != 0){
            result = num1/num2;
            cout<< result;
        }
        else{
            cout<<  "Enter a non zero number"<<endl;

        }
    }
    else{
        cout<<"Please enter a valid operand"<<endl;
    }

    return 0;
}