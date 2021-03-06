#ifndef TOKEN_H
#define TOKEN_H

#include <string>

class Token
{
public:
	enum TokenType
	{
		IF,
		WHILE,
		FOR,
		NAME,
		INTEGER,
		FLOAT,
		HEXADECIMAL,
		BINARY,
		BOOLEAN,
		STRING,
		OPERATOR,
		SEPERATOR,
		NEWLINE,
		INDENT,
		DEDENT,
		UNKNOWN
	};
private:
	std::string _value;
	TokenType _tokenType;

public:
	//Default Constructor
	Token();

	//Overloaded Constructor
	Token(TokenType type,std::string value);
	Token(TokenType type,char* value);
	
	//getters and setters
	std::string getValue()const;
	TokenType getTokenType()const;




};



#endif
