#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BloomPrePassBackgroundNonLightRendererCore_def.hpp"
CORDL_MODULE_EXPORT(BloomPrePassBackgroundParticleSystemRenderer)
namespace UnityEngine {
class ParticleSystem;
}
namespace UnityEngine {
class Renderer;
}
// Forward declare root types
namespace GlobalNamespace {
class BloomPrePassBackgroundParticleSystemRenderer;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BloomPrePassBackgroundParticleSystemRenderer);
// Type: ::BloomPrePassBackgroundParticleSystemRenderer
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BloomPrePassBackgroundParticleSystemRenderer*
class CORDL_TYPE BloomPrePassBackgroundParticleSystemRenderer : public ::GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore {
public:
  // Declarations
  /// @brief Field _particleSystem, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__particleSystem, put = __cordl_internal_set__particleSystem))::UnityW<::UnityEngine::ParticleSystem> _particleSystem;

  /// @brief Field _renderer, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__renderer, put = __cordl_internal_set__renderer))::UnityW<::UnityEngine::Renderer> _renderer;

  __declspec(property(get = get_renderer))::UnityW<::UnityEngine::Renderer> renderer;

  /// @brief Method Awake, addr 0x22c9af4, size 0x64, virtual true, abstract: false, final false
  inline void Awake();

  static inline ::GlobalNamespace::BloomPrePassBackgroundParticleSystemRenderer* New_ctor();

  constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get__particleSystem() const;

  constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get__particleSystem();

  constexpr ::UnityW<::UnityEngine::Renderer> const& __cordl_internal_get__renderer() const;

  constexpr ::UnityW<::UnityEngine::Renderer>& __cordl_internal_get__renderer();

  constexpr void __cordl_internal_set__particleSystem(::UnityW<::UnityEngine::ParticleSystem> value);

  constexpr void __cordl_internal_set__renderer(::UnityW<::UnityEngine::Renderer> value);

  /// @brief Method .ctor, addr 0x22c9b58, size 0x54, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_renderer, addr 0x22c9aec, size 0x8, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Renderer> get_renderer();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BloomPrePassBackgroundParticleSystemRenderer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BloomPrePassBackgroundParticleSystemRenderer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BloomPrePassBackgroundParticleSystemRenderer(BloomPrePassBackgroundParticleSystemRenderer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BloomPrePassBackgroundParticleSystemRenderer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BloomPrePassBackgroundParticleSystemRenderer(BloomPrePassBackgroundParticleSystemRenderer const&) = delete;

  /// @brief Field _particleSystem, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ParticleSystem> ____particleSystem;

  /// @brief Field _renderer, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Renderer> ____renderer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BloomPrePassBackgroundParticleSystemRenderer, 0x58>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassBackgroundParticleSystemRenderer, ____particleSystem) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassBackgroundParticleSystemRenderer, ____renderer) == 0x50, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BloomPrePassBackgroundParticleSystemRenderer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BloomPrePassBackgroundParticleSystemRenderer*, "", "BloomPrePassBackgroundParticleSystemRenderer");
