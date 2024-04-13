#pragma once
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
// Type: System.Xml.Serialization::XmlTypeMapMemberExpandable
// SizeInfo { instance_size: 128, native_size: -1, calculated_instance_size: 128, calculated_native_size: 124, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Xml::Serialization {
// Is value type: false
// CS Name: ::System.Xml.Serialization::XmlTypeMapMemberExpandable*
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

  /// @brief Method .ctor, addr 0x2deef1c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_FlatArrayIndex, addr 0x2deef0c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_FlatArrayIndex();

  /// @brief Method set_FlatArrayIndex, addr 0x2deef14, size 0x8, virtual false, abstract: false, final false
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

  /// @brief Field _flatArrayIndex, offset: 0x78, size: 0x4, def value: None
  int32_t ____flatArrayIndex;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Serialization::XmlTypeMapMemberExpandable, 0x80>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlTypeMapMemberExpandable, ____flatArrayIndex) == 0x78, "Offset mismatch!");

} // namespace System::Xml::Serialization
NEED_NO_BOX(::System::Xml::Serialization::XmlTypeMapMemberExpandable);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Serialization::XmlTypeMapMemberExpandable*, "System.Xml.Serialization", "XmlTypeMapMemberExpandable");
