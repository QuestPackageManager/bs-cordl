#pragma once
// IWYU pragma private; include "System/Xml/Serialization/XmlTypeAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(XmlTypeAttribute)
namespace System::Text {
class StringBuilder;
}
// Forward declare root types
namespace System::Xml::Serialization {
class XmlTypeAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Serialization::XmlTypeAttribute);
// Dependencies System.Attribute
namespace System::Xml::Serialization {
// Is value type: false
// CS Name: System.Xml.Serialization.XmlTypeAttribute
class CORDL_TYPE XmlTypeAttribute : public ::System::Attribute {
public:
  // Declarations
  __declspec(property(get = get_IncludeInSchema)) bool IncludeInSchema;

  __declspec(property(get = get_Namespace)) ::StringW Namespace;

  __declspec(property(get = get_TypeName)) ::StringW TypeName;

  /// @brief Field includeInSchema, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_includeInSchema, put = __cordl_internal_set_includeInSchema)) bool includeInSchema;

  /// @brief Field ns, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_ns, put = __cordl_internal_set_ns)) ::StringW ns;

  /// @brief Field typeName, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_typeName, put = __cordl_internal_set_typeName)) ::StringW typeName;

  /// @brief Method AddKeyHash, addr 0x438d950, size 0xa4, virtual false, abstract: false, final false
  inline void AddKeyHash(::System::Text::StringBuilder* sb);

  constexpr bool const& __cordl_internal_get_includeInSchema() const;

  constexpr bool& __cordl_internal_get_includeInSchema();

  constexpr ::StringW const& __cordl_internal_get_ns() const;

  constexpr ::StringW& __cordl_internal_get_ns();

  constexpr ::StringW const& __cordl_internal_get_typeName() const;

  constexpr ::StringW& __cordl_internal_get_typeName();

  constexpr void __cordl_internal_set_includeInSchema(bool value);

  constexpr void __cordl_internal_set_ns(::StringW value);

  constexpr void __cordl_internal_set_typeName(::StringW value);

  /// @brief Method get_IncludeInSchema, addr 0x438d8ec, size 0x8, virtual false, abstract: false, final false
  inline bool get_IncludeInSchema();

  /// @brief Method get_Namespace, addr 0x438d8f4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Namespace();

  /// @brief Method get_TypeName, addr 0x438d8fc, size 0x54, virtual false, abstract: false, final false
  inline ::StringW get_TypeName();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlTypeAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlTypeAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlTypeAttribute(XmlTypeAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlTypeAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlTypeAttribute(XmlTypeAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7450 };

  /// @brief Field includeInSchema, offset: 0x10, size: 0x1, def value: None
  bool ___includeInSchema;

  /// @brief Field ns, offset: 0x18, size: 0x8, def value: None
  ::StringW ___ns;

  /// @brief Field typeName, offset: 0x20, size: 0x8, def value: None
  ::StringW ___typeName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Serialization::XmlTypeAttribute, ___includeInSchema) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlTypeAttribute, ___ns) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlTypeAttribute, ___typeName) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Serialization::XmlTypeAttribute, 0x28>, "Size mismatch!");

} // namespace System::Xml::Serialization
NEED_NO_BOX(::System::Xml::Serialization::XmlTypeAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Serialization::XmlTypeAttribute*, "System.Xml.Serialization", "XmlTypeAttribute");
