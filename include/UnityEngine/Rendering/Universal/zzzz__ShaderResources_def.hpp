#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/ShaderResources.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ShaderResources)
namespace UnityEngine {
class Shader;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class ShaderResources;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::ShaderResources);
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.ShaderResources
class CORDL_TYPE ShaderResources : public ::System::Object {
public:
  // Declarations
  /// @brief Field blitHDROverlay, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_blitHDROverlay, put = __cordl_internal_set_blitHDROverlay)) ::UnityW<::UnityEngine::Shader> blitHDROverlay;

  /// @brief Field blitPS, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_blitPS, put = __cordl_internal_set_blitPS)) ::UnityW<::UnityEngine::Shader> blitPS;

  /// @brief Field cameraMotionVector, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_cameraMotionVector, put = __cordl_internal_set_cameraMotionVector)) ::UnityW<::UnityEngine::Shader> cameraMotionVector;

  /// @brief Field copyDepthPS, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_copyDepthPS, put = __cordl_internal_set_copyDepthPS)) ::UnityW<::UnityEngine::Shader> copyDepthPS;

  /// @brief Field coreBlitColorAndDepthPS, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_coreBlitColorAndDepthPS, put = __cordl_internal_set_coreBlitColorAndDepthPS)) ::UnityW<::UnityEngine::Shader> coreBlitColorAndDepthPS;

  /// @brief Field coreBlitPS, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_coreBlitPS, put = __cordl_internal_set_coreBlitPS)) ::UnityW<::UnityEngine::Shader> coreBlitPS;

  /// @brief Field dataDrivenLensFlare, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_dataDrivenLensFlare, put = __cordl_internal_set_dataDrivenLensFlare)) ::UnityW<::UnityEngine::Shader> dataDrivenLensFlare;

  /// @brief Field fallbackErrorPS, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_fallbackErrorPS, put = __cordl_internal_set_fallbackErrorPS)) ::UnityW<::UnityEngine::Shader> fallbackErrorPS;

  /// @brief Field fallbackLoadingPS, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_fallbackLoadingPS, put = __cordl_internal_set_fallbackLoadingPS)) ::UnityW<::UnityEngine::Shader> fallbackLoadingPS;

  /// @brief Field materialErrorPS, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_materialErrorPS, put = __cordl_internal_set_materialErrorPS)) ::UnityW<::UnityEngine::Shader> materialErrorPS;

  /// @brief Field samplingPS, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_samplingPS, put = __cordl_internal_set_samplingPS)) ::UnityW<::UnityEngine::Shader> samplingPS;

  /// @brief Field screenSpaceLensFlare, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_screenSpaceLensFlare, put = __cordl_internal_set_screenSpaceLensFlare)) ::UnityW<::UnityEngine::Shader> screenSpaceLensFlare;

  /// @brief Field screenSpaceShadowPS, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_screenSpaceShadowPS, put = __cordl_internal_set_screenSpaceShadowPS)) ::UnityW<::UnityEngine::Shader> screenSpaceShadowPS;

  /// @brief Field stencilDeferredPS, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_stencilDeferredPS, put = __cordl_internal_set_stencilDeferredPS)) ::UnityW<::UnityEngine::Shader> stencilDeferredPS;

  static inline ::UnityEngine::Rendering::Universal::ShaderResources* New_ctor();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_blitHDROverlay() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_blitHDROverlay();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_blitPS() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_blitPS();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_cameraMotionVector() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_cameraMotionVector();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_copyDepthPS() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_copyDepthPS();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_coreBlitColorAndDepthPS() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_coreBlitColorAndDepthPS();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_coreBlitPS() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_coreBlitPS();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_dataDrivenLensFlare() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_dataDrivenLensFlare();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_fallbackErrorPS() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_fallbackErrorPS();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_fallbackLoadingPS() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_fallbackLoadingPS();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_materialErrorPS() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_materialErrorPS();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_samplingPS() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_samplingPS();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_screenSpaceLensFlare() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_screenSpaceLensFlare();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_screenSpaceShadowPS() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_screenSpaceShadowPS();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_stencilDeferredPS() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_stencilDeferredPS();

  constexpr void __cordl_internal_set_blitHDROverlay(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set_blitPS(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set_cameraMotionVector(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set_copyDepthPS(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set_coreBlitColorAndDepthPS(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set_coreBlitPS(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set_dataDrivenLensFlare(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set_fallbackErrorPS(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set_fallbackLoadingPS(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set_materialErrorPS(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set_samplingPS(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set_screenSpaceLensFlare(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set_screenSpaceShadowPS(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set_stencilDeferredPS(::UnityW<::UnityEngine::Shader> value);

  /// @brief Method .ctor, addr 0x66bc388, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ShaderResources();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ShaderResources", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ShaderResources(ShaderResources&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ShaderResources", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ShaderResources(ShaderResources const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12720 };

  /// @brief Field blitPS, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___blitPS;

  /// @brief Field copyDepthPS, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___copyDepthPS;

  /// @brief Field screenSpaceShadowPS, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___screenSpaceShadowPS;

  /// @brief Field samplingPS, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___samplingPS;

  /// @brief Field stencilDeferredPS, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___stencilDeferredPS;

  /// @brief Field fallbackErrorPS, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___fallbackErrorPS;

  /// @brief Field fallbackLoadingPS, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___fallbackLoadingPS;

  /// @brief Field materialErrorPS, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___materialErrorPS;

  /// @brief Field coreBlitPS, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___coreBlitPS;

  /// @brief Field coreBlitColorAndDepthPS, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___coreBlitColorAndDepthPS;

  /// @brief Field blitHDROverlay, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___blitHDROverlay;

  /// @brief Field cameraMotionVector, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___cameraMotionVector;

  /// @brief Field screenSpaceLensFlare, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___screenSpaceLensFlare;

  /// @brief Field dataDrivenLensFlare, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___dataDrivenLensFlare;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::ShaderResources, ___blitPS) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ShaderResources, ___copyDepthPS) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ShaderResources, ___screenSpaceShadowPS) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ShaderResources, ___samplingPS) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ShaderResources, ___stencilDeferredPS) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ShaderResources, ___fallbackErrorPS) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ShaderResources, ___fallbackLoadingPS) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ShaderResources, ___materialErrorPS) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ShaderResources, ___coreBlitPS) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ShaderResources, ___coreBlitColorAndDepthPS) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ShaderResources, ___blitHDROverlay) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ShaderResources, ___cameraMotionVector) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ShaderResources, ___screenSpaceLensFlare) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ShaderResources, ___dataDrivenLensFlare) == 0x78, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::ShaderResources, 0x80>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::ShaderResources);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::ShaderResources*, "UnityEngine.Rendering.Universal", "ShaderResources");
