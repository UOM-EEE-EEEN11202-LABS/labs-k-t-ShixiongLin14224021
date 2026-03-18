#include <stdio.h>

int main(void) {
  // declare and initialize the email string here
  char my_email[] = "shixiong.lin@student.manchester.ac.uk";
  // calculate the length of the email string here (hint: use sizeof)
  int email_length = sizeof(my_email) - 1;
  //  declare an integer variable n here to store the user input
  int n;
  // ask the user to input an integer and store it in n
  printf("Enter an integer: ");
  // check if the character at index n of the email string is a vowel (a, e, i,
  // o, u)
  scanf("%d", &n);
  if (n < 0 || n >= email_length) {
    // print "error" if n is out of bounds of the email string
    printf("Error");
    return 1; // place as needed in the code. You can use more than once.
  }
  // print "Yes!" if it is a vowel, and "No!" if it is not a vowel
  if (my_email[n] == 'a' || my_email[n] == 'e' || my_email[n] == 'i' ||
      my_email[n] == 'o' || my_email[n] == 'u') {
    printf("Yes!");
    return 1; // place as needed in the code. You can use more than once.
  } else {
    // print "No!" if it is not a vowel
    printf("No!");
  } // place as needed in the code. You can use more than once.

  // Do not edit below here
  return 0;
}