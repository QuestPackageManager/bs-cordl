#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/SRPLensFlareBlendMode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SRPLensFlareBlendMode)
// Forward declare root types
namespace UnityEngine::Rendering {
struct SRPLensFlareBlendMode;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::SRPLensFlareBlendMode);
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.SRPLensFlareBlendMode
struct CORDL_TYPE SRPLensFlareBlendMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __SRPLensFlareBlendMode_Unwrapped
  enum struct __SRPLensFlareBlendMode_Unwrapped : int32_t {
    __E_Additive = static_cast<int32_t>(0x0),
    __E_Screen = static_cast<int32_t>(0x1),
    __E_Premultiply = static_cast<int32_t>(0x2),
    __E_Lerp = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __SRPLensFlareBlendMode_Unwrapped() const noexcept {
    return static_cast<__SRPLensFlareBlendMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr SRPLensFlareBlendMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr SRPLensFlareBlendMode(int32_t value__) noexcept;

  /// @brief Field Additive value: I32(0)
  static ::UnityEngine::Rendering::SRPLensFlareBlendMode const Additive;

  /// @brief Field Lerp value: I32(3)
  static ::UnityEngine::Rendering::SRPLensFlareBlendMode const Lerp;

  /// @brief Field Premultiply value: I32(2)
  static ::UnityEngine::Rendering::SRPLensFlareBlendMode const Premultiply;

  /// @brief Field Screen value: I32(1)
  static ::UnityEngine::Rendering::SRPLensFlareBlendMode const Screen;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12145 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::SRPLensFlareBlendMode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::SRPLensFlareBlendMode, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::SRPLensFlareBlendMode, "UnityEngine.Rendering", "SRPLensFlareBlendMode");
