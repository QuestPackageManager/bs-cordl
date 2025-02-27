#pragma once
// IWYU pragma private; include "System/Xml/Serialization/XmlIncludeAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(XmlIncludeAttribute)
namespace System {
class Type;
}
// Forward declare root types
namespace System::Xml::Serialization {
class XmlIncludeAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Serialization::XmlIncludeAttribute);
// Dependencies System.Attribute
namespace System::Xml::Serialization {
// Is value type: false
// CS Name: System.Xml.Serialization.XmlIncludeAttribute
class CORDL_TYPE XmlIncludeAttribute : public ::System::Attribute {
public:
  // Declarations
  __declspec(property(get = get_Type)) ::System::Type* Type;

  /// @brief Field type, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_type, put = __cordl_internal_set_type)) ::System::Type* type;

  constexpr ::System::Type* const& __cordl_internal_get_type() const;

  constexpr ::System::Type*& __cordl_internal_get_type();

  constexpr void __cordl_internal_set_type(::System::Type* value);

  /// @brief Method get_Type, addr 0x43802e4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Type* get_Type();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlIncludeAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlIncludeAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlIncludeAttribute(XmlIncludeAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlIncludeAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlIncludeAttribute(XmlIncludeAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7421 };

  /// @brief Field type, offset: 0x10, size: 0x8, def value: None
  ::System::Type* ___type;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Serialization::XmlIncludeAttribute, ___type) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Serialization::XmlIncludeAttribute, 0x18>, "Size mismatch!");

} // namespace System::Xml::Serialization
NEED_NO_BOX(::System::Xml::Serialization::XmlIncludeAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Serialization::XmlIncludeAttribute*, "System.Xml.Serialization", "XmlIncludeAttribute");
