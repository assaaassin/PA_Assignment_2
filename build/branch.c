#include <stdio.h>
#include <iostream>
#include <map>
#include <vector>
std::map< char* , std::vector <int> > bias;
// std::string n = "";
// int total;
extern "C" {
void print(){
	for (std::map< char*, std::vector<int> >::iterator i = bias.begin(); i != bias.end(); i++){
		printf("Func Name: %s\n"
			, i->first);
		int taken = 0;
		for (int j=0; j<i->second.size(); j++){
			if (i->second[j]){
				taken += 1;
			}
		}
		float b = (float)taken / (float) i->second.size();
		printf("Bias: %f, Taken: %d, Total: %d\n", b, taken, i->second.size());
	}
}
void check(char* name, bool condition){
	if (condition)
		bias[name].push_back(condition);
	else
		bias[name].push_back(condition);

	// bias[name][1] += 1;
}
}