
 //
 //  This file was automatically generated using XmlPlus xsd2cpp tool.
 //  Please do not edit.
 //
  
#ifndef  __NoNS_DOCUMENT_H__
#define  __NoNS_DOCUMENT_H__
        
#include "XSD/xsdUtils.h"
#include "XSD/TypeDefinitionFactory.h"

#include "NoNS/mails.h"
    
#include "NoNS/header.h"
    
#include "NoNS/Date.h"
    
#include "NoNS/attr_name.h"
    

using namespace XPlus;
using namespace FSM;


namespace NoNS {
    

class Document : public XMLSchema::TDocument
{
  private:
  
  
  mails_ptr _mails;
    
  AutoPtr<XsdFSM<mails_ptr> > _fsm_mails;
  
  header_ptr _header;
    
  AutoPtr<XsdFSM<header_ptr> > _fsm_header;
  
  Date_ptr _Date;
    
  AutoPtr<XsdFSM<Date_ptr> > _fsm_Date;
    
  
  // attributes, elements
  
  mails_ptr create_mails(FsmCbOptions& options);

  header_ptr create_header(FsmCbOptions& options);

  Date_ptr create_Date(FsmCbOptions& options);
  
  
  void initFSM();

  public:

  Document(bool buildTree=true, bool createSample=false);
  virtual ~Document() {}
    
  
  void set_root_mails();
    
  void set_root_header();
    
  void set_root_Date();
    
  mails_p element_mails();
  
  header_p element_header();
  
  Date_p element_Date();
    
    
};

} // end namespace NoNS 
    
#endif
  