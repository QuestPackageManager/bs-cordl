#pragma once
// IWYU pragma private; include "System/Xml/Serialization/XmlTypeMapMemberExpandable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Serialization/zzzz__XmlTypeMapMemberElement_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XmlTypeMapMemberExpandable)
// Forward declare root types
namespace System::Xml::Serialization {
class XmlTypeMapMemberExpandable;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Serialization::XmlTypeMapMemberExpandable);
// Dependencies System.Xml.Serialization.XmlTypeMapMemberElement
namespace System::Xml::Serialization {
// Is value type: false
// CS Name: System.Xml.Serialization.XmlTypeMapMemberExpandable
class CORDL_TYPE XmlTypeMapMemberExpandable : public ::System::Xml::Serialization::XmlTypeMapMemberElement {
public:
  // Declarations
  __declspec(property(get = get_FlatArrayIndex, put = set_FlatArrayIndex)) int32_t FlatArrayIndex;

  /// @brief Field _flatArrayIndex, offset 0x78, size 0x4
  __declspec(property(get = __cordl_internal_get__flatArrayIndex, put = __cordl_internal_set__flatArrayIndex)) int32_t _flatArrayIndex;

  static inline ::System::Xml::Serialization::XmlTypeMapMemberExpandable* New_ctor();

  constexpr int32_t const& __cordl_internal_get__flatArrayIndex() const;

  constexpr int32_t& __cordl_internal_get__flatArrayIndex();

  constexpr void __cordl_internal_set__flatArrayIndex(int32_t value);

  /// @brief Method .ctor, addr 0x4390048, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_FlatArrayIndex, addr 0x4390038, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_FlatArrayIndex();

  /// @brief Method set_FlatArrayIndex, addr 0x4390040, size 0x8, virtual false, abstract: false, final false
  inline void set_FlatArrayIndex(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlTypeMapMemberExpandable();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlTypeMapMemberExpandable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlTypeMapMemberExpandable(XmlTypeMapMemberExpandable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlTypeMapMemberExpandable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlTypeMapMemberExpandable(XmlTypeMapMemberExpandable const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7462 };

  /// @brief Field _flatArrayIndex, offset: 0x78, size: 0x4, def value: None
  int32_t ____flatArrayIndex;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Serialization::XmlTypeMapMemberExpandable, ____flatArrayIndex) == 0x78, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Serialization::XmlTypeMapMemberExpandable, 0x80>, "Size mismatch!");

} // namespace System::Xml::Serialization
NEED_NO_BOX(::System::Xml::Serialization::XmlTypeMapMemberExpandable);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Serialization::XmlTypeMapMemberExpandable*, "System.Xml.Serialization", "XmlTypeMapMemberExpandable");
