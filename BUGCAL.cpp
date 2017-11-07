#include <iostream>
using namespace std;

int pow(int x,int y){
    int count = 0;
    int prod = 1;
    while (count < y){
        prod = prod * x;
        count++;
    }
    return(prod);
}
int main() {
	int totaltc,num1,num2,digitPlace,sum,digit,digitTemp;
	cin>>totaltc;
	//cout<<"Total Number of cases are"<<totaltc;
	int tcNum;
	tcNum = 1; // Test Case Number which is going going
	while(tcNum<=totaltc){
	    //cout<<"Test case number is "<<tcNum<<endl;
	    cin>>num1>>num2;
	    //cout<<"Number are"<<num1<<" "<<num2;
	    digitPlace = 0;
	    sum = 0;
	    while(num1>0 or num2>0){
	        //cout<<"Num1="<<num1<<endl;
	        //cout<<"Num2="<<num2<<endl;
	        digit = ((num1%10)+(num2%10))%10;
	        //cout<<"Digit is "<<digit<<endl;
	        //cout<<"Digit Place is"<<digitPlace<<endl;
	        digitTemp = ((pow(10,digitPlace))*digit);
	        
	        //cout<<"digitTemp is "<<digitTemp<<endl;
	        //cout<<"Initial Sum is "<<sum<<endl;
	        sum = sum + digitTemp;
	        //cout<<"SUm is "<<sum<<endl;
	        digitPlace++;
	        num1=num1/10;
	        num2=num2/10;
	    }
	    cout<<sum<<endl;
	    tcNum++;
	}
	
	return 0;
}
