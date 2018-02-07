#ifndef CLASSROOM_H
#define CLASSROOM_H
#include <string>
using namespace std;


        class Classroom{
				private:
                       int age;
                       string name;
                public:
						Classroom();
                        Classroom(int a, string b);
                                void setAge(int a);
                                int getAge();
                                void setName(string b);
                                string getName();
      
};
#endif

