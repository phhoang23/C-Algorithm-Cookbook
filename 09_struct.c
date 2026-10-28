#include <stdio.h>
#include <string.h>

#define MAX 100

typedef struct {
    char id[20];
    char name[60];
    float score1, score2, score3;
    float total;
} Student;

void calculateTotals(Student s[], int n) {
    int i;
    for (i = 0; i < n; i++)
        s[i].total = s[i].score1 + s[i].score2 + s[i].score3;
}

int findById(const Student s[], int n, const char target[]) {
    int i;
    for (i = 0; i < n; i++)
        if (strcmp(s[i].id, target) == 0) return i;
    return -1;
}

// Sort students by total descending.
void sortByTotalDescending(Student s[], int n) {
    int i, j;
    for (i = 0; i < n - 1; i++) {
        int best = i;
        for (j = i + 1; j < n; j++)
            if (s[j].total > s[best].total) best = j;

        if (best != i) {
            Student temp = s[i]; // Structs can be copied by assignment.
            s[i] = s[best];
            s[best] = temp;
        }
    }
}

int main(void) {
    Student s[MAX];
    int n, i;
    char target[20];

    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%19s", s[i].id);
        scanf(" %59[^\n]", s[i].name); // Reads a name with spaces.
        scanf("%f %f %f", &s[i].score1, &s[i].score2, &s[i].score3);
    }

    calculateTotals(s, n);
    sortByTotalDescending(s, n);

    for (i = 0; i < n; i++)
        printf("%s | %s | Total = %.2f\n", s[i].id, s[i].name, s[i].total);

    scanf("%19s", target);
    i = findById(s, n, target);
    if (i >= 0) printf("Found: %s, total %.2f\n", s[i].name, s[i].total);
    else printf("Not found\n");

    return 0;
}
