
 //
 //  This file was automatically generated using XmlPlus xsd2cpp tool.
 //  Please do not edit.
 //
  
#include "NoNS/Types/envelopeType.h"

namespace NoNS {
    
namespace Types
{
  XSD::TypeDefinitionFactoryTmpl<XmlElement<envelopeType> > envelopeType::s_typeRegistry("envelopeType", "");

  

  //constructor
  
  envelopeType::envelopeType(AnyTypeCreateArgs args):
  XMLSchema::Types::anyType(AnyTypeCreateArgs(false, 
                                              args.ownerNode, 
                                              args.ownerElem, 
                                              args.ownerDoc, 
                                              args.childBuildsTree, 
                                              (args.createFromElementAttr? false : args.abstract),
                                              args.blockMask,
                                              args.finalMask,
                                              args.contentTypeVariety,
                                              args.anyTypeUseCase,
                                              args.suppressTypeAbstract
                                             )),
    
    _fsmElems(NULL),
    _fsmAttrs(NULL)
  
    , _sequence(new sequence(this) )
  
  {
    this->contentTypeVariety(CONTENT_TYPE_VARIETY_ELEMENT_ONLY);
    initFSM();
    if(args.ownerDoc && args.ownerDoc->buildTree() && !args.childBuildsTree)
    {
      if(args.ownerDoc->createSample()) {
        _fsm->fireSampleEvents();
      }
      else {
        _fsm->fireRequiredEvents();
      }
    }
  }
    
  void envelopeType::initFSM()
  {
    XsdFsmBasePtr fsmsAttrs[] = {
  
      NULL
    };

    _fsm->replaceOrAppendUniqueAttributeFsms(fsmsAttrs);
  
    _fsm->replaceContentFsm(_sequence);
      
    _fsmAttrs = _fsm->attributeFsm();
    _fsmElems = _fsm->contentFsm();

  }

  /* element functions  */
  

  envelopeType::From_ptr envelopeType::create_From(FsmCbOptions& options)
  {
    static DOMStringPtr myName = new DOMString("From");
    static DOMStringPtr myNsUri = NULL;
    
    XSD::StructCreateElementThroughFsm t( myName, myNsUri, NULL, this->ownerElement(), this->ownerDocument(), _fsm, options, false, false, false, "http://www.w3.org/2001/XMLSchema", "string");
    envelopeType::From_p node = XSD::createElementTmpl<From, XMLSchema::Types::bt_string*>(t);
          
    if(options.isSampleCreate && (node->stringValue() == "") ) {
      node->stringValue(node->sampleValue());
    }
    
    _From = node;
      
    return node;
  }

  
  envelopeType::From_p envelopeType::element_From()
  {
    FSM::warnNullNode(_From, "From", "{http://www.w3.org/2001/XMLSchema}From", 1);
    return _From;
  }
    
  void envelopeType::set_From(DOMString val)
  {
    get_sequence()->set_From(val);
  }

  DOMString envelopeType::get_From_string()
  {
    return get_sequence()->get_From_string();
  }

          

  envelopeType::To_ptr envelopeType::create_To(FsmCbOptions& options)
  {
    static DOMStringPtr myName = new DOMString("To");
    static DOMStringPtr myNsUri = NULL;
    
    XSD::StructCreateElementThroughFsm t( myName, myNsUri, NULL, this->ownerElement(), this->ownerDocument(), _fsm, options, false, false, false, "http://www.w3.org/2001/XMLSchema", "string");
    envelopeType::To_p node = XSD::createElementTmpl<To, XMLSchema::Types::bt_string*>(t);
          
    if(options.isSampleCreate && (node->stringValue() == "") ) {
      node->stringValue(node->sampleValue());
    }
    
    _To = node;
      
    return node;
  }

  
  envelopeType::To_p envelopeType::element_To()
  {
    FSM::warnNullNode(_To, "To", "{http://www.w3.org/2001/XMLSchema}To", 1);
    return _To;
  }
    
  void envelopeType::set_To(DOMString val)
  {
    get_sequence()->set_To(val);
  }

