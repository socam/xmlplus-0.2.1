
 //
 //  This file was automatically generated using XmlPlus xsd2cpp tool.
 //  Please do not edit.
 //
  
#ifndef __NoNS_bodyType_H__ 
#define __NoNS_bodyType_H__ 

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
  class bodyType : public XMLSchema::Types::bt_string
  {
  public:
    /// constructor  
    bodyType(AnyTypeCreateArgs args)
    
        : bt_string(args)
      
    {
    
      this->appliedCFacets( appliedCFacets()  );
    }
    
  protected:
    
  };

} // end namespace Types

} // end namespace NoNS 
    

#endif
  