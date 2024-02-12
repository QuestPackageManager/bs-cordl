#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
CORDL_MODULE_EXPORT(SaberClashEffect)
namespace GlobalNamespace {
class ColorManager;
}
namespace GlobalNamespace {
class HapticFeedbackManager;
}
namespace GlobalNamespace {
class SaberClashChecker;
}
namespace Libraries::HM::HMLib::VR {
class HapticPresetSO;
}
namespace UnityEngine {
class ParticleSystem;
}
// Forward declare root types
namespace GlobalNamespace {
class SaberClashEffect;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SaberClashEffect);
// Type: ::SaberClashEffect
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 89, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(8969)), TypeDefinitionIndex(TypeDefinitionIndex(15043))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4323))
// CS Name: ::SaberClashEffect*
class CORDL_TYPE SaberClashEffect : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _sparkleParticleSystem, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__sparkleParticleSystem, put = __cordl_internal_set__sparkleParticleSystem))::UnityW<::UnityEngine::ParticleSystem> _sparkleParticleSystem;

  /// @brief Field _glowParticleSystem, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__glowParticleSystem, put = __cordl_internal_set__glowParticleSystem))::UnityW<::UnityEngine::ParticleSystem> _glowParticleSystem;

  /// @brief Field _rumblePreset, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__rumblePreset, put = __cordl_internal_set__rumblePreset))::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO> _rumblePreset;

  /// @brief Field _saberClashChecker, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__saberClashChecker, put = __cordl_internal_set__saberClashChecker))::GlobalNamespace::SaberClashChecker* _saberClashChecker;

  /// @brief Field _hapticFeedbackController, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__hapticFeedbackController,
                      put = __cordl_internal_set__hapticFeedbackController))::UnityW<::GlobalNamespace::HapticFeedbackManager> _hapticFeedbackController;

  /// @brief Field _colorManager, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__colorManager, put = __cordl_internal_set__colorManager))::GlobalNamespace::ColorManager* _colorManager;

  /// @brief Field _sparkleParticleSystemEmmisionModule, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__sparkleParticleSystemEmmisionModule,
                      put = __cordl_internal_set__sparkleParticleSystemEmmisionModule))::UnityEngine::__ParticleSystem__EmissionModule _sparkleParticleSystemEmmisionModule;

  /// @brief Field _glowParticleSystemEmmisionModule, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__glowParticleSystemEmmisionModule,
                      put = __cordl_internal_set__glowParticleSystemEmmisionModule))::UnityEngine::__ParticleSystem__EmissionModule _glowParticleSystemEmmisionModule;

  /// @brief Field _sabersAreClashing, offset 0x58, size 0x1
  __declspec(property(get = __cordl_internal_get__sabersAreClashing, put = __cordl_internal_set__sabersAreClashing)) bool _sabersAreClashing;

  constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get__sparkleParticleSystem();

  constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get__sparkleParticleSystem() const;

  constexpr void __cordl_internal_set__sparkleParticleSystem(::UnityW<::UnityEngine::ParticleSystem> value);

  constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get__glowParticleSystem();

  constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get__glowParticleSystem() const;

  constexpr void __cordl_internal_set__glowParticleSystem(::UnityW<::UnityEngine::ParticleSystem> value);

  constexpr ::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO>& __cordl_internal_get__rumblePreset();

  constexpr ::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO> const& __cordl_internal_get__rumblePreset() const;

  constexpr void __cordl_internal_set__rumblePreset(::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO> value);

  constexpr ::GlobalNamespace::SaberClashChecker*& __cordl_internal_get__saberClashChecker();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SaberClashChecker*> const& __cordl_internal_get__saberClashChecker() const;

  constexpr void __cordl_internal_set__saberClashChecker(::GlobalNamespace::SaberClashChecker* value);

  constexpr ::UnityW<::GlobalNamespace::HapticFeedbackManager>& __cordl_internal_get__hapticFeedbackController();

  constexpr ::UnityW<::GlobalNamespace::HapticFeedbackManager> const& __cordl_internal_get__hapticFeedbackController() const;

  constexpr void __cordl_internal_set__hapticFeedbackController(::UnityW<::GlobalNamespace::HapticFeedbackManager> value);

  constexpr ::GlobalNamespace::ColorManager*& __cordl_internal_get__colorManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorManager*> const& __cordl_internal_get__colorManager() const;

  constexpr void __cordl_internal_set__colorManager(::GlobalNamespace::ColorManager* value);

  constexpr ::UnityEngine::__ParticleSystem__EmissionModule& __cordl_internal_get__sparkleParticleSystemEmmisionModule();

  constexpr ::UnityEngine::__ParticleSystem__EmissionModule const& __cordl_internal_get__sparkleParticleSystemEmmisionModule() const;

  constexpr void __cordl_internal_set__sparkleParticleSystemEmmisionModule(::UnityEngine::__ParticleSystem__EmissionModule value);

  constexpr ::UnityEngine::__ParticleSystem__EmissionModule& __cordl_internal_get__glowParticleSystemEmmisionModule();

  constexpr ::UnityEngine::__ParticleSystem__EmissionModule const& __cordl_internal_get__glowParticleSystemEmmisionModule() const;

  constexpr void __cordl_internal_set__glowParticleSystemEmmisionModule(::UnityEngine::__ParticleSystem__EmissionModule value);

  constexpr bool& __cordl_internal_get__sabersAreClashing();

  constexpr bool const& __cordl_internal_get__sabersAreClashing() const;

  constexpr void __cordl_internal_set__sabersAreClashing(bool value);

  /// @brief Method Start, addr 0x237129c, size 0x1b0, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method OnDisable, addr 0x237144c, size 0x10, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method LateUpdate, addr 0x237145c, size 0xfc, virtual false, abstract: false, final false
  inline void LateUpdate();

  static inline ::GlobalNamespace::SaberClashEffect* New_ctor();

  /// @brief Method .ctor, addr 0x2371558, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "SaberClashEffect", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SaberClashEffect(SaberClashEffect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SaberClashEffect", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SaberClashEffect(SaberClashEffect const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SaberClashEffect();

