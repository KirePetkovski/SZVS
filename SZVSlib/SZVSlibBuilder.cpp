/**
SZVSlibBuilder implementation.
*/

#include "Buttons.h"
#include "Copy.h"
#include "DataBase.h"
#include "Queue.h"
#include "SZVSlibBuilder.h"

using namespace SZVSlib;

/*!
  \inmodule SZVSlib
  \namespace SZVSlib

  \brief Contains SZVSlib implementation classes.
  Click into each class to see the documentation for that class, or search for a keyword in the help documentation.
*/

/**
\internal
Do not edit. Autogenerated Builder constructor.
*/
SZVSlibBuilder::SZVSlibBuilder(const char* libName)
    : CDPBuilder(libName, __DATE__ " " __TIME__)
{
}

/**
\internal
Do not edit. Autogenerated Builder CDPComponent factory function.
*/
CDPComponent* SZVSlibBuilder::CreateNewComponent(const std::string& type)
{
    
    if (type=="SZVSlib.Buttons")
        return new Buttons;
    
    
    if (type=="SZVSlib.Copy")
        return new Copy;
    
    
    
    
    
    
    if (type=="SZVSlib.DataBase")
        return new DataBase;
    
    if (type=="SZVSlib.Queue")
        return new Queue;
    
    return CDPBuilder::CreateNewComponent(type);
}

/**
\internal
Do not edit. Autogenerated Builder CDPBaseObject factory function.
*/
CDPBaseObject* SZVSlibBuilder::CreateNewCDPOperator(const std::string& modelName, const std::string& type, const CDPPropertyBase* inputProperty)
{
    return CDPBuilder::CreateNewCDPOperator(modelName, type, inputProperty);
}

/**
\internal
Do not edit. Autogenerated Builder CDPObject factory function.
*/
CDPObject* SZVSlibBuilder::CreateNewObject(const std::string& type)
{
    return CDPBuilder::CreateNewObject(type);
}

/**
\internal
CDPNode factory function.
*/
CDP::StudioAPI::CDPNode* SZVSlibBuilder::CreateNewCDPNode(const std::string& type)
{
    return CDPBuilder::CreateNewCDPNode(type);
}