#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "UnityEngine/XR/OpenXR/Features/zzzz__OpenXRFeature_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MockRuntime)
namespace UnityEngine {
struct Vector4;
}
namespace UnityEngine::XR::OpenXR::Features::Mock {
struct __MockRuntime__ScriptEvent;
}
namespace UnityEngine::XR::OpenXR::Features::Mock {
class __MockRuntime__BeforeFunctionDelegate;
}
namespace UnityEngine::XR::OpenXR::Features::Mock {
class __MockRuntime__AfterFunctionDelegate;
}
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrResult;
}
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrReferenceSpaceType;
}
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrSpaceLocationFlags;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrSessionState;
}
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrViewStateFlags;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrViewConfigurationType;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine::XR::OpenXR::Features::Mock {
class __MockRuntime__ScriptEventDelegate;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System {
class Object;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
// Forward declare root types
namespace UnityEngine::XR::OpenXR::Features::Mock {
struct __MockRuntime__ScriptEvent;
}
namespace UnityEngine::XR::OpenXR::Features::Mock {
class MockRuntime;
}
namespace UnityEngine::XR::OpenXR::Features::Mock {
class __MockRuntime__AfterFunctionDelegate;
}
namespace UnityEngine::XR::OpenXR::Features::Mock {
class __MockRuntime__BeforeFunctionDelegate;
}
namespace UnityEngine::XR::OpenXR::Features::Mock {
class __MockRuntime__ScriptEventDelegate;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__ScriptEvent);
MARK_REF_PTR_T(::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime);
MARK_REF_PTR_T(::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__AfterFunctionDelegate);
MARK_REF_PTR_T(::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__BeforeFunctionDelegate);
MARK_REF_PTR_T(::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__ScriptEventDelegate);
// Type: ::ScriptEvent
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::XR::OpenXR::Features::Mock {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16037))
// CS Name: ::MockRuntime::ScriptEvent
struct CORDL_TYPE __MockRuntime__ScriptEvent {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____MockRuntime__ScriptEvent_Unwrapped
  enum struct ____MockRuntime__ScriptEvent_Unwrapped : int32_t {
    __E_Unknown = static_cast<int32_t>(0x0),
    __E_EndFrame = static_cast<int32_t>(0x1),
    __E_HapticImpulse = static_cast<int32_t>(0x2),
    __E_HapticStop = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____MockRuntime__ScriptEvent_Unwrapped() const noexcept {
    return static_cast<____MockRuntime__ScriptEvent_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __MockRuntime__ScriptEvent(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __MockRuntime__ScriptEvent();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Unknown value: static_cast<int32_t>(0x0)
  static ::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__ScriptEvent const Unknown;

  /// @brief Field EndFrame value: static_cast<int32_t>(0x1)
  static ::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__ScriptEvent const EndFrame;

  /// @brief Field HapticImpulse value: static_cast<int32_t>(0x2)
  static ::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__ScriptEvent const HapticImpulse;

  /// @brief Field HapticStop value: static_cast<int32_t>(0x3)
  static ::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__ScriptEvent const HapticStop;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__ScriptEvent, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__ScriptEvent, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::XR::OpenXR::Features::Mock
// Type: ::ScriptEventDelegate
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::XR::OpenXR::Features::Mock {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2609))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16038))
// CS Name: ::MockRuntime::ScriptEventDelegate*
class CORDL_TYPE __MockRuntime__ScriptEventDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__ScriptEventDelegate* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor addr 0x2b177dc size 0xc4 virtual false final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke addr 0x2b178a0 size 0x14 virtual true final false
  inline void Invoke(::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__ScriptEvent evt, uint64_t param);

  /// @brief Method BeginInvoke addr 0x2b178b4 size 0xb4 virtual true final false
  inline ::System::IAsyncResult* BeginInvoke(::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__ScriptEvent evt, uint64_t param, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke addr 0x2b17968 size 0xc virtual true final false
  inline void EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__MockRuntime__ScriptEventDelegate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MockRuntime__ScriptEventDelegate(__MockRuntime__ScriptEventDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MockRuntime__ScriptEventDelegate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MockRuntime__ScriptEventDelegate(__MockRuntime__ScriptEventDelegate const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MockRuntime__ScriptEventDelegate();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__ScriptEventDelegate, 0x80>, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::Features::Mock
// Type: ::BeforeFunctionDelegate
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::XR::OpenXR::Features::Mock {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2609))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16039))
// CS Name: ::MockRuntime::BeforeFunctionDelegate*
class CORDL_TYPE __MockRuntime__BeforeFunctionDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__BeforeFunctionDelegate* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor addr 0x2b16cb0 size 0xd4 virtual false final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke addr 0x2b17974 size 0x14 virtual true final false
  inline ::UnityEngine::XR::OpenXR::NativeTypes::XrResult Invoke(::StringW functionName);

  /// @brief Method BeginInvoke addr 0x2b17988 size 0x20 virtual true final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW functionName, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke addr 0x2b179a8 size 0x28 virtual true final false
  inline ::UnityEngine::XR::OpenXR::NativeTypes::XrResult EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__MockRuntime__BeforeFunctionDelegate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MockRuntime__BeforeFunctionDelegate(__MockRuntime__BeforeFunctionDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MockRuntime__BeforeFunctionDelegate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MockRuntime__BeforeFunctionDelegate(__MockRuntime__BeforeFunctionDelegate const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MockRuntime__BeforeFunctionDelegate();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__BeforeFunctionDelegate, 0x80>, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::Features::Mock
// Type: ::AfterFunctionDelegate
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::XR::OpenXR::Features::Mock {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2609))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16040))
// CS Name: ::MockRuntime::AfterFunctionDelegate*
class CORDL_TYPE __MockRuntime__AfterFunctionDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__AfterFunctionDelegate* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor addr 0x2b16d84 size 0xd8 virtual false final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke addr 0x2b179d0 size 0x14 virtual true final false
  inline void Invoke(::StringW functionName, ::UnityEngine::XR::OpenXR::NativeTypes::XrResult result);

  /// @brief Method BeginInvoke addr 0x2b179e4 size 0x94 virtual true final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW functionName, ::UnityEngine::XR::OpenXR::NativeTypes::XrResult result, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke addr 0x2b17a78 size 0xc virtual true final false
  inline void EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__MockRuntime__AfterFunctionDelegate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MockRuntime__AfterFunctionDelegate(__MockRuntime__AfterFunctionDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MockRuntime__AfterFunctionDelegate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MockRuntime__AfterFunctionDelegate(__MockRuntime__AfterFunctionDelegate const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MockRuntime__AfterFunctionDelegate();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__AfterFunctionDelegate, 0x80>, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::Features::Mock
// Type: UnityEngine.XR.OpenXR.Features.Mock::MockRuntime
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 79, minimum_alignment: 8, natural_alignment: 1, packing: None, specified_packing: None }
namespace UnityEngine::XR::OpenXR::Features::Mock {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14441))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16041))
// CS Name: ::UnityEngine.XR.OpenXR.Features.Mock::MockRuntime*
class CORDL_TYPE MockRuntime : public ::UnityEngine::XR::OpenXR::Features::OpenXRFeature {
public:
  // Declarations
  using AfterFunctionDelegate = ::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__AfterFunctionDelegate;

