#pragma once
// IWYU pragma private; include "GlobalNamespace\TextureEffectSO.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(TextureEffectSO)
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
namespace UnityEngine {
struct RenderTextureDescriptor;
}
// Forward declare root types
namespace GlobalNamespace {
class TextureEffectSO;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::TextureEffectSO*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TextureEffectSO*, "", "TextureEffectSO");
// Dependencies PersistentScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: TextureEffectSO
class CORDL_TYPE TextureEffectSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  /// @brief Method BindAndFetchTempTextureHandles, addr 0x5873380, size 0xa0, virtual true, abstract: false, final false
  inline void BindAndFetchTempTextureHandles(::UnityEngine::Rendering::RenderGraphModule::IUnsafeRenderGraphBuilder* builder, ::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                             ::UnityEngine::RenderTextureDescriptor destDesc, ::by_ref<::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>> textureHandles);

  static inline ::GlobalNamespace::TextureEffectSO* New_ctor();

  /// @brief Method Render, addr 0x5873420, size 0xe0, virtual true, abstract: false, final false
  inline void Render(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle src, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle dest,
                     ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> tempTextures);

  /// @brief Method .ctor, addr 0x5873500, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TextureEffectSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TextureEffectSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TextureEffectSO(TextureEffectSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TextureEffectSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TextureEffectSO(TextureEffectSO const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19588 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::TextureEffectSO) == 0x18, "Size mismatch!");

} // namespace GlobalNamespace
