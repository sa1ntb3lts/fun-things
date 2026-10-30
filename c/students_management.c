#include <stdio.h>

#define GREEN_COLOR "\e[0;32m"
#define RESET_COLOR "\e[0;37m"

struct student {
	char name[20];
	int id;
};

int main() {
	int option = -1;
	
	do {		
		puts(GREEN_COLOR "--- MANAGER MENU ---" RESET_COLOR);
		puts("1. Add student.");
		puts("2. Delete student.");
		puts("3. Display all students.");
		puts("0. Leave.");
		puts("\nChoose an option: ");
		
		scanf("%d", &option);
		
		switch (option) {
			case 1:
				//read_student();
				break;
				
			case 2:
				//add_student();
				break;
			
			case 3:
				//display_students();
				break;
				
			case 0:
				break;
				
			default:
				puts("ERROR! Invalid input.");
				break;
		}
		
	} while (option != 0);

	return 0;
}
/*
void add_student() {
	// TODO: Implement read_student
}

void delete_student() {
	// TODO: Implement add_student
}

void display_students() {
	// TODO: Implement display_students
}
*/ 
