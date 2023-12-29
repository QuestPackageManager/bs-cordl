#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BloomPrePassBackgroundNonLightRendererCore_def.hpp"
CORDL_MODULE_EXPORT(BloomPrePassBackgroundParticleSystemRenderer)
namespace UnityEngine {
class Renderer;
}
namespace UnityEngine {
class ParticleSystem;
}
// Forward declare root types
namespace GlobalNamespace {
class BloomPrePassBackgroundParticleSystemRenderer;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BloomPrePassBackgroundParticleSystemRenderer);
// Type: ::BloomPrePassBackgroundParticleSystemRenderer
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14683))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14684))
// CS Name: ::BloomPrePassBackgroundParticleSystemRenderer*
class CORDL_TYPE BloomPrePassBackgroundParticleSystemRenderer : public ::GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore {
public:
  // Declarations
  /// @brief Field _particleSystem, offset 0x38, size 0x8
  __declspec(property(get = __get__particleSystem, put = __set__particleSystem))::UnityEngine::ParticleSystem* _particleSystem;

  /// @brief Field _renderer, offset 0x40, size 0x8
  __declspec(property(get = __get__renderer, put = __set__renderer))::UnityEngine::Renderer* _renderer;

  __declspec(property(get = get_renderer))::UnityEngine::Renderer* renderer;

  constexpr ::UnityEngine::ParticleSystem*& __get__particleSystem();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ParticleSystem*> const& __get__particleSystem() const;

  constexpr void __set__particleSystem(::UnityEngine::ParticleSystem* value);

  constexpr ::UnityEngine::Renderer*& __get__renderer();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Renderer*> const& __get__renderer() const;

  constexpr void __set__renderer(::UnityEngine::Renderer* value);

  /// @brief Method get_renderer addr 0x1fb0de4 size 0x8 virtual true final false
  inline ::UnityEngine::Renderer* get_renderer();

  /// @brief Method Awake addr 0x1fb0dec size 0x64 virtual true final false
  inline void Awake();

  static inline ::GlobalNamespace::BloomPrePassBackgroundParticleSystemRenderer* New_ctor();

  /// @brief Method .ctor addr 0x1fb0e50 size 0x54 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "BloomPrePassBackgroundParticleSystemRenderer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BloomPrePassBackgroundParticleSystemRenderer(BloomPrePassBackgroundParticleSystemRenderer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BloomPrePassBackgroundParticleSystemRenderer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BloomPrePassBackgroundParticleSystemRenderer(BloomPrePassBackgroundParticleSystemRenderer const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BloomPrePassBackgroundParticleSystemRenderer();

public:
  /// @brief Field _particleSystem, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::ParticleSystem* ____particleSystem;

  /// @brief Field _renderer, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::Renderer* ____renderer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BloomPrePassBackgroundParticleSystemRenderer, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassBackgroundParticleSystemRenderer, ____particleSystem) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassBackgroundParticleSystemRenderer, ____renderer) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BloomPrePassBackgroundParticleSystemRenderer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BloomPrePassBackgroundParticleSystemRenderer*, "", "BloomPrePassBackgroundParticleSystemRenderer");
