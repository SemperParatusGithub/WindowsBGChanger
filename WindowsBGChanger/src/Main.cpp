#include <Windows.h>
#include <iostream>
#include <filesystem>

int main()
{
	std::wstring dir = std::filesystem::current_path().wstring();
	std::wstring path = L"\\Background.png";
	std::wstring combo = dir + path;

	SystemParametersInfo(SPI_SETDESKWALLPAPER, 0, (PVOID) combo.c_str(), SPIF_UPDATEINIFILE);

	return 0;
}