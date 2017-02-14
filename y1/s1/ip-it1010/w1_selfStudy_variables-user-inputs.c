#include <stdio.h>

int main() {
	int age;
	char fname[20], lname[20];

	printf("Firt name: ");
	scanf("%s", fname);

	printf("Last name: ");
	scanf("%s", lname);

	printf("Age: ");
	scanf("%d", &age);

	puts("");
	printf("Your name is %s %s and you're %d years old", fname, lname, age);
	puts("");
}
