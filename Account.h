#pragma once

#include <Message.h>
#include <vector>
#include <string>
#include <iostream>

using std::string;
using std::vector;
using std::cout;
using std::endl;

class Account
{
public:
	Account() : _name(""), _login(""), _password(""), my_id(-1) {}

	string get_name() { return _name; }
	string get_login() { return _login; }
	string get_password() { return _password; }

	inline void set_name(string name) { _name = name; }
	inline void set_login(string login) { _login = login; }
	inline void set_password(string password) { _password = password; }
	inline void set_my_id(int id) { my_id = id; }

	void set_recv_mess(string mess, string name_sender);
	void set_send_mess(string mess, string name_recver);

	void print_all_send_massage();
	void print_all_recv_massage();


	inline bool is_empty_recv()
	{
		if (recv_mess.size() == 0)
			return true;
		else return false;
	}

	inline bool is_empty_send()
	{
		if (send_mess.size() == 0)
			return true;

		else return false;
	}

protected:
	int my_id;
	string _name;
	string _login;
	string _password;

	vector<Message> recv_mess;
	vector<Message> send_mess;
};

