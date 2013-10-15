
 //
 //  This file was automatically generated using XmlPlus xsd2cpp tool.
 //  Please do not edit.
 //
  
#include "NoNS/Types/attachmentType.h"

namespace NoNS {
    
namespace Types
{
  XSD::TypeDefinitionFactoryTmpl<XmlElement<attachmentType> > attachmentType::s_typeRegistry("attachmentType", "");

  

  //constructor
  
  attachmentType::attachmentType(AnyTypeCreateArgs args):
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
    
  void attachmentType::initFSM()
  {
    XsdFsmBasePtr fsmsAttrs[] = {
  new XsdFSM<attr_name_ptr>( Particle(NULL, DOMString("name"), 1, 1), XsdEvent::ATTRIBUTE, new object_unary_mem_fun_t<attr_name_ptr, attachmentType, FsmCbOptions>(this, &attachmentType::create_attr_name)),
  
      NULL
    };

    _fsm->replaceOrAppendUniqueAttributeFsms(fsmsAttrs);
  
    _fsm->replaceContentFsm(_sequence);
      
    _fsmAttrs = _fsm->attributeFsm();
    _fsmElems = _fsm->contentFsm();

  }

  /* element functions  */
  

  attachmentType::mimetype_ptr attachmentType::create_mimetype(FsmCbOptions& options)
  {
    static DOMStringPtr myName = new DOMString("mimetype");
    static DOMStringPtr myNsUri = NULL;
    
    XSD::StructCreateElementThroughFsm t( myName, myNsUri, NULL, this->ownerElement(), this->ownerDocument(), _fsm, options, false, false, false, "http://www.w3.org/2001/XMLSchema", "string");
    attachmentType::mimetype_p node = XSD::createElementTmpl<mimetype, XMLSchema::Types::bt_string*>(t);
          
    if(options.isSampleCreate && (node->stringValue() == "") ) {
      node->stringValue(node->sampleValue());
    }
    
    _mimetype = node;
      
    return node;
  }

  
  attachmentType::mimetype_p attachmentType::element_mimetype()
  {
    FSM::warnNullNode(_mimetype, "mimetype", "{http://www.w3.org/2001/XMLSchema}mimetype", 1);
    return _mimetype;
  }
    
  void attachmentType::set_mimetype(DOMString val)
  {
    get_sequence()->set_mimetype(val);
  }

  DOMString attachmentType::get_mimetype_string()
  {
    return get_sequence()->get_mimetype_string();
  }

          

  attachmentType::content_ptr attachmentType::create_content(FsmCbOptions& options)
  {
    static DOMStringPtr myName = new DOMString("content");
    static DOMStringPtr myNsUri = NULL;
    
    XSD::StructCreateElementThroughFsm t( myName, myNsUri, NULL, this->ownerElement(), this->ownerDocument(), _fsm, options, false, false, false, "http://www.w3.org/2001/XMLSchema", "base64Binary");
    attachmentType::content_p node = XSD::createElementTmpl<content, XMLSchema::Types::bt_base64Binary*>(t);
          
    if(options.isSampleCreate && (node->stringValue() == "") ) {
      node->stringValue(node->sampleValue());
    }
    
    _content = node;
      
    return node;
  }

  
  attachmentType::content_p attachmentType::element_content()
  {
    FSM::warnNullNode(_content, "content", "{http://www.w3.org/2001/XMLSchema}content", 0);
    return _content;
  }
    
  void attachmentType::set_content(DOMString val)
  {
    get_sequence()->set_content(val);
  }

  DOMString attachmentType::get_content_string()
  {
    return get_sequence()->get_content_string();
  }

          
  void attachmentType::mark_present_content()
  {
    return get_sequence()->mark_present_content();
  }
        

  /* attribute  functions  */
  

  attr_name_ptr attachmentType::create_attr_name(FsmCbOptions& options)
  {
    static DOMStringPtr myName = new DOMString("name");
    static DOMStringPtr myNsUri = NULL;
    
    if(_attr_name) {
      return _attr_name;
    }  
    XSD::StructCreateAttrThroughFsm t( myName, myNsUri, NULL, this->ownerElement(), this->ownerDocument(), _fsm, options);
    attr_name_p node = XSD::createAttributeTmpl<attr_name>(t);
      
    if(options.isSampleCreate && (node->stringValue() == "") ) {
      node->stringValue(node->sampleValue());
    }
    
    _attr_name = node;
      
    return node;
  }

  
    void attachmentType::set_attr_name(DOMString val)
    {
        
      attribute_attr_name()->stringValue(val);
    }

    DOMString attachmentType::get_attr_name_string()
    {
       
      return attribute_attr_name()->stringValue();
    }

    
  attr_name_p attachmentType::attribute_attr_name()
  {
    FSM::warnNullNode(_attr_name, "attr_name", "{}name", 1);
    return _attr_name;
  }
    
  //constructor
  attachmentType::sequence::sequence(attachmentType* that):
    _that(that)
  {
    XsdFsmBasePtr fsmArray[] = {
    new XsdFSM<mimetype_ptr>( Particle(NULL, DOMString("mimetype"), 1, 1), XsdEvent::ELEMENT_START, new object_unary_mem_fun_t<mimetype_ptr, attachmentType, FsmCbOptions>(_that, &attachmentType::create_mimetype)),
      new XsdFSM<content_ptr>( Particle(NULL, DOMString("content"), 0, 1), XsdEvent::ELEMENT_START, new object_unary_mem_fun_t<content_ptr, attachmentType, FsmCbOptions>(_that, &attachmentType::create_content)),
             
      NULL 
    } ;
    
    XsdSequenceFsmOfFSMs::init(fsmArray);
  }

      

  attachmentType::mimetype_p attachmentType::sequence::element_mimetype()
  {
      attachmentType::mimetype_p node_p = NULL;
    XsdFsmBase* fsm_p = this->allFSMs()[0].get();
    if(fsm_p) 
    {
      XsdFSM<mimetype_ptr> *unitFsm = dynamic_cast<XsdFSM<mimetype_ptr> *>(fsm_p);
      if(unitFsm && unitFsm->nodeList().size()>0) {
        assert(unitFsm->nodeList().size()==1);  
        node_p = unitFsm->nodeList().at(0); 
      }
    }
    
    FSM::warnNullNode(node_p, "mimetype", "{http://www.w3.org/2001/XMLSchema}mimetype", 1);
    return node_p;
        
  }
  
  
  void attachmentType::sequence::set_mimetype(DOMString val)
  {
      
    element_mimetype()->stringValue(val);
  }

  DOMString attachmentType::sequence::get_mimetype_string()
  {
    return element_mimetype()->stringValue();
  }

          

  attachmentType::content_p attachmentType::sequence::element_content()
  {
      attachmentType::content_p node_p = NULL;
    XsdFsmBase* fsm_p = this->allFSMs()[1].get();
    if(fsm_p) 
    {
      XsdFSM<content_ptr> *unitFsm = dynamic_cast<XsdFSM<content_ptr> *>(fsm_p);
      if(unitFsm && unitFsm->nodeList().size()>0) {
        assert(unitFsm->nodeList().size()==1);  
        node_p = unitFsm->nodeList().at(0); 
      }
    }
    
    FSM::warnNullNode(node_p, "content", "{http://www.w3.org/2001/XMLSchema}content", 0);
    return node_p;
        
  }
  
  
  void attachmentType::sequence::set_content(DOMString val)
  {
      
    mark_present_content();
      
    element_content()->stringValue(val);
  }

  DOMString attachmentType::sequence::get_content_string()
  {
    return element_content()->stringValue();
  }

      

  void attachmentType::sequence::mark_present_content()
  {
    DOMStringPtr nsUriPtr = NULL;
    XsdEvent event(nsUriPtr, NULL, DOMString("content"), XsdEvent::ELEMENT_START, false);
    this->processEventThrow(event); 
  }

        
} //  end namespace Types 


} // end namespace NoNS 
    