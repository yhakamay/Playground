#ifndef PROCESS_PAYROLL_H
#define PROCESS_PAYROLL_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

#define PER_HOUR 1100
#define ADD_HOUR 30
#define TAX 0.08
#define LINE "\n>>>>>"

bool isdigit_s(char *s);
bool is_finished(char *s);
void get_started(void);
void put_result(size_t *hour);

#endif
