#ifndef SPLITBILL_H
#define SPLITBILL_H

#include <stdio.h>
#include <stdlib.h>

#define SUC 0
#define ERR -1

int main(void);
void tryAgain(void);
int getStarted(size_t *personCount, size_t *itemCount);
size_t askPrice(size_t i);
void showResult(size_t sum, size_t personCount);
void putLine(void);

#endif
