#include <stdio.h>
#include "dog.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

int main(void)
{
  struct Dog my_dog;

  my_dog.name = "Poppy";
  my_dog.age = 3.5;
  my_dog.owner = "Bob";
  print_dog(&my_dog);
  return (0);
}
