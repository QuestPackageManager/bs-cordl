#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SliderInteractionEffect_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
namespace UnityEngine {
class ParticleSystem;
}
// Forward declare root types
namespace GlobalNamespace {
class SliderParticleInteractionEffect;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SliderParticleInteractionEffect);
// Type: ::SliderParticleInteractionEffect
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10251)), TypeDefinitionIndex(TypeDefinitionIndex(4819))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4825))
// CS Name: ::SliderParticleInteractionEffect*
class CORDL_TYPE SliderParticleInteractionEffect : public ::GlobalNamespace::SliderInteractionEffect {
public:
  // Declarations
  /// @brief Field _particleSystems, offset 0x20, size 0x8
  __declspec(property(get = __get__particleSystems, put = __set__particleSystems))::ArrayW<::UnityEngine::ParticleSystem*, ::Array<::UnityEngine::ParticleSystem*>*> _particleSystems;

  /// @brief Field _colorManager, offset 0x28, size 0x8
  __declspec(property(get = __get__colorManager, put = __set__colorManager))::GlobalNamespace::ColorManager* _colorManager;

  /// @brief Field _saberManager, offset 0x30, size 0x8
  __declspec(property(get = __get__saberManager, put = __set__saberManager))::GlobalNamespace::SaberManager* _saberManager;

  /// @brief Field _startColor, offset 0x38, size 0x10
  __declspec(property(get = __get__startColor, put = __set__startColor))::UnityEngine::Color _startColor;

  /// @brief Field _saber, offset 0x48, size 0x8
  __declspec(property(get = __get__saber, put = __set__saber))::GlobalNamespace::Saber* _saber;

  constexpr ::ArrayW<::UnityEngine::ParticleSystem*, ::Array<::UnityEngine::ParticleSystem*>*>& __get__particleSystems();

  constexpr ::ArrayW<::UnityEngine::ParticleSystem*, ::Array<::UnityEngine::ParticleSystem*>*> const& __get__particleSystems() const;

  constexpr void __set__particleSystems(::ArrayW<::UnityEngine::ParticleSystem*, ::Array<::UnityEngine::ParticleSystem*>*> value);

  constexpr ::GlobalNamespace::ColorManager*& __get__colorManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorManager*> const& __get__colorManager() const;

  constexpr void __set__colorManager(::GlobalNamespace::ColorManager* value);

  constexpr ::GlobalNamespace::SaberManager*& __get__saberManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SaberManager*> const& __get__saberManager() const;

  constexpr void __set__saberManager(::GlobalNamespace::SaberManager* value);

  constexpr ::UnityEngine::Color& __get__startColor();

  constexpr ::UnityEngine::Color const& __get__startColor() const;

  constexpr void __set__startColor(::UnityEngine::Color value);

  constexpr ::GlobalNamespace::Saber*& __get__saber();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::Saber*> const& __get__saber() const;

  constexpr void __set__saber(::GlobalNamespace::Saber* value);

  /// @brief Method Start, addr 0x2394f4c, size 0x98, virtual true, abstract: false, final false
  inline void Start();

  /// @brief Method Update, addr 0x23950b8, size 0x6c, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method SetPSStartColor, addr 0x2394fe4, size 0xd4, virtual false, abstract: false, final false
  inline void SetPSStartColor(::UnityEngine::Color color);

  /// @brief Method StartEffect, addr 0x2395124, size 0xb8, virtual true, abstract: false, final false
  inline void StartEffect(float_t saberInteractionParam);

  /// @brief Method EndEffect, addr 0x23951dc, size 0x94, virtual true, abstract: false, final false
  inline void EndEffect();

  static inline ::GlobalNamespace::SliderParticleInteractionEffect* New_ctor();

  /// @brief Method .ctor, addr 0x2395270, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "SliderParticleInteractionEffect", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SliderParticleInteractionEffect(SliderParticleInteractionEffect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SliderParticleInteractionEffect", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SliderParticleInteractionEffect(SliderParticleInteractionEffect const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SliderParticleInteractionEffect();

public:
  /// @brief Field _particleSystems, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::ParticleSystem*, ::Array<::UnityEngine::ParticleSystem*>*> ____particleSystems;

  /// @brief Field _colorManager, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::ColorManager* ____colorManager;

  /// @brief Field _saberManager, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::SaberManager* ____saberManager;

  /// @brief Field _startColor, offset: 0x38, size: 0x10, def value: None
  ::UnityEngine::Color ____startColor;

  /// @brief Field _saber, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::Saber* ____saber;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SliderParticleInteractionEffect, 0x50>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderParticleInteractionEffect, ____particleSystems) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderParticleInteractionEffect, ____colorManager) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderParticleInteractionEffect, ____saberManager) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderParticleInteractionEffect, ____startColor) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderParticleInteractionEffect, ____saber) == 0x48, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SliderParticleInteractionEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SliderParticleInteractionEffect*, "", "SliderParticleInteractionEffect");
