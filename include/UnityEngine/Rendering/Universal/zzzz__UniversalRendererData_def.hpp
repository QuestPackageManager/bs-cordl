#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/UniversalRendererData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/Universal/zzzz__CopyDepthMode_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DepthFormat_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DepthPrimingMode_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__IntermediateTextureMode_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderingMode_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRendererData_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UniversalRendererData)
namespace UnityEngine::Rendering::Universal {
struct CopyDepthMode;
}
namespace UnityEngine::Rendering::Universal {
struct DepthFormat;
}
namespace UnityEngine::Rendering::Universal {
struct DepthPrimingMode;
}
namespace UnityEngine::Rendering::Universal {
struct IntermediateTextureMode;
}
namespace UnityEngine::Rendering::Universal {
class PostProcessData;
}
namespace UnityEngine::Rendering::Universal {
struct RenderingMode;
}
namespace UnityEngine::Rendering::Universal {
class ScriptableRenderer;
}
namespace UnityEngine::Rendering::Universal {
class StencilStateData;
}
namespace UnityEngine::Rendering::Universal {
class XRSystemData;
}
namespace UnityEngine {
class ISerializationCallbackReceiver;
}
namespace UnityEngine {
struct LayerMask;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class UniversalRendererData;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::UniversalRendererData);
// Dependencies UnityEngine.LayerMask, UnityEngine.Rendering.Universal.CopyDepthMode, UnityEngine.Rendering.Universal.DepthFormat, UnityEngine.Rendering.Universal.DepthPrimingMode,
// UnityEngine.Rendering.Universal.IntermediateTextureMode, UnityEngine.Rendering.Universal.RenderingMode, UnityEngine.Rendering.Universal.ScriptableRendererData
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.UniversalRendererData
class CORDL_TYPE UniversalRendererData : public ::UnityEngine::Rendering::Universal::ScriptableRendererData {
public:
  // Declarations
  __declspec(property(get = get_accurateGbufferNormals, put = set_accurateGbufferNormals)) bool accurateGbufferNormals;

  __declspec(property(get = get_copyDepthMode, put = set_copyDepthMode)) ::UnityEngine::Rendering::Universal::CopyDepthMode copyDepthMode;

  __declspec(property(get = get_defaultStencilState, put = set_defaultStencilState)) ::UnityEngine::Rendering::Universal::StencilStateData* defaultStencilState;

  __declspec(property(get = get_depthAttachmentFormat, put = set_depthAttachmentFormat)) ::UnityEngine::Rendering::Universal::DepthFormat depthAttachmentFormat;

  __declspec(property(get = get_depthPrimingMode, put = set_depthPrimingMode)) ::UnityEngine::Rendering::Universal::DepthPrimingMode depthPrimingMode;

  __declspec(property(get = get_depthTextureFormat, put = set_depthTextureFormat)) ::UnityEngine::Rendering::Universal::DepthFormat depthTextureFormat;

  __declspec(property(get = get_intermediateTextureMode, put = set_intermediateTextureMode)) ::UnityEngine::Rendering::Universal::IntermediateTextureMode intermediateTextureMode;

  /// @brief Field m_AccurateGbufferNormals, offset 0x88, size 0x1
  __declspec(property(get = __cordl_internal_get_m_AccurateGbufferNormals, put = __cordl_internal_set_m_AccurateGbufferNormals)) bool m_AccurateGbufferNormals;

  /// @brief Field m_AssetVersion, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get_m_AssetVersion, put = __cordl_internal_set_m_AssetVersion)) int32_t m_AssetVersion;

  /// @brief Field m_CopyDepthMode, offset 0x7c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_CopyDepthMode, put = __cordl_internal_set_m_CopyDepthMode)) ::UnityEngine::Rendering::Universal::CopyDepthMode m_CopyDepthMode;

  /// @brief Field m_DefaultStencilState, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DefaultStencilState, put = __cordl_internal_set_m_DefaultStencilState)) ::UnityEngine::Rendering::Universal::StencilStateData* m_DefaultStencilState;

