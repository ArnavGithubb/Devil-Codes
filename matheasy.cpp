#include<iostream>
using namespace std;

int main(){
	int n1;
	cout<< " Enter the first Number: "<<endl;
	cin>>n1;
	int n2;
	std::cout << " Enter the second Number " << std::endl;
	cin>>n2;
	char op;
    std::cout << " Enter the operator " << std::endl;
    std::cin >> op;
    switch(op){
        case '+':
          std::cout << n1+n2 << std::endl;
          break;
        case '*':
             std::cout << n1*n2 << std::endl;
             break;
       
        case '/':
             std::cout << n1/n2 << std::endl;
             break;
        case '-':
             std::cout << n1-n2 << std::endl;
             break;
        default:
            std::cout << "Sorry,I dont know this operator" << std::endl;
            break;
            }
	return 0;
}
