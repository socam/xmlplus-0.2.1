
 //
 //  This file was automatically generated using XmlPlus xsd2cpp tool.
 //  Please do not edit.
 //
  
#ifndef __NoNS_mimeTopLevelType_H__ 
#define __NoNS_mimeTopLevelType_H__ 

#include <string>
#include <list>

#include "DOM/DOMCommonInc.h"
#include "XSD/PrimitiveTypes.h"
#include "XSD/xsdUtils.h"
#include "XSD/PrimitiveTypes.h"


using namespace std;
using namespace XPlus;
using namespace DOM;
using namespace XMLSchema;


namespace NoNS {
    

namespace Types 
{
    

  /// class for simpleType with restriction on base
  class mimeTopLevelType : public XMLSchema::Types::bt_string
  {
  public:
    /// constructor  
    mimeTopLevelType(AnyTypeCreateArgs args)
    
        : bt_string(args)
      
    {
    

      vector<DOMString> values;
    
      values.push_back("text");
    
      values.push_back("multipart");
    
      values.push_back("application");
    
      values.push_back("message");
    
      values.push_back("image");
    
      values.push_back("audio");
    
      values.push_back("video");
    
      _enumerationCFacet.value(values);
      
      this->appliedCFacets( appliedCFacets() | CF_ENUMERATION| CF_ENUMERATION| CF_ENUMERATION| CF_ENUMERATION| CF_ENUMERATION| CF_ENUMERATION| CF_ENUMERATION );
    }
    
  protected:
    
  };

} // end namespace Types

} // end namespace NoNS 
    

#endif
  