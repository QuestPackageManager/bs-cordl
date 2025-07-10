#pragma once
// IWYU pragma private; include "GlobalNamespace/SliderHapticFeedbackInteractionEffect.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SaberType_def.hpp"
#include "GlobalNamespace/zzzz__SliderInteractionEffect_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SliderHapticFeedbackInteractionEffect)
namespace GlobalNamespace {
class HapticFeedbackManager;
}
namespace GlobalNamespace {
class IGamePause;
}
namespace Libraries::HM::HMLib::VR {
class HapticPresetSO;
}
// Forward declare root types
namespace GlobalNamespace {
class SliderHapticFeedbackInteractionEffect;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SliderHapticFeedbackInteractionEffect);
// Dependencies SaberType, SliderInteractionEffect
namespace GlobalNamespace {
// Is value type: false
// CS Name: SliderHapticFeedbackInteractionEffect
class CORDL_TYPE SliderHapticFeedbackInteractionEffect : public ::GlobalNamespace::SliderInteractionEffect {
public:
  // Declarations
  /// @brief Field _gamePause, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__gamePause, put = __cordl_internal_set__gamePause)) ::GlobalNamespace::IGamePause* _gamePause;

  /// @brief Field _hapticFeedbackManager, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__hapticFeedbackManager, put = __cordl_internal_set__hapticFeedbackManager)) ::UnityW<::GlobalNamespace::HapticFeedbackManager> _hapticFeedbackManager;

  /// @brief Field _hapticPreset, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__hapticPreset, put = __cordl_internal_set__hapticPreset)) ::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO> _hapticPreset;

  /// @brief Field _saberType, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__saberType, put = __cordl_internal_set__saberType)) ::GlobalNamespace::SaberType _saberType;

  /// @brief Method EndEffect, addr 0x3b7a15c, size 0xc, virtual true, abstract: false, final false
  inline void EndEffect();

  static inline ::GlobalNamespace::SliderHapticFeedbackInteractionEffect* New_ctor();

  /// @brief Method Start, addr 0x3b79ea4, size 0x40, virtual true, abstract: false, final false
  inline void Start();

  /// @brief Method StartEffect, addr 0x3b7a114, size 0x48, virtual true, abstract: false, final false
  inline void StartEffect(float_t saberInteractionParam);

  /// @brief Method Update, addr 0x3b79fe4, size 0xd4, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method Vibrate, addr 0x3b7a0d4, size 0x40, virtual false, abstract: false, final false
  inline void Vibrate();

  constexpr ::GlobalNamespace::IGamePause* const& __cordl_internal_get__gamePause() const;

  constexpr ::GlobalNamespace::IGamePause*& __cordl_internal_get__gamePause();

  constexpr ::UnityW<::GlobalNamespace::HapticFeedbackManager> const& __cordl_internal_get__hapticFeedbackManager() const;

  constexpr ::UnityW<::GlobalNamespace::HapticFeedbackManager>& __cordl_internal_get__hapticFeedbackManager();

  constexpr ::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO> const& __cordl_internal_get__hapticPreset() const;

  constexpr ::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO>& __cordl_internal_get__hapticPreset();

  constexpr ::GlobalNamespace::SaberType const& __cordl_internal_get__saberType() const;

  constexpr ::GlobalNamespace::SaberType& __cordl_internal_get__saberType();

  constexpr void __cordl_internal_set__gamePause(::GlobalNamespace::IGamePause* value);

  constexpr void __cordl_internal_set__hapticFeedbackManager(::UnityW<::GlobalNamespace::HapticFeedbackManager> value);

  constexpr void __cordl_internal_set__hapticPreset(::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO> value);

  constexpr void __cordl_internal_set__saberType(::GlobalNamespace::SaberType value);

  /// @brief Method .ctor, addr 0x3b7a168, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SliderHapticFeedbackInteractionEffect();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SliderHapticFeedbackInteractionEffect", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SliderHapticFeedbackInteractionEffect(SliderHapticFeedbackInteractionEffect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SliderHapticFeedbackInteractionEffect", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SliderHapticFeedbackInteractionEffect(SliderHapticFeedbackInteractionEffect const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4168 };

  /// @brief Field kVibrationSaberInteractionParamThreshold offset 0xffffffff size 0x4
  static constexpr float_t kVibrationSaberInteractionParamThreshold{ static_cast<float_t>(0.2f) };

  /// @brief Field _hapticPreset, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO> ____hapticPreset;

  /// @brief Field _hapticFeedbackManager, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::HapticFeedbackManager> ____hapticFeedbackManager;

  /// @brief Field _gamePause, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::IGamePause* ____gamePause;

  /// @brief Field _saberType, offset: 0x40, size: 0x4, def value: None
  ::GlobalNamespace::SaberType ____saberType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SliderHapticFeedbackInteractionEffect, ____hapticPreset) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderHapticFeedbackInteractionEffect, ____hapticFeedbackManager) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderHapticFeedbackInteractionEffect, ____gamePause) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderHapticFeedbackInteractionEffect, ____saberType) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SliderHapticFeedbackInteractionEffect, 0x48>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SliderHapticFeedbackInteractionEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SliderHapticFeedbackInteractionEffect*, "", "SliderHapticFeedbackInteractionEffect");
