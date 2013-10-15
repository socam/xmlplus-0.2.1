
 //
 //  This file was automatically generated using XmlPlus xsd2cpp tool.
 //  Please do not edit.
 //
  
#ifndef  __NoNS_types_attachmentType_H__
#define  __NoNS_types_attachmentType_H__
#include "XSD/xsdUtils.h"
#include "XSD/TypeDefinitionFactory.h"


#include "NoNS/attr_name.h"
      
using namespace XPlus; 



namespace NoNS {
    
namespace Types 
{
  
/// The class for complexType attachmentType
/// \n Refer to documentation on structures/methods inside ...
class attachmentType : public XMLSchema::Types::anyType
{
  public:
  //constructor
  attachmentType(AnyTypeCreateArgs args);

  

  /// typedef for the Shared pointer to the node
  typedef AutoPtr<XMLSchema::XmlElement<XMLSchema::Types::bt_string> > mimetype_ptr;
  /// typedef for the Plain pointer to the node
  typedef XMLSchema::XmlElement<XMLSchema::Types::bt_string>* mimetype_p;
  
  /// typedef for the node
  typedef XMLSchema::XmlElement<XMLSchema::Types::bt_string> mimetype; 
  

  /// typedef for the Shared pointer to the node
  typedef AutoPtr<XMLSchema::XmlElement<XMLSchema::Types::bt_base64Binary> > content_ptr;
  /// typedef for the Plain pointer to the node
  typedef XMLSchema::XmlElement<XMLSchema::Types::bt_base64Binary>* content_p;
  
  /// typedef for the node
  typedef XMLSchema::XmlElement<XMLSchema::Types::bt_base64Binary> content; 
  

  /// typedef for the Shared pointer to the node
  typedef AutoPtr<NoNS::attr_name > attr_name_ptr;
  /// typedef for the Plain pointer to the node
  typedef NoNS::attr_name* attr_name_p;
  
  /// typedef for the node
  typedef NoNS::attr_name attr_name; 
  
  /// The MG class inside a complexType
  /// \n Refer to documentation on structures/methods inside ...
  struct sequence : public XsdSequenceFsmOfFSMs 
  {
      

    /// constructor for the MG node
    sequence(attachmentType* that);

    

    ///  For the scalar-element with QName "{http://www.w3.org/2001/XMLSchema}mimetype" :
    ///  \n Returns the scalar element node
    ///  @return the element node fetched
    mimetype_p element_mimetype();

        

    ///  For the scalar-element with QName "{http://www.w3.org/2001/XMLSchema}mimetype" :
    ///  \n Sets the value of the scalar element with the supplied value.
    ///  @param val the value(as DOMString) to set with 
    void set_mimetype(DOMString val);

    ///  For the scalar-element with QName "{http://www.w3.org/2001/XMLSchema}mimetype" :
    ///  \n Returns the value of the scalar element 
    ///  @return the value(as DOMString) of the element 
    DOMString get_mimetype_string();

          

    ///  For the scalar-element with QName "{http://www.w3.org/2001/XMLSchema}content" :
    ///  \n Returns the scalar element node
    ///  @return the element node fetched
    content_p element_content();

        

    ///  For the scalar-element with QName "{http://www.w3.org/2001/XMLSchema}content" :
    ///  \n Sets the value of the scalar element with the supplied value.
    ///  @param val the value(as DOMString) to set with 
    void set_content(DOMString val);

    ///  For the scalar-element with QName "{http://www.w3.org/2001/XMLSchema}content" :
    ///  \n Returns the value of the scalar element 
    ///  @return the value(as DOMString) of the element 
    DOMString get_content_string();

          
    ///  For the optional scalar element with QName "{http://www.w3.org/2001/XMLSchema}content" :
    ///  \n Marks the element as present 
    void mark_present_content();
    

    //  accessors for MGs/MGDs which are nested children of this MG/MGD
    

  private:  

    inline XsdFsmBase* clone() const {
      return new sequence(*this);
    }

    attachmentType*      _that;
  }; // end sequence
  

  ///  For the scalar-element with QName "{http://www.w3.org/2001/XMLSchema}mimetype" :
  ///  \n Returns the scalar element node
  ///  @return the element node fetched
  mimetype_p element_mimetype();
      

  ///  For the scalar-element with QName "{http://www.w3.org/2001/XMLSchema}mimetype" :
  ///  \n Sets the value of the element with the supplied value.
  ///  @param val the value(as DOMString) to set with 
  void set_mimetype(DOMString val);
  
  ///  For the scalar-element with QName "{http://www.w3.org/2001/XMLSchema}mimetype" :
  ///  \n Returns the value(as DOMString) of the element
  DOMString get_mimetype_string();

        

  ///  For the scalar-element with QName "{http://www.w3.org/2001/XMLSchema}content" :
  ///  \n Returns the scalar element node
  ///  @return the element node fetched
  content_p element_content();
      

  ///  For the scalar-element with QName "{http://www.w3.org/2001/XMLSchema}content" :
  ///  \n Sets the value of the element with the supplied value.
  ///  @param val the value(as DOMString) to set with 
  void set_content(DOMString val);
  
  ///  For the scalar-element with QName "{http://www.w3.org/2001/XMLSchema}content" :
  ///  \n Returns the value(as DOMString) of the element
  DOMString get_content_string();

        

  ///  For the optional scalar element with QName "{http://www.w3.org/2001/XMLSchema}content" :
  ///  Marks the element as present 
  void mark_present_content();

  

  ///  For the scalar-attribute with QName "{}name" :
  ///  \n Returns the scalar attribute node
  ///  @return the attribute node fetched
  attr_name_p attribute_attr_name();
      

  ///  For the scalar-attribute with QName "{}name" :
  ///  \n Sets the value of the attribute with the supplied value.
  ///  @param val the value(as DOMString) to set with 
  void set_attr_name(DOMString val);
  
  ///  For the scalar-attribute with QName "{}name" :
  ///  \n Returns the value(as DOMString) of the attribute
  DOMString get_attr_name_string();

        

  /// Returns the MG node(or node-list) inside  the complexType 
  sequence*  get_sequence() {
    return _sequence;
  }

    

  protected:
  
  XsdAllFsmOfFSMsPtr   _fsmAttrs;   
  XsdFsmBasePtr        _fsmElems;   
  
  
  AutoPtr<sequence> _sequence;
    
    
  mimetype_ptr _mimetype;
            
  content_ptr _content;
            
  attr_name_ptr _attr_name;
          

  /// initialize the FSM
  void initFSM();

  
  mimetype_ptr create_mimetype(FsmCbOptions& options);

  content_ptr create_content(FsmCbOptions& options);

  attr_name_ptr create_attr_name(FsmCbOptions& options);
  

public:

  //types which this class needs, as INNER CLASSES
  
  //types which this class needs, as INNER CLASSES : END

  

  private:
  static XSD::TypeDefinitionFactoryTmpl<XmlElement<attachmentType> >   s_typeRegistry;
}; //end class attachmentType
} // end namespace Types


} // end namespace NoNS 
    
#endif
  