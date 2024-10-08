#pragma once
// IWYU pragma private; include "System/Xml/Serialization/XmlMembersMapping.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Serialization/zzzz__XmlMapping_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XmlMembersMapping)
namespace System::Xml::Serialization {
class XmlMemberMapping;
}
// Forward declare root types
namespace System::Xml::Serialization {
class XmlMembersMapping;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Serialization::XmlMembersMapping);
// Type: System.Xml.Serialization::XmlMembersMapping
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Serialization {
// Is value type: false
// CS Name: ::System.Xml.Serialization::XmlMembersMapping*
class CORDL_TYPE XmlMembersMapping : public ::System::Xml::Serialization::XmlMapping {
public:
  // Declarations
  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_HasWrapperElement)) bool HasWrapperElement;

  /// @brief Field _hasWrapperElement, offset 0x48, size 0x1
  __declspec(property(get = __cordl_internal_get__hasWrapperElement, put = __cordl_internal_set__hasWrapperElement)) bool _hasWrapperElement;

  /// @brief Field _mapping, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__mapping,
                      put = __cordl_internal_set__mapping)) ::ArrayW<::System::Xml::Serialization::XmlMemberMapping*, ::Array<::System::Xml::Serialization::XmlMemberMapping*>*>
      _mapping;

  constexpr bool const& __cordl_internal_get__hasWrapperElement() const;

  constexpr bool& __cordl_internal_get__hasWrapperElement();

  constexpr ::ArrayW<::System::Xml::Serialization::XmlMemberMapping*, ::Array<::System::Xml::Serialization::XmlMemberMapping*>*> const& __cordl_internal_get__mapping() const;

  constexpr ::ArrayW<::System::Xml::Serialization::XmlMemberMapping*, ::Array<::System::Xml::Serialization::XmlMemberMapping*>*>& __cordl_internal_get__mapping();

  constexpr void __cordl_internal_set__hasWrapperElement(bool value);

  constexpr void __cordl_internal_set__mapping(::ArrayW<::System::Xml::Serialization::XmlMemberMapping*, ::Array<::System::Xml::Serialization::XmlMemberMapping*>*> value);

  /// @brief Method get_Count, addr 0x42fba58, size 0x1c, virtual false, abstract: false, final false
  inline int32_t get_Count();

  /// @brief Method get_HasWrapperElement, addr 0x42fba74, size 0x8, virtual false, abstract: false, final false
  inline bool get_HasWrapperElement();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlMembersMapping();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlMembersMapping", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlMembersMapping(XmlMembersMapping&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlMembersMapping", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlMembersMapping(XmlMembersMapping const&) = delete;

  /// @brief Field _hasWrapperElement, offset: 0x48, size: 0x1, def value: None
  bool ____hasWrapperElement;

  /// @brief Field _mapping, offset: 0x50, size: 0x8, def value: None
  ::ArrayW<::System::Xml::Serialization::XmlMemberMapping*, ::Array<::System::Xml::Serialization::XmlMemberMapping*>*> ____mapping;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7391 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Serialization::XmlMembersMapping, 0x58>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlMembersMapping, ____hasWrapperElement) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlMembersMapping, ____mapping) == 0x50, "Offset mismatch!");

} // namespace System::Xml::Serialization
NEED_NO_BOX(::System::Xml::Serialization::XmlMembersMapping);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Serialization::XmlMembersMapping*, "System.Xml.Serialization", "XmlMembersMapping");
