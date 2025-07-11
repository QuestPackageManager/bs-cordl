#pragma once
// IWYU pragma private; include "System/Reflection/DefaultMemberAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(DefaultMemberAttribute)
// Forward declare root types
namespace System::Reflection {
class DefaultMemberAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Reflection::DefaultMemberAttribute);
// Dependencies System.Attribute
namespace System::Reflection {
// Is value type: false
// CS Name: System.Reflection.DefaultMemberAttribute
class CORDL_TYPE DefaultMemberAttribute : public ::System::Attribute {
public:
  // Declarations
  __declspec(property(get = get_MemberName)) ::StringW MemberName;

  /// @brief Field <MemberName>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__MemberName_k__BackingField, put = __cordl_internal_set__MemberName_k__BackingField)) ::StringW _MemberName_k__BackingField;

  static inline ::System::Reflection::DefaultMemberAttribute* New_ctor(::StringW memberName);

  constexpr ::StringW const& __cordl_internal_get__MemberName_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__MemberName_k__BackingField();

  constexpr void __cordl_internal_set__MemberName_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x3d220d0, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::StringW memberName);

  /// @brief Method get_MemberName, addr 0x3d220f8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_MemberName();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DefaultMemberAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DefaultMemberAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DefaultMemberAttribute(DefaultMemberAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DefaultMemberAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DefaultMemberAttribute(DefaultMemberAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3463 };

  /// @brief Field <MemberName>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____MemberName_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Reflection::DefaultMemberAttribute, ____MemberName_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Reflection::DefaultMemberAttribute, 0x18>, "Size mismatch!");

} // namespace System::Reflection
NEED_NO_BOX(::System::Reflection::DefaultMemberAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::DefaultMemberAttribute*, "System.Reflection", "DefaultMemberAttribute");
