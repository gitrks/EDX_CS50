# include <stdio.h>
int  main() {
  /* code */
  int decks;
  puts("Enter the number of decks");
  scanf("%d",&decks);
  if (decks <1) {
    /* code */
    puts("that is not a valid number of decks");
    return 1;
  }
  printf("there are %d cards\n",(decks*52) );
  return 0;
}
