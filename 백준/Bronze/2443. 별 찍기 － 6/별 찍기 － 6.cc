#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include<iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <climits>

using namespace std;

void solve()
{
	int n;
	cin >> n;
	int index = 1;

	for (int i = 0; i < n; ++i)
	{

		for (int j = 0; j < i; ++j)
		{
			cout << " ";
		}

		for (int j = 0; j < 2 * n - index; ++j)
		{
			cout << "*";
		}
		cout << endl;
		index += 2;
	}
}

int main()
{
	FILE* stream;
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	//freopen_s(&stream, "input.txt", "rt", stdin);

	solve();

	return 0;
}