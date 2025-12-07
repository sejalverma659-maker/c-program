#include <stdio.h>
#include <string.h>

#define MAX 20   // maximum contacts allowed

// Structure to store contact details
struct Contact {
    char name[50];
    char phone[20];
};

// Function prototypes
void addContact(struct Contact contacts[], int *count);
void viewContacts(struct Contact contacts[], int count);
void searchContact(struct Contact contacts[], int count);

int main() {
    struct Contact contacts[MAX];
    int count = 0;     // number of contacts stored
    int choice;

    while (1) {
        printf("\n====== CONTACT BOOK ======\n");
        printf("1. Add Contact\n");
        printf("2. View All Contacts\n");
        printf("3. Search Contact\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addContact(contacts, &count);
                break;

            case 2:
                viewContacts(contacts, count);
                break;

            case 3:
                searchContact(contacts, count);
                break;

            case 4:
                printf("Exiting Contact Book...\n");
                return 0;

            default:
                printf("Invalid choice! Try again.\n");
        }
    }
}

// Function to add a new contact
void addContact(struct Contact contacts[], int *count) {
    if (*count >= MAX) {
        printf("Contact Book is FULL!\n");
        return;
    }

    printf("\nEnter Name: ");
    scanf(" %[^\n]s", contacts[*count].name);

    printf("Enter Phone Number: ");
    scanf(" %[^\n]s", contacts[*count].phone);

    (*count)++;
    printf("Contact added successfully!\n");
}

// Function to view all contacts
void viewContacts(struct Contact contacts[], int count) {
    if (count == 0) {
        printf("\nNo contacts to display.\n");
        return;
    }

    printf("\n---- All Contacts ----\n");
    for (int i = 0; i < count; i++) {
        printf("%d. %s - %s\n", i + 1, contacts[i].name, contacts[i].phone);
    }
}

// Function to search a contact by name
void searchContact(struct Contact contacts[], int count) {
    char searchName[50];
    int found = 0;

    printf("\nEnter name to search: ");
    scanf(" %[^\n]s", searchName);

    for (int i = 0; i < count; i++) {
        if (strcmp(contacts[i].name, searchName) == 0) {
            printf("Contact Found!\n");
            printf("Name: %s\nPhone: %s\n", contacts[i].name, contacts[i].phone);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Contact Not Found!\n");
    }
}