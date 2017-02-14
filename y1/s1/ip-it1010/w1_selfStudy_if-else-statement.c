#include <stdio.h>

int main(void) {
	int mc, ip, ics, ls;
	char *mc_status, *ip_status, *ics_status, *ls_status;
	char name[20], sid[20];

	printf("Student Name: ");			fgets(name, 20, stdin);
	printf("Student ID: ");				fgets(sid, 20, stdin);

	puts("\nPlease enter your marks for following subjects");
	printf("Mathematics for Computing: ");		scanf("%d", &mc);
	printf("Introduction to Programming: ");	scanf("%d", &ip);
	printf("Introduction to Computer Systems: ");	scanf("%d", &ics);
	printf("Language Skills: ");			scanf("%d", &ls);

	if (mc > 45)  {	mc_status  = "Pass"; } else { mc_status  = "Fail"; }
	if (ip > 45)  {	ip_status  = "Pass"; } else { ip_status  = "Fail"; }
	if (ics > 45) { ics_status = "Pass"; } else { ics_status = "Fail"; }
	if (ls > 45)  {	ls_status  = "Pass"; } else { ls_status  = "Fail"; }

	printf("\nFinal Results for Student %s (%s)\n", name, sid);
	printf("Mathematics for Computing: 		%s\n", mc_status);
	printf("Introduction to Programming: 		%s\n", ip_status);
	printf("Introduction to Computer Systems: 	%s\n", ics_status);
	printf("Language Skills: 			%s\n", ls_status);

	return 0;

}

/*
 * References:
 */

// char *str
// - http://www-ee.eng.hawaii.edu/~tep/EE160/Book/chap7/section2.1.4.html
// - http://www.c4learn.com/c-programming/assigning-string-integer-to-variable/

// fgets()
// - https://blog.udemy.com/fgets-in-c/
// - http://www.dummies.com/programming/c/how-to-use-the-fgets-function-for-text-input-in-c-programming/

// Logical Expressions
// - https://www.le.ac.uk/users/rjm1/cotter/page_36.htm
