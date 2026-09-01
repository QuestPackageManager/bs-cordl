#pragma once
// IWYU pragma private; include "GlobalNamespace\PlanarMirrorBloomPass.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(PlanarMirrorBloomPass)
namespace GlobalNamespace {
class BloomPrePassEffectSO;
}
namespace GlobalNamespace {
class BloomPrePassRendererSO;
}
namespace GlobalNamespace {
class MirrorFrameData;
}
namespace GlobalNamespace {
class PlanarMirrorBloomPass_PassData;
}
namespace GlobalNamespace {
class PlanarMirrorBloomPass___c;
}
namespace UnityEngine::Experimental::Rendering {
class XRPass;
}
namespace UnityEngine::Rendering::RenderGraphModule {
template <typename PassData, typename ContextType> class BaseRenderFunc_2;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraph;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class UnsafeGraphContext;
}
namespace UnityEngine::Rendering::Universal {
struct RenderPassEvent;
}
namespace UnityEngine::Rendering::Universal {
class UniversalCameraData;
}
namespace UnityEngine::Rendering {
class ContextContainer;
}
// Forward declare root types
namespace GlobalNamespace {
class PlanarMirrorBloomPass;
}
namespace GlobalNamespace {
class PlanarMirrorBloomPass_PassData;
}
namespace GlobalNamespace {
class PlanarMirrorBloomPass___c;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PlanarMirrorBloomPass*);
MARK_REF_T(::GlobalNamespace::PlanarMirrorBloomPass_PassData*);
MARK_REF_T(::GlobalNamespace::PlanarMirrorBloomPass___c*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlanarMirrorBloomPass*, "", "PlanarMirrorBloomPass");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlanarMirrorBloomPass_PassData*, "", "PlanarMirrorBloomPass/PassData");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlanarMirrorBloomPass___c*, "", "PlanarMirrorBloomPass/<>c");
// Dependencies System.Object, UnityEngine.Rendering.RenderGraphModule.TextureHandle
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlanarMirrorBloomPass/PassData
class CORDL_TYPE PlanarMirrorBloomPass_PassData : public ::System::Object {
public:
  // Declarations
  /// @brief Field cameraData, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_cameraData, put = __cordl_internal_set_cameraData)) ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData;

