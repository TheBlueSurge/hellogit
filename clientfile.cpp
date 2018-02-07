#include <iostream>
#include <stdlib.h>
#include <string>
#include <vector>
#include "Classroom.h"

using namespace std;


int main(){
			vector<Classroom> VecRoom;
			
			Classroom Stu1(23,"Fred");
			Classroom Stu2(23,"Fred");
			Classroom Stu3(23,"Fred");
			Classroom Stu4(23,"Fred");
				
			int age1, age2, age3, age4;
			string name1, name2, name3, name4, answer;
			
			age1 = 0;
			age2 = 0;
			age3 = 0;
			age4 = 0;
			
			cout << " You will now be prompted for student information" << endl;
		
			cout << "What is the name and age of your first student?" << endl;
				cin >> name1 >> age1;
				
				Stu1.setName(name1);
				Stu1.setAge(age1);
				
		
			cout << "What is the name and age of your second student?" << endl;
				cin >> name2 >> age2;
				
				Stu2.setName(name2);
				Stu2.setAge(age2);
			
			cout << "What is the name and age of your third student?" << endl;
				cin >> name3 >> age3;
				
				Stu3.setName(name3);
				Stu3.setAge(age3);
				
			
			cout << "What is the name and age age of your fourth student?" << endl;
				cin >> name4 >> age4;
				
				Stu4.setName(name4);
				Stu4.setAge(age4);
		
			
			VecRoom.push_back(Stu1);
			VecRoom.push_back(Stu2);
			VecRoom.push_back(Stu3);
			VecRoom.push_back(Stu4);
			
			cout << "Your vector has been saved" << endl;
			cout << "Would you like to print this vector? '(yes/no)' " << endl;
				cin >> answer;
				
			if(answer == "yes"){
				for(int i=0; i< VecRoom.size();i++){
					cout << "This student's age is:  " << VecRoom[i].getAge() << endl;
					cout << "This student's name is: " << VecRoom[i].getName() << endl;
					cout << endl;
					
				}
				cout << "Your vector has been printed. Goodbye" << endl;
				return 0;
				
			}
			
			else if(answer == "no"){
				cout << "Have a nice day" << endl;
				
				return 0;
			}
			
			else{
				cout << "Learn to read" << endl;
				
				return 0;
				}
				

}
