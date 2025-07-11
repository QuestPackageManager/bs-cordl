#pragma once
// IWYU pragma private; include "System/Xml/Serialization/XmlArrayItemAttributes.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/zzzz__CollectionBase_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XmlArrayItemAttributes)
namespace System::Text {
class StringBuilder;
}
namespace System::Xml::Serialization {
class XmlArrayItemAttribute;
}
// Forward declare root types
namespace System::Xml::Serialization {
class XmlArrayItemAttributes;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Serialization::XmlArrayItemAttributes);
// Dependencies System.Collections.CollectionBase
namespace System::Xml::Serialization {
// Is value type: false
// CS Name: System.Xml.Serialization.XmlArrayItemAttributes
class CORDL_TYPE XmlArrayItemAttributes : public ::System::Collections::CollectionBase {
public:
  // Declarations
  __declspec(property(get = get_Item)) ::System::Xml::Serialization::XmlArrayItemAttribute* Item[];

  /// @brief Method Add, addr 0x436ea84, size 0xb8, virtual false, abstract: false, final false
  inline int32_t Add(::System::Xml::Serialization::XmlArrayItemAttribute* attribute);

  /// @brief Method AddKeyHash, addr 0x436eb3c, size 0xcc, virtual false, abstract: false, final false
  inline void AddKeyHash(::System::Text::StringBuilder* sb);

  static inline ::System::Xml::Serialization::XmlArrayItemAttributes* New_ctor();

  /// @brief Method .ctor, addr 0x436ec08, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Item, addr 0x436e984, size 0x100, virtual false, abstract: false, final false
  inline ::System::Xml::Serialization::XmlArrayItemAttribute* get_Item(int32_t index);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlArrayItemAttributes();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlArrayItemAttributes", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlArrayItemAttributes(XmlArrayItemAttributes&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlArrayItemAttributes", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlArrayItemAttributes(XmlArrayItemAttributes const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7411 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Serialization::XmlArrayItemAttributes, 0x18>, "Size mismatch!");

} // namespace System::Xml::Serialization
NEED_NO_BOX(::System::Xml::Serialization::XmlArrayItemAttributes);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Serialization::XmlArrayItemAttributes*, "System.Xml.Serialization", "XmlArrayItemAttributes");
