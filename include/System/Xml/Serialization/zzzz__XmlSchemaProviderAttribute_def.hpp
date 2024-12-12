#pragma once
// IWYU pragma private; include "System/Xml/Serialization/XmlSchemaProviderAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(XmlSchemaProviderAttribute)
// Forward declare root types
namespace System::Xml::Serialization {
class XmlSchemaProviderAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Serialization::XmlSchemaProviderAttribute);
// Dependencies System.Attribute
namespace System::Xml::Serialization {
// Is value type: false
// CS Name: System.Xml.Serialization.XmlSchemaProviderAttribute
class CORDL_TYPE XmlSchemaProviderAttribute : public ::System::Attribute {
public:
  // Declarations
  __declspec(property(get = get_IsAny, put = set_IsAny)) bool IsAny;

  __declspec(property(get = get_MethodName)) ::StringW MethodName;

  /// @brief Field _isAny, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get__isAny, put = __cordl_internal_set__isAny)) bool _isAny;

  /// @brief Field _methodName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__methodName, put = __cordl_internal_set__methodName)) ::StringW _methodName;

  static inline ::System::Xml::Serialization::XmlSchemaProviderAttribute* New_ctor(::StringW methodName);

  constexpr bool const& __cordl_internal_get__isAny() const;

  constexpr bool& __cordl_internal_get__isAny();

  constexpr ::StringW const& __cordl_internal_get__methodName() const;

  constexpr ::StringW& __cordl_internal_get__methodName();

  constexpr void __cordl_internal_set__isAny(bool value);

  constexpr void __cordl_internal_set__methodName(::StringW value);

  /// @brief Method .ctor, addr 0x43785d4, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::StringW methodName);

  /// @brief Method get_IsAny, addr 0x4378604, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsAny();

  /// @brief Method get_MethodName, addr 0x43785fc, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_MethodName();

  /// @brief Method set_IsAny, addr 0x437860c, size 0xc, virtual false, abstract: false, final false
  inline void set_IsAny(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlSchemaProviderAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaProviderAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlSchemaProviderAttribute(XmlSchemaProviderAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaProviderAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlSchemaProviderAttribute(XmlSchemaProviderAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7427 };

  /// @brief Field _methodName, offset: 0x10, size: 0x8, def value: None
  ::StringW ____methodName;

  /// @brief Field _isAny, offset: 0x18, size: 0x1, def value: None
  bool ____isAny;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Serialization::XmlSchemaProviderAttribute, ____methodName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlSchemaProviderAttribute, ____isAny) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Serialization::XmlSchemaProviderAttribute, 0x20>, "Size mismatch!");

} // namespace System::Xml::Serialization
NEED_NO_BOX(::System::Xml::Serialization::XmlSchemaProviderAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Serialization::XmlSchemaProviderAttribute*, "System.Xml.Serialization", "XmlSchemaProviderAttribute");
