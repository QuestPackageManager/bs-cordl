#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XmlElementAttribute)
namespace System {
class Type;
}
// Forward declare root types
namespace System::Xml::Serialization {
class XmlElementAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Serialization::XmlElementAttribute);
// Type: System.Xml.Serialization::XmlElementAttribute
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Serialization {
// Is value type: false
// CS Name: ::System.Xml.Serialization::XmlElementAttribute*
class CORDL_TYPE XmlElementAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field elementName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_elementName, put = __cordl_internal_set_elementName))::StringW elementName;

  /// @brief Field order, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_order, put = __cordl_internal_set_order)) int32_t order;

  /// @brief Field type, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_type, put = __cordl_internal_set_type))::System::Type* type;

  static inline ::System::Xml::Serialization::XmlElementAttribute* New_ctor(::StringW elementName, ::System::Type* type);

  constexpr ::StringW const& __cordl_internal_get_elementName() const;

  constexpr ::StringW& __cordl_internal_get_elementName();

  constexpr int32_t const& __cordl_internal_get_order() const;

  constexpr int32_t& __cordl_internal_get_order();

  constexpr ::System::Type*& __cordl_internal_get_type();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get_type() const;

  constexpr void __cordl_internal_set_elementName(::StringW value);

  constexpr void __cordl_internal_set_order(int32_t value);

  constexpr void __cordl_internal_set_type(::System::Type* value);

  /// @brief Method .ctor, addr 0x29f8214, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(::StringW elementName, ::System::Type* type);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlElementAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlElementAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlElementAttribute(XmlElementAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlElementAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlElementAttribute(XmlElementAttribute const&) = delete;

  /// @brief Field elementName, offset: 0x10, size: 0x8, def value: None
  ::StringW ___elementName;

  /// @brief Field type, offset: 0x18, size: 0x8, def value: None
  ::System::Type* ___type;

  /// @brief Field order, offset: 0x20, size: 0x4, def value: None
  int32_t ___order;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Serialization::XmlElementAttribute, 0x28>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlElementAttribute, ___elementName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlElementAttribute, ___type) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlElementAttribute, ___order) == 0x20, "Offset mismatch!");

} // namespace System::Xml::Serialization
NEED_NO_BOX(::System::Xml::Serialization::XmlElementAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Serialization::XmlElementAttribute*, "System.Xml.Serialization", "XmlElementAttribute");