  /// @brief Field destinationTexture, offset 0x40, size 0x10
  __declspec(property(get = __cordl_internal_get_destinationTexture, put = __cordl_internal_set_destinationTexture)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle destinationTexture;

  /// @brief Field effect, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_effect, put = __cordl_internal_set_effect)) ::UnityW<::GlobalNamespace::BloomPrePassEffectSO> effect;

  /// @brief Field lightsTexture, offset 0x30, size 0x10
  __declspec(property(get = __cordl_internal_get_lightsTexture, put = __cordl_internal_set_lightsTexture)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle lightsTexture;

  /// @brief Field mirrorFrameData, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_mirrorFrameData, put = __cordl_internal_set_mirrorFrameData)) ::GlobalNamespace::MirrorFrameData* mirrorFrameData;

  /// @brief Field renderer, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_renderer, put = __cordl_internal_set_renderer)) ::UnityW<::GlobalNamespace::BloomPrePassRendererSO> renderer;

  /// @brief Field tempTextures, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_tempTextures, put = __cordl_internal_set_tempTextures)) ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> tempTextures;

  /// @brief Field xr, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_xr, put = __cordl_internal_set_xr)) ::UnityEngine::Experimental::Rendering::XRPass* xr;

  static inline ::GlobalNamespace::PlanarMirrorBloomPass_PassData* New_ctor();

  constexpr ::UnityEngine::Rendering::Universal::UniversalCameraData* const& __cordl_internal_get_cameraData() const;

  constexpr ::UnityEngine::Rendering::Universal::UniversalCameraData*& __cordl_internal_get_cameraData();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_destinationTexture() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_destinationTexture();

  constexpr ::UnityW<::GlobalNamespace::BloomPrePassEffectSO> const& __cordl_internal_get_effect() const;

  constexpr ::UnityW<::GlobalNamespace::BloomPrePassEffectSO>& __cordl_internal_get_effect();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_lightsTexture() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_lightsTexture();

  constexpr ::GlobalNamespace::MirrorFrameData* const& __cordl_internal_get_mirrorFrameData() const;

  constexpr ::GlobalNamespace::MirrorFrameData*& __cordl_internal_get_mirrorFrameData();

  constexpr ::UnityW<::GlobalNamespace::BloomPrePassRendererSO> const& __cordl_internal_get_renderer() const;

  constexpr ::UnityW<::GlobalNamespace::BloomPrePassRendererSO>& __cordl_internal_get_renderer();

  constexpr ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> const& __cordl_internal_get_tempTextures() const;

  constexpr ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>& __cordl_internal_get_tempTextures();

  constexpr ::UnityEngine::Experimental::Rendering::XRPass* const& __cordl_internal_get_xr() const;

  constexpr ::UnityEngine::Experimental::Rendering::XRPass*& __cordl_internal_get_xr();

  constexpr void __cordl_internal_set_cameraData(::UnityEngine::Rendering::Universal::UniversalCameraData* value);

  constexpr void __cordl_internal_set_destinationTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_effect(::UnityW<::GlobalNamespace::BloomPrePassEffectSO> value);

  constexpr void __cordl_internal_set_lightsTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_mirrorFrameData(::GlobalNamespace::MirrorFrameData* value);

  constexpr void __cordl_internal_set_renderer(::UnityW<::GlobalNamespace::BloomPrePassRendererSO> value);

  constexpr void __cordl_internal_set_tempTextures(::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> value);

  constexpr void __cordl_internal_set_xr(::UnityEngine::Experimental::Rendering::XRPass* value);

  /// @brief Method .ctor, addr 0x5f49b88, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlanarMirrorBloomPass_PassData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlanarMirrorBloomPass_PassData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlanarMirrorBloomPass_PassData(PlanarMirrorBloomPass_PassData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlanarMirrorBloomPass_PassData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlanarMirrorBloomPass_PassData(PlanarMirrorBloomPass_PassData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20658 };

  /// @brief Field cameraData, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::UniversalCameraData* ___cameraData;

  /// @brief Field mirrorFrameData, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::MirrorFrameData* ___mirrorFrameData;

  /// @brief Field renderer, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BloomPrePassRendererSO> ___renderer;

  /// @brief Field effect, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BloomPrePassEffectSO> ___effect;

  /// @brief Field lightsTexture, offset: 0x30, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___lightsTexture;

  /// @brief Field destinationTexture, offset: 0x40, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___destinationTexture;

  /// @brief Field tempTextures, offset: 0x50, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> ___tempTextures;

  /// @brief Field xr, offset: 0x58, size: 0x8, def value: None
  ::UnityEngine::Experimental::Rendering::XRPass* ___xr;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlanarMirrorBloomPass_PassData, ___cameraData) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlanarMirrorBloomPass_PassData, ___mirrorFrameData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlanarMirrorBloomPass_PassData, ___renderer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlanarMirrorBloomPass_PassData, ___effect) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlanarMirrorBloomPass_PassData, ___lightsTexture) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlanarMirrorBloomPass_PassData, ___destinationTexture) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlanarMirrorBloomPass_PassData, ___tempTextures) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlanarMirrorBloomPass_PassData, ___xr) == 0x58, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlanarMirrorBloomPass_PassData) == 0x60, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlanarMirrorBloomPass/<>c
