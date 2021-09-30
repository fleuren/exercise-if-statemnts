#include <iostream>
#include <string>
using namespace std;

int main(){
//Compound Conditions - Mark My Words
/*
int grade; 
cout << "Please input the student's grade (in %).";
cin >> grade;
if (grade >= 70){
	cout << "The grade boundary is A";
}else if((grade <= 69) && (grade >= 60)) {
	cout << "The grade boundary is B";

}else if((grade <= 59) && (grade >= 50)){
	cout << "The grade boundary is C";
}else if((grade <= 49) && (grade >= 40)){
	cout << "The grade boundary is D";

}else{
	cout << "The grade boundary is F";

}
*/
//Nested If - Musical Band
/*
bool musicalfriend = true;
string friendinstrument = "guitar";
string friendinstrument2 = "drums";
string instrumentinput;

cout << "Please choose between 'drums' or 'guitar'." << endl;
cin >> instrumentinput;

if (musicalfriend = true) {
	if ((friendinstrument == instrumentinput) || (friendinstrument2 == instrumentinput)){
		cout << "Friend can join the band";
	}else
		cout << "Friend must play either drums or guitar";
}else
	cout << "Non-musical friend cannot join the band";
*/

//Nested If - Passing Time
/*
	int timeInput;
	string cashInput;
	int timePredef = 15;
	string cashPredef = "yes";
	
cout << "How long will your friend take? (in minutes)" << endl;
	cin >> timeInput;
cout << "Do you have money, 'yes' or 'no'?" << endl;
	cin >> cashInput;
	
if (timeInput >= timePredef){
	if (cashPredef == cashInput){
	cout << "Go and buy coffee";
}else
	cout << "Go for a walk";
}else
	cout << "It might be best to just wait.";
*/

//Nested If - Earthquake (aka tsuki na naka-kape)	
double magnitude;

cout << "Please input a magnitude to be given a proper descriptor." << endl;
cin >> magnitude;

if (magnitude < 2.0){
	cout << "Descriptor: Micro";
}else if (magnitude >= 2.0 && (magnitude <= 2.9)){
	cout << "Descriptor: Very Minor";
}else if (magnitude >= 3.0 && (magnitude <= 3.9)){
	cout << "Descriptor: Minor";
}else if (magnitude >= 4.0 && (magnitude <= 4.9)){
	cout << "Descriptor: Light";
}else if (magnitude >= 5.0 && (magnitude <= 5.9)){
	cout << "Descriptor: Moderate";
}else if (magnitude >= 6.0 && (magnitude <= 6.9)){
	cout << "Descriptor: Strong";
}else if (magnitude >= 7.0 && (magnitude <= 7.9)){
	cout << "Descriptor: Major";
}else if (magnitude >= 8.0 && (magnitude <= 9.9)){
	cout << "Descriptor: Great";
}else{
	cout << "Descriptor: Meteoric";
}
return 0;
}