public:
  /// @brief Field _sparkleParticleSystem, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ParticleSystem> ____sparkleParticleSystem;

  /// @brief Field _glowParticleSystem, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ParticleSystem> ____glowParticleSystem;

  /// @brief Field _rumblePreset, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO> ____rumblePreset;

  /// @brief Field _saberClashChecker, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::SaberClashChecker* ____saberClashChecker;

  /// @brief Field _hapticFeedbackController, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::HapticFeedbackManager> ____hapticFeedbackController;

  /// @brief Field _colorManager, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::ColorManager* ____colorManager;

  /// @brief Field _sparkleParticleSystemEmmisionModule, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::__ParticleSystem__EmissionModule ____sparkleParticleSystemEmmisionModule;

  /// @brief Field _glowParticleSystemEmmisionModule, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::__ParticleSystem__EmissionModule ____glowParticleSystemEmmisionModule;

  /// @brief Field _sabersAreClashing, offset: 0x58, size: 0x1, def value: None
  bool ____sabersAreClashing;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SaberClashEffect, 0x60>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberClashEffect, ____sparkleParticleSystem) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberClashEffect, ____glowParticleSystem) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberClashEffect, ____rumblePreset) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberClashEffect, ____saberClashChecker) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberClashEffect, ____hapticFeedbackController) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberClashEffect, ____colorManager) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberClashEffect, ____sparkleParticleSystemEmmisionModule) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberClashEffect, ____glowParticleSystemEmmisionModule) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberClashEffect, ____sabersAreClashing) == 0x58, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SaberClashEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SaberClashEffect*, "", "SaberClashEffect");