  DOMString envelopeType::get_To_string()
  {
    return get_sequence()->get_To_string();
  }

          

  Date_ptr envelopeType::create_Date(FsmCbOptions& options)
  {
    static DOMStringPtr myName = new DOMString("Date");
    static DOMStringPtr myNsUri = NULL;
    
    XSD::StructCreateElementThroughFsm t( myName, myNsUri, NULL, this->ownerElement(), this->ownerDocument(), _fsm, options, false, false, false);
    Date_p node = XSD::createElementTmpl<Date, void*>(t);
          
    if(options.isSampleCreate && (node->stringValue() == "") ) {
      node->stringValue(node->sampleValue());
    }
    
    _Date = node;
      
    return node;
  }

  
  Date_p envelopeType::element_Date()
  {
    FSM::warnNullNode(_Date, "Date", "{}Date", 1);
    return _Date;
  }
    
  void envelopeType::set_Date(DOMString val)
  {
    get_sequence()->set_Date(val);
  }

  DOMString envelopeType::get_Date_string()
  {
    return get_sequence()->get_Date_string();
  }

          
  void envelopeType::set_Date(XPlus::DateTime val)
  {
    get_sequence()->set_Date(val);
  }
  
  XPlus::DateTime envelopeType::get_Date()
  {
    return get_sequence()->get_Date();
  }

          

  envelopeType::Subject_ptr envelopeType::create_Subject(FsmCbOptions& options)
  {
    static DOMStringPtr myName = new DOMString("Subject");
    static DOMStringPtr myNsUri = NULL;
    
    XSD::StructCreateElementThroughFsm t( myName, myNsUri, NULL, this->ownerElement(), this->ownerDocument(), _fsm, options, false, false, false, "http://www.w3.org/2001/XMLSchema", "string");
    envelopeType::Subject_p node = XSD::createElementTmpl<Subject, XMLSchema::Types::bt_string*>(t);
          
    if(options.isSampleCreate && (node->stringValue() == "") ) {
      node->stringValue(node->sampleValue());
    }
    
    _Subject = node;
      
    return node;
  }

  
  envelopeType::Subject_p envelopeType::element_Subject()
  {
    FSM::warnNullNode(_Subject, "Subject", "{http://www.w3.org/2001/XMLSchema}Subject", 1);
    return _Subject;
  }
    
  void envelopeType::set_Subject(DOMString val)
  {
    get_sequence()->set_Subject(val);
  }

  DOMString envelopeType::get_Subject_string()
  {
    return get_sequence()->get_Subject_string();
  }

          

  header_ptr envelopeType::create_header(FsmCbOptions& options)
  {
    static DOMStringPtr myName = new DOMString("header");
    static DOMStringPtr myNsUri = NULL;
    
    XSD::StructCreateElementThroughFsm t( myName, myNsUri, NULL, this->ownerElement(), this->ownerDocument(), _fsm, options, false, false, false);
    header_p node = XSD::createElementTmpl<header, void*>(t);
          
    if(options.isSampleCreate && (node->stringValue() == "") ) {
      node->stringValue(node->sampleValue());
    }
    
    _list_header.push_back(node);
      
    return node;
  }

  
  header_p envelopeType::element_header_at(unsigned int idx)
  {
    if(idx > _list_header.size()-1) {
      throw IndexOutOfBoundsException("IndexOutOfBoundsException");
    }

    return _list_header.at(idx);
  }
    
  List<header_ptr> envelopeType::elements_header()
  {
    return _list_header;
  }
    
  header_p envelopeType::add_node_header()
  {
    return get_sequence()->add_node_header();
  }

  List<header_ptr> envelopeType::set_count_header(unsigned int size)
  {
    return get_sequence()->set_count_header(size);
  }

        
      
    void envelopeType::add_header_string(DOMString val)
    {
      get_sequence()->add_header_string(val);
    }

          
  void envelopeType::set_header(unsigned int idx, DOMString val)
  {
    get_sequence()->set_header(idx, val);
  }

