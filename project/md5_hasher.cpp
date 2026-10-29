#include "md5_hasher.h"
#include <openssl/md5.h>
#include <iomanip>
#include <sstream>
#include <algorithm>

std::string Md5Hasher::hash(const std::string& input) {
    unsigned char digest[MD5_DIGEST_LENGTH];
    MD5((const unsigned char*)input.c_str(), input.size(), digest);

    std::stringstream ss;
    for (int i = 0; i < MD5_DIGEST_LENGTH; ++i) {
        ss << std::uppercase << std::hex << std::setw(2) << std::setfill('0') << (int)digest[i];
    }
	
	std::string result = ss.str();
	for (char &c : result) {
		c = std::toupper(c);
	}
	
    return ss.str();
}