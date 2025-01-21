#include "FileUtil.hpp"
using namespace std;

int main() {
    FileUtil file("test.txt", "w");  // here we open the file format

    if (file.is_open()) {
        uint8_t data[] = "halloweeks";
        size_t dataSize = sizeof(data);

        ssize_t bytesWritten = file.write(data, dataSize);
        if (bytesWritten > 0) {
            std::cout << "Data written successfully." << std::endl;
        } else {
            std::cout << "Error writing data to file." << std::endl;
        }
    } else {
        std::cout << "Failed to open the file." << std::endl;
    }

    file.close();  // here the file is closed

    return 0;
}