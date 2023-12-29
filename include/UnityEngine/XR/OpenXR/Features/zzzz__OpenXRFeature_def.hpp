#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OpenXRFeature)
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrEnvironmentBlendMode;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::XR::OpenXR {
class OpenXRLoaderBase;
}
namespace UnityEngine::XR::OpenXR::Features {
struct __OpenXRFeature__LoaderEvent;
}
namespace UnityEngine::InputSystem {
class InputAction;
}
namespace UnityEngine::XR::OpenXR::Features {
struct __OpenXRFeature__NativeEvent;
}
// Forward declare root types
namespace UnityEngine::XR::OpenXR::Features {
struct __OpenXRFeature__LoaderEvent;
}
namespace UnityEngine::XR::OpenXR::Features {
struct __OpenXRFeature__NativeEvent;
}
namespace UnityEngine::XR::OpenXR::Features {
class OpenXRFeature;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::OpenXR::Features::__OpenXRFeature__LoaderEvent);
MARK_VAL_T(::UnityEngine::XR::OpenXR::Features::__OpenXRFeature__NativeEvent);
MARK_REF_PTR_T(::UnityEngine::XR::OpenXR::Features::OpenXRFeature);
// Type: ::LoaderEvent
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::XR::OpenXR::Features {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14439))
// CS Name: ::OpenXRFeature::LoaderEvent
struct CORDL_TYPE __OpenXRFeature__LoaderEvent {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OpenXRFeature__LoaderEvent_Unwrapped
  enum struct ____OpenXRFeature__LoaderEvent_Unwrapped : int32_t {
    __E_SubsystemCreate = static_cast<int32_t>(0x0),
    __E_SubsystemDestroy = static_cast<int32_t>(0x1),
    __E_SubsystemStart = static_cast<int32_t>(0x2),
    __E_SubsystemStop = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OpenXRFeature__LoaderEvent_Unwrapped() const noexcept {
    return static_cast<____OpenXRFeature__LoaderEvent_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OpenXRFeature__LoaderEvent(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OpenXRFeature__LoaderEvent();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field SubsystemCreate value: static_cast<int32_t>(0x0)
  static ::UnityEngine::XR::OpenXR::Features::__OpenXRFeature__LoaderEvent const SubsystemCreate;

  /// @brief Field SubsystemDestroy value: static_cast<int32_t>(0x1)
  static ::UnityEngine::XR::OpenXR::Features::__OpenXRFeature__LoaderEvent const SubsystemDestroy;

  /// @brief Field SubsystemStart value: static_cast<int32_t>(0x2)
  static ::UnityEngine::XR::OpenXR::Features::__OpenXRFeature__LoaderEvent const SubsystemStart;

  /// @brief Field SubsystemStop value: static_cast<int32_t>(0x3)
  static ::UnityEngine::XR::OpenXR::Features::__OpenXRFeature__LoaderEvent const SubsystemStop;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::Features::__OpenXRFeature__LoaderEvent, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::__OpenXRFeature__LoaderEvent, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::XR::OpenXR::Features
// Type: ::NativeEvent
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::XR::OpenXR::Features {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14440))
// CS Name: ::OpenXRFeature::NativeEvent
struct CORDL_TYPE __OpenXRFeature__NativeEvent {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OpenXRFeature__NativeEvent_Unwrapped
  enum struct ____OpenXRFeature__NativeEvent_Unwrapped : int32_t {
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
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OpenXRFeature__NativeEvent_Unwrapped() const noexcept {
    return static_cast<____OpenXRFeature__NativeEvent_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OpenXRFeature__NativeEvent(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OpenXRFeature__NativeEvent();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field XrSetupConfigValues value: static_cast<int32_t>(0x0)
  static ::UnityEngine::XR::OpenXR::Features::__OpenXRFeature__NativeEvent const XrSetupConfigValues;

  /// @brief Field XrSystemIdChanged value: static_cast<int32_t>(0x1)
  static ::UnityEngine::XR::OpenXR::Features::__OpenXRFeature__NativeEvent const XrSystemIdChanged;

  /// @brief Field XrInstanceChanged value: static_cast<int32_t>(0x2)
  static ::UnityEngine::XR::OpenXR::Features::__OpenXRFeature__NativeEvent const XrInstanceChanged;

  /// @brief Field XrSessionChanged value: static_cast<int32_t>(0x3)
  static ::UnityEngine::XR::OpenXR::Features::__OpenXRFeature__NativeEvent const XrSessionChanged;

  /// @brief Field XrBeginSession value: static_cast<int32_t>(0x4)
  static ::UnityEngine::XR::OpenXR::Features::__OpenXRFeature__NativeEvent const XrBeginSession;

  /// @brief Field XrSessionStateChanged value: static_cast<int32_t>(0x5)
  static ::UnityEngine::XR::OpenXR::Features::__OpenXRFeature__NativeEvent const XrSessionStateChanged;

  /// @brief Field XrChangedSpaceApp value: static_cast<int32_t>(0x6)
  static ::UnityEngine::XR::OpenXR::Features::__OpenXRFeature__NativeEvent const XrChangedSpaceApp;

  /// @brief Field XrEndSession value: static_cast<int32_t>(0x7)
  static ::UnityEngine::XR::OpenXR::Features::__OpenXRFeature__NativeEvent const XrEndSession;

  /// @brief Field XrDestroySession value: static_cast<int32_t>(0x8)
  static ::UnityEngine::XR::OpenXR::Features::__OpenXRFeature__NativeEvent const XrDestroySession;

  /// @brief Field XrDestroyInstance value: static_cast<int32_t>(0x9)
  static ::UnityEngine::XR::OpenXR::Features::__OpenXRFeature__NativeEvent const XrDestroyInstance;

  /// @brief Field XrIdle value: static_cast<int32_t>(0xa)
  static ::UnityEngine::XR::OpenXR::Features::__OpenXRFeature__NativeEvent const XrIdle;

  /// @brief Field XrReady value: static_cast<int32_t>(0xb)
  static ::UnityEngine::XR::OpenXR::Features::__OpenXRFeature__NativeEvent const XrReady;

  /// @brief Field XrSynchronized value: static_cast<int32_t>(0xc)
  static ::UnityEngine::XR::OpenXR::Features::__OpenXRFeature__NativeEvent const XrSynchronized;

  /// @brief Field XrVisible value: static_cast<int32_t>(0xd)
  static ::UnityEngine::XR::OpenXR::Features::__OpenXRFeature__NativeEvent const XrVisible;

  /// @brief Field XrFocused value: static_cast<int32_t>(0xe)
  static ::UnityEngine::XR::OpenXR::Features::__OpenXRFeature__NativeEvent const XrFocused;

  /// @brief Field XrStopping value: static_cast<int32_t>(0xf)
  static ::UnityEngine::XR::OpenXR::Features::__OpenXRFeature__NativeEvent const XrStopping;

  /// @brief Field XrExiting value: static_cast<int32_t>(0x10)
  static ::UnityEngine::XR::OpenXR::Features::__OpenXRFeature__NativeEvent const XrExiting;

  /// @brief Field XrLossPending value: static_cast<int32_t>(0x11)
  static ::UnityEngine::XR::OpenXR::Features::__OpenXRFeature__NativeEvent const XrLossPending;

  /// @brief Field XrInstanceLossPending value: static_cast<int32_t>(0x12)
  static ::UnityEngine::XR::OpenXR::Features::__OpenXRFeature__NativeEvent const XrInstanceLossPending;

  /// @brief Field XrRestartRequested value: static_cast<int32_t>(0x13)
  static ::UnityEngine::XR::OpenXR::Features::__OpenXRFeature__NativeEvent const XrRestartRequested;

  /// @brief Field XrRequestRestartLoop value: static_cast<int32_t>(0x14)
  static ::UnityEngine::XR::OpenXR::Features::__OpenXRFeature__NativeEvent const XrRequestRestartLoop;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::Features::__OpenXRFeature__NativeEvent, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::__OpenXRFeature__NativeEvent, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::XR::OpenXR::Features
// Type: UnityEngine.XR.OpenXR.Features::OpenXRFeature
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 78, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::OpenXR::Features {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10137))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14441))
// CS Name: ::UnityEngine.XR.OpenXR.Features::OpenXRFeature*
class CORDL_TYPE OpenXRFeature : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  using NativeEvent = ::UnityEngine::XR::OpenXR::Features::__OpenXRFeature__NativeEvent;

  using LoaderEvent = ::UnityEngine::XR::OpenXR::Features::__OpenXRFeature__LoaderEvent;

  /// @brief Field m_enabled, offset 0x18, size 0x1
  __declspec(property(get = __get_m_enabled, put = __set_m_enabled)) bool m_enabled;

  /// @brief Field <failedInitialization>k__BackingField, offset 0x19, size 0x1
  __declspec(property(get = __get__failedInitialization_k__BackingField, put = __set__failedInitialization_k__BackingField)) bool _failedInitialization_k__BackingField;

  /// @brief Field nameUi, offset 0x20, size 0x8
  __declspec(property(get = __get_nameUi, put = __set_nameUi))::StringW nameUi;

  /// @brief Field version, offset 0x28, size 0x8
  __declspec(property(get = __get_version, put = __set_version))::StringW version;

  /// @brief Field featureIdInternal, offset 0x30, size 0x8
  __declspec(property(get = __get_featureIdInternal, put = __set_featureIdInternal))::StringW featureIdInternal;

  /// @brief Field openxrExtensionStrings, offset 0x38, size 0x8
  __declspec(property(get = __get_openxrExtensionStrings, put = __set_openxrExtensionStrings))::StringW openxrExtensionStrings;

  /// @brief Field company, offset 0x40, size 0x8
  __declspec(property(get = __get_company, put = __set_company))::StringW company;

  /// @brief Field priority, offset 0x48, size 0x4
  __declspec(property(get = __get_priority, put = __set_priority)) int32_t priority;

  /// @brief Field required, offset 0x4c, size 0x1
  __declspec(property(get = __get_required, put = __set_required)) bool required;

  /// @brief Field internalFieldsUpdated, offset 0x4d, size 0x1
  __declspec(property(get = __get_internalFieldsUpdated, put = __set_internalFieldsUpdated)) bool internalFieldsUpdated;

  /// @brief Field <requiredFeatureFailed>k__BackingField, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF__requiredFeatureFailed_k__BackingField, put = setStaticF__requiredFeatureFailed_k__BackingField)) bool _requiredFeatureFailed_k__BackingField;

  __declspec(property(get = get_failedInitialization, put = set_failedInitialization)) bool failedInitialization;

  __declspec(property(get = get_enabled, put = set_enabled)) bool enabled;

  constexpr bool& __get_m_enabled();

  constexpr bool const& __get_m_enabled() const;

  constexpr void __set_m_enabled(bool value);

  constexpr bool& __get__failedInitialization_k__BackingField();

  constexpr bool const& __get__failedInitialization_k__BackingField() const;

  constexpr void __set__failedInitialization_k__BackingField(bool value);

  constexpr ::StringW& __get_nameUi();

  constexpr ::StringW const& __get_nameUi() const;

  constexpr void __set_nameUi(::StringW value);

  constexpr ::StringW& __get_version();

  constexpr ::StringW const& __get_version() const;

  constexpr void __set_version(::StringW value);

  constexpr ::StringW& __get_featureIdInternal();

  constexpr ::StringW const& __get_featureIdInternal() const;

  constexpr void __set_featureIdInternal(::StringW value);

  constexpr ::StringW& __get_openxrExtensionStrings();

  constexpr ::StringW const& __get_openxrExtensionStrings() const;

  constexpr void __set_openxrExtensionStrings(::StringW value);

  constexpr ::StringW& __get_company();

  constexpr ::StringW const& __get_company() const;

  constexpr void __set_company(::StringW value);

  constexpr int32_t& __get_priority();

  constexpr int32_t const& __get_priority() const;

  constexpr void __set_priority(int32_t value);

  constexpr bool& __get_required();

  constexpr bool const& __get_required() const;

  constexpr void __set_required(bool value);

  constexpr bool& __get_internalFieldsUpdated();

  constexpr bool const& __get_internalFieldsUpdated() const;

  constexpr void __set_internalFieldsUpdated(bool value);

  static inline void setStaticF__requiredFeatureFailed_k__BackingField(bool value);

  static inline bool getStaticF__requiredFeatureFailed_k__BackingField();

  /// @brief Method get_failedInitialization addr 0x2b05b58 size 0x8 virtual false final false
  inline bool get_failedInitialization();

  /// @brief Method set_failedInitialization addr 0x2b05b60 size 0xc virtual false final false
  inline void set_failedInitialization(bool value);

  /// @brief Method get_requiredFeatureFailed addr 0x2b05b6c size 0x48 virtual false final false
  static inline bool get_requiredFeatureFailed();

  /// @brief Method set_requiredFeatureFailed addr 0x2b05bb4 size 0x4c virtual false final false
  static inline void set_requiredFeatureFailed(bool value);

  /// @brief Method get_enabled addr 0x2afbc04 size 0xec virtual false final false
  inline bool get_enabled();

  /// @brief Method set_enabled addr 0x2b05c00 size 0x15c virtual false final false
  inline void set_enabled(bool value);

  /// @brief Method get_xrGetInstanceProcAddr addr 0x2b05d5c size 0x8 virtual false final false
  static inline void* get_xrGetInstanceProcAddr();

  /// @brief Method HookGetInstanceProcAddr addr 0x2b05de0 size 0x8 virtual true final false
  inline void* HookGetInstanceProcAddr(void* func);

  /// @brief Method OnSubsystemCreate addr 0x2b05de8 size 0x4 virtual true final false
  inline void OnSubsystemCreate();

  /// @brief Method OnSubsystemStart addr 0x2b05dec size 0x4 virtual true final false
  inline void OnSubsystemStart();

  /// @brief Method OnSubsystemStop addr 0x2b05df0 size 0x4 virtual true final false
  inline void OnSubsystemStop();

  /// @brief Method OnSubsystemDestroy addr 0x2b05df4 size 0x4 virtual true final false
  inline void OnSubsystemDestroy();

  /// @brief Method OnInstanceCreate addr 0x2b05df8 size 0x8 virtual true final false
  inline bool OnInstanceCreate(uint64_t xrInstance);

  /// @brief Method OnSystemChange addr 0x2b05e00 size 0x4 virtual true final false
  inline void OnSystemChange(uint64_t xrSystem);

  /// @brief Method OnSessionCreate addr 0x2b05e04 size 0x4 virtual true final false
  inline void OnSessionCreate(uint64_t xrSession);

  /// @brief Method OnAppSpaceChange addr 0x2b05e08 size 0x4 virtual true final false
  inline void OnAppSpaceChange(uint64_t xrSpace);

  /// @brief Method OnSessionStateChange addr 0x2b05e0c size 0x4 virtual true final false
  inline void OnSessionStateChange(int32_t oldState, int32_t newState);

  /// @brief Method OnSessionBegin addr 0x2b05e10 size 0x4 virtual true final false
  inline void OnSessionBegin(uint64_t xrSession);

  /// @brief Method OnSessionEnd addr 0x2b05e14 size 0x4 virtual true final false
  inline void OnSessionEnd(uint64_t xrSession);

  /// @brief Method OnSessionExiting addr 0x2b05e18 size 0x4 virtual true final false
  inline void OnSessionExiting(uint64_t xrSession);

  /// @brief Method OnSessionDestroy addr 0x2b05e1c size 0x4 virtual true final false
  inline void OnSessionDestroy(uint64_t xrSession);

  /// @brief Method OnInstanceDestroy addr 0x2b05e20 size 0x4 virtual true final false
  inline void OnInstanceDestroy(uint64_t xrInstance);

  /// @brief Method OnSessionLossPending addr 0x2b05e24 size 0x4 virtual true final false
  inline void OnSessionLossPending(uint64_t xrSession);

  /// @brief Method OnInstanceLossPending addr 0x2b05e28 size 0x4 virtual true final false
  inline void OnInstanceLossPending(uint64_t xrInstance);

  /// @brief Method OnFormFactorChange addr 0x2b05e2c size 0x4 virtual true final false
  inline void OnFormFactorChange(int32_t xrFormFactor);

  /// @brief Method OnViewConfigurationTypeChange addr 0x2b05e30 size 0x4 virtual true final false
  inline void OnViewConfigurationTypeChange(int32_t xrViewConfigurationType);

  /// @brief Method OnEnvironmentBlendModeChange addr 0x2b05e34 size 0x4 virtual true final false
  inline void OnEnvironmentBlendModeChange(::UnityEngine::XR::OpenXR::NativeTypes::XrEnvironmentBlendMode xrEnvironmentBlendMode);

  /// @brief Method OnEnabledChange addr 0x2b05e38 size 0x4 virtual true final false
  inline void OnEnabledChange();

  /// @brief Method PathToString addr 0x2b05e3c size 0x7c virtual false final false
  static inline ::StringW PathToString(uint64_t path);

  /// @brief Method StringToPath addr 0x2b05f44 size 0x24 virtual false final false
  static inline uint64_t StringToPath(::StringW str);

  /// @brief Method GetCurrentInteractionProfile addr 0x2b06008 size 0x24 virtual false final false
  static inline uint64_t GetCurrentInteractionProfile(uint64_t userPath);

  /// @brief Method GetCurrentInteractionProfile addr 0x2b060b8 size 0x3c virtual false final false
  static inline uint64_t GetCurrentInteractionProfile(::StringW userPath);

  /// @brief Method GetCurrentAppSpace addr 0x2b060f4 size 0x24 virtual false final false
  static inline uint64_t GetCurrentAppSpace();

  /// @brief Method GetViewConfigurationTypeForRenderPass addr 0x2b0619c size 0x4 virtual false final false
  static inline int32_t GetViewConfigurationTypeForRenderPass(int32_t renderPassIndex);

  /// @brief Method SetEnvironmentBlendMode addr 0x2b0621c size 0x4 virtual false final false
  static inline void SetEnvironmentBlendMode(::UnityEngine::XR::OpenXR::NativeTypes::XrEnvironmentBlendMode xrEnvironmentBlendMode);

  /// @brief Method GetEnvironmentBlendMode addr 0x2b0629c size 0x4 virtual false final false
  static inline ::UnityEngine::XR::OpenXR::NativeTypes::XrEnvironmentBlendMode GetEnvironmentBlendMode();

  /// @brief Method CreateSubsystem addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TDescriptor, typename TSubsystem> inline void CreateSubsystem(::System::Collections::Generic::List_1<TDescriptor>* descriptors, ::StringW id);

  /// @brief Method StartSubsystem addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> inline void StartSubsystem();

  /// @brief Method StopSubsystem addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> inline void StopSubsystem();

  /// @brief Method DestroySubsystem addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> inline void DestroySubsystem();

  /// @brief Method OnEnable addr 0x2b06308 size 0x4 virtual true final false
  inline void OnEnable();

  /// @brief Method OnDisable addr 0x2b0630c size 0x4 virtual true final false
  inline void OnDisable();

  /// @brief Method ReceiveLoaderEvent addr 0x2afe92c size 0x1d4 virtual false final false
  static inline bool ReceiveLoaderEvent(::UnityEngine::XR::OpenXR::OpenXRLoaderBase* loader, ::UnityEngine::XR::OpenXR::Features::__OpenXRFeature__LoaderEvent e);

  /// @brief Method ReceiveNativeEvent addr 0x2b01350 size 0x300 virtual false final false
  static inline void ReceiveNativeEvent(::UnityEngine::XR::OpenXR::Features::__OpenXRFeature__NativeEvent e, uint64_t payload);

  /// @brief Method Initialize addr 0x2afdb24 size 0x120 virtual false final false
  static inline void Initialize();

  /// @brief Method HookGetInstanceProcAddr addr 0x2afdcac size 0x11c virtual false final false
  static inline void HookGetInstanceProcAddr();

  /// @brief Method GetAction addr 0x2b064e0 size 0x58 virtual false final false
  inline uint64_t GetAction(::UnityEngine::InputSystem::InputAction* inputAction);

  /// @brief Method Internal_PathToStringPtr addr 0x2b05eb8 size 0x8c virtual false final false
  static inline bool Internal_PathToStringPtr(uint64_t pathId, ByRef<void*> path);

  /// @brief Method Internal_StringToPath addr 0x2b05f68 size 0xa0 virtual false final false
  static inline bool Internal_StringToPath(::StringW str, ByRef<uint64_t> pathId);

  /// @brief Method Internal_GetCurrentInteractionProfile addr 0x2b0602c size 0x8c virtual false final false
  static inline bool Internal_GetCurrentInteractionProfile(uint64_t pathId, ByRef<uint64_t> interactionProfile);

  /// @brief Method Internal_GetFormFactor addr 0x2b06310 size 0x68 virtual false final false
  static inline int32_t Internal_GetFormFactor();

  /// @brief Method Internal_GetViewConfigurationType addr 0x2b06378 size 0x68 virtual false final false
  static inline int32_t Internal_GetViewConfigurationType();

  /// @brief Method Internal_GetViewTypeFromRenderIndex addr 0x2b061a0 size 0x7c virtual false final false
  static inline int32_t Internal_GetViewTypeFromRenderIndex(int32_t renderPassIndex);

  /// @brief Method Internal_GetSessionState addr 0x2b063e0 size 0x84 virtual false final false
  static inline void Internal_GetSessionState(ByRef<int32_t> oldState, ByRef<int32_t> newState);

  /// @brief Method Internal_GetEnvironmentBlendMode addr 0x2b062a0 size 0x68 virtual false final false
  static inline ::UnityEngine::XR::OpenXR::NativeTypes::XrEnvironmentBlendMode Internal_GetEnvironmentBlendMode();

  /// @brief Method Internal_SetEnvironmentBlendMode addr 0x2b06220 size 0x7c virtual false final false
  static inline void Internal_SetEnvironmentBlendMode(::UnityEngine::XR::OpenXR::NativeTypes::XrEnvironmentBlendMode xrEnvironmentBlendMode);

  /// @brief Method Internal_GetAppSpace addr 0x2b06118 size 0x84 virtual false final false
  static inline bool Internal_GetAppSpace(ByRef<uint64_t> appSpace);

  /// @brief Method Internal_GetProcAddressPtr addr 0x2b05d64 size 0x7c virtual false final false
  static inline void* Internal_GetProcAddressPtr(bool loaderDefault);

  /// @brief Method Internal_SetProcAddressPtrAndLoadStage1 addr 0x2b06464 size 0x7c virtual false final false
  static inline void Internal_SetProcAddressPtrAndLoadStage1(void* func);

  static inline ::UnityEngine::XR::OpenXR::Features::OpenXRFeature* New_ctor();

  /// @brief Method .ctor addr 0x2b06538 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "OpenXRFeature", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OpenXRFeature(OpenXRFeature&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OpenXRFeature", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OpenXRFeature(OpenXRFeature const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OpenXRFeature();

public:
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

  /// @brief Field Library offset 0xffffffff size 0x8
  static constexpr ::ConstString Library{ u"UnityOpenXR" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::Features::OpenXRFeature, 0x50>, "Size mismatch!");

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

} // namespace UnityEngine::XR::OpenXR::Features
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::Features::__OpenXRFeature__LoaderEvent, "UnityEngine.XR.OpenXR.Features", "OpenXRFeature/LoaderEvent");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::Features::__OpenXRFeature__NativeEvent, "UnityEngine.XR.OpenXR.Features", "OpenXRFeature/NativeEvent");
NEED_NO_BOX(::UnityEngine::XR::OpenXR::Features::OpenXRFeature);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::Features::OpenXRFeature*, "UnityEngine.XR.OpenXR.Features", "OpenXRFeature");
