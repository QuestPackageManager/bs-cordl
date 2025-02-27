#pragma once
// IWYU pragma private; include "System/Xml/Serialization/XmlAttributeOverrides.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(XmlAttributeOverrides)
namespace System::Collections {
class Hashtable;
}
namespace System::Text {
class StringBuilder;
}
namespace System::Xml::Serialization {
class TypeMember;
}
namespace System::Xml::Serialization {
class XmlAttributes;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Xml::Serialization {
class XmlAttributeOverrides;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Serialization::XmlAttributeOverrides);
// Dependencies System.Object
namespace System::Xml::Serialization {
// Is value type: false
// CS Name: System.Xml.Serialization.XmlAttributeOverrides
class CORDL_TYPE XmlAttributeOverrides : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Item)) ::System::Xml::Serialization::XmlAttributes* Item[];

  __declspec(property(get = get_Item)) ::System::Xml::Serialization::XmlAttributes* Item[];

  /// @brief Field overrides, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_overrides, put = __cordl_internal_set_overrides)) ::System::Collections::Hashtable* overrides;

  /// @brief Method AddKeyHash, addr 0x437c8bc, size 0x50c, virtual false, abstract: false, final false
  inline void AddKeyHash(::System::Text::StringBuilder* sb);

  /// @brief Method GetKey, addr 0x437c850, size 0x6c, virtual false, abstract: false, final false
  inline ::System::Xml::Serialization::TypeMember* GetKey(::System::Type* type, ::StringW member);

  static inline ::System::Xml::Serialization::XmlAttributeOverrides* New_ctor();

  constexpr ::System::Collections::Hashtable* const& __cordl_internal_get_overrides() const;

  constexpr ::System::Collections::Hashtable*& __cordl_internal_get_overrides();

  constexpr void __cordl_internal_set_overrides(::System::Collections::Hashtable* value);

  /// @brief Method .ctor, addr 0x437c6d8, size 0x64, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Item, addr 0x437c73c, size 0x60, virtual false, abstract: false, final false
  inline ::System::Xml::Serialization::XmlAttributes* get_Item(::System::Type* type);

  /// @brief Method get_Item, addr 0x437c79c, size 0xb4, virtual false, abstract: false, final false
  inline ::System::Xml::Serialization::XmlAttributes* get_Item(::System::Type* type, ::StringW member);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlAttributeOverrides();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlAttributeOverrides", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlAttributeOverrides(XmlAttributeOverrides&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlAttributeOverrides", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlAttributeOverrides(XmlAttributeOverrides const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7413 };

  /// @brief Field overrides, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Hashtable* ___overrides;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Serialization::XmlAttributeOverrides, ___overrides) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Serialization::XmlAttributeOverrides, 0x18>, "Size mismatch!");

} // namespace System::Xml::Serialization
NEED_NO_BOX(::System::Xml::Serialization::XmlAttributeOverrides);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Serialization::XmlAttributeOverrides*, "System.Xml.Serialization", "XmlAttributeOverrides");
