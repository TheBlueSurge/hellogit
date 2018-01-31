#ifdef CLASSROOM_H
#define CLASSROOM_H

        class Classroom{
                public:
                        Classroom(int a, string b);
                                void setAge(int a);
                                int getAge();
                                void setName(string b);
                                string getName();
                private:
                        int age;
                        string name;
};
#endif

