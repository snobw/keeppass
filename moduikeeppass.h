#ifndef MODUIKEEPPASS_H
#define MODUIKEEPPASS_H
#include "QString"
#include "encode.h"
#include "parser.h"


class ModUIKeepPass
{
public:
    ModUIKeepPass();
    ~ModUIKeepPass();
    void _setFileName(QString value){ _FileName=value;};
    bool _checkName(QString name);

private:
    QString _FileName;
    QString _KeyPassword;
    QString _FullPathName;
    //bool _checkName(QString name);

protected:
    QString _getFileName(){return _FileName;};
    bool _writeFile(QString txt);
    bool _readFile(QString txt);
    bool _encodeFile();
    bool _decodeFile();
    bool _checkPassword(QString txt);
    QString _getPasswordFile();
    void _setPassword(QString value){ _KeyPassword=value;};


    //
    Encode encoding;
    Parser parsing;


};

#endif // MODUIKEEPPASS_H
