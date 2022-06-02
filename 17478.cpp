// * ** * ** *** ** * ** *
// BJ Online Judge Project
// by hgstyler based on C++
// * ** * ** *** ** * ** *

// Question 17478, BJ Online Judge
// https://www.acmicpc.net/problem/17478

#include <iostream>
#include <string>
using namespace std;

void recursive(int n, int num) {
	string bar = "";
	int i = n;
	
	while (i--) {
		bar += "____";
	}
	
	cout << bar << "\"����Լ��� ������?\"\n";

	if (n == num) {
		cout << bar << "\"����Լ��� �ڱ� �ڽ��� ȣ���ϴ� �Լ����\"" << "\n";
	}
	else {
		cout << bar << "\"�� ����. �������� �� �� ����⿡ �̼��� ��� ������ ����� ������ �־���.\n";
		cout << bar << "���� ������� ��� �� ���ο��� ������ ������ �߰�, ��� �����Ӱ� ����� �־���.\n";
		cout << bar << "���� ���� ��κ� �ǾҴٰ� �ϳ�. �׷��� ��� ��, �� ���ο��� �� ���� ã�ƿͼ� ������.\"\n";
		recursive(n + 1, num);
	}
	cout << bar << "��� �亯�Ͽ���.\n";
	return;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int num;
	cin >> num;

	cout << "��� �� ��ǻ�Ͱ��а� �л��� ������ �������� ã�ư� ������.\n";
	recursive(0, num);
} // END