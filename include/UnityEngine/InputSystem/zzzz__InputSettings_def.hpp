#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputSettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
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
struct InputSettings_BackgroundBehavior;
}
namespace UnityEngine::InputSystem {
struct InputSettings_EditorInputBehaviorInPlayMode;
}
namespace UnityEngine::InputSystem {
struct InputSettings_InputActionPropertyDrawerMode;
}
namespace UnityEngine::InputSystem {
struct InputSettings_ScrollDeltaBehavior;
}
namespace UnityEngine::InputSystem {
struct InputSettings_UpdateMode;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
struct InputSettings_BackgroundBehavior;
}
namespace UnityEngine::InputSystem {
struct InputSettings_EditorInputBehaviorInPlayMode;
}
namespace UnityEngine::InputSystem {
struct InputSettings_InputActionPropertyDrawerMode;
}
namespace UnityEngine::InputSystem {
struct InputSettings_ScrollDeltaBehavior;
}
namespace UnityEngine::InputSystem {
struct InputSettings_UpdateMode;
}
namespace UnityEngine::InputSystem {
class InputSettings;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::InputSettings_BackgroundBehavior);
MARK_VAL_T(::UnityEngine::InputSystem::InputSettings_EditorInputBehaviorInPlayMode);
MARK_VAL_T(::UnityEngine::InputSystem::InputSettings_InputActionPropertyDrawerMode);
MARK_VAL_T(::UnityEngine::InputSystem::InputSettings_ScrollDeltaBehavior);
MARK_VAL_T(::UnityEngine::InputSystem::InputSettings_UpdateMode);
MARK_REF_PTR_T(::UnityEngine::InputSystem::InputSettings);
// Dependencies
namespace UnityEngine::InputSystem {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputSettings/UpdateMode
struct CORDL_TYPE InputSettings_UpdateMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __InputSettings_UpdateMode_Unwrapped
  enum struct __InputSettings_UpdateMode_Unwrapped : int32_t {
    __E_ProcessEventsInDynamicUpdate = static_cast<int32_t>(0x1),
    __E_ProcessEventsInFixedUpdate = static_cast<int32_t>(0x2),
    __E_ProcessEventsManually = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __InputSettings_UpdateMode_Unwrapped() const noexcept {
    return static_cast<__InputSettings_UpdateMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr InputSettings_UpdateMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr InputSettings_UpdateMode(int32_t value__) noexcept;

  /// @brief Field ProcessEventsInDynamicUpdate value: I32(1)
  static ::UnityEngine::InputSystem::InputSettings_UpdateMode const ProcessEventsInDynamicUpdate;

  /// @brief Field ProcessEventsInFixedUpdate value: I32(2)
  static ::UnityEngine::InputSystem::InputSettings_UpdateMode const ProcessEventsInFixedUpdate;

  /// @brief Field ProcessEventsManually value: I32(3)
  static ::UnityEngine::InputSystem::InputSettings_UpdateMode const ProcessEventsManually;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8767 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::InputSettings_UpdateMode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::InputSettings_UpdateMode, 0x4>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
// Dependencies
namespace UnityEngine::InputSystem {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputSettings/ScrollDeltaBehavior
struct CORDL_TYPE InputSettings_ScrollDeltaBehavior {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __InputSettings_ScrollDeltaBehavior_Unwrapped
  enum struct __InputSettings_ScrollDeltaBehavior_Unwrapped : int32_t {
    __E_UniformAcrossAllPlatforms = static_cast<int32_t>(0x0),
    __E_KeepPlatformSpecificInputRange = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __InputSettings_ScrollDeltaBehavior_Unwrapped() const noexcept {
    return static_cast<__InputSettings_ScrollDeltaBehavior_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr InputSettings_ScrollDeltaBehavior();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr InputSettings_ScrollDeltaBehavior(int32_t value__) noexcept;

  /// @brief Field KeepPlatformSpecificInputRange value: I32(1)
  static ::UnityEngine::InputSystem::InputSettings_ScrollDeltaBehavior const KeepPlatformSpecificInputRange;

  /// @brief Field UniformAcrossAllPlatforms value: I32(0)
  static ::UnityEngine::InputSystem::InputSettings_ScrollDeltaBehavior const UniformAcrossAllPlatforms;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8768 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::InputSettings_ScrollDeltaBehavior, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::InputSettings_ScrollDeltaBehavior, 0x4>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
// Dependencies
namespace UnityEngine::InputSystem {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputSettings/BackgroundBehavior
struct CORDL_TYPE InputSettings_BackgroundBehavior {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __InputSettings_BackgroundBehavior_Unwrapped
  enum struct __InputSettings_BackgroundBehavior_Unwrapped : int32_t {
    __E_ResetAndDisableNonBackgroundDevices = static_cast<int32_t>(0x0),
    __E_ResetAndDisableAllDevices = static_cast<int32_t>(0x1),
    __E_IgnoreFocus = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __InputSettings_BackgroundBehavior_Unwrapped() const noexcept {
    return static_cast<__InputSettings_BackgroundBehavior_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr InputSettings_BackgroundBehavior();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr InputSettings_BackgroundBehavior(int32_t value__) noexcept;

  /// @brief Field IgnoreFocus value: I32(2)
  static ::UnityEngine::InputSystem::InputSettings_BackgroundBehavior const IgnoreFocus;

  /// @brief Field ResetAndDisableAllDevices value: I32(1)
  static ::UnityEngine::InputSystem::InputSettings_BackgroundBehavior const ResetAndDisableAllDevices;

  /// @brief Field ResetAndDisableNonBackgroundDevices value: I32(0)
  static ::UnityEngine::InputSystem::InputSettings_BackgroundBehavior const ResetAndDisableNonBackgroundDevices;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8769 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::InputSettings_BackgroundBehavior, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::InputSettings_BackgroundBehavior, 0x4>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
// Dependencies
namespace UnityEngine::InputSystem {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputSettings/EditorInputBehaviorInPlayMode
struct CORDL_TYPE InputSettings_EditorInputBehaviorInPlayMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __InputSettings_EditorInputBehaviorInPlayMode_Unwrapped
  enum struct __InputSettings_EditorInputBehaviorInPlayMode_Unwrapped : int32_t {
    __E_PointersAndKeyboardsRespectGameViewFocus = static_cast<int32_t>(0x0),
    __E_AllDevicesRespectGameViewFocus = static_cast<int32_t>(0x1),
    __E_AllDeviceInputAlwaysGoesToGameView = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __InputSettings_EditorInputBehaviorInPlayMode_Unwrapped() const noexcept {
    return static_cast<__InputSettings_EditorInputBehaviorInPlayMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr InputSettings_EditorInputBehaviorInPlayMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr InputSettings_EditorInputBehaviorInPlayMode(int32_t value__) noexcept;

  /// @brief Field AllDeviceInputAlwaysGoesToGameView value: I32(2)
  static ::UnityEngine::InputSystem::InputSettings_EditorInputBehaviorInPlayMode const AllDeviceInputAlwaysGoesToGameView;

  /// @brief Field AllDevicesRespectGameViewFocus value: I32(1)
  static ::UnityEngine::InputSystem::InputSettings_EditorInputBehaviorInPlayMode const AllDevicesRespectGameViewFocus;

  /// @brief Field PointersAndKeyboardsRespectGameViewFocus value: I32(0)
  static ::UnityEngine::InputSystem::InputSettings_EditorInputBehaviorInPlayMode const PointersAndKeyboardsRespectGameViewFocus;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8770 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::InputSettings_EditorInputBehaviorInPlayMode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::InputSettings_EditorInputBehaviorInPlayMode, 0x4>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
// Dependencies
namespace UnityEngine::InputSystem {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputSettings/InputActionPropertyDrawerMode
struct CORDL_TYPE InputSettings_InputActionPropertyDrawerMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __InputSettings_InputActionPropertyDrawerMode_Unwrapped
  enum struct __InputSettings_InputActionPropertyDrawerMode_Unwrapped : int32_t {
    __E_Compact = static_cast<int32_t>(0x0),
    __E_MultilineEffective = static_cast<int32_t>(0x1),
    __E_MultilineBoth = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __InputSettings_InputActionPropertyDrawerMode_Unwrapped() const noexcept {
    return static_cast<__InputSettings_InputActionPropertyDrawerMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr InputSettings_InputActionPropertyDrawerMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr InputSettings_InputActionPropertyDrawerMode(int32_t value__) noexcept;

  /// @brief Field Compact value: I32(0)
  static ::UnityEngine::InputSystem::InputSettings_InputActionPropertyDrawerMode const Compact;

  /// @brief Field MultilineBoth value: I32(2)
  static ::UnityEngine::InputSystem::InputSettings_InputActionPropertyDrawerMode const MultilineBoth;

  /// @brief Field MultilineEffective value: I32(1)
  static ::UnityEngine::InputSystem::InputSettings_InputActionPropertyDrawerMode const MultilineEffective;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8771 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::InputSettings_InputActionPropertyDrawerMode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::InputSettings_InputActionPropertyDrawerMode, 0x4>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
// Dependencies UnityEngine.InputSystem.InputSettings::BackgroundBehavior, UnityEngine.InputSystem.InputSettings::EditorInputBehaviorInPlayMode,
// UnityEngine.InputSystem.InputSettings::InputActionPropertyDrawerMode, UnityEngine.InputSystem.InputSettings::ScrollDeltaBehavior, UnityEngine.InputSystem.InputSettings::UpdateMode,
// UnityEngine.ScriptableObject
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: UnityEngine.InputSystem.InputSettings
class CORDL_TYPE InputSettings : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  using BackgroundBehavior = ::UnityEngine::InputSystem::InputSettings_BackgroundBehavior;

  using EditorInputBehaviorInPlayMode = ::UnityEngine::InputSystem::InputSettings_EditorInputBehaviorInPlayMode;

  using InputActionPropertyDrawerMode = ::UnityEngine::InputSystem::InputSettings_InputActionPropertyDrawerMode;

  using ScrollDeltaBehavior = ::UnityEngine::InputSystem::InputSettings_ScrollDeltaBehavior;

  using UpdateMode = ::UnityEngine::InputSystem::InputSettings_UpdateMode;

  __declspec(property(get = get_backgroundBehavior, put = set_backgroundBehavior)) ::UnityEngine::InputSystem::InputSettings_BackgroundBehavior backgroundBehavior;

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
                      put = set_editorInputBehaviorInPlayMode)) ::UnityEngine::InputSystem::InputSettings_EditorInputBehaviorInPlayMode editorInputBehaviorInPlayMode;

  __declspec(property(get = get_filterNoiseOnCurrent, put = set_filterNoiseOnCurrent)) bool filterNoiseOnCurrent;

  __declspec(property(get = get_inputActionPropertyDrawerMode,
                      put = set_inputActionPropertyDrawerMode)) ::UnityEngine::InputSystem::InputSettings_InputActionPropertyDrawerMode inputActionPropertyDrawerMode;

  /// @brief Field m_BackgroundBehavior, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_m_BackgroundBehavior,
                      put = __cordl_internal_set_m_BackgroundBehavior)) ::UnityEngine::InputSystem::InputSettings_BackgroundBehavior m_BackgroundBehavior;

  /// @brief Field m_ButtonReleaseThreshold, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ButtonReleaseThreshold, put = __cordl_internal_set_m_ButtonReleaseThreshold)) float_t m_ButtonReleaseThreshold;

  /// @brief Field m_CompensateForScreenOrientation, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get_m_CompensateForScreenOrientation, put = __cordl_internal_set_m_CompensateForScreenOrientation)) bool m_CompensateForScreenOrientation;

  /// @brief Field m_DefaultButtonPressPoint, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_m_DefaultButtonPressPoint, put = __cordl_internal_set_m_DefaultButtonPressPoint)) float_t m_DefaultButtonPressPoint;

  /// @brief Field m_DefaultDeadzoneMax, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get_m_DefaultDeadzoneMax, put = __cordl_internal_set_m_DefaultDeadzoneMax)) float_t m_DefaultDeadzoneMax;

  /// @brief Field m_DefaultDeadzoneMin, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_m_DefaultDeadzoneMin, put = __cordl_internal_set_m_DefaultDeadzoneMin)) float_t m_DefaultDeadzoneMin;

  /// @brief Field m_DefaultHoldTime, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get_m_DefaultHoldTime, put = __cordl_internal_set_m_DefaultHoldTime)) float_t m_DefaultHoldTime;

  /// @brief Field m_DefaultSlowTapTime, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get_m_DefaultSlowTapTime, put = __cordl_internal_set_m_DefaultSlowTapTime)) float_t m_DefaultSlowTapTime;

  /// @brief Field m_DefaultTapTime, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get_m_DefaultTapTime, put = __cordl_internal_set_m_DefaultTapTime)) float_t m_DefaultTapTime;

  /// @brief Field m_DisableRedundantEventsMerging, offset 0x64, size 0x1
  __declspec(property(get = __cordl_internal_get_m_DisableRedundantEventsMerging, put = __cordl_internal_set_m_DisableRedundantEventsMerging)) bool m_DisableRedundantEventsMerging;

  /// @brief Field m_EditorInputBehaviorInPlayMode, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_m_EditorInputBehaviorInPlayMode,
                      put = __cordl_internal_set_m_EditorInputBehaviorInPlayMode)) ::UnityEngine::InputSystem::InputSettings_EditorInputBehaviorInPlayMode m_EditorInputBehaviorInPlayMode;

  /// @brief Field m_FeatureFlags, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_m_FeatureFlags, put = __cordl_internal_set_m_FeatureFlags)) ::System::Collections::Generic::HashSet_1<::StringW>* m_FeatureFlags;

  /// @brief Field m_InputActionPropertyDrawerMode, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_InputActionPropertyDrawerMode,
                      put = __cordl_internal_set_m_InputActionPropertyDrawerMode)) ::UnityEngine::InputSystem::InputSettings_InputActionPropertyDrawerMode m_InputActionPropertyDrawerMode;

  /// @brief Field m_MaxEventBytesPerUpdate, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MaxEventBytesPerUpdate, put = __cordl_internal_set_m_MaxEventBytesPerUpdate)) int32_t m_MaxEventBytesPerUpdate;

  /// @brief Field m_MaxQueuedEventsPerUpdate, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MaxQueuedEventsPerUpdate, put = __cordl_internal_set_m_MaxQueuedEventsPerUpdate)) int32_t m_MaxQueuedEventsPerUpdate;

  /// @brief Field m_MultiTapDelayTime, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MultiTapDelayTime, put = __cordl_internal_set_m_MultiTapDelayTime)) float_t m_MultiTapDelayTime;

  /// @brief Field m_ScrollDeltaBehavior, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ScrollDeltaBehavior,
                      put = __cordl_internal_set_m_ScrollDeltaBehavior)) ::UnityEngine::InputSystem::InputSettings_ScrollDeltaBehavior m_ScrollDeltaBehavior;

  /// @brief Field m_ShortcutKeysConsumeInputs, offset 0x65, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ShortcutKeysConsumeInputs, put = __cordl_internal_set_m_ShortcutKeysConsumeInputs)) bool m_ShortcutKeysConsumeInputs;

  /// @brief Field m_SupportedDevices, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SupportedDevices, put = __cordl_internal_set_m_SupportedDevices)) ::ArrayW<::StringW, ::Array<::StringW>*> m_SupportedDevices;

  /// @brief Field m_TapRadius, offset 0x5c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_TapRadius, put = __cordl_internal_set_m_TapRadius)) float_t m_TapRadius;

  /// @brief Field m_UpdateMode, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_m_UpdateMode, put = __cordl_internal_set_m_UpdateMode)) ::UnityEngine::InputSystem::InputSettings_UpdateMode m_UpdateMode;

  __declspec(property(get = get_maxEventBytesPerUpdate, put = set_maxEventBytesPerUpdate)) int32_t maxEventBytesPerUpdate;

  __declspec(property(get = get_maxQueuedEventsPerUpdate, put = set_maxQueuedEventsPerUpdate)) int32_t maxQueuedEventsPerUpdate;

  __declspec(property(get = get_multiTapDelayTime, put = set_multiTapDelayTime)) float_t multiTapDelayTime;

  __declspec(property(get = get_scrollDeltaBehavior, put = set_scrollDeltaBehavior)) ::UnityEngine::InputSystem::InputSettings_ScrollDeltaBehavior scrollDeltaBehavior;

  __declspec(property(get = get_shortcutKeysConsumeInput, put = set_shortcutKeysConsumeInput)) bool shortcutKeysConsumeInput;

  __declspec(property(get = get_supportedDevices, put = set_supportedDevices)) ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::StringW> supportedDevices;

  __declspec(property(get = get_tapRadius, put = set_tapRadius)) float_t tapRadius;

  __declspec(property(get = get_updateMode, put = set_updateMode)) ::UnityEngine::InputSystem::InputSettings_UpdateMode updateMode;

  /// @brief Method AreEqual, addr 0x63c16d4, size 0x358, virtual false, abstract: false, final false
  static inline bool AreEqual(::UnityEngine::InputSystem::InputSettings* a, ::UnityEngine::InputSystem::InputSettings* b);

  /// @brief Method CompareFeatureFlag, addr 0x63c1688, size 0x4c, virtual false, abstract: false, final false
  static inline bool CompareFeatureFlag(::UnityEngine::InputSystem::InputSettings* a, ::UnityEngine::InputSystem::InputSettings* b, ::StringW featureName);

  /// @brief Method CompareFloats, addr 0x63c1670, size 0x18, virtual false, abstract: false, final false
  static inline bool CompareFloats(float_t a, float_t b);

  /// @brief Method CompareSets, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline bool CompareSets(::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<T> a, ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<T> b);

  /// @brief Method IsFeatureEnabled, addr 0x63c15e4, size 0x8c, virtual false, abstract: false, final false
  inline bool IsFeatureEnabled(::StringW featureName);

  static inline ::UnityEngine::InputSystem::InputSettings* New_ctor();

  /// @brief Method OnChange, addr 0x63c0fc0, size 0xd4, virtual false, abstract: false, final false
  inline void OnChange();

  /// @brief Method SetInternalFeatureFlag, addr 0x63c1488, size 0x15c, virtual false, abstract: false, final false
  inline void SetInternalFeatureFlag(::StringW featureName, bool enabled);

  constexpr ::UnityEngine::InputSystem::InputSettings_BackgroundBehavior const& __cordl_internal_get_m_BackgroundBehavior() const;

  constexpr ::UnityEngine::InputSystem::InputSettings_BackgroundBehavior& __cordl_internal_get_m_BackgroundBehavior();

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

  constexpr ::UnityEngine::InputSystem::InputSettings_EditorInputBehaviorInPlayMode const& __cordl_internal_get_m_EditorInputBehaviorInPlayMode() const;

  constexpr ::UnityEngine::InputSystem::InputSettings_EditorInputBehaviorInPlayMode& __cordl_internal_get_m_EditorInputBehaviorInPlayMode();

  constexpr ::System::Collections::Generic::HashSet_1<::StringW>* const& __cordl_internal_get_m_FeatureFlags() const;

  constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& __cordl_internal_get_m_FeatureFlags();

  constexpr ::UnityEngine::InputSystem::InputSettings_InputActionPropertyDrawerMode const& __cordl_internal_get_m_InputActionPropertyDrawerMode() const;

  constexpr ::UnityEngine::InputSystem::InputSettings_InputActionPropertyDrawerMode& __cordl_internal_get_m_InputActionPropertyDrawerMode();

  constexpr int32_t const& __cordl_internal_get_m_MaxEventBytesPerUpdate() const;

  constexpr int32_t& __cordl_internal_get_m_MaxEventBytesPerUpdate();

  constexpr int32_t const& __cordl_internal_get_m_MaxQueuedEventsPerUpdate() const;

  constexpr int32_t& __cordl_internal_get_m_MaxQueuedEventsPerUpdate();

  constexpr float_t const& __cordl_internal_get_m_MultiTapDelayTime() const;

  constexpr float_t& __cordl_internal_get_m_MultiTapDelayTime();

  constexpr ::UnityEngine::InputSystem::InputSettings_ScrollDeltaBehavior const& __cordl_internal_get_m_ScrollDeltaBehavior() const;

  constexpr ::UnityEngine::InputSystem::InputSettings_ScrollDeltaBehavior& __cordl_internal_get_m_ScrollDeltaBehavior();

  constexpr bool const& __cordl_internal_get_m_ShortcutKeysConsumeInputs() const;

  constexpr bool& __cordl_internal_get_m_ShortcutKeysConsumeInputs();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_m_SupportedDevices() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_m_SupportedDevices();

  constexpr float_t const& __cordl_internal_get_m_TapRadius() const;

  constexpr float_t& __cordl_internal_get_m_TapRadius();

  constexpr ::UnityEngine::InputSystem::InputSettings_UpdateMode const& __cordl_internal_get_m_UpdateMode() const;

  constexpr ::UnityEngine::InputSystem::InputSettings_UpdateMode& __cordl_internal_get_m_UpdateMode();

  constexpr void __cordl_internal_set_m_BackgroundBehavior(::UnityEngine::InputSystem::InputSettings_BackgroundBehavior value);

  constexpr void __cordl_internal_set_m_ButtonReleaseThreshold(float_t value);

  constexpr void __cordl_internal_set_m_CompensateForScreenOrientation(bool value);

  constexpr void __cordl_internal_set_m_DefaultButtonPressPoint(float_t value);

  constexpr void __cordl_internal_set_m_DefaultDeadzoneMax(float_t value);

  constexpr void __cordl_internal_set_m_DefaultDeadzoneMin(float_t value);

  constexpr void __cordl_internal_set_m_DefaultHoldTime(float_t value);

  constexpr void __cordl_internal_set_m_DefaultSlowTapTime(float_t value);

  constexpr void __cordl_internal_set_m_DefaultTapTime(float_t value);

  constexpr void __cordl_internal_set_m_DisableRedundantEventsMerging(bool value);

  constexpr void __cordl_internal_set_m_EditorInputBehaviorInPlayMode(::UnityEngine::InputSystem::InputSettings_EditorInputBehaviorInPlayMode value);

  constexpr void __cordl_internal_set_m_FeatureFlags(::System::Collections::Generic::HashSet_1<::StringW>* value);

  constexpr void __cordl_internal_set_m_InputActionPropertyDrawerMode(::UnityEngine::InputSystem::InputSettings_InputActionPropertyDrawerMode value);

  constexpr void __cordl_internal_set_m_MaxEventBytesPerUpdate(int32_t value);

  constexpr void __cordl_internal_set_m_MaxQueuedEventsPerUpdate(int32_t value);

  constexpr void __cordl_internal_set_m_MultiTapDelayTime(float_t value);

  constexpr void __cordl_internal_set_m_ScrollDeltaBehavior(::UnityEngine::InputSystem::InputSettings_ScrollDeltaBehavior value);

  constexpr void __cordl_internal_set_m_ShortcutKeysConsumeInputs(bool value);

  constexpr void __cordl_internal_set_m_SupportedDevices(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set_m_TapRadius(float_t value);

  constexpr void __cordl_internal_set_m_UpdateMode(::UnityEngine::InputSystem::InputSettings_UpdateMode value);

  /// @brief Method .ctor, addr 0x63c1a2c, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_backgroundBehavior, addr 0x63c1224, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputSettings_BackgroundBehavior get_backgroundBehavior();

  /// @brief Method get_buttonReleaseThreshold, addr 0x63c1164, size 0x8, virtual false, abstract: false, final false
  inline float_t get_buttonReleaseThreshold();

  /// @brief Method get_compensateForScreenOrientation, addr 0x63c10b4, size 0x8, virtual false, abstract: false, final false
  inline bool get_compensateForScreenOrientation();

  /// @brief Method get_defaultButtonPressPoint, addr 0x63c1124, size 0x8, virtual false, abstract: false, final false
  inline float_t get_defaultButtonPressPoint();

  /// @brief Method get_defaultDeadzoneMax, addr 0x63c1104, size 0x8, virtual false, abstract: false, final false
  inline float_t get_defaultDeadzoneMax();

  /// @brief Method get_defaultDeadzoneMin, addr 0x63c10e4, size 0x8, virtual false, abstract: false, final false
  inline float_t get_defaultDeadzoneMin();

  /// @brief Method get_defaultHoldTime, addr 0x63c11c4, size 0x8, virtual false, abstract: false, final false
  inline float_t get_defaultHoldTime();

  /// @brief Method get_defaultSlowTapTime, addr 0x63c11a4, size 0x8, virtual false, abstract: false, final false
  inline float_t get_defaultSlowTapTime();

  /// @brief Method get_defaultTapTime, addr 0x63c1184, size 0x8, virtual false, abstract: false, final false
  inline float_t get_defaultTapTime();

  /// @brief Method get_disableRedundantEventsMerging, addr 0x63c1440, size 0x8, virtual false, abstract: false, final false
  inline bool get_disableRedundantEventsMerging();

  /// @brief Method get_editorInputBehaviorInPlayMode, addr 0x63c1244, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputSettings_EditorInputBehaviorInPlayMode get_editorInputBehaviorInPlayMode();

  /// @brief Method get_filterNoiseOnCurrent, addr 0x63c10d8, size 0x8, virtual false, abstract: false, final false
  inline bool get_filterNoiseOnCurrent();

  /// @brief Method get_inputActionPropertyDrawerMode, addr 0x63c1264, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputSettings_InputActionPropertyDrawerMode get_inputActionPropertyDrawerMode();

  /// @brief Method get_maxEventBytesPerUpdate, addr 0x63c1284, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_maxEventBytesPerUpdate();

  /// @brief Method get_maxQueuedEventsPerUpdate, addr 0x63c12a4, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_maxQueuedEventsPerUpdate();

  /// @brief Method get_multiTapDelayTime, addr 0x63c1204, size 0x8, virtual false, abstract: false, final false
  inline float_t get_multiTapDelayTime();

  /// @brief Method get_scrollDeltaBehavior, addr 0x63c1094, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputSettings_ScrollDeltaBehavior get_scrollDeltaBehavior();

  /// @brief Method get_shortcutKeysConsumeInput, addr 0x63c1464, size 0x8, virtual false, abstract: false, final false
  inline bool get_shortcutKeysConsumeInput();

  /// @brief Method get_supportedDevices, addr 0x63c12c4, size 0x58, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::StringW> get_supportedDevices();

  /// @brief Method get_tapRadius, addr 0x63c11e4, size 0x8, virtual false, abstract: false, final false
  inline float_t get_tapRadius();

  /// @brief Method get_updateMode, addr 0x63c0fa0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputSettings_UpdateMode get_updateMode();

  /// @brief Method set_backgroundBehavior, addr 0x63c122c, size 0x18, virtual false, abstract: false, final false
  inline void set_backgroundBehavior(::UnityEngine::InputSystem::InputSettings_BackgroundBehavior value);

  /// @brief Method set_buttonReleaseThreshold, addr 0x63c116c, size 0x18, virtual false, abstract: false, final false
  inline void set_buttonReleaseThreshold(float_t value);

  /// @brief Method set_compensateForScreenOrientation, addr 0x63c10bc, size 0x1c, virtual false, abstract: false, final false
  inline void set_compensateForScreenOrientation(bool value);

  /// @brief Method set_defaultButtonPressPoint, addr 0x63c112c, size 0x38, virtual false, abstract: false, final false
  inline void set_defaultButtonPressPoint(float_t value);

  /// @brief Method set_defaultDeadzoneMax, addr 0x63c110c, size 0x18, virtual false, abstract: false, final false
  inline void set_defaultDeadzoneMax(float_t value);

  /// @brief Method set_defaultDeadzoneMin, addr 0x63c10ec, size 0x18, virtual false, abstract: false, final false
  inline void set_defaultDeadzoneMin(float_t value);

  /// @brief Method set_defaultHoldTime, addr 0x63c11cc, size 0x18, virtual false, abstract: false, final false
  inline void set_defaultHoldTime(float_t value);

  /// @brief Method set_defaultSlowTapTime, addr 0x63c11ac, size 0x18, virtual false, abstract: false, final false
  inline void set_defaultSlowTapTime(float_t value);

  /// @brief Method set_defaultTapTime, addr 0x63c118c, size 0x18, virtual false, abstract: false, final false
  inline void set_defaultTapTime(float_t value);

  /// @brief Method set_disableRedundantEventsMerging, addr 0x63c1448, size 0x1c, virtual false, abstract: false, final false
  inline void set_disableRedundantEventsMerging(bool value);

  /// @brief Method set_editorInputBehaviorInPlayMode, addr 0x63c124c, size 0x18, virtual false, abstract: false, final false
  inline void set_editorInputBehaviorInPlayMode(::UnityEngine::InputSystem::InputSettings_EditorInputBehaviorInPlayMode value);

  /// @brief Method set_filterNoiseOnCurrent, addr 0x63c10e0, size 0x4, virtual false, abstract: false, final false
  inline void set_filterNoiseOnCurrent(bool value);

  /// @brief Method set_inputActionPropertyDrawerMode, addr 0x63c126c, size 0x18, virtual false, abstract: false, final false
  inline void set_inputActionPropertyDrawerMode(::UnityEngine::InputSystem::InputSettings_InputActionPropertyDrawerMode value);

  /// @brief Method set_maxEventBytesPerUpdate, addr 0x63c128c, size 0x18, virtual false, abstract: false, final false
  inline void set_maxEventBytesPerUpdate(int32_t value);

  /// @brief Method set_maxQueuedEventsPerUpdate, addr 0x63c12ac, size 0x18, virtual false, abstract: false, final false
  inline void set_maxQueuedEventsPerUpdate(int32_t value);

  /// @brief Method set_multiTapDelayTime, addr 0x63c120c, size 0x18, virtual false, abstract: false, final false
  inline void set_multiTapDelayTime(float_t value);

  /// @brief Method set_scrollDeltaBehavior, addr 0x63c109c, size 0x18, virtual false, abstract: false, final false
  inline void set_scrollDeltaBehavior(::UnityEngine::InputSystem::InputSettings_ScrollDeltaBehavior value);

  /// @brief Method set_shortcutKeysConsumeInput, addr 0x63c146c, size 0x1c, virtual false, abstract: false, final false
  inline void set_shortcutKeysConsumeInput(bool value);

  /// @brief Method set_supportedDevices, addr 0x63c131c, size 0x124, virtual false, abstract: false, final false
  inline void set_supportedDevices(::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::StringW> value);

  /// @brief Method set_tapRadius, addr 0x63c11ec, size 0x18, virtual false, abstract: false, final false
  inline void set_tapRadius(float_t value);

  /// @brief Method set_updateMode, addr 0x63c0fa8, size 0x18, virtual false, abstract: false, final false
  inline void set_updateMode(::UnityEngine::InputSystem::InputSettings_UpdateMode value);

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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8772 };

  /// @brief Field s_OldUnsupportedFixedAndDynamicUpdateSetting offset 0xffffffff size 0x4
  static constexpr int32_t s_OldUnsupportedFixedAndDynamicUpdateSetting{ static_cast<int32_t>(0x0) };

  /// @brief Field m_SupportedDevices, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___m_SupportedDevices;

  /// @brief Field m_UpdateMode, offset: 0x20, size: 0x4, def value: None
  ::UnityEngine::InputSystem::InputSettings_UpdateMode ___m_UpdateMode;

  /// @brief Field m_ScrollDeltaBehavior, offset: 0x24, size: 0x4, def value: None
  ::UnityEngine::InputSystem::InputSettings_ScrollDeltaBehavior ___m_ScrollDeltaBehavior;

  /// @brief Field m_MaxEventBytesPerUpdate, offset: 0x28, size: 0x4, def value: None
  int32_t ___m_MaxEventBytesPerUpdate;

  /// @brief Field m_MaxQueuedEventsPerUpdate, offset: 0x2c, size: 0x4, def value: None
  int32_t ___m_MaxQueuedEventsPerUpdate;

  /// @brief Field m_CompensateForScreenOrientation, offset: 0x30, size: 0x1, def value: None
  bool ___m_CompensateForScreenOrientation;

  /// @brief Field m_BackgroundBehavior, offset: 0x34, size: 0x4, def value: None
  ::UnityEngine::InputSystem::InputSettings_BackgroundBehavior ___m_BackgroundBehavior;

  /// @brief Field m_EditorInputBehaviorInPlayMode, offset: 0x38, size: 0x4, def value: None
  ::UnityEngine::InputSystem::InputSettings_EditorInputBehaviorInPlayMode ___m_EditorInputBehaviorInPlayMode;

  /// @brief Field m_InputActionPropertyDrawerMode, offset: 0x3c, size: 0x4, def value: None
  ::UnityEngine::InputSystem::InputSettings_InputActionPropertyDrawerMode ___m_InputActionPropertyDrawerMode;

  /// @brief Field m_DefaultDeadzoneMin, offset: 0x40, size: 0x4, def value: None
  float_t ___m_DefaultDeadzoneMin;

  /// @brief Field m_DefaultDeadzoneMax, offset: 0x44, size: 0x4, def value: None
  float_t ___m_DefaultDeadzoneMax;

  /// @brief Field m_DefaultButtonPressPoint, offset: 0x48, size: 0x4, def value: None
  float_t ___m_DefaultButtonPressPoint;

  /// @brief Field m_ButtonReleaseThreshold, offset: 0x4c, size: 0x4, def value: None
  float_t ___m_ButtonReleaseThreshold;

  /// @brief Field m_DefaultTapTime, offset: 0x50, size: 0x4, def value: None
  float_t ___m_DefaultTapTime;

  /// @brief Field m_DefaultSlowTapTime, offset: 0x54, size: 0x4, def value: None
  float_t ___m_DefaultSlowTapTime;

  /// @brief Field m_DefaultHoldTime, offset: 0x58, size: 0x4, def value: None
  float_t ___m_DefaultHoldTime;

  /// @brief Field m_TapRadius, offset: 0x5c, size: 0x4, def value: None
  float_t ___m_TapRadius;

  /// @brief Field m_MultiTapDelayTime, offset: 0x60, size: 0x4, def value: None
  float_t ___m_MultiTapDelayTime;

  /// @brief Field m_DisableRedundantEventsMerging, offset: 0x64, size: 0x1, def value: None
  bool ___m_DisableRedundantEventsMerging;

  /// @brief Field m_ShortcutKeysConsumeInputs, offset: 0x65, size: 0x1, def value: None
  bool ___m_ShortcutKeysConsumeInputs;

  /// @brief Field m_FeatureFlags, offset: 0x68, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::StringW>* ___m_FeatureFlags;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::InputSettings, ___m_SupportedDevices) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputSettings, ___m_UpdateMode) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputSettings, ___m_ScrollDeltaBehavior) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputSettings, ___m_MaxEventBytesPerUpdate) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputSettings, ___m_MaxQueuedEventsPerUpdate) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputSettings, ___m_CompensateForScreenOrientation) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputSettings, ___m_BackgroundBehavior) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputSettings, ___m_EditorInputBehaviorInPlayMode) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputSettings, ___m_InputActionPropertyDrawerMode) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputSettings, ___m_DefaultDeadzoneMin) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputSettings, ___m_DefaultDeadzoneMax) == 0x44, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputSettings, ___m_DefaultButtonPressPoint) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputSettings, ___m_ButtonReleaseThreshold) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputSettings, ___m_DefaultTapTime) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputSettings, ___m_DefaultSlowTapTime) == 0x54, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputSettings, ___m_DefaultHoldTime) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputSettings, ___m_TapRadius) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputSettings, ___m_MultiTapDelayTime) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputSettings, ___m_DisableRedundantEventsMerging) == 0x64, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputSettings, ___m_ShortcutKeysConsumeInputs) == 0x65, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputSettings, ___m_FeatureFlags) == 0x68, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::InputSettings, 0x70>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputSettings_BackgroundBehavior, "UnityEngine.InputSystem", "InputSettings/BackgroundBehavior");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputSettings_EditorInputBehaviorInPlayMode, "UnityEngine.InputSystem", "InputSettings/EditorInputBehaviorInPlayMode");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputSettings_InputActionPropertyDrawerMode, "UnityEngine.InputSystem", "InputSettings/InputActionPropertyDrawerMode");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputSettings_ScrollDeltaBehavior, "UnityEngine.InputSystem", "InputSettings/ScrollDeltaBehavior");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputSettings_UpdateMode, "UnityEngine.InputSystem", "InputSettings/UpdateMode");
NEED_NO_BOX(::UnityEngine::InputSystem::InputSettings);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputSettings*, "UnityEngine.InputSystem", "InputSettings");
