/*
 * main.cpp
 * 
 * Copyright 2022 winexe0 <aryan.chandna@icloud.com>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include <iostream>
#include <cstdlib>
using namespace std;
int main(int argc, char **argv)
{
	for (int i = 1; i < argc; ++i) {
	string arg = argv[i];
	if (arg == "-v") {
		cout << "Running in Verbose Mode" << endl;
			string confirm;
			cout << "Are you sure you want to add 1 Gigabyte of extra RAM to your Raspberry Pi (y/n)" << endl;
			cin >> confirm;
			if (confirm == "y") {
				string restart;
				system("wget https://raw.githubusercontent.com/winexe0/RaspberryPiRAMAdder/master/zram.conf");
				system("sudo mv zram.conf /etc/modules-load.d/");
				system("wget https://github.com/winexe0/RaspberryPiRAMAdder/raw/master/modprobe-zram.conf");
				system("sudo mv modprobe-zram.conf /etc/modprobe.d/zram.conf");
				system("wget https://github.com/winexe0/RaspberryPiRAMAdder/raw/master/99-zram.rules");
				system("sudo mv 99-zram.rules /etc/udev/rules.d/");
				system("wget https://github.com/winexe0/RaspberryPiRAMAdder/raw/master/zram.service");
				system("sudo mv zram.service /etc/systemd/system/");
				system("sudo systemctl enable zram");
				cout << "1 Gigabyte of extra RAM has been added to your Raspberry Pi. It has to be restarted so the changes made to it can take effect. Do you want to restart? (y/n)" << endl;
				cin >> restart;
				if (restart == "y") {
					system("sudo reboot");
				}
				if (restart == "n") {
					exit(0);
				}
			}
			if (confirm =="n") {
				exit(0);
			}
	}
}
	string confirm;
	cout << "Are you sure you want to add 1 Gigabyte of extra RAM to your Raspberry Pi (y/n)" << endl;
	cin >> confirm;
	if (confirm == "y") {
		string restart;
		system("wget -q https://raw.githubusercontent.com/winexe0/RaspberryPiRAMAdder/master/zram.conf");
		system("sudo mv zram.conf /etc/modules-load.d/");
		system("wget -q https://github.com/winexe0/RaspberryPiRAMAdder/raw/master/modprobe-zram.conf");
		system("sudo mv modprobe-zram.conf /etc/modprobe.d/zram.conf");
		system("wget -q https://github.com/winexe0/RaspberryPiRAMAdder/raw/master/99-zram.rules");
		system("sudo mv 99-zram.rules /etc/udev/rules.d/");
		system("wget -q https://github.com/winexe0/RaspberryPiRAMAdder/raw/master/zram.service");
		system("sudo mv zram.service /etc/systemd/system/");
		system("sudo systemctl enable zram");
		cout << "1 Gigabyte of extra RAM has been added to your Raspberry Pi. It has to be restarted so the changes made to it can take effect. Do you want to restart? (y/n)" << endl;
		cin >> restart;
		if (restart == "y") {
			system("sudo reboot");
		}
		if (restart == "n") {
			exit(0);
		}
	}
	if (confirm =="n") {
			exit(0);
	}
	return 0;
}