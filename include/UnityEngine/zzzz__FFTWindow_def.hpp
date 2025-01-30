#pragma once
// IWYU pragma private; include "UnityEngine/FFTWindow.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FFTWindow)
// Forward declare root types
namespace UnityEngine {
struct FFTWindow;
}
// Write type traits
MARK_VAL_T(::UnityEngine::FFTWindow);
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.FFTWindow
struct CORDL_TYPE FFTWindow {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __FFTWindow_Unwrapped
  enum struct __FFTWindow_Unwrapped : int32_t {
    __E_Rectangular = static_cast<int32_t>(0x0),
    __E_Triangle = static_cast<int32_t>(0x1),
    __E_Hamming = static_cast<int32_t>(0x2),
    __E_Hanning = static_cast<int32_t>(0x3),
    __E_Blackman = static_cast<int32_t>(0x4),
    __E_BlackmanHarris = static_cast<int32_t>(0x5),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __FFTWindow_Unwrapped() const noexcept {
    return static_cast<__FFTWindow_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr FFTWindow();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr FFTWindow(int32_t value__) noexcept;

  /// @brief Field Blackman value: I32(4)
  static ::UnityEngine::FFTWindow const Blackman;

  /// @brief Field BlackmanHarris value: I32(5)
  static ::UnityEngine::FFTWindow const BlackmanHarris;

  /// @brief Field Hamming value: I32(2)
  static ::UnityEngine::FFTWindow const Hamming;

  /// @brief Field Hanning value: I32(3)
  static ::UnityEngine::FFTWindow const Hanning;

  /// @brief Field Rectangular value: I32(0)
  static ::UnityEngine::FFTWindow const Rectangular;

  /// @brief Field Triangle value: I32(1)
  static ::UnityEngine::FFTWindow const Triangle;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17856 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::FFTWindow, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::FFTWindow, 0x4>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::FFTWindow, "UnityEngine", "FFTWindow");
