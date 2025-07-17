/**
 * @return length of specified string, not including the null terminator
 * @param str the string to return the length of
 */
int len(char* str);

/**
 * @return a new string from the specified indices
 * @param begin (inclusive) start of the desired substring
 * @param end (exclusive) end of the desired substring
 */
char* substr(char* str, int begin, int end);

/**
 * @param str the first string to compare
 * @param other the second string to compare with
 * @return 0 if the strings are equal, a positive number if str > other. a
 * negative number otherwise
 */
int compare(char* str, char* other);

/**
 * @return true if `str` is equal to `other`
 */
int equals(char* str, char* other);

/**
 * @param str the string to convert to uppercase
 * @return a count of the lowercase characters updated
 *
 * Converts all lowercase english letters to uppercase, ignoring other
 * characters
 */
int uppercase(char* str);

/**
 * @param str the string to convert to lowercase
 * @return a count of the uppercase characters updated
 *
 * Converts all uppercase english letters to lowercase, ignoring other
 * characters
 */
int lowercase(char* str);