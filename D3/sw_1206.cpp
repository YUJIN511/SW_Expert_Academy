#include<iostream>
#include<cstdio>
#include<algorithm>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	
	freopen("input.txt", "r", stdin);
	for (int input = 0; input < 10; input++) {

		int arr[1001];
		int L_max, R_max;
		int count = 0;
		int temp = 4;

		cin >> T;
		/*
		   여러 개의 테스트 케이스가 주어지므로, 각각을 처리합니다.
		*/
		for (int i = 0; i < 4; i++) {
			cin >> arr[i];
		}

		for (test_case = 2; test_case < T - 2; test_case++)
		{
			cin >> arr[temp++];

			if (arr[test_case]) {
				L_max = max(arr[test_case - 1], arr[test_case - 2]);
				R_max = max(arr[test_case + 1], arr[test_case + 2]);
				if (arr[test_case] > L_max&& arr[test_case] > R_max) {

					count += arr[test_case] - max(L_max, R_max);
				}
			}
		}

		cout <<'#' << input+1<<' '<<count << endl;
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}
