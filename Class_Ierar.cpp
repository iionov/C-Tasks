
#include <iostream>
// Первый  класс
class Net_Utility
{
private:
public:
	Net_Utility() {};
	virtual ~Net_Utility() {};
	void vibor_metoda() {}
};
class Wireshark : public Net_Utility 
{
private:
	double login;
public:
	double password;
	Wireshark() {}
	~Wireshark() {}
};
class tcpdump : public Net_Utility
{
public:
	tcpdump() {}
	~tcpdump() {}

};
class connect : public tcpdump
{
private:
public:
	connect() {}
	~connect() {}
};

// Второй класс
class Analizator_Files
{
private:
public:
	Analizator_Files() {};
	virtual ~Analizator_Files() {};
	void analiz_binarnikov() {}
};
class Dump : public Analizator_Files
{
private:
	long data;
public:
	double code;
	Dump() {}
	~Dump() {}
};
class Statisticheskie : public Dump
{
public:
	Statisticheskie() {}
	~Statisticheskie() {}

};
class Dinamicheskie : public Dump
{
private:
public:
	Dinamicheskie() {}
	~Dinamicheskie() {}
	void Poisk_oshibok_v_kode() {}
};

int main()
{
	return 0;
}


