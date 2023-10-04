#pragma once

#include <Account.h>
#include <vector>
#include <string>

using std::string;
using std::vector;

class Accounts_data
{
public:
	Accounts_data()
	{
		count = 0;
	}

	inline int count_acc() { return count; }

	void add_acc(Account new_acc)
	{
		count++;
		data.push_back(new_acc);
	}

	bool containsLog(string login);
	int get_id_by_login(string login);
	int get_id_by_name(string name);


	bool containsName(string name);

	Account& operator[](int i) { return data[i]; }

protected:
	int count; // counter of accs
	vector<Account> data;
};

