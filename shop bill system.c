
#include <stdio.h>
#include <string.h>

struct list {
	int id;
	char itemName[30];
	int price;
};

// Create function to display bill
void display(struct list l[], int size, char cName[], char cAddress[], int paid) {
	int total = 0;
	printf("\n\n\n\n");
	printf("\t Mina Bazar \n");
	printf("\t------------\n");
	printf("\n");
	printf("Name : %s \t Address: %s \n", cName, cAddress);
	printf("\n");

	printf("ID\tItem Name\tPrice\n");
	printf("-------------------------------\n");

	for (int i = 0; i < size; i++) {
	printf("%d\t%s\t\t%d\n", l[i].id, l[i].itemName, l[i].price);
	total += l[i].price;
	}

	printf("\nTotal Bill : %d\n", total);
	printf("Paid	: %d\n", paid);

	if (paid >= total) {
	printf("Return	: %d\n", paid - total);
	} else {
	printf("Due	: %d\n", total - paid);
	}

	printf("\n\t Thanks for visiting \n");
	printf("\n\n");
}

int main() {
	printf("Hello........\n");

	char Name[30];
	char Address[30];
	int totalItems, paid;

	printf("Enter your name:\t");
	scanf("%s", Name);

	printf("Enter your Address: \t");
	scanf("%s", Address);

	printf("Enter total items: \t");
	scanf("%d", &totalItems);
	printf("\n");

	// Structure array
	struct list l[totalItems];

	// Insert items
	for (int i = 0; i < totalItems; i++) {
	l[i].id = (i + 1);
	printf("Enter %d item name: \t", i + 1);
	scanf("%s", l[i].itemName);
	printf("Enter price: \t");
	scanf("%d", &l[i].price);
	}

	// Customer payment
	printf("\nEnter amount paid: ");
	scanf("%d", &paid);

	// Call display function
	display(l, totalItems, Name, Address, paid);

	return 0;
}
