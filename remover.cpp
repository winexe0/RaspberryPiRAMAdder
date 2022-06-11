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
int main(int argc, char **argv) {
    string restart;
    system("sudo systemctl stop zram");
    system("sudo systemctl disable zram");
    system("sudo rm /etc/modules-load.d/zram.conf /etc/modprobe.d/zram.conf /etc/udev/rules.d/99-zram.rules");
    cout << "1 Gigabyte of extra RAM has been removed on your Raspberry Pi. It has to be restarted so the changes made to it can take effect. Do you want to restart? (y/n)" << endl;
	cin >> restart;
	if (restart == "y") {
		system("sudo reboot");
	}
	if (restart == "n") {
		exit(0);
	}
	return 0;
}