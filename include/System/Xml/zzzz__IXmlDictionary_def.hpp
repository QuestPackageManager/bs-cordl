#pragma once
// IWYU pragma private; include "System/Xml/IXmlDictionary.hpp"
#include "beatsaber-hook/shared/types.hpp"
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
MARK_REF_T(::System::Xml::IXmlDictionary*);
DEFINE_IL2CPP_CLASS(::System::Xml::IXmlDictionary*, "System.Xml", "IXmlDictionary");
// Dependencies
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.IXmlDictionary
class CORDL_TYPE IXmlDictionary {
public:
  // Declarations
  /// @brief Method TryLookup, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool TryLookup(int32_t key, ::by_ref<::System::Xml::XmlDictionaryString*> result);

  // Ctor Parameters [CppParam { name: "", ty: "IXmlDictionary", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IXmlDictionary(IXmlDictionary const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16902 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Xml
