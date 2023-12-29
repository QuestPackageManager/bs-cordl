#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IDtdParser)
namespace System::Xml {
class IDtdParserAdapter;
}
namespace System::Xml {
class IDtdInfo;
}
// Forward declare root types
namespace System::Xml {
class IDtdParser;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::IDtdParser);
// Type: System.Xml::IDtdParser
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11354))
// CS Name: ::System.Xml::IDtdParser*
class CORDL_TYPE IDtdParser {
public:
  // Declarations
  /// @brief Method ParseInternalDtd addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::System::Xml::IDtdInfo* ParseInternalDtd(::System::Xml::IDtdParserAdapter* adapter, bool saveInternalSubset);

  /// @brief Method ParseFreeFloatingDtd addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::System::Xml::IDtdInfo* ParseFreeFloatingDtd(::StringW baseUri, ::StringW docTypeName, ::StringW publicId, ::StringW systemId, ::StringW internalSubset,
                                                       ::System::Xml::IDtdParserAdapter* adapter);

  // Ctor Parameters [CppParam { name: "", ty: "IDtdParser", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IDtdParser(IDtdParser&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IDtdParser", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IDtdParser(IDtdParser const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Xml
NEED_NO_BOX(::System::Xml::IDtdParser);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::IDtdParser*, "System.Xml", "IDtdParser");
