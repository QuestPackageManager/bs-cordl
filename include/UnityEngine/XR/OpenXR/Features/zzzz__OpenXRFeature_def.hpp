#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/Features/OpenXRFeature.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OpenXRFeature)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
struct IntPtr;
}
namespace UnityEngine::InputSystem {
class InputAction;
}
namespace UnityEngine::XR::OpenXR::Features {
struct OpenXRFeature_LoaderEvent;
}
namespace UnityEngine::XR::OpenXR::Features {
struct OpenXRFeature_NativeEvent;
}
namespace UnityEngine::XR::OpenXR::Features {
struct OpenXRFeature_StatFlags;
}
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrEnvironmentBlendMode;
}
namespace UnityEngine::XR::OpenXR {
class OpenXRLoaderBase;
}
namespace UnityEngine::XR {
struct InputDevice;
}
namespace UnityEngine::XR {
struct InputFeatureUsage;
}
// Forward declare root types
namespace UnityEngine::XR::OpenXR::Features {
struct OpenXRFeature_LoaderEvent;
}
namespace UnityEngine::XR::OpenXR::Features {
struct OpenXRFeature_NativeEvent;
}
namespace UnityEngine::XR::OpenXR::Features {
struct OpenXRFeature_StatFlags;
}
namespace UnityEngine::XR::OpenXR::Features {
class OpenXRFeature;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::OpenXR::Features::OpenXRFeature_LoaderEvent);
MARK_VAL_T(::UnityEngine::XR::OpenXR::Features::OpenXRFeature_NativeEvent);
MARK_VAL_T(::UnityEngine::XR::OpenXR::Features::OpenXRFeature_StatFlags);
MARK_REF_PTR_T(::UnityEngine::XR::OpenXR::Features::OpenXRFeature);
// Dependencies
namespace UnityEngine::XR::OpenXR::Features {
// Is value type: true
// CS Name: UnityEngine.XR.OpenXR.Features.OpenXRFeature/LoaderEvent
struct CORDL_TYPE OpenXRFeature_LoaderEvent {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __OpenXRFeature_LoaderEvent_Unwrapped
  enum struct __OpenXRFeature_LoaderEvent_Unwrapped : int32_t {
    __E_SubsystemCreate = static_cast<int32_t>(0x0),
    __E_SubsystemDestroy = static_cast<int32_t>(0x1),
    __E_SubsystemStart = static_cast<int32_t>(0x2),
    __E_SubsystemStop = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __OpenXRFeature_LoaderEvent_Unwrapped() const noexcept {
    return static_cast<__OpenXRFeature_LoaderEvent_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr OpenXRFeature_LoaderEvent();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr OpenXRFeature_LoaderEvent(int32_t value__) noexcept;

  /// @brief Field SubsystemCreate value: I32(0)
  static ::UnityEngine::XR::OpenXR::Features::OpenXRFeature_LoaderEvent const SubsystemCreate;

  /// @brief Field SubsystemDestroy value: I32(1)
  static ::UnityEngine::XR::OpenXR::Features::OpenXRFeature_LoaderEvent const SubsystemDestroy;

  /// @brief Field SubsystemStart value: I32(2)
  static ::UnityEngine::XR::OpenXR::Features::OpenXRFeature_LoaderEvent const SubsystemStart;

  /// @brief Field SubsystemStop value: I32(3)
  static ::UnityEngine::XR::OpenXR::Features::OpenXRFeature_LoaderEvent const SubsystemStop;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18519 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::OpenXRFeature_LoaderEvent, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::Features::OpenXRFeature_LoaderEvent, 0x4>, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::Features
// Dependencies
namespace UnityEngine::XR::OpenXR::Features {
// Is value type: true
// CS Name: UnityEngine.XR.OpenXR.Features.OpenXRFeature/NativeEvent
struct CORDL_TYPE OpenXRFeature_NativeEvent {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __OpenXRFeature_NativeEvent_Unwrapped
  enum struct __OpenXRFeature_NativeEvent_Unwrapped : int32_t {
    __E_XrSetupConfigValues = static_cast<int32_t>(0x0),
    __E_XrSystemIdChanged = static_cast<int32_t>(0x1),
    __E_XrInstanceChanged = static_cast<int32_t>(0x2),
    __E_XrSessionChanged = static_cast<int32_t>(0x3),
    __E_XrBeginSession = static_cast<int32_t>(0x4),
    __E_XrSessionStateChanged = static_cast<int32_t>(0x5),
    __E_XrChangedSpaceApp = static_cast<int32_t>(0x6),
    __E_XrEndSession = static_cast<int32_t>(0x7),
    __E_XrDestroySession = static_cast<int32_t>(0x8),
    __E_XrDestroyInstance = static_cast<int32_t>(0x9),
    __E_XrIdle = static_cast<int32_t>(0xa),
    __E_XrReady = static_cast<int32_t>(0xb),
    __E_XrSynchronized = static_cast<int32_t>(0xc),
    __E_XrVisible = static_cast<int32_t>(0xd),
    __E_XrFocused = static_cast<int32_t>(0xe),
    __E_XrStopping = static_cast<int32_t>(0xf),
    __E_XrExiting = static_cast<int32_t>(0x10),
    __E_XrLossPending = static_cast<int32_t>(0x11),
    __E_XrInstanceLossPending = static_cast<int32_t>(0x12),
    __E_XrRestartRequested = static_cast<int32_t>(0x13),
    __E_XrRequestRestartLoop = static_cast<int32_t>(0x14),
    __E_XrRequestGetSystemLoop = static_cast<int32_t>(0x15),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __OpenXRFeature_NativeEvent_Unwrapped() const noexcept {
    return static_cast<__OpenXRFeature_NativeEvent_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr OpenXRFeature_NativeEvent();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr OpenXRFeature_NativeEvent(int32_t value__) noexcept;

  /// @brief Field XrBeginSession value: I32(4)
  static ::UnityEngine::XR::OpenXR::Features::OpenXRFeature_NativeEvent const XrBeginSession;

  /// @brief Field XrChangedSpaceApp value: I32(6)
  static ::UnityEngine::XR::OpenXR::Features::OpenXRFeature_NativeEvent const XrChangedSpaceApp;

  /// @brief Field XrDestroyInstance value: I32(9)
  static ::UnityEngine::XR::OpenXR::Features::OpenXRFeature_NativeEvent const XrDestroyInstance;

  /// @brief Field XrDestroySession value: I32(8)
  static ::UnityEngine::XR::OpenXR::Features::OpenXRFeature_NativeEvent const XrDestroySession;

  /// @brief Field XrEndSession value: I32(7)
  static ::UnityEngine::XR::OpenXR::Features::OpenXRFeature_NativeEvent const XrEndSession;

  /// @brief Field XrExiting value: I32(16)
  static ::UnityEngine::XR::OpenXR::Features::OpenXRFeature_NativeEvent const XrExiting;

  /// @brief Field XrFocused value: I32(14)
  static ::UnityEngine::XR::OpenXR::Features::OpenXRFeature_NativeEvent const XrFocused;

  /// @brief Field XrIdle value: I32(10)
  static ::UnityEngine::XR::OpenXR::Features::OpenXRFeature_NativeEvent const XrIdle;

  /// @brief Field XrInstanceChanged value: I32(2)
  static ::UnityEngine::XR::OpenXR::Features::OpenXRFeature_NativeEvent const XrInstanceChanged;

  /// @brief Field XrInstanceLossPending value: I32(18)
  static ::UnityEngine::XR::OpenXR::Features::OpenXRFeature_NativeEvent const XrInstanceLossPending;

  /// @brief Field XrLossPending value: I32(17)
  static ::UnityEngine::XR::OpenXR::Features::OpenXRFeature_NativeEvent const XrLossPending;

  /// @brief Field XrReady value: I32(11)
  static ::UnityEngine::XR::OpenXR::Features::OpenXRFeature_NativeEvent const XrReady;

  /// @brief Field XrRequestGetSystemLoop value: I32(21)
  static ::UnityEngine::XR::OpenXR::Features::OpenXRFeature_NativeEvent const XrRequestGetSystemLoop;

  /// @brief Field XrRequestRestartLoop value: I32(20)
  static ::UnityEngine::XR::OpenXR::Features::OpenXRFeature_NativeEvent const XrRequestRestartLoop;

  /// @brief Field XrRestartRequested value: I32(19)
  static ::UnityEngine::XR::OpenXR::Features::OpenXRFeature_NativeEvent const XrRestartRequested;

  /// @brief Field XrSessionChanged value: I32(3)
  static ::UnityEngine::XR::OpenXR::Features::OpenXRFeature_NativeEvent const XrSessionChanged;

  /// @brief Field XrSessionStateChanged value: I32(5)
  static ::UnityEngine::XR::OpenXR::Features::OpenXRFeature_NativeEvent const XrSessionStateChanged;

  /// @brief Field XrSetupConfigValues value: I32(0)
  static ::UnityEngine::XR::OpenXR::Features::OpenXRFeature_NativeEvent const XrSetupConfigValues;

  /// @brief Field XrStopping value: I32(15)
  static ::UnityEngine::XR::OpenXR::Features::OpenXRFeature_NativeEvent const XrStopping;

  /// @brief Field XrSynchronized value: I32(12)
  static ::UnityEngine::XR::OpenXR::Features::OpenXRFeature_NativeEvent const XrSynchronized;

  /// @brief Field XrSystemIdChanged value: I32(1)
  static ::UnityEngine::XR::OpenXR::Features::OpenXRFeature_NativeEvent const XrSystemIdChanged;

  /// @brief Field XrVisible value: I32(13)
  static ::UnityEngine::XR::OpenXR::Features::OpenXRFeature_NativeEvent const XrVisible;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18520 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::OpenXRFeature_NativeEvent, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::Features::OpenXRFeature_NativeEvent, 0x4>, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::Features
// Dependencies
namespace UnityEngine::XR::OpenXR::Features {
// Is value type: true
// CS Name: UnityEngine.XR.OpenXR.Features.OpenXRFeature/StatFlags
struct CORDL_TYPE OpenXRFeature_StatFlags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __OpenXRFeature_StatFlags_Unwrapped
  enum struct __OpenXRFeature_StatFlags_Unwrapped : int32_t {
    __E_StatOptionNone = static_cast<int32_t>(0x0),
    __E_ClearOnUpdate = static_cast<int32_t>(0x1),
    __E_All = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __OpenXRFeature_StatFlags_Unwrapped() const noexcept {
    return static_cast<__OpenXRFeature_StatFlags_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr OpenXRFeature_StatFlags();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr OpenXRFeature_StatFlags(int32_t value__) noexcept;

  /// @brief Field All value: I32(1)
  static ::UnityEngine::XR::OpenXR::Features::OpenXRFeature_StatFlags const All;

  /// @brief Field ClearOnUpdate value: I32(1)
  static ::UnityEngine::XR::OpenXR::Features::OpenXRFeature_StatFlags const ClearOnUpdate;

  /// @brief Field StatOptionNone value: I32(0)
  static ::UnityEngine::XR::OpenXR::Features::OpenXRFeature_StatFlags const StatOptionNone;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18521 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::OpenXRFeature_StatFlags, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::Features::OpenXRFeature_StatFlags, 0x4>, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::Features
// Dependencies UnityEngine.ScriptableObject
namespace UnityEngine::XR::OpenXR::Features {
// Is value type: false
// CS Name: UnityEngine.XR.OpenXR.Features.OpenXRFeature
class CORDL_TYPE OpenXRFeature : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  using LoaderEvent = ::UnityEngine::XR::OpenXR::Features::OpenXRFeature_LoaderEvent;

  using NativeEvent = ::UnityEngine::XR::OpenXR::Features::OpenXRFeature_NativeEvent;

  using StatFlags = ::UnityEngine::XR::OpenXR::Features::OpenXRFeature_StatFlags;

  /// @brief Field <failedInitialization>k__BackingField, offset 0x19, size 0x1
  __declspec(property(get = __cordl_internal_get__failedInitialization_k__BackingField, put = __cordl_internal_set__failedInitialization_k__BackingField)) bool _failedInitialization_k__BackingField;

  /// @brief Field <requiredFeatureFailed>k__BackingField, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF__requiredFeatureFailed_k__BackingField, put = setStaticF__requiredFeatureFailed_k__BackingField)) bool _requiredFeatureFailed_k__BackingField;

  /// @brief Field company, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_company, put = __cordl_internal_set_company)) ::StringW company;

  __declspec(property(get = get_enabled, put = set_enabled)) bool enabled;

  __declspec(property(get = get_failedInitialization, put = set_failedInitialization)) bool failedInitialization;

  /// @brief Field featureIdInternal, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_featureIdInternal, put = __cordl_internal_set_featureIdInternal)) ::StringW featureIdInternal;

  /// @brief Field internalFieldsUpdated, offset 0x4d, size 0x1
  __declspec(property(get = __cordl_internal_get_internalFieldsUpdated, put = __cordl_internal_set_internalFieldsUpdated)) bool internalFieldsUpdated;

  /// @brief Field m_enabled, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_m_enabled, put = __cordl_internal_set_m_enabled)) bool m_enabled;

  /// @brief Field nameUi, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_nameUi, put = __cordl_internal_set_nameUi)) ::StringW nameUi;

  /// @brief Field openxrExtensionStrings, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_openxrExtensionStrings, put = __cordl_internal_set_openxrExtensionStrings)) ::StringW openxrExtensionStrings;

  /// @brief Field priority, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_priority, put = __cordl_internal_set_priority)) int32_t priority;

  /// @brief Field required, offset 0x4c, size 0x1
  __declspec(property(get = __cordl_internal_get_required, put = __cordl_internal_set_required)) bool required;

  /// @brief Field version, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_version, put = __cordl_internal_set_version)) ::StringW version;

  /// @brief Method Awake, addr 0x682b430, size 0x4, virtual true, abstract: false, final false
  inline void Awake();

  /// @brief Method CreateSubsystem, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TDescriptor, typename TSubsystem> inline void CreateSubsystem(::System::Collections::Generic::List_1<TDescriptor>* descriptors, ::StringW id);

  /// @brief Method DestroySubsystem, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void DestroySubsystem();

  /// @brief Method GetAction, addr 0x682b658, size 0x80, virtual false, abstract: false, final false
  inline uint64_t GetAction(::UnityEngine::XR::InputDevice device, ::UnityEngine::XR::InputFeatureUsage usage);

  /// @brief Method GetAction, addr 0x682b6d8, size 0x70, virtual false, abstract: false, final false
  inline uint64_t GetAction(::UnityEngine::XR::InputDevice device, ::StringW usageName);

  /// @brief Method GetAction, addr 0x682b5fc, size 0x5c, virtual false, abstract: false, final false
  inline uint64_t GetAction(::UnityEngine::InputSystem::InputAction* inputAction);

  /// @brief Method GetCurrentAppSpace, addr 0x682b21c, size 0x20, virtual false, abstract: false, final false
  static inline uint64_t GetCurrentAppSpace();

  /// @brief Method GetCurrentInteractionProfile, addr 0x682b1e4, size 0x38, virtual false, abstract: false, final false
  static inline uint64_t GetCurrentInteractionProfile(::StringW userPath);

  /// @brief Method GetCurrentInteractionProfile, addr 0x682b138, size 0x20, virtual false, abstract: false, final false
  static inline uint64_t GetCurrentInteractionProfile(uint64_t userPath);

  /// @brief Method GetEnvironmentBlendMode, addr 0x682b3c0, size 0x4, virtual false, abstract: false, final false
  static inline ::UnityEngine::XR::OpenXR::NativeTypes::XrEnvironmentBlendMode GetEnvironmentBlendMode();

  /// @brief Method GetViewConfigurationTypeForRenderPass, addr 0x682b2c0, size 0x4, virtual false, abstract: false, final false
  static inline int32_t GetViewConfigurationTypeForRenderPass(int32_t renderPassIndex);

  /// @brief Method HookGetInstanceProcAddr, addr 0x682af10, size 0x8, virtual true, abstract: false, final false
  inline ::System::IntPtr HookGetInstanceProcAddr(::System::IntPtr func);

  /// @brief Method HookGetInstanceProcAddr, addr 0x682016c, size 0x120, virtual false, abstract: false, final false
  static inline void HookGetInstanceProcAddr();

  /// @brief Method Initialize, addr 0x681ffd4, size 0x128, virtual false, abstract: false, final false
  static inline void Initialize();

  /// @brief Method Internal_GetAppSpace, addr 0x682b23c, size 0x84, virtual false, abstract: false, final false
  static inline bool Internal_GetAppSpace(::ByRef<uint64_t> appSpace);

  /// @brief Method Internal_GetCurrentInteractionProfile, addr 0x682b158, size 0x8c, virtual false, abstract: false, final false
  static inline bool Internal_GetCurrentInteractionProfile(uint64_t pathId, ::ByRef<uint64_t> interactionProfile);

  /// @brief Method Internal_GetEnvironmentBlendMode, addr 0x682b3c4, size 0x64, virtual false, abstract: false, final false
  static inline ::UnityEngine::XR::OpenXR::NativeTypes::XrEnvironmentBlendMode Internal_GetEnvironmentBlendMode();

  /// @brief Method Internal_GetFormFactor, addr 0x682b434, size 0x64, virtual false, abstract: false, final false
  static inline int32_t Internal_GetFormFactor();

  /// @brief Method Internal_GetProcAddressPtr, addr 0x682ae94, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::IntPtr Internal_GetProcAddressPtr(bool loaderDefault);

  /// @brief Method Internal_GetSessionState, addr 0x682b4fc, size 0x84, virtual false, abstract: false, final false
  static inline void Internal_GetSessionState(::ByRef<int32_t> oldState, ::ByRef<int32_t> newState);

  /// @brief Method Internal_GetViewConfigurationType, addr 0x682b498, size 0x64, virtual false, abstract: false, final false
  static inline int32_t Internal_GetViewConfigurationType();

  /// @brief Method Internal_GetViewTypeFromRenderIndex, addr 0x682b2c4, size 0x7c, virtual false, abstract: false, final false
  static inline int32_t Internal_GetViewTypeFromRenderIndex(int32_t renderPassIndex);

  /// @brief Method Internal_GetXRSession, addr 0x682b904, size 0x84, virtual false, abstract: false, final false
  static inline bool Internal_GetXRSession(::ByRef<uint64_t> xrSession);

  /// @brief Method Internal_PathToStringPtr, addr 0x682afe8, size 0x8c, virtual false, abstract: false, final false
  static inline bool Internal_PathToStringPtr(uint64_t pathId, ::ByRef<::System::IntPtr> path);

  /// @brief Method Internal_SetEnvironmentBlendMode, addr 0x682b344, size 0x7c, virtual false, abstract: false, final false
  static inline void Internal_SetEnvironmentBlendMode(::UnityEngine::XR::OpenXR::NativeTypes::XrEnvironmentBlendMode xrEnvironmentBlendMode);

  /// @brief Method Internal_SetProcAddressPtrAndLoadStage1, addr 0x682b580, size 0x7c, virtual false, abstract: false, final false
  static inline void Internal_SetProcAddressPtrAndLoadStage1(::System::IntPtr func);

  /// @brief Method Internal_StringToPath, addr 0x682b094, size 0xa4, virtual false, abstract: false, final false
  static inline bool Internal_StringToPath(::StringW str, ::ByRef<uint64_t> pathId);

  static inline ::UnityEngine::XR::OpenXR::Features::OpenXRFeature* New_ctor();

  /// @brief Method OnAppSpaceChange, addr 0x682af30, size 0x4, virtual true, abstract: false, final false
  inline void OnAppSpaceChange(uint64_t xrSpace);

  /// @brief Method OnDisable, addr 0x682b42c, size 0x4, virtual true, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x682b428, size 0x4, virtual true, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnEnabledChange, addr 0x682af60, size 0x4, virtual true, abstract: false, final false
  inline void OnEnabledChange();

  /// @brief Method OnEnvironmentBlendModeChange, addr 0x682af5c, size 0x4, virtual true, abstract: false, final false
  inline void OnEnvironmentBlendModeChange(::UnityEngine::XR::OpenXR::NativeTypes::XrEnvironmentBlendMode xrEnvironmentBlendMode);

  /// @brief Method OnFormFactorChange, addr 0x682af54, size 0x4, virtual true, abstract: false, final false
  inline void OnFormFactorChange(int32_t xrFormFactor);

  /// @brief Method OnInstanceCreate, addr 0x682ab60, size 0x8, virtual true, abstract: false, final false
  inline bool OnInstanceCreate(uint64_t xrInstance);

  /// @brief Method OnInstanceDestroy, addr 0x682af48, size 0x4, virtual true, abstract: false, final false
  inline void OnInstanceDestroy(uint64_t xrInstance);

  /// @brief Method OnInstanceLossPending, addr 0x682af50, size 0x4, virtual true, abstract: false, final false
  inline void OnInstanceLossPending(uint64_t xrInstance);

  /// @brief Method OnSessionBegin, addr 0x682af38, size 0x4, virtual true, abstract: false, final false
  inline void OnSessionBegin(uint64_t xrSession);

  /// @brief Method OnSessionCreate, addr 0x682af2c, size 0x4, virtual true, abstract: false, final false
  inline void OnSessionCreate(uint64_t xrSession);

  /// @brief Method OnSessionDestroy, addr 0x682af44, size 0x4, virtual true, abstract: false, final false
  inline void OnSessionDestroy(uint64_t xrSession);

  /// @brief Method OnSessionEnd, addr 0x682af3c, size 0x4, virtual true, abstract: false, final false
  inline void OnSessionEnd(uint64_t xrSession);

  /// @brief Method OnSessionExiting, addr 0x682af40, size 0x4, virtual true, abstract: false, final false
  inline void OnSessionExiting(uint64_t xrSession);

  /// @brief Method OnSessionLossPending, addr 0x682af4c, size 0x4, virtual true, abstract: false, final false
  inline void OnSessionLossPending(uint64_t xrSession);

  /// @brief Method OnSessionStateChange, addr 0x682af34, size 0x4, virtual true, abstract: false, final false
  inline void OnSessionStateChange(int32_t oldState, int32_t newState);

  /// @brief Method OnSubsystemCreate, addr 0x682af18, size 0x4, virtual true, abstract: false, final false
  inline void OnSubsystemCreate();

  /// @brief Method OnSubsystemDestroy, addr 0x682af24, size 0x4, virtual true, abstract: false, final false
  inline void OnSubsystemDestroy();

  /// @brief Method OnSubsystemStart, addr 0x682af1c, size 0x4, virtual true, abstract: false, final false
  inline void OnSubsystemStart();

  /// @brief Method OnSubsystemStop, addr 0x682af20, size 0x4, virtual true, abstract: false, final false
  inline void OnSubsystemStop();

  /// @brief Method OnSystemChange, addr 0x682af28, size 0x4, virtual true, abstract: false, final false
  inline void OnSystemChange(uint64_t xrSystem);

  /// @brief Method OnViewConfigurationTypeChange, addr 0x682af58, size 0x4, virtual true, abstract: false, final false
  inline void OnViewConfigurationTypeChange(int32_t xrViewConfigurationType);

  /// @brief Method PathToString, addr 0x682af64, size 0x84, virtual false, abstract: false, final false
  static inline ::StringW PathToString(uint64_t path);

  /// @brief Method ReceiveLoaderEvent, addr 0x68208d4, size 0x1e4, virtual false, abstract: false, final false
  static inline bool ReceiveLoaderEvent(::UnityEngine::XR::OpenXR::OpenXRLoaderBase* loader, ::UnityEngine::XR::OpenXR::Features::OpenXRFeature_LoaderEvent e);

  /// @brief Method ReceiveNativeEvent, addr 0x6823434, size 0x334, virtual false, abstract: false, final false
  static inline void ReceiveNativeEvent(::UnityEngine::XR::OpenXR::Features::OpenXRFeature_NativeEvent e, uint64_t payload);

  /// @brief Method RegisterStatsDescriptor, addr 0x682b748, size 0x4, virtual false, abstract: false, final false
  static inline uint64_t RegisterStatsDescriptor(::StringW statName, ::UnityEngine::XR::OpenXR::Features::OpenXRFeature_StatFlags statFlags);

  /// @brief Method SetEnvironmentBlendMode, addr 0x682b340, size 0x4, virtual false, abstract: false, final false
  static inline void SetEnvironmentBlendMode(::UnityEngine::XR::OpenXR::NativeTypes::XrEnvironmentBlendMode xrEnvironmentBlendMode);

  /// @brief Method SetStatAsFloat, addr 0x682b7ec, size 0x4, virtual false, abstract: false, final false
  static inline void SetStatAsFloat(uint64_t statId, float_t value);

  /// @brief Method SetStatAsUInt, addr 0x682b87c, size 0x4, virtual false, abstract: false, final false
  static inline void SetStatAsUInt(uint64_t statId, uint32_t value);

  /// @brief Method StartSubsystem, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void StartSubsystem();

  /// @brief Method StopSubsystem, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void StopSubsystem();

  /// @brief Method StringToPath, addr 0x682b074, size 0x20, virtual false, abstract: false, final false
  static inline uint64_t StringToPath(::StringW str);

  constexpr bool const& __cordl_internal_get__failedInitialization_k__BackingField() const;

  constexpr bool& __cordl_internal_get__failedInitialization_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get_company() const;

  constexpr ::StringW& __cordl_internal_get_company();

  constexpr ::StringW const& __cordl_internal_get_featureIdInternal() const;

  constexpr ::StringW& __cordl_internal_get_featureIdInternal();

  constexpr bool const& __cordl_internal_get_internalFieldsUpdated() const;

  constexpr bool& __cordl_internal_get_internalFieldsUpdated();

  constexpr bool const& __cordl_internal_get_m_enabled() const;

  constexpr bool& __cordl_internal_get_m_enabled();

  constexpr ::StringW const& __cordl_internal_get_nameUi() const;

  constexpr ::StringW& __cordl_internal_get_nameUi();

  constexpr ::StringW const& __cordl_internal_get_openxrExtensionStrings() const;

  constexpr ::StringW& __cordl_internal_get_openxrExtensionStrings();

  constexpr int32_t const& __cordl_internal_get_priority() const;

  constexpr int32_t& __cordl_internal_get_priority();

  constexpr bool const& __cordl_internal_get_required() const;

  constexpr bool& __cordl_internal_get_required();

  constexpr ::StringW const& __cordl_internal_get_version() const;

  constexpr ::StringW& __cordl_internal_get_version();

  constexpr void __cordl_internal_set__failedInitialization_k__BackingField(bool value);

  constexpr void __cordl_internal_set_company(::StringW value);

  constexpr void __cordl_internal_set_featureIdInternal(::StringW value);

  constexpr void __cordl_internal_set_internalFieldsUpdated(bool value);

  constexpr void __cordl_internal_set_m_enabled(bool value);

  constexpr void __cordl_internal_set_nameUi(::StringW value);

  constexpr void __cordl_internal_set_openxrExtensionStrings(::StringW value);

  constexpr void __cordl_internal_set_priority(int32_t value);

  constexpr void __cordl_internal_set_required(bool value);

  constexpr void __cordl_internal_set_version(::StringW value);

  /// @brief Method .ctor, addr 0x682ac60, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline bool getStaticF__requiredFeatureFailed_k__BackingField();

  /// @brief Method get_enabled, addr 0x681c88c, size 0x104, virtual false, abstract: false, final false
  inline bool get_enabled();

  /// @brief Method get_failedInitialization, addr 0x682ac68, size 0x8, virtual false, abstract: false, final false
  inline bool get_failedInitialization();

  /// @brief Method get_requiredFeatureFailed, addr 0x682ac78, size 0x4c, virtual false, abstract: false, final false
  static inline bool get_requiredFeatureFailed();

  /// @brief Method get_xrGetInstanceProcAddr, addr 0x682ae8c, size 0x8, virtual false, abstract: false, final false
  static inline ::System::IntPtr get_xrGetInstanceProcAddr();

  /// @brief Method runtime_RegisterStatsDescriptor, addr 0x682b74c, size 0xa0, virtual false, abstract: false, final false
  static inline uint64_t runtime_RegisterStatsDescriptor(::StringW statName, ::UnityEngine::XR::OpenXR::Features::OpenXRFeature_StatFlags statFlags);

  /// @brief Method runtime_SetStatAsFloat, addr 0x682b7f0, size 0x8c, virtual false, abstract: false, final false
  static inline void runtime_SetStatAsFloat(uint64_t statId, float_t value);

  /// @brief Method runtime_SetStatAsUInt, addr 0x682b880, size 0x84, virtual false, abstract: false, final false
  static inline void runtime_SetStatAsUInt(uint64_t statId, uint32_t value);

  static inline void setStaticF__requiredFeatureFailed_k__BackingField(bool value);

  /// @brief Method set_enabled, addr 0x682ad18, size 0x174, virtual false, abstract: false, final false
  inline void set_enabled(bool value);

  /// @brief Method set_failedInitialization, addr 0x682ac70, size 0x8, virtual false, abstract: false, final false
  inline void set_failedInitialization(bool value);

  /// @brief Method set_requiredFeatureFailed, addr 0x682acc4, size 0x54, virtual false, abstract: false, final false
  static inline void set_requiredFeatureFailed(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OpenXRFeature();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OpenXRFeature", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OpenXRFeature(OpenXRFeature&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OpenXRFeature", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OpenXRFeature(OpenXRFeature const&) = delete;

  /// @brief Field Library offset 0xffffffff size 0x8
  static constexpr ::ConstString Library{ u"UnityOpenXR" };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18522 };

  /// @brief Field m_enabled, offset: 0x18, size: 0x1, def value: None
  bool ___m_enabled;

  /// @brief Field <failedInitialization>k__BackingField, offset: 0x19, size: 0x1, def value: None
  bool ____failedInitialization_k__BackingField;

  /// @brief Field nameUi, offset: 0x20, size: 0x8, def value: None
  ::StringW ___nameUi;

  /// @brief Field version, offset: 0x28, size: 0x8, def value: None
  ::StringW ___version;

  /// @brief Field featureIdInternal, offset: 0x30, size: 0x8, def value: None
  ::StringW ___featureIdInternal;

  /// @brief Field openxrExtensionStrings, offset: 0x38, size: 0x8, def value: None
  ::StringW ___openxrExtensionStrings;

  /// @brief Field company, offset: 0x40, size: 0x8, def value: None
  ::StringW ___company;

  /// @brief Field priority, offset: 0x48, size: 0x4, def value: None
  int32_t ___priority;

  /// @brief Field required, offset: 0x4c, size: 0x1, def value: None
  bool ___required;

  /// @brief Field internalFieldsUpdated, offset: 0x4d, size: 0x1, def value: None
  bool ___internalFieldsUpdated;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::OpenXRFeature, ___m_enabled) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::OpenXRFeature, ____failedInitialization_k__BackingField) == 0x19, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::OpenXRFeature, ___nameUi) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::OpenXRFeature, ___version) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::OpenXRFeature, ___featureIdInternal) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::OpenXRFeature, ___openxrExtensionStrings) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::OpenXRFeature, ___company) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::OpenXRFeature, ___priority) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::OpenXRFeature, ___required) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::OpenXRFeature, ___internalFieldsUpdated) == 0x4d, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::Features::OpenXRFeature, 0x50>, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::Features
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::Features::OpenXRFeature_LoaderEvent, "UnityEngine.XR.OpenXR.Features", "OpenXRFeature/LoaderEvent");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::Features::OpenXRFeature_NativeEvent, "UnityEngine.XR.OpenXR.Features", "OpenXRFeature/NativeEvent");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::Features::OpenXRFeature_StatFlags, "UnityEngine.XR.OpenXR.Features", "OpenXRFeature/StatFlags");
NEED_NO_BOX(::UnityEngine::XR::OpenXR::Features::OpenXRFeature);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::Features::OpenXRFeature*, "UnityEngine.XR.OpenXR.Features", "OpenXRFeature");
