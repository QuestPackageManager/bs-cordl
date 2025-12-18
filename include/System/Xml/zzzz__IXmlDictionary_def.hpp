#pragma once
// IWYU pragma private; include "System/Xml/IXmlDictionary.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IXmlDictionary)
namespace System::Xml {
class XmlDictionaryString;
}
// Forward declare root types
namespace System::Xml {
class IXmlDictionary;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::IXmlDictionary);
// Dependencies
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.IXmlDictionary
class CORDL_TYPE IXmlDictionary {
public:
  // Declarations
  /// @brief Method TryLookup, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool TryLookup(int32_t key, ::ByRef<::System::Xml::XmlDictionaryString*> result);

  // Ctor Parameters [CppParam { name: "", ty: "IXmlDictionary", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IXmlDictionary(IXmlDictionary const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16901 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Xml
NEED_NO_BOX(::System::Xml::IXmlDictionary);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::IXmlDictionary*, "System.Xml", "IXmlDictionary");
