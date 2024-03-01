#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ReflectionBakingCoverageModes)
// Forward declare root types
namespace Zenject {
struct ReflectionBakingCoverageModes;
}
// Write type traits
MARK_VAL_T(::Zenject::ReflectionBakingCoverageModes);
// Type: Zenject::ReflectionBakingCoverageModes
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: true
// CS Name: ::Zenject::ReflectionBakingCoverageModes
struct CORDL_TYPE ReflectionBakingCoverageModes {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ReflectionBakingCoverageModes_Unwrapped
  enum struct __ReflectionBakingCoverageModes_Unwrapped : int32_t {
    __E_FallbackToDirectReflection = static_cast<int32_t>(0x0),
    __E_NoCheckAssumeFullCoverage = static_cast<int32_t>(0x1),
    __E_FallbackToDirectReflectionWithWarning = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ReflectionBakingCoverageModes_Unwrapped() const noexcept {
    return static_cast<__ReflectionBakingCoverageModes_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ReflectionBakingCoverageModes();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ReflectionBakingCoverageModes(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field FallbackToDirectReflection value: static_cast<int32_t>(0x0)
  static ::Zenject::ReflectionBakingCoverageModes const FallbackToDirectReflection;

  /// @brief Field FallbackToDirectReflectionWithWarning value: static_cast<int32_t>(0x2)
  static ::Zenject::ReflectionBakingCoverageModes const FallbackToDirectReflectionWithWarning;

  /// @brief Field NoCheckAssumeFullCoverage value: static_cast<int32_t>(0x1)
  static ::Zenject::ReflectionBakingCoverageModes const NoCheckAssumeFullCoverage;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::ReflectionBakingCoverageModes, 0x4>, "Size mismatch!");

static_assert(offsetof(::Zenject::ReflectionBakingCoverageModes, value__) == 0x0, "Offset mismatch!");

} // namespace Zenject
DEFINE_IL2CPP_ARG_TYPE(::Zenject::ReflectionBakingCoverageModes, "Zenject", "ReflectionBakingCoverageModes");
