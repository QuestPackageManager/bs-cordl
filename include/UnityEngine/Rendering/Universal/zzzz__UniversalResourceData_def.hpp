#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/UniversalResourceData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalResourceDataBase_def.hpp"
CORDL_MODULE_EXPORT(UniversalResourceData)
namespace UnityEngine::Rendering::RenderGraphModule {
struct TextureHandle;
}
namespace UnityEngine::Rendering::Universal {
struct UniversalResourceDataBase_ActiveID;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class UniversalResourceData;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::UniversalResourceData);
// Dependencies UnityEngine.Rendering.RenderGraphModule.TextureHandle, UnityEngine.Rendering.Universal.UniversalResourceDataBase, UnityEngine.Rendering.Universal.UniversalResourceDataBase::ActiveID
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.UniversalResourceData
class CORDL_TYPE UniversalResourceData : public ::UnityEngine::Rendering::Universal::UniversalResourceDataBase {
public:
  // Declarations
  /// @brief Field <activeColorID>k__BackingField, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get__activeColorID_k__BackingField,
                      put = __cordl_internal_set__activeColorID_k__BackingField)) ::UnityEngine::Rendering::Universal::UniversalResourceDataBase_ActiveID _activeColorID_k__BackingField;

  /// @brief Field <activeDepthID>k__BackingField, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__activeDepthID_k__BackingField,
                      put = __cordl_internal_set__activeDepthID_k__BackingField)) ::UnityEngine::Rendering::Universal::UniversalResourceDataBase_ActiveID _activeDepthID_k__BackingField;

  /// @brief Field _additionalShadowsTexture, offset 0x6c, size 0x10
  __declspec(property(get = __cordl_internal_get__additionalShadowsTexture,
                      put = __cordl_internal_set__additionalShadowsTexture)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle _additionalShadowsTexture;

  /// @brief Field _afterPostProcessColor, offset 0x108, size 0x10
  __declspec(property(get = __cordl_internal_get__afterPostProcessColor,
                      put = __cordl_internal_set__afterPostProcessColor)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle _afterPostProcessColor;

  /// @brief Field _backBufferColor, offset 0x1c, size 0x10
  __declspec(property(get = __cordl_internal_get__backBufferColor, put = __cordl_internal_set__backBufferColor)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle _backBufferColor;

  /// @brief Field _backBufferDepth, offset 0x2c, size 0x10
  __declspec(property(get = __cordl_internal_get__backBufferDepth, put = __cordl_internal_set__backBufferDepth)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle _backBufferDepth;

  /// @brief Field _cameraColor, offset 0x3c, size 0x10
  __declspec(property(get = __cordl_internal_get__cameraColor, put = __cordl_internal_set__cameraColor)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle _cameraColor;

  /// @brief Field _cameraDepth, offset 0x4c, size 0x10
  __declspec(property(get = __cordl_internal_get__cameraDepth, put = __cordl_internal_set__cameraDepth)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle _cameraDepth;

  /// @brief Field _cameraDepthTexture, offset 0x98, size 0x10
  __declspec(property(get = __cordl_internal_get__cameraDepthTexture, put = __cordl_internal_set__cameraDepthTexture)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle _cameraDepthTexture;

  /// @brief Field _cameraNormalsTexture, offset 0xa8, size 0x10
  __declspec(property(get = __cordl_internal_get__cameraNormalsTexture,
                      put = __cordl_internal_set__cameraNormalsTexture)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle _cameraNormalsTexture;

  /// @brief Field _cameraOpaqueTexture, offset 0x88, size 0x10
  __declspec(property(get = __cordl_internal_get__cameraOpaqueTexture,
                      put = __cordl_internal_set__cameraOpaqueTexture)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle _cameraOpaqueTexture;

  /// @brief Field _dBuffer, offset 0x138, size 0x8
  __declspec(property(get = __cordl_internal_get__dBuffer,
                      put = __cordl_internal_set__dBuffer)) ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>*>
      _dBuffer;

  /// @brief Field _dBufferDepth, offset 0x140, size 0x10
  __declspec(property(get = __cordl_internal_get__dBufferDepth, put = __cordl_internal_set__dBufferDepth)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle _dBufferDepth;

  /// @brief Field _debugScreenColor, offset 0xe8, size 0x10
  __declspec(property(get = __cordl_internal_get__debugScreenColor, put = __cordl_internal_set__debugScreenColor)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle _debugScreenColor;

  /// @brief Field _debugScreenDepth, offset 0xf8, size 0x10
  __declspec(property(get = __cordl_internal_get__debugScreenDepth, put = __cordl_internal_set__debugScreenDepth)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle _debugScreenDepth;

  /// @brief Field _gBuffer, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__gBuffer,
                      put = __cordl_internal_set__gBuffer)) ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>*>
      _gBuffer;

  /// @brief Field _internalColorLut, offset 0xd8, size 0x10
  __declspec(property(get = __cordl_internal_get__internalColorLut, put = __cordl_internal_set__internalColorLut)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle _internalColorLut;

  /// @brief Field _mainShadowsTexture, offset 0x5c, size 0x10
  __declspec(property(get = __cordl_internal_get__mainShadowsTexture, put = __cordl_internal_set__mainShadowsTexture)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle _mainShadowsTexture;

  /// @brief Field _motionVectorColor, offset 0xb8, size 0x10
  __declspec(property(get = __cordl_internal_get__motionVectorColor, put = __cordl_internal_set__motionVectorColor)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle _motionVectorColor;

  /// @brief Field _motionVectorDepth, offset 0xc8, size 0x10
  __declspec(property(get = __cordl_internal_get__motionVectorDepth, put = __cordl_internal_set__motionVectorDepth)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle _motionVectorDepth;

  /// @brief Field _overlayUITexture, offset 0x118, size 0x10
  __declspec(property(get = __cordl_internal_get__overlayUITexture, put = __cordl_internal_set__overlayUITexture)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle _overlayUITexture;

  /// @brief Field _renderingLayersTexture, offset 0x128, size 0x10
  __declspec(property(get = __cordl_internal_get__renderingLayersTexture,
                      put = __cordl_internal_set__renderingLayersTexture)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle _renderingLayersTexture;

  /// @brief Field _ssaoTexture, offset 0x150, size 0x10
  __declspec(property(get = __cordl_internal_get__ssaoTexture, put = __cordl_internal_set__ssaoTexture)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle _ssaoTexture;

  /// @brief Field _stpDebugView, offset 0x160, size 0x10
  __declspec(property(get = __cordl_internal_get__stpDebugView, put = __cordl_internal_set__stpDebugView)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle _stpDebugView;

  __declspec(property(get = get_activeColorID, put = set_activeColorID)) ::UnityEngine::Rendering::Universal::UniversalResourceDataBase_ActiveID activeColorID;

  __declspec(property(get = get_activeColorTexture)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle activeColorTexture;

  __declspec(property(get = get_activeDepthID, put = set_activeDepthID)) ::UnityEngine::Rendering::Universal::UniversalResourceDataBase_ActiveID activeDepthID;

  __declspec(property(get = get_activeDepthTexture)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle activeDepthTexture;

  __declspec(property(get = get_additionalShadowsTexture, put = set_additionalShadowsTexture)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle additionalShadowsTexture;

  __declspec(property(get = get_afterPostProcessColor, put = set_afterPostProcessColor)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle afterPostProcessColor;

  __declspec(property(get = get_backBufferColor, put = set_backBufferColor)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle backBufferColor;

  __declspec(property(get = get_backBufferDepth, put = set_backBufferDepth)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle backBufferDepth;

  __declspec(property(get = get_cameraColor, put = set_cameraColor)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle cameraColor;

  __declspec(property(get = get_cameraDepth, put = set_cameraDepth)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle cameraDepth;

  __declspec(property(get = get_cameraDepthTexture, put = set_cameraDepthTexture)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle cameraDepthTexture;

  __declspec(property(get = get_cameraNormalsTexture, put = set_cameraNormalsTexture)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle cameraNormalsTexture;

  __declspec(property(get = get_cameraOpaqueTexture, put = set_cameraOpaqueTexture)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle cameraOpaqueTexture;

  __declspec(property(get = get_dBuffer, put = set_dBuffer)) ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>*>
      dBuffer;

  __declspec(property(get = get_dBufferDepth, put = set_dBufferDepth)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle dBufferDepth;

  __declspec(property(get = get_debugScreenColor, put = set_debugScreenColor)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle debugScreenColor;

  __declspec(property(get = get_debugScreenDepth, put = set_debugScreenDepth)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle debugScreenDepth;

  __declspec(property(get = get_gBuffer, put = set_gBuffer)) ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>*>
      gBuffer;

  __declspec(property(get = get_internalColorLut, put = set_internalColorLut)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle internalColorLut;

  __declspec(property(get = get_isActiveTargetBackBuffer)) bool isActiveTargetBackBuffer;

  __declspec(property(get = get_mainShadowsTexture, put = set_mainShadowsTexture)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle mainShadowsTexture;

  __declspec(property(get = get_motionVectorColor, put = set_motionVectorColor)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle motionVectorColor;

  __declspec(property(get = get_motionVectorDepth, put = set_motionVectorDepth)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle motionVectorDepth;

  __declspec(property(get = get_overlayUITexture, put = set_overlayUITexture)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle overlayUITexture;

  __declspec(property(get = get_renderingLayersTexture, put = set_renderingLayersTexture)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle renderingLayersTexture;

  __declspec(property(get = get_ssaoTexture, put = set_ssaoTexture)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ssaoTexture;

  __declspec(property(get = get_stpDebugView, put = set_stpDebugView)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle stpDebugView;

  static inline ::UnityEngine::Rendering::Universal::UniversalResourceData* New_ctor();

  /// @brief Method Reset, addr 0x6657538, size 0x85c, virtual true, abstract: false, final false
  inline void Reset();

  constexpr ::UnityEngine::Rendering::Universal::UniversalResourceDataBase_ActiveID const& __cordl_internal_get__activeColorID_k__BackingField() const;

  constexpr ::UnityEngine::Rendering::Universal::UniversalResourceDataBase_ActiveID& __cordl_internal_get__activeColorID_k__BackingField();

  constexpr ::UnityEngine::Rendering::Universal::UniversalResourceDataBase_ActiveID const& __cordl_internal_get__activeDepthID_k__BackingField() const;

  constexpr ::UnityEngine::Rendering::Universal::UniversalResourceDataBase_ActiveID& __cordl_internal_get__activeDepthID_k__BackingField();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get__additionalShadowsTexture() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get__additionalShadowsTexture();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get__afterPostProcessColor() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get__afterPostProcessColor();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get__backBufferColor() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get__backBufferColor();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get__backBufferDepth() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get__backBufferDepth();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get__cameraColor() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get__cameraColor();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get__cameraDepth() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get__cameraDepth();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get__cameraDepthTexture() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get__cameraDepthTexture();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get__cameraNormalsTexture() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get__cameraNormalsTexture();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get__cameraOpaqueTexture() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get__cameraOpaqueTexture();

  constexpr ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>*> const& __cordl_internal_get__dBuffer() const;

  constexpr ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>*>& __cordl_internal_get__dBuffer();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get__dBufferDepth() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get__dBufferDepth();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get__debugScreenColor() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get__debugScreenColor();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get__debugScreenDepth() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get__debugScreenDepth();

  constexpr ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>*> const& __cordl_internal_get__gBuffer() const;

  constexpr ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>*>& __cordl_internal_get__gBuffer();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get__internalColorLut() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get__internalColorLut();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get__mainShadowsTexture() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get__mainShadowsTexture();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get__motionVectorColor() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get__motionVectorColor();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get__motionVectorDepth() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get__motionVectorDepth();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get__overlayUITexture() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get__overlayUITexture();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get__renderingLayersTexture() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get__renderingLayersTexture();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get__ssaoTexture() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get__ssaoTexture();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get__stpDebugView() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get__stpDebugView();

  constexpr void __cordl_internal_set__activeColorID_k__BackingField(::UnityEngine::Rendering::Universal::UniversalResourceDataBase_ActiveID value);

  constexpr void __cordl_internal_set__activeDepthID_k__BackingField(::UnityEngine::Rendering::Universal::UniversalResourceDataBase_ActiveID value);

  constexpr void __cordl_internal_set__additionalShadowsTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set__afterPostProcessColor(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set__backBufferColor(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set__backBufferDepth(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set__cameraColor(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set__cameraDepth(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set__cameraDepthTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set__cameraNormalsTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set__cameraOpaqueTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set__dBuffer(::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>*> value);

  constexpr void __cordl_internal_set__dBufferDepth(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set__debugScreenColor(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set__debugScreenDepth(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set__gBuffer(::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>*> value);

  constexpr void __cordl_internal_set__internalColorLut(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set__mainShadowsTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set__motionVectorColor(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set__motionVectorDepth(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set__overlayUITexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set__renderingLayersTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set__ssaoTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set__stpDebugView(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  /// @brief Method .ctor, addr 0x6657d94, size 0x68, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_activeColorID, addr 0x6656e34, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::UniversalResourceDataBase_ActiveID get_activeColorID();

  /// @brief Method get_activeColorTexture, addr 0x6656e44, size 0x100, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle get_activeColorTexture();

  /// @brief Method get_activeDepthID, addr 0x6656f54, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::UniversalResourceDataBase_ActiveID get_activeDepthID();

  /// @brief Method get_activeDepthTexture, addr 0x6656f64, size 0x100, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle get_activeDepthTexture();

  /// @brief Method get_additionalShadowsTexture, addr 0x6657200, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle get_additionalShadowsTexture();

  /// @brief Method get_afterPostProcessColor, addr 0x66573ec, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle get_afterPostProcessColor();

  /// @brief Method get_backBufferColor, addr 0x6656f4c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle get_backBufferColor();

  /// @brief Method get_backBufferDepth, addr 0x665706c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle get_backBufferDepth();

  /// @brief Method get_cameraColor, addr 0x6656f44, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle get_cameraColor();

  /// @brief Method get_cameraDepth, addr 0x6657064, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle get_cameraDepth();

  /// @brief Method get_cameraDepthTexture, addr 0x6657280, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle get_cameraDepthTexture();

  /// @brief Method get_cameraNormalsTexture, addr 0x66572b4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle get_cameraNormalsTexture();

  /// @brief Method get_cameraOpaqueTexture, addr 0x665724c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle get_cameraOpaqueTexture();

  /// @brief Method get_dBuffer, addr 0x6657488, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>*> get_dBuffer();

  /// @brief Method get_dBufferDepth, addr 0x665749c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle get_dBufferDepth();

  /// @brief Method get_debugScreenColor, addr 0x6657384, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle get_debugScreenColor();

  /// @brief Method get_debugScreenDepth, addr 0x66573b8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle get_debugScreenDepth();

  /// @brief Method get_gBuffer, addr 0x6657238, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>*> get_gBuffer();

  /// @brief Method get_internalColorLut, addr 0x6657350, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle get_internalColorLut();

  /// @brief Method get_isActiveTargetBackBuffer, addr 0x6657074, size 0x94, virtual false, abstract: false, final false
  inline bool get_isActiveTargetBackBuffer();

  /// @brief Method get_mainShadowsTexture, addr 0x66571c8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle get_mainShadowsTexture();

  /// @brief Method get_motionVectorColor, addr 0x66572e8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle get_motionVectorColor();

  /// @brief Method get_motionVectorDepth, addr 0x665731c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle get_motionVectorDepth();

  /// @brief Method get_overlayUITexture, addr 0x6657420, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle get_overlayUITexture();

  /// @brief Method get_renderingLayersTexture, addr 0x6657454, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle get_renderingLayersTexture();

  /// @brief Method get_ssaoTexture, addr 0x66574d0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle get_ssaoTexture();

  /// @brief Method get_stpDebugView, addr 0x6657504, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle get_stpDebugView();

  /// @brief Method set_activeColorID, addr 0x6656e3c, size 0x8, virtual false, abstract: false, final false
  inline void set_activeColorID(::UnityEngine::Rendering::Universal::UniversalResourceDataBase_ActiveID value);

  /// @brief Method set_activeDepthID, addr 0x6656f5c, size 0x8, virtual false, abstract: false, final false
  inline void set_activeDepthID(::UnityEngine::Rendering::Universal::UniversalResourceDataBase_ActiveID value);

  /// @brief Method set_additionalShadowsTexture, addr 0x6657208, size 0x30, virtual false, abstract: false, final false
  inline void set_additionalShadowsTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  /// @brief Method set_afterPostProcessColor, addr 0x66573f4, size 0x2c, virtual false, abstract: false, final false
  inline void set_afterPostProcessColor(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  /// @brief Method set_backBufferColor, addr 0x6657108, size 0x30, virtual false, abstract: false, final false
  inline void set_backBufferColor(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  /// @brief Method set_backBufferDepth, addr 0x6657138, size 0x30, virtual false, abstract: false, final false
  inline void set_backBufferDepth(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  /// @brief Method set_cameraColor, addr 0x6657168, size 0x30, virtual false, abstract: false, final false
  inline void set_cameraColor(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  /// @brief Method set_cameraDepth, addr 0x6657198, size 0x30, virtual false, abstract: false, final false
  inline void set_cameraDepth(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  /// @brief Method set_cameraDepthTexture, addr 0x6657288, size 0x2c, virtual false, abstract: false, final false
  inline void set_cameraDepthTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  /// @brief Method set_cameraNormalsTexture, addr 0x66572bc, size 0x2c, virtual false, abstract: false, final false
  inline void set_cameraNormalsTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  /// @brief Method set_cameraOpaqueTexture, addr 0x6657254, size 0x2c, virtual false, abstract: false, final false
  inline void set_cameraOpaqueTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  /// @brief Method set_dBuffer, addr 0x6657490, size 0xc, virtual false, abstract: false, final false
  inline void set_dBuffer(::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>*> value);

  /// @brief Method set_dBufferDepth, addr 0x66574a4, size 0x2c, virtual false, abstract: false, final false
  inline void set_dBufferDepth(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  /// @brief Method set_debugScreenColor, addr 0x665738c, size 0x2c, virtual false, abstract: false, final false
  inline void set_debugScreenColor(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  /// @brief Method set_debugScreenDepth, addr 0x66573c0, size 0x2c, virtual false, abstract: false, final false
  inline void set_debugScreenDepth(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  /// @brief Method set_gBuffer, addr 0x6657240, size 0xc, virtual false, abstract: false, final false
  inline void set_gBuffer(::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>*> value);

  /// @brief Method set_internalColorLut, addr 0x6657358, size 0x2c, virtual false, abstract: false, final false
  inline void set_internalColorLut(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  /// @brief Method set_mainShadowsTexture, addr 0x66571d0, size 0x30, virtual false, abstract: false, final false
  inline void set_mainShadowsTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  /// @brief Method set_motionVectorColor, addr 0x66572f0, size 0x2c, virtual false, abstract: false, final false
  inline void set_motionVectorColor(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  /// @brief Method set_motionVectorDepth, addr 0x6657324, size 0x2c, virtual false, abstract: false, final false
  inline void set_motionVectorDepth(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  /// @brief Method set_overlayUITexture, addr 0x6657428, size 0x2c, virtual false, abstract: false, final false
  inline void set_overlayUITexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  /// @brief Method set_renderingLayersTexture, addr 0x665745c, size 0x2c, virtual false, abstract: false, final false
  inline void set_renderingLayersTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  /// @brief Method set_ssaoTexture, addr 0x66574d8, size 0x2c, virtual false, abstract: false, final false
  inline void set_ssaoTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  /// @brief Method set_stpDebugView, addr 0x665750c, size 0x2c, virtual false, abstract: false, final false
  inline void set_stpDebugView(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UniversalResourceData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UniversalResourceData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UniversalResourceData(UniversalResourceData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UniversalResourceData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UniversalResourceData(UniversalResourceData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12729 };

  /// @brief Field <activeColorID>k__BackingField, offset: 0x14, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::UniversalResourceDataBase_ActiveID ____activeColorID_k__BackingField;

  /// @brief Field <activeDepthID>k__BackingField, offset: 0x18, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::UniversalResourceDataBase_ActiveID ____activeDepthID_k__BackingField;

  /// @brief Field _backBufferColor, offset: 0x1c, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ____backBufferColor;

  /// @brief Field _backBufferDepth, offset: 0x2c, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ____backBufferDepth;

  /// @brief Field _cameraColor, offset: 0x3c, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ____cameraColor;

  /// @brief Field _cameraDepth, offset: 0x4c, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ____cameraDepth;

  /// @brief Field _mainShadowsTexture, offset: 0x5c, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ____mainShadowsTexture;

  /// @brief Field _additionalShadowsTexture, offset: 0x6c, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ____additionalShadowsTexture;

  /// @brief Field _gBuffer, offset: 0x80, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>*> ____gBuffer;

  /// @brief Field _cameraOpaqueTexture, offset: 0x88, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ____cameraOpaqueTexture;

  /// @brief Field _cameraDepthTexture, offset: 0x98, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ____cameraDepthTexture;

  /// @brief Field _cameraNormalsTexture, offset: 0xa8, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ____cameraNormalsTexture;

  /// @brief Field _motionVectorColor, offset: 0xb8, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ____motionVectorColor;

  /// @brief Field _motionVectorDepth, offset: 0xc8, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ____motionVectorDepth;

  /// @brief Field _internalColorLut, offset: 0xd8, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ____internalColorLut;

  /// @brief Field _debugScreenColor, offset: 0xe8, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ____debugScreenColor;

  /// @brief Field _debugScreenDepth, offset: 0xf8, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ____debugScreenDepth;

  /// @brief Field _afterPostProcessColor, offset: 0x108, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ____afterPostProcessColor;

  /// @brief Field _overlayUITexture, offset: 0x118, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ____overlayUITexture;

  /// @brief Field _renderingLayersTexture, offset: 0x128, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ____renderingLayersTexture;

  /// @brief Field _dBuffer, offset: 0x138, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>*> ____dBuffer;

  /// @brief Field _dBufferDepth, offset: 0x140, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ____dBufferDepth;

  /// @brief Field _ssaoTexture, offset: 0x150, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ____ssaoTexture;

  /// @brief Field _stpDebugView, offset: 0x160, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ____stpDebugView;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalResourceData, ____activeColorID_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalResourceData, ____activeDepthID_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalResourceData, ____backBufferColor) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalResourceData, ____backBufferDepth) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalResourceData, ____cameraColor) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalResourceData, ____cameraDepth) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalResourceData, ____mainShadowsTexture) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalResourceData, ____additionalShadowsTexture) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalResourceData, ____gBuffer) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalResourceData, ____cameraOpaqueTexture) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalResourceData, ____cameraDepthTexture) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalResourceData, ____cameraNormalsTexture) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalResourceData, ____motionVectorColor) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalResourceData, ____motionVectorDepth) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalResourceData, ____internalColorLut) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalResourceData, ____debugScreenColor) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalResourceData, ____debugScreenDepth) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalResourceData, ____afterPostProcessColor) == 0x108, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalResourceData, ____overlayUITexture) == 0x118, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalResourceData, ____renderingLayersTexture) == 0x128, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalResourceData, ____dBuffer) == 0x138, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalResourceData, ____dBufferDepth) == 0x140, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalResourceData, ____ssaoTexture) == 0x150, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalResourceData, ____stpDebugView) == 0x160, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::UniversalResourceData, 0x170>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::UniversalResourceData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::UniversalResourceData*, "UnityEngine.Rendering.Universal", "UniversalResourceData");
