#include <bits/stdc++.h>
using namespace std;
struct student {
    int number;
    int score;
//    bool operator< (student s) const{
//	if(score==s.score){
//		return number < s.number;
//	}else{
//		return score < s.score;
//	}
	//} 
};
const int maxn = 100;

student arr[maxn];

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d%d", &arr[i].number, &arr[i].score);
    }
    sort(arr, arr + n); 
    for (int i = 0; i < n; i++) {
        printf("%d %d\n", arr[i].number, arr[i].score);
    }
    return 0;
}