class CORDL_TYPE PlanarMirrorBloomPass___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::GlobalNamespace::PlanarMirrorBloomPass___c* __9;

  /// @brief Field <>9__4_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__4_0,
                      put = setStaticF___9__4_0)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::GlobalNamespace::PlanarMirrorBloomPass_PassData*,
                                                                                                                ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>* __9__4_0;

  static inline ::GlobalNamespace::PlanarMirrorBloomPass___c* New_ctor();

  /// @brief Method <RecordRenderGraph>b__4_0, addr 0x5f49be4, size 0xc, virtual false, abstract: false, final false
  inline void _RecordRenderGraph_b__4_0(::GlobalNamespace::PlanarMirrorBloomPass_PassData* data, ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext* context);

  /// @brief Method .ctor, addr 0x5f49be0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::PlanarMirrorBloomPass___c* getStaticF___9();

  static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::GlobalNamespace::PlanarMirrorBloomPass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*
  getStaticF___9__4_0();

  static inline void setStaticF___9(::GlobalNamespace::PlanarMirrorBloomPass___c* value);

  static inline void setStaticF___9__4_0(
      ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::GlobalNamespace::PlanarMirrorBloomPass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlanarMirrorBloomPass___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlanarMirrorBloomPass___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlanarMirrorBloomPass___c(PlanarMirrorBloomPass___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlanarMirrorBloomPass___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlanarMirrorBloomPass___c(PlanarMirrorBloomPass___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20659 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::PlanarMirrorBloomPass___c) == 0x10, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies UnityEngine.Rendering.RenderGraphModule.TextureHandle, UnityEngine.Rendering.Universal.ScriptableRenderPass
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlanarMirrorBloomPass
class CORDL_TYPE PlanarMirrorBloomPass : public ::UnityEngine::Rendering::Universal::ScriptableRenderPass {
public:
  // Declarations
  using PassData = ::GlobalNamespace::PlanarMirrorBloomPass_PassData;

  using __c = ::GlobalNamespace::PlanarMirrorBloomPass___c;

  /// @brief Field _effectOverride, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get__effectOverride, put = __cordl_internal_set__effectOverride)) ::UnityW<::GlobalNamespace::BloomPrePassEffectSO> _effectOverride;

  /// @brief Field _tempTextureHandles, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get__tempTextureHandles, put = __cordl_internal_set__tempTextureHandles)) ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>
      _tempTextureHandles;

  /// @brief Method ExecutePass, addr 0x5f49864, size 0x324, virtual false, abstract: false, final false
  static inline void ExecutePass(::GlobalNamespace::PlanarMirrorBloomPass_PassData* data, ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext* context);

  static inline ::GlobalNamespace::PlanarMirrorBloomPass* New_ctor(::UnityEngine::Rendering::Universal::RenderPassEvent renderPassEvent, ::GlobalNamespace::BloomPrePassEffectSO* effectOverride);

  /// @brief Method RecordRenderGraph, addr 0x5f49094, size 0x7d0, virtual true, abstract: false, final false
  inline void RecordRenderGraph(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::ContextContainer* frameData);

  constexpr ::UnityW<::GlobalNamespace::BloomPrePassEffectSO> const& __cordl_internal_get__effectOverride() const;

  constexpr ::UnityW<::GlobalNamespace::BloomPrePassEffectSO>& __cordl_internal_get__effectOverride();

  constexpr ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> const& __cordl_internal_get__tempTextureHandles() const;

  constexpr ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>& __cordl_internal_get__tempTextureHandles();

  constexpr void __cordl_internal_set__effectOverride(::UnityW<::GlobalNamespace::BloomPrePassEffectSO> value);

  constexpr void __cordl_internal_set__tempTextureHandles(::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> value);

  /// @brief Method .ctor, addr 0x5f48c24, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::Universal::RenderPassEvent renderPassEvent, ::GlobalNamespace::BloomPrePassEffectSO* effectOverride);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlanarMirrorBloomPass();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlanarMirrorBloomPass", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlanarMirrorBloomPass(PlanarMirrorBloomPass&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlanarMirrorBloomPass", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlanarMirrorBloomPass(PlanarMirrorBloomPass const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20660 };

  /// @brief Field _effectOverride, offset: 0xb8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BloomPrePassEffectSO> ____effectOverride;

  /// @brief Field _tempTextureHandles, offset: 0xc0, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> ____tempTextureHandles;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlanarMirrorBloomPass, ____effectOverride) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlanarMirrorBloomPass, ____tempTextureHandles) == 0xc0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlanarMirrorBloomPass) == 0xc8, "Size mismatch!");

} // namespace GlobalNamespace
