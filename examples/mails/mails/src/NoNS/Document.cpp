
 //
 //  This file was automatically generated using XmlPlus xsd2cpp tool.
 //  Please do not edit.
 //
  
#include "NoNS/Document.h"


namespace NoNS {
    

  ///constructor for the Document node
  Document::Document(bool buildTree_, bool createSample_):
    XMLSchema::TDocument(buildTree_, createSample_)
  {
    initFSM();
    DOM::Document::attributeDefaultQualified(false);
    DOM::Document::elementDefaultQualified(false);
    
  }

  void Document::initFSM()
  {
  
    _fsm_mails = new XsdFSM<mails_ptr>( Particle(NULL,  DOMString("mails"), 1, 1),  XsdEvent::ELEMENT_START, new object_unary_mem_fun_t<mails_ptr, Document, FsmCbOptions>(this, &Document::create_mails));
  
    _fsm_header = new XsdFSM<header_ptr>( Particle(NULL,  DOMString("header"), 1, 1),  XsdEvent::ELEMENT_START, new object_unary_mem_fun_t<header_ptr, Document, FsmCbOptions>(this, &Document::create_header));
  
    _fsm_Date = new XsdFSM<Date_ptr>( Particle(NULL,  DOMString("Date"), 1, 1),  XsdEvent::ELEMENT_START, new object_unary_mem_fun_t<Date_ptr, Document, FsmCbOptions>(this, &Document::create_Date));
  
    XsdFsmBasePtr elemFsms[] = {
    _fsm_mails,
    _fsm_header,
    _fsm_Date,
      
      NULL
    };
    XsdFsmBasePtr fofElem = new XsdFsmOfFSMs(elemFsms, XsdFsmOfFSMs::CHOICE);
    
    XsdFsmBasePtr docEndFsm = new XsdFSM<void *>(Particle(NULL, "", 1, 1), XsdEvent::DOCUMENT_END);
    XsdFsmBasePtr ptrFsms[] = { fofElem,  docEndFsm, NULL };
    _fsm = new XsdFsmOfFSMs(ptrFsms, XsdFsmOfFSMs::SEQUENCE);
  }

  
    void Document::set_root_mails() 
    {
    
      if(!_mails) {
        XsdEvent event(NULL, NULL, DOMString("mails"), XsdEvent::ELEMENT_START);
        if(this->createSample()) {
          event.cbOptions.isSampleCreate = true;
        }
        _fsm->processEventThrow(event); 
      }
    }
    
    void Document::set_root_header() 
    {
    
      if(!_header) {
        XsdEvent event(NULL, NULL, DOMString("header"), XsdEvent::ELEMENT_START);
        if(this->createSample()) {
          event.cbOptions.isSampleCreate = true;
        }
        _fsm->processEventThrow(event); 
      }
    }
    
    void Document::set_root_Date() 
    {
    
      if(!_Date) {
        XsdEvent event(NULL, NULL, DOMString("Date"), XsdEvent::ELEMENT_START);
        if(this->createSample()) {
          event.cbOptions.isSampleCreate = true;
        }
        _fsm->processEventThrow(event); 
      }
    }
    


  /* element functions  */
  

  mails_ptr Document::create_mails(FsmCbOptions& options)
  {
    static DOMStringPtr myName = new DOMString("mails");
    static DOMStringPtr myNsUri = NULL;
    
    XSD::StructCreateElementThroughFsm t( myName, myNsUri, NULL, this, this, _fsm, options, false, false, false, "", "mailsType");
    mails_p node = XSD::createElementTmpl<mails, NoNS::Types::mailsType*>(t);
          
    _mails = node;
      
    return node;
  }

  
  mails_p Document::element_mails()
  {
    FSM::warnNullNode(_mails, "mails", "{}mails", 1);
    return _mails;
  }
    

  header_ptr Document::create_header(FsmCbOptions& options)
  {
    static DOMStringPtr myName = new DOMString("header");
    static DOMStringPtr myNsUri = NULL;
    
    XSD::StructCreateElementThroughFsm t( myName, myNsUri, NULL, this, this, _fsm, options, false, false, false, "http://www.w3.org/2001/XMLSchema", "string");
    header_p node = XSD::createElementTmpl<header, XMLSchema::Types::bt_string*>(t);
          
    if(options.isSampleCreate && (node->stringValue() == "") ) {
      node->stringValue(node->sampleValue());
    }
    
    _header = node;
      
    return node;
  }

  
  header_p Document::element_header()
  {
    FSM::warnNullNode(_header, "header", "{http://www.w3.org/2001/XMLSchema}header", 1);
    return _header;
  }
    

  Date_ptr Document::create_Date(FsmCbOptions& options)
  {
    static DOMStringPtr myName = new DOMString("Date");
    static DOMStringPtr myNsUri = NULL;
    
    XSD::StructCreateElementThroughFsm t( myName, myNsUri, NULL, this, this, _fsm, options, false, false, false, "http://www.w3.org/2001/XMLSchema", "dateTime");
    Date_p node = XSD::createElementTmpl<Date, XMLSchema::Types::bt_dateTime*>(t);
          
    if(options.isSampleCreate && (node->stringValue() == "") ) {
      node->stringValue(node->sampleValue());
    }
    
    _Date = node;
      
    return node;
  }

  
  Date_p Document::element_Date()
  {
    FSM::warnNullNode(_Date, "Date", "{http://www.w3.org/2001/XMLSchema}Date", 1);
    return _Date;
  }
    
} // end namespace NoNS 
    