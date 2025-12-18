#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/CameraEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CameraEvent)
// Forward declare root types
namespace UnityEngine::Rendering {
struct CameraEvent;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::CameraEvent);
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.CameraEvent
struct CORDL_TYPE CameraEvent {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __CameraEvent_Unwrapped
  enum struct __CameraEvent_Unwrapped : int32_t {
    __E_BeforeDepthTexture = static_cast<int32_t>(0x0),
    __E_AfterDepthTexture = static_cast<int32_t>(0x1),
    __E_BeforeDepthNormalsTexture = static_cast<int32_t>(0x2),
    __E_AfterDepthNormalsTexture = static_cast<int32_t>(0x3),
    __E_BeforeGBuffer = static_cast<int32_t>(0x4),
    __E_AfterGBuffer = static_cast<int32_t>(0x5),
    __E_BeforeLighting = static_cast<int32_t>(0x6),
    __E_AfterLighting = static_cast<int32_t>(0x7),
    __E_BeforeFinalPass = static_cast<int32_t>(0x8),
    __E_AfterFinalPass = static_cast<int32_t>(0x9),
    __E_BeforeForwardOpaque = static_cast<int32_t>(0xa),
    __E_AfterForwardOpaque = static_cast<int32_t>(0xb),
    __E_BeforeImageEffectsOpaque = static_cast<int32_t>(0xc),
    __E_AfterImageEffectsOpaque = static_cast<int32_t>(0xd),
    __E_BeforeSkybox = static_cast<int32_t>(0xe),
    __E_AfterSkybox = static_cast<int32_t>(0xf),
    __E_BeforeForwardAlpha = static_cast<int32_t>(0x10),
    __E_AfterForwardAlpha = static_cast<int32_t>(0x11),
    __E_BeforeImageEffects = static_cast<int32_t>(0x12),
    __E_AfterImageEffects = static_cast<int32_t>(0x13),
    __E_AfterEverything = static_cast<int32_t>(0x14),
    __E_BeforeReflections = static_cast<int32_t>(0x15),
    __E_AfterReflections = static_cast<int32_t>(0x16),
    __E_BeforeHaloAndLensFlares = static_cast<int32_t>(0x17),
    __E_AfterHaloAndLensFlares = static_cast<int32_t>(0x18),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __CameraEvent_Unwrapped() const noexcept {
    return static_cast<__CameraEvent_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr CameraEvent();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr CameraEvent(int32_t value__) noexcept;

  /// @brief Field AfterDepthNormalsTexture value: I32(3)
  static ::UnityEngine::Rendering::CameraEvent const AfterDepthNormalsTexture;

  /// @brief Field AfterDepthTexture value: I32(1)
  static ::UnityEngine::Rendering::CameraEvent const AfterDepthTexture;

  /// @brief Field AfterEverything value: I32(20)
  static ::UnityEngine::Rendering::CameraEvent const AfterEverything;

  /// @brief Field AfterFinalPass value: I32(9)
  static ::UnityEngine::Rendering::CameraEvent const AfterFinalPass;

  /// @brief Field AfterForwardAlpha value: I32(17)
  static ::UnityEngine::Rendering::CameraEvent const AfterForwardAlpha;

  /// @brief Field AfterForwardOpaque value: I32(11)
  static ::UnityEngine::Rendering::CameraEvent const AfterForwardOpaque;

  /// @brief Field AfterGBuffer value: I32(5)
  static ::UnityEngine::Rendering::CameraEvent const AfterGBuffer;

  /// @brief Field AfterHaloAndLensFlares value: I32(24)
  static ::UnityEngine::Rendering::CameraEvent const AfterHaloAndLensFlares;

  /// @brief Field AfterImageEffects value: I32(19)
  static ::UnityEngine::Rendering::CameraEvent const AfterImageEffects;

  /// @brief Field AfterImageEffectsOpaque value: I32(13)
  static ::UnityEngine::Rendering::CameraEvent const AfterImageEffectsOpaque;

  /// @brief Field AfterLighting value: I32(7)
  static ::UnityEngine::Rendering::CameraEvent const AfterLighting;

  /// @brief Field AfterReflections value: I32(22)
  static ::UnityEngine::Rendering::CameraEvent const AfterReflections;

  /// @brief Field AfterSkybox value: I32(15)
  static ::UnityEngine::Rendering::CameraEvent const AfterSkybox;

  /// @brief Field BeforeDepthNormalsTexture value: I32(2)
  static ::UnityEngine::Rendering::CameraEvent const BeforeDepthNormalsTexture;

  /// @brief Field BeforeDepthTexture value: I32(0)
  static ::UnityEngine::Rendering::CameraEvent const BeforeDepthTexture;

  /// @brief Field BeforeFinalPass value: I32(8)
  static ::UnityEngine::Rendering::CameraEvent const BeforeFinalPass;

  /// @brief Field BeforeForwardAlpha value: I32(16)
  static ::UnityEngine::Rendering::CameraEvent const BeforeForwardAlpha;

  /// @brief Field BeforeForwardOpaque value: I32(10)
  static ::UnityEngine::Rendering::CameraEvent const BeforeForwardOpaque;

  /// @brief Field BeforeGBuffer value: I32(4)
  static ::UnityEngine::Rendering::CameraEvent const BeforeGBuffer;

  /// @brief Field BeforeHaloAndLensFlares value: I32(23)
  static ::UnityEngine::Rendering::CameraEvent const BeforeHaloAndLensFlares;

  /// @brief Field BeforeImageEffects value: I32(18)
  static ::UnityEngine::Rendering::CameraEvent const BeforeImageEffects;

  /// @brief Field BeforeImageEffectsOpaque value: I32(12)
  static ::UnityEngine::Rendering::CameraEvent const BeforeImageEffectsOpaque;

  /// @brief Field BeforeLighting value: I32(6)
  static ::UnityEngine::Rendering::CameraEvent const BeforeLighting;

  /// @brief Field BeforeReflections value: I32(21)
  static ::UnityEngine::Rendering::CameraEvent const BeforeReflections;

  /// @brief Field BeforeSkybox value: I32(14)
  static ::UnityEngine::Rendering::CameraEvent const BeforeSkybox;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10699 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::CameraEvent, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::CameraEvent, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::CameraEvent, "UnityEngine.Rendering", "CameraEvent");
