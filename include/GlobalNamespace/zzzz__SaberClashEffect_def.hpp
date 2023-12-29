#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
CORDL_MODULE_EXPORT(SaberClashEffect)
namespace UnityEngine {
class ParticleSystem;
}
namespace Libraries::HM::HMLib::VR {
class HapticPresetSO;
}
namespace GlobalNamespace {
class SaberClashChecker;
}
namespace GlobalNamespace {
class HapticFeedbackController;
}
namespace GlobalNamespace {
class ColorManager;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15775)), TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5074))
// CS Name: ::SaberClashEffect*
class CORDL_TYPE SaberClashEffect : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _sparkleParticleSystem, offset 0x18, size 0x8
  __declspec(property(get = __get__sparkleParticleSystem, put = __set__sparkleParticleSystem))::UnityEngine::ParticleSystem* _sparkleParticleSystem;

  /// @brief Field _glowParticleSystem, offset 0x20, size 0x8
  __declspec(property(get = __get__glowParticleSystem, put = __set__glowParticleSystem))::UnityEngine::ParticleSystem* _glowParticleSystem;

  /// @brief Field _rumblePreset, offset 0x28, size 0x8
  __declspec(property(get = __get__rumblePreset, put = __set__rumblePreset))::Libraries::HM::HMLib::VR::HapticPresetSO* _rumblePreset;

  /// @brief Field _saberClashChecker, offset 0x30, size 0x8
  __declspec(property(get = __get__saberClashChecker, put = __set__saberClashChecker))::GlobalNamespace::SaberClashChecker* _saberClashChecker;

  /// @brief Field _hapticFeedbackController, offset 0x38, size 0x8
  __declspec(property(get = __get__hapticFeedbackController, put = __set__hapticFeedbackController))::GlobalNamespace::HapticFeedbackController* _hapticFeedbackController;

  /// @brief Field _colorManager, offset 0x40, size 0x8
  __declspec(property(get = __get__colorManager, put = __set__colorManager))::GlobalNamespace::ColorManager* _colorManager;

  /// @brief Field _sparkleParticleSystemEmmisionModule, offset 0x48, size 0x8
  __declspec(property(get = __get__sparkleParticleSystemEmmisionModule,
                      put = __set__sparkleParticleSystemEmmisionModule))::UnityEngine::__ParticleSystem__EmissionModule _sparkleParticleSystemEmmisionModule;

  /// @brief Field _glowParticleSystemEmmisionModule, offset 0x50, size 0x8
  __declspec(property(get = __get__glowParticleSystemEmmisionModule, put = __set__glowParticleSystemEmmisionModule))::UnityEngine::__ParticleSystem__EmissionModule _glowParticleSystemEmmisionModule;

  /// @brief Field _sabersAreClashing, offset 0x58, size 0x1
  __declspec(property(get = __get__sabersAreClashing, put = __set__sabersAreClashing)) bool _sabersAreClashing;

  constexpr ::UnityEngine::ParticleSystem*& __get__sparkleParticleSystem();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ParticleSystem*> const& __get__sparkleParticleSystem() const;

  constexpr void __set__sparkleParticleSystem(::UnityEngine::ParticleSystem* value);

  constexpr ::UnityEngine::ParticleSystem*& __get__glowParticleSystem();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ParticleSystem*> const& __get__glowParticleSystem() const;

  constexpr void __set__glowParticleSystem(::UnityEngine::ParticleSystem* value);

  constexpr ::Libraries::HM::HMLib::VR::HapticPresetSO*& __get__rumblePreset();

  constexpr ::cordl_internals::to_const_pointer<::Libraries::HM::HMLib::VR::HapticPresetSO*> const& __get__rumblePreset() const;

  constexpr void __set__rumblePreset(::Libraries::HM::HMLib::VR::HapticPresetSO* value);

  constexpr ::GlobalNamespace::SaberClashChecker*& __get__saberClashChecker();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SaberClashChecker*> const& __get__saberClashChecker() const;

  constexpr void __set__saberClashChecker(::GlobalNamespace::SaberClashChecker* value);

  constexpr ::GlobalNamespace::HapticFeedbackController*& __get__hapticFeedbackController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::HapticFeedbackController*> const& __get__hapticFeedbackController() const;

  constexpr void __set__hapticFeedbackController(::GlobalNamespace::HapticFeedbackController* value);

  constexpr ::GlobalNamespace::ColorManager*& __get__colorManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorManager*> const& __get__colorManager() const;

  constexpr void __set__colorManager(::GlobalNamespace::ColorManager* value);

  constexpr ::UnityEngine::__ParticleSystem__EmissionModule& __get__sparkleParticleSystemEmmisionModule();

  constexpr ::UnityEngine::__ParticleSystem__EmissionModule const& __get__sparkleParticleSystemEmmisionModule() const;

  constexpr void __set__sparkleParticleSystemEmmisionModule(::UnityEngine::__ParticleSystem__EmissionModule value);

  constexpr ::UnityEngine::__ParticleSystem__EmissionModule& __get__glowParticleSystemEmmisionModule();

  constexpr ::UnityEngine::__ParticleSystem__EmissionModule const& __get__glowParticleSystemEmmisionModule() const;

  constexpr void __set__glowParticleSystemEmmisionModule(::UnityEngine::__ParticleSystem__EmissionModule value);

  constexpr bool& __get__sabersAreClashing();

  constexpr bool const& __get__sabersAreClashing() const;

  constexpr void __set__sabersAreClashing(bool value);

  /// @brief Method Start addr 0x2279350 size 0x1b0 virtual false final false
  inline void Start();

  /// @brief Method OnDisable addr 0x2279500 size 0x10 virtual false final false
  inline void OnDisable();

  /// @brief Method LateUpdate addr 0x2279510 size 0xfc virtual false final false
  inline void LateUpdate();

  static inline ::GlobalNamespace::SaberClashEffect* New_ctor();

  /// @brief Method .ctor addr 0x227960c size 0x8 virtual false final false
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
  ::UnityEngine::ParticleSystem* ____sparkleParticleSystem;

  /// @brief Field _glowParticleSystem, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::ParticleSystem* ____glowParticleSystem;

  /// @brief Field _rumblePreset, offset: 0x28, size: 0x8, def value: None
  ::Libraries::HM::HMLib::VR::HapticPresetSO* ____rumblePreset;

  /// @brief Field _saberClashChecker, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::SaberClashChecker* ____saberClashChecker;

  /// @brief Field _hapticFeedbackController, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::HapticFeedbackController* ____hapticFeedbackController;

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
