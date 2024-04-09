#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__XmlSchemaForm_def.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XmlArrayAttribute)
namespace System::Text {
class StringBuilder;
}
namespace System::Xml::Schema {
struct XmlSchemaForm;
}
// Forward declare root types
namespace System::Xml::Serialization {
class XmlArrayAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Serialization::XmlArrayAttribute);
// Type: System.Xml.Serialization::XmlArrayAttribute
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 44, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Serialization {
// Is value type: false
// CS Name: ::System.Xml.Serialization::XmlArrayAttribute*
class CORDL_TYPE XmlArrayAttribute : public ::System::Attribute {
public:
  // Declarations
  __declspec(property(get = get_ElementName))::StringW ElementName;

  __declspec(property(get = get_Form))::System::Xml::Schema::XmlSchemaForm Form;

  __declspec(property(get = get_IsNullable)) bool IsNullable;

  __declspec(property(get = get_Namespace))::StringW Namespace;

  __declspec(property(get = get_Order)) int32_t Order;

  /// @brief Field elementName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_elementName, put = __cordl_internal_set_elementName))::StringW elementName;

  /// @brief Field form, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_form, put = __cordl_internal_set_form))::System::Xml::Schema::XmlSchemaForm form;

  /// @brief Field isNullable, offset 0x1c, size 0x1
  __declspec(property(get = __cordl_internal_get_isNullable, put = __cordl_internal_set_isNullable)) bool isNullable;

  /// @brief Field ns, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_ns, put = __cordl_internal_set_ns))::StringW ns;

  /// @brief Field order, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_order, put = __cordl_internal_set_order)) int32_t order;

  /// @brief Method AddKeyHash, addr 0x2dcad08, size 0x120, virtual false, abstract: false, final false
  inline void AddKeyHash(::System::Text::StringBuilder* sb);

  constexpr ::StringW const& __cordl_internal_get_elementName() const;

  constexpr ::StringW& __cordl_internal_get_elementName();

  constexpr ::System::Xml::Schema::XmlSchemaForm const& __cordl_internal_get_form() const;

  constexpr ::System::Xml::Schema::XmlSchemaForm& __cordl_internal_get_form();

  constexpr bool const& __cordl_internal_get_isNullable() const;

  constexpr bool& __cordl_internal_get_isNullable();

  constexpr ::StringW const& __cordl_internal_get_ns() const;

  constexpr ::StringW& __cordl_internal_get_ns();

  constexpr int32_t const& __cordl_internal_get_order() const;

  constexpr int32_t& __cordl_internal_get_order();

  constexpr void __cordl_internal_set_elementName(::StringW value);

  constexpr void __cordl_internal_set_form(::System::Xml::Schema::XmlSchemaForm value);

  constexpr void __cordl_internal_set_isNullable(bool value);

  constexpr void __cordl_internal_set_ns(::StringW value);

  constexpr void __cordl_internal_set_order(int32_t value);

  /// @brief Method get_ElementName, addr 0x2dcac94, size 0x54, virtual false, abstract: false, final false
  inline ::StringW get_ElementName();

  /// @brief Method get_Form, addr 0x2dcace8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaForm get_Form();

  /// @brief Method get_IsNullable, addr 0x2dcacf0, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsNullable();

  /// @brief Method get_Namespace, addr 0x2dcacf8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Namespace();

  /// @brief Method get_Order, addr 0x2dcad00, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Order();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlArrayAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlArrayAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlArrayAttribute(XmlArrayAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlArrayAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlArrayAttribute(XmlArrayAttribute const&) = delete;

  /// @brief Field elementName, offset: 0x10, size: 0x8, def value: None
  ::StringW ___elementName;

  /// @brief Field form, offset: 0x18, size: 0x4, def value: None
  ::System::Xml::Schema::XmlSchemaForm ___form;

  /// @brief Field isNullable, offset: 0x1c, size: 0x1, def value: None
  bool ___isNullable;

  /// @brief Field ns, offset: 0x20, size: 0x8, def value: None
  ::StringW ___ns;

  /// @brief Field order, offset: 0x28, size: 0x4, def value: None
  int32_t ___order;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Serialization::XmlArrayAttribute, 0x30>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlArrayAttribute, ___elementName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlArrayAttribute, ___form) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlArrayAttribute, ___isNullable) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlArrayAttribute, ___ns) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlArrayAttribute, ___order) == 0x28, "Offset mismatch!");

} // namespace System::Xml::Serialization
NEED_NO_BOX(::System::Xml::Serialization::XmlArrayAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Serialization::XmlArrayAttribute*, "System.Xml.Serialization", "XmlArrayAttribute");
