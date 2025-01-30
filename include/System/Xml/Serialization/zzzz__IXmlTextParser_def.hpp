#pragma once
// IWYU pragma private; include "System/Xml/Serialization/IXmlTextParser.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IXmlTextParser)
// Forward declare root types
namespace System::Xml::Serialization {
class IXmlTextParser;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Serialization::IXmlTextParser);
// Dependencies
namespace System::Xml::Serialization {
// Is value type: false
// CS Name: System.Xml.Serialization.IXmlTextParser
class CORDL_TYPE IXmlTextParser {
public:
  // Declarations
  __declspec(property(get = get_Normalized, put = set_Normalized)) bool Normalized;

  /// @brief Method get_Normalized, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_Normalized();

  /// @brief Method set_Normalized, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_Normalized(bool value);

  // Ctor Parameters [CppParam { name: "", ty: "IXmlTextParser", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IXmlTextParser(IXmlTextParser const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7394 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Xml::Serialization
NEED_NO_BOX(::System::Xml::Serialization::IXmlTextParser);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Serialization::IXmlTextParser*, "System.Xml.Serialization", "IXmlTextParser");
