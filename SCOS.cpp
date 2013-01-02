#include <iostream>
using namespace std;

/*
prog: SCOS
by: Gio Rescigno (clone computers)
repo: LAB progaming
*/

int main() {


	string op = "";
	
	cout<<"welcome to SCOS"<<endl;
	cout<<"type help it you need help"<<endl;

	
	while(op != "exit") {
		cout<<"Operation: ";
		cin >> op;
		if (op == "help"){ //when you type "help" you can see all the commands

			cout<<"add"<<endl;
			cout<<"sub"<<endl;
			cout<<"dev"<<endl;
			cout<<"mul"<<endl;
			cout<<"pro"<<endl;
			cout<<"exp"<<endl;
			cout<<"fact"<<endl;
			cout<<"exit"<<endl; //i know some one some day will tell me this help menu does not help any one at all :)

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

			string eop = "";

			cout<< "-------------------------------------------------"<<endl;;
			
			while (eop != "exit")
			cout<< "exponent: ";
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
		else if(op == "fact"){ //factorial

			long num; //the number long is the number that is recording the input the only reson why this exists to show the equation at the end of the program
			long sum; //the sum is the output number !num

			cout<<"factorial"<<endl; 

			cout<<"number: ";
			cin >> num; //the number is read in 

			sum = !num; //math magic stuff

			cout << "!" << num << " = " << sum <<endl; //equartion of glory
			continue;

		}
	}

	// my email is clonecomputers1@gmail.com feel free to email me if this program gose to hell or if you want to talk to me i enjoy meeting new people

	return 0;
}  