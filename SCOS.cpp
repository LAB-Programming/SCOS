#include <iostream>
using namespace std;

/*
 prog: SCOS
 by: Gio Rescigno (clone computers)
 repo: LAB progaming
 V: 2.7.8
 */

int main() {
    
    
	string op = "";
    
	cout<<"welcome to SCOS"<<endl; //the introduction
	cout<<"type help it you need help"<<endl; //prompts the user to type help if they dont know the commands ro runt this prog
    
    
	while(op != "exit") {
		cout<<">: ";
		cin >> op;
		if (op == "help"){ //when you type "help" you can see all the commands that you can use
            
			cout<<"add"<<endl;
			cout<<"sub"<<endl;
			cout<<"dev"<<endl;
			cout<<"mul"<<endl;
			cout<<"pro"<<endl;
			cout<<"exp"<<endl;
			cout<<"func"<<endl;
			cout<<"exit"<<endl;//i know some one some day will tell me this help menu does not help any one at all :)
            
			continue;
		}
		else if(op == "add"){//addition
            
			long x;
			long y;
			long sum;
            
			cout<<"addition"<<endl;
            
			cin >> x;
			cout <<"+";
			cin >> y;
            
			sum = (x + y);
            
			cout << x <<" + "<< y <<" = "<< sum <<endl;
            
			continue; //not necessary but nice, same for all the other "continues"
		}
		else if(op == "sub"){//subtraction
            
			long x;
			long y;
			long sum;
            
			cout<<"subtraction"<<endl;
            
			cin >> x;
			cout <<"-";
			cin >> y;
            
			sum = (x - y);
            
			cout << x <<" - "<< y <<" = "<< sum <<endl;
            
			continue;
		}
		else if(op == "mul"){//Multiplication
            
			long x;
			long y;
			long sum;
            
			cout<<"Multiplication"<<endl;
            
			cin >> x;
			cout <<"*";
			cin >> y;
            
			sum = (x * y);
            
			cout << x <<" * "<< y <<" = "<< sum <<endl;
            
			continue;
		}
		else if(op == "dev"){//division
            
			long x;
			long y;
			long sum;
            
			cout<<"division"<<endl;
            
			cin >> x;
			cout <<"/";
			cin >> y;
            
			sum = (x / y);
            
			cout << x <<" / "<< y <<" = "<< sum <<endl;
			continue;
		}
		else if(op == "exp"){//expnets
            
			string eop;  //to make shue that this is set to nothing
			eop = " ";
            
			cout<< "-------------------------------------------------"<<endl;
            
			while(eop != "exit"){
                
				cout << ">: ";
				cin >> eop;
                
				if (eop == "help"){
                    
					cout<<"exp2"<<endl;
					cout<<"exp"<<endl;
					cout<<"exit"<<endl;
                    
					;
				}
				else if(eop == "exp2"){
                    
					long in;
					long out;
					int i;
                    
					cout <<"Exponents"<<endl;
                    
					cout<<"squared: ";
					cin >> in;
                    
					i = 1;
                    
					while(i < 2){
                        
						i++;
						out = (in * in);
                        
					}
                    
					cout<< in << "^2 = " << out <<endl;
				}
                
				else if(eop == "exp"){
                    
					long x;
					long y;
					long ys;
					long xs;
                    
					cout <<"Exponents"<<endl;
                    
					cin >> x;
					cout << "power of: ";
					cin >> y;
                    
					xs = x;
					ys = y;
                    
					while (y > 1){
                        
						y--;
						x = (x * xs);
					}
                    
					cout << xs << "^" << ys << " = " << x <<endl;
                    
                    
				}
				else if(eop == "exit"){
                    
					continue;
				}
			}
		}
		else if (op == "pro"){
            
            
	        long a;
	        long b;
	        long out;
            
	        cout<< "percentage" <<endl;
            
	        cout <<"type in the whole: "; //take in the whole
	        cin >> b;
	        cout <<"type in the part: "; //take in the part
	        cin >> a;
            
	        a = (a * 100); //the part is muiltpluied by 100
	        out = (a / b); //part is / by the whole
            
	        cout << "%" << out << endl; //the awnser is printed
	        continue;
		}
		else if(op == "func"){
            
			string fop;
			fop = " ";
            
			cout << "-------------------------------------------------" <<endl;
            
            
			while(fop != "exit"){
                
				cout << ">:";
				cin >> fop;
                
				if(fop == "y=") {
                    
					int x1;
					int x2;
					int y1;
					int y2;
                    
					cout<< "cwardnit 1" <<endl;
					cout<< "x: ";
					cin >> x1;
					cout << "y: ";
					cin >> y1;
					cout<< "cwardnit 2" <<endl;
					cout<< "x: ";
					cin >> x2;
					cout << "y: ";
					cin >> y2;
                    
					int m;
					int x;
					int y;
                    
					x = (x1 - x2);
					y = (y1 - y2);
					m = (y / x);
                    
					int b;
                    
					b = (y1 - (m * x1));
                    
					if (y / x == 0 && y / x < 0){
                        
						cout << "y = " << m << "x + " << b <<endl;
					}
					else {
                        
						cout <<"y = (" << y << "/" << x << ")x + " << b <<endl; 
					}
                    
					continue;
				}
				else if(fop == "cor"){
                    
					int m;
					int b;
                    
					cout << "m = ";
					cin >> m;
					cout << "b = ";
					cin >> b;
                    
					cout << "y = " << m << "x + " << b <<endl;
                    
					int y1;
					int y2;
                    
					y1 = (b + m);
					y2 = (b - m);
                    
					cout << "(1, " << y1 << ") (0, " << b << ") (-1, " << y2 << ")" <<endl;
                    
				}
                
				else if(fop == "help"){
                    
					cout << "y="<<endl;
					cout << "cor" <<endl;
                    
					continue;
				}	
			}
		}
	}
    
	/* my email is clonecomputers1@gmail.com feel free to email me if this program if there is a problem 
	 or if you want to talk to me i much enjoy meeting new people
     */
    
	return 0;
}
