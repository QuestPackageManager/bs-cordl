#pragma once
// IWYU pragma private; include "GlobalNamespace\BloomPrePassRenderPass.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(BloomPrePassRenderPass)
namespace GlobalNamespace {
class BloomPrePassEffectSO;
}
namespace GlobalNamespace {
class BloomPrePassRenderPass_PassData;
}
namespace GlobalNamespace {
class BloomPrePassRenderPass___c;
}
namespace GlobalNamespace {
class BloomPrePassRendererSO;
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
class BloomPrePassRenderPass;
}
namespace GlobalNamespace {
class BloomPrePassRenderPass_PassData;
}
namespace GlobalNamespace {
class BloomPrePassRenderPass___c;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BloomPrePassRenderPass*);
MARK_REF_T(::GlobalNamespace::BloomPrePassRenderPass_PassData*);
MARK_REF_T(::GlobalNamespace::BloomPrePassRenderPass___c*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BloomPrePassRenderPass*, "", "BloomPrePassRenderPass");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BloomPrePassRenderPass_PassData*, "", "BloomPrePassRenderPass/PassData");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BloomPrePassRenderPass___c*, "", "BloomPrePassRenderPass/<>c");
// Dependencies System.Object, UnityEngine.Rendering.RenderGraphModule.TextureHandle
namespace GlobalNamespace {
// Is value type: false
// CS Name: BloomPrePassRenderPass/PassData
class CORDL_TYPE BloomPrePassRenderPass_PassData : public ::System::Object {
public:
  // Declarations
  /// @brief Field cameraData, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_cameraData, put = __cordl_internal_set_cameraData)) ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData;

