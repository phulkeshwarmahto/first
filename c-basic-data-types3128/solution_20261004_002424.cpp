class Solution {
public:
    int basicDataType(string &s) {
        // Check if the string represents a character (length 1 and not a digit)
        if (s.length() == 1 && !isdigit(s[0])) {
            return sizeof(char); // 1 byte
        }

        // Check if the string contains a decimal point
        size_t dotPos = s.find('.');
        if (dotPos != string::npos) {
            string fractionalPart = s.substr(dotPos + 1);
            // Higher precision/longer fractional parts or overall length represent Double
            if (fractionalPart.length() > 6 || s.length() > 8) {
                return sizeof(double); // 8 bytes
            } else {
                return sizeof(float); // 4 bytes
            }
        }

        // Default case: Integer
        return sizeof(int); // 4 bytes
    }
};