#pragma once
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
// Type: System.Reflection::GenericParameterAttributes
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Reflection {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3470))
// CS Name: ::System.Reflection::GenericParameterAttributes
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr GenericParameterAttributes(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr GenericParameterAttributes();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::System::Reflection::GenericParameterAttributes const None;

  /// @brief Field VarianceMask value: static_cast<int32_t>(0x3)
  static ::System::Reflection::GenericParameterAttributes const VarianceMask;

  /// @brief Field Covariant value: static_cast<int32_t>(0x1)
  static ::System::Reflection::GenericParameterAttributes const Covariant;

  /// @brief Field Contravariant value: static_cast<int32_t>(0x2)
  static ::System::Reflection::GenericParameterAttributes const Contravariant;

  /// @brief Field SpecialConstraintMask value: static_cast<int32_t>(0x1c)
  static ::System::Reflection::GenericParameterAttributes const SpecialConstraintMask;

  /// @brief Field ReferenceTypeConstraint value: static_cast<int32_t>(0x4)
  static ::System::Reflection::GenericParameterAttributes const ReferenceTypeConstraint;

  /// @brief Field NotNullableValueTypeConstraint value: static_cast<int32_t>(0x8)
  static ::System::Reflection::GenericParameterAttributes const NotNullableValueTypeConstraint;

  /// @brief Field DefaultConstructorConstraint value: static_cast<int32_t>(0x10)
  static ::System::Reflection::GenericParameterAttributes const DefaultConstructorConstraint;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Reflection::GenericParameterAttributes, 0x4>, "Size mismatch!");

} // namespace System::Reflection
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::GenericParameterAttributes, "System.Reflection", "GenericParameterAttributes");
