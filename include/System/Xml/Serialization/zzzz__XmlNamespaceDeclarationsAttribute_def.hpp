#pragma once
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
// Type: System.Xml.Serialization::XmlNamespaceDeclarationsAttribute
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Xml::Serialization {
// Is value type: false
// CS Name: ::System.Xml.Serialization::XmlNamespaceDeclarationsAttribute*
class CORDL_TYPE XmlNamespaceDeclarationsAttribute : public ::System::Attribute {
public:
  // Declarations
  static inline ::System::Xml::Serialization::XmlNamespaceDeclarationsAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x2ecfc28, size 0x8, virtual false, abstract: false, final false
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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Serialization::XmlNamespaceDeclarationsAttribute, 0x10>, "Size mismatch!");

} // namespace System::Xml::Serialization
NEED_NO_BOX(::System::Xml::Serialization::XmlNamespaceDeclarationsAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Serialization::XmlNamespaceDeclarationsAttribute*, "System.Xml.Serialization", "XmlNamespaceDeclarationsAttribute");
