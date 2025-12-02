#pragma once
// IWYU pragma private; include "GlobalNamespace/MainEffectRendererFeature.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRendererFeature_def.hpp"
CORDL_MODULE_EXPORT(MainEffectRendererFeature)
namespace GlobalNamespace {
class MainEffectContainerSO;
}
namespace UnityEngine::Rendering::Universal {
struct RenderingData;
}
namespace UnityEngine::Rendering::Universal {
class ScriptableRenderer;
}
// Forward declare root types
namespace GlobalNamespace {
class MainEffectRendererFeature;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MainEffectRendererFeature);
// Dependencies UnityEngine.Rendering.Universal.ScriptableRendererFeature
namespace GlobalNamespace {
// Is value type: false
// CS Name: MainEffectRendererFeature
class CORDL_TYPE MainEffectRendererFeature : public ::UnityEngine::Rendering::Universal::ScriptableRendererFeature {
public:
  // Declarations
  /// @brief Field _sceneEffectContainer, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__sceneEffectContainer, put = __cordl_internal_set__sceneEffectContainer)) ::UnityW<::GlobalNamespace::MainEffectContainerSO> _sceneEffectContainer;

  /// @brief Method AddRenderPasses, addr 0x5d2da9c, size 0x4, virtual true, abstract: false, final false
  inline void AddRenderPasses(::UnityEngine::Rendering::Universal::ScriptableRenderer* renderer, ::ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  /// @brief Method Create, addr 0x5d2da98, size 0x4, virtual true, abstract: false, final false
  inline void Create();

  static inline ::GlobalNamespace::MainEffectRendererFeature* New_ctor();

  constexpr ::UnityW<::GlobalNamespace::MainEffectContainerSO> const& __cordl_internal_get__sceneEffectContainer() const;

  constexpr ::UnityW<::GlobalNamespace::MainEffectContainerSO>& __cordl_internal_get__sceneEffectContainer();

  constexpr void __cordl_internal_set__sceneEffectContainer(::UnityW<::GlobalNamespace::MainEffectContainerSO> value);

  /// @brief Method .ctor, addr 0x5d2daa0, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MainEffectRendererFeature();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MainEffectRendererFeature", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MainEffectRendererFeature(MainEffectRendererFeature&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MainEffectRendererFeature", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MainEffectRendererFeature(MainEffectRendererFeature const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20762 };

  /// @brief Field _sceneEffectContainer, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MainEffectContainerSO> ____sceneEffectContainer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MainEffectRendererFeature, ____sceneEffectContainer) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MainEffectRendererFeature, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MainEffectRendererFeature);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MainEffectRendererFeature*, "", "MainEffectRendererFeature");
