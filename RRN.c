#include "RRN.h"

//1234567891

int rrn2(int _min, int _max)
{
  if(_min >= _max || _min>=2147483647 || _min<0 || _max<0) {
      fprintf(stderr, "Invalid agruments in rrn1(int,int) function\n");
      exit(EXIT_FAILURE); /* indicate failure.*/ }
  else {
      void *p = malloc(1);
      int P = (int)p;
      //operations
      //int count = 0;
      _min/=2;
      while(P<_min || P>_max) {
            P = P<_min? (P+_max) : (P/2);
            //count++;
      }
      //printf("%d",count);
      p = realloc(p,0);//free(p);
      return P; } };

int rrn1m(int _min)
{
  int _max = 2147483647;

  if(_min >= _max || _min>=2147483647 || _min<0 || _max<0) {
      fprintf(stderr, "Invalid agruments in rrn1(int,int) function\n");
      exit(EXIT_FAILURE); /* indicate failure.*/ }
  else {
      void *p = malloc(1);
      int P = (int)p;
      //operations
      //int count = 0;
      _min/=2;
      while(P<_min || P>_max) {
            P = P<_min? (P+_max) : (P/2);
            //count++;
      }
      //printf("%d",count);
      p = realloc(p,0);//free(p);
      return P; } };

int rrn1(int _max)
{
  int _min = 0;

  if(_min >= _max || _min>=2147483647 || _min<0 || _max<0) {
      fprintf(stderr, "Invalid agruments in rrn1(int,int) function\n");
      exit(EXIT_FAILURE); /* indicate failure.*/ }
  else {
      void *p = malloc(1);
      int P = (int)p;
      //operations
      //int count = 0;
      while(P<_min || P>_max) {
            P %= _max;
            //count++;
      }
      //printf("%d",count);
      p = realloc(p,0);//free(p);
      return P; } };

int rrn0()
{
  int _max = 2147483647;
  int _min = 0;

  if(_min >= _max || _min>=2147483647 || _min<0 || _max<0) {
      fprintf(stderr, "Invalid agruments in rrn1(int,int) function\n");
      exit(EXIT_FAILURE); /* indicate failure.*/ }
  else {
      void *p = malloc(1);
      int P = (int)p;
      //operations

      p = realloc(p,0);//free(p);
      return P; } };
