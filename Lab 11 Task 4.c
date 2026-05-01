#include <stdio.h>
#include <string.h>

struct Patient {
    char name[50];
    int age;
    char bloodType[5];
    int patientID;
    char diagnosis[100];
};

void displayAll(struct Patient p[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%s %d %s %d %s\n",
               p[i].name,
               p[i].age,
               p[i].bloodType,
               p[i].patientID,
               p[i].diagnosis);
    }
}

void searchByID(struct Patient p[], int n, int id) {
    int i;
    for (i = 0; i < n; i++) {
        if (p[i].patientID == id) {
            printf("%s %d %s %d %s\n",
                   p[i].name,
                   p[i].age,
                   p[i].bloodType,
                   p[i].patientID,
                   p[i].diagnosis);
            return;
        }
    }
    printf("Patient not found\n");
}

int main() {
    struct Patient p[5];
    int i, id;

    for (i = 0; i < 5; i++) {
        printf("Enter name: ");
        scanf("%s", p[i].name);
        printf("Enter age: ");
        scanf("%d", &p[i].age);
        printf("Enter blood type: ");
        scanf("%s", p[i].bloodType);
        printf("Enter patient ID: ");
        scanf("%d", &p[i].patientID);
        printf("Enter diagnosis: ");
        getchar();
        fgets(p[i].diagnosis, sizeof(p[i].diagnosis), stdin);
    } 

    displayAll(p, 5);
    printf("Enter ID to search: ");
    scanf("%d", &id);
    searchByID(p, 5, id);

    return 0;
}
