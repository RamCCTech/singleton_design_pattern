#pragma once
#include <string>
#include <vector>

class Reader {
private:
    std::vector<std::string> documentLines;  // Store the document lines

    // Private constructor to prevent instantiation
    Reader() = default;

public:
    // Deleted copy constructor and assignment operator to prevent copying
    Reader(const Reader&) = delete;
    Reader& operator=(const Reader&) = delete;

    static Reader& getInstance();

    void readDocument(const std::string& filePath);
    void displayDocument() const;
};
