



#include <iostream>
using namespace std;

int main()
{
    char p;
    cout<<"Enter the Character Pattern which you want to print🤗"<<endl;
    std::cin >> p;
    int row,col;
    std::cout << " Enter The Number Of Rows " << std::endl;
    cin>>row;
    std::cout << " Enter The Number Of Columns " << std::endl;
    std::cin >> col;
    char s;
    cout<<"Enter The Structure Of pattern you Want too print"<<endl;
    std::cout << "Here are the options: " << std::endl;
    std::cout << "a-->for box pattern" << std::endl;
    std::cout << "b-->for spaced box pattern " << std::endl;
    std::cout << "c-->for inverted pyramid pattern" << std::endl;
    std::cout << "d--> for half pyramid after 180 rotation pattern" << std::endl;
    std::cout << "e--> for ButterFly pattern" << std::endl;
    std::cout << "f--> for rhombus pattern" << std::endl;
    cin>>s;
    switch(s){
        case 'a':
                     for(int i=1;i<=row;i++){
                          for(int j=1;j<=col;j++){
                            std::cout << p ;
                        }
                        cout << endl;
                     }  
                     break;
                   
        case 'b':
                      for(int i=1;i<=row;i++){
                                 for(int j=1;j<=col;j++){
                                    if(i==1 || i==row || j==1 || j==col){
                                           std::cout << p ;
                                   }
                                   else{
                                        std::cout << " " ;
                                   }
                            }
                           cout << endl;
                         }
                         break;
        case 'c':
                        for(int i=row;i>=1;i--){
                            for(int j=1;j<=i;j++){
                                cout<<p;
                            }
                            cout<<endl;
                        }
                        break;
    
        case 'd':
                        for(int i=1;i<=row;i++){
                            for(int j=1;j<=row;j++){
                                if(j<row-i){
                                    cout<< " ";
                                }
                                else{
                                    cout<<p;
                                }
                            }
                            cout<<endl;
                        }
                        break;
        case 'e':

                        for (int i = 1; i <= row; i++){
	                            for (int j = 1; j <= i; j++){
	                                    std::cout << p;

	                            }
                            	int space = 2 * row - 2 * i;
                                for (int j = 1; j <= space;j++){
                            	             cout << " ";
                                } 
                                for (int j = 1; j <= i; j++){
                            	             cout << p;
                                }
                            
                                cout << endl;
                                }
                                for (int i = row; i >= 1; i--){
                            	       for (int j = 1; j <= i; j++){
                            	              cout << p;
                            	    }

	                                int space = 2 * row - 2 * i;
	                                for (int j = 1; j <= space; j++){
                            	              cout << " ";
                            
                            	    }
                                	for (int j = 1; j <= i; j++){
                                	      cout << p;
                                	}
	                                      cout << endl;
	                                }
                                       break;
                               
            
        case 'f':
                        for(int i=1;i<=row;i++){
                                 for(int j=1;j<=row+1-i;j++){
                                      std::cout << " ";
            
                            }
                            for(int j=1;j<=row;j++){
                                     cout<<"*";
                            }
                            cout<<endl;
                            }   
                            break;
    }    
    
    return 0;
}
