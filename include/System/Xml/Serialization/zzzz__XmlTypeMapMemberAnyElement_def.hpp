#pragma once
// IWYU pragma private; include "System/Xml/Serialization/XmlTypeMapMemberAnyElement.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Serialization/zzzz__XmlTypeMapMemberExpandable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(XmlTypeMapMemberAnyElement)
// Forward declare root types
namespace System::Xml::Serialization {
class XmlTypeMapMemberAnyElement;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Serialization::XmlTypeMapMemberAnyElement);
// Type: System.Xml.Serialization::XmlTypeMapMemberAnyElement
// SizeInfo { instance_size: 128, native_size: -1, calculated_instance_size: 128, calculated_native_size: 124, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Serialization {
// Is value type: false
// CS Name: ::System.Xml.Serialization::XmlTypeMapMemberAnyElement*
class CORDL_TYPE XmlTypeMapMemberAnyElement : public ::System::Xml::Serialization::XmlTypeMapMemberExpandable {
public:
  // Declarations
  __declspec(property(get = get_IsDefaultAny)) bool IsDefaultAny;

  /// @brief Method IsElementDefined, addr 0x431621c, size 0x334, virtual false, abstract: false, final false
  inline bool IsElementDefined(::StringW name, ::StringW ns);

  static inline ::System::Xml::Serialization::XmlTypeMapMemberAnyElement* New_ctor();

  /// @brief Method .ctor, addr 0x43192d8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsDefaultAny, addr 0x4318ff4, size 0x2e4, virtual false, abstract: false, final false
  inline bool get_IsDefaultAny();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlTypeMapMemberAnyElement();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlTypeMapMemberAnyElement", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlTypeMapMemberAnyElement(XmlTypeMapMemberAnyElement&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlTypeMapMemberAnyElement", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlTypeMapMemberAnyElement(XmlTypeMapMemberAnyElement const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7429 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Serialization::XmlTypeMapMemberAnyElement, 0x80>, "Size mismatch!");

} // namespace System::Xml::Serialization
NEED_NO_BOX(::System::Xml::Serialization::XmlTypeMapMemberAnyElement);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Serialization::XmlTypeMapMemberAnyElement*, "System.Xml.Serialization", "XmlTypeMapMemberAnyElement");
