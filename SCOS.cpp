#include <iostream>
using namespace std;

/*
prog: SCOS
by: Gio Rescigno (clone computers)
repo: LAB progaming
*/

int main() {


	string op;
	
	cout<<"welcome to SCOS"<<endl;
	cout<<"type help it you need help"<<endl;

	startPoint:

	cout<<"Operation: ";
	cin >> op;

	if (op == "help"){ //when you type "help" you can see all the commands

		cout<<"add"<<endl;
		cout<<"sub"<<endl;
		cout<<"dev"<<endl;
		cout<<"mul"<<endl;
		cout<<"pro"<<endl;
		cout<<"exp"<<endl;
		cout<<"exit"<<endl;

		goto startPoint;
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

		goto startPoint;
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

		goto startPoint;
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

		goto startPoint;


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

		goto startPoint;


	}
	else if(op == "exp"){//expnets

		string eop;

		cout<< "-------------------------------------------------"<<endl;;
		
		estart:

		cout<< "exponent: ";
		cin >> eop;

		if (eop == "help"){

			cout<<"exp2"<<endl;
			cout<<"exp"<<endl;
			cout<<"exit"<<endl;

			goto estart;
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

			goto estart; 
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

			goto estart;
		}
		else if(eop == "exit"){

			goto startPoint;
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
        
	}
	else if(op == "exit"){//exit the prgram

		return 0;
	}



	goto startPoint;
}  