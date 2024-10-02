#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LENGTH 100


struct Student
{
    char student_id[MAX_LENGTH];
    char name[MAX_LENGTH];
    float grade;
};

void addStudent(struct Student students[], int *count)
{
    struct Student newStudent;

    printf("Input Enter Student ID: ");
    fgets(newStudent.student_id, sizeof(newStudent.student_id), stdin);
    newStudent.student_id[strcspn(newStudent.student_id, "\n")] = '\0'; 

    printf("Input Name: ");
    fgets(newStudent.name, sizeof(newStudent.name), stdin);
    newStudent.name[strcspn(newStudent.name, "\n")] = '\0'; 

    printf("Input Grade: ");
    scanf("%f", &newStudent.grade);
    getchar(); 

    
    students[*count] = newStudent;
    (*count)++;
}

void editStudent(struct Student students[], int count)
{
    char searchID[MAX_LENGTH];
    printf("Input the Student ID to edit: ");
    fgets(searchID, sizeof(searchID), stdin);
    searchID[strcspn(searchID, "\n")] = '\0'; 

    int foundIndex = -1;
    for (int i = 0; i < count; i++)
    {
        if (strcmp(students[i].student_id, searchID) == 0)
        {
            foundIndex = i;
            break;
        }
    }

    if (foundIndex == -1)
    {
        printf("Student not found.\n");
    }
    else
    {
        printf("Input new Student ID: ");
        fgets(students[foundIndex].student_id, sizeof(students[foundIndex].student_id), stdin);
        students[foundIndex].student_id[strcspn(students[foundIndex].student_id, "\n")] = '\0'; 

        printf("Input new Name: ");
        fgets(students[foundIndex].name, sizeof(students[foundIndex].name), stdin);
        students[foundIndex].name[strcspn(students[foundIndex].name, "\n")] = '\0'; 

        printf("Input new Grade: ");
        scanf("%f", &students[foundIndex].grade);
        getchar(); 

        printf("Student data updated successfully.\n");
    }
}

void deleteStudent(struct Student students[], int *count)
{
    char searchID[MAX_LENGTH];
    printf("Input the Student ID to delete: ");
    fgets(searchID, sizeof(searchID), stdin);
    searchID[strcspn(searchID, "\n")] = '\0'; 

    int foundIndex = -1;
    for (int i = 0; i < *count; i++)
    {
        if (strcmp(students[i].student_id, searchID) == 0)
        {
            foundIndex = i;
            break;
        }
    }

    if (foundIndex == -1)
    {
        printf("Student not found.\n");
    }
    else
    {
       
        for (int i = foundIndex; i < *count - 1; i++)
        {
            students[i] = students[i + 1];
        }

        (*count)--;
        printf("Student data was deleted.\n");
    }
}

void searchStudent(struct Student students[], int count)
{
    char keyword[MAX_LENGTH];
    int found = 0;

    printf("Input the student name or ID to search: ");
    fgets(keyword, sizeof(keyword), stdin);
    keyword[strcspn(keyword, "\n")] = '\0';

    printf("\nSearch Results:\n");

    
    for (int i = 0; i < count; i++)
    {
        if (strcmp(students[i].name, keyword) == 0)
        {
            printf("Student ID: %s, Name: %s, Grade: %.2f\n",
                   students[i].student_id, students[i].name, students[i].grade);
            found = 1;
        }
    }


    for (int i = 0; i < count; i++)
    {
        if (strcmp(students[i].student_id, keyword) == 0)
        {
            printf("Student ID: %s, Name: %s, Grade: %.2f\n",
                   students[i].student_id, students[i].name, students[i].grade);
            found = 1;
        }
    }

    if (!found)
    {
        printf("No matching student found.\n");
    }
}

void saveDataToCSV(struct Student students[], int count)
{
    FILE *file = fopen("data.csv", "w");
    if (file == NULL)
    {
        printf("Gagal membuka file.\n");
        return;
    }

    for (int i = 0; i < count; i++)
    {
        fprintf(file, "%s;%s;%.2f\n", students[i].student_id, students[i].name, students[i].grade);
    }

    fclose(file);

    printf("Data saved to data.csv\n");
}

void printStudents(struct Student students[], int count)
{
    
    printf("\nStudents Data:\n");
    for (int i = 0; i < count; i++)
    {
        printf("Student ID: %s, Name: %s, Grade: %.2f\n",
               students[i].student_id, students[i].name, students[i].grade);
    }
}

void sortByGrade(struct Student students[], int count)
{
    int i, j;
    struct Student temp;

    for (i = 0; i < count - 1; i++)
    {
        for (j = 0; j < count - i - 1; j++)
        {
            if (students[j].grade > students[j + 1].grade)
            {
                
                temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
}

void sortByStudentID(struct Student students[], int count)
{
    int i, j;
    struct Student temp;

    for (i = 0; i < count - 1; i++)
    {
        for (j = 0; j < count - i - 1; j++)
        {
            if (strcmp(students[j].student_id, students[j + 1].student_id) > 0)
            {
                temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
}


int main()
{
    FILE *file;
    char line[MAX_LENGTH];
    struct Student students[MAX_LENGTH];
    int count = 0;
    int option = 0;

    
    file = fopen("data.csv", "r");
    if (file == NULL)
    {
        printf("Error when opening the file. \n");
        return 1;
    }
	fseek(file, 3, SEEK_SET);
    while (fgets(line, sizeof(line), file))
    {
       
        char *token = strtok(line, ";");
        int i = 0;
        struct Student student;

        while (token != NULL)
        {
            
            if (i == 0)
            {
                strcpy(student.student_id, token);
            }
            else if (i == 1)
            {
                strcpy(student.name, token);
            }
            else if (i == 2)
            {
                student.grade = atof(token);
            }

            token = strtok(NULL, ";");
            i++;
        }

       
        students[count] = student;
        count++;
    }

    
    fclose(file);

    printStudents(students, count);

    while (option != 5)
    {
        printf("\nOptions:\n");
        printf("1. Add a new student\n");
        printf("2. Edit student data\n");
        printf("3. Delete student data\n");
        printf("4. Search Student\n");
        printf("5. Save & Exit\n");
        printf("6. Sorting by grade\n");
        printf("7. Sorting by student id\n");
        printf("Enter your choice: ");
        scanf("%d", &option);
        getchar(); 

        switch (option)
        {
        case 1:
            addStudent(students, &count);
            printStudents(students, count);
            break;
        case 2:
            editStudent(students, count);
            printStudents(students, count);
            break;
        case 3:
            deleteStudent(students, &count);
            printStudents(students, count);
            break;
        case 4:
            searchStudent(students, count);
            break;
        case 5:
            saveDataToCSV(students, count);
            printf("Exiting program.\n");
            break;
        case 6:
        	sortByGrade(students, count);
        	printStudents(students, count);
            break;
         case 7:
            sortByStudentID(students, count);
            printStudents(students, count);
            break;
        default:
            printf("Invalid option. Please try again.\n");
            break;
        }
    }

    return 0;
}