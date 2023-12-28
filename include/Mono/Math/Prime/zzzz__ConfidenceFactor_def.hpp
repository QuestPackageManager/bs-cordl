#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ConfidenceFactor)
// Forward declare root types
namespace Mono::Math::Prime {
struct ConfidenceFactor;
}
// Write type traits
MARK_VAL_T(::Mono::Math::Prime::ConfidenceFactor);
// Type: Mono.Math.Prime::ConfidenceFactor
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Mono::Math::Prime {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13808))
// CS Name: ::Mono.Math.Prime::ConfidenceFactor
struct CORDL_TYPE ConfidenceFactor {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ConfidenceFactor_Unwrapped
  enum struct __ConfidenceFactor_Unwrapped : int32_t {
    __E_ExtraLow = static_cast<int32_t>(0x0),
    __E_Low = static_cast<int32_t>(0x1),
    __E_Medium = static_cast<int32_t>(0x2),
    __E_High = static_cast<int32_t>(0x3),
    __E_ExtraHigh = static_cast<int32_t>(0x4),
    __E_Provable = static_cast<int32_t>(0x5),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ConfidenceFactor_Unwrapped() const noexcept {
    return static_cast<__ConfidenceFactor_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ConfidenceFactor(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr ConfidenceFactor();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field ExtraLow value: static_cast<int32_t>(0x0)
  static ::Mono::Math::Prime::ConfidenceFactor const ExtraLow;

  /// @brief Field Low value: static_cast<int32_t>(0x1)
  static ::Mono::Math::Prime::ConfidenceFactor const Low;

  /// @brief Field Medium value: static_cast<int32_t>(0x2)
  static ::Mono::Math::Prime::ConfidenceFactor const Medium;

  /// @brief Field High value: static_cast<int32_t>(0x3)
  static ::Mono::Math::Prime::ConfidenceFactor const High;

  /// @brief Field ExtraHigh value: static_cast<int32_t>(0x4)
  static ::Mono::Math::Prime::ConfidenceFactor const ExtraHigh;

  /// @brief Field Provable value: static_cast<int32_t>(0x5)
  static ::Mono::Math::Prime::ConfidenceFactor const Provable;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Math::Prime::ConfidenceFactor, 0x4>, "Size mismatch!");

} // namespace Mono::Math::Prime
DEFINE_IL2CPP_ARG_TYPE(::Mono::Math::Prime::ConfidenceFactor, "Mono.Math.Prime", "ConfidenceFactor");
