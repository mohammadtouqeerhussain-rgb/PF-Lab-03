#include <stdio.h>
#include <string.h>

struct Department {
    char deptCode[10];
    char deptName[50];
};

struct Course {
    char courseCode[10];
    char courseName[60];
    int creditHours;
    struct Department dept;
};

void printByDepartment(struct Course c[], int n, char *code) {
    printf("\n--- Courses in Department [%s] ---\n", code);
    int found = 0;
    int i;
    for (i = 0; i < n; i++) {
        if (strcmp(c[i].dept.deptCode, code) == 0) {
            printf("%s | %s | %d Credits | Dept: %s\n",
                   c[i].courseCode,
                   c[i].courseName,
                   c[i].creditHours,
                   c[i].dept.deptName);
            found = 1;
        }
    }
    if (!found) {
        printf("No courses found for department code: %s\n", code);
    }
}

void clearBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

/* Remove trailing newline from fgets */
void stripNewline(char *str) {
    int len = strlen(str);
    if (len > 0 && str[len - 1] == '\n')
        str[len - 1] = '\0';
}

int main() {
    struct Course catalog[3];
    int i;

    printf("Enter details for 3 courses:\n");
    for (i = 0; i < 3; i++) {
        printf("\n--- Course %d ---\n", i + 1);

        printf("Course Code: ");
        if (i == 0) clearBuffer();  // Clear initial garbage only once
        fgets(catalog[i].courseCode, sizeof(catalog[i].courseCode), stdin);
        stripNewline(catalog[i].courseCode);

        printf("Course Name: ");
        fgets(catalog[i].courseName, sizeof(catalog[i].courseName), stdin);
        stripNewline(catalog[i].courseName);

        printf("Credit Hours: ");
        scanf("%d", &catalog[i].creditHours);
        clearBuffer();  // MUST clear after scanf!

        printf("Department Code: ");
        fgets(catalog[i].dept.deptCode, sizeof(catalog[i].dept.deptCode), stdin);
        stripNewline(catalog[i].dept.deptCode);

        printf("Department Name: ");
        fgets(catalog[i].dept.deptName, sizeof(catalog[i].dept.deptName), stdin);
        stripNewline(catalog[i].dept.deptName);
    }

    printf("\n========== Full Course Catalog ==========\n");
    for (i = 0; i < 3; i++) {
        printf("Course: %s (%s)\n", catalog[i].courseName, catalog[i].courseCode);
        printf("  Credits: %d\n", catalog[i].creditHours);
        printf("  Dept   : %s - %s\n\n",
               catalog[i].dept.deptCode,
               catalog[i].dept.deptName);
    }

    char targetDept[10];
    printf("Enter department code to filter: ");
    fgets(targetDept, sizeof(targetDept), stdin);
    stripNewline(targetDept);

    printByDepartment(catalog, 3, targetDept);

    return 0;
}
