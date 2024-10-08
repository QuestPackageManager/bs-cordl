#pragma once
// IWYU pragma private; include "System/Reflection/CustomAttributeTypedArgument.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CustomAttributeTypedArgument)
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Reflection {
struct CustomAttributeTypedArgument;
}
// Write type traits
MARK_VAL_T(::System::Reflection::CustomAttributeTypedArgument);
// Type: System.Reflection::CustomAttributeTypedArgument
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Reflection {
// Is value type: true
// CS Name: ::System.Reflection::CustomAttributeTypedArgument
struct CORDL_TYPE CustomAttributeTypedArgument {
public:
  // Declarations
  __declspec(property(get = get_ArgumentType)) ::System::Type* ArgumentType;

  __declspec(property(get = get_Value)) ::System::Object* Value;

  /// @brief Method CanonicalizeValue, addr 0x3cb437c, size 0xb8, virtual false, abstract: false, final false
  static inline ::System::Object* CanonicalizeValue(::System::Object* value);

  /// @brief Method Equals, addr 0x3cb4444, size 0x70, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x3cb44b4, size 0x64, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x3cb460c, size 0x8, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x3cb39b0, size 0x948, virtual false, abstract: false, final false
  inline ::StringW ToString(bool typed);

  /// @brief Method .ctor, addr 0x3cad4e0, size 0x2a8, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* argumentType, ::System::Object* value);

  /// @brief Method .ctor, addr 0x3cb42f8, size 0x84, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* value);

  /// @brief Method get_ArgumentType, addr 0x3cb4434, size 0x8, virtual false, abstract: false, final false
  inline ::System::Type* get_ArgumentType();

  /// @brief Method get_Value, addr 0x3cb443c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Object* get_Value();

  /// @brief Method op_Equality, addr 0x3cb4518, size 0x78, virtual false, abstract: false, final false
  static inline bool op_Equality(::System::Reflection::CustomAttributeTypedArgument left, ::System::Reflection::CustomAttributeTypedArgument right);

  /// @brief Method op_Inequality, addr 0x3cb4590, size 0x7c, virtual false, abstract: false, final false
  static inline bool op_Inequality(::System::Reflection::CustomAttributeTypedArgument left, ::System::Reflection::CustomAttributeTypedArgument right);

  // Ctor Parameters []
  // @brief default ctor
  constexpr CustomAttributeTypedArgument();

  // Ctor Parameters [CppParam { name: "_ArgumentType_k__BackingField", ty: "::System::Type*", modifiers: "", def_value: None }, CppParam { name: "_Value_k__BackingField", ty: "::System::Object*",
  // modifiers: "", def_value: None }]
  constexpr CustomAttributeTypedArgument(::System::Type* _ArgumentType_k__BackingField, ::System::Object* _Value_k__BackingField) noexcept;

  /// @brief Field <ArgumentType>k__BackingField, offset: 0x0, size: 0x8, def value: None
  ::System::Type* _ArgumentType_k__BackingField;

  /// @brief Field <Value>k__BackingField, offset: 0x8, size: 0x8, def value: None
  ::System::Object* _Value_k__BackingField;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3507 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Reflection::CustomAttributeTypedArgument, 0x10>, "Size mismatch!");

static_assert(offsetof(::System::Reflection::CustomAttributeTypedArgument, _ArgumentType_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Reflection::CustomAttributeTypedArgument, _Value_k__BackingField) == 0x8, "Offset mismatch!");

} // namespace System::Reflection
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::CustomAttributeTypedArgument, "System.Reflection", "CustomAttributeTypedArgument");
