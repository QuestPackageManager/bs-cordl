#pragma once
// IWYU pragma private; include "GlobalNamespace\SliderParticleInteractionEffect.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SliderInteractionEffect_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SliderParticleInteractionEffect)
namespace GlobalNamespace {
class ColorManager;
}
namespace GlobalNamespace {
class SaberManager;
}
namespace GlobalNamespace {
class Saber;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class SliderParticleInteractionEffect;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SliderParticleInteractionEffect*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SliderParticleInteractionEffect*, "", "SliderParticleInteractionEffect");
// Dependencies SliderInteractionEffect, UnityEngine.Color, UnityEngine.ParticleSystem
namespace GlobalNamespace {
// Is value type: false
// CS Name: SliderParticleInteractionEffect
class CORDL_TYPE SliderParticleInteractionEffect : public ::GlobalNamespace::SliderInteractionEffect {
public:
  // Declarations
  /// @brief Field _colorManager, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__colorManager, put = __cordl_internal_set__colorManager)) ::GlobalNamespace::ColorManager* _colorManager;

  /// @brief Field _particleSystems, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__particleSystems, put = __cordl_internal_set__particleSystems)) ::ArrayW<::UnityW<::UnityEngine::ParticleSystem>> _particleSystems;

  /// @brief Field _saber, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__saber, put = __cordl_internal_set__saber)) ::UnityW<::GlobalNamespace::Saber> _saber;

  /// @brief Field _saberManager, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__saberManager, put = __cordl_internal_set__saberManager)) ::UnityW<::GlobalNamespace::SaberManager> _saberManager;

  /// @brief Field _startColor, offset 0x40, size 0x10
  __declspec(property(get = __cordl_internal_get__startColor, put = __cordl_internal_set__startColor)) ::UnityEngine::Color _startColor;

  /// @brief Method EndEffect, addr 0x597c8e8, size 0xa8, virtual true, abstract: false, final false
  inline void EndEffect();

  static inline ::GlobalNamespace::SliderParticleInteractionEffect* New_ctor();

  /// @brief Method SetPSStartColor, addr 0x597c708, size 0xa8, virtual false, abstract: false, final false
  inline void SetPSStartColor(::UnityEngine::Color color);

  /// @brief Method Start, addr 0x597c66c, size 0x9c, virtual true, abstract: false, final false
  inline void Start();

  /// @brief Method StartEffect, addr 0x597c818, size 0xd0, virtual true, abstract: false, final false
  inline void StartEffect(float_t saberInteractionParam);

  /// @brief Method Update, addr 0x597c7b0, size 0x68, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::GlobalNamespace::ColorManager* const& __cordl_internal_get__colorManager() const;

  constexpr ::GlobalNamespace::ColorManager*& __cordl_internal_get__colorManager();

  constexpr ::ArrayW<::UnityW<::UnityEngine::ParticleSystem>> const& __cordl_internal_get__particleSystems() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::ParticleSystem>>& __cordl_internal_get__particleSystems();

  constexpr ::UnityW<::GlobalNamespace::Saber> const& __cordl_internal_get__saber() const;

  constexpr ::UnityW<::GlobalNamespace::Saber>& __cordl_internal_get__saber();

  constexpr ::UnityW<::GlobalNamespace::SaberManager> const& __cordl_internal_get__saberManager() const;

  constexpr ::UnityW<::GlobalNamespace::SaberManager>& __cordl_internal_get__saberManager();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__startColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__startColor();

  constexpr void __cordl_internal_set__colorManager(::GlobalNamespace::ColorManager* value);

  constexpr void __cordl_internal_set__particleSystems(::ArrayW<::UnityW<::UnityEngine::ParticleSystem>> value);

  constexpr void __cordl_internal_set__saber(::UnityW<::GlobalNamespace::Saber> value);

  constexpr void __cordl_internal_set__saberManager(::UnityW<::GlobalNamespace::SaberManager> value);

  constexpr void __cordl_internal_set__startColor(::UnityEngine::Color value);

  /// @brief Method .ctor, addr 0x597c990, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SliderParticleInteractionEffect();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SliderParticleInteractionEffect", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SliderParticleInteractionEffect(SliderParticleInteractionEffect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SliderParticleInteractionEffect", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SliderParticleInteractionEffect(SliderParticleInteractionEffect const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5737 };

  /// @brief Field _particleSystems, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::ParticleSystem>> ____particleSystems;

  /// @brief Field _colorManager, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::ColorManager* ____colorManager;

  /// @brief Field _saberManager, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SaberManager> ____saberManager;

  /// @brief Field _startColor, offset: 0x40, size: 0x10, def value: None
  ::UnityEngine::Color ____startColor;

  /// @brief Field _saber, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::Saber> ____saber;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SliderParticleInteractionEffect, ____particleSystems) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderParticleInteractionEffect, ____colorManager) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderParticleInteractionEffect, ____saberManager) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderParticleInteractionEffect, ____startColor) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderParticleInteractionEffect, ____saber) == 0x50, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SliderParticleInteractionEffect) == 0x58, "Size mismatch!");

} // namespace GlobalNamespace
