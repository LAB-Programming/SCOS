#include <iostream>
using namespace std;

/*
prog: SCOS
by: Gio Rescigno (clone computers)
repo: LAB progaming
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

				fop = " ";

				cout << ">: "; 
				cin >> fop;

				if(fop == "Coor"){

					long x;
					long y;
					long x2;
					long y2;
					long rise;
					long run;
					long yint;
					long sum;

					cout << "enter in the 1st Coordinate"<<endl;
					cout << "x: ";
					cin >> x;
					cout << "y: ";
					cin >> y;
					cout << "enter in the 2nd Coordinate" <<endl; //the first 
					cout << "x: ";
					cin >> x2;
					cout << "y: ";
					cin >> y2;

					if ((x > 0 || y > 0) && (x2 > 0 || y2 > 0)){ //this checks to see if the any of the Coordinates are negative

						run = (x - x2);
						rise = (y - y2);

						if (rise < 0){

							rise = (-rise);
						}
						else if (run < 0){

							run = (-run);
						}

						if (rise % run == 0){

							sum = (rise / run);
							cout << "your awnser is"<<endl;
							cout << "y = " << sum << "x" <<endl;

							
						}
						else {

							cout<<"y = "<< rise << "/" << run << "x" <<endl;

							
						}
					}
					if ((x < 0) && (y < 0) && (x2 < 0) && (y2 < 0)){

						x = (-x);
						y = (-y);
						x2 = (-x2);
						y2 = (-y2);

						run = (x - x2);
						rise = (y - y2);

						if (rise % run == 0){

							sum = (rise / run);
							cout << "your awnser is"<<endl;
							cout << "y = " << sum << "x" <<endl;

							
						}
						else {

							cout << "y = "<< rise << "/" << run << "x"<<endl;

							
							
						}
					}
				}
				else if (fop == "help"){

					cout << "slop" <<endl;
					cout << "Coor" <<endl;
					cout << "exit" <<endl;
				}
				else if (fop == "slop"){

					
					long x;
					long yinter;

					cout << "what is the y-intersept:"; //intakes y-intersept
					cin >> yinter;

					cout << "x:"; //take in the x time value
					cin >> x;

					cout << "y = " << x <<"x + " << yinter <<endl;

					long ac;
					long nac;

					ac = (yinter + x);

					nac = (yinter - x);

					cout << "(1, " << ac << ")" <<endl;
					cout << "(0, " << yinter << ")" <<endl;
					cout << "(-1, " << nac << ")" <<endl;

					
				}
			}
		}
	}

	/* my email is clonecomputers1@gmail.com feel free to email me if this program if there is a problem 
	 or if you want to talk to me i much enjoy meeting new people
	*/
	
	return 0;
}  