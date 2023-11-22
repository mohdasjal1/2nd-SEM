// ***********[METHOD 1 (my preference)]*********************************************************************************************

// #include <stdio.h>
// #include <string.h>
// struct StudentInfo
// {
//     char name[50];
//     int id;
//     float gpa;    
// }student[3];

// int main()
// {
    
//     strcpy(student[0].name, "Asjal Amir");
//     student[0].id = 7;
//     student[0].gpa = 2.8;

//     strcpy(student[1].name, "Usama");
//     student[1].id = 9;
//     student[1].gpa = 3.0;

//     strcpy(student[2].name, "Kazim Ahmad");
//     student[2].id = 8;
//     student[2].gpa = 2.7;

//     for (int i = 0; i < 3; i++)
//     {
//         printf("Name : %s\nID : %d\nGPA : %.2f\n\n",student[i].name, student[i].id, student[i].gpa);
//     }
    
//     return 0;
// }




// *************(METHOD 2)******************************************************************************************


// #include <stdio.h>
// #include <string.h>
// struct StudentInfo
// {
//     char name[50];
//     int id;
//     float gpa;    
// };



// int main()
// {
//     struct StudentInfo student[3];
//     strcpy(student[0].name, "Asjal Amir");
//     student[0].id = 7;
//     student[0].gpa = 2.8;

//     strcpy(student[1].name, "Usama");
//     student[1].id = 9;
//     student[1].gpa = 3.0;

//     strcpy(student[2].name, "Kazim Ahmad");
//     student[2].id = 8;
//     student[2].gpa = 2.7;

//     for (int i = 0; i < 3; i++)
//     {
//         printf("Name : %s\nID : %d\nGPA : %.2f\n\n",student[i].name, student[i].id, student[i].gpa);
//     }
        
//     return 0;
// }



// ***********(METHOD 3)*********************************************************************************************

// #include <stdio.h>
// #include <string.h>
// typedef struct 
// {
//     char name[50];
//     int id;
//     float gpa;    
// }StudentInfo;

// int main()
// {
//     StudentInfo student[3];
//     strcpy(student[0].name, "Asjal Amir");
//     student[0].id = 7;
//     student[0].gpa = 2.8;

//     strcpy(student[1].name, "Usama");
//     student[1].id = 9;
//     student[1].gpa = 3.0;

//     strcpy(student[2].name, "Kazim Ahmad");
//     student[2].id = 8;
//     student[2].gpa = 2.7;

//     for (int i = 0; i < 3; i++)
//     {
//         printf("Name : %s\nID : %d\nGPA : %.2f\n\n",student[i].name, student[i].id, student[i].gpa);
//     }
    
//     return 0;
// }

