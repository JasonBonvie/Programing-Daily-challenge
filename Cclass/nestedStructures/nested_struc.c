#import <stdio.h>
#import <string.h>

struct employeeRank
{
	int level;
	float salary;
};

struct employee
{
	int id;
	char name[20];
	int JoinYear;
	struct employeeRank rank;
};

int SearchEmployee(struct employee EmployeeArray[], int N, struct employee key)
{
	int i;
	for(i = 0; i < N; i++)
	{
		if(EmployeeArray[i].id == key.id && strcmp(EmployeeArray[i].name, key.name) == 0 && 
		 EmployeeArray[i].JoinYear == key.JoinYear && EmployeeArray[i].rank.level == key.rank.level 
		 && EmployeeArray[i].rank.salary == key.rank.salary){
			return i; 
		}
	}
	return -1; 
};

int CountEmployee_Salary(struct employee EmployeeArray[], int N, float S1, float S2)
{
	int i;
	int count = 0; 

	for(i = 0; i < N; i++)
	{
		if(EmployeeArray[i].rank.salary >= S1 && EmployeeArray[i].rank.salary < S2 ){
			count++;
		}
	}
	return count;
};
int main()
{
	// Filling an array of employees with some random information 
	struct employeeRank r = {2,20000};
	struct employeeRank j = {2,30000};
	struct employee emp[5];

	// Employees 0 - 4
	emp[0].id = 1; 
	strcpy(emp[0].name, "joe");
	emp[0].JoinYear = 1999; 
	emp[0].rank = r; 

	emp[1].id = 1; 
	strcpy(emp[1].name, "josh");
	emp[1].JoinYear = 2000; 
	emp[1].rank = r; 
	
	emp[2].id = 1; 
	strcpy(emp[2].name, "joe");
	emp[2].JoinYear = 1999; 
	emp[2].rank = r;

	emp[3].id = 2; 
	strcpy(emp[3].name, "jason");
	emp[3].JoinYear = 1999; 
	emp[3].rank = j;  

	emp[4].id = 4; 
	strcpy(emp[4].name, "joe");
	emp[4].JoinYear = 1999;
	emp[4].rank = j;  

	// The employee that will b e the key 
	struct employee k; 
	k.id = 1; 
	strcpy(k.name, "joe");
	k.JoinYear = 1990; 
	k.rank = r;
	// print the index where the employee is found 
	printf("your returned value is:  %d\n", SearchEmployee(emp, 5, k) );
	// the salary range we are looking for 
	
	k.id = 2; 
	strcpy(k.name, "jason");
	k.JoinYear = 1999; 
	k.rank = j;
	printf("your returned value is:  %d\n", SearchEmployee(emp, 5, k) );

	float s1 = 25000;
	float s2 = 31000; 
	// prints the number of people in the specified salery range. 
	printf("The number of people with a salery between %f and %f is : %d \n", 
		s1,s2,CountEmployee_Salary(emp, 5, s1,s2));
 
	return 0;
}
