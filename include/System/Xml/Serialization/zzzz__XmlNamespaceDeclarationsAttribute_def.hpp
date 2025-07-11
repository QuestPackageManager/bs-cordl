#pragma once
// IWYU pragma private; include "System/Xml/Serialization/XmlNamespaceDeclarationsAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(XmlNamespaceDeclarationsAttribute)
// Forward declare root types
namespace System::Xml::Serialization {
class XmlNamespaceDeclarationsAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Serialization::XmlNamespaceDeclarationsAttribute);
// Dependencies System.Attribute
namespace System::Xml::Serialization {
// Is value type: false
// CS Name: System.Xml.Serialization.XmlNamespaceDeclarationsAttribute
class CORDL_TYPE XmlNamespaceDeclarationsAttribute : public ::System::Attribute {
public:
  // Declarations
  static inline ::System::Xml::Serialization::XmlNamespaceDeclarationsAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x4372ae8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlNamespaceDeclarationsAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlNamespaceDeclarationsAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlNamespaceDeclarationsAttribute(XmlNamespaceDeclarationsAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlNamespaceDeclarationsAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlNamespaceDeclarationsAttribute(XmlNamespaceDeclarationsAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7427 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Serialization::XmlNamespaceDeclarationsAttribute, 0x10>, "Size mismatch!");

} // namespace System::Xml::Serialization
NEED_NO_BOX(::System::Xml::Serialization::XmlNamespaceDeclarationsAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Serialization::XmlNamespaceDeclarationsAttribute*, "System.Xml.Serialization", "XmlNamespaceDeclarationsAttribute");
