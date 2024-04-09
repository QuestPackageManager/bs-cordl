#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/zzzz__CollectionBase_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XmlAnyElementAttributes)
namespace System::Text {
class StringBuilder;
}
namespace System::Xml::Serialization {
class XmlAnyElementAttribute;
}
// Forward declare root types
namespace System::Xml::Serialization {
class XmlAnyElementAttributes;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Serialization::XmlAnyElementAttributes);
// Type: System.Xml.Serialization::XmlAnyElementAttributes
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Xml::Serialization {
// Is value type: false
// CS Name: ::System.Xml.Serialization::XmlAnyElementAttributes*
class CORDL_TYPE XmlAnyElementAttributes : public ::System::Collections::CollectionBase {
public:
  // Declarations
  __declspec(property(get = get_Item))::System::Xml::Serialization::XmlAnyElementAttribute* Item[];

  __declspec(property(get = get_Order)) int32_t Order;

  /// @brief Method Add, addr 0x2dc9828, size 0xb8, virtual false, abstract: false, final false
  inline int32_t Add(::System::Xml::Serialization::XmlAnyElementAttribute* attribute);

  /// @brief Method AddKeyHash, addr 0x2dc98e0, size 0xcc, virtual false, abstract: false, final false
  inline void AddKeyHash(::System::Text::StringBuilder* sb);

  static inline ::System::Xml::Serialization::XmlAnyElementAttributes* New_ctor();

  /// @brief Method .ctor, addr 0x2dc9c8c, size 0x1008, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Item, addr 0x2dc9728, size 0x100, virtual false, abstract: false, final false
  inline ::System::Xml::Serialization::XmlAnyElementAttribute* get_Item(int32_t index);

  /// @brief Method get_Order, addr 0x2dc99ac, size 0x2e0, virtual false, abstract: false, final false
  inline int32_t get_Order();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlAnyElementAttributes();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlAnyElementAttributes", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlAnyElementAttributes(XmlAnyElementAttributes&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlAnyElementAttributes", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlAnyElementAttributes(XmlAnyElementAttributes const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Serialization::XmlAnyElementAttributes, 0x18>, "Size mismatch!");

} // namespace System::Xml::Serialization
NEED_NO_BOX(::System::Xml::Serialization::XmlAnyElementAttributes);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Serialization::XmlAnyElementAttributes*, "System.Xml.Serialization", "XmlAnyElementAttributes");
