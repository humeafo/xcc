#include <stdio.h>
#include <stdlib.h>

int gcount = 0;

int inc_(int c) {
  gcount += c;
  if( c % 2 == 0 ) {
    printf("gcount: %d\n", gcount);
  } else if( c % 1111 == 0 ) {
    exit(-2);   
  }
  return gcount + c;
}

void usage() {
  printf("Usage: <> [count]\n");
}

int main(int argc, char* argv[]) {
  if( argc < 2 ) {
    usage();
    exit(-1);
  }

  int cnt = strtol(argv[1], 0, 0);
  for( int i = 0; i < cnt; ++i) {
    int n = inc_(i);
    printf("return value is: %d\n", n);
  }
  return 0;
}