  DOMString envelopeType::get_header_string(unsigned int idx)
  {
    return get_sequence()->get_header_string(idx);
  }

            

  /* attribute  functions  */
  
  //constructor
  envelopeType::sequence::sequence(envelopeType* that):
    _that(that)
  {
    XsdFsmBasePtr fsmArray[] = {
    new XsdFSM<From_ptr>( Particle(NULL, DOMString("From"), 1, 1), XsdEvent::ELEMENT_START, new object_unary_mem_fun_t<From_ptr, envelopeType, FsmCbOptions>(_that, &envelopeType::create_From)),
      new XsdFSM<To_ptr>( Particle(NULL, DOMString("To"), 1, 1), XsdEvent::ELEMENT_START, new object_unary_mem_fun_t<To_ptr, envelopeType, FsmCbOptions>(_that, &envelopeType::create_To)),
      new XsdFSM<Date_ptr>( Particle(NULL, DOMString("Date"), 1, 1), XsdEvent::ELEMENT_START, new object_unary_mem_fun_t<Date_ptr, envelopeType, FsmCbOptions>(_that, &envelopeType::create_Date)),
      new XsdFSM<Subject_ptr>( Particle(NULL, DOMString("Subject"), 1, 1), XsdEvent::ELEMENT_START, new object_unary_mem_fun_t<Subject_ptr, envelopeType, FsmCbOptions>(_that, &envelopeType::create_Subject)),
      new XsdFSM<header_ptr>( Particle(NULL, DOMString("header"), 0, -1), XsdEvent::ELEMENT_START, new object_unary_mem_fun_t<header_ptr, envelopeType, FsmCbOptions>(_that, &envelopeType::create_header)),
             
      NULL 
    } ;
    
    XsdSequenceFsmOfFSMs::init(fsmArray);
  }

      

  envelopeType::From_p envelopeType::sequence::element_From()
  {
      envelopeType::From_p node_p = NULL;
    XsdFsmBase* fsm_p = this->allFSMs()[0].get();
    if(fsm_p) 
    {
      XsdFSM<From_ptr> *unitFsm = dynamic_cast<XsdFSM<From_ptr> *>(fsm_p);
      if(unitFsm && unitFsm->nodeList().size()>0) {
        assert(unitFsm->nodeList().size()==1);  
        node_p = unitFsm->nodeList().at(0); 
      }
    }
    
    FSM::warnNullNode(node_p, "From", "{http://www.w3.org/2001/XMLSchema}From", 1);
    return node_p;
        
  }
  
  
  void envelopeType::sequence::set_From(DOMString val)
  {
      
    element_From()->stringValue(val);
  }

  DOMString envelopeType::sequence::get_From_string()
  {
    return element_From()->stringValue();
  }

          

  envelopeType::To_p envelopeType::sequence::element_To()
  {
      envelopeType::To_p node_p = NULL;
    XsdFsmBase* fsm_p = this->allFSMs()[1].get();
    if(fsm_p) 
    {
      XsdFSM<To_ptr> *unitFsm = dynamic_cast<XsdFSM<To_ptr> *>(fsm_p);
      if(unitFsm && unitFsm->nodeList().size()>0) {
        assert(unitFsm->nodeList().size()==1);  
        node_p = unitFsm->nodeList().at(0); 
      }
    }
    
    FSM::warnNullNode(node_p, "To", "{http://www.w3.org/2001/XMLSchema}To", 1);
    return node_p;
        
  }
  
  
  void envelopeType::sequence::set_To(DOMString val)
  {
      
    element_To()->stringValue(val);
  }

  DOMString envelopeType::sequence::get_To_string()
  {
    return element_To()->stringValue();
  }

          

