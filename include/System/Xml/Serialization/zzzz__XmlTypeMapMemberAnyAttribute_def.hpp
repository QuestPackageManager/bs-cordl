#pragma once
// IWYU pragma private; include "System/Xml/Serialization/XmlTypeMapMemberAnyAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Serialization/zzzz__XmlTypeMapMember_def.hpp"
CORDL_MODULE_EXPORT(XmlTypeMapMemberAnyAttribute)
// Forward declare root types
namespace System::Xml::Serialization {
class XmlTypeMapMemberAnyAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Serialization::XmlTypeMapMemberAnyAttribute);
// Type: System.Xml.Serialization::XmlTypeMapMemberAnyAttribute
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 84, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Serialization {
// Is value type: false
// CS Name: ::System.Xml.Serialization::XmlTypeMapMemberAnyAttribute*
class CORDL_TYPE XmlTypeMapMemberAnyAttribute : public ::System::Xml::Serialization::XmlTypeMapMember {
public:
  // Declarations
  static inline ::System::Xml::Serialization::XmlTypeMapMemberAnyAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x43192dc, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlTypeMapMemberAnyAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlTypeMapMemberAnyAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlTypeMapMemberAnyAttribute(XmlTypeMapMemberAnyAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlTypeMapMemberAnyAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlTypeMapMemberAnyAttribute(XmlTypeMapMemberAnyAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7430 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Serialization::XmlTypeMapMemberAnyAttribute, 0x58>, "Size mismatch!");

} // namespace System::Xml::Serialization
NEED_NO_BOX(::System::Xml::Serialization::XmlTypeMapMemberAnyAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Serialization::XmlTypeMapMemberAnyAttribute*, "System.Xml.Serialization", "XmlTypeMapMemberAnyAttribute");
