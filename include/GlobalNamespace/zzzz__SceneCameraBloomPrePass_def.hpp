#pragma once
// IWYU pragma private; include "GlobalNamespace/SceneCameraBloomPrePass.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(SceneCameraBloomPrePass)
namespace GlobalNamespace {
class BloomPrePassEffectContainerSO;
}
namespace GlobalNamespace {
class BloomPrePassRendererSO;
}
namespace UnityEngine {
class RenderTexture;
}
// Forward declare root types
namespace GlobalNamespace {
class SceneCameraBloomPrePass;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SceneCameraBloomPrePass);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SceneCameraBloomPrePass
class CORDL_TYPE SceneCameraBloomPrePass : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _bloomPrePassEffectContainer, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__bloomPrePassEffectContainer, put = __cordl_internal_set__bloomPrePassEffectContainer)) ::UnityW<::GlobalNamespace::BloomPrePassEffectContainerSO>
      _bloomPrePassEffectContainer;

  /// @brief Field _bloomPrepassRenderTexture, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__bloomPrepassRenderTexture, put = __cordl_internal_set__bloomPrepassRenderTexture)) ::UnityW<::UnityEngine::RenderTexture> _bloomPrepassRenderTexture;

  /// @brief Field _bloomPrepassRenderer, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__bloomPrepassRenderer, put = __cordl_internal_set__bloomPrepassRenderer)) ::UnityW<::GlobalNamespace::BloomPrePassRendererSO> _bloomPrepassRenderer;

  static inline ::GlobalNamespace::SceneCameraBloomPrePass* New_ctor();

  constexpr ::UnityW<::GlobalNamespace::BloomPrePassEffectContainerSO> const& __cordl_internal_get__bloomPrePassEffectContainer() const;

  constexpr ::UnityW<::GlobalNamespace::BloomPrePassEffectContainerSO>& __cordl_internal_get__bloomPrePassEffectContainer();

  constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get__bloomPrepassRenderTexture() const;

  constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get__bloomPrepassRenderTexture();

  constexpr ::UnityW<::GlobalNamespace::BloomPrePassRendererSO> const& __cordl_internal_get__bloomPrepassRenderer() const;

  constexpr ::UnityW<::GlobalNamespace::BloomPrePassRendererSO>& __cordl_internal_get__bloomPrepassRenderer();

  constexpr void __cordl_internal_set__bloomPrePassEffectContainer(::UnityW<::GlobalNamespace::BloomPrePassEffectContainerSO> value);

  constexpr void __cordl_internal_set__bloomPrepassRenderTexture(::UnityW<::UnityEngine::RenderTexture> value);

  constexpr void __cordl_internal_set__bloomPrepassRenderer(::UnityW<::GlobalNamespace::BloomPrePassRendererSO> value);

  /// @brief Method .ctor, addr 0x39dc3a0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SceneCameraBloomPrePass();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SceneCameraBloomPrePass", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SceneCameraBloomPrePass(SceneCameraBloomPrePass&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SceneCameraBloomPrePass", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SceneCameraBloomPrePass(SceneCameraBloomPrePass const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16268 };

  /// @brief Field _bloomPrepassRenderer, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BloomPrePassRendererSO> ____bloomPrepassRenderer;

  /// @brief Field _bloomPrePassEffectContainer, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BloomPrePassEffectContainerSO> ____bloomPrePassEffectContainer;

  /// @brief Field _bloomPrepassRenderTexture, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RenderTexture> ____bloomPrepassRenderTexture;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SceneCameraBloomPrePass, ____bloomPrepassRenderer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SceneCameraBloomPrePass, ____bloomPrePassEffectContainer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SceneCameraBloomPrePass, ____bloomPrepassRenderTexture) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SceneCameraBloomPrePass, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SceneCameraBloomPrePass);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SceneCameraBloomPrePass*, "", "SceneCameraBloomPrePass");
