
 //
 //  This file was automatically generated using XmlPlus xsd2cpp tool.
 //  Please do not edit.
 //
  
#ifndef  __NoNS_types_mailType_H__
#define  __NoNS_types_mailType_H__
#include "XSD/xsdUtils.h"
#include "XSD/TypeDefinitionFactory.h"


#include "NoNS/Types/envelopeType.h"
      
#include "NoNS/Types/bodyType.h"
      
#include "NoNS/Types/attachmentType.h"
      
using namespace XPlus; 



namespace NoNS {
    
namespace Types 
{
  
/// The class for complexType mailType
/// \n Refer to documentation on structures/methods inside ...
class mailType : public XMLSchema::Types::anyType
{
  public:
  //constructor
  mailType(AnyTypeCreateArgs args);

  

  /// typedef for the Shared pointer to the node
  typedef AutoPtr<XMLSchema::XmlElement<NoNS::Types::envelopeType> > envelope_ptr;
  /// typedef for the Plain pointer to the node
  typedef XMLSchema::XmlElement<NoNS::Types::envelopeType>* envelope_p;
  
  /// typedef for the node
  typedef XMLSchema::XmlElement<NoNS::Types::envelopeType> envelope; 
  

  /// typedef for the Shared pointer to the node
  typedef AutoPtr<XMLSchema::XmlElement<NoNS::Types::bodyType> > body_ptr;
  /// typedef for the Plain pointer to the node
  typedef XMLSchema::XmlElement<NoNS::Types::bodyType>* body_p;
  
  /// typedef for the node
  typedef XMLSchema::XmlElement<NoNS::Types::bodyType> body; 
  

  /// typedef for the Shared pointer to the node
  typedef AutoPtr<XMLSchema::XmlElement<NoNS::Types::attachmentType> > attachment_ptr;
  /// typedef for the Plain pointer to the node
  typedef XMLSchema::XmlElement<NoNS::Types::attachmentType>* attachment_p;
  
  /// typedef for the node
  typedef XMLSchema::XmlElement<NoNS::Types::attachmentType> attachment; 
  

  /// typedef for the Shared pointer to the node
  typedef AutoPtr<XMLSchema::XmlAttribute<XMLSchema::Types::bt_integer> > attr_id_ptr;
  /// typedef for the Plain pointer to the node
  typedef XMLSchema::XmlAttribute<XMLSchema::Types::bt_integer>* attr_id_p;
  
  /// typedef for the node
  typedef XMLSchema::XmlAttribute<XMLSchema::Types::bt_integer> attr_id; 
  
  /// The MG class inside a complexType
  /// \n Refer to documentation on structures/methods inside ...
  struct sequence : public XsdSequenceFsmOfFSMs 
  {
      

    /// constructor for the MG node
    sequence(mailType* that);

    

    ///  For the scalar-element with QName "{}envelope" :
    ///  \n Returns the scalar element node
    ///  @return the element node fetched
    envelope_p element_envelope();

        

    ///  For the scalar-element with QName "{}body" :
    ///  \n Returns the scalar element node
    ///  @return the element node fetched
    body_p element_body();

        

    ///  For the scalar-element with QName "{}body" :
    ///  \n Sets the value of the scalar element with the supplied value.
    ///  @param val the value(as DOMString) to set with 
    void set_body(DOMString val);

    ///  For the scalar-element with QName "{}body" :
    ///  \n Returns the value of the scalar element 
    ///  @return the value(as DOMString) of the element 
    DOMString get_body_string();

          

    ///  For vector-element with QName "{}attachment" :
    ///  \n Returns the list of the element nodes
    ///  @return the list of element nodes fetched
    List<attachment_ptr> elements_attachment();

    ///  For vector-element with QName "{}attachment" :
    ///  \n Returns the element node at supplied index
    ///  @param idx index of the element to fetch 
    ///  @return the element node fetched
    attachment_p element_attachment_at(unsigned int idx);

        

    ///  For vector-element with QName "{}attachment" :
    ///  \n Adds one element to the end of the "list of the element nodes"
    ///  @return the pointer to the added element
    attachment_p add_node_attachment();

    ///  For vector-element with QName "{}attachment" :
    ///  \n Sizes-up the "list of the element nodes" with the supplied size
    ///  @param size the request size(unsigned int) of the list
    ///  @return the list of "pointer-to-element-node"
    List<attachment_ptr> set_count_attachment(unsigned int size);


      

    //  accessors for MGs/MGDs which are nested children of this MG/MGD
    

  private:  

    inline XsdFsmBase* clone() const {
      return new sequence(*this);
    }

    mailType*      _that;
  }; // end sequence
  

  ///  For the scalar-element with QName "{}envelope" :
  ///  \n Returns the scalar element node
  ///  @return the element node fetched
  envelope_p element_envelope();
      

  ///  For the scalar-element with QName "{}body" :
  ///  \n Returns the scalar element node
  ///  @return the element node fetched
  body_p element_body();
      

  ///  For the scalar-element with QName "{}body" :
  ///  \n Sets the value of the element with the supplied value.
  ///  @param val the value(as DOMString) to set with 
  void set_body(DOMString val);
  
  ///  For the scalar-element with QName "{}body" :
  ///  \n Returns the value(as DOMString) of the element
  DOMString get_body_string();

        

  ///  For vector-element with QName "{}attachment" :
  ///  \n Returns the list of the element nodes
  ///  @return the list of element nodes fetched
  List<attachment_ptr> elements_attachment();

  ///  For vector-element with QName "{}attachment" :
  ///  \n Returns the element node at supplied index
  ///  @param idx index of the element to fetch 
  ///  @return the element node fetched
  attachment_p element_attachment_at(unsigned int idx);

  

  ///  For vector-element with QName "{}attachment" :
  ///  \n Adds one element to the end of the "list of the element nodes"
  ///  @return the pointer to the added element
  attachment_p add_node_attachment();
  
  ///  For vector-element with QName "{}attachment" :
  ///  \n Sizes-up the "list of the element nodes" with the supplied size
  ///  @param size the request size(unsigned int) of the list
  ///  @return the list of "pointer-to-element-node"
  List<attachment_ptr> set_count_attachment(unsigned int size);

      

  ///  For the scalar-attribute with QName "{http://www.w3.org/2001/XMLSchema}id" :
  ///  \n Returns the scalar attribute node
  ///  @return the attribute node fetched
  attr_id_p attribute_attr_id();
      

  ///  For the scalar-attribute with QName "{http://www.w3.org/2001/XMLSchema}id" :
  ///  \n Sets the value of the attribute with the supplied value.
  ///  @param val the value(as DOMString) to set with 
  void set_attr_id(DOMString val);
  
  ///  For the scalar-attribute with QName "{http://www.w3.org/2001/XMLSchema}id" :
  ///  \n Returns the value(as DOMString) of the attribute
  DOMString get_attr_id_string();

        

  ///  For the scalar-attribute with QName "{http://www.w3.org/2001/XMLSchema}id" :
  ///  \n Sets the value of the attribute with the supplied value.
  ///  @param val the value(as XPlus::Int64) to set with 
  void set_attr_id(XPlus::Int64 val);

  ///  For the scalar-attribute with QName "{http://www.w3.org/2001/XMLSchema}id" :
  ///  \n Returns the value of the attribute
  ///  @return the value(as XPlus::Int64) of the attribute 
  XPlus::Int64 get_attr_id();

        

  /// Returns the MG node(or node-list) inside  the complexType 
  sequence*  get_sequence() {
    return _sequence;
  }

    

  protected:
  
  XsdAllFsmOfFSMsPtr   _fsmAttrs;   
  XsdFsmBasePtr        _fsmElems;   
  
  
  AutoPtr<sequence> _sequence;
    
    
  envelope_ptr _envelope;
            
  body_ptr _body;
            
  List<attachment_ptr> _list_attachment;
            
  attr_id_ptr _attr_id;
          

  /// initialize the FSM
  void initFSM();

  
  envelope_ptr create_envelope(FsmCbOptions& options);

  body_ptr create_body(FsmCbOptions& options);

  attachment_ptr create_attachment(FsmCbOptions& options);

  attr_id_ptr create_attr_id(FsmCbOptions& options);
  

public:

  //types which this class needs, as INNER CLASSES
  
  //types which this class needs, as INNER CLASSES : END

  

  private:
  static XSD::TypeDefinitionFactoryTmpl<XmlElement<mailType> >   s_typeRegistry;
}; //end class mailType
} // end namespace Types


} // end namespace NoNS 
    
#endif
  