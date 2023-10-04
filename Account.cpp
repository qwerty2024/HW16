#include "Account.h"

void Account::set_recv_mess(string mess, string name_sender)
{
	Message tmp(mess, name_sender, _name);
	recv_mess.push_back(tmp);
}

void Account::set_send_mess(string mess, string name_recver)
{
	Message tmp(mess, _name, name_recver);
	send_mess.push_back(tmp);
}

void Account::print_all_send_massage()
{
	for (int i = 0; i < send_mess.size(); ++i)
	{
		cout << "Name recipient: " << send_mess[i].get_name_recv() << "  msg: " << send_mess[i].get_mess() << endl;
	}
}

void Account::print_all_recv_massage()
{
	for (int i = 0; i < recv_mess.size(); ++i)
	{
		cout << "Name sender: " << recv_mess[i].get_name_send() << "  msg: " << recv_mess[i].get_mess() << endl;
	}
}