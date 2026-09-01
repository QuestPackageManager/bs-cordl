#pragma once
// IWYU pragma private; include "System\Xml\Serialization\XmlAnyAttributeAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(XmlAnyAttributeAttribute)
// Forward declare root types
namespace System::Xml::Serialization {
class XmlAnyAttributeAttribute;
}
// Write type traits
MARK_REF_T(::System::Xml::Serialization::XmlAnyAttributeAttribute*);
DEFINE_IL2CPP_CLASS(::System::Xml::Serialization::XmlAnyAttributeAttribute*, "System.Xml.Serialization", "XmlAnyAttributeAttribute");
// Dependencies System.Attribute
namespace System::Xml::Serialization {
// Is value type: false
// CS Name: System.Xml.Serialization.XmlAnyAttributeAttribute
class CORDL_TYPE XmlAnyAttributeAttribute : public ::System::Attribute {
public:
  // Declarations
  static inline ::System::Xml::Serialization::XmlAnyAttributeAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x62f2200, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlAnyAttributeAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlAnyAttributeAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlAnyAttributeAttribute(XmlAnyAttributeAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlAnyAttributeAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlAnyAttributeAttribute(XmlAnyAttributeAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9496 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Xml::Serialization::XmlAnyAttributeAttribute) == 0x10, "Size mismatch!");

} // namespace System::Xml::Serialization
