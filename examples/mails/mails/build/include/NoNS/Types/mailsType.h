
 //
 //  This file was automatically generated using XmlPlus xsd2cpp tool.
 //  Please do not edit.
 //
  
#ifndef  __NoNS_types_mailsType_H__
#define  __NoNS_types_mailsType_H__
#include "XSD/xsdUtils.h"
#include "XSD/TypeDefinitionFactory.h"


#include "NoNS/Types/mailType.h"
      
using namespace XPlus; 



namespace NoNS {
    
namespace Types 
{
  
/// The class for complexType mailsType
/// \n Refer to documentation on structures/methods inside ...
class mailsType : public XMLSchema::Types::anyType
{
  public:
  //constructor
  mailsType(AnyTypeCreateArgs args);

  

  /// typedef for the Shared pointer to the node
  typedef AutoPtr<XMLSchema::XmlElement<NoNS::Types::mailType> > mail_ptr;
  /// typedef for the Plain pointer to the node
  typedef XMLSchema::XmlElement<NoNS::Types::mailType>* mail_p;
  
  /// typedef for the node
  typedef XMLSchema::XmlElement<NoNS::Types::mailType> mail; 
  
  struct sequenceList : public XsdFsmArray
  {
  
  /// The MG class inside a complexType
  /// \n Refer to documentation on structures/methods inside ...
  struct sequence : public XsdSequenceFsmOfFSMs 
  {
      

    /// constructor for the MG node
    sequence(mailsType* that);

    

    ///  For the scalar-element with QName "{}mail" :
    ///  \n Returns the scalar element node
    ///  @return the element node fetched
    mail_p element_mail();

        

    //  accessors for MGs/MGDs which are nested children of this MG/MGD
    

  private:  

    inline XsdFsmBase* clone() const {
      return new sequence(*this);
    }

    mailsType*      _that;
  }; // end sequence

    /// constructor for the MG node-list
    sequenceList(mailsType* that);
    
    /// Returns the MG node at supplied index
    /// @param idx index of the MG node to fetch
    /// @return the MG node fetched
    sequence* at(unsigned int idx);

    /// pointer to the parent node (complexType or element)
    mailsType*      _that;

  }; // end sequenceList
  

  ///  For vector-element with QName "{}mail" :
  ///  \n Returns the list of the element nodes
  ///  @return the list of element nodes fetched
  List<mail_ptr> elements_mail();

  ///  For vector-element with QName "{}mail" :
  ///  \n Returns the element node at supplied index
  ///  @param idx index of the element to fetch 
  ///  @return the element node fetched
  mail_p element_mail_at(unsigned int idx);

  

  /// Returns the MG node(or node-list) inside  the complexType 
  sequenceList*  get_sequenceList() {
    return _sequenceList;
  }

    
  /// set size of the sequenceList
  void set_count_sequenceList(unsigned int count) {
    _sequenceList->resize(count);
  }

  /// Returns the MG node inside the complexType, at the supplied index
  sequenceList::sequence* sequence_at(unsigned int idx) {
    return _sequenceList->at(idx);
  }

    

  protected:
  
  XsdAllFsmOfFSMsPtr   _fsmAttrs;   
  XsdFsmBasePtr        _fsmElems;   
  
  
  AutoPtr<sequenceList> _sequenceList;
    
    
  List<mail_ptr> _list_mail;
              

  /// initialize the FSM
  void initFSM();

  
  mail_ptr create_mail(FsmCbOptions& options);
  

public:

  //types which this class needs, as INNER CLASSES
  
  //types which this class needs, as INNER CLASSES : END

  

  private:
  static XSD::TypeDefinitionFactoryTmpl<XmlElement<mailsType> >   s_typeRegistry;
}; //end class mailsType
} // end namespace Types


} // end namespace NoNS 
    
#endif
  