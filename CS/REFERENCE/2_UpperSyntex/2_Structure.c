#include <stdio.h>
#define scanf_s scanf

struct student {
  int id;
  char name[20]; // String
  int score;
  char grade;
};

int main() {
  struct student kim;

  kim.id = 1;
  
  printf("\nwhat is kim's full name? : ");
  scanf_s("%s", kim.name);

  printf("\nkim's score? : ");
  scanf_s("%d", &kim.score);

  if (kim.score >= 90) {
    kim.grade = 'A';
  }
  else if (kim.score >= 80) {
    kim.grade = 'B';
  }
  else {
    kim.grade = 'F';
  }
  // Assign a value to the string using the strcpy function

  // Print the value
  printf("\nKim's info - id: %d \t name : %s \t score : %d \t grade : %c", kim.id, kim.name, kim.score, kim.grade);

  return 0;
}