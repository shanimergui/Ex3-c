#include <stdio.h>
#include "txtfind.h"

int main(int argc, char const *argv[]) {

  char w[WORD];
  getword(w);
  char c=getchar();

  switch (c) {
    case 'a':
      print_lines(w);
      //looking for the word cat
      //the program should print also cats
      //and crat and lcat but it shouldn’t
    case 'b':
      print_similar_words(w);
      //cat cats caats lcat
    default:
      break;
  }
  return 0;
}
