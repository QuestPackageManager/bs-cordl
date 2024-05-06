#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Serialization/zzzz__XmlTypeMapMemberElement_def.hpp"
CORDL_MODULE_EXPORT(XmlTypeMapMemberList)
// Forward declare root types
namespace System::Xml::Serialization {
class XmlTypeMapMemberList;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Serialization::XmlTypeMapMemberList);
// Type: System.Xml.Serialization::XmlTypeMapMemberList
// SizeInfo { instance_size: 120, native_size: -1, calculated_instance_size: 120, calculated_native_size: 120, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Xml::Serialization {
// Is value type: false
// CS Name: ::System.Xml.Serialization::XmlTypeMapMemberList*
class CORDL_TYPE XmlTypeMapMemberList : public ::System::Xml::Serialization::XmlTypeMapMemberElement {
public:
  // Declarations
  static inline ::System::Xml::Serialization::XmlTypeMapMemberList* New_ctor();

  /// @brief Method .ctor, addr 0x2eed808, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlTypeMapMemberList();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlTypeMapMemberList", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlTypeMapMemberList(XmlTypeMapMemberList&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlTypeMapMemberList", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlTypeMapMemberList(XmlTypeMapMemberList const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Serialization::XmlTypeMapMemberList, 0x78>, "Size mismatch!");

} // namespace System::Xml::Serialization
NEED_NO_BOX(::System::Xml::Serialization::XmlTypeMapMemberList);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Serialization::XmlTypeMapMemberList*, "System.Xml.Serialization", "XmlTypeMapMemberList");
