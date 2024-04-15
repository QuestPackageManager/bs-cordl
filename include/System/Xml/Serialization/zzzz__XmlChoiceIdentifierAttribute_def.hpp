#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(XmlChoiceIdentifierAttribute)
namespace System::Text {
class StringBuilder;
}
// Forward declare root types
namespace System::Xml::Serialization {
class XmlChoiceIdentifierAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Serialization::XmlChoiceIdentifierAttribute);
// Type: System.Xml.Serialization::XmlChoiceIdentifierAttribute
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Serialization {
// Is value type: false
// CS Name: ::System.Xml.Serialization::XmlChoiceIdentifierAttribute*
class CORDL_TYPE XmlChoiceIdentifierAttribute : public ::System::Attribute {
public:
  // Declarations
  __declspec(property(get = get_MemberName))::StringW MemberName;

  /// @brief Field memberName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_memberName, put = __cordl_internal_set_memberName))::StringW memberName;

  /// @brief Method AddKeyHash, addr 0x2dcf5a0, size 0x7c, virtual false, abstract: false, final false
  inline void AddKeyHash(::System::Text::StringBuilder* sb);

  constexpr ::StringW const& __cordl_internal_get_memberName() const;

  constexpr ::StringW& __cordl_internal_get_memberName();

  constexpr void __cordl_internal_set_memberName(::StringW value);

  /// @brief Method get_MemberName, addr 0x2dcfa38, size 0x54, virtual false, abstract: false, final false
  inline ::StringW get_MemberName();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlChoiceIdentifierAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlChoiceIdentifierAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlChoiceIdentifierAttribute(XmlChoiceIdentifierAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlChoiceIdentifierAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlChoiceIdentifierAttribute(XmlChoiceIdentifierAttribute const&) = delete;

  /// @brief Field memberName, offset: 0x10, size: 0x8, def value: None
  ::StringW ___memberName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Serialization::XmlChoiceIdentifierAttribute, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlChoiceIdentifierAttribute, ___memberName) == 0x10, "Offset mismatch!");

} // namespace System::Xml::Serialization
NEED_NO_BOX(::System::Xml::Serialization::XmlChoiceIdentifierAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Serialization::XmlChoiceIdentifierAttribute*, "System.Xml.Serialization", "XmlChoiceIdentifierAttribute");
