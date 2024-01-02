#pragma once
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
// Type: ::SliderHapticFeedbackInteractionEffect
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 60, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4819)), TypeDefinitionIndex(TypeDefinitionIndex(15036))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4813))
// CS Name: ::SliderHapticFeedbackInteractionEffect*
class CORDL_TYPE SliderHapticFeedbackInteractionEffect : public ::GlobalNamespace::SliderInteractionEffect {
public:
  // Declarations
  /// @brief Field _hapticPreset, offset 0x20, size 0x8
  __declspec(property(get = __get__hapticPreset, put = __set__hapticPreset))::Libraries::HM::HMLib::VR::HapticPresetSO* _hapticPreset;

  /// @brief Field _hapticFeedbackManager, offset 0x28, size 0x8
  __declspec(property(get = __get__hapticFeedbackManager, put = __set__hapticFeedbackManager))::GlobalNamespace::HapticFeedbackManager* _hapticFeedbackManager;

  /// @brief Field _gamePause, offset 0x30, size 0x8
  __declspec(property(get = __get__gamePause, put = __set__gamePause))::GlobalNamespace::IGamePause* _gamePause;

  /// @brief Field _saberType, offset 0x38, size 0x4
  __declspec(property(get = __get__saberType, put = __set__saberType))::GlobalNamespace::SaberType _saberType;

  constexpr ::Libraries::HM::HMLib::VR::HapticPresetSO*& __get__hapticPreset();

  constexpr ::cordl_internals::to_const_pointer<::Libraries::HM::HMLib::VR::HapticPresetSO*> const& __get__hapticPreset() const;

  constexpr void __set__hapticPreset(::Libraries::HM::HMLib::VR::HapticPresetSO* value);

  constexpr ::GlobalNamespace::HapticFeedbackManager*& __get__hapticFeedbackManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::HapticFeedbackManager*> const& __get__hapticFeedbackManager() const;

  constexpr void __set__hapticFeedbackManager(::GlobalNamespace::HapticFeedbackManager* value);

  constexpr ::GlobalNamespace::IGamePause*& __get__gamePause();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IGamePause*> const& __get__gamePause() const;

  constexpr void __set__gamePause(::GlobalNamespace::IGamePause* value);

  constexpr ::GlobalNamespace::SaberType& __get__saberType();

  constexpr ::GlobalNamespace::SaberType const& __get__saberType() const;

  constexpr void __set__saberType(::GlobalNamespace::SaberType value);

  /// @brief Method Start, addr 0x2392c34, size 0x40, virtual true, abstract: false, final false
  inline void Start();

  /// @brief Method Update, addr 0x2392d7c, size 0xd4, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method StartEffect, addr 0x2392eac, size 0x48, virtual true, abstract: false, final false
  inline void StartEffect(float_t saberInteractionParam);

  /// @brief Method EndEffect, addr 0x2392ef4, size 0xc, virtual true, abstract: false, final false
  inline void EndEffect();

  /// @brief Method Vibrate, addr 0x2392e6c, size 0x40, virtual false, abstract: false, final false
  inline void Vibrate();

  static inline ::GlobalNamespace::SliderHapticFeedbackInteractionEffect* New_ctor();

  /// @brief Method .ctor, addr 0x2392f00, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "SliderHapticFeedbackInteractionEffect", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SliderHapticFeedbackInteractionEffect(SliderHapticFeedbackInteractionEffect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SliderHapticFeedbackInteractionEffect", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SliderHapticFeedbackInteractionEffect(SliderHapticFeedbackInteractionEffect const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SliderHapticFeedbackInteractionEffect();

public:
  /// @brief Field _hapticPreset, offset: 0x20, size: 0x8, def value: None
  ::Libraries::HM::HMLib::VR::HapticPresetSO* ____hapticPreset;

  /// @brief Field _hapticFeedbackManager, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::HapticFeedbackManager* ____hapticFeedbackManager;

  /// @brief Field _gamePause, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::IGamePause* ____gamePause;

  /// @brief Field _saberType, offset: 0x38, size: 0x4, def value: None
  ::GlobalNamespace::SaberType ____saberType;

  /// @brief Field kVibrationSaberInteractionParamThreshold offset 0xffffffff size 0x4
  static constexpr float_t kVibrationSaberInteractionParamThreshold{ 0.2 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SliderHapticFeedbackInteractionEffect, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderHapticFeedbackInteractionEffect, ____hapticPreset) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderHapticFeedbackInteractionEffect, ____hapticFeedbackManager) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderHapticFeedbackInteractionEffect, ____gamePause) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderHapticFeedbackInteractionEffect, ____saberType) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SliderHapticFeedbackInteractionEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SliderHapticFeedbackInteractionEffect*, "", "SliderHapticFeedbackInteractionEffect");
