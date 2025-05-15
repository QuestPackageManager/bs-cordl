#pragma once
// IWYU pragma private; include "System/Xml/Serialization/XmlRootAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(XmlRootAttribute)
namespace System::Text {
class StringBuilder;
}
// Forward declare root types
namespace System::Xml::Serialization {
class XmlRootAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Serialization::XmlRootAttribute);
// Dependencies System.Attribute
namespace System::Xml::Serialization {
// Is value type: false
// CS Name: System.Xml.Serialization.XmlRootAttribute
class CORDL_TYPE XmlRootAttribute : public ::System::Attribute {
public:
  // Declarations
  __declspec(property(get = get_DataType, put = set_DataType)) ::StringW DataType;

  __declspec(property(get = get_ElementName, put = set_ElementName)) ::StringW ElementName;

  __declspec(property(get = get_IsNullable, put = set_IsNullable)) bool IsNullable;

  __declspec(property(get = get_Namespace, put = set_Namespace)) ::StringW Namespace;

  /// @brief Field dataType, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_dataType, put = __cordl_internal_set_dataType)) ::StringW dataType;

  /// @brief Field elementName, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_elementName, put = __cordl_internal_set_elementName)) ::StringW elementName;

  /// @brief Field isNullable, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_isNullable, put = __cordl_internal_set_isNullable)) bool isNullable;

  /// @brief Field ns, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_ns, put = __cordl_internal_set_ns)) ::StringW ns;

  /// @brief Method AddKeyHash, addr 0x43712b0, size 0xb8, virtual false, abstract: false, final false
  inline void AddKeyHash(::System::Text::StringBuilder* sb);

  static inline ::System::Xml::Serialization::XmlRootAttribute* New_ctor();

  static inline ::System::Xml::Serialization::XmlRootAttribute* New_ctor(::StringW elementName);

  constexpr ::StringW const& __cordl_internal_get_dataType() const;

  constexpr ::StringW& __cordl_internal_get_dataType();

  constexpr ::StringW const& __cordl_internal_get_elementName() const;

  constexpr ::StringW& __cordl_internal_get_elementName();

  constexpr bool const& __cordl_internal_get_isNullable() const;

  constexpr bool& __cordl_internal_get_isNullable();

  constexpr ::StringW const& __cordl_internal_get_ns() const;

  constexpr ::StringW& __cordl_internal_get_ns();

  constexpr void __cordl_internal_set_dataType(::StringW value);

  constexpr void __cordl_internal_set_elementName(::StringW value);

  constexpr void __cordl_internal_set_isNullable(bool value);

  constexpr void __cordl_internal_set_ns(::StringW value);

  /// @brief Method .ctor, addr 0x4379f2c, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x4379f3c, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::StringW elementName);

  /// @brief Method get_DataType, addr 0x4379f6c, size 0x54, virtual false, abstract: false, final false
  inline ::StringW get_DataType();

  /// @brief Method get_ElementName, addr 0x4376134, size 0x54, virtual false, abstract: false, final false
  inline ::StringW get_ElementName();

  /// @brief Method get_IsNullable, addr 0x4379fd0, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsNullable();

  /// @brief Method get_Namespace, addr 0x4379fe4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Namespace();

  /// @brief Method set_DataType, addr 0x4379fc0, size 0x8, virtual false, abstract: false, final false
  inline void set_DataType(::StringW value);

  /// @brief Method set_ElementName, addr 0x4379fc8, size 0x8, virtual false, abstract: false, final false
  inline void set_ElementName(::StringW value);

  /// @brief Method set_IsNullable, addr 0x4379fd8, size 0xc, virtual false, abstract: false, final false
  inline void set_IsNullable(bool value);

  /// @brief Method set_Namespace, addr 0x4379fec, size 0x8, virtual false, abstract: false, final false
  inline void set_Namespace(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlRootAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlRootAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlRootAttribute(XmlRootAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlRootAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlRootAttribute(XmlRootAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7431 };

  /// @brief Field dataType, offset: 0x10, size: 0x8, def value: None
  ::StringW ___dataType;

  /// @brief Field elementName, offset: 0x18, size: 0x8, def value: None
  ::StringW ___elementName;

  /// @brief Field isNullable, offset: 0x20, size: 0x1, def value: None
  bool ___isNullable;

  /// @brief Field ns, offset: 0x28, size: 0x8, def value: None
  ::StringW ___ns;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Serialization::XmlRootAttribute, ___dataType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlRootAttribute, ___elementName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlRootAttribute, ___isNullable) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlRootAttribute, ___ns) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Serialization::XmlRootAttribute, 0x30>, "Size mismatch!");

} // namespace System::Xml::Serialization
NEED_NO_BOX(::System::Xml::Serialization::XmlRootAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Serialization::XmlRootAttribute*, "System.Xml.Serialization", "XmlRootAttribute");
