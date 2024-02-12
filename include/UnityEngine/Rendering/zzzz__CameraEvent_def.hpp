#pragma once
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
// Type: UnityEngine.Rendering::CameraEvent
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9087))
// CS Name: ::UnityEngine.Rendering::CameraEvent
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr CameraEvent(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr CameraEvent();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field BeforeDepthTexture value: static_cast<int32_t>(0x0)
  static ::UnityEngine::Rendering::CameraEvent const BeforeDepthTexture;

  /// @brief Field AfterDepthTexture value: static_cast<int32_t>(0x1)
  static ::UnityEngine::Rendering::CameraEvent const AfterDepthTexture;

  /// @brief Field BeforeDepthNormalsTexture value: static_cast<int32_t>(0x2)
  static ::UnityEngine::Rendering::CameraEvent const BeforeDepthNormalsTexture;

  /// @brief Field AfterDepthNormalsTexture value: static_cast<int32_t>(0x3)
  static ::UnityEngine::Rendering::CameraEvent const AfterDepthNormalsTexture;

  /// @brief Field BeforeGBuffer value: static_cast<int32_t>(0x4)
  static ::UnityEngine::Rendering::CameraEvent const BeforeGBuffer;

  /// @brief Field AfterGBuffer value: static_cast<int32_t>(0x5)
  static ::UnityEngine::Rendering::CameraEvent const AfterGBuffer;

  /// @brief Field BeforeLighting value: static_cast<int32_t>(0x6)
  static ::UnityEngine::Rendering::CameraEvent const BeforeLighting;

  /// @brief Field AfterLighting value: static_cast<int32_t>(0x7)
  static ::UnityEngine::Rendering::CameraEvent const AfterLighting;

  /// @brief Field BeforeFinalPass value: static_cast<int32_t>(0x8)
  static ::UnityEngine::Rendering::CameraEvent const BeforeFinalPass;

  /// @brief Field AfterFinalPass value: static_cast<int32_t>(0x9)
  static ::UnityEngine::Rendering::CameraEvent const AfterFinalPass;

  /// @brief Field BeforeForwardOpaque value: static_cast<int32_t>(0xa)
  static ::UnityEngine::Rendering::CameraEvent const BeforeForwardOpaque;

  /// @brief Field AfterForwardOpaque value: static_cast<int32_t>(0xb)
  static ::UnityEngine::Rendering::CameraEvent const AfterForwardOpaque;

  /// @brief Field BeforeImageEffectsOpaque value: static_cast<int32_t>(0xc)
  static ::UnityEngine::Rendering::CameraEvent const BeforeImageEffectsOpaque;

  /// @brief Field AfterImageEffectsOpaque value: static_cast<int32_t>(0xd)
  static ::UnityEngine::Rendering::CameraEvent const AfterImageEffectsOpaque;

  /// @brief Field BeforeSkybox value: static_cast<int32_t>(0xe)
  static ::UnityEngine::Rendering::CameraEvent const BeforeSkybox;

  /// @brief Field AfterSkybox value: static_cast<int32_t>(0xf)
  static ::UnityEngine::Rendering::CameraEvent const AfterSkybox;

  /// @brief Field BeforeForwardAlpha value: static_cast<int32_t>(0x10)
  static ::UnityEngine::Rendering::CameraEvent const BeforeForwardAlpha;

  /// @brief Field AfterForwardAlpha value: static_cast<int32_t>(0x11)
  static ::UnityEngine::Rendering::CameraEvent const AfterForwardAlpha;

  /// @brief Field BeforeImageEffects value: static_cast<int32_t>(0x12)
  static ::UnityEngine::Rendering::CameraEvent const BeforeImageEffects;

  /// @brief Field AfterImageEffects value: static_cast<int32_t>(0x13)
  static ::UnityEngine::Rendering::CameraEvent const AfterImageEffects;

  /// @brief Field AfterEverything value: static_cast<int32_t>(0x14)
  static ::UnityEngine::Rendering::CameraEvent const AfterEverything;

  /// @brief Field BeforeReflections value: static_cast<int32_t>(0x15)
  static ::UnityEngine::Rendering::CameraEvent const BeforeReflections;

  /// @brief Field AfterReflections value: static_cast<int32_t>(0x16)
  static ::UnityEngine::Rendering::CameraEvent const AfterReflections;

  /// @brief Field BeforeHaloAndLensFlares value: static_cast<int32_t>(0x17)
  static ::UnityEngine::Rendering::CameraEvent const BeforeHaloAndLensFlares;

  /// @brief Field AfterHaloAndLensFlares value: static_cast<int32_t>(0x18)
  static ::UnityEngine::Rendering::CameraEvent const AfterHaloAndLensFlares;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::CameraEvent, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CameraEvent, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::CameraEvent, "UnityEngine.Rendering", "CameraEvent");
