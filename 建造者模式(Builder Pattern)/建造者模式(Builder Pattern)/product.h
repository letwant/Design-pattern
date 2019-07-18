#pragma once
#include <iostream>
using namespace std;

// µçÄÔ
class Computer
{
public:
	void SetCpu(string cpu) { m_strCpu = cpu; }
	void SetMainboard(string Mainboard) { m_strMainboard = Mainboard; }
	void SetRam(string ram) { m_strRam = ram; }
	void SetVideoCard(string videoCard) { m_strVideoCard = videoCard; }

	string GetCPU() { return m_strCpu; }
	string GetMainboard() { return m_strMainboard; }
	string GetRam() { return m_strRam; }
	string GetVideoCard() { return m_strVideoCard; }

private:
	string m_strCpu;          // CPU
	string m_strMainboard;	  // Ö÷°å
	string m_strRam;		  // ÄÚ´æ
	string m_strVideoCard;	  // ÏÔ¿¨
};