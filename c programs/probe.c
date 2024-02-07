#include <stdio.h>

#define SIZE 10

int keys[SIZE];
int values[SIZE];

int hash(int value) {
    return value % SIZE;
}

int main() {
    for (int i = 0; i < SIZE; i++) {
        keys[i] = -1;
        values[i] = -1;
    }

    int value, index;

    for (int i = 0; i < SIZE; i++) {
        printf("Enter a value: ");
        scanf("%d", &value);

        int key = hash(value);

        index = key;

        while (keys[index] != -1) {
            // Collision occurred, move to the next slot linearly
            index = (index + 1) % SIZE;
        }

        keys[index] = key;
        values[index] = value;
    }

    // Print the resulting hash table with indexes
    printf("Hash Table:\n");
    for (int i = 0; i < SIZE; i++) {
        if (keys[i] != -1) {
            printf("Index: %d, Value: %d, Key: %d\n", i, values[i],keys[i] );
        }
    }

    return 0;
}
