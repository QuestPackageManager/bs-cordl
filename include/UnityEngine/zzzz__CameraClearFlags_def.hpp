#pragma once
// IWYU pragma private; include "UnityEngine/CameraClearFlags.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CameraClearFlags)
// Forward declare root types
namespace UnityEngine {
struct CameraClearFlags;
}
// Write type traits
MARK_VAL_T(::UnityEngine::CameraClearFlags);
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.CameraClearFlags
struct CORDL_TYPE CameraClearFlags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __CameraClearFlags_Unwrapped
  enum struct __CameraClearFlags_Unwrapped : int32_t {
    __E_Skybox = static_cast<int32_t>(0x1),
    __E_Color = static_cast<int32_t>(0x2),
    __E_SolidColor = static_cast<int32_t>(0x2),
    __E_Depth = static_cast<int32_t>(0x3),
    __E_Nothing = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __CameraClearFlags_Unwrapped() const noexcept {
    return static_cast<__CameraClearFlags_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr CameraClearFlags();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr CameraClearFlags(int32_t value__) noexcept;

  /// @brief Field Color value: I32(2)
  static ::UnityEngine::CameraClearFlags const Color;

  /// @brief Field Depth value: I32(3)
  static ::UnityEngine::CameraClearFlags const Depth;

  /// @brief Field Nothing value: I32(4)
  static ::UnityEngine::CameraClearFlags const Nothing;

  /// @brief Field Skybox value: I32(1)
  static ::UnityEngine::CameraClearFlags const Skybox;

  /// @brief Field SolidColor value: I32(2)
  static ::UnityEngine::CameraClearFlags const SolidColor;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10755 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::CameraClearFlags, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::CameraClearFlags, 0x4>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::CameraClearFlags, "UnityEngine", "CameraClearFlags");
