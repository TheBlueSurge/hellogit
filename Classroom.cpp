#include "Classroom.h"
#include <string>
using namespace std;

		Classroom::Classroom(){
			
		}
		Classroom::Classroom(int a, string b){
					age = a;
					name = b;
				}
		void Classroom::setAge(int a){
					age = a;
				}
		int Classroom::getAge(){
					return age;
					}
		void Classroom::setName(string b){
					name = b;
					}
		string Classroom::getName(){
					return name;
		}
