#pragma once
// IWYU pragma private; include "System/Reflection/CustomAttributeNamedArgument.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Reflection/zzzz__CustomAttributeTypedArgument_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CustomAttributeNamedArgument)
namespace System::Reflection {
struct CustomAttributeTypedArgument;
}
namespace System::Reflection {
class MemberInfo;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Reflection {
struct CustomAttributeNamedArgument;
}
// Write type traits
MARK_VAL_T(::System::Reflection::CustomAttributeNamedArgument);
// Dependencies System.Reflection.CustomAttributeTypedArgument
namespace System::Reflection {
// Is value type: true
// CS Name: System.Reflection.CustomAttributeNamedArgument
struct CORDL_TYPE CustomAttributeNamedArgument {
public:
  // Declarations
  __declspec(property(get = get_IsField)) bool IsField;

  __declspec(property(get = get_MemberInfo)) ::System::Reflection::MemberInfo* MemberInfo;

  __declspec(property(get = get_MemberName)) ::StringW MemberName;

  __declspec(property(get = get_TypedValue)) ::System::Reflection::CustomAttributeTypedArgument TypedValue;

  /// @brief Method Equals, addr 0x3d24560, size 0x78, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x3d245d8, size 0x6c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x3d24748, size 0x328, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x3d24108, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* attributeType, ::StringW memberName, bool isField, ::System::Reflection::CustomAttributeTypedArgument typedValue);

  /// @brief Method .ctor, addr 0x3d2434c, size 0x120, virtual false, abstract: false, final false
  inline void _ctor(::System::Reflection::MemberInfo* memberInfo, ::System::Reflection::CustomAttributeTypedArgument typedArgument);

  /// @brief Method .ctor, addr 0x3d24130, size 0x21c, virtual false, abstract: false, final false
  inline void _ctor(::System::Reflection::MemberInfo* memberInfo, ::System::Object* value);

  /// @brief Method get_IsField, addr 0x3d24478, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsField();

  /// @brief Method get_MemberInfo, addr 0x3d24488, size 0xd8, virtual false, abstract: false, final false
  inline ::System::Reflection::MemberInfo* get_MemberInfo();

  /// @brief Method get_MemberName, addr 0x3d24480, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_MemberName();

  /// @brief Method get_TypedValue, addr 0x3d2446c, size 0xc, virtual false, abstract: false, final false
  inline ::System::Reflection::CustomAttributeTypedArgument get_TypedValue();

  /// @brief Method op_Equality, addr 0x3d24644, size 0x80, virtual false, abstract: false, final false
  static inline bool op_Equality(::System::Reflection::CustomAttributeNamedArgument left, ::System::Reflection::CustomAttributeNamedArgument right);

  /// @brief Method op_Inequality, addr 0x3d246c4, size 0x84, virtual false, abstract: false, final false
  static inline bool op_Inequality(::System::Reflection::CustomAttributeNamedArgument left, ::System::Reflection::CustomAttributeNamedArgument right);

  // Ctor Parameters []
  // @brief default ctor
  constexpr CustomAttributeNamedArgument();

  // Ctor Parameters [CppParam { name: "_TypedValue_k__BackingField", ty: "::System::Reflection::CustomAttributeTypedArgument", modifiers: "", def_value: None }, CppParam { name:
  // "_IsField_k__BackingField", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_MemberName_k__BackingField", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name:
  // "_attributeType", ty: "::System::Type*", modifiers: "", def_value: None }, CppParam { name: "_lazyMemberInfo", ty: "::System::Reflection::MemberInfo*", modifiers: "", def_value: None }]
  constexpr CustomAttributeNamedArgument(::System::Reflection::CustomAttributeTypedArgument _TypedValue_k__BackingField, bool _IsField_k__BackingField, ::StringW _MemberName_k__BackingField,
                                         ::System::Type* _attributeType, ::System::Reflection::MemberInfo* _lazyMemberInfo) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3506 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// @brief Field <TypedValue>k__BackingField, offset: 0x0, size: 0x10, def value: None
  ::System::Reflection::CustomAttributeTypedArgument _TypedValue_k__BackingField;

  /// @brief Field <IsField>k__BackingField, offset: 0x10, size: 0x1, def value: None
  bool _IsField_k__BackingField;

  /// @brief Field <MemberName>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW _MemberName_k__BackingField;

  /// @brief Field _attributeType, offset: 0x20, size: 0x8, def value: None
  ::System::Type* _attributeType;

  /// @brief Field _lazyMemberInfo, offset: 0x28, size: 0x8, def value: None
  ::System::Reflection::MemberInfo* _lazyMemberInfo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Reflection::CustomAttributeNamedArgument, _TypedValue_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Reflection::CustomAttributeNamedArgument, _IsField_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Reflection::CustomAttributeNamedArgument, _MemberName_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Reflection::CustomAttributeNamedArgument, _attributeType) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Reflection::CustomAttributeNamedArgument, _lazyMemberInfo) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Reflection::CustomAttributeNamedArgument, 0x30>, "Size mismatch!");

} // namespace System::Reflection
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::CustomAttributeNamedArgument, "System.Reflection", "CustomAttributeNamedArgument");
