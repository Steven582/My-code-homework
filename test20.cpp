#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
struct data{
	string name;
	double balance;
	int date;
};

/*
bool istrue(data *customer,int j){
	if (customer[j].balance < customer[j+1].balance){
		return true;
	}else if (customer[j].balance == customer[j+1].balance){
		
		if (customer[j].date > customer[j+1].date){
			return true;
		}else if (customer[j].name < customer[j+1].name){
			return true;
		}
	}
	return false;
}
*/

bool cmp(const data& a,const data& b){
	if (a.balance != b.balance) return a.balance > b.balance;
	if (a.date != b.date) return a.date < b.date;
	return a.name < b.name;
}

int main()
{
	int n = 0;
	vector<data> customer;
	string name;
	
	while (cin>>name && name != "end"){
		double salary = 0.0;
		int date = 0;
		n++;
		cin>>salary>>date;
		customer.push_back({name,salary,date});
	}
	
/*
	for (int i=0;i<n-1;i++){
		for (int j=0;j<n-i-1;j++){
			if (istrue(p,j)){
				swap(customer[j],customer[j+1]);
			}
		}
	}
*/
	
	sort(customer.begin(), customer.end(),cmp);
	
	for (int i=0;i< customer.size();i++){
		cout<<customer[i].name<<endl;
	}
}
