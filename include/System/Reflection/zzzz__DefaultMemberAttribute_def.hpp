#pragma once
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
// Type: System.Reflection::DefaultMemberAttribute
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Reflection {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3463))
// CS Name: ::System.Reflection::DefaultMemberAttribute*
class CORDL_TYPE DefaultMemberAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field <MemberName>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __get__MemberName_k__BackingField, put = __set__MemberName_k__BackingField))::StringW _MemberName_k__BackingField;

  __declspec(property(get = get_MemberName))::StringW MemberName;

  constexpr ::StringW& __get__MemberName_k__BackingField();

  constexpr ::StringW const& __get__MemberName_k__BackingField() const;

  constexpr void __set__MemberName_k__BackingField(::StringW value);

  static inline ::System::Reflection::DefaultMemberAttribute* New_ctor(::StringW memberName);

  /// @brief Method .ctor addr 0x24e6310 size 0x28 virtual false final false
  inline void _ctor(::StringW memberName);

  /// @brief Method get_MemberName addr 0x24e6338 size 0x8 virtual false final false
  inline ::StringW get_MemberName();

  // Ctor Parameters [CppParam { name: "", ty: "DefaultMemberAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DefaultMemberAttribute(DefaultMemberAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DefaultMemberAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DefaultMemberAttribute(DefaultMemberAttribute const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DefaultMemberAttribute();

public:
  /// @brief Field <MemberName>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____MemberName_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Reflection::DefaultMemberAttribute, 0x18>, "Size mismatch!");

} // namespace System::Reflection
NEED_NO_BOX(::System::Reflection::DefaultMemberAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::DefaultMemberAttribute*, "System.Reflection", "DefaultMemberAttribute");
