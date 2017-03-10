#ifndef PARSER_H
#define PARSER_H
#include "qstring.h"


class Parser
{
public:
    Parser();
private:
    bool _writeParsing(QString path,QString txt,int index=0);
    bool _readParsing(QString path,QString txt,int index=0);
};

#endif // PARSER_H