  Date_p envelopeType::sequence::element_Date()
  {
      Date_p node_p = NULL;
    XsdFsmBase* fsm_p = this->allFSMs()[2].get();
    if(fsm_p) 
    {
      XsdFSM<Date_ptr> *unitFsm = dynamic_cast<XsdFSM<Date_ptr> *>(fsm_p);
      if(unitFsm && unitFsm->nodeList().size()>0) {
        assert(unitFsm->nodeList().size()==1);  
        node_p = unitFsm->nodeList().at(0); 
      }
    }
    
    FSM::warnNullNode(node_p, "Date", "{}Date", 1);
    return node_p;
        
  }
  
  
  void envelopeType::sequence::set_Date(DOMString val)
  {
      
    element_Date()->stringValue(val);
  }

  DOMString envelopeType::sequence::get_Date_string()
  {
    return element_Date()->stringValue();
  }

      
  void envelopeType::sequence::set_Date(XPlus::DateTime val)     
  {
        
    element_Date()->value(val);
  }

  XPlus::DateTime envelopeType::sequence::get_Date()     
  {
    return element_Date()->value();
  }

          

  envelopeType::Subject_p envelopeType::sequence::element_Subject()
  {
      envelopeType::Subject_p node_p = NULL;
    XsdFsmBase* fsm_p = this->allFSMs()[3].get();
    if(fsm_p) 
    {
      XsdFSM<Subject_ptr> *unitFsm = dynamic_cast<XsdFSM<Subject_ptr> *>(fsm_p);
      if(unitFsm && unitFsm->nodeList().size()>0) {
        assert(unitFsm->nodeList().size()==1);  
        node_p = unitFsm->nodeList().at(0); 
      }
    }
    
    FSM::warnNullNode(node_p, "Subject", "{http://www.w3.org/2001/XMLSchema}Subject", 1);
    return node_p;
        
  }
  
  
  void envelopeType::sequence::set_Subject(DOMString val)
  {
      
    element_Subject()->stringValue(val);
  }

  DOMString envelopeType::sequence::get_Subject_string()
  {
    return element_Subject()->stringValue();
  }

          

  List<header_ptr> envelopeType::sequence::elements_header()
  {
      
    List<header_ptr> nodeList;
    XsdFsmBase* fsm_p = this->allFSMs()[4].get();
    if(fsm_p) 
    {
      XsdFSM<header_ptr> *unitFsm = dynamic_cast<XsdFSM<header_ptr> *>(fsm_p);
      if(unitFsm) {
        //nodeList = unitFsm->nodeList().stl_list(); 
        nodeList = unitFsm->nodeList(); 
      }
    }
    return nodeList;
        
  }
  
  
  header_p envelopeType::sequence::element_header_at(unsigned int idx)
  {
    return elements_header().at(idx);
  }

    
  void envelopeType::sequence::set_header(unsigned int idx, DOMString val)
  {
    element_header_at(idx)->stringValue(val);
  }

  DOMString envelopeType::sequence::get_header_string(unsigned int idx)
  {
    return element_header_at(idx)->stringValue();
  }
      
  header_p envelopeType::sequence::add_node_header()
  {
    DOMStringPtr nsUriPtr = NULL;
    XsdEvent event(nsUriPtr, NULL, DOMString("header"), XsdEvent::ELEMENT_START, false);
    this->processEventThrow(event); 
    return elements_header().back();
  }

  List<header_ptr> envelopeType::sequence::set_count_header(unsigned int size)
  {
    if( (size > -1) || (size < 0)) {
      ostringstream oss;
      oss << "set_count_header: size should be in range: [" << 0
        << "," << "unbounded" << "]";
      throw IndexOutOfBoundsException(oss.str());
    }

    unsigned int prevSize = elements_header().size();
    if(size < prevSize) {
      //FIXME: allow later:
      throw XPlus::RuntimeException("resize lesser than current size not allowed");
    }

    for(unsigned int j=prevSize; j<size; j++) 
    {
      // pretend docBuilding to avoid computation of adding after first loop
      XsdEvent event(NULL, NULL, DOMString("header"), XsdEvent::ELEMENT_START, false);
      this->processEventThrow(event); 
    }
    
    return elements_header();
  }

        
    
  void envelopeType::sequence::add_header_string(DOMString val)
  {
    this->add_node_header()->stringValue(val);
  }
          
} //  end namespace Types 


} // end namespace NoNS 
    