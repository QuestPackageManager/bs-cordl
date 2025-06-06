#pragma once
// IWYU pragma private; include "UnityEngine/RenderMode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RenderMode)
// Forward declare root types
namespace UnityEngine {
struct RenderMode;
}
// Write type traits
MARK_VAL_T(::UnityEngine::RenderMode);
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.RenderMode
struct CORDL_TYPE RenderMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __RenderMode_Unwrapped
  enum struct __RenderMode_Unwrapped : int32_t {
    __E_ScreenSpaceOverlay = static_cast<int32_t>(0x0),
    __E_ScreenSpaceCamera = static_cast<int32_t>(0x1),
    __E_WorldSpace = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __RenderMode_Unwrapped() const noexcept {
    return static_cast<__RenderMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr RenderMode(int32_t value__) noexcept;

  /// @brief Field ScreenSpaceCamera value: I32(1)
  static ::UnityEngine::RenderMode const ScreenSpaceCamera;

  /// @brief Field ScreenSpaceOverlay value: I32(0)
  static ::UnityEngine::RenderMode const ScreenSpaceOverlay;

  /// @brief Field WorldSpace value: I32(2)
  static ::UnityEngine::RenderMode const WorldSpace;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18339 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::RenderMode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::RenderMode, 0x4>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::RenderMode, "UnityEngine", "RenderMode");
