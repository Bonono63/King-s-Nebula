/*
	reads any file given to it in a binary mode stream
	and then returns it as a string.
*/

std::string read_payload(std::filesystem::path file) {
	//temporary character for appending the program
	char temp;
	//output string
	std::string out;
	// New binary file stream
	std::ifstream stream = std::ifstream(file, std::ios::binary);
	
	//check whether the payload can be read
	if (!stream.is_open()) {
		std::cout << "Unable to read the payload.";
	}
	
	// Main read loop
	try {
		for ( int x = 0 ; x < std::filesystem::file_size(file) ; x++ ) {
		
		
		if (stream.fail()) {
			//std::cout << "Error occured while reading the payload." << std::endl;
			throw new std::ios_base::failure(" Error occured while reading the payload.");
		}
		
		
		//read the byte at x in the filestream
		stream.read(&temp, sizeof temp);
		
		//append it to the string
		out += temp;
		}
	} catch (std::filesystem::path file){
		std::cout << "Unable to read " << file.string() ;
	}
	
	stream.close();
	
	return out;	
}