/* token.h */

typedef enum{
    EOL = 0, // newline
    NUMBER,
    PLUS,
    MINUS,
    TIMES,
    DIV,
    ERROR
} token_t;