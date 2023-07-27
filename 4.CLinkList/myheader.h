#include <string.h>
#include <ctype.h>
#include <limits.h>   
#include <stdio.h>    
#include <stdlib.h>   
#include <math.h>     
#include <iostream>
using namespace std;

typedef int Status; 
#define OK 1
#define ERROR 0
#define INFEASIBLE -1
/*#define OVERFLOW -2 因为在math.h中已定义OVERFLOW的值为3,故去掉此行*/