#pragma once
// IWYU pragma private; include "GlobalNamespace/BloomPrePassRendererFeature.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRendererFeature_def.hpp"
CORDL_MODULE_EXPORT(BloomPrePassRendererFeature)
namespace GlobalNamespace {
class BloomFogSO;
}
namespace GlobalNamespace {
class BloomPrePassEffectContainerSO;
}
namespace GlobalNamespace {
class BloomPrePassRendererSO;
}
namespace UnityEngine::Rendering::Universal {
struct RenderingData;
}
namespace UnityEngine::Rendering::Universal {
class ScriptableRenderer;
}
// Forward declare root types
namespace GlobalNamespace {
class BloomPrePassRendererFeature;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BloomPrePassRendererFeature);
// Dependencies UnityEngine.Rendering.Universal.ScriptableRendererFeature
namespace GlobalNamespace {
// Is value type: false
// CS Name: BloomPrePassRendererFeature
class CORDL_TYPE BloomPrePassRendererFeature : public ::UnityEngine::Rendering::Universal::ScriptableRendererFeature {
public:
  // Declarations
  /// @brief Field _bloomFog, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__bloomFog, put = __cordl_internal_set__bloomFog)) ::UnityW<::GlobalNamespace::BloomFogSO> _bloomFog;

  /// @brief Field _sceneEffectContainer, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__sceneEffectContainer, put = __cordl_internal_set__sceneEffectContainer)) ::UnityW<::GlobalNamespace::BloomPrePassEffectContainerSO>
      _sceneEffectContainer;

  /// @brief Field _sceneRenderer, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__sceneRenderer, put = __cordl_internal_set__sceneRenderer)) ::UnityW<::GlobalNamespace::BloomPrePassRendererSO> _sceneRenderer;

  /// @brief Method AddRenderPasses, addr 0x5650694, size 0x4, virtual true, abstract: false, final false
  inline void AddRenderPasses(::UnityEngine::Rendering::Universal::ScriptableRenderer* renderer, ::ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  /// @brief Method Create, addr 0x5650690, size 0x4, virtual true, abstract: false, final false
  inline void Create();

  static inline ::GlobalNamespace::BloomPrePassRendererFeature* New_ctor();

  constexpr ::UnityW<::GlobalNamespace::BloomFogSO> const& __cordl_internal_get__bloomFog() const;

  constexpr ::UnityW<::GlobalNamespace::BloomFogSO>& __cordl_internal_get__bloomFog();

  constexpr ::UnityW<::GlobalNamespace::BloomPrePassEffectContainerSO> const& __cordl_internal_get__sceneEffectContainer() const;

  constexpr ::UnityW<::GlobalNamespace::BloomPrePassEffectContainerSO>& __cordl_internal_get__sceneEffectContainer();

  constexpr ::UnityW<::GlobalNamespace::BloomPrePassRendererSO> const& __cordl_internal_get__sceneRenderer() const;

  constexpr ::UnityW<::GlobalNamespace::BloomPrePassRendererSO>& __cordl_internal_get__sceneRenderer();

  constexpr void __cordl_internal_set__bloomFog(::UnityW<::GlobalNamespace::BloomFogSO> value);

  constexpr void __cordl_internal_set__sceneEffectContainer(::UnityW<::GlobalNamespace::BloomPrePassEffectContainerSO> value);

  constexpr void __cordl_internal_set__sceneRenderer(::UnityW<::GlobalNamespace::BloomPrePassRendererSO> value);

  /// @brief Method .ctor, addr 0x5650698, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BloomPrePassRendererFeature();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BloomPrePassRendererFeature", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BloomPrePassRendererFeature(BloomPrePassRendererFeature&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BloomPrePassRendererFeature", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BloomPrePassRendererFeature(BloomPrePassRendererFeature const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19640 };

  /// @brief Field _sceneEffectContainer, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BloomPrePassEffectContainerSO> ____sceneEffectContainer;

  /// @brief Field _sceneRenderer, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BloomPrePassRendererSO> ____sceneRenderer;

  /// @brief Field _bloomFog, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BloomFogSO> ____bloomFog;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BloomPrePassRendererFeature, ____sceneEffectContainer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassRendererFeature, ____sceneRenderer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassRendererFeature, ____bloomFog) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BloomPrePassRendererFeature, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BloomPrePassRendererFeature);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BloomPrePassRendererFeature*, "", "BloomPrePassRendererFeature");
