#include<iostream>
using namespace std;

int main()
{
	int count[5] = {}; //Declare array count for counting A,B,C,D,F and initialize all element = 0
	int n = 1,i;
	char  grade;
	cout << "Please input grade of each student (A-F) or input 0 to exit.\n";
	do{
		cout << "Student [" <<n<< "]: ";
		cin >> grade; //The loop must be terminated when grade = '0'
		if(grade == 'A'){ // if grade is A
			count[0]++;
			n++;}
		else if(grade == 'B'){ // if grade is B
			//Do something
			count[1]++;
			n++;}
		else if(grade == 'C'){ // if grade is B
			//Do something
			count[2]++;
			n++;}
		else if(grade == 'D'){ // if grade is B
			//Do something
			count[3]++;
			n++;}
		else if(grade == 'F'){ // if grade is B
			//Do something
			count[4]++;
			n++;}
		else if(grade == '0')break;
		//and so on ... for grade = C, D, F	
		else{ // grade is wrong input
			//Do something
			cout << "Wrong input. Please input again.\n";
			}
	}while(true);
	i=n-1;
	cout << "In total "<<i<<" students.\n";
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";
	cout << "C = " << count[2] <<", ";
	cout << "D = " << count[3] <<", ";
	cout << "F = " << count[4] <<", ";
	//	and so on ... for grade = C, D, F	
	return 0;
}
