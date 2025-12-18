#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/UniversalResource.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UniversalResource)
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
struct UniversalResource;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::Universal::UniversalResource);
// Dependencies
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.UniversalResource
struct CORDL_TYPE UniversalResource {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __UniversalResource_Unwrapped
  enum struct __UniversalResource_Unwrapped : int32_t {
    __E_BackBufferColor = static_cast<int32_t>(0x0),
    __E_BackBufferDepth = static_cast<int32_t>(0x1),
    __E_CameraColor = static_cast<int32_t>(0x2),
    __E_CameraDepth = static_cast<int32_t>(0x3),
    __E_MainShadowsTexture = static_cast<int32_t>(0x4),
    __E_AdditionalShadowsTexture = static_cast<int32_t>(0x5),
    __E_GBuffer0 = static_cast<int32_t>(0x6),
    __E_GBuffer1 = static_cast<int32_t>(0x7),
    __E_GBuffer2 = static_cast<int32_t>(0x8),
    __E_GBuffer3 = static_cast<int32_t>(0x9),
    __E_GBuffer4 = static_cast<int32_t>(0xa),
    __E_GBuffer5 = static_cast<int32_t>(0xb),
    __E_GBuffer6 = static_cast<int32_t>(0xc),
    __E_CameraOpaqueTexture = static_cast<int32_t>(0xd),
    __E_CameraDepthTexture = static_cast<int32_t>(0xe),
    __E_CameraNormalsTexture = static_cast<int32_t>(0xf),
    __E_MotionVectorColor = static_cast<int32_t>(0x10),
    __E_MotionVectorDepth = static_cast<int32_t>(0x11),
    __E_InternalColorLut = static_cast<int32_t>(0x12),
    __E_DebugScreenColor = static_cast<int32_t>(0x13),
    __E_DebugScreenDepth = static_cast<int32_t>(0x14),
    __E_AfterPostProcessColor = static_cast<int32_t>(0x15),
    __E_OverlayUITexture = static_cast<int32_t>(0x16),
    __E_RenderingLayersTexture = static_cast<int32_t>(0x17),
    __E_DBuffer0 = static_cast<int32_t>(0x18),
    __E_DBuffer1 = static_cast<int32_t>(0x19),
    __E_DBuffer2 = static_cast<int32_t>(0x1a),
    __E_DBufferDepth = static_cast<int32_t>(0x1b),
    __E_SSAOTexture = static_cast<int32_t>(0x1c),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __UniversalResource_Unwrapped() const noexcept {
    return static_cast<__UniversalResource_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr UniversalResource();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr UniversalResource(int32_t value__) noexcept;

  /// @brief Field AdditionalShadowsTexture value: I32(5)
  static ::UnityEngine::Rendering::Universal::UniversalResource const AdditionalShadowsTexture;

  /// @brief Field AfterPostProcessColor value: I32(21)
  static ::UnityEngine::Rendering::Universal::UniversalResource const AfterPostProcessColor;

  /// @brief Field BackBufferColor value: I32(0)
  static ::UnityEngine::Rendering::Universal::UniversalResource const BackBufferColor;

  /// @brief Field BackBufferDepth value: I32(1)
  static ::UnityEngine::Rendering::Universal::UniversalResource const BackBufferDepth;

  /// @brief Field CameraColor value: I32(2)
  static ::UnityEngine::Rendering::Universal::UniversalResource const CameraColor;

  /// @brief Field CameraDepth value: I32(3)
  static ::UnityEngine::Rendering::Universal::UniversalResource const CameraDepth;

  /// @brief Field CameraDepthTexture value: I32(14)
  static ::UnityEngine::Rendering::Universal::UniversalResource const CameraDepthTexture;

  /// @brief Field CameraNormalsTexture value: I32(15)
  static ::UnityEngine::Rendering::Universal::UniversalResource const CameraNormalsTexture;

  /// @brief Field CameraOpaqueTexture value: I32(13)
  static ::UnityEngine::Rendering::Universal::UniversalResource const CameraOpaqueTexture;

  /// @brief Field DBuffer0 value: I32(24)
  static ::UnityEngine::Rendering::Universal::UniversalResource const DBuffer0;

  /// @brief Field DBuffer1 value: I32(25)
  static ::UnityEngine::Rendering::Universal::UniversalResource const DBuffer1;

  /// @brief Field DBuffer2 value: I32(26)
  static ::UnityEngine::Rendering::Universal::UniversalResource const DBuffer2;

  /// @brief Field DBufferDepth value: I32(27)
  static ::UnityEngine::Rendering::Universal::UniversalResource const DBufferDepth;

  /// @brief Field DebugScreenColor value: I32(19)
  static ::UnityEngine::Rendering::Universal::UniversalResource const DebugScreenColor;

  /// @brief Field DebugScreenDepth value: I32(20)
  static ::UnityEngine::Rendering::Universal::UniversalResource const DebugScreenDepth;

  /// @brief Field GBuffer0 value: I32(6)
  static ::UnityEngine::Rendering::Universal::UniversalResource const GBuffer0;

  /// @brief Field GBuffer1 value: I32(7)
  static ::UnityEngine::Rendering::Universal::UniversalResource const GBuffer1;

  /// @brief Field GBuffer2 value: I32(8)
  static ::UnityEngine::Rendering::Universal::UniversalResource const GBuffer2;

  /// @brief Field GBuffer3 value: I32(9)
  static ::UnityEngine::Rendering::Universal::UniversalResource const GBuffer3;

  /// @brief Field GBuffer4 value: I32(10)
  static ::UnityEngine::Rendering::Universal::UniversalResource const GBuffer4;

  /// @brief Field GBuffer5 value: I32(11)
  static ::UnityEngine::Rendering::Universal::UniversalResource const GBuffer5;

  /// @brief Field GBuffer6 value: I32(12)
  static ::UnityEngine::Rendering::Universal::UniversalResource const GBuffer6;

  /// @brief Field InternalColorLut value: I32(18)
  static ::UnityEngine::Rendering::Universal::UniversalResource const InternalColorLut;

  /// @brief Field MainShadowsTexture value: I32(4)
  static ::UnityEngine::Rendering::Universal::UniversalResource const MainShadowsTexture;

  /// @brief Field MotionVectorColor value: I32(16)
  static ::UnityEngine::Rendering::Universal::UniversalResource const MotionVectorColor;

  /// @brief Field MotionVectorDepth value: I32(17)
  static ::UnityEngine::Rendering::Universal::UniversalResource const MotionVectorDepth;

  /// @brief Field OverlayUITexture value: I32(22)
  static ::UnityEngine::Rendering::Universal::UniversalResource const OverlayUITexture;

  /// @brief Field RenderingLayersTexture value: I32(23)
  static ::UnityEngine::Rendering::Universal::UniversalResource const RenderingLayersTexture;

  /// @brief Field SSAOTexture value: I32(28)
  static ::UnityEngine::Rendering::Universal::UniversalResource const SSAOTexture;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12987 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalResource, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::UniversalResource, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::UniversalResource, "UnityEngine.Rendering.Universal", "UniversalResource");
