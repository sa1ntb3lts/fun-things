#include <stdio.h>

int main() {
	int option = -1;
	
	do {		
		puts("--- MANAGER MENU ---");
		puts("\n1. Add student.");
		puts("2. Delete student.");
		puts("3. Modify student.");
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
				//mod_student();
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

void mod_student() {
	// TODO: Implement mod_student
}
*/