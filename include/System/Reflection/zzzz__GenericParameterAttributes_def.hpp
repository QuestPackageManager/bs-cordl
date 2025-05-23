#pragma once
// IWYU pragma private; include "System/Reflection/GenericParameterAttributes.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GenericParameterAttributes)
// Forward declare root types
namespace System::Reflection {
struct GenericParameterAttributes;
}
// Write type traits
MARK_VAL_T(::System::Reflection::GenericParameterAttributes);
// Dependencies
namespace System::Reflection {
// Is value type: true
// CS Name: System.Reflection.GenericParameterAttributes
struct CORDL_TYPE GenericParameterAttributes {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __GenericParameterAttributes_Unwrapped
  enum struct __GenericParameterAttributes_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_VarianceMask = static_cast<int32_t>(0x3),
    __E_Covariant = static_cast<int32_t>(0x1),
    __E_Contravariant = static_cast<int32_t>(0x2),
    __E_SpecialConstraintMask = static_cast<int32_t>(0x1c),
    __E_ReferenceTypeConstraint = static_cast<int32_t>(0x4),
    __E_NotNullableValueTypeConstraint = static_cast<int32_t>(0x8),
    __E_DefaultConstructorConstraint = static_cast<int32_t>(0x10),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __GenericParameterAttributes_Unwrapped() const noexcept {
    return static_cast<__GenericParameterAttributes_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr GenericParameterAttributes();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr GenericParameterAttributes(int32_t value__) noexcept;

  /// @brief Field Contravariant value: I32(2)
  static ::System::Reflection::GenericParameterAttributes const Contravariant;

  /// @brief Field Covariant value: I32(1)
  static ::System::Reflection::GenericParameterAttributes const Covariant;

  /// @brief Field DefaultConstructorConstraint value: I32(16)
  static ::System::Reflection::GenericParameterAttributes const DefaultConstructorConstraint;

  /// @brief Field None value: I32(0)
  static ::System::Reflection::GenericParameterAttributes const None;

  /// @brief Field NotNullableValueTypeConstraint value: I32(8)
  static ::System::Reflection::GenericParameterAttributes const NotNullableValueTypeConstraint;

  /// @brief Field ReferenceTypeConstraint value: I32(4)
  static ::System::Reflection::GenericParameterAttributes const ReferenceTypeConstraint;

  /// @brief Field SpecialConstraintMask value: I32(28)
  static ::System::Reflection::GenericParameterAttributes const SpecialConstraintMask;

  /// @brief Field VarianceMask value: I32(3)
  static ::System::Reflection::GenericParameterAttributes const VarianceMask;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3470 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Reflection::GenericParameterAttributes, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Reflection::GenericParameterAttributes, 0x4>, "Size mismatch!");

} // namespace System::Reflection
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::GenericParameterAttributes, "System.Reflection", "GenericParameterAttributes");