  using BeforeFunctionDelegate = ::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__BeforeFunctionDelegate;

  using ScriptEventDelegate = ::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__ScriptEventDelegate;

  using ScriptEvent = ::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__ScriptEvent;

  /// @brief Field ignoreValidationErrors, offset 0x4e, size 0x1
  __declspec(property(get = __get_ignoreValidationErrors, put = __set_ignoreValidationErrors)) bool ignoreValidationErrors;

  /// @brief Field s_AfterFunctionCallbacks, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_AfterFunctionCallbacks, put = setStaticF_s_AfterFunctionCallbacks))::System::Collections::Generic::Dictionary_2<
      ::StringW, ::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__AfterFunctionDelegate*>* s_AfterFunctionCallbacks;

  /// @brief Field s_BeforeFunctionCallbacks, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_BeforeFunctionCallbacks, put = setStaticF_s_BeforeFunctionCallbacks))::System::Collections::Generic::Dictionary_2<
      ::StringW, ::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__BeforeFunctionDelegate*>* s_BeforeFunctionCallbacks;

  /// @brief Field onScriptEvent, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_onScriptEvent, put = setStaticF_onScriptEvent))::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__ScriptEventDelegate* onScriptEvent;

  constexpr bool& __get_ignoreValidationErrors();

  constexpr bool const& __get_ignoreValidationErrors() const;

  constexpr void __set_ignoreValidationErrors(bool value);

  static inline void
  setStaticF_s_AfterFunctionCallbacks(::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__AfterFunctionDelegate*>* value);

  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__AfterFunctionDelegate*>* getStaticF_s_AfterFunctionCallbacks();

