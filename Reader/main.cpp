#include "Reader.h"

int main() {
    // Access the singleton instance
    Reader& readerInstance = Reader::getInstance();

    // Read the document (replace "your_file_path.txt" with the actual file path)
    readerInstance.readDocument("random_text.txt");

    // Display the document
    readerInstance.displayDocument();

    // Access the singleton instance
    Reader& readerInstance1 = Reader::getInstance();

    // Display the document
    readerInstance1.displayDocument();

    return 0;
}
