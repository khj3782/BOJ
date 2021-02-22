#include <stdio.h>
#include <vector>

#define MAX 10

using namespace std;

class Lucky{
	private:
		char array[MAX]{0};
		bool check[MAX]{0};
		vector<char> v;
		int lucky;
		int len;
	public:
		Lucky(){lucky=0;}
		bool isLucky();
		int getLuck();
		void setLen(int length);
		void setArray(int index, char value);
		void per(int cnt);
};

bool Lucky::isLucky(){
	for(int i = 0; i < v.size()-1; i++){
		if(v[i] == v[i+1]) return false;
	}
	return true;
}

int Lucky::getLuck(){
	return lucky;
}

void Lucky::setLen(int length){
	len = length;
}

void Lucky::setArray(int index, char value){
	array[index] = value;
}

void Lucky::per(int cnt){
	if(cnt == len) {
		if(isLucky()) lucky++;
		return;
	}
	for(int i = 0; i < len; i++){
		if(check[i]) continue;
		check[i] = true;
		v.push_back(array[i]);
		per(cnt+1);
		v.pop_back();
		check[i] = false;
	}
}

int factorial(int num){
	int temp = 1;
	for(int i = 1; i <= num; i++) temp *= i;
	return temp;
}

int main(){
	Lucky luck;
	int len{0};
	int alpha[26]{0};
	char array[MAX]{0};
	scanf("%s", array);
	for(int i = 0; i < MAX; i++){
		if(array[i]==0) break;
		else {
			len++;
			luck.setArray(i, array[i]);
			alpha[array[i]-'a']++;
		}
	}
	luck.setLen(len);
	luck.per(0);
	int temp = luck.getLuck();
	for(int i = 0; i < 26; i++) temp /= factorial(alpha[i]);
	printf("%d\n", temp);
	return 0;
}