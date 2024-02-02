#include "Reader.h"
#include <iostream>
#include <fstream>

// Initialize the static instance
Reader& Reader::getInstance() {
    static Reader instance;
    return instance;
}

void Reader::readDocument(const std::string& filePath) {
    std::ifstream file(filePath);

    if (file.is_open()) {
        std::string line;
        while (std::getline(file, line)) {
            documentLines.push_back(line);
        }
        file.close();
    }
    else {
        std::cerr << "Error: Unable to open file " << filePath << std::endl;
    }
}

void Reader::displayDocument() const {
    for (const auto& line : documentLines) {
        std::cout << line << std::endl;
    }
}
