#include <stdio.h>

int main(void) {
  double height = 0;
  printf("Enter height: ");
  scanf("%lf", &height);

  // Your code in this section
  // store my email address
  char email[] = "shixiong.lin@student.manchester.ac.uk";

  // values for cylinder volume
  double radius = 2.2;
  double pi = 3.14159;
  double volume = 0;

  // check for invalid height
  if (height < 0) {
    printf("Error");
    return 1;
  }

  // calculate the volume
  volume = pi * radius * radius * height;

  // Do not edit below here
  printf("%s\n", email);
  printf("Volume: %.2f\n", volume);
  return 0;
}