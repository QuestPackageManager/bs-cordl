#pragma once
// IWYU pragma private; include "System/Xml/IDtdParser.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IDtdParser)
namespace System::Xml {
class IDtdInfo;
}
namespace System::Xml {
class IDtdParserAdapter;
}
// Forward declare root types
namespace System::Xml {
class IDtdParser;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::IDtdParser);
// Dependencies
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.IDtdParser
class CORDL_TYPE IDtdParser {
public:
  // Declarations
  /// @brief Method ParseFreeFloatingDtd, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Xml::IDtdInfo* ParseFreeFloatingDtd(::StringW baseUri, ::StringW docTypeName, ::StringW publicId, ::StringW systemId, ::StringW internalSubset,
                                                       ::System::Xml::IDtdParserAdapter* adapter);

  /// @brief Method ParseInternalDtd, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Xml::IDtdInfo* ParseInternalDtd(::System::Xml::IDtdParserAdapter* adapter, bool saveInternalSubset);

  // Ctor Parameters [CppParam { name: "", ty: "IDtdParser", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IDtdParser(IDtdParser const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7188 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Xml
NEED_NO_BOX(::System::Xml::IDtdParser);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::IDtdParser*, "System.Xml", "IDtdParser");
