#include "moduikeeppass.h"

ModUIKeepPass::ModUIKeepPass()
{
_FileName="";
}
ModUIKeepPass::~ModUIKeepPass()
{
//
}
/**
 * @brief ModUIKeepPass::_checkName
 * @param name
 * @return
 */
bool ModUIKeepPass::_checkName(QString name){
    if(name==_FileName)
        return true;
    else
        return false;
}

/**
 * @brief ModUIKeepPass::_unlockFile
 * @param unlock
 * @return
 * @note password check to unlock file
 */

bool ModUIKeepPass::_unlockFile(QString unlock){
    unlock=_crypt(unlock);
    if(_getPasswordFile()==unlock)
        return true;
    else
        return false;
}

/**
 * @brief ModUIKeepPass::_getPasswordFile
 * @return
 */
QString ModUIKeepPass::_getPasswordFile(){
    //todo read head to obtain the key
    return _KeyPassword;
}
