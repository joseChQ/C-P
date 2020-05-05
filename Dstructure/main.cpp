#include<iostream>
#define SSIZE 111111111
//Fenwick Tree SUM
int bit[SSIZE];
void add(int idx, int delta) {
    for (; idx < n; idx = idx | (idx + 1))
        bit[idx] += delta;
}
int sum(int r) {
    int ret = 0;
    for (; r >= 0; r = (r & (r + 1)) - 1)
    ret += bit[r];
    return ret;
}
int main()
{
	return 0;
}