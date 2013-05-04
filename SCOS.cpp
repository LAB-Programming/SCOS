#include <iostream>
using namespace std;

/*
 prog: SCOS
 by: Gio Rescigno (clone computers)
 repo: LAB progaming
 V: 2.7.8
 */

int add() {
	long x;
	long y;
	long sum;
            
	cout<<"addition"<<endl;
            
	cin >> x;
	cout <<"+";
	cin >> y;
            
	sum = (x + y);

	cout << x <<" + "<< y <<" = "<< sum <<endl;
	return 0;
}

int subtract() {
	long x;
	long y;
	long sum;
    
	cout<<"subtraction"<<endl;
    
	cin >> x;
	cout <<"-";
	cin >> y;
    
	sum = (x - y);
    
	cout << x <<" - "<< y <<" = "<< sum <<endl;
	return 0;
}
int mul() {

	 
	long x;
	long y;
	long sum;
    
	cout<<"Multiplication"<<endl;
    
	cin >> x;
	cout <<"*";
	cin >> y;
    
	sum = (x * y);
    
	cout << x <<" * "<< y <<" = "<< sum <<endl;
	return 0;
}
int dev(){
	long x;
	long y;
	long sum;
    
	cout<<"division"<<endl;
    
	cin >> x;
	cout <<"/";
	cin >> y;
    
	sum = (x / y);
    
	cout << x <<" / "<< y <<" = "<< sum <<endl;
	return 0;
}
int exp(){

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
            
			return 0;
		}
	}
}
int pro() {

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
    return 0;
}
int func() {

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
		else if(fop == "int"){

			long d; 
			long b;
			long m;
			long a;

			long x;
			long y;

			cout << "line 1 (y = Mx + B)" <<endl;
			cout << "M = ";
			cin >> m;
			cout << "B = ";
			cin >> b;

			cout << " "<<endl;

			cout << "lone 2 (y = Ax + D)" <<endl;
			cout << "A = ";
			cin >> a;
			cout << "D = ";
			cin >> d;

			x = ((d - b) / (m - a));
			y = ((m * x) + b);

			cout << "you lines intersect at";
			cout << " (" << x << ", " << y << ")" <<endl;


		}
		else if(fop == "help"){
            
			cout << "y=" <<endl;
			cout << "cor" <<endl;
			cout << "int" <<endl;
            
			continue;
		}	
	}

	return 0;

}
int geo(){

	string gop;

	cout << "-------------------------------------------------"<<endl;
	cout << "if you need help type 'help' " <<endl;

	while(gop != "exit"){
		cout << ">:";
		cin >> gop;

		if (gop == "help"){

			cout<<"squ"<<endl;
			cout<<"tri"<<endl;

		}
		else if (gop == "squ"){

			cout<<"square"<<endl<<endl;

			float bace;
			float higeth;
			float area;

			cout<<"type in bace: ";
			cin >> bace;

			cout<<"type in higeth: ";
			cin >> higeth;

			area = bace * higeth;

			cout << "area = " << area <<endl;

		}
		else if (gop == "tri"){

			float bace;
			float higeth;
			float area;

			cout<< "triangle"<<endl<<endl;

			cout<<"type in bace: ";
			cin >> bace;

			cout<<"type in higeth: ";
			cin >> higeth;

			area = bace * higeth / 2;

			cout << "area = " << area <<endl;
		}
	}
}

int main() {
    
    
	string op = "";
    
	cout<<"welcome to SCOS"<<endl; //the introduction
	cout<<"type 'help' it you need help"<<endl; //prompts the user to type help if they dont know the commands ro run this prog
    
    cout << "-------------------------------------------------"<<endl;
	while(op != "exit") {

		cout<<">:";
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
            add();
			continue; //not necessary but nice, same for all the other "continues"
		}
		else if(op == "sub"){//subtraction
            subtract();
			continue;
		}
		else if(op == "mul"){//Multiplication
           
            mul(); 
			continue;
		}
		else if(op == "dev"){//division
            
            dev();
            continue;
		}
		else if(op == "exp"){//expnets
            
            dev();
            continue;
        }	
		else if (op == "pro"){//dose porcentages
            
        	pro();
	        continue;
		}
		else if(op == "func"){//dose all kinds of fun stuff with lines with the equation y=mx+b soon there will be other shapes 
            
			func();
			continue;
		}
		else if(op == "geo"){

			geo();
			continue;
		}
		else if(op == "ping"){

			cout << "Pong!!!!"<<endl;//just for fun!!!!
			continue;
		}
	}
    
	/* my email is clonecomputers1@gmail.com feel free to email me if this program if there is a problem 
	 or if you want to talk to me i much enjoy meeting new people
     */
    
	return 0;
	
}
