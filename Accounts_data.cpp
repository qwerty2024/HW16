#include "Accounts_data.h"

bool Accounts_data::containsLog(string login) //func for checking are loging already in use or no

{
	bool rezult = false;

	for (int i = 0; i < count; ++i)
	{
		if (data[i].get_login() == login)
		{
			rezult = true;
			break;
		}
	}
	return rezult;
}

bool Accounts_data::containsName(string name)
{
	bool rezult = false;

	for (int i = 0; i < count; ++i)
	{
		if (data[i].get_name() == name)
		{
			rezult = true;
			break;
		}
	}
	return rezult;
}

int Accounts_data::get_id_by_login(string login)
{
	for (int i = 0; i < count; ++i)
	{
		if (data[i].get_login() == login)
		{
			return i;
		}
	}

	return (-1);
}

int Accounts_data::get_id_by_name(string name)
{
	for (int i = 0; i < count; ++i)
	{
		if (data[i].get_name() == name)
		{
			return i;
		}
	}

	return (-1);
}
