#pragma once
// IWYU pragma private; include "GlobalNamespace/HeadsetHapticSettingsSampleController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(HeadsetHapticSettingsSampleController)
namespace GlobalNamespace {
class FormattedFloatListSettingsController;
}
namespace GlobalNamespace {
class HapticFeedbackManager;
}
namespace Libraries::HM::HMLib::VR {
class HapticPresetSO;
}
// Forward declare root types
namespace GlobalNamespace {
class HeadsetHapticSettingsSampleController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::HeadsetHapticSettingsSampleController);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: HeadsetHapticSettingsSampleController
class CORDL_TYPE HeadsetHapticSettingsSampleController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _formattedFloatListSettingsController, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__formattedFloatListSettingsController,
                      put = __cordl_internal_set__formattedFloatListSettingsController)) ::UnityW<::GlobalNamespace::FormattedFloatListSettingsController>
      _formattedFloatListSettingsController;

  /// @brief Field _hapticFeedbackManager, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__hapticFeedbackManager, put = __cordl_internal_set__hapticFeedbackManager)) ::UnityW<::GlobalNamespace::HapticFeedbackManager> _hapticFeedbackManager;

  /// @brief Field _hapticSampleDuration, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__hapticSampleDuration, put = __cordl_internal_set__hapticSampleDuration)) float_t _hapticSampleDuration;

  /// @brief Field _hapticSamplePlayDelay, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__hapticSamplePlayDelay, put = __cordl_internal_set__hapticSamplePlayDelay)) float_t _hapticSamplePlayDelay;

  /// @brief Field _headHapticPreset, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__headHapticPreset, put = __cordl_internal_set__headHapticPreset)) ::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO> _headHapticPreset;

  /// @brief Field _nextHapticSamplePlayTime, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__nextHapticSamplePlayTime, put = __cordl_internal_set__nextHapticSamplePlayTime)) float_t _nextHapticSamplePlayTime;

  /// @brief Field _nextHapticSamplePlayTimeEnd, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get__nextHapticSamplePlayTimeEnd, put = __cordl_internal_set__nextHapticSamplePlayTimeEnd)) float_t _nextHapticSamplePlayTimeEnd;

  /// @brief Method HandleHapticSettingValueDidChange, addr 0x3c136c0, size 0x50, virtual false, abstract: false, final false
  inline void HandleHapticSettingValueDidChange(::GlobalNamespace::FormattedFloatListSettingsController* controller, float_t newValue);

  static inline ::GlobalNamespace::HeadsetHapticSettingsSampleController* New_ctor();

  /// @brief Method OnDestroy, addr 0x3c1358c, size 0xcc, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method Start, addr 0x3c134f0, size 0x9c, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method Update, addr 0x3c13658, size 0x68, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::UnityW<::GlobalNamespace::FormattedFloatListSettingsController> const& __cordl_internal_get__formattedFloatListSettingsController() const;

  constexpr ::UnityW<::GlobalNamespace::FormattedFloatListSettingsController>& __cordl_internal_get__formattedFloatListSettingsController();

  constexpr ::UnityW<::GlobalNamespace::HapticFeedbackManager> const& __cordl_internal_get__hapticFeedbackManager() const;

  constexpr ::UnityW<::GlobalNamespace::HapticFeedbackManager>& __cordl_internal_get__hapticFeedbackManager();

  constexpr float_t const& __cordl_internal_get__hapticSampleDuration() const;

  constexpr float_t& __cordl_internal_get__hapticSampleDuration();

  constexpr float_t const& __cordl_internal_get__hapticSamplePlayDelay() const;

  constexpr float_t& __cordl_internal_get__hapticSamplePlayDelay();

  constexpr ::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO> const& __cordl_internal_get__headHapticPreset() const;

  constexpr ::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO>& __cordl_internal_get__headHapticPreset();

  constexpr float_t const& __cordl_internal_get__nextHapticSamplePlayTime() const;

  constexpr float_t& __cordl_internal_get__nextHapticSamplePlayTime();

  constexpr float_t const& __cordl_internal_get__nextHapticSamplePlayTimeEnd() const;

  constexpr float_t& __cordl_internal_get__nextHapticSamplePlayTimeEnd();

  constexpr void __cordl_internal_set__formattedFloatListSettingsController(::UnityW<::GlobalNamespace::FormattedFloatListSettingsController> value);

  constexpr void __cordl_internal_set__hapticFeedbackManager(::UnityW<::GlobalNamespace::HapticFeedbackManager> value);

  constexpr void __cordl_internal_set__hapticSampleDuration(float_t value);

  constexpr void __cordl_internal_set__hapticSamplePlayDelay(float_t value);

  constexpr void __cordl_internal_set__headHapticPreset(::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO> value);

  constexpr void __cordl_internal_set__nextHapticSamplePlayTime(float_t value);

  constexpr void __cordl_internal_set__nextHapticSamplePlayTimeEnd(float_t value);

  /// @brief Method .ctor, addr 0x3c13710, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HeadsetHapticSettingsSampleController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HeadsetHapticSettingsSampleController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HeadsetHapticSettingsSampleController(HeadsetHapticSettingsSampleController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HeadsetHapticSettingsSampleController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HeadsetHapticSettingsSampleController(HeadsetHapticSettingsSampleController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4864 };

  /// @brief Field _formattedFloatListSettingsController, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::FormattedFloatListSettingsController> ____formattedFloatListSettingsController;

  /// @brief Field _hapticSamplePlayDelay, offset: 0x28, size: 0x4, def value: None
  float_t ____hapticSamplePlayDelay;

  /// @brief Field _hapticSampleDuration, offset: 0x2c, size: 0x4, def value: None
  float_t ____hapticSampleDuration;

  /// @brief Field _headHapticPreset, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO> ____headHapticPreset;

  /// @brief Field _hapticFeedbackManager, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::HapticFeedbackManager> ____hapticFeedbackManager;

  /// @brief Field _nextHapticSamplePlayTime, offset: 0x40, size: 0x4, def value: None
  float_t ____nextHapticSamplePlayTime;

  /// @brief Field _nextHapticSamplePlayTimeEnd, offset: 0x44, size: 0x4, def value: None
  float_t ____nextHapticSamplePlayTimeEnd;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HeadsetHapticSettingsSampleController, ____formattedFloatListSettingsController) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HeadsetHapticSettingsSampleController, ____hapticSamplePlayDelay) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HeadsetHapticSettingsSampleController, ____hapticSampleDuration) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HeadsetHapticSettingsSampleController, ____headHapticPreset) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HeadsetHapticSettingsSampleController, ____hapticFeedbackManager) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HeadsetHapticSettingsSampleController, ____nextHapticSamplePlayTime) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HeadsetHapticSettingsSampleController, ____nextHapticSamplePlayTimeEnd) == 0x44, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::HeadsetHapticSettingsSampleController, 0x48>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::HeadsetHapticSettingsSampleController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::HeadsetHapticSettingsSampleController*, "", "HeadsetHapticSettingsSampleController");
