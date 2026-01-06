#include <stdio.h>
#include <string.h>

#define MAX 100

// Define item structure
typedef struct {
    char name[50];
    int quantity;
    float price;
} Item;

// Function to add an item
void addItem(Item inventory[], int *count) {
    if (*count >= MAX) {
        printf("Inventory full!\n");
        return;
    }
    printf("Enter item name: ");
    scanf("%s", inventory[*count].name);
    printf("Enter quantity: ");
    scanf("%d", &inventory[*count].quantity);
    printf("Enter price: ");
    scanf("%f", &inventory[*count].price);

    (*count)++;
    printf("Item added successfully!\n");
}

// Function to display all items
void displayItems(Item inventory[], int count) {
    if (count == 0) {
        printf("No items in inventory.\n");
        return;
    }

    printf("\n%-20s %-10s %-10s\n", "Item Name", "Quantity", "Price");
    for (int i = 0; i < count; i++) {
        printf("%-20s %-10d rupees %-10.2f\n",
               inventory[i].name, inventory[i].quantity, inventory[i].price);
    }
}

// Function to search for an item
void searchItem(Item inventory[], int count) {
    if (count == 0) {
        printf("Inventory is empty!\n");
        return;
    }

    char searchName[50];
    printf("Enter item name to search: ");
    scanf("%s", searchName);

    for (int i = 0; i < count; i++) {
        if (strcmp(inventory[i].name, searchName) == 0) {
            printf("Item found: %s, Quantity: %d, Price: $%.2f\n",
                   inventory[i].name, inventory[i].quantity, inventory[i].price);
            return;
        }
    }
    printf("Item not found!\n");
}

// MAIN MENU AT THE END
int main() {
    Item inventory[MAX];
    int choice, count = 0;

    do {
        printf("\n--- Inventory Management System ---\n");
        printf("1. Add Item\n");
        printf("2. Display Items\n");
        printf("3. Search Item\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addItem(inventory, &count);
                break;
            case 2:
                displayItems(inventory, count);
                break;
            case 3:
                searchItem(inventory, count);
                break;
            case 4:
                printf("exiting");
                break;
            default:
                printf("Invalid choice! Try again.\n");
        }
    } while (choice != 4);

    return 0;
}
