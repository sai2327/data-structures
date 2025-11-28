#include<stdio.h>
#include<stdlib.h>
struct employee{
	int age;
	int salary;
	char* job_type;
};
void Manager(){
	struct employee manager;
	manager.age=40;
	printf("%d\n",manager.age);
}
int main(){
	struct employee emp1,emp2;
	emp1.age=25;
	emp2.age=27;
	Manager();
	printf("%d %d",emp1.age,emp2.age);
}
