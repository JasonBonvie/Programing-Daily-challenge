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
			return 1; 
		}
	}
	return -1; 
};


int main()
{
	
	
	return 0;
}
