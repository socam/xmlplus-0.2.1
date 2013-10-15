
 //
 //  This file was automatically generated using XmlPlus xsd2cpp tool.
 //  Please do not edit.
 //
  
#include "NoNS/Types/mailType.h"

namespace NoNS {
    
namespace Types
{
  XSD::TypeDefinitionFactoryTmpl<XmlElement<mailType> > mailType::s_typeRegistry("mailType", "");

  

  //constructor
  
  mailType::mailType(AnyTypeCreateArgs args):
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
    
  void mailType::initFSM()
  {
    XsdFsmBasePtr fsmsAttrs[] = {
  new XsdFSM<attr_id_ptr>( Particle(NULL, DOMString("id"), 1, 1), XsdEvent::ATTRIBUTE, new object_unary_mem_fun_t<attr_id_ptr, mailType, FsmCbOptions>(this, &mailType::create_attr_id)),
  
      NULL
    };

    _fsm->replaceOrAppendUniqueAttributeFsms(fsmsAttrs);
  
    _fsm->replaceContentFsm(_sequence);
      
    _fsmAttrs = _fsm->attributeFsm();
    _fsmElems = _fsm->contentFsm();

  }

  /* element functions  */
  

  mailType::envelope_ptr mailType::create_envelope(FsmCbOptions& options)
  {
    static DOMStringPtr myName = new DOMString("envelope");
    static DOMStringPtr myNsUri = NULL;
    
    XSD::StructCreateElementThroughFsm t( myName, myNsUri, NULL, this->ownerElement(), this->ownerDocument(), _fsm, options, false, false, false, "", "envelopeType");
    mailType::envelope_p node = XSD::createElementTmpl<envelope, NoNS::Types::envelopeType*>(t);
          
    _envelope = node;
      
    return node;
  }

  
  mailType::envelope_p mailType::element_envelope()
  {
    FSM::warnNullNode(_envelope, "envelope", "{}envelope", 1);
    return _envelope;
  }
    

  mailType::body_ptr mailType::create_body(FsmCbOptions& options)
  {
    static DOMStringPtr myName = new DOMString("body");
    static DOMStringPtr myNsUri = NULL;
    
    XSD::StructCreateElementThroughFsm t( myName, myNsUri, NULL, this->ownerElement(), this->ownerDocument(), _fsm, options, false, false, false, "", "bodyType");
    mailType::body_p node = XSD::createElementTmpl<body, NoNS::Types::bodyType*>(t);
          
    if(options.isSampleCreate && (node->stringValue() == "") ) {
      node->stringValue(node->sampleValue());
    }
    
    _body = node;
      
    return node;
  }

  
  mailType::body_p mailType::element_body()
  {
    FSM::warnNullNode(_body, "body", "{}body", 1);
    return _body;
  }
    
  void mailType::set_body(DOMString val)
  {
    get_sequence()->set_body(val);
  }

  DOMString mailType::get_body_string()
  {
    return get_sequence()->get_body_string();
  }

          

  mailType::attachment_ptr mailType::create_attachment(FsmCbOptions& options)
  {
    static DOMStringPtr myName = new DOMString("attachment");
    static DOMStringPtr myNsUri = NULL;
    
    XSD::StructCreateElementThroughFsm t( myName, myNsUri, NULL, this->ownerElement(), this->ownerDocument(), _fsm, options, false, false, false, "", "attachmentType");
    mailType::attachment_p node = XSD::createElementTmpl<attachment, NoNS::Types::attachmentType*>(t);
          
    _list_attachment.push_back(node);
      
    return node;
  }

  
  mailType::attachment_p mailType::element_attachment_at(unsigned int idx)
  {
    if(idx > _list_attachment.size()-1) {
      throw IndexOutOfBoundsException("IndexOutOfBoundsException");
    }

    return _list_attachment.at(idx);
  }
    
  List<mailType::attachment_ptr> mailType::elements_attachment()
  {
    return _list_attachment;
  }
    
  mailType::attachment_p mailType::add_node_attachment()
  {
    return get_sequence()->add_node_attachment();
  }

  List<mailType::attachment_ptr> mailType::set_count_attachment(unsigned int size)
  {
    return get_sequence()->set_count_attachment(size);
  }

          

  /* attribute  functions  */
  

  mailType::attr_id_ptr mailType::create_attr_id(FsmCbOptions& options)
  {
    static DOMStringPtr myName = new DOMString("id");
    static DOMStringPtr myNsUri = NULL;
    
    if(_attr_id) {
      return _attr_id;
    }  
    XSD::StructCreateAttrThroughFsm t( myName, myNsUri, NULL, this->ownerElement(), this->ownerDocument(), _fsm, options);
    mailType::attr_id_p node = XSD::createAttributeTmpl<attr_id>(t);
      
    if(options.isSampleCreate && (node->stringValue() == "") ) {
      node->stringValue(node->sampleValue());
    }
    
    _attr_id = node;
      
    return node;
  }

  
    void mailType::set_attr_id(DOMString val)
    {
        
      attribute_attr_id()->stringValue(val);
    }