  static inline void
  setStaticF_s_BeforeFunctionCallbacks(::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__BeforeFunctionDelegate*>* value);

  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__BeforeFunctionDelegate*>* getStaticF_s_BeforeFunctionCallbacks();

  static inline void setStaticF_onScriptEvent(::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__ScriptEventDelegate* value);

  static inline ::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__ScriptEventDelegate* getStaticF_onScriptEvent();

  /// @brief Method add_onScriptEvent addr 0x2b166dc size 0xbc virtual false final false
  static inline void add_onScriptEvent(::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__ScriptEventDelegate* value);

  /// @brief Method remove_onScriptEvent addr 0x2b16798 size 0xbc virtual false final false
  static inline void remove_onScriptEvent(::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__ScriptEventDelegate* value);

  /// @brief Method get_Instance addr 0x2b16854 size 0x48 virtual false final false
  static inline ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime* get_Instance();

  /// @brief Method ReceiveScriptEvent addr 0x2b165e0 size 0x80 virtual false final false
  static inline void ReceiveScriptEvent(::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__ScriptEvent evt, uint64_t param);

  /// @brief Method BeforeFunctionCallback addr 0x2b16660 size 0x34 virtual false final false
  static inline ::UnityEngine::XR::OpenXR::NativeTypes::XrResult BeforeFunctionCallback(::StringW function);

  /// @brief Method AfterFunctionCallback addr 0x2b16694 size 0x48 virtual false final false
  static inline void AfterFunctionCallback(::StringW function, ::UnityEngine::XR::OpenXR::NativeTypes::XrResult result);

  /// @brief Method SetFunctionCallback addr 0x2b169b4 size 0x2fc virtual false final false
  static inline void SetFunctionCallback(::StringW function, ::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__BeforeFunctionDelegate* beforeCallback,
                                         ::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__AfterFunctionDelegate* afterCallback);

  /// @brief Method SetFunctionCallback addr 0x2b16ef4 size 0x2c virtual false final false
  static inline void SetFunctionCallback(::StringW function, ::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__BeforeFunctionDelegate* beforeCallback);

  /// @brief Method SetFunctionCallback addr 0x2b16f20 size 0x2c virtual false final false
  static inline void SetFunctionCallback(::StringW function, ::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__AfterFunctionDelegate* afterCallback);

  /// @brief Method GetBeforeFunctionCallback addr 0x2b1689c size 0x8c virtual false final false
  static inline ::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__BeforeFunctionDelegate* GetBeforeFunctionCallback(::StringW function);

  /// @brief Method GetAfterFunctionCallback addr 0x2b16928 size 0x8c virtual false final false
  static inline ::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__AfterFunctionDelegate* GetAfterFunctionCallback(::StringW function);

  /// @brief Method ClearFunctionCallbacks addr 0x2b16f4c size 0x50 virtual false final false
  static inline void ClearFunctionCallbacks();

  /// @brief Method ResetDefaults addr 0x2b16f9c size 0x48 virtual false final false
  static inline void ResetDefaults();

  /// @brief Method OnInstanceDestroy addr 0x2b16fe4 size 0x4 virtual true final false
  inline void OnInstanceDestroy(uint64_t instance);

  /// @brief Method HookCreateInstance addr 0x2b16fe8 size 0x78 virtual false final false
  static inline void* HookCreateInstance(void* func);

  /// @brief Method SetKeepFunctionCallbacks addr 0x2b17060 size 0x7c virtual false final false
  static inline void SetKeepFunctionCallbacks(bool value);

  /// @brief Method SetViewPose addr 0x2b170dc size 0xf4 virtual false final false
  static inline void SetViewPose(::UnityEngine::XR::OpenXR::NativeTypes::XrViewConfigurationType viewConfigurationType, int32_t viewIndex, ::UnityEngine::Vector3 position,
                                 ::UnityEngine::Quaternion orientation, ::UnityEngine::Vector4 fov);

  /// @brief Method SetViewState addr 0x2b171d0 size 0x80 virtual false final false
  static inline void SetViewState(::UnityEngine::XR::OpenXR::NativeTypes::XrViewConfigurationType viewConfigurationType, ::UnityEngine::XR::OpenXR::NativeTypes::XrViewStateFlags viewStateFlags);

