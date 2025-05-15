#pragma once
// IWYU pragma private; include "System/Xml/Serialization/XmlAnyElementAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XmlAnyElementAttribute)
namespace System::Text {
class StringBuilder;
}
// Forward declare root types
namespace System::Xml::Serialization {
class XmlAnyElementAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Serialization::XmlAnyElementAttribute);
// Dependencies System.Attribute
namespace System::Xml::Serialization {
// Is value type: false
// CS Name: System.Xml.Serialization.XmlAnyElementAttribute
class CORDL_TYPE XmlAnyElementAttribute : public ::System::Attribute {
public:
  // Declarations
  __declspec(property(get = get_Name)) ::StringW Name;

  __declspec(property(get = get_Namespace)) ::StringW Namespace;

  __declspec(property(get = get_Order)) int32_t Order;

  /// @brief Field elementName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_elementName, put = __cordl_internal_set_elementName)) ::StringW elementName;

  /// @brief Field ns, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_ns, put = __cordl_internal_set_ns)) ::StringW ns;

  /// @brief Field order, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_order, put = __cordl_internal_set_order)) int32_t order;

  /// @brief Method AddKeyHash, addr 0x436e3ac, size 0x90, virtual false, abstract: false, final false
  inline void AddKeyHash(::System::Text::StringBuilder* sb);

  static inline ::System::Xml::Serialization::XmlAnyElementAttribute* New_ctor();

  constexpr ::StringW const& __cordl_internal_get_elementName() const;

  constexpr ::StringW& __cordl_internal_get_elementName();

  constexpr ::StringW const& __cordl_internal_get_ns() const;

  constexpr ::StringW& __cordl_internal_get_ns();

  constexpr int32_t const& __cordl_internal_get_order() const;

  constexpr int32_t& __cordl_internal_get_order();

  constexpr void __cordl_internal_set_elementName(::StringW value);

  constexpr void __cordl_internal_set_ns(::StringW value);

  constexpr void __cordl_internal_set_order(int32_t value);

  /// @brief Method .ctor, addr 0x436e338, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Name, addr 0x436e348, size 0x54, virtual false, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_Namespace, addr 0x436e39c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Namespace();

  /// @brief Method get_Order, addr 0x436e3a4, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Order();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlAnyElementAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlAnyElementAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlAnyElementAttribute(XmlAnyElementAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlAnyElementAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlAnyElementAttribute(XmlAnyElementAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7407 };

  /// @brief Field elementName, offset: 0x10, size: 0x8, def value: None
  ::StringW ___elementName;

  /// @brief Field ns, offset: 0x18, size: 0x8, def value: None
  ::StringW ___ns;

  /// @brief Field order, offset: 0x20, size: 0x4, def value: None
  int32_t ___order;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Serialization::XmlAnyElementAttribute, ___elementName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlAnyElementAttribute, ___ns) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlAnyElementAttribute, ___order) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Serialization::XmlAnyElementAttribute, 0x28>, "Size mismatch!");

} // namespace System::Xml::Serialization
NEED_NO_BOX(::System::Xml::Serialization::XmlAnyElementAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Serialization::XmlAnyElementAttribute*, "System.Xml.Serialization", "XmlAnyElementAttribute");
