#include <stdio.h>

void first(void) __attribute__ ((constructor));

/**
 * first - Prints a Sentence before the Main
 * function is Executed
 */
void first(void)
{
printf("I am a Full Stack Software Engineer,\n");
printf("I am building my porfolio!\n");
}

