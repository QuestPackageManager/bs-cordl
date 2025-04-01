#pragma once
// IWYU pragma private; include "System/Xml/Serialization/XmlReflectionMember.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(XmlReflectionMember)
namespace System::Xml::Serialization {
class XmlAttributes;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Xml::Serialization {
class XmlReflectionMember;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Serialization::XmlReflectionMember);
// Dependencies System.Object
namespace System::Xml::Serialization {
// Is value type: false
// CS Name: System.Xml.Serialization.XmlReflectionMember
class CORDL_TYPE XmlReflectionMember : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_DeclaringType, put = set_DeclaringType)) ::System::Type* DeclaringType;

  __declspec(property(get = get_IsReturnValue)) bool IsReturnValue;

  __declspec(property(get = get_MemberName)) ::StringW MemberName;

  __declspec(property(get = get_MemberType)) ::System::Type* MemberType;

  __declspec(property(get = get_XmlAttributes)) ::System::Xml::Serialization::XmlAttributes* XmlAttributes;

  /// @brief Field declaringType, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_declaringType, put = __cordl_internal_set_declaringType)) ::System::Type* declaringType;

  /// @brief Field isReturnValue, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_isReturnValue, put = __cordl_internal_set_isReturnValue)) bool isReturnValue;

  /// @brief Field memberName, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_memberName, put = __cordl_internal_set_memberName)) ::StringW memberName;

  /// @brief Field memberType, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_memberType, put = __cordl_internal_set_memberType)) ::System::Type* memberType;

  /// @brief Field xmlAttributes, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_xmlAttributes, put = __cordl_internal_set_xmlAttributes)) ::System::Xml::Serialization::XmlAttributes* xmlAttributes;

  static inline ::System::Xml::Serialization::XmlReflectionMember* New_ctor(::StringW name, ::System::Type* type, ::System::Xml::Serialization::XmlAttributes* attributes);

  constexpr ::System::Type* const& __cordl_internal_get_declaringType() const;

  constexpr ::System::Type*& __cordl_internal_get_declaringType();

  constexpr bool const& __cordl_internal_get_isReturnValue() const;

  constexpr bool& __cordl_internal_get_isReturnValue();

  constexpr ::StringW const& __cordl_internal_get_memberName() const;

  constexpr ::StringW& __cordl_internal_get_memberName();

  constexpr ::System::Type* const& __cordl_internal_get_memberType() const;

  constexpr ::System::Type*& __cordl_internal_get_memberType();

  constexpr ::System::Xml::Serialization::XmlAttributes* const& __cordl_internal_get_xmlAttributes() const;

  constexpr ::System::Xml::Serialization::XmlAttributes*& __cordl_internal_get_xmlAttributes();

  constexpr void __cordl_internal_set_declaringType(::System::Type* value);

  constexpr void __cordl_internal_set_isReturnValue(bool value);

  constexpr void __cordl_internal_set_memberName(::StringW value);

  constexpr void __cordl_internal_set_memberType(::System::Type* value);

  constexpr void __cordl_internal_set_xmlAttributes(::System::Xml::Serialization::XmlAttributes* value);

  /// @brief Method .ctor, addr 0x4372dec, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::StringW name, ::System::Type* type, ::System::Xml::Serialization::XmlAttributes* attributes);

  /// @brief Method get_DeclaringType, addr 0x4374fa8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Type* get_DeclaringType();

  /// @brief Method get_IsReturnValue, addr 0x4374f90, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsReturnValue();

  /// @brief Method get_MemberName, addr 0x4374f98, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_MemberName();

  /// @brief Method get_MemberType, addr 0x4374fa0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Type* get_MemberType();

  /// @brief Method get_XmlAttributes, addr 0x43720f4, size 0x60, virtual false, abstract: false, final false
  inline ::System::Xml::Serialization::XmlAttributes* get_XmlAttributes();

  /// @brief Method set_DeclaringType, addr 0x4374fb0, size 0x8, virtual false, abstract: false, final false
  inline void set_DeclaringType(::System::Type* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlReflectionMember();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlReflectionMember", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlReflectionMember(XmlReflectionMember&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlReflectionMember", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlReflectionMember(XmlReflectionMember const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7430 };

  /// @brief Field isReturnValue, offset: 0x10, size: 0x1, def value: None
  bool ___isReturnValue;

  /// @brief Field memberName, offset: 0x18, size: 0x8, def value: None
  ::StringW ___memberName;

  /// @brief Field memberType, offset: 0x20, size: 0x8, def value: None
  ::System::Type* ___memberType;

  /// @brief Field xmlAttributes, offset: 0x28, size: 0x8, def value: None
  ::System::Xml::Serialization::XmlAttributes* ___xmlAttributes;

  /// @brief Field declaringType, offset: 0x30, size: 0x8, def value: None
  ::System::Type* ___declaringType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Serialization::XmlReflectionMember, ___isReturnValue) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlReflectionMember, ___memberName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlReflectionMember, ___memberType) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlReflectionMember, ___xmlAttributes) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlReflectionMember, ___declaringType) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Serialization::XmlReflectionMember, 0x38>, "Size mismatch!");

} // namespace System::Xml::Serialization
NEED_NO_BOX(::System::Xml::Serialization::XmlReflectionMember);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Serialization::XmlReflectionMember*, "System.Xml.Serialization", "XmlReflectionMember");