  /// @brief Field m_DepthAttachmentFormat, offset 0x80, size 0x4
  __declspec(property(get = __cordl_internal_get_m_DepthAttachmentFormat, put = __cordl_internal_set_m_DepthAttachmentFormat)) ::UnityEngine::Rendering::Universal::DepthFormat m_DepthAttachmentFormat;

  /// @brief Field m_DepthPrimingMode, offset 0x78, size 0x4
  __declspec(property(get = __cordl_internal_get_m_DepthPrimingMode, put = __cordl_internal_set_m_DepthPrimingMode)) ::UnityEngine::Rendering::Universal::DepthPrimingMode m_DepthPrimingMode;

  /// @brief Field m_DepthTextureFormat, offset 0x84, size 0x4
  __declspec(property(get = __cordl_internal_get_m_DepthTextureFormat, put = __cordl_internal_set_m_DepthTextureFormat)) ::UnityEngine::Rendering::Universal::DepthFormat m_DepthTextureFormat;

  /// @brief Field m_IntermediateTextureMode, offset 0x8c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_IntermediateTextureMode,
                      put = __cordl_internal_set_m_IntermediateTextureMode)) ::UnityEngine::Rendering::Universal::IntermediateTextureMode m_IntermediateTextureMode;

  /// @brief Field m_OpaqueLayerMask, offset 0x5c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_OpaqueLayerMask, put = __cordl_internal_set_m_OpaqueLayerMask)) ::UnityEngine::LayerMask m_OpaqueLayerMask;

  /// @brief Field m_RenderingMode, offset 0x74, size 0x4
  __declspec(property(get = __cordl_internal_get_m_RenderingMode, put = __cordl_internal_set_m_RenderingMode)) ::UnityEngine::Rendering::Universal::RenderingMode m_RenderingMode;

  /// @brief Field m_ShadowTransparentReceive, offset 0x70, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ShadowTransparentReceive, put = __cordl_internal_set_m_ShadowTransparentReceive)) bool m_ShadowTransparentReceive;

  /// @brief Field m_TransparentLayerMask, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get_m_TransparentLayerMask, put = __cordl_internal_set_m_TransparentLayerMask)) ::UnityEngine::LayerMask m_TransparentLayerMask;

  __declspec(property(get = get_opaqueLayerMask, put = set_opaqueLayerMask)) ::UnityEngine::LayerMask opaqueLayerMask;

  /// @brief Field postProcessData, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_postProcessData, put = __cordl_internal_set_postProcessData)) ::UnityW<::UnityEngine::Rendering::Universal::PostProcessData> postProcessData;

  __declspec(property(get = get_renderingMode, put = set_renderingMode)) ::UnityEngine::Rendering::Universal::RenderingMode renderingMode;

  __declspec(property(get = get_shadowTransparentReceive, put = set_shadowTransparentReceive)) bool shadowTransparentReceive;

  __declspec(property(get = get_transparentLayerMask, put = set_transparentLayerMask)) ::UnityEngine::LayerMask transparentLayerMask;

  /// @brief Field xrSystemData, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_xrSystemData, put = __cordl_internal_set_xrSystemData)) ::UnityW<::UnityEngine::Rendering::Universal::XRSystemData> xrSystemData;

  /// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
  constexpr operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept;

  /// @brief Method Create, addr 0x66bbe58, size 0xa8, virtual true, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::ScriptableRenderer* Create();

  static inline ::UnityEngine::Rendering::Universal::UniversalRendererData* New_ctor();

  /// @brief Method OnEnable, addr 0x66bc2cc, size 0xc, virtual true, abstract: false, final false
  inline void OnEnable();

  /// @brief Method ReloadAllNullProperties, addr 0x66bbf00, size 0x4, virtual false, abstract: false, final false
  inline void ReloadAllNullProperties();

  /// @brief Method UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize, addr 0x66bc2e4, size 0x1c, virtual true, abstract: false, final true
  inline void UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize();

  /// @brief Method UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize, addr 0x66bc2d8, size 0xc, virtual true, abstract: false, final true
  inline void UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize();

  constexpr bool const& __cordl_internal_get_m_AccurateGbufferNormals() const;

  constexpr bool& __cordl_internal_get_m_AccurateGbufferNormals();

  constexpr int32_t const& __cordl_internal_get_m_AssetVersion() const;

  constexpr int32_t& __cordl_internal_get_m_AssetVersion();

  constexpr ::UnityEngine::Rendering::Universal::CopyDepthMode const& __cordl_internal_get_m_CopyDepthMode() const;

  constexpr ::UnityEngine::Rendering::Universal::CopyDepthMode& __cordl_internal_get_m_CopyDepthMode();

  constexpr ::UnityEngine::Rendering::Universal::StencilStateData* const& __cordl_internal_get_m_DefaultStencilState() const;

  constexpr ::UnityEngine::Rendering::Universal::StencilStateData*& __cordl_internal_get_m_DefaultStencilState();

  constexpr ::UnityEngine::Rendering::Universal::DepthFormat const& __cordl_internal_get_m_DepthAttachmentFormat() const;

  constexpr ::UnityEngine::Rendering::Universal::DepthFormat& __cordl_internal_get_m_DepthAttachmentFormat();

  constexpr ::UnityEngine::Rendering::Universal::DepthPrimingMode const& __cordl_internal_get_m_DepthPrimingMode() const;

  constexpr ::UnityEngine::Rendering::Universal::DepthPrimingMode& __cordl_internal_get_m_DepthPrimingMode();

  constexpr ::UnityEngine::Rendering::Universal::DepthFormat const& __cordl_internal_get_m_DepthTextureFormat() const;

  constexpr ::UnityEngine::Rendering::Universal::DepthFormat& __cordl_internal_get_m_DepthTextureFormat();

  constexpr ::UnityEngine::Rendering::Universal::IntermediateTextureMode const& __cordl_internal_get_m_IntermediateTextureMode() const;

  constexpr ::UnityEngine::Rendering::Universal::IntermediateTextureMode& __cordl_internal_get_m_IntermediateTextureMode();

  constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_m_OpaqueLayerMask() const;

  constexpr ::UnityEngine::LayerMask& __cordl_internal_get_m_OpaqueLayerMask();

  constexpr ::UnityEngine::Rendering::Universal::RenderingMode const& __cordl_internal_get_m_RenderingMode() const;

  constexpr ::UnityEngine::Rendering::Universal::RenderingMode& __cordl_internal_get_m_RenderingMode();

  constexpr bool const& __cordl_internal_get_m_ShadowTransparentReceive() const;

  constexpr bool& __cordl_internal_get_m_ShadowTransparentReceive();

  constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_m_TransparentLayerMask() const;

  constexpr ::UnityEngine::LayerMask& __cordl_internal_get_m_TransparentLayerMask();

  constexpr ::UnityW<::UnityEngine::Rendering::Universal::PostProcessData> const& __cordl_internal_get_postProcessData() const;

  constexpr ::UnityW<::UnityEngine::Rendering::Universal::PostProcessData>& __cordl_internal_get_postProcessData();

  constexpr ::UnityW<::UnityEngine::Rendering::Universal::XRSystemData> const& __cordl_internal_get_xrSystemData() const;

  constexpr ::UnityW<::UnityEngine::Rendering::Universal::XRSystemData>& __cordl_internal_get_xrSystemData();

  constexpr void __cordl_internal_set_m_AccurateGbufferNormals(bool value);

  constexpr void __cordl_internal_set_m_AssetVersion(int32_t value);

  constexpr void __cordl_internal_set_m_CopyDepthMode(::UnityEngine::Rendering::Universal::CopyDepthMode value);

  constexpr void __cordl_internal_set_m_DefaultStencilState(::UnityEngine::Rendering::Universal::StencilStateData* value);

  constexpr void __cordl_internal_set_m_DepthAttachmentFormat(::UnityEngine::Rendering::Universal::DepthFormat value);

  constexpr void __cordl_internal_set_m_DepthPrimingMode(::UnityEngine::Rendering::Universal::DepthPrimingMode value);

  constexpr void __cordl_internal_set_m_DepthTextureFormat(::UnityEngine::Rendering::Universal::DepthFormat value);

  constexpr void __cordl_internal_set_m_IntermediateTextureMode(::UnityEngine::Rendering::Universal::IntermediateTextureMode value);

  constexpr void __cordl_internal_set_m_OpaqueLayerMask(::UnityEngine::LayerMask value);

  constexpr void __cordl_internal_set_m_RenderingMode(::UnityEngine::Rendering::Universal::RenderingMode value);

  constexpr void __cordl_internal_set_m_ShadowTransparentReceive(bool value);

  constexpr void __cordl_internal_set_m_TransparentLayerMask(::UnityEngine::LayerMask value);

  constexpr void __cordl_internal_set_postProcessData(::UnityW<::UnityEngine::Rendering::Universal::PostProcessData> value);

  constexpr void __cordl_internal_set_xrSystemData(::UnityW<::UnityEngine::Rendering::Universal::XRSystemData> value);

  /// @brief Method .ctor, addr 0x66bc300, size 0x78, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_accurateGbufferNormals, addr 0x66bc29c, size 0x8, virtual false, abstract: false, final false
  inline bool get_accurateGbufferNormals();

  /// @brief Method get_copyDepthMode, addr 0x66bbf94, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::CopyDepthMode get_copyDepthMode();

  /// @brief Method get_defaultStencilState, addr 0x66bbf34, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::StencilStateData* get_defaultStencilState();

  /// @brief Method get_depthAttachmentFormat, addr 0x66bbfac, size 0xbc, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::DepthFormat get_depthAttachmentFormat();

  /// @brief Method get_depthPrimingMode, addr 0x66bbf7c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::DepthPrimingMode get_depthPrimingMode();

  /// @brief Method get_depthTextureFormat, addr 0x66bc15c, size 0x130, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::DepthFormat get_depthTextureFormat();

  /// @brief Method get_intermediateTextureMode, addr 0x66bc2b4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::IntermediateTextureMode get_intermediateTextureMode();

  /// @brief Method get_opaqueLayerMask, addr 0x66bbf04, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::LayerMask get_opaqueLayerMask();

  /// @brief Method get_renderingMode, addr 0x66bbf64, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::RenderingMode get_renderingMode();

  /// @brief Method get_shadowTransparentReceive, addr 0x66bbf4c, size 0x8, virtual false, abstract: false, final false
  inline bool get_shadowTransparentReceive();

  /// @brief Method get_transparentLayerMask, addr 0x66bbf1c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::LayerMask get_transparentLayerMask();

  /// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
  constexpr ::UnityEngine::ISerializationCallbackReceiver* i___UnityEngine__ISerializationCallbackReceiver() noexcept;

  /// @brief Method set_accurateGbufferNormals, addr 0x66bc2a4, size 0x10, virtual false, abstract: false, final false
  inline void set_accurateGbufferNormals(bool value);

  /// @brief Method set_copyDepthMode, addr 0x66bbf9c, size 0x10, virtual false, abstract: false, final false
  inline void set_copyDepthMode(::UnityEngine::Rendering::Universal::CopyDepthMode value);

  /// @brief Method set_defaultStencilState, addr 0x66bbf3c, size 0x10, virtual false, abstract: false, final false
  inline void set_defaultStencilState(::UnityEngine::Rendering::Universal::StencilStateData* value);

  /// @brief Method set_depthAttachmentFormat, addr 0x66bc068, size 0xf4, virtual false, abstract: false, final false
  inline void set_depthAttachmentFormat(::UnityEngine::Rendering::Universal::DepthFormat value);

  /// @brief Method set_depthPrimingMode, addr 0x66bbf84, size 0x10, virtual false, abstract: false, final false
  inline void set_depthPrimingMode(::UnityEngine::Rendering::Universal::DepthPrimingMode value);

  /// @brief Method set_depthTextureFormat, addr 0x66bc28c, size 0x10, virtual false, abstract: false, final false
  inline void set_depthTextureFormat(::UnityEngine::Rendering::Universal::DepthFormat value);

  /// @brief Method set_intermediateTextureMode, addr 0x66bc2bc, size 0x10, virtual false, abstract: false, final false
  inline void set_intermediateTextureMode(::UnityEngine::Rendering::Universal::IntermediateTextureMode value);

  /// @brief Method set_opaqueLayerMask, addr 0x66bbf0c, size 0x10, virtual false, abstract: false, final false
  inline void set_opaqueLayerMask(::UnityEngine::LayerMask value);

  /// @brief Method set_renderingMode, addr 0x66bbf6c, size 0x10, virtual false, abstract: false, final false
  inline void set_renderingMode(::UnityEngine::Rendering::Universal::RenderingMode value);

  /// @brief Method set_shadowTransparentReceive, addr 0x66bbf54, size 0x10, virtual false, abstract: false, final false
  inline void set_shadowTransparentReceive(bool value);

  /// @brief Method set_transparentLayerMask, addr 0x66bbf24, size 0x10, virtual false, abstract: false, final false
  inline void set_transparentLayerMask(::UnityEngine::LayerMask value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UniversalRendererData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UniversalRendererData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UniversalRendererData(UniversalRendererData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UniversalRendererData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UniversalRendererData(UniversalRendererData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12716 };

  /// @brief Field k_LatestAssetVersion offset 0xffffffff size 0x4
  static constexpr int32_t k_LatestAssetVersion{ static_cast<int32_t>(0x2) };

  /// @brief Field xrSystemData, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Rendering::Universal::XRSystemData> ___xrSystemData;

  /// @brief Field postProcessData, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Rendering::Universal::PostProcessData> ___postProcessData;

  /// @brief Field m_AssetVersion, offset: 0x58, size: 0x4, def value: None
  int32_t ___m_AssetVersion;

  /// @brief Field m_OpaqueLayerMask, offset: 0x5c, size: 0x4, def value: None
  ::UnityEngine::LayerMask ___m_OpaqueLayerMask;

  /// @brief Field m_TransparentLayerMask, offset: 0x60, size: 0x4, def value: None
  ::UnityEngine::LayerMask ___m_TransparentLayerMask;

  /// @brief Field m_DefaultStencilState, offset: 0x68, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::StencilStateData* ___m_DefaultStencilState;

  /// @brief Field m_ShadowTransparentReceive, offset: 0x70, size: 0x1, def value: None
  bool ___m_ShadowTransparentReceive;

  /// @brief Field m_RenderingMode, offset: 0x74, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::RenderingMode ___m_RenderingMode;

  /// @brief Field m_DepthPrimingMode, offset: 0x78, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::DepthPrimingMode ___m_DepthPrimingMode;

  /// @brief Field m_CopyDepthMode, offset: 0x7c, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::CopyDepthMode ___m_CopyDepthMode;

  /// @brief Field m_DepthAttachmentFormat, offset: 0x80, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::DepthFormat ___m_DepthAttachmentFormat;

  /// @brief Field m_DepthTextureFormat, offset: 0x84, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::DepthFormat ___m_DepthTextureFormat;

  /// @brief Field m_AccurateGbufferNormals, offset: 0x88, size: 0x1, def value: None
  bool ___m_AccurateGbufferNormals;

  /// @brief Field m_IntermediateTextureMode, offset: 0x8c, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::IntermediateTextureMode ___m_IntermediateTextureMode;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRendererData, ___xrSystemData) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRendererData, ___postProcessData) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRendererData, ___m_AssetVersion) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRendererData, ___m_OpaqueLayerMask) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRendererData, ___m_TransparentLayerMask) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRendererData, ___m_DefaultStencilState) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRendererData, ___m_ShadowTransparentReceive) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRendererData, ___m_RenderingMode) == 0x74, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRendererData, ___m_DepthPrimingMode) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRendererData, ___m_CopyDepthMode) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRendererData, ___m_DepthAttachmentFormat) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRendererData, ___m_DepthTextureFormat) == 0x84, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRendererData, ___m_AccurateGbufferNormals) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRendererData, ___m_IntermediateTextureMode) == 0x8c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::UniversalRendererData, 0x90>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::UniversalRendererData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::UniversalRendererData*, "UnityEngine.Rendering.Universal", "UniversalRendererData");
