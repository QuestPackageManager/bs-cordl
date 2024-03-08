#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__InputSettings_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputSettings)
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace UnityEngine::InputSystem::Utilities {
template <typename TValue> struct ReadOnlyArray_1;
}
namespace UnityEngine::InputSystem {
struct __InputSettings__BackgroundBehavior;
}
namespace UnityEngine::InputSystem {
struct __InputSettings__EditorInputBehaviorInPlayMode;
}
namespace UnityEngine::InputSystem {
struct __InputSettings__UpdateMode;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
struct __InputSettings__BackgroundBehavior;
}
namespace UnityEngine::InputSystem {
struct __InputSettings__EditorInputBehaviorInPlayMode;
}
namespace UnityEngine::InputSystem {
struct __InputSettings__UpdateMode;
}
namespace UnityEngine::InputSystem {
class InputSettings;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::__InputSettings__BackgroundBehavior);
MARK_VAL_T(::UnityEngine::InputSystem::__InputSettings__EditorInputBehaviorInPlayMode);
MARK_VAL_T(::UnityEngine::InputSystem::__InputSettings__UpdateMode);
MARK_REF_PTR_T(::UnityEngine::InputSystem::InputSettings);
// Type: ::UpdateMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: true
// CS Name: ::InputSettings::UpdateMode
struct CORDL_TYPE __InputSettings__UpdateMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____InputSettings__UpdateMode_Unwrapped
  enum struct ____InputSettings__UpdateMode_Unwrapped : int32_t {
    __E_ProcessEventsInDynamicUpdate = static_cast<int32_t>(0x1),
    __E_ProcessEventsInFixedUpdate = static_cast<int32_t>(0x2),
    __E_ProcessEventsManually = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____InputSettings__UpdateMode_Unwrapped() const noexcept {
    return static_cast<____InputSettings__UpdateMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputSettings__UpdateMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __InputSettings__UpdateMode(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field ProcessEventsInDynamicUpdate value: static_cast<int32_t>(0x1)
  static ::UnityEngine::InputSystem::__InputSettings__UpdateMode const ProcessEventsInDynamicUpdate;

  /// @brief Field ProcessEventsInFixedUpdate value: static_cast<int32_t>(0x2)
  static ::UnityEngine::InputSystem::__InputSettings__UpdateMode const ProcessEventsInFixedUpdate;

  /// @brief Field ProcessEventsManually value: static_cast<int32_t>(0x3)
  static ::UnityEngine::InputSystem::__InputSettings__UpdateMode const ProcessEventsManually;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::__InputSettings__UpdateMode, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputSettings__UpdateMode, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::InputSystem
// Type: ::BackgroundBehavior
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: true
// CS Name: ::InputSettings::BackgroundBehavior
struct CORDL_TYPE __InputSettings__BackgroundBehavior {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____InputSettings__BackgroundBehavior_Unwrapped
  enum struct ____InputSettings__BackgroundBehavior_Unwrapped : int32_t {
    __E_ResetAndDisableNonBackgroundDevices = static_cast<int32_t>(0x0),
    __E_ResetAndDisableAllDevices = static_cast<int32_t>(0x1),
    __E_IgnoreFocus = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____InputSettings__BackgroundBehavior_Unwrapped() const noexcept {
    return static_cast<____InputSettings__BackgroundBehavior_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputSettings__BackgroundBehavior();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __InputSettings__BackgroundBehavior(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field IgnoreFocus value: static_cast<int32_t>(0x2)
  static ::UnityEngine::InputSystem::__InputSettings__BackgroundBehavior const IgnoreFocus;

  /// @brief Field ResetAndDisableAllDevices value: static_cast<int32_t>(0x1)
  static ::UnityEngine::InputSystem::__InputSettings__BackgroundBehavior const ResetAndDisableAllDevices;

  /// @brief Field ResetAndDisableNonBackgroundDevices value: static_cast<int32_t>(0x0)
  static ::UnityEngine::InputSystem::__InputSettings__BackgroundBehavior const ResetAndDisableNonBackgroundDevices;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::__InputSettings__BackgroundBehavior, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputSettings__BackgroundBehavior, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::InputSystem
// Type: ::EditorInputBehaviorInPlayMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: true
// CS Name: ::InputSettings::EditorInputBehaviorInPlayMode
struct CORDL_TYPE __InputSettings__EditorInputBehaviorInPlayMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____InputSettings__EditorInputBehaviorInPlayMode_Unwrapped
  enum struct ____InputSettings__EditorInputBehaviorInPlayMode_Unwrapped : int32_t {
    __E_PointersAndKeyboardsRespectGameViewFocus = static_cast<int32_t>(0x0),
    __E_AllDevicesRespectGameViewFocus = static_cast<int32_t>(0x1),
    __E_AllDeviceInputAlwaysGoesToGameView = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____InputSettings__EditorInputBehaviorInPlayMode_Unwrapped() const noexcept {
    return static_cast<____InputSettings__EditorInputBehaviorInPlayMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputSettings__EditorInputBehaviorInPlayMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __InputSettings__EditorInputBehaviorInPlayMode(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field AllDeviceInputAlwaysGoesToGameView value: static_cast<int32_t>(0x2)
  static ::UnityEngine::InputSystem::__InputSettings__EditorInputBehaviorInPlayMode const AllDeviceInputAlwaysGoesToGameView;

  /// @brief Field AllDevicesRespectGameViewFocus value: static_cast<int32_t>(0x1)
  static ::UnityEngine::InputSystem::__InputSettings__EditorInputBehaviorInPlayMode const AllDevicesRespectGameViewFocus;

  /// @brief Field PointersAndKeyboardsRespectGameViewFocus value: static_cast<int32_t>(0x0)
  static ::UnityEngine::InputSystem::__InputSettings__EditorInputBehaviorInPlayMode const PointersAndKeyboardsRespectGameViewFocus;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::__InputSettings__EditorInputBehaviorInPlayMode, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputSettings__EditorInputBehaviorInPlayMode, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::InputSystem
// Type: UnityEngine.InputSystem::InputSettings
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: ::UnityEngine.InputSystem::InputSettings*
class CORDL_TYPE InputSettings : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  using BackgroundBehavior = ::UnityEngine::InputSystem::__InputSettings__BackgroundBehavior;

  using EditorInputBehaviorInPlayMode = ::UnityEngine::InputSystem::__InputSettings__EditorInputBehaviorInPlayMode;

  using UpdateMode = ::UnityEngine::InputSystem::__InputSettings__UpdateMode;

  __declspec(property(get = get_backgroundBehavior, put = set_backgroundBehavior))::UnityEngine::InputSystem::__InputSettings__BackgroundBehavior backgroundBehavior;

  __declspec(property(get = get_buttonReleaseThreshold, put = set_buttonReleaseThreshold)) float_t buttonReleaseThreshold;

  __declspec(property(get = get_compensateForScreenOrientation, put = set_compensateForScreenOrientation)) bool compensateForScreenOrientation;

  __declspec(property(get = get_defaultButtonPressPoint, put = set_defaultButtonPressPoint)) float_t defaultButtonPressPoint;

  __declspec(property(get = get_defaultDeadzoneMax, put = set_defaultDeadzoneMax)) float_t defaultDeadzoneMax;

  __declspec(property(get = get_defaultDeadzoneMin, put = set_defaultDeadzoneMin)) float_t defaultDeadzoneMin;

  __declspec(property(get = get_defaultHoldTime, put = set_defaultHoldTime)) float_t defaultHoldTime;

  __declspec(property(get = get_defaultSlowTapTime, put = set_defaultSlowTapTime)) float_t defaultSlowTapTime;

  __declspec(property(get = get_defaultTapTime, put = set_defaultTapTime)) float_t defaultTapTime;

  __declspec(property(get = get_disableRedundantEventsMerging, put = set_disableRedundantEventsMerging)) bool disableRedundantEventsMerging;

  __declspec(property(get = get_editorInputBehaviorInPlayMode,
                      put = set_editorInputBehaviorInPlayMode))::UnityEngine::InputSystem::__InputSettings__EditorInputBehaviorInPlayMode editorInputBehaviorInPlayMode;

  __declspec(property(get = get_filterNoiseOnCurrent, put = set_filterNoiseOnCurrent)) bool filterNoiseOnCurrent;

  /// @brief Field m_BackgroundBehavior, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_m_BackgroundBehavior,
                      put = __cordl_internal_set_m_BackgroundBehavior))::UnityEngine::InputSystem::__InputSettings__BackgroundBehavior m_BackgroundBehavior;

  /// @brief Field m_ButtonReleaseThreshold, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ButtonReleaseThreshold, put = __cordl_internal_set_m_ButtonReleaseThreshold)) float_t m_ButtonReleaseThreshold;

  /// @brief Field m_CompensateForScreenOrientation, offset 0x2c, size 0x1
  __declspec(property(get = __cordl_internal_get_m_CompensateForScreenOrientation, put = __cordl_internal_set_m_CompensateForScreenOrientation)) bool m_CompensateForScreenOrientation;

  /// @brief Field m_DefaultButtonPressPoint, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_m_DefaultButtonPressPoint, put = __cordl_internal_set_m_DefaultButtonPressPoint)) float_t m_DefaultButtonPressPoint;

  /// @brief Field m_DefaultDeadzoneMax, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_DefaultDeadzoneMax, put = __cordl_internal_set_m_DefaultDeadzoneMax)) float_t m_DefaultDeadzoneMax;

  /// @brief Field m_DefaultDeadzoneMin, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_m_DefaultDeadzoneMin, put = __cordl_internal_set_m_DefaultDeadzoneMin)) float_t m_DefaultDeadzoneMin;

  /// @brief Field m_DefaultHoldTime, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get_m_DefaultHoldTime, put = __cordl_internal_set_m_DefaultHoldTime)) float_t m_DefaultHoldTime;

  /// @brief Field m_DefaultSlowTapTime, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_DefaultSlowTapTime, put = __cordl_internal_set_m_DefaultSlowTapTime)) float_t m_DefaultSlowTapTime;

  /// @brief Field m_DefaultTapTime, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_m_DefaultTapTime, put = __cordl_internal_set_m_DefaultTapTime)) float_t m_DefaultTapTime;

  /// @brief Field m_DisableRedundantEventsMerging, offset 0x5c, size 0x1
  __declspec(property(get = __cordl_internal_get_m_DisableRedundantEventsMerging, put = __cordl_internal_set_m_DisableRedundantEventsMerging)) bool m_DisableRedundantEventsMerging;

  /// @brief Field m_EditorInputBehaviorInPlayMode, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_m_EditorInputBehaviorInPlayMode,
                      put = __cordl_internal_set_m_EditorInputBehaviorInPlayMode))::UnityEngine::InputSystem::__InputSettings__EditorInputBehaviorInPlayMode m_EditorInputBehaviorInPlayMode;

  /// @brief Field m_FeatureFlags, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_m_FeatureFlags, put = __cordl_internal_set_m_FeatureFlags))::System::Collections::Generic::HashSet_1<::StringW>* m_FeatureFlags;

  /// @brief Field m_MaxEventBytesPerUpdate, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MaxEventBytesPerUpdate, put = __cordl_internal_set_m_MaxEventBytesPerUpdate)) int32_t m_MaxEventBytesPerUpdate;

  /// @brief Field m_MaxQueuedEventsPerUpdate, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MaxQueuedEventsPerUpdate, put = __cordl_internal_set_m_MaxQueuedEventsPerUpdate)) int32_t m_MaxQueuedEventsPerUpdate;

  /// @brief Field m_MultiTapDelayTime, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MultiTapDelayTime, put = __cordl_internal_set_m_MultiTapDelayTime)) float_t m_MultiTapDelayTime;

  /// @brief Field m_ShortcutKeysConsumeInputs, offset 0x5d, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ShortcutKeysConsumeInputs, put = __cordl_internal_set_m_ShortcutKeysConsumeInputs)) bool m_ShortcutKeysConsumeInputs;

  /// @brief Field m_SupportedDevices, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SupportedDevices, put = __cordl_internal_set_m_SupportedDevices))::ArrayW<::StringW, ::Array<::StringW>*> m_SupportedDevices;

  /// @brief Field m_TapRadius, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get_m_TapRadius, put = __cordl_internal_set_m_TapRadius)) float_t m_TapRadius;

  /// @brief Field m_UpdateMode, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_m_UpdateMode, put = __cordl_internal_set_m_UpdateMode))::UnityEngine::InputSystem::__InputSettings__UpdateMode m_UpdateMode;

  __declspec(property(get = get_maxEventBytesPerUpdate, put = set_maxEventBytesPerUpdate)) int32_t maxEventBytesPerUpdate;

  __declspec(property(get = get_maxQueuedEventsPerUpdate, put = set_maxQueuedEventsPerUpdate)) int32_t maxQueuedEventsPerUpdate;

  __declspec(property(get = get_multiTapDelayTime, put = set_multiTapDelayTime)) float_t multiTapDelayTime;

  __declspec(property(get = get_supportedDevices, put = set_supportedDevices))::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::StringW> supportedDevices;

  __declspec(property(get = get_tapRadius, put = set_tapRadius)) float_t tapRadius;

  __declspec(property(get = get_updateMode, put = set_updateMode))::UnityEngine::InputSystem::__InputSettings__UpdateMode updateMode;

  /// @brief Method IsFeatureEnabled, addr 0x2bff7f0, size 0xc0, virtual false, abstract: false, final false
  inline bool IsFeatureEnabled(::StringW featureName);

  static inline ::UnityEngine::InputSystem::InputSettings* New_ctor();

  /// @brief Method OnChange, addr 0x2bff1f0, size 0xcc, virtual false, abstract: false, final false
  inline void OnChange();

  /// @brief Method SetInternalFeatureFlag, addr 0x2bff650, size 0x1a0, virtual false, abstract: false, final false
  inline void SetInternalFeatureFlag(::StringW featureName, bool enabled);

  constexpr ::UnityEngine::InputSystem::__InputSettings__BackgroundBehavior const& __cordl_internal_get_m_BackgroundBehavior() const;

  constexpr ::UnityEngine::InputSystem::__InputSettings__BackgroundBehavior& __cordl_internal_get_m_BackgroundBehavior();

  constexpr float_t const& __cordl_internal_get_m_ButtonReleaseThreshold() const;

  constexpr float_t& __cordl_internal_get_m_ButtonReleaseThreshold();

  constexpr bool const& __cordl_internal_get_m_CompensateForScreenOrientation() const;

  constexpr bool& __cordl_internal_get_m_CompensateForScreenOrientation();

  constexpr float_t const& __cordl_internal_get_m_DefaultButtonPressPoint() const;

  constexpr float_t& __cordl_internal_get_m_DefaultButtonPressPoint();

  constexpr float_t const& __cordl_internal_get_m_DefaultDeadzoneMax() const;

  constexpr float_t& __cordl_internal_get_m_DefaultDeadzoneMax();

  constexpr float_t const& __cordl_internal_get_m_DefaultDeadzoneMin() const;

  constexpr float_t& __cordl_internal_get_m_DefaultDeadzoneMin();

  constexpr float_t const& __cordl_internal_get_m_DefaultHoldTime() const;

  constexpr float_t& __cordl_internal_get_m_DefaultHoldTime();

  constexpr float_t const& __cordl_internal_get_m_DefaultSlowTapTime() const;

  constexpr float_t& __cordl_internal_get_m_DefaultSlowTapTime();

  constexpr float_t const& __cordl_internal_get_m_DefaultTapTime() const;

  constexpr float_t& __cordl_internal_get_m_DefaultTapTime();

  constexpr bool const& __cordl_internal_get_m_DisableRedundantEventsMerging() const;

  constexpr bool& __cordl_internal_get_m_DisableRedundantEventsMerging();

  constexpr ::UnityEngine::InputSystem::__InputSettings__EditorInputBehaviorInPlayMode const& __cordl_internal_get_m_EditorInputBehaviorInPlayMode() const;

  constexpr ::UnityEngine::InputSystem::__InputSettings__EditorInputBehaviorInPlayMode& __cordl_internal_get_m_EditorInputBehaviorInPlayMode();

  constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& __cordl_internal_get_m_FeatureFlags();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::StringW>*> const& __cordl_internal_get_m_FeatureFlags() const;

  constexpr int32_t const& __cordl_internal_get_m_MaxEventBytesPerUpdate() const;

  constexpr int32_t& __cordl_internal_get_m_MaxEventBytesPerUpdate();

  constexpr int32_t const& __cordl_internal_get_m_MaxQueuedEventsPerUpdate() const;

  constexpr int32_t& __cordl_internal_get_m_MaxQueuedEventsPerUpdate();

  constexpr float_t const& __cordl_internal_get_m_MultiTapDelayTime() const;

  constexpr float_t& __cordl_internal_get_m_MultiTapDelayTime();

  constexpr bool const& __cordl_internal_get_m_ShortcutKeysConsumeInputs() const;

  constexpr bool& __cordl_internal_get_m_ShortcutKeysConsumeInputs();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_m_SupportedDevices() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_m_SupportedDevices();

  constexpr float_t const& __cordl_internal_get_m_TapRadius() const;

  constexpr float_t& __cordl_internal_get_m_TapRadius();

  constexpr ::UnityEngine::InputSystem::__InputSettings__UpdateMode const& __cordl_internal_get_m_UpdateMode() const;

  constexpr ::UnityEngine::InputSystem::__InputSettings__UpdateMode& __cordl_internal_get_m_UpdateMode();

  constexpr void __cordl_internal_set_m_BackgroundBehavior(::UnityEngine::InputSystem::__InputSettings__BackgroundBehavior value);

  constexpr void __cordl_internal_set_m_ButtonReleaseThreshold(float_t value);

  constexpr void __cordl_internal_set_m_CompensateForScreenOrientation(bool value);

  constexpr void __cordl_internal_set_m_DefaultButtonPressPoint(float_t value);

  constexpr void __cordl_internal_set_m_DefaultDeadzoneMax(float_t value);

  constexpr void __cordl_internal_set_m_DefaultDeadzoneMin(float_t value);

  constexpr void __cordl_internal_set_m_DefaultHoldTime(float_t value);

  constexpr void __cordl_internal_set_m_DefaultSlowTapTime(float_t value);

  constexpr void __cordl_internal_set_m_DefaultTapTime(float_t value);

  constexpr void __cordl_internal_set_m_DisableRedundantEventsMerging(bool value);

  constexpr void __cordl_internal_set_m_EditorInputBehaviorInPlayMode(::UnityEngine::InputSystem::__InputSettings__EditorInputBehaviorInPlayMode value);

  constexpr void __cordl_internal_set_m_FeatureFlags(::System::Collections::Generic::HashSet_1<::StringW>* value);

  constexpr void __cordl_internal_set_m_MaxEventBytesPerUpdate(int32_t value);

  constexpr void __cordl_internal_set_m_MaxQueuedEventsPerUpdate(int32_t value);

  constexpr void __cordl_internal_set_m_MultiTapDelayTime(float_t value);

  constexpr void __cordl_internal_set_m_ShortcutKeysConsumeInputs(bool value);

  constexpr void __cordl_internal_set_m_SupportedDevices(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set_m_TapRadius(float_t value);

  constexpr void __cordl_internal_set_m_UpdateMode(::UnityEngine::InputSystem::__InputSettings__UpdateMode value);

  /// @brief Method .ctor, addr 0x2bff8b0, size 0x44, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_backgroundBehavior, addr 0x2bff428, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::__InputSettings__BackgroundBehavior get_backgroundBehavior();

  /// @brief Method get_buttonReleaseThreshold, addr 0x2bff368, size 0x8, virtual false, abstract: false, final false
  inline float_t get_buttonReleaseThreshold();

  /// @brief Method get_compensateForScreenOrientation, addr 0x2bff2bc, size 0x8, virtual false, abstract: false, final false
  inline bool get_compensateForScreenOrientation();

  /// @brief Method get_defaultButtonPressPoint, addr 0x2bff32c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_defaultButtonPressPoint();

  /// @brief Method get_defaultDeadzoneMax, addr 0x2bff30c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_defaultDeadzoneMax();

  /// @brief Method get_defaultDeadzoneMin, addr 0x2bff2ec, size 0x8, virtual false, abstract: false, final false
  inline float_t get_defaultDeadzoneMin();

  /// @brief Method get_defaultHoldTime, addr 0x2bff3c8, size 0x8, virtual false, abstract: false, final false
  inline float_t get_defaultHoldTime();

  /// @brief Method get_defaultSlowTapTime, addr 0x2bff3a8, size 0x8, virtual false, abstract: false, final false
  inline float_t get_defaultSlowTapTime();

  /// @brief Method get_defaultTapTime, addr 0x2bff388, size 0x8, virtual false, abstract: false, final false
  inline float_t get_defaultTapTime();

  /// @brief Method get_disableRedundantEventsMerging, addr 0x2bff62c, size 0x8, virtual false, abstract: false, final false
  inline bool get_disableRedundantEventsMerging();

  /// @brief Method get_editorInputBehaviorInPlayMode, addr 0x2bff448, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::__InputSettings__EditorInputBehaviorInPlayMode get_editorInputBehaviorInPlayMode();

  /// @brief Method get_filterNoiseOnCurrent, addr 0x2bff2e0, size 0x8, virtual false, abstract: false, final false
  inline bool get_filterNoiseOnCurrent();

  /// @brief Method get_maxEventBytesPerUpdate, addr 0x2bff468, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_maxEventBytesPerUpdate();

  /// @brief Method get_maxQueuedEventsPerUpdate, addr 0x2bff488, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_maxQueuedEventsPerUpdate();

  /// @brief Method get_multiTapDelayTime, addr 0x2bff408, size 0x8, virtual false, abstract: false, final false
  inline float_t get_multiTapDelayTime();

  /// @brief Method get_supportedDevices, addr 0x2bff4a8, size 0x60, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::StringW> get_supportedDevices();

  /// @brief Method get_tapRadius, addr 0x2bff3e8, size 0x8, virtual false, abstract: false, final false
  inline float_t get_tapRadius();

  /// @brief Method get_updateMode, addr 0x2bff1d0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::__InputSettings__UpdateMode get_updateMode();

  /// @brief Method set_backgroundBehavior, addr 0x2bff430, size 0x18, virtual false, abstract: false, final false
  inline void set_backgroundBehavior(::UnityEngine::InputSystem::__InputSettings__BackgroundBehavior value);

  /// @brief Method set_buttonReleaseThreshold, addr 0x2bff370, size 0x18, virtual false, abstract: false, final false
  inline void set_buttonReleaseThreshold(float_t value);

  /// @brief Method set_compensateForScreenOrientation, addr 0x2bff2c4, size 0x1c, virtual false, abstract: false, final false
  inline void set_compensateForScreenOrientation(bool value);

  /// @brief Method set_defaultButtonPressPoint, addr 0x2bff334, size 0x34, virtual false, abstract: false, final false
  inline void set_defaultButtonPressPoint(float_t value);

  /// @brief Method set_defaultDeadzoneMax, addr 0x2bff314, size 0x18, virtual false, abstract: false, final false
  inline void set_defaultDeadzoneMax(float_t value);

  /// @brief Method set_defaultDeadzoneMin, addr 0x2bff2f4, size 0x18, virtual false, abstract: false, final false
  inline void set_defaultDeadzoneMin(float_t value);

  /// @brief Method set_defaultHoldTime, addr 0x2bff3d0, size 0x18, virtual false, abstract: false, final false
  inline void set_defaultHoldTime(float_t value);

  /// @brief Method set_defaultSlowTapTime, addr 0x2bff3b0, size 0x18, virtual false, abstract: false, final false
  inline void set_defaultSlowTapTime(float_t value);

  /// @brief Method set_defaultTapTime, addr 0x2bff390, size 0x18, virtual false, abstract: false, final false
  inline void set_defaultTapTime(float_t value);

  /// @brief Method set_disableRedundantEventsMerging, addr 0x2bff634, size 0x1c, virtual false, abstract: false, final false
  inline void set_disableRedundantEventsMerging(bool value);

  /// @brief Method set_editorInputBehaviorInPlayMode, addr 0x2bff450, size 0x18, virtual false, abstract: false, final false
  inline void set_editorInputBehaviorInPlayMode(::UnityEngine::InputSystem::__InputSettings__EditorInputBehaviorInPlayMode value);

  /// @brief Method set_filterNoiseOnCurrent, addr 0x2bff2e8, size 0x4, virtual false, abstract: false, final false
  inline void set_filterNoiseOnCurrent(bool value);

  /// @brief Method set_maxEventBytesPerUpdate, addr 0x2bff470, size 0x18, virtual false, abstract: false, final false
  inline void set_maxEventBytesPerUpdate(int32_t value);

  /// @brief Method set_maxQueuedEventsPerUpdate, addr 0x2bff490, size 0x18, virtual false, abstract: false, final false
  inline void set_maxQueuedEventsPerUpdate(int32_t value);

  /// @brief Method set_multiTapDelayTime, addr 0x2bff410, size 0x18, virtual false, abstract: false, final false
  inline void set_multiTapDelayTime(float_t value);

  /// @brief Method set_supportedDevices, addr 0x2bff508, size 0x124, virtual false, abstract: false, final false
  inline void set_supportedDevices(::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::StringW> value);

  /// @brief Method set_tapRadius, addr 0x2bff3f0, size 0x18, virtual false, abstract: false, final false
  inline void set_tapRadius(float_t value);

  /// @brief Method set_updateMode, addr 0x2bff1d8, size 0x18, virtual false, abstract: false, final false
  inline void set_updateMode(::UnityEngine::InputSystem::__InputSettings__UpdateMode value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InputSettings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InputSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InputSettings(InputSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InputSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InputSettings(InputSettings const&) = delete;

  /// @brief Field m_SupportedDevices, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___m_SupportedDevices;

  /// @brief Field m_UpdateMode, offset: 0x20, size: 0x4, def value: None
  ::UnityEngine::InputSystem::__InputSettings__UpdateMode ___m_UpdateMode;

  /// @brief Field m_MaxEventBytesPerUpdate, offset: 0x24, size: 0x4, def value: None
  int32_t ___m_MaxEventBytesPerUpdate;

  /// @brief Field m_MaxQueuedEventsPerUpdate, offset: 0x28, size: 0x4, def value: None
  int32_t ___m_MaxQueuedEventsPerUpdate;

  /// @brief Field m_CompensateForScreenOrientation, offset: 0x2c, size: 0x1, def value: None
  bool ___m_CompensateForScreenOrientation;

  /// @brief Field m_BackgroundBehavior, offset: 0x30, size: 0x4, def value: None
  ::UnityEngine::InputSystem::__InputSettings__BackgroundBehavior ___m_BackgroundBehavior;

  /// @brief Field m_EditorInputBehaviorInPlayMode, offset: 0x34, size: 0x4, def value: None
  ::UnityEngine::InputSystem::__InputSettings__EditorInputBehaviorInPlayMode ___m_EditorInputBehaviorInPlayMode;

  /// @brief Field m_DefaultDeadzoneMin, offset: 0x38, size: 0x4, def value: None
  float_t ___m_DefaultDeadzoneMin;

  /// @brief Field m_DefaultDeadzoneMax, offset: 0x3c, size: 0x4, def value: None
  float_t ___m_DefaultDeadzoneMax;

  /// @brief Field m_DefaultButtonPressPoint, offset: 0x40, size: 0x4, def value: None
  float_t ___m_DefaultButtonPressPoint;

  /// @brief Field m_ButtonReleaseThreshold, offset: 0x44, size: 0x4, def value: None
  float_t ___m_ButtonReleaseThreshold;

  /// @brief Field m_DefaultTapTime, offset: 0x48, size: 0x4, def value: None
  float_t ___m_DefaultTapTime;

  /// @brief Field m_DefaultSlowTapTime, offset: 0x4c, size: 0x4, def value: None
  float_t ___m_DefaultSlowTapTime;

  /// @brief Field m_DefaultHoldTime, offset: 0x50, size: 0x4, def value: None
  float_t ___m_DefaultHoldTime;

  /// @brief Field m_TapRadius, offset: 0x54, size: 0x4, def value: None
  float_t ___m_TapRadius;

  /// @brief Field m_MultiTapDelayTime, offset: 0x58, size: 0x4, def value: None
  float_t ___m_MultiTapDelayTime;

  /// @brief Field m_DisableRedundantEventsMerging, offset: 0x5c, size: 0x1, def value: None
  bool ___m_DisableRedundantEventsMerging;

  /// @brief Field m_ShortcutKeysConsumeInputs, offset: 0x5d, size: 0x1, def value: None
  bool ___m_ShortcutKeysConsumeInputs;

  /// @brief Field m_FeatureFlags, offset: 0x60, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::StringW>* ___m_FeatureFlags;

  /// @brief Field s_OldUnsupportedFixedAndDynamicUpdateSetting offset 0xffffffff size 0x4
  static constexpr int32_t s_OldUnsupportedFixedAndDynamicUpdateSetting{ static_cast<int32_t>(0x0) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::InputSettings, 0x68>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputSettings, ___m_SupportedDevices) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputSettings, ___m_UpdateMode) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputSettings, ___m_MaxEventBytesPerUpdate) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputSettings, ___m_MaxQueuedEventsPerUpdate) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputSettings, ___m_CompensateForScreenOrientation) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputSettings, ___m_BackgroundBehavior) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputSettings, ___m_EditorInputBehaviorInPlayMode) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputSettings, ___m_DefaultDeadzoneMin) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputSettings, ___m_DefaultDeadzoneMax) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputSettings, ___m_DefaultButtonPressPoint) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputSettings, ___m_ButtonReleaseThreshold) == 0x44, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputSettings, ___m_DefaultTapTime) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputSettings, ___m_DefaultSlowTapTime) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputSettings, ___m_DefaultHoldTime) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputSettings, ___m_TapRadius) == 0x54, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputSettings, ___m_MultiTapDelayTime) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputSettings, ___m_DisableRedundantEventsMerging) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputSettings, ___m_ShortcutKeysConsumeInputs) == 0x5d, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputSettings, ___m_FeatureFlags) == 0x60, "Offset mismatch!");

} // namespace UnityEngine::InputSystem
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::__InputSettings__BackgroundBehavior, "UnityEngine.InputSystem", "InputSettings/BackgroundBehavior");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::__InputSettings__EditorInputBehaviorInPlayMode, "UnityEngine.InputSystem", "InputSettings/EditorInputBehaviorInPlayMode");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::__InputSettings__UpdateMode, "UnityEngine.InputSystem", "InputSettings/UpdateMode");
NEED_NO_BOX(::UnityEngine::InputSystem::InputSettings);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputSettings*, "UnityEngine.InputSystem", "InputSettings");
