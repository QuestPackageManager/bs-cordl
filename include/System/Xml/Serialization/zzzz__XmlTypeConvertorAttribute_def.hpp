#pragma once
// IWYU pragma private; include "System/Xml/Serialization/XmlTypeConvertorAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(XmlTypeConvertorAttribute)
// Forward declare root types
namespace System::Xml::Serialization {
class XmlTypeConvertorAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Serialization::XmlTypeConvertorAttribute);
// Dependencies System.Attribute
namespace System::Xml::Serialization {
// Is value type: false
// CS Name: System.Xml.Serialization.XmlTypeConvertorAttribute
class CORDL_TYPE XmlTypeConvertorAttribute : public ::System::Attribute {
public:
  // Declarations
  __declspec(property(get = get_Method, put = set_Method)) ::StringW Method;

  /// @brief Field <Method>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Method_k__BackingField, put = __cordl_internal_set__Method_k__BackingField)) ::StringW _Method_k__BackingField;

  static inline ::System::Xml::Serialization::XmlTypeConvertorAttribute* New_ctor(::StringW method);

  constexpr ::StringW const& __cordl_internal_get__Method_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Method_k__BackingField();

  constexpr void __cordl_internal_set__Method_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x6138260, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW method);

  /// @brief Method get_Method, addr 0x6138250, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Method();

  /// @brief Method set_Method, addr 0x6138258, size 0x8, virtual false, abstract: false, final false
  inline void set_Method(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlTypeConvertorAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlTypeConvertorAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlTypeConvertorAttribute(XmlTypeConvertorAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlTypeConvertorAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlTypeConvertorAttribute(XmlTypeConvertorAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9470 };

  /// @brief Field <Method>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____Method_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Serialization::XmlTypeConvertorAttribute, ____Method_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Serialization::XmlTypeConvertorAttribute, 0x18>, "Size mismatch!");

} // namespace System::Xml::Serialization
NEED_NO_BOX(::System::Xml::Serialization::XmlTypeConvertorAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Serialization::XmlTypeConvertorAttribute*, "System.Xml.Serialization", "XmlTypeConvertorAttribute");