    DOMString mailType::get_attr_id_string()
    {
       
      return attribute_attr_id()->stringValue();
    }

    
    void mailType::set_attr_id(XPlus::Int64 val)
    {
        
      attribute_attr_id()->value(val);
    }

    XPlus::Int64 mailType::get_attr_id()
    {
        
      return attribute_attr_id()->value();
    }

    
  mailType::attr_id_p mailType::attribute_attr_id()
  {
    FSM::warnNullNode(_attr_id, "attr_id", "{http://www.w3.org/2001/XMLSchema}id", 1);
    return _attr_id;
  }
    
  //constructor
  mailType::sequence::sequence(mailType* that):
    _that(that)
  {
    XsdFsmBasePtr fsmArray[] = {
    new XsdFSM<envelope_ptr>( Particle(NULL, DOMString("envelope"), 1, 1), XsdEvent::ELEMENT_START, new object_unary_mem_fun_t<envelope_ptr, mailType, FsmCbOptions>(_that, &mailType::create_envelope)),
      new XsdFSM<body_ptr>( Particle(NULL, DOMString("body"), 1, 1), XsdEvent::ELEMENT_START, new object_unary_mem_fun_t<body_ptr, mailType, FsmCbOptions>(_that, &mailType::create_body)),
      new XsdFSM<attachment_ptr>( Particle(NULL, DOMString("attachment"), 0, -1), XsdEvent::ELEMENT_START, new object_unary_mem_fun_t<attachment_ptr, mailType, FsmCbOptions>(_that, &mailType::create_attachment)),
             
      NULL 
    } ;
    
    XsdSequenceFsmOfFSMs::init(fsmArray);
  }

      

  mailType::envelope_p mailType::sequence::element_envelope()
  {
      mailType::envelope_p node_p = NULL;
    XsdFsmBase* fsm_p = this->allFSMs()[0].get();
    if(fsm_p) 
    {
      XsdFSM<envelope_ptr> *unitFsm = dynamic_cast<XsdFSM<envelope_ptr> *>(fsm_p);
      if(unitFsm && unitFsm->nodeList().size()>0) {
        assert(unitFsm->nodeList().size()==1);  
        node_p = unitFsm->nodeList().at(0); 
      }
    }
    
    FSM::warnNullNode(node_p, "envelope", "{}envelope", 1);
    return node_p;
        
  }
  
      

  mailType::body_p mailType::sequence::element_body()
  {
      mailType::body_p node_p = NULL;
    XsdFsmBase* fsm_p = this->allFSMs()[1].get();
    if(fsm_p) 
    {
      XsdFSM<body_ptr> *unitFsm = dynamic_cast<XsdFSM<body_ptr> *>(fsm_p);
      if(unitFsm && unitFsm->nodeList().size()>0) {
        assert(unitFsm->nodeList().size()==1);  
        node_p = unitFsm->nodeList().at(0); 
      }
    }
    
    FSM::warnNullNode(node_p, "body", "{}body", 1);
    return node_p;
        
  }
  
  
  void mailType::sequence::set_body(DOMString val)
  {
      
    element_body()->stringValue(val);
  }

  DOMString mailType::sequence::get_body_string()
  {
    return element_body()->stringValue();
  }

          

  List<mailType::attachment_ptr> mailType::sequence::elements_attachment()
  {
      
    List<attachment_ptr> nodeList;
    XsdFsmBase* fsm_p = this->allFSMs()[2].get();
    if(fsm_p) 
    {
      XsdFSM<attachment_ptr> *unitFsm = dynamic_cast<XsdFSM<attachment_ptr> *>(fsm_p);
      if(unitFsm) {
        //nodeList = unitFsm->nodeList().stl_list(); 
        nodeList = unitFsm->nodeList(); 
      }
    }
    return nodeList;
        
  }
  
  
  mailType::attachment_p mailType::sequence::element_attachment_at(unsigned int idx)
  {
    return elements_attachment().at(idx);
  }

    
  mailType::attachment_p mailType::sequence::add_node_attachment()
  {
    DOMStringPtr nsUriPtr = NULL;
    XsdEvent event(nsUriPtr, NULL, DOMString("attachment"), XsdEvent::ELEMENT_START, false);
    this->processEventThrow(event); 
    return elements_attachment().back();
  }

  List<mailType::attachment_ptr> mailType::sequence::set_count_attachment(unsigned int size)
  {
    if( (size > -1) || (size < 0)) {
      ostringstream oss;
      oss << "set_count_attachment: size should be in range: [" << 0
        << "," << "unbounded" << "]";
      throw IndexOutOfBoundsException(oss.str());
    }

    unsigned int prevSize = elements_attachment().size();
    if(size < prevSize) {
      //FIXME: allow later:
      throw XPlus::RuntimeException("resize lesser than current size not allowed");
    }

    for(unsigned int j=prevSize; j<size; j++) 
    {
      // pretend docBuilding to avoid computation of adding after first loop
      XsdEvent event(NULL, NULL, DOMString("attachment"), XsdEvent::ELEMENT_START, false);
      this->processEventThrow(event); 
    }
    
    return elements_attachment();
  }

        
} //  end namespace Types 


} // end namespace NoNS 
    