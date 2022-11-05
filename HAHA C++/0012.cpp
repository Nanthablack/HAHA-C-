#include <iostream>
int main(){
	using namespace std;
	string chars;
	cin >> chars;
	int shapes = chars.size();
	// line 1
	for(int i=0; i<shapes; i++){
        if(i%3==0 || i%3==1){
            cout<<"..#.";
        }
		else if(i%3==2){
            cout<<"..*.";
    	}
	}
	cout<<"."<<endl;
	// line 2
	for(int i=0; i<shapes; i++){
		if(i%3==0 || i%3==1){
			cout<<".#.#";
		}
		else if(i%3==2){
			cout<<".*.*";
		}
	}
	cout<<"."<<endl;
	// line 3
	for(int i=0; i<shapes; i++){
		if(i%3==0){
			if(i>=3){
				cout<<"*."<<chars[i]<<".";
			}
			else
				cout<<"#."<<chars[i]<<".";
		}
		else if(i%3==1){
			cout<<"#."<<chars[i]<<".";
		}
		else if(i%3==2){
			cout<<"*."<<chars[i]<<".";
		}
	}
	if(shapes%3==0){
		cout<<"*"<<endl;
	}
	else{
		cout<<"#"<<endl;
	}
	// line 4
	for(int i=0; i<shapes; i++){
		if(i%3==0 || i%3==1){
			cout<<".#.#";
		}
		else if(i%3==2){
			cout<<".*.*";
		}
	}
	cout<<"."<<endl;
	// line 5
	for(int i=0; i<shapes; i++){
		if(i%3==0 || i%3==1){
			cout<<"..#.";
		}
		else if(i%3==2){
			cout<<"..*.";
		}
	}
	cout<<"."<<endl;
}