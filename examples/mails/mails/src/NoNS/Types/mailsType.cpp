
 //
 //  This file was automatically generated using XmlPlus xsd2cpp tool.
 //  Please do not edit.
 //
  
#include "NoNS/Types/mailsType.h"

namespace NoNS {
    
namespace Types
{
  XSD::TypeDefinitionFactoryTmpl<XmlElement<mailsType> > mailsType::s_typeRegistry("mailsType", "");

  

  //constructor
  
  mailsType::mailsType(AnyTypeCreateArgs args):
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
  
    , _sequenceList(new sequenceList(this) )
  
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
    
  void mailsType::initFSM()
  {
    XsdFsmBasePtr fsmsAttrs[] = {
  
      NULL
    };

    _fsm->replaceOrAppendUniqueAttributeFsms(fsmsAttrs);
  
    _fsm->replaceContentFsm(_sequenceList);
      
    _fsmAttrs = _fsm->attributeFsm();
    _fsmElems = _fsm->contentFsm();

  }

  /* element functions  */
  

  mailsType::mail_ptr mailsType::create_mail(FsmCbOptions& options)
  {
    static DOMStringPtr myName = new DOMString("mail");
    static DOMStringPtr myNsUri = NULL;
    
    XSD::StructCreateElementThroughFsm t( myName, myNsUri, NULL, this->ownerElement(), this->ownerDocument(), _fsm, options, false, false, false, "", "mailType");
    mailsType::mail_p node = XSD::createElementTmpl<mail, NoNS::Types::mailType*>(t);
          
    _list_mail.push_back(node);
      
    return node;
  }

  
  mailsType::mail_p mailsType::element_mail_at(unsigned int idx)
  {
    if(idx > _list_mail.size()-1) {
      throw IndexOutOfBoundsException("IndexOutOfBoundsException");
    }

    return _list_mail.at(idx);
  }
    
  List<mailsType::mail_ptr> mailsType::elements_mail()
  {
    return _list_mail;
  }
      

  /* attribute  functions  */
  
  //constructor
  mailsType::sequenceList::sequenceList(mailsType* that):
    _that(that),
    XsdFsmArray(new sequence(that), 1, -1 )
  {
  }

  mailsType::sequenceList::sequence* mailsType::sequenceList::at(unsigned int idx)
  {
    return dynamic_cast<sequence *>(this->fsmAt(idx));
  }

  
  //constructor
  mailsType::sequenceList::sequence::sequence(mailsType* that):
    _that(that)
  {
    XsdFsmBasePtr fsmArray[] = {
    new XsdFSM<mail_ptr>( Particle(NULL, DOMString("mail"), 1, 1), XsdEvent::ELEMENT_START, new object_unary_mem_fun_t<mail_ptr, mailsType, FsmCbOptions>(_that, &mailsType::create_mail)),
             
      NULL 
    } ;
    
    XsdSequenceFsmOfFSMs::init(fsmArray);
  }

      

  mailsType::mail_p mailsType::sequenceList::sequence::element_mail()
  {
      mailsType::mail_p node_p = NULL;
    XsdFsmBase* fsm_p = this->allFSMs()[0].get();
    if(fsm_p) 
    {
      XsdFSM<mail_ptr> *unitFsm = dynamic_cast<XsdFSM<mail_ptr> *>(fsm_p);
      if(unitFsm && unitFsm->nodeList().size()>0) {
        assert(unitFsm->nodeList().size()==1);  
        node_p = unitFsm->nodeList().at(0); 
      }
    }
    
    FSM::warnNullNode(node_p, "mail", "{}mail", 1);
    return node_p;
        
  }
  
  
} //  end namespace Types 


} // end namespace NoNS 
    