#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/OpenXRLoaderBase.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/XR/Management/zzzz__XRLoaderHelper_def.hpp"
#include "UnityEngine/XR/OpenXR/Features/zzzz__OpenXRFeature_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OpenXRLoaderBase)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class AsyncCallback;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace System {
class UnhandledExceptionEventArgs;
}
namespace System {
class UnhandledExceptionEventHandler;
}
namespace UnityEngine::XR::OpenXR::Features {
struct OpenXRFeature_NativeEvent;
}
namespace UnityEngine::XR::OpenXR::Features {
class OpenXRFeature;
}
namespace UnityEngine::XR::OpenXR {
class OpenXRLoaderBase_FeatureLoggingInfo;
}
namespace UnityEngine::XR::OpenXR {
struct OpenXRLoaderBase_LoaderState;
}
namespace UnityEngine::XR::OpenXR {
class OpenXRLoaderBase_ReceiveNativeEventDelegate;
}
namespace UnityEngine::XR::OpenXR {
class OpenXRLoaderBase___c;
}
namespace UnityEngine::XR {
class XRDisplaySubsystemDescriptor;
}
namespace UnityEngine::XR {
class XRInputSubsystem;
}
// Forward declare root types
namespace UnityEngine::XR::OpenXR {
struct OpenXRLoaderBase_LoaderState;
}
namespace UnityEngine::XR::OpenXR {
class OpenXRLoaderBase;
}
namespace UnityEngine::XR::OpenXR {
class OpenXRLoaderBase_FeatureLoggingInfo;
}
namespace UnityEngine::XR::OpenXR {
class OpenXRLoaderBase_ReceiveNativeEventDelegate;
}
namespace UnityEngine::XR::OpenXR {
class OpenXRLoaderBase___c;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::OpenXR::OpenXRLoaderBase_LoaderState);
MARK_REF_PTR_T(::UnityEngine::XR::OpenXR::OpenXRLoaderBase);
MARK_REF_PTR_T(::UnityEngine::XR::OpenXR::OpenXRLoaderBase_FeatureLoggingInfo);
MARK_REF_PTR_T(::UnityEngine::XR::OpenXR::OpenXRLoaderBase_ReceiveNativeEventDelegate);
MARK_REF_PTR_T(::UnityEngine::XR::OpenXR::OpenXRLoaderBase___c);
// Dependencies System.Object
namespace UnityEngine::XR::OpenXR {
// Is value type: false
// CS Name: UnityEngine.XR.OpenXR.OpenXRLoaderBase/FeatureLoggingInfo
class CORDL_TYPE OpenXRLoaderBase_FeatureLoggingInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_company, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_company, put = __cordl_internal_set_m_company)) ::StringW m_company;

  /// @brief Field m_nameUi, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_nameUi, put = __cordl_internal_set_m_nameUi)) ::StringW m_nameUi;

  /// @brief Field m_openxrExtensionStrings, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_openxrExtensionStrings, put = __cordl_internal_set_m_openxrExtensionStrings)) ::StringW m_openxrExtensionStrings;

  /// @brief Field m_version, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_version, put = __cordl_internal_set_m_version)) ::StringW m_version;

  static inline ::UnityEngine::XR::OpenXR::OpenXRLoaderBase_FeatureLoggingInfo* New_ctor(::StringW nameUi, ::StringW version, ::StringW company, ::StringW extensionStrings);

  constexpr ::StringW const& __cordl_internal_get_m_company() const;

  constexpr ::StringW& __cordl_internal_get_m_company();

  constexpr ::StringW const& __cordl_internal_get_m_nameUi() const;

  constexpr ::StringW& __cordl_internal_get_m_nameUi();

  constexpr ::StringW const& __cordl_internal_get_m_openxrExtensionStrings() const;

  constexpr ::StringW& __cordl_internal_get_m_openxrExtensionStrings();

  constexpr ::StringW const& __cordl_internal_get_m_version() const;

  constexpr ::StringW& __cordl_internal_get_m_version();

  constexpr void __cordl_internal_set_m_company(::StringW value);

  constexpr void __cordl_internal_set_m_nameUi(::StringW value);

  constexpr void __cordl_internal_set_m_openxrExtensionStrings(::StringW value);

  constexpr void __cordl_internal_set_m_version(::StringW value);

  /// @brief Method .ctor, addr 0x6822570, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::StringW nameUi, ::StringW version, ::StringW company, ::StringW extensionStrings);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OpenXRLoaderBase_FeatureLoggingInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OpenXRLoaderBase_FeatureLoggingInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OpenXRLoaderBase_FeatureLoggingInfo(OpenXRLoaderBase_FeatureLoggingInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OpenXRLoaderBase_FeatureLoggingInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OpenXRLoaderBase_FeatureLoggingInfo(OpenXRLoaderBase_FeatureLoggingInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18470 };

  /// @brief Field m_nameUi, offset: 0x10, size: 0x8, def value: None
  ::StringW ___m_nameUi;

  /// @brief Field m_version, offset: 0x18, size: 0x8, def value: None
  ::StringW ___m_version;

  /// @brief Field m_company, offset: 0x20, size: 0x8, def value: None
  ::StringW ___m_company;

  /// @brief Field m_openxrExtensionStrings, offset: 0x28, size: 0x8, def value: None
  ::StringW ___m_openxrExtensionStrings;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::OpenXRLoaderBase_FeatureLoggingInfo, ___m_nameUi) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::OpenXRLoaderBase_FeatureLoggingInfo, ___m_version) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::OpenXRLoaderBase_FeatureLoggingInfo, ___m_company) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::OpenXRLoaderBase_FeatureLoggingInfo, ___m_openxrExtensionStrings) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::OpenXRLoaderBase_FeatureLoggingInfo, 0x30>, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR
// Dependencies
namespace UnityEngine::XR::OpenXR {
// Is value type: true
// CS Name: UnityEngine.XR.OpenXR.OpenXRLoaderBase/LoaderState
struct CORDL_TYPE OpenXRLoaderBase_LoaderState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __OpenXRLoaderBase_LoaderState_Unwrapped
  enum struct __OpenXRLoaderBase_LoaderState_Unwrapped : int32_t {
    __E_Uninitialized = static_cast<int32_t>(0x0),
    __E_InitializeAttempted = static_cast<int32_t>(0x1),
    __E_Initialized = static_cast<int32_t>(0x2),
    __E_StartAttempted = static_cast<int32_t>(0x3),
    __E_Started = static_cast<int32_t>(0x4),
    __E_StopAttempted = static_cast<int32_t>(0x5),
    __E_Stopped = static_cast<int32_t>(0x6),
    __E_DeinitializeAttempted = static_cast<int32_t>(0x7),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __OpenXRLoaderBase_LoaderState_Unwrapped() const noexcept {
    return static_cast<__OpenXRLoaderBase_LoaderState_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr OpenXRLoaderBase_LoaderState();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr OpenXRLoaderBase_LoaderState(int32_t value__) noexcept;

  /// @brief Field DeinitializeAttempted value: I32(7)
  static ::UnityEngine::XR::OpenXR::OpenXRLoaderBase_LoaderState const DeinitializeAttempted;

  /// @brief Field InitializeAttempted value: I32(1)
  static ::UnityEngine::XR::OpenXR::OpenXRLoaderBase_LoaderState const InitializeAttempted;

  /// @brief Field Initialized value: I32(2)
  static ::UnityEngine::XR::OpenXR::OpenXRLoaderBase_LoaderState const Initialized;

  /// @brief Field StartAttempted value: I32(3)
  static ::UnityEngine::XR::OpenXR::OpenXRLoaderBase_LoaderState const StartAttempted;

  /// @brief Field Started value: I32(4)
  static ::UnityEngine::XR::OpenXR::OpenXRLoaderBase_LoaderState const Started;

  /// @brief Field StopAttempted value: I32(5)
  static ::UnityEngine::XR::OpenXR::OpenXRLoaderBase_LoaderState const StopAttempted;

  /// @brief Field Stopped value: I32(6)
  static ::UnityEngine::XR::OpenXR::OpenXRLoaderBase_LoaderState const Stopped;

  /// @brief Field Uninitialized value: I32(0)
  static ::UnityEngine::XR::OpenXR::OpenXRLoaderBase_LoaderState const Uninitialized;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18471 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::OpenXRLoaderBase_LoaderState, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::OpenXRLoaderBase_LoaderState, 0x4>, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR
// Dependencies System.MulticastDelegate
namespace UnityEngine::XR::OpenXR {
// Is value type: false
// CS Name: UnityEngine.XR.OpenXR.OpenXRLoaderBase/ReceiveNativeEventDelegate
class CORDL_TYPE OpenXRLoaderBase_ReceiveNativeEventDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x6823aac, size 0xa4, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::UnityEngine::XR::OpenXR::Features::OpenXRFeature_NativeEvent e, uint64_t payload, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x6823b50, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x6823a98, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::UnityEngine::XR::OpenXR::Features::OpenXRFeature_NativeEvent e, uint64_t payload);

  static inline ::UnityEngine::XR::OpenXR::OpenXRLoaderBase_ReceiveNativeEventDelegate* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x68238cc, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OpenXRLoaderBase_ReceiveNativeEventDelegate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OpenXRLoaderBase_ReceiveNativeEventDelegate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OpenXRLoaderBase_ReceiveNativeEventDelegate(OpenXRLoaderBase_ReceiveNativeEventDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OpenXRLoaderBase_ReceiveNativeEventDelegate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OpenXRLoaderBase_ReceiveNativeEventDelegate(OpenXRLoaderBase_ReceiveNativeEventDelegate const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18472 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::OpenXRLoaderBase_ReceiveNativeEventDelegate, 0x80>, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR
// Dependencies System.Object
namespace UnityEngine::XR::OpenXR {
// Is value type: false
// CS Name: UnityEngine.XR.OpenXR.OpenXRLoaderBase/<>c
class CORDL_TYPE OpenXRLoaderBase___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::XR::OpenXR::OpenXRLoaderBase___c* __9;

  /// @brief Field <>9__33_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__33_0, put = setStaticF___9__33_0)) ::System::Func_2<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>, bool>* __9__33_0;

  /// @brief Field <>9__33_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__33_1, put = setStaticF___9__33_1)) ::System::Func_2<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>, int32_t>* __9__33_1;

  /// @brief Field <>9__33_2, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__33_2, put = setStaticF___9__33_2)) ::System::Func_2<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>, ::StringW>* __9__33_2;

  static inline ::UnityEngine::XR::OpenXR::OpenXRLoaderBase___c* New_ctor();

  /// @brief Method <InitializeInternal>b__33_0, addr 0x6823bb4, size 0x60, virtual false, abstract: false, final false
  inline bool _InitializeInternal_b__33_0(::UnityEngine::XR::OpenXR::Features::OpenXRFeature* f);

  /// @brief Method <InitializeInternal>b__33_1, addr 0x6823c14, size 0x14, virtual false, abstract: false, final false
  inline int32_t _InitializeInternal_b__33_1(::UnityEngine::XR::OpenXR::Features::OpenXRFeature* f);

  /// @brief Method <InitializeInternal>b__33_2, addr 0x6823c28, size 0x14, virtual false, abstract: false, final false
  inline ::StringW _InitializeInternal_b__33_2(::UnityEngine::XR::OpenXR::Features::OpenXRFeature* f);

  /// @brief Method .ctor, addr 0x6823bb0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::XR::OpenXR::OpenXRLoaderBase___c* getStaticF___9();

  static inline ::System::Func_2<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>, bool>* getStaticF___9__33_0();

  static inline ::System::Func_2<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>, int32_t>* getStaticF___9__33_1();

  static inline ::System::Func_2<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>, ::StringW>* getStaticF___9__33_2();

  static inline void setStaticF___9(::UnityEngine::XR::OpenXR::OpenXRLoaderBase___c* value);

  static inline void setStaticF___9__33_0(::System::Func_2<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>, bool>* value);

  static inline void setStaticF___9__33_1(::System::Func_2<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>, int32_t>* value);

  static inline void setStaticF___9__33_2(::System::Func_2<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>, ::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OpenXRLoaderBase___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OpenXRLoaderBase___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OpenXRLoaderBase___c(OpenXRLoaderBase___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OpenXRLoaderBase___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OpenXRLoaderBase___c(OpenXRLoaderBase___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18473 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::OpenXRLoaderBase___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR
// Dependencies UnityEngine.XR.Management.XRLoaderHelper, UnityEngine.XR.OpenXR.Features.OpenXRFeature::NativeEvent, UnityEngine.XR.OpenXR.OpenXRLoaderBase::LoaderState
namespace UnityEngine::XR::OpenXR {
// Is value type: false
// CS Name: UnityEngine.XR.OpenXR.OpenXRLoaderBase
class CORDL_TYPE OpenXRLoaderBase : public ::UnityEngine::XR::Management::XRLoaderHelper {
public:
  // Declarations
  using FeatureLoggingInfo = ::UnityEngine::XR::OpenXR::OpenXRLoaderBase_FeatureLoggingInfo;

  using LoaderState = ::UnityEngine::XR::OpenXR::OpenXRLoaderBase_LoaderState;

  using ReceiveNativeEventDelegate = ::UnityEngine::XR::OpenXR::OpenXRLoaderBase_ReceiveNativeEventDelegate;

  using __c = ::UnityEngine::XR::OpenXR::OpenXRLoaderBase___c;

  /// @brief Field DisableValidationChecksOnEnteringPlaymode, offset 0x68, size 0x1
  __declspec(property(get = __cordl_internal_get_DisableValidationChecksOnEnteringPlaymode,
                      put = __cordl_internal_set_DisableValidationChecksOnEnteringPlaymode)) bool DisableValidationChecksOnEnteringPlaymode;

  /// @brief Field <Instance>k__BackingField, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__Instance_k__BackingField, put = setStaticF__Instance_k__BackingField)) ::UnityW<::UnityEngine::XR::OpenXR::OpenXRLoaderBase> _Instance_k__BackingField;

  /// @brief Field <currentLoaderState>k__BackingField, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__currentLoaderState_k__BackingField,
                      put = __cordl_internal_set__currentLoaderState_k__BackingField)) ::UnityEngine::XR::OpenXR::OpenXRLoaderBase_LoaderState _currentLoaderState_k__BackingField;

  /// @brief Field actionSetsAttached, offset 0x5c, size 0x1
  __declspec(property(get = __cordl_internal_get_actionSetsAttached, put = __cordl_internal_set_actionSetsAttached)) bool actionSetsAttached;

  __declspec(property(get = get_currentLoaderState, put = set_currentLoaderState)) ::UnityEngine::XR::OpenXR::OpenXRLoaderBase_LoaderState currentLoaderState;

  /// @brief Field currentOpenXRState, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get_currentOpenXRState, put = __cordl_internal_set_currentOpenXRState)) ::UnityEngine::XR::OpenXR::Features::OpenXRFeature_NativeEvent currentOpenXRState;

  __declspec(property(get = get_displaySubsystem)) Il2CppObject* displaySubsystem;

  /// @brief Field featureLoggingInfo, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_featureLoggingInfo,
                      put = __cordl_internal_set_featureLoggingInfo)) ::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::OpenXRLoaderBase_FeatureLoggingInfo*>* featureLoggingInfo;

  __declspec(property(get = get_inputSubsystem)) ::UnityEngine::XR::XRInputSubsystem* inputSubsystem;

  __declspec(property(get = get_isInitialized)) bool isInitialized;

  __declspec(property(get = get_isStarted)) bool isStarted;

  /// @brief Field lastPollCheckTime, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_lastPollCheckTime, put = __cordl_internal_set_lastPollCheckTime)) double_t lastPollCheckTime;

  /// @brief Field runningStates, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_runningStates,
                      put = __cordl_internal_set_runningStates)) ::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::OpenXRLoaderBase_LoaderState>* runningStates;

  /// @brief Field s_DisplaySubsystemDescriptors, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_DisplaySubsystemDescriptors,
                      put = setStaticF_s_DisplaySubsystemDescriptors)) ::System::Collections::Generic::List_1<::UnityEngine::XR::XRDisplaySubsystemDescriptor*>* s_DisplaySubsystemDescriptors;

  /// @brief Field s_InputSubsystemDescriptors, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_InputSubsystemDescriptors, put = setStaticF_s_InputSubsystemDescriptors)) ::System::Collections::Generic::List_1<Il2CppObject*>* s_InputSubsystemDescriptors;

  /// @brief Field unhandledExceptionHandler, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_unhandledExceptionHandler, put = __cordl_internal_set_unhandledExceptionHandler)) ::System::UnhandledExceptionEventHandler* unhandledExceptionHandler;

  /// @brief Field validLoaderDeinitStates, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_validLoaderDeinitStates,
                      put = __cordl_internal_set_validLoaderDeinitStates)) ::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::OpenXRLoaderBase_LoaderState>* validLoaderDeinitStates;

  /// @brief Field validLoaderInitStates, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_validLoaderInitStates,
                      put = __cordl_internal_set_validLoaderInitStates)) ::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::OpenXRLoaderBase_LoaderState>* validLoaderInitStates;

  /// @brief Field validLoaderStartStates, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_validLoaderStartStates,
                      put = __cordl_internal_set_validLoaderStartStates)) ::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::OpenXRLoaderBase_LoaderState>* validLoaderStartStates;

  /// @brief Field validLoaderStopStates, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_validLoaderStopStates,
                      put = __cordl_internal_set_validLoaderStopStates)) ::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::OpenXRLoaderBase_LoaderState>* validLoaderStopStates;

  /// @brief Method CreateSubsystem, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TDescriptor, typename TSubsystem> inline void CreateSubsystem(::System::Collections::Generic::List_1<TDescriptor>* descriptors, ::StringW id);

  /// @brief Method CreateSubsystems, addr 0x6820650, size 0x12c, virtual false, abstract: false, final false
  inline bool CreateSubsystems();

  /// @brief Method DebugLogEnabledSpecExtensions, addr 0x6820ab8, size 0x22c, virtual false, abstract: false, final false
  static inline void DebugLogEnabledSpecExtensions();

  /// @brief Method Deinitialize, addr 0x6821f4c, size 0x2f0, virtual true, abstract: false, final false
  inline bool Deinitialize();

  /// @brief Method DestroySubsystem, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void DestroySubsystem();

  /// @brief Method ExceptionHandler, addr 0x681f2a0, size 0x258, virtual false, abstract: false, final false
  static inline void ExceptionHandler(::System::Object* sender, ::System::UnhandledExceptionEventArgs* args);

  /// @brief Method Initialize, addr 0x681f4f8, size 0x294, virtual true, abstract: false, final false
  inline bool Initialize();

  /// @brief Method InitializeInternal, addr 0x681f78c, size 0x5a8, virtual false, abstract: false, final false
  inline bool InitializeInternal();

  /// @brief Method Internal_BeginSession, addr 0x68210dc, size 0x64, virtual false, abstract: false, final false
  static inline void Internal_BeginSession();

  /// @brief Method Internal_CreateSessionIfNeeded, addr 0x6821070, size 0x6c, virtual false, abstract: false, final false
  static inline bool Internal_CreateSessionIfNeeded();

  /// @brief Method Internal_DestroySession, addr 0x68222a0, size 0x64, virtual false, abstract: false, final false
  static inline void Internal_DestroySession();

  /// @brief Method Internal_EndSession, addr 0x6821ee8, size 0x64, virtual false, abstract: false, final false
  static inline void Internal_EndSession();

  /// @brief Method Internal_InitializeSession, addr 0x682028c, size 0x6c, virtual false, abstract: false, final false
  static inline bool Internal_InitializeSession();

  /// @brief Method Internal_IsExtensionEnabled, addr 0x6822d88, size 0x9c, virtual false, abstract: false, final false
  static inline bool Internal_IsExtensionEnabled(::StringW extensionName);

  /// @brief Method Internal_LoadOpenXRLibrary, addr 0x68224e4, size 0x8c, virtual false, abstract: false, final false
  static inline bool Internal_LoadOpenXRLibrary(::ArrayW<uint8_t, ::Array<uint8_t>*> loaderPath);

  /// @brief Method Internal_PumpMessageLoop, addr 0x6820d9c, size 0x64, virtual false, abstract: false, final false
  static inline void Internal_PumpMessageLoop();

  /// @brief Method Internal_RequestEnableExtensionString, addr 0x682257c, size 0x94, virtual false, abstract: false, final false
  static inline bool Internal_RequestEnableExtensionString(::StringW extensionString);

  /// @brief Method Internal_RequestExitSession, addr 0x682223c, size 0x64, virtual false, abstract: false, final false
  static inline void Internal_RequestExitSession();

  /// @brief Method Internal_SetApplicationInfo, addr 0x6822368, size 0xdc, virtual false, abstract: false, final false
  static inline void Internal_SetApplicationInfo(::StringW applicationName, ::StringW applicationVersion, uint32_t applicationVersionHash, ::StringW engineVersion);

  /// @brief Method Internal_SetCallbacks, addr 0x6823938, size 0x80, virtual false, abstract: false, final false
  static inline void Internal_SetCallbacks(::UnityEngine::XR::OpenXR::OpenXRLoaderBase_ReceiveNativeEventDelegate* callback);

  /// @brief Method Internal_SetSuccessfullyInitialized, addr 0x681fd34, size 0x7c, virtual false, abstract: false, final false
  static inline void Internal_SetSuccessfullyInitialized(bool value);

  /// @brief Method Internal_UnloadOpenXRLibrary, addr 0x6822304, size 0x64, virtual false, abstract: false, final false
  static inline void Internal_UnloadOpenXRLibrary();

  /// @brief Method LoadOpenXRSymbols, addr 0x68200fc, size 0x70, virtual false, abstract: false, final false
  inline bool LoadOpenXRSymbols();

  /// @brief Method LogRequestedOpenXRFeatures, addr 0x6822610, size 0x778, virtual false, abstract: false, final false
  inline void LogRequestedOpenXRFeatures();

  static inline ::UnityEngine::XR::OpenXR::OpenXRLoaderBase* New_ctor();

  /// @brief Method ProcessOpenXRMessageLoop, addr 0x6820ce4, size 0xb8, virtual false, abstract: false, final false
  inline void ProcessOpenXRMessageLoop();

  /// @brief Method ReceiveNativeEvent, addr 0x681ed18, size 0x304, virtual false, abstract: false, final false
  static inline void ReceiveNativeEvent(::UnityEngine::XR::OpenXR::Features::OpenXRFeature_NativeEvent e, uint64_t payload);

  /// @brief Method RegisterOpenXRCallbacks, addr 0x68205b4, size 0x9c, virtual false, abstract: false, final false
  static inline void RegisterOpenXRCallbacks();

  /// @brief Method RequestOpenXRFeatures, addr 0x68202f8, size 0x2bc, virtual false, abstract: false, final false
  inline void RequestOpenXRFeatures();

  /// @brief Method SetApplicationInfo, addr 0x682077c, size 0x158, virtual false, abstract: false, final false
  inline void SetApplicationInfo();

  /// @brief Method Start, addr 0x6820e00, size 0xa4, virtual true, abstract: false, final false
  inline bool Start();

  /// @brief Method StartInternal, addr 0x6820ea4, size 0x1cc, virtual false, abstract: false, final false
  inline bool StartInternal();

  /// @brief Method StartSubsystem, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void StartSubsystem();

  /// @brief Method Stop, addr 0x6821d58, size 0x134, virtual true, abstract: false, final false
  inline bool Stop();

  /// @brief Method StopInternal, addr 0x6821e8c, size 0x5c, virtual false, abstract: false, final false
  inline void StopInternal();

  /// @brief Method StopSubsystem, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void StopSubsystem();

  /// @brief Method StringToWCHAR_T, addr 0x6822444, size 0xa0, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> StringToWCHAR_T(::StringW s);

  constexpr bool const& __cordl_internal_get_DisableValidationChecksOnEnteringPlaymode() const;

  constexpr bool& __cordl_internal_get_DisableValidationChecksOnEnteringPlaymode();

  constexpr ::UnityEngine::XR::OpenXR::OpenXRLoaderBase_LoaderState const& __cordl_internal_get__currentLoaderState_k__BackingField() const;

  constexpr ::UnityEngine::XR::OpenXR::OpenXRLoaderBase_LoaderState& __cordl_internal_get__currentLoaderState_k__BackingField();

  constexpr bool const& __cordl_internal_get_actionSetsAttached() const;

  constexpr bool& __cordl_internal_get_actionSetsAttached();

  constexpr ::UnityEngine::XR::OpenXR::Features::OpenXRFeature_NativeEvent const& __cordl_internal_get_currentOpenXRState() const;

  constexpr ::UnityEngine::XR::OpenXR::Features::OpenXRFeature_NativeEvent& __cordl_internal_get_currentOpenXRState();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::OpenXRLoaderBase_FeatureLoggingInfo*>* const& __cordl_internal_get_featureLoggingInfo() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::OpenXRLoaderBase_FeatureLoggingInfo*>*& __cordl_internal_get_featureLoggingInfo();

  constexpr double_t const& __cordl_internal_get_lastPollCheckTime() const;

  constexpr double_t& __cordl_internal_get_lastPollCheckTime();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::OpenXRLoaderBase_LoaderState>* const& __cordl_internal_get_runningStates() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::OpenXRLoaderBase_LoaderState>*& __cordl_internal_get_runningStates();

  constexpr ::System::UnhandledExceptionEventHandler* const& __cordl_internal_get_unhandledExceptionHandler() const;

  constexpr ::System::UnhandledExceptionEventHandler*& __cordl_internal_get_unhandledExceptionHandler();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::OpenXRLoaderBase_LoaderState>* const& __cordl_internal_get_validLoaderDeinitStates() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::OpenXRLoaderBase_LoaderState>*& __cordl_internal_get_validLoaderDeinitStates();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::OpenXRLoaderBase_LoaderState>* const& __cordl_internal_get_validLoaderInitStates() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::OpenXRLoaderBase_LoaderState>*& __cordl_internal_get_validLoaderInitStates();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::OpenXRLoaderBase_LoaderState>* const& __cordl_internal_get_validLoaderStartStates() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::OpenXRLoaderBase_LoaderState>*& __cordl_internal_get_validLoaderStartStates();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::OpenXRLoaderBase_LoaderState>* const& __cordl_internal_get_validLoaderStopStates() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::OpenXRLoaderBase_LoaderState>*& __cordl_internal_get_validLoaderStopStates();

  constexpr void __cordl_internal_set_DisableValidationChecksOnEnteringPlaymode(bool value);

  constexpr void __cordl_internal_set__currentLoaderState_k__BackingField(::UnityEngine::XR::OpenXR::OpenXRLoaderBase_LoaderState value);

  constexpr void __cordl_internal_set_actionSetsAttached(bool value);

  constexpr void __cordl_internal_set_currentOpenXRState(::UnityEngine::XR::OpenXR::Features::OpenXRFeature_NativeEvent value);

  constexpr void __cordl_internal_set_featureLoggingInfo(::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::OpenXRLoaderBase_FeatureLoggingInfo*>* value);

  constexpr void __cordl_internal_set_lastPollCheckTime(double_t value);

  constexpr void __cordl_internal_set_runningStates(::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::OpenXRLoaderBase_LoaderState>* value);

  constexpr void __cordl_internal_set_unhandledExceptionHandler(::System::UnhandledExceptionEventHandler* value);

  constexpr void __cordl_internal_set_validLoaderDeinitStates(::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::OpenXRLoaderBase_LoaderState>* value);

  constexpr void __cordl_internal_set_validLoaderInitStates(::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::OpenXRLoaderBase_LoaderState>* value);

  constexpr void __cordl_internal_set_validLoaderStartStates(::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::OpenXRLoaderBase_LoaderState>* value);

  constexpr void __cordl_internal_set_validLoaderStopStates(::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::OpenXRLoaderBase_LoaderState>* value);

  /// @brief Method .ctor, addr 0x681e668, size 0x6b0, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityW<::UnityEngine::XR::OpenXR::OpenXRLoaderBase> getStaticF__Instance_k__BackingField();

  static inline ::System::Collections::Generic::List_1<::UnityEngine::XR::XRDisplaySubsystemDescriptor*>* getStaticF_s_DisplaySubsystemDescriptors();

  static inline ::System::Collections::Generic::List_1<Il2CppObject*>* getStaticF_s_InputSubsystemDescriptors();

  /// @brief Method get_Instance, addr 0x681f01c, size 0x5c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::XR::OpenXR::OpenXRLoaderBase> get_Instance();

  /// @brief Method get_currentLoaderState, addr 0x681f0d8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::OpenXR::OpenXRLoaderBase_LoaderState get_currentLoaderState();

  /// @brief Method get_displaySubsystem, addr 0x681f0e8, size 0x68, virtual false, abstract: false, final false
  inline Il2CppObject* get_displaySubsystem();

  /// @brief Method get_inputSubsystem, addr 0x681f150, size 0xe4, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::XRInputSubsystem* get_inputSubsystem();

  /// @brief Method get_isInitialized, addr 0x681f234, size 0x14, virtual false, abstract: false, final false
  inline bool get_isInitialized();

  /// @brief Method get_isStarted, addr 0x681f248, size 0x58, virtual false, abstract: false, final false
  inline bool get_isStarted();

  static inline void setStaticF__Instance_k__BackingField(::UnityW<::UnityEngine::XR::OpenXR::OpenXRLoaderBase> value);

  static inline void setStaticF_s_DisplaySubsystemDescriptors(::System::Collections::Generic::List_1<::UnityEngine::XR::XRDisplaySubsystemDescriptor*>* value);

  static inline void setStaticF_s_InputSubsystemDescriptors(::System::Collections::Generic::List_1<Il2CppObject*>* value);

  /// @brief Method set_Instance, addr 0x681f078, size 0x60, virtual false, abstract: false, final false
  static inline void set_Instance(::UnityEngine::XR::OpenXR::OpenXRLoaderBase* value);

  /// @brief Method set_currentLoaderState, addr 0x681f0e0, size 0x8, virtual false, abstract: false, final false
  inline void set_currentLoaderState(::UnityEngine::XR::OpenXR::OpenXRLoaderBase_LoaderState value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OpenXRLoaderBase();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OpenXRLoaderBase", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OpenXRLoaderBase(OpenXRLoaderBase&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OpenXRLoaderBase", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OpenXRLoaderBase(OpenXRLoaderBase const&) = delete;

  /// @brief Field LibraryName offset 0xffffffff size 0x8
  static constexpr ::ConstString LibraryName{ u"UnityOpenXR" };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18474 };

  /// @brief Field k_IdlePollingWaitTimeInSeconds offset 0xffffffff size 0x8
  static constexpr double_t k_IdlePollingWaitTimeInSeconds{ static_cast<double_t>(0.1) };

  /// @brief Field featureLoggingInfo, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::OpenXRLoaderBase_FeatureLoggingInfo*>* ___featureLoggingInfo;

  /// @brief Field <currentLoaderState>k__BackingField, offset: 0x28, size: 0x4, def value: None
  ::UnityEngine::XR::OpenXR::OpenXRLoaderBase_LoaderState ____currentLoaderState_k__BackingField;

  /// @brief Field validLoaderInitStates, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::OpenXRLoaderBase_LoaderState>* ___validLoaderInitStates;

  /// @brief Field validLoaderStartStates, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::OpenXRLoaderBase_LoaderState>* ___validLoaderStartStates;

  /// @brief Field validLoaderStopStates, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::OpenXRLoaderBase_LoaderState>* ___validLoaderStopStates;

  /// @brief Field validLoaderDeinitStates, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::OpenXRLoaderBase_LoaderState>* ___validLoaderDeinitStates;

  /// @brief Field runningStates, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::OpenXRLoaderBase_LoaderState>* ___runningStates;

  /// @brief Field currentOpenXRState, offset: 0x58, size: 0x4, def value: None
  ::UnityEngine::XR::OpenXR::Features::OpenXRFeature_NativeEvent ___currentOpenXRState;

  /// @brief Field actionSetsAttached, offset: 0x5c, size: 0x1, def value: None
  bool ___actionSetsAttached;

  /// @brief Field unhandledExceptionHandler, offset: 0x60, size: 0x8, def value: None
  ::System::UnhandledExceptionEventHandler* ___unhandledExceptionHandler;

  /// @brief Field DisableValidationChecksOnEnteringPlaymode, offset: 0x68, size: 0x1, def value: None
  bool ___DisableValidationChecksOnEnteringPlaymode;

  /// @brief Field lastPollCheckTime, offset: 0x70, size: 0x8, def value: None
  double_t ___lastPollCheckTime;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::OpenXRLoaderBase, ___featureLoggingInfo) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::OpenXRLoaderBase, ____currentLoaderState_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::OpenXRLoaderBase, ___validLoaderInitStates) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::OpenXRLoaderBase, ___validLoaderStartStates) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::OpenXRLoaderBase, ___validLoaderStopStates) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::OpenXRLoaderBase, ___validLoaderDeinitStates) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::OpenXRLoaderBase, ___runningStates) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::OpenXRLoaderBase, ___currentOpenXRState) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::OpenXRLoaderBase, ___actionSetsAttached) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::OpenXRLoaderBase, ___unhandledExceptionHandler) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::OpenXRLoaderBase, ___DisableValidationChecksOnEnteringPlaymode) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::OpenXRLoaderBase, ___lastPollCheckTime) == 0x70, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::OpenXRLoaderBase, 0x78>, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::OpenXRLoaderBase_LoaderState, "UnityEngine.XR.OpenXR", "OpenXRLoaderBase/LoaderState");
NEED_NO_BOX(::UnityEngine::XR::OpenXR::OpenXRLoaderBase);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::OpenXRLoaderBase*, "UnityEngine.XR.OpenXR", "OpenXRLoaderBase");
NEED_NO_BOX(::UnityEngine::XR::OpenXR::OpenXRLoaderBase_FeatureLoggingInfo);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::OpenXRLoaderBase_FeatureLoggingInfo*, "UnityEngine.XR.OpenXR", "OpenXRLoaderBase/FeatureLoggingInfo");
NEED_NO_BOX(::UnityEngine::XR::OpenXR::OpenXRLoaderBase_ReceiveNativeEventDelegate);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::OpenXRLoaderBase_ReceiveNativeEventDelegate*, "UnityEngine.XR.OpenXR", "OpenXRLoaderBase/ReceiveNativeEventDelegate");
NEED_NO_BOX(::UnityEngine::XR::OpenXR::OpenXRLoaderBase___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::OpenXRLoaderBase___c*, "UnityEngine.XR.OpenXR", "OpenXRLoaderBase/<>c");
