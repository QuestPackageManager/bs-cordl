#pragma once
// IWYU pragma private; include "GlobalNamespace\MainEffectSO.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MainEffectSO)
namespace UnityEngine::Rendering::RenderGraphModule {
class IUnsafeRenderGraphBuilder;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraph;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct TextureHandle;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
class IBaseCommandBuffer;
}
namespace UnityEngine::Rendering {
class RasterCommandBuffer;
}
namespace UnityEngine {
struct RenderTextureDescriptor;
}
// Forward declare root types
namespace GlobalNamespace {
class MainEffectSO;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MainEffectSO*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MainEffectSO*, "", "MainEffectSO");
// Dependencies PersistentScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: MainEffectSO
class CORDL_TYPE MainEffectSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  __declspec(property(get = get_hasPostProcessEffect)) bool hasPostProcessEffect;

  /// @brief Method BindAndFetchTempTextureHandles, addr 0x5f45a10, size 0xa0, virtual true, abstract: false, final false
  inline void BindAndFetchTempTextureHandles(::UnityEngine::Rendering::RenderGraphModule::IUnsafeRenderGraphBuilder* builder, ::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                             ::UnityEngine::RenderTextureDescriptor destDesc, ::by_ref<::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>> textureHandles);

  static inline ::GlobalNamespace::MainEffectSO* New_ctor();

  /// @brief Method PostRender, addr 0x5f45aec, size 0x4, virtual true, abstract: false, final false
  inline void PostRender(::UnityEngine::Rendering::RasterCommandBuffer* cmd, float_t fade);

  /// @brief Method PreRender, addr 0x5f45ab0, size 0x4, virtual true, abstract: false, final false
  inline void PreRender(::UnityEngine::Rendering::IBaseCommandBuffer* cmd);

  /// @brief Method Render, addr 0x5f45ab4, size 0x38, virtual true, abstract: false, final false
  inline void Render(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle src,
                     ::UnityEngine::Rendering::RenderGraphModule::TextureHandle bloomTexture, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle dest,
                     ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> tempTextures, float_t fade);

  /// @brief Method .ctor, addr 0x5f45af8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_hasPostProcessEffect, addr 0x5f45af0, size 0x8, virtual true, abstract: false, final false
  inline bool get_hasPostProcessEffect();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MainEffectSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MainEffectSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MainEffectSO(MainEffectSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MainEffectSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MainEffectSO(MainEffectSO const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20646 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::MainEffectSO) == 0x18, "Size mismatch!");

} // namespace GlobalNamespace
