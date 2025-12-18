#pragma once
// IWYU pragma private; include "UnityEngine/TransparencySortMode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TransparencySortMode)
// Forward declare root types
namespace UnityEngine {
struct TransparencySortMode;
}
// Write type traits
MARK_VAL_T(::UnityEngine::TransparencySortMode);
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.TransparencySortMode
struct CORDL_TYPE TransparencySortMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __TransparencySortMode_Unwrapped
  enum struct __TransparencySortMode_Unwrapped : int32_t {
    __E_Default = static_cast<int32_t>(0x0),
    __E_Perspective = static_cast<int32_t>(0x1),
    __E_Orthographic = static_cast<int32_t>(0x2),
    __E_CustomAxis = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __TransparencySortMode_Unwrapped() const noexcept {
    return static_cast<__TransparencySortMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr TransparencySortMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr TransparencySortMode(int32_t value__) noexcept;

  /// @brief Field CustomAxis value: I32(3)
  static ::UnityEngine::TransparencySortMode const CustomAxis;

  /// @brief Field Default value: I32(0)
  static ::UnityEngine::TransparencySortMode const Default;

  /// @brief Field Orthographic value: I32(2)
  static ::UnityEngine::TransparencySortMode const Orthographic;

  /// @brief Field Perspective value: I32(1)
  static ::UnityEngine::TransparencySortMode const Perspective;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10150 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::TransparencySortMode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::TransparencySortMode, 0x4>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TransparencySortMode, "UnityEngine", "TransparencySortMode");
