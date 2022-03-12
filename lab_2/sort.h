#ifndef SORT_H_INCLUDED
#define SORT_H_INCLUDED
typedef int datatype;
void SortBubble(int *arr, int n, int first, int last);
void SortInsertion(int *arr, int n, int first, int last);
void SortSelection(int *arr, int n, int first, int last);
void swap(int &a, int &b);
void show(int *arr, int f, int l);
#endif