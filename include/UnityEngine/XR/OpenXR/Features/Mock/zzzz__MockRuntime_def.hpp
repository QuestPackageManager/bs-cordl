#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/Features/Mock/MockRuntime.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "UnityEngine/XR/OpenXR/Features/zzzz__OpenXRFeature_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MockRuntime)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
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
namespace UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings {
struct PerformanceDomain;
}
namespace UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings {
struct PerformanceLevelHint;
}
namespace UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings {
struct PerformanceNotificationLevel;
}
namespace UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings {
struct PerformanceSubDomain;
}
namespace UnityEngine::XR::OpenXR::Features::Mock {
class MockRuntime_AfterFunctionDelegate;
}
namespace UnityEngine::XR::OpenXR::Features::Mock {
class MockRuntime_BeforeFunctionDelegate;
}
namespace UnityEngine::XR::OpenXR::Features::Mock {
class MockRuntime_ScriptEventDelegate;
}
namespace UnityEngine::XR::OpenXR::Features::Mock {
struct MockRuntime_ScriptEvent;
}
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrReferenceSpaceType;
}
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrResult;
}
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrSessionState;
}
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrSpaceLocationFlags;
}
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrViewConfigurationType;
}
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrViewStateFlags;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine::XR::OpenXR::Features::Mock {
struct MockRuntime_ScriptEvent;
}
namespace UnityEngine::XR::OpenXR::Features::Mock {
class MockRuntime;
}
namespace UnityEngine::XR::OpenXR::Features::Mock {
class MockRuntime_AfterFunctionDelegate;
}
namespace UnityEngine::XR::OpenXR::Features::Mock {
class MockRuntime_BeforeFunctionDelegate;
}
namespace UnityEngine::XR::OpenXR::Features::Mock {
class MockRuntime_ScriptEventDelegate;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_ScriptEvent);
MARK_REF_T(::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*);
MARK_REF_T(::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_AfterFunctionDelegate*);
MARK_REF_T(::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_BeforeFunctionDelegate*);
MARK_REF_T(::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_ScriptEventDelegate*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_ScriptEvent, "UnityEngine.XR.OpenXR.Features.Mock", "MockRuntime/ScriptEvent");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*, "UnityEngine.XR.OpenXR.Features.Mock", "MockRuntime");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_AfterFunctionDelegate*, "UnityEngine.XR.OpenXR.Features.Mock", "MockRuntime/AfterFunctionDelegate");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_BeforeFunctionDelegate*, "UnityEngine.XR.OpenXR.Features.Mock", "MockRuntime/BeforeFunctionDelegate");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_ScriptEventDelegate*, "UnityEngine.XR.OpenXR.Features.Mock", "MockRuntime/ScriptEventDelegate");
// Dependencies
namespace UnityEngine::XR::OpenXR::Features::Mock {
// Is value type: true
// CS Name: UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/ScriptEvent
struct CORDL_TYPE MockRuntime_ScriptEvent {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __MockRuntime_ScriptEvent_Unwrapped
  enum struct __MockRuntime_ScriptEvent_Unwrapped : int32_t {
    __E_Unknown = static_cast<int32_t>(0x0),
    __E_EndFrame = static_cast<int32_t>(0x1),
    __E_HapticImpulse = static_cast<int32_t>(0x2),
    __E_HapticStop = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __MockRuntime_ScriptEvent_Unwrapped() const noexcept {
    return static_cast<__MockRuntime_ScriptEvent_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr MockRuntime_ScriptEvent();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr MockRuntime_ScriptEvent(int32_t value__) noexcept;

  /// @brief Field EndFrame value: I32(1)
  static ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_ScriptEvent const EndFrame;

  /// @brief Field HapticImpulse value: I32(2)
  static ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_ScriptEvent const HapticImpulse;

  /// @brief Field HapticStop value: I32(3)
  static ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_ScriptEvent const HapticStop;

  /// @brief Field Unknown value: I32(0)
  static ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_ScriptEvent const Unknown;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 24109 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_ScriptEvent, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_ScriptEvent) == 0x4, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::Features::Mock
// Dependencies System.MulticastDelegate
namespace UnityEngine::XR::OpenXR::Features::Mock {
// Is value type: false
// CS Name: UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/ScriptEventDelegate
class CORDL_TYPE MockRuntime_ScriptEventDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x6e47b98, size 0xa4, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_ScriptEvent evt, uint64_t param, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x6e47c3c, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x6e47b84, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_ScriptEvent evt, uint64_t param);

  static inline ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_ScriptEventDelegate* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x6e47b18, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MockRuntime_ScriptEventDelegate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MockRuntime_ScriptEventDelegate", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MockRuntime_ScriptEventDelegate(MockRuntime_ScriptEventDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MockRuntime_ScriptEventDelegate", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MockRuntime_ScriptEventDelegate(MockRuntime_ScriptEventDelegate const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 24110 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_ScriptEventDelegate) == 0x80, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::Features::Mock
// Dependencies System.MulticastDelegate
namespace UnityEngine::XR::OpenXR::Features::Mock {
// Is value type: false
// CS Name: UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/BeforeFunctionDelegate
class CORDL_TYPE MockRuntime_BeforeFunctionDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x6e47c5c, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW functionName, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x6e47c7c, size 0x24, virtual true, abstract: false, final false
  inline ::UnityEngine::XR::OpenXR::NativeTypes::XrResult EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x6e47c48, size 0x14, virtual true, abstract: false, final false
  inline ::UnityEngine::XR::OpenXR::NativeTypes::XrResult Invoke(::StringW functionName);

  static inline ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_BeforeFunctionDelegate* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x6e46c88, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MockRuntime_BeforeFunctionDelegate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MockRuntime_BeforeFunctionDelegate", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MockRuntime_BeforeFunctionDelegate(MockRuntime_BeforeFunctionDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MockRuntime_BeforeFunctionDelegate", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MockRuntime_BeforeFunctionDelegate(MockRuntime_BeforeFunctionDelegate const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 24111 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_BeforeFunctionDelegate) == 0x80, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::Features::Mock
// Dependencies System.MulticastDelegate
namespace UnityEngine::XR::OpenXR::Features::Mock {
// Is value type: false
// CS Name: UnityEngine.XR.OpenXR.Features.Mock.MockRuntime/AfterFunctionDelegate
class CORDL_TYPE MockRuntime_AfterFunctionDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x6e47cb4, size 0x98, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW functionName, ::UnityEngine::XR::OpenXR::NativeTypes::XrResult result, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x6e47d4c, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x6e47ca0, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::StringW functionName, ::UnityEngine::XR::OpenXR::NativeTypes::XrResult result);

  static inline ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_AfterFunctionDelegate* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x6e46d04, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MockRuntime_AfterFunctionDelegate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MockRuntime_AfterFunctionDelegate", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MockRuntime_AfterFunctionDelegate(MockRuntime_AfterFunctionDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MockRuntime_AfterFunctionDelegate", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MockRuntime_AfterFunctionDelegate(MockRuntime_AfterFunctionDelegate const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 24112 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_AfterFunctionDelegate) == 0x80, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::Features::Mock
// Dependencies UnityEngine.XR.OpenXR.Features.OpenXRFeature
namespace UnityEngine::XR::OpenXR::Features::Mock {
// Is value type: false
// CS Name: UnityEngine.XR.OpenXR.Features.Mock.MockRuntime
class CORDL_TYPE MockRuntime : public ::UnityEngine::XR::OpenXR::Features::OpenXRFeature {
public:
  // Declarations
  using AfterFunctionDelegate = ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_AfterFunctionDelegate;

  using BeforeFunctionDelegate = ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_BeforeFunctionDelegate;

  using ScriptEvent = ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_ScriptEvent;

  using ScriptEventDelegate = ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_ScriptEventDelegate;

  /// @brief Field MockFunctionInterceptor, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_MockFunctionInterceptor,
                      put = __cordl_internal_set_MockFunctionInterceptor)) ::System::Func_2<::System::IntPtr, ::System::IntPtr>* MockFunctionInterceptor;

  /// @brief Field ignoreValidationErrors, offset 0x69, size 0x1
  __declspec(property(get = __cordl_internal_get_ignoreValidationErrors, put = __cordl_internal_set_ignoreValidationErrors)) bool ignoreValidationErrors;

  /// @brief Field onScriptEvent, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_onScriptEvent, put = setStaticF_onScriptEvent)) ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_ScriptEventDelegate* onScriptEvent;

  /// @brief Field s_AfterFunctionCallbacks, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_AfterFunctionCallbacks, put = setStaticF_s_AfterFunctionCallbacks)) ::System::Collections::Generic::Dictionary_2<
      ::StringW, ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_AfterFunctionDelegate*>* s_AfterFunctionCallbacks;

  /// @brief Field s_BeforeFunctionCallbacks, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_BeforeFunctionCallbacks, put = setStaticF_s_BeforeFunctionCallbacks)) ::System::Collections::Generic::Dictionary_2<
      ::StringW, ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_BeforeFunctionDelegate*>* s_BeforeFunctionCallbacks;

  /// @brief Method ActivateSecondaryView, addr 0x6e477d8, size 0x80, virtual false, abstract: false, final false
  static inline void ActivateSecondaryView(::UnityEngine::XR::OpenXR::NativeTypes::XrViewConfigurationType viewConfigurationType, bool activate);

  /// @brief Method AddTestHookGetInstanceProcAddr, addr 0x6e47b00, size 0x8, virtual false, abstract: false, final false
  inline void AddTestHookGetInstanceProcAddr(::System::Func_2<::System::IntPtr, ::System::IntPtr>* nativeFunctionHook);

  /// [MonoPInvokeCallback(typeof(UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::AfterFunctionDelegate))]
  /// @brief Method AfterFunctionCallback, addr 0x6e465b8, size 0x48, virtual false, abstract: false, final false
  static inline void AfterFunctionCallback(::StringW function, ::UnityEngine::XR::OpenXR::NativeTypes::XrResult result);

  /// [MonoPInvokeCallback(typeof(UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::BeforeFunctionDelegate))]
  /// @brief Method BeforeFunctionCallback, addr 0x6e46584, size 0x34, virtual false, abstract: false, final false
  static inline ::UnityEngine::XR::OpenXR::NativeTypes::XrResult BeforeFunctionCallback(::StringW function);

  /// @brief Method CauseInstanceLoss, addr 0x6e474fc, size 0x64, virtual false, abstract: false, final false
  static inline void CauseInstanceLoss();

  /// @brief Method CauseRecommendedResolutionChangedEvent, addr 0x6e4765c, size 0x64, virtual false, abstract: false, final false
  static inline void CauseRecommendedResolutionChangedEvent();

  /// @brief Method CauseUserPresenceChange, addr 0x6e47560, size 0x7c, virtual false, abstract: false, final false
  static inline void CauseUserPresenceChange(bool hasUserPresent);

  /// @brief Method ChangeRecommendedImageRectExtents, addr 0x6e475dc, size 0x80, virtual false, abstract: false, final false
  static inline void ChangeRecommendedImageRectExtents(uint32_t width, uint32_t height);

  /// @brief Method ClearFunctionCallbacks, addr 0x6e46e74, size 0x54, virtual false, abstract: false, final false
  static inline void ClearFunctionCallbacks();

  /// @brief Method ClearTestHookGetInstanceProcAddr, addr 0x6e47b08, size 0x8, virtual false, abstract: false, final false
  inline void ClearTestHookGetInstanceProcAddr();

  /// @brief Method GetAfterFunctionCallback, addr 0x6e46874, size 0x80, virtual false, abstract: false, final false
  static inline ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_AfterFunctionDelegate* GetAfterFunctionCallback(::StringW function);

  /// @brief Method GetBeforeFunctionCallback, addr 0x6e467f4, size 0x80, virtual false, abstract: false, final false
  static inline ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_BeforeFunctionDelegate* GetBeforeFunctionCallback(::StringW function);

  /// @brief Method GetEndFrameStats, addr 0x6e47754, size 0x84, virtual false, abstract: false, final false
  static inline void GetEndFrameStats(::by_ref<int32_t> primaryLayerCount, ::by_ref<int32_t> secondaryLayerCount);

  /// @brief Method GetRegisteredAndroidThreadsCount, addr 0x6e47afc, size 0x4, virtual false, abstract: false, final false
  static inline uint64_t GetRegisteredAndroidThreadsCount();

  /// @brief Method HookCreateInstance, addr 0x6e46f18, size 0x78, virtual false, abstract: false, final false
  static inline ::System::IntPtr HookCreateInstance(::System::IntPtr func);

  /// @brief Method Internal_GetRegisteredAndroidThreadsCount, addr 0x6e47a94, size 0x64, virtual false, abstract: false, final false
  static inline uint64_t Internal_GetRegisteredAndroidThreadsCount();

  /// @brief Method Internal_GetSessionState, addr 0x6e47434, size 0x64, virtual false, abstract: false, final false
  static inline ::UnityEngine::XR::OpenXR::NativeTypes::XrSessionState Internal_GetSessionState();

  /// @brief Method Internal_IsAndroidThreadTypeRegistered, addr 0x6e47a10, size 0x84, virtual false, abstract: false, final false
  static inline bool Internal_IsAndroidThreadTypeRegistered(uint32_t threadType);

  /// @brief Method Internal_RegisterScriptEventCallback, addr 0x6e47330, size 0x7c, virtual false, abstract: false, final false
  static inline ::UnityEngine::XR::OpenXR::NativeTypes::XrResult Internal_RegisterScriptEventCallback(::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_ScriptEventDelegate* callback);

  /// @brief Method Internal_TransitionToState, addr 0x6e473ac, size 0x88, virtual false, abstract: false, final false
  static inline bool Internal_TransitionToState(::UnityEngine::XR::OpenXR::NativeTypes::XrSessionState state, bool forceTransition);

  /// @brief Method IsAndroidThreadTypeRegistered, addr 0x6e47af8, size 0x4, virtual false, abstract: false, final false
  static inline bool IsAndroidThreadTypeRegistered(uint32_t threadType);

  /// @brief Method MetaPerformanceMetrics_SeedCounterOnce_Float, addr 0x6e47858, size 0xa8, virtual false, abstract: false, final false
  static inline void MetaPerformanceMetrics_SeedCounterOnce_Float(::StringW xrPathString, float_t value, uint32_t unit);

  /// @brief Method MockRuntime_RegisterFunctionCallbacks, addr 0x6e46d84, size 0x98, virtual false, abstract: false, final false
  static inline void MockRuntime_RegisterFunctionCallbacks(::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_BeforeFunctionDelegate* hookBefore,
                                                           ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_AfterFunctionDelegate* hookAfter);

  static inline ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime* New_ctor();

  /// @brief Method OnInstanceDestroy, addr 0x6e46f14, size 0x4, virtual true, abstract: false, final false
  inline void OnInstanceDestroy(uint64_t instance);

  /// @brief Method PerformanceSettings_CauseNotification, addr 0x6e47900, size 0x94, virtual false, abstract: false, final false
  static inline void PerformanceSettings_CauseNotification(::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceDomain domain,
                                                           ::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceSubDomain subDomain,
                                                           ::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceNotificationLevel level);

  /// @brief Method PerformanceSettings_GetPerformanceLevelHint, addr 0x6e47994, size 0x7c, virtual false, abstract: false, final false
  static inline ::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceLevelHint
  PerformanceSettings_GetPerformanceLevelHint(::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceDomain domain);

  /// [MonoPInvokeCallback(typeof(UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::ScriptEventDelegate))]
  /// @brief Method ReceiveScriptEvent, addr 0x6e46500, size 0x84, virtual false, abstract: false, final false
  static inline void ReceiveScriptEvent(::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_ScriptEvent evt, uint64_t param);

  /// @brief Method RequestExitSession, addr 0x6e47498, size 0x64, virtual false, abstract: false, final false
  static inline void RequestExitSession();

  /// @brief Method ResetDefaults, addr 0x6e46ec8, size 0x4c, virtual false, abstract: false, final false
  static inline void ResetDefaults();

  /// @brief Method SetFunctionCallback, addr 0x6e46e48, size 0x2c, virtual false, abstract: false, final false
  static inline void SetFunctionCallback(::StringW function, ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_AfterFunctionDelegate* afterCallback);

  /// @brief Method SetFunctionCallback, addr 0x6e46e1c, size 0x2c, virtual false, abstract: false, final false
  static inline void SetFunctionCallback(::StringW function, ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_BeforeFunctionDelegate* beforeCallback);

  /// @brief Method SetFunctionCallback, addr 0x6e468f4, size 0x394, virtual false, abstract: false, final false
  static inline void SetFunctionCallback(::StringW function, ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_BeforeFunctionDelegate* beforeCallback,
                                         ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_AfterFunctionDelegate* afterCallback);

  /// @brief Method SetKeepFunctionCallbacks, addr 0x6e46f90, size 0x7c, virtual false, abstract: false, final false
  static inline void SetKeepFunctionCallbacks(bool value);

  /// @brief Method SetReferenceSpaceBounds, addr 0x6e476c0, size 0x94, virtual false, abstract: false, final false
  static inline void SetReferenceSpaceBounds(::UnityEngine::XR::OpenXR::NativeTypes::XrReferenceSpaceType referenceSpace, ::UnityEngine::Vector2 bounds);

  /// @brief Method SetSpace, addr 0x6e47254, size 0xdc, virtual false, abstract: false, final false
  static inline void SetSpace(uint64_t actionHandle, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion orientation,
                              ::UnityEngine::XR::OpenXR::NativeTypes::XrSpaceLocationFlags locationFlags);

  /// @brief Method SetSpace, addr 0x6e47178, size 0xdc, virtual false, abstract: false, final false
  static inline void SetSpace(::UnityEngine::XR::OpenXR::NativeTypes::XrReferenceSpaceType referenceSpace, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion orientation,
                              ::UnityEngine::XR::OpenXR::NativeTypes::XrSpaceLocationFlags locationFlags);

  /// @brief Method SetViewPose, addr 0x6e4700c, size 0xec, virtual false, abstract: false, final false
  static inline void SetViewPose(::UnityEngine::XR::OpenXR::NativeTypes::XrViewConfigurationType viewConfigurationType, int32_t viewIndex, ::UnityEngine::Vector3 position,
                                 ::UnityEngine::Quaternion orientation, ::UnityEngine::Vector4 fov);

  /// @brief Method SetViewState, addr 0x6e470f8, size 0x80, virtual false, abstract: false, final false
  static inline void SetViewState(::UnityEngine::XR::OpenXR::NativeTypes::XrViewConfigurationType viewConfigurationType, ::UnityEngine::XR::OpenXR::NativeTypes::XrViewStateFlags viewStateFlags);

  constexpr ::System::Func_2<::System::IntPtr, ::System::IntPtr>* const& __cordl_internal_get_MockFunctionInterceptor() const;

  constexpr ::System::Func_2<::System::IntPtr, ::System::IntPtr>*& __cordl_internal_get_MockFunctionInterceptor();

  constexpr bool const& __cordl_internal_get_ignoreValidationErrors() const;

  constexpr bool& __cordl_internal_get_ignoreValidationErrors();

  constexpr void __cordl_internal_set_MockFunctionInterceptor(::System::Func_2<::System::IntPtr, ::System::IntPtr>* value);

  constexpr void __cordl_internal_set_ignoreValidationErrors(bool value);

  /// @brief Method .ctor, addr 0x6e47b10, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// [CompilerGenerated]
  /// @brief Method add_onScriptEvent, addr 0x6e46600, size 0xd0, virtual false, abstract: false, final false
  static inline void add_onScriptEvent(::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_ScriptEventDelegate* value);

  static inline ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_ScriptEventDelegate* getStaticF_onScriptEvent();

  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_AfterFunctionDelegate*>* getStaticF_s_AfterFunctionCallbacks();

  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_BeforeFunctionDelegate*>* getStaticF_s_BeforeFunctionCallbacks();

  /// @brief Method get_Instance, addr 0x6e467a0, size 0x54, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime> get_Instance();

  /// [CompilerGenerated]
  /// @brief Method remove_onScriptEvent, addr 0x6e466d0, size 0xd0, virtual false, abstract: false, final false
  static inline void remove_onScriptEvent(::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_ScriptEventDelegate* value);

  static inline void setStaticF_onScriptEvent(::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_ScriptEventDelegate* value);

  static inline void setStaticF_s_AfterFunctionCallbacks(::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_AfterFunctionDelegate*>* value);

  static inline void
  setStaticF_s_BeforeFunctionCallbacks(::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime_BeforeFunctionDelegate*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MockRuntime();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MockRuntime", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MockRuntime(MockRuntime&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MockRuntime", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MockRuntime(MockRuntime const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 24113 };

  /// @brief Field extLib offset 0xffffffff size 0x8
  static constexpr ::ConstString extLib{ u"mock_api" };

  /// @brief Field featureId offset 0xffffffff size 0x8
  static constexpr ::ConstString featureId{ u"com.unity.openxr.feature.mockruntime" };

  /// [Tooltip("Don\'t fail to build if there are validation errors.")]
  /// @brief Field ignoreValidationErrors, offset: 0x69, size: 0x1, def value: None
  bool ___ignoreValidationErrors;

  /// @brief Field MockFunctionInterceptor, offset: 0x70, size: 0x8, def value: None
  ::System::Func_2<::System::IntPtr, ::System::IntPtr>* ___MockFunctionInterceptor;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime, ___ignoreValidationErrors) == 0x69, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime, ___MockFunctionInterceptor) == 0x70, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime) == 0x78, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::Features::Mock
