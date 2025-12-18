#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/RenderPassEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RenderPassEvent)
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
struct RenderPassEvent;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::Universal::RenderPassEvent);
// Dependencies
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.RenderPassEvent
struct CORDL_TYPE RenderPassEvent {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __RenderPassEvent_Unwrapped
  enum struct __RenderPassEvent_Unwrapped : int32_t {
    __E_BeforeRendering = static_cast<int32_t>(0x0),
    __E_BeforeRenderingShadows = static_cast<int32_t>(0x32),
    __E_AfterRenderingShadows = static_cast<int32_t>(0x64),
    __E_BeforeRenderingPrePasses = static_cast<int32_t>(0x96),
    __E_AfterRenderingPrePasses = static_cast<int32_t>(0xc8),
    __E_BeforeRenderingGbuffer = static_cast<int32_t>(0xd2),
    __E_AfterRenderingGbuffer = static_cast<int32_t>(0xdc),
    __E_BeforeRenderingDeferredLights = static_cast<int32_t>(0xe6),
    __E_AfterRenderingDeferredLights = static_cast<int32_t>(0xf0),
    __E_BeforeRenderingOpaques = static_cast<int32_t>(0xfa),
    __E_AfterRenderingOpaques = static_cast<int32_t>(0x12c),
    __E_BeforeRenderingSkybox = static_cast<int32_t>(0x15e),
    __E_AfterRenderingSkybox = static_cast<int32_t>(0x190),
    __E_BeforeRenderingTransparents = static_cast<int32_t>(0x1c2),
    __E_AfterRenderingTransparents = static_cast<int32_t>(0x1f4),
    __E_BeforeRenderingPostProcessing = static_cast<int32_t>(0x226),
    __E_AfterRenderingPostProcessing = static_cast<int32_t>(0x258),
    __E_AfterRendering = static_cast<int32_t>(0x3e8),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __RenderPassEvent_Unwrapped() const noexcept {
    return static_cast<__RenderPassEvent_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderPassEvent();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr RenderPassEvent(int32_t value__) noexcept;

  /// @brief Field AfterRendering value: I32(1000)
  static ::UnityEngine::Rendering::Universal::RenderPassEvent const AfterRendering;

  /// @brief Field AfterRenderingDeferredLights value: I32(240)
  static ::UnityEngine::Rendering::Universal::RenderPassEvent const AfterRenderingDeferredLights;

  /// @brief Field AfterRenderingGbuffer value: I32(220)
  static ::UnityEngine::Rendering::Universal::RenderPassEvent const AfterRenderingGbuffer;

  /// @brief Field AfterRenderingOpaques value: I32(300)
  static ::UnityEngine::Rendering::Universal::RenderPassEvent const AfterRenderingOpaques;

  /// @brief Field AfterRenderingPostProcessing value: I32(600)
  static ::UnityEngine::Rendering::Universal::RenderPassEvent const AfterRenderingPostProcessing;

  /// @brief Field AfterRenderingPrePasses value: I32(200)
  static ::UnityEngine::Rendering::Universal::RenderPassEvent const AfterRenderingPrePasses;

  /// @brief Field AfterRenderingShadows value: I32(100)
  static ::UnityEngine::Rendering::Universal::RenderPassEvent const AfterRenderingShadows;

  /// @brief Field AfterRenderingSkybox value: I32(400)
  static ::UnityEngine::Rendering::Universal::RenderPassEvent const AfterRenderingSkybox;

  /// @brief Field AfterRenderingTransparents value: I32(500)
  static ::UnityEngine::Rendering::Universal::RenderPassEvent const AfterRenderingTransparents;

  /// @brief Field BeforeRendering value: I32(0)
  static ::UnityEngine::Rendering::Universal::RenderPassEvent const BeforeRendering;

  /// @brief Field BeforeRenderingDeferredLights value: I32(230)
  static ::UnityEngine::Rendering::Universal::RenderPassEvent const BeforeRenderingDeferredLights;

  /// @brief Field BeforeRenderingGbuffer value: I32(210)
  static ::UnityEngine::Rendering::Universal::RenderPassEvent const BeforeRenderingGbuffer;

  /// @brief Field BeforeRenderingOpaques value: I32(250)
  static ::UnityEngine::Rendering::Universal::RenderPassEvent const BeforeRenderingOpaques;

  /// @brief Field BeforeRenderingPostProcessing value: I32(550)
  static ::UnityEngine::Rendering::Universal::RenderPassEvent const BeforeRenderingPostProcessing;

  /// @brief Field BeforeRenderingPrePasses value: I32(150)
  static ::UnityEngine::Rendering::Universal::RenderPassEvent const BeforeRenderingPrePasses;

  /// @brief Field BeforeRenderingShadows value: I32(50)
  static ::UnityEngine::Rendering::Universal::RenderPassEvent const BeforeRenderingShadows;

  /// @brief Field BeforeRenderingSkybox value: I32(350)
  static ::UnityEngine::Rendering::Universal::RenderPassEvent const BeforeRenderingSkybox;

  /// @brief Field BeforeRenderingTransparents value: I32(450)
  static ::UnityEngine::Rendering::Universal::RenderPassEvent const BeforeRenderingTransparents;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12858 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::RenderPassEvent, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::RenderPassEvent, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::RenderPassEvent, "UnityEngine.Rendering.Universal", "RenderPassEvent");
