#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(XmlAttributeAttribute)
// Forward declare root types
namespace System::Xml::Serialization {
class XmlAttributeAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Serialization::XmlAttributeAttribute);
// Type: System.Xml.Serialization::XmlAttributeAttribute
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Serialization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11586))
// CS Name: ::System.Xml.Serialization::XmlAttributeAttribute*
class CORDL_TYPE XmlAttributeAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field attributeName, offset 0x10, size 0x8
  __declspec(property(get = __get_attributeName, put = __set_attributeName))::StringW attributeName;

  constexpr ::StringW& __get_attributeName();

  constexpr ::StringW const& __get_attributeName() const;

  constexpr void __set_attributeName(::StringW value);

  static inline ::System::Xml::Serialization::XmlAttributeAttribute* New_ctor(::StringW attributeName);

  /// @brief Method .ctor, addr 0x28abed0, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::StringW attributeName);

  // Ctor Parameters [CppParam { name: "", ty: "XmlAttributeAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlAttributeAttribute(XmlAttributeAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlAttributeAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlAttributeAttribute(XmlAttributeAttribute const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlAttributeAttribute();

public:
  /// @brief Field attributeName, offset: 0x10, size: 0x8, def value: None
  ::StringW ___attributeName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Serialization::XmlAttributeAttribute, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlAttributeAttribute, ___attributeName) == 0x10, "Offset mismatch!");

} // namespace System::Xml::Serialization
NEED_NO_BOX(::System::Xml::Serialization::XmlAttributeAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Serialization::XmlAttributeAttribute*, "System.Xml.Serialization", "XmlAttributeAttribute");
