#include<bits/stdc++.h>
using namespace std;
int main(){
    char input[128];
    cout<<"****************** Welcome To Chat Bot ******************\n";

    while (1)
    {
        gets(input);

        if(strcmp(input, "hi")==0){
            cout<<"Hello sir Welcome to the chat Bot\n";
        }
        if(strcmp(input,"how are you")==0){
            cout<<"I am fine ! what about you?\n";
        }
        if(strcmp(input,"what are you doing")==0){
            cout<<"I am learning something new\n";
        }
        if(strcmp(input,"sum")==0){
            cout<<"Give First Number: ";
            int num1;
            cin>>num1;
            cout<<"Give Second Number: ";
            int num2;
            cin>>num2;
            cout<<"The sum of "<<num1<<" + "<<num2<<" = "<<num1+num2<<"\n";
        }
        if(strcmp(input,"multiplication")==0){
            cout<<"Give First Number: ";
            int num1;
            cin>>num1;
            cout<<"Give Second Number: ";
            int num2;
            cin>>num2;
            cout<<"The multiplication of "<<num1<<" * "<<num2<<" = "<<num1*num2<<"\n";
        }
        if(strcmp(input,"divide")==0){
            cout<<"Give First Number: ";
            int num1;
            cin>>num1;
            cout<<"Give Second Number: ";
            int num2;
            cin>>num2;
            cout<<"The division of "<<num1<<" / "<<num2<<" = "<<num1/num2<<"\n";
        }
        if(strcmp(input,"substract")==0){
            cout<<"Give First Number: ";
            int num1;
            cin>>num1;
            cout<<"Give Second Number: ";
            int num2;
            cin>>num2;
            cout<<"The difference of "<<num1<<" - "<<num2<<" = "<<num1-num2<<"\n";
        }
        
        if(strcmp(input, "hello")==0){
            cout<<"Hello sir \n";
        }
        if(strcmp(input, "what is your name")==0){
            cout<<"sir i am Chat Bot\n"<<"feel free to ask\n";
        }
        if(strcmp(input, "bye")==0){
            cout<<"bye sir! good to see you \n";
            exit(0);
        }

    }
    
}
