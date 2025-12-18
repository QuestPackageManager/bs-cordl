#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/DebugFullScreenMode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DebugFullScreenMode)
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
struct DebugFullScreenMode;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::Universal::DebugFullScreenMode);
// Dependencies
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.DebugFullScreenMode
struct CORDL_TYPE DebugFullScreenMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __DebugFullScreenMode_Unwrapped
  enum struct __DebugFullScreenMode_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Depth = static_cast<int32_t>(0x1),
    __E_MotionVector = static_cast<int32_t>(0x2),
    __E_AdditionalLightsShadowMap = static_cast<int32_t>(0x3),
    __E_MainLightShadowMap = static_cast<int32_t>(0x4),
    __E_AdditionalLightsCookieAtlas = static_cast<int32_t>(0x5),
    __E_ReflectionProbeAtlas = static_cast<int32_t>(0x6),
    __E_STP = static_cast<int32_t>(0x7),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __DebugFullScreenMode_Unwrapped() const noexcept {
    return static_cast<__DebugFullScreenMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugFullScreenMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr DebugFullScreenMode(int32_t value__) noexcept;

  /// @brief Field AdditionalLightsCookieAtlas value: I32(5)
  static ::UnityEngine::Rendering::Universal::DebugFullScreenMode const AdditionalLightsCookieAtlas;

  /// @brief Field AdditionalLightsShadowMap value: I32(3)
  static ::UnityEngine::Rendering::Universal::DebugFullScreenMode const AdditionalLightsShadowMap;

  /// @brief Field Depth value: I32(1)
  static ::UnityEngine::Rendering::Universal::DebugFullScreenMode const Depth;

  /// @brief Field MainLightShadowMap value: I32(4)
  static ::UnityEngine::Rendering::Universal::DebugFullScreenMode const MainLightShadowMap;

  /// @brief Field MotionVector value: I32(2)
  static ::UnityEngine::Rendering::Universal::DebugFullScreenMode const MotionVector;

  /// @brief Field None value: I32(0)
  static ::UnityEngine::Rendering::Universal::DebugFullScreenMode const None;

  /// @brief Field ReflectionProbeAtlas value: I32(6)
  static ::UnityEngine::Rendering::Universal::DebugFullScreenMode const ReflectionProbeAtlas;

  /// @brief Field STP value: I32(7)
  static ::UnityEngine::Rendering::Universal::DebugFullScreenMode const STP;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23118 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::DebugFullScreenMode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::DebugFullScreenMode, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::DebugFullScreenMode, "UnityEngine.Rendering.Universal", "DebugFullScreenMode");
