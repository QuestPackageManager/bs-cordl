#pragma once
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
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Reflection {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3504))
// CS Name: ::System.Reflection::CustomAttributeTypedArgument
struct CORDL_TYPE CustomAttributeTypedArgument {
public:
  // Declarations
  __declspec(property(get = get_ArgumentType))::System::Type* ArgumentType;

  __declspec(property(get = get_Value))::System::Object* Value;

  /// @brief Method .ctor addr 0x24edb8c size 0x88 virtual false final false
  inline void _ctor(::System::Object* value);

  /// @brief Method .ctor addr 0x24e7478 size 0x2b0 virtual false final false
  inline void _ctor(::System::Type* argumentType, ::System::Object* value);

  /// @brief Method get_ArgumentType addr 0x24edccc size 0x8 virtual false final false
  inline ::System::Type* get_ArgumentType();

  /// @brief Method get_Value addr 0x24edcd4 size 0x8 virtual false final false
  inline ::System::Object* get_Value();

  /// @brief Method Equals addr 0x24edcdc size 0x70 virtual true final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode addr 0x24edd4c size 0x64 virtual true final false
  inline int32_t GetHashCode();

  /// @brief Method op_Equality addr 0x24eddb0 size 0x78 virtual false final false
  static inline bool op_Equality(::System::Reflection::CustomAttributeTypedArgument left, ::System::Reflection::CustomAttributeTypedArgument right);

  /// @brief Method op_Inequality addr 0x24ede28 size 0x7c virtual false final false
  static inline bool op_Inequality(::System::Reflection::CustomAttributeTypedArgument left, ::System::Reflection::CustomAttributeTypedArgument right);

  /// @brief Method ToString addr 0x24edea4 size 0x8 virtual true final false
  inline ::StringW ToString();

  /// @brief Method ToString addr 0x24ed294 size 0x8f8 virtual false final false
  inline ::StringW ToString(bool typed);

  /// @brief Method CanonicalizeValue addr 0x24edc14 size 0xb8 virtual false final false
  static inline ::System::Object* CanonicalizeValue(::System::Object* value);

  // Ctor Parameters [CppParam { name: "_ArgumentType_k__BackingField", ty: "::System::Type*", modifiers: "", def_value: None }, CppParam { name: "_Value_k__BackingField", ty: "::System::Object*",
  // modifiers: "", def_value: None }]
  constexpr CustomAttributeTypedArgument(::System::Type* _ArgumentType_k__BackingField, ::System::Object* _Value_k__BackingField) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr CustomAttributeTypedArgument();

  /// @brief Field <ArgumentType>k__BackingField, offset: 0x0, size: 0x8, def value: None
  ::System::Type* _ArgumentType_k__BackingField;

  /// @brief Field <Value>k__BackingField, offset: 0x8, size: 0x8, def value: None
  ::System::Object* _Value_k__BackingField;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Reflection::CustomAttributeTypedArgument, 0x10>, "Size mismatch!");

} // namespace System::Reflection
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::CustomAttributeTypedArgument, "System.Reflection", "CustomAttributeTypedArgument");
