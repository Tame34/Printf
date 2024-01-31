/**
 * _strlength: Returns the length of a string array
 * @b: Pointer of data type (char)
 * Return: p after execution
 **/
int _strlength(char *b) {
  int p = 0;
  do {
    p++;
  } while (b[p] != '\0');
  return p;
}
/**
 * _strlen_const: Calculates the length of a given null-termina
ted string (const char *b)
* @b: Pointer of data type (char)
* Return: p after execution
**/

int _strlen_const(const char *b) {
  int p = 0;

  do {
    p++;
  } while (b[p] != '\0');

  return p;
  
