#pragma once

#include <string>

using std::string;

class Message
{
public:
	Message(string mess, string name_send, string name_recv) : _mess(mess), _name_send(name_send), _name_recv(name_recv) {}

	string get_mess() { return _mess; }
	string get_name_send() { return _name_send; }
	string get_name_recv() { return _name_recv; }

private:
	string _mess;
	string _name_send;
	string _name_recv;
};
