#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/AmbientMode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AmbientMode)
// Forward declare root types
namespace UnityEngine::Rendering {
struct AmbientMode;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::AmbientMode);
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.AmbientMode
struct CORDL_TYPE AmbientMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __AmbientMode_Unwrapped
  enum struct __AmbientMode_Unwrapped : int32_t {
    __E_Skybox = static_cast<int32_t>(0x0),
    __E_Trilight = static_cast<int32_t>(0x1),
    __E_Flat = static_cast<int32_t>(0x3),
    __E_Custom = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __AmbientMode_Unwrapped() const noexcept {
    return static_cast<__AmbientMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr AmbientMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr AmbientMode(int32_t value__) noexcept;

  /// @brief Field Custom value: I32(4)
  static ::UnityEngine::Rendering::AmbientMode const Custom;

  /// @brief Field Flat value: I32(3)
  static ::UnityEngine::Rendering::AmbientMode const Flat;

  /// @brief Field Skybox value: I32(0)
  static ::UnityEngine::Rendering::AmbientMode const Skybox;

  /// @brief Field Trilight value: I32(1)
  static ::UnityEngine::Rendering::AmbientMode const Trilight;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11188 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::AmbientMode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::AmbientMode, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::AmbientMode, "UnityEngine.Rendering", "AmbientMode");
