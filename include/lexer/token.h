#ifndef TOKEN_H
#define TOKEN_H

enum token_class_t{
    EOF,
    ERRONEOUS,
    KEYWORD_PUT,
    KEYWORD_GET,
    KEYWORD_IF,
    KEYWORD_ELSE,
    KEYWORD_FOR,
    KEYWORD_IN,
    KEYWORD_TO,
    KEYWORD_WHILE,
    KEYWORD_TYPE,
    KEYWORD_FNC,
    KEYWORD_RETURN,
    KEYWORD_BREAK,
    KEYWORD_CONTINUE,
    KEYWORD_TRUE,
    KEYWORD_FALSE,
    KEYWORD_SWITCH,
    KEYWORD_WHEN,
    KEYWORD_DEFAULT,
    KEYWORD_AND,
    KEYWORD_OR,
    KEYWORD_NOT,
    KEYWORD_JUMP,
    DELEMETER_COLON,
    DELEMETER_SEMICOLON,
    DELEMETER_OPEN_PAR,
    DELEMETER_CLOS_PAR,
    DELEMETER_CURL_OPEN_PAR,
    DELEMETER_CURL_CLOS_PAR,
    DELEMETER_PLUS,
    DELEMETER_MINUS,
    DELEMETER_STAR,
    DELEMETER_PERCENTAGE,
    DELEMETER_ASSIGN,
    DELEMETER_LESS,
    DELEMETER_LESS_EQ,
    DELEMETER_GREATER,
    DELEMETER_GREATER_EQ,
    DELEMETER_EQUAL,
    DELEMTER_NOT_EQUAL,
    DELEMETER_DIVIDE_EQ,
    DELEMETER_MULT_EQ,
    DELEMETER_PLUS_EQ,
    DELEMETER_MINUS_EQ,
    DELEMETER_COMMA,
    DELEMETER_DOT,
    DELEMETER_LEFT_BRAKET,
    DELEMETER_RIGHT_BRACKET,
    COMMENT,
    IDENTIFIER,
    CHR_LITERAL,
    STR_LITERAL,
    BOOL_TRUE,
    BOOL_FALSE,
    NUMBER_CONST,
    FLOAT_CONST
};

struct _token_t{
    token_class_t t;
    char* value;
    int line_no;
};

typedef struct _token_t token_t;
#endif