
 //
 //  This file was automatically generated using XmlPlus xsd2cpp tool.
 //  Please do not edit.
 //
  
#ifndef  __NoNS_types_envelopeType_H__
#define  __NoNS_types_envelopeType_H__
#include "XSD/xsdUtils.h"
#include "XSD/TypeDefinitionFactory.h"


#include "NoNS/Date.h"
      
#include "NoNS/header.h"
      
using namespace XPlus; 



namespace NoNS {
    
namespace Types 
{
  
/// The class for complexType envelopeType
/// \n Refer to documentation on structures/methods inside ...
class envelopeType : public XMLSchema::Types::anyType
{
  public:
  //constructor
  envelopeType(AnyTypeCreateArgs args);

  

  /// typedef for the Shared pointer to the node
  typedef AutoPtr<XMLSchema::XmlElement<XMLSchema::Types::bt_string> > From_ptr;
  /// typedef for the Plain pointer to the node
  typedef XMLSchema::XmlElement<XMLSchema::Types::bt_string>* From_p;
  
  /// typedef for the node
  typedef XMLSchema::XmlElement<XMLSchema::Types::bt_string> From; 
  

  /// typedef for the Shared pointer to the node
  typedef AutoPtr<XMLSchema::XmlElement<XMLSchema::Types::bt_string> > To_ptr;
  /// typedef for the Plain pointer to the node
  typedef XMLSchema::XmlElement<XMLSchema::Types::bt_string>* To_p;
  
  /// typedef for the node
  typedef XMLSchema::XmlElement<XMLSchema::Types::bt_string> To; 
  

  /// typedef for the Shared pointer to the node
  typedef AutoPtr<NoNS::Date > Date_ptr;
  /// typedef for the Plain pointer to the node
  typedef NoNS::Date* Date_p;
  
  /// typedef for the node
  typedef NoNS::Date Date; 
  

  /// typedef for the Shared pointer to the node
  typedef AutoPtr<XMLSchema::XmlElement<XMLSchema::Types::bt_string> > Subject_ptr;
  /// typedef for the Plain pointer to the node
  typedef XMLSchema::XmlElement<XMLSchema::Types::bt_string>* Subject_p;
  
  /// typedef for the node
  typedef XMLSchema::XmlElement<XMLSchema::Types::bt_string> Subject; 
  

  /// typedef for the Shared pointer to the node
  typedef AutoPtr<NoNS::header > header_ptr;
  /// typedef for the Plain pointer to the node
  typedef NoNS::header* header_p;
  
  /// typedef for the node
  typedef NoNS::header header; 
  
  /// The MG class inside a complexType
  /// \n Refer to documentation on structures/methods inside ...
  struct sequence : public XsdSequenceFsmOfFSMs 
  {
      

    /// constructor for the MG node
    sequence(envelopeType* that);

    

    ///  For the scalar-element with QName "{http://www.w3.org/2001/XMLSchema}From" :
    ///  \n Returns the scalar element node
    ///  @return the element node fetched
    From_p element_From();

        

    ///  For the scalar-element with QName "{http://www.w3.org/2001/XMLSchema}From" :
    ///  \n Sets the value of the scalar element with the supplied value.
    ///  @param val the value(as DOMString) to set with 
    void set_From(DOMString val);

    ///  For the scalar-element with QName "{http://www.w3.org/2001/XMLSchema}From" :
    ///  \n Returns the value of the scalar element 
    ///  @return the value(as DOMString) of the element 
    DOMString get_From_string();

          

    ///  For the scalar-element with QName "{http://www.w3.org/2001/XMLSchema}To" :
    ///  \n Returns the scalar element node
    ///  @return the element node fetched
    To_p element_To();

        

    ///  For the scalar-element with QName "{http://www.w3.org/2001/XMLSchema}To" :
    ///  \n Sets the value of the scalar element with the supplied value.
    ///  @param val the value(as DOMString) to set with 
    void set_To(DOMString val);

    ///  For the scalar-element with QName "{http://www.w3.org/2001/XMLSchema}To" :
    ///  \n Returns the value of the scalar element 
    ///  @return the value(as DOMString) of the element 
    DOMString get_To_string();

          

    ///  For the scalar-element with QName "{}Date" :
    ///  \n Returns the scalar element node
    ///  @return the element node fetched
    Date_p element_Date();

        

    ///  For the scalar-element with QName "{}Date" :
    ///  \n Sets the value of the scalar element with the supplied value.
    ///  @param val the value(as DOMString) to set with 
    void set_Date(DOMString val);

    ///  For the scalar-element with QName "{}Date" :
    ///  \n Returns the value of the scalar element 
    ///  @return the value(as DOMString) of the element 
    DOMString get_Date_string();

          

    ///  For the scalar-element with QName "{}Date" :
    ///  \n Sets the value of the scalar element with the supplied value.
    ///  @param val the value(as XPlus::DateTime) to set with 
    void set_Date(XPlus::DateTime val);

    ///  For the scalar-element with QName "{}Date" :
    ///  \n Returns the value of the scalar element
    ///  @return the value(as XPlus::DateTime) of the element 
    XPlus::DateTime get_Date();

          

    ///  For the scalar-element with QName "{http://www.w3.org/2001/XMLSchema}Subject" :
    ///  \n Returns the scalar element node
    ///  @return the element node fetched
    Subject_p element_Subject();

        

    ///  For the scalar-element with QName "{http://www.w3.org/2001/XMLSchema}Subject" :
    ///  \n Sets the value of the scalar element with the supplied value.
    ///  @param val the value(as DOMString) to set with 
    void set_Subject(DOMString val);

    ///  For the scalar-element with QName "{http://www.w3.org/2001/XMLSchema}Subject" :
    ///  \n Returns the value of the scalar element 
    ///  @return the value(as DOMString) of the element 
    DOMString get_Subject_string();

          

    ///  For vector-element with QName "{}header" :
    ///  \n Returns the list of the element nodes
    ///  @return the list of element nodes fetched
    List<header_ptr> elements_header();

    ///  For vector-element with QName "{}header" :
    ///  \n Returns the element node at supplied index
    ///  @param idx index of the element to fetch 
    ///  @return the element node fetched
    header_p element_header_at(unsigned int idx);

        
        

    ///  For vector-element with QName "{}header" :
    ///  \n Sets the value of the element at the supplied index with the supplied value
    ///  @param idx index of the element 
    ///  @param val the value(as DOMString) to set with 
    void set_header(unsigned int idx, DOMString val);

    ///  For vector-element with QName "{}header" :
    ///  \n Returns the value of the element at the supplied index with the supplied value.
    ///  @param idx index of the element 
    ///  @return the value(as DOMString) of the element 
    DOMString get_header_string(unsigned int idx);


          

    ///  For vector-element with QName "{}header" :
    ///  \n Adds one element to the end of the "list of the element nodes"
    ///  @return the pointer to the added element
    header_p add_node_header();

    ///  For vector-element with QName "{}header" :
    ///  \n Sizes-up the "list of the element nodes" with the supplied size
    ///  @param size the request size(unsigned int) of the list
    ///  @return the list of "pointer-to-element-node"
    List<header_ptr> set_count_header(unsigned int size);


      
      
    ///  For vector-element with QName "{}header" :
    ///  \n Adds one element to the end of the "list of the element nodes", and sets the value with supplied DOMString value
    ///  @param val the value(as DOMString) to set with 
    void add_header_string(DOMString val);
      
        

    //  accessors for MGs/MGDs which are nested children of this MG/MGD
    

  private:  

    inline XsdFsmBase* clone() const {
      return new sequence(*this);
    }

    envelopeType*      _that;
  }; // end sequence
  

  ///  For the scalar-element with QName "{http://www.w3.org/2001/XMLSchema}From" :
  ///  \n Returns the scalar element node
  ///  @return the element node fetched
  From_p element_From();
      

  ///  For the scalar-element with QName "{http://www.w3.org/2001/XMLSchema}From" :
  ///  \n Sets the value of the element with the supplied value.
  ///  @param val the value(as DOMString) to set with 
  void set_From(DOMString val);
  
  ///  For the scalar-element with QName "{http://www.w3.org/2001/XMLSchema}From" :
  ///  \n Returns the value(as DOMString) of the element
  DOMString get_From_string();

        

  ///  For the scalar-element with QName "{http://www.w3.org/2001/XMLSchema}To" :
  ///  \n Returns the scalar element node
  ///  @return the element node fetched
  To_p element_To();
      

  ///  For the scalar-element with QName "{http://www.w3.org/2001/XMLSchema}To" :
  ///  \n Sets the value of the element with the supplied value.
  ///  @param val the value(as DOMString) to set with 
  void set_To(DOMString val);
  
  ///  For the scalar-element with QName "{http://www.w3.org/2001/XMLSchema}To" :
  ///  \n Returns the value(as DOMString) of the element
  DOMString get_To_string();

        

  ///  For the scalar-element with QName "{}Date" :
  ///  \n Returns the scalar element node
  ///  @return the element node fetched
  Date_p element_Date();
      

  ///  For the scalar-element with QName "{}Date" :
  ///  \n Sets the value of the element with the supplied value.
  ///  @param val the value(as DOMString) to set with 
  void set_Date(DOMString val);
  
  ///  For the scalar-element with QName "{}Date" :
  ///  \n Returns the value(as DOMString) of the element
  DOMString get_Date_string();

        

  ///  For the scalar-element with QName "{}Date" :
  ///  \n Sets the value of the element with the supplied value.
  ///  @param val the value(as XPlus::DateTime) to set with 
  void set_Date(XPlus::DateTime val);

  ///  For the scalar-element with QName "{}Date" :
  ///  \n Returns the value of the element
  ///  @return the value(as XPlus::DateTime) of the element 
  XPlus::DateTime get_Date();

        

  ///  For the scalar-element with QName "{http://www.w3.org/2001/XMLSchema}Subject" :
  ///  \n Returns the scalar element node
  ///  @return the element node fetched
  Subject_p element_Subject();
      

  ///  For the scalar-element with QName "{http://www.w3.org/2001/XMLSchema}Subject" :
  ///  \n Sets the value of the element with the supplied value.
  ///  @param val the value(as DOMString) to set with 
  void set_Subject(DOMString val);
  
  ///  For the scalar-element with QName "{http://www.w3.org/2001/XMLSchema}Subject" :
  ///  \n Returns the value(as DOMString) of the element
  DOMString get_Subject_string();

        

  ///  For vector-element with QName "{}header" :
  ///  \n Returns the list of the element nodes
  ///  @return the list of element nodes fetched
  List<header_ptr> elements_header();

  ///  For vector-element with QName "{}header" :
  ///  \n Returns the element node at supplied index
  ///  @param idx index of the element to fetch 
  ///  @return the element node fetched
  header_p element_header_at(unsigned int idx);

  

  ///  For vector-element with QName "{}header" :
  ///  \n Sets the value of the element at the supplied index with the supplied value
  ///  @param idx index of the element 
  ///  @param val the value(as DOMString) to set with 
  void set_header(unsigned int idx, DOMString val);

  ///  For vector-element with QName "{}header" :
  ///  \n Returns the value of the element at the supplied index with the supplied value.
  ///  @param idx index of the element 
  ///  @return the value(as DOMString) of the element 
  DOMString get_header_string(unsigned int idx);

        

  ///  For vector-element with QName "{}header" :
  ///  \n Adds one element to the end of the "list of the element nodes"
  ///  @return the pointer to the added element
  header_p add_node_header();
  
  ///  For vector-element with QName "{}header" :
  ///  \n Sizes-up the "list of the element nodes" with the supplied size
  ///  @param size the request size(unsigned int) of the list
  ///  @return the list of "pointer-to-element-node"
  List<header_ptr> set_count_header(unsigned int size);

      
      
  ///  For vector-element with QName "{}header" :
  ///  \n Adds one element to the end of the "list of the element nodes", and sets the value with supplied DOMString value
  ///  @param val the value(as DOMString) to set with 
  void add_header_string(DOMString val);
      
        

  /// Returns the MG node(or node-list) inside  the complexType 
  sequence*  get_sequence() {
    return _sequence;
  }

    

  protected:
  
  XsdAllFsmOfFSMsPtr   _fsmAttrs;   
  XsdFsmBasePtr        _fsmElems;   
  
  
  AutoPtr<sequence> _sequence;
    
    
  From_ptr _From;
            
  To_ptr _To;
            
  Date_ptr _Date;
            
  Subject_ptr _Subject;
            
  List<header_ptr> _list_header;
              

  /// initialize the FSM
  void initFSM();

  
  From_ptr create_From(FsmCbOptions& options);

  To_ptr create_To(FsmCbOptions& options);

  Date_ptr create_Date(FsmCbOptions& options);

  Subject_ptr create_Subject(FsmCbOptions& options);

  header_ptr create_header(FsmCbOptions& options);
  

public:

  //types which this class needs, as INNER CLASSES
  
  //types which this class needs, as INNER CLASSES : END

  

  private:
  static XSD::TypeDefinitionFactoryTmpl<XmlElement<envelopeType> >   s_typeRegistry;
}; //end class envelopeType
} // end namespace Types


} // end namespace NoNS 
    
#endif
  