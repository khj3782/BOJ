#include <iostream>
#include <string>
using namespace std;

bool wrongInput(string card){
	if(card[0] == '0') return true;
	else{
		for(int i = 1; i < card.length(); i++){
			if(card[i] == '0' && card[i-1] > '3') return true;
			else if(card[i] == '0' && card[i-1] == '0') return true;
		}
		return false;
	}
}

int count(string card){
	int arr[card.length()+1];
	if(wrongInput(card)) return 0;
	else{
		arr[0] = 1;
		arr[1] = 1;
		for(int i = 1; i < card.length(); i++){
			if(card[i] == '0') arr[i+1] = arr[i-1];
			else if(stoi(card.substr(i-1, 2)) < 35 && card[i-1] != '0') arr[i+1] = arr[i] + arr[i-1];
			else arr[i+1] = arr[i];
		}
		return arr[card.length()];
	}
}

int main(){
	int cnt{0};
	string card;
	cin >> card;

	cnt = count(card);

	cout << cnt << '\n';
	
	return 0;
}