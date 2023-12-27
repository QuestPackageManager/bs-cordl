#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SpriteTileMode)
// Forward declare root types
namespace UnityEngine {
struct SpriteTileMode;
}
// Write type traits
MARK_VAL_T(::UnityEngine::SpriteTileMode);
// Type: UnityEngine::SpriteTileMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10284))
// CS Name: ::UnityEngine::SpriteTileMode
struct CORDL_TYPE SpriteTileMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __SpriteTileMode_Unwrapped
  enum struct __SpriteTileMode_Unwrapped : int32_t {
    __E_Continuous = static_cast<int32_t>(0x0),
    __E_Adaptive = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __SpriteTileMode_Unwrapped() const noexcept {
    return static_cast<__SpriteTileMode_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr SpriteTileMode(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr SpriteTileMode();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Continuous value: static_cast<int32_t>(0x0)
  static ::UnityEngine::SpriteTileMode const Continuous;

  /// @brief Field Adaptive value: static_cast<int32_t>(0x1)
  static ::UnityEngine::SpriteTileMode const Adaptive;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::SpriteTileMode, 0x4>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::SpriteTileMode, "UnityEngine", "SpriteTileMode");