  /// @brief Method SetSpace addr 0x2b17250 size 0xdc virtual false final false
  static inline void SetSpace(::UnityEngine::XR::OpenXR::NativeTypes::XrReferenceSpaceType referenceSpace, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion orientation,
                              ::UnityEngine::XR::OpenXR::NativeTypes::XrSpaceLocationFlags locationFlags);

  /// @brief Method SetSpace addr 0x2b1732c size 0xdc virtual false final false
  static inline void SetSpace(uint64_t actionHandle, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion orientation,
                              ::UnityEngine::XR::OpenXR::NativeTypes::XrSpaceLocationFlags locationFlags);

  /// @brief Method Internal_RegisterScriptEventCallback addr 0x2b17408 size 0x7c virtual false final false
  static inline ::UnityEngine::XR::OpenXR::NativeTypes::XrResult Internal_RegisterScriptEventCallback(::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__ScriptEventDelegate* callback);

  /// @brief Method Internal_TransitionToState addr 0x2b17484 size 0x88 virtual false final false
  static inline bool Internal_TransitionToState(::UnityEngine::XR::OpenXR::NativeTypes::XrSessionState state, bool forceTransition);

  /// @brief Method Internal_GetSessionState addr 0x2b1750c size 0x68 virtual false final false
  static inline ::UnityEngine::XR::OpenXR::NativeTypes::XrSessionState Internal_GetSessionState();

  /// @brief Method RequestExitSession addr 0x2b17574 size 0x64 virtual false final false
  static inline void RequestExitSession();

  /// @brief Method CauseInstanceLoss addr 0x2b175d8 size 0x64 virtual false final false
  static inline void CauseInstanceLoss();

  /// @brief Method SetReferenceSpaceBounds addr 0x2b1763c size 0x94 virtual false final false
  static inline void SetReferenceSpaceBounds(::UnityEngine::XR::OpenXR::NativeTypes::XrReferenceSpaceType referenceSpace, ::UnityEngine::Vector2 bounds);

  /// @brief Method GetEndFrameStats addr 0x2b176d0 size 0x84 virtual false final false
  static inline void GetEndFrameStats(ByRef<int32_t> primaryLayerCount, ByRef<int32_t> secondaryLayerCount);

  /// @brief Method ActivateSecondaryView addr 0x2b17754 size 0x80 virtual false final false
  static inline void ActivateSecondaryView(::UnityEngine::XR::OpenXR::NativeTypes::XrViewConfigurationType viewConfigurationType, bool activate);

  /// @brief Method MockRuntime_RegisterFunctionCallbacks addr 0x2b16e5c size 0x98 virtual false final false
  static inline void MockRuntime_RegisterFunctionCallbacks(::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__BeforeFunctionDelegate* hookBefore,
                                                           ::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__AfterFunctionDelegate* hookAfter);

  static inline ::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime* New_ctor();

  /// @brief Method .ctor addr 0x2b177d4 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MockRuntime", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MockRuntime(MockRuntime&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MockRuntime", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MockRuntime(MockRuntime const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MockRuntime();

public:
  /// @brief Field ignoreValidationErrors, offset: 0x4e, size: 0x1, def value: None
  bool ___ignoreValidationErrors;

  /// @brief Field featureId offset 0xffffffff size 0x8
  static constexpr ::ConstString featureId{ u"com.unity.openxr.feature.mockruntime" };

  /// @brief Field extLib offset 0xffffffff size 0x8
  static constexpr ::ConstString extLib{ u"mock_api" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime, 0x50>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime, ___ignoreValidationErrors) == 0x4e, "Offset mismatch!");

} // namespace UnityEngine::XR::OpenXR::Features::Mock
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__ScriptEvent, "UnityEngine.XR.OpenXR.Features.Mock", "MockRuntime/ScriptEvent");
NEED_NO_BOX(::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::Features::Mock::MockRuntime*, "UnityEngine.XR.OpenXR.Features.Mock", "MockRuntime");
NEED_NO_BOX(::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__AfterFunctionDelegate);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__AfterFunctionDelegate*, "UnityEngine.XR.OpenXR.Features.Mock", "MockRuntime/AfterFunctionDelegate");
NEED_NO_BOX(::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__BeforeFunctionDelegate);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__BeforeFunctionDelegate*, "UnityEngine.XR.OpenXR.Features.Mock", "MockRuntime/BeforeFunctionDelegate");
NEED_NO_BOX(::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__ScriptEventDelegate);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::Features::Mock::__MockRuntime__ScriptEventDelegate*, "UnityEngine.XR.OpenXR.Features.Mock", "MockRuntime/ScriptEventDelegate");
