#pragma once
// IWYU pragma private; include "System/Xml/Serialization/XmlElementAttributes.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/zzzz__CollectionBase_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XmlElementAttributes)
namespace System::Text {
class StringBuilder;
}
namespace System::Xml::Serialization {
class XmlElementAttribute;
}
// Forward declare root types
namespace System::Xml::Serialization {
class XmlElementAttributes;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Serialization::XmlElementAttributes);
// Dependencies System.Collections.CollectionBase
namespace System::Xml::Serialization {
// Is value type: false
// CS Name: System.Xml.Serialization.XmlElementAttributes
class CORDL_TYPE XmlElementAttributes : public ::System::Collections::CollectionBase {
public:
  // Declarations
  __declspec(property(get = get_Item)) ::System::Xml::Serialization::XmlElementAttribute* Item[];

  __declspec(property(get = get_Order)) int32_t Order;

  /// @brief Method Add, addr 0x4371ad8, size 0xb8, virtual false, abstract: false, final false
  inline int32_t Add(::System::Xml::Serialization::XmlElementAttribute* attribute);

  /// @brief Method AddKeyHash, addr 0x4371bf8, size 0xcc, virtual false, abstract: false, final false
  inline void AddKeyHash(::System::Text::StringBuilder* sb);

  static inline ::System::Xml::Serialization::XmlElementAttributes* New_ctor();

  /// @brief Method .ctor, addr 0x43714a4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Item, addr 0x4374524, size 0x100, virtual false, abstract: false, final false
  inline ::System::Xml::Serialization::XmlElementAttribute* get_Item(int32_t index);

  /// @brief Method get_Order, addr 0x4372ce4, size 0x2cc, virtual false, abstract: false, final false
  inline int32_t get_Order();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlElementAttributes();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlElementAttributes", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlElementAttributes(XmlElementAttributes&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlElementAttributes", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlElementAttributes(XmlElementAttributes const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7416 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Serialization::XmlElementAttributes, 0x18>, "Size mismatch!");

} // namespace System::Xml::Serialization
NEED_NO_BOX(::System::Xml::Serialization::XmlElementAttributes);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Serialization::XmlElementAttributes*, "System.Xml.Serialization", "XmlElementAttributes");