  /// @brief Field destinationTexture, offset 0x38, size 0x10
  __declspec(property(get = __cordl_internal_get_destinationTexture, put = __cordl_internal_set_destinationTexture)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle destinationTexture;

  /// @brief Field effect, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_effect, put = __cordl_internal_set_effect)) ::UnityW<::GlobalNamespace::BloomPrePassEffectSO> effect;

  /// @brief Field lightsTexture, offset 0x28, size 0x10
  __declspec(property(get = __cordl_internal_get_lightsTexture, put = __cordl_internal_set_lightsTexture)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle lightsTexture;

  /// @brief Field renderer, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_renderer, put = __cordl_internal_set_renderer)) ::UnityW<::GlobalNamespace::BloomPrePassRendererSO> renderer;

  /// @brief Field tempTextures, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_tempTextures, put = __cordl_internal_set_tempTextures)) ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> tempTextures;

  static inline ::GlobalNamespace::BloomPrePassRenderPass_PassData* New_ctor();

  constexpr ::UnityEngine::Rendering::Universal::UniversalCameraData* const& __cordl_internal_get_cameraData() const;

  constexpr ::UnityEngine::Rendering::Universal::UniversalCameraData*& __cordl_internal_get_cameraData();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_destinationTexture() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_destinationTexture();

  constexpr ::UnityW<::GlobalNamespace::BloomPrePassEffectSO> const& __cordl_internal_get_effect() const;

  constexpr ::UnityW<::GlobalNamespace::BloomPrePassEffectSO>& __cordl_internal_get_effect();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_lightsTexture() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_lightsTexture();

  constexpr ::UnityW<::GlobalNamespace::BloomPrePassRendererSO> const& __cordl_internal_get_renderer() const;

  constexpr ::UnityW<::GlobalNamespace::BloomPrePassRendererSO>& __cordl_internal_get_renderer();

  constexpr ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> const& __cordl_internal_get_tempTextures() const;

  constexpr ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>& __cordl_internal_get_tempTextures();

  constexpr void __cordl_internal_set_cameraData(::UnityEngine::Rendering::Universal::UniversalCameraData* value);

  constexpr void __cordl_internal_set_destinationTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_effect(::UnityW<::GlobalNamespace::BloomPrePassEffectSO> value);

  constexpr void __cordl_internal_set_lightsTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_renderer(::UnityW<::GlobalNamespace::BloomPrePassRendererSO> value);

  constexpr void __cordl_internal_set_tempTextures(::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> value);

  /// @brief Method .ctor, addr 0x58643e8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BloomPrePassRenderPass_PassData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BloomPrePassRenderPass_PassData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BloomPrePassRenderPass_PassData(BloomPrePassRenderPass_PassData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BloomPrePassRenderPass_PassData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BloomPrePassRenderPass_PassData(BloomPrePassRenderPass_PassData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19474 };

  /// @brief Field cameraData, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::UniversalCameraData* ___cameraData;

  /// @brief Field renderer, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BloomPrePassRendererSO> ___renderer;

  /// @brief Field effect, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BloomPrePassEffectSO> ___effect;

  /// @brief Field lightsTexture, offset: 0x28, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___lightsTexture;

  /// @brief Field destinationTexture, offset: 0x38, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___destinationTexture;

  /// @brief Field tempTextures, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> ___tempTextures;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BloomPrePassRenderPass_PassData, ___cameraData) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassRenderPass_PassData, ___renderer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassRenderPass_PassData, ___effect) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassRenderPass_PassData, ___lightsTexture) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassRenderPass_PassData, ___destinationTexture) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassRenderPass_PassData, ___tempTextures) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BloomPrePassRenderPass_PassData) == 0x50, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BloomPrePassRenderPass/<>c
class CORDL_TYPE BloomPrePassRenderPass___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::GlobalNamespace::BloomPrePassRenderPass___c* __9;

  /// @brief Field <>9__3_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__3_0,
                      put = setStaticF___9__3_0)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::GlobalNamespace::BloomPrePassRenderPass_PassData*,
                                                                                                                ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>* __9__3_0;

  static inline ::GlobalNamespace::BloomPrePassRenderPass___c* New_ctor();

  /// @brief Method <RecordRenderGraph>b__3_0, addr 0x5864444, size 0xc, virtual false, abstract: false, final false
  inline void _RecordRenderGraph_b__3_0(::GlobalNamespace::BloomPrePassRenderPass_PassData* data, ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext* context);

  /// @brief Method .ctor, addr 0x5864440, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::BloomPrePassRenderPass___c* getStaticF___9();

  static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::GlobalNamespace::BloomPrePassRenderPass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*
  getStaticF___9__3_0();

  static inline void setStaticF___9(::GlobalNamespace::BloomPrePassRenderPass___c* value);

  static inline void setStaticF___9__3_0(
      ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::GlobalNamespace::BloomPrePassRenderPass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BloomPrePassRenderPass___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BloomPrePassRenderPass___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BloomPrePassRenderPass___c(BloomPrePassRenderPass___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BloomPrePassRenderPass___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BloomPrePassRenderPass___c(BloomPrePassRenderPass___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19475 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::BloomPrePassRenderPass___c) == 0x10, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies UnityEngine.Rendering.Universal.ScriptableRenderPass
namespace GlobalNamespace {
// Is value type: false
// CS Name: BloomPrePassRenderPass
class CORDL_TYPE BloomPrePassRenderPass : public ::UnityEngine::Rendering::Universal::ScriptableRenderPass {
public:
  // Declarations
  using PassData = ::GlobalNamespace::BloomPrePassRenderPass_PassData;

  using __c = ::GlobalNamespace::BloomPrePassRenderPass___c;

  /// @brief Field _effectOverride, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get__effectOverride, put = __cordl_internal_set__effectOverride)) ::UnityW<::GlobalNamespace::BloomPrePassEffectSO> _effectOverride;

  /// @brief Method ExecutePass, addr 0x58636c8, size 0x19c, virtual false, abstract: false, final false
  static inline void ExecutePass(::GlobalNamespace::BloomPrePassRenderPass_PassData* passData, ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext* context);

  static inline ::GlobalNamespace::BloomPrePassRenderPass* New_ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt, ::GlobalNamespace::BloomPrePassEffectSO* effectOverride);

  /// @brief Method RecordRenderGraph, addr 0x5862eb0, size 0x818, virtual true, abstract: false, final false
  inline void RecordRenderGraph(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::ContextContainer* frameData);

  constexpr ::UnityW<::GlobalNamespace::BloomPrePassEffectSO> const& __cordl_internal_get__effectOverride() const;

  constexpr ::UnityW<::GlobalNamespace::BloomPrePassEffectSO>& __cordl_internal_get__effectOverride();

  constexpr void __cordl_internal_set__effectOverride(::UnityW<::GlobalNamespace::BloomPrePassEffectSO> value);

  /// @brief Method .ctor, addr 0x5862c8c, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt, ::GlobalNamespace::BloomPrePassEffectSO* effectOverride);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BloomPrePassRenderPass();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BloomPrePassRenderPass", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BloomPrePassRenderPass(BloomPrePassRenderPass&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BloomPrePassRenderPass", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BloomPrePassRenderPass(BloomPrePassRenderPass const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19476 };

  /// @brief Field _effectOverride, offset: 0xb8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BloomPrePassEffectSO> ____effectOverride;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BloomPrePassRenderPass, ____effectOverride) == 0xb8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BloomPrePassRenderPass) == 0xc0, "Size mismatch!");

} // namespace GlobalNamespace
