#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(XmlIgnoreAttribute)
// Forward declare root types
namespace System::Xml::Serialization {
class XmlIgnoreAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Serialization::XmlIgnoreAttribute);
// Type: System.Xml.Serialization::XmlIgnoreAttribute
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Xml::Serialization {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2547))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11589))
// CS Name: ::System.Xml.Serialization::XmlIgnoreAttribute*
class CORDL_TYPE XmlIgnoreAttribute : public ::System::Attribute {
public:
  // Declarations
  static inline ::System::Xml::Serialization::XmlIgnoreAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x28abf54, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "XmlIgnoreAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlIgnoreAttribute(XmlIgnoreAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlIgnoreAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlIgnoreAttribute(XmlIgnoreAttribute const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlIgnoreAttribute();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Serialization::XmlIgnoreAttribute, 0x10>, "Size mismatch!");

} // namespace System::Xml::Serialization
NEED_NO_BOX(::System::Xml::Serialization::XmlIgnoreAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Serialization::XmlIgnoreAttribute*, "System.Xml.Serialization", "XmlIgnoreAttribute");
