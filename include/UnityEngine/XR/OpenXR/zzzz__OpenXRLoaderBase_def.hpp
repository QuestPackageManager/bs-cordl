#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/XR/Management/zzzz__XRLoaderHelper_def.hpp"
#include "UnityEngine/XR/OpenXR/Features/zzzz__OpenXRFeature_def.hpp"
#include "UnityEngine/XR/OpenXR/zzzz__OpenXRLoaderBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OpenXRLoaderBase)
namespace System {
class UnhandledExceptionEventArgs;
}
namespace UnityEngine::XR {
class XRDisplaySubsystemDescriptor;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::XR {
class XRInputSubsystem;
}
namespace System {
class Object;
}
namespace UnityEngine::XR::OpenXR {
class __OpenXRLoaderBase____c;
}
namespace UnityEngine::XR::OpenXR {
struct __OpenXRLoaderBase__LoaderState;
}
namespace UnityEngine::XR::OpenXR {
class __OpenXRLoaderBase__ReceiveNativeEventDelegate;
}
namespace UnityEngine::XR::OpenXR::Features {
struct __OpenXRFeature__NativeEvent;
}
namespace System {
class UnhandledExceptionEventHandler;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace UnityEngine::XR::OpenXR::Features {
class OpenXRFeature;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
// Forward declare root types
namespace UnityEngine::XR::OpenXR {
struct __OpenXRLoaderBase__LoaderState;
}
namespace UnityEngine::XR::OpenXR {
class OpenXRLoaderBase;
}
namespace UnityEngine::XR::OpenXR {
class __OpenXRLoaderBase__ReceiveNativeEventDelegate;
}
namespace UnityEngine::XR::OpenXR {
class __OpenXRLoaderBase____c;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::OpenXR::__OpenXRLoaderBase__LoaderState);
MARK_REF_PTR_T(::UnityEngine::XR::OpenXR::OpenXRLoaderBase);
MARK_REF_PTR_T(::UnityEngine::XR::OpenXR::__OpenXRLoaderBase__ReceiveNativeEventDelegate);
MARK_REF_PTR_T(::UnityEngine::XR::OpenXR::__OpenXRLoaderBase____c);
// Type: ::LoaderState
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::XR::OpenXR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14407))
// CS Name: ::OpenXRLoaderBase::LoaderState
struct CORDL_TYPE __OpenXRLoaderBase__LoaderState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OpenXRLoaderBase__LoaderState_Unwrapped
  enum struct ____OpenXRLoaderBase__LoaderState_Unwrapped : int32_t {
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
  constexpr operator ____OpenXRLoaderBase__LoaderState_Unwrapped() const noexcept {
    return static_cast<____OpenXRLoaderBase__LoaderState_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OpenXRLoaderBase__LoaderState(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OpenXRLoaderBase__LoaderState();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Uninitialized value: static_cast<int32_t>(0x0)
  static ::UnityEngine::XR::OpenXR::__OpenXRLoaderBase__LoaderState const Uninitialized;

  /// @brief Field InitializeAttempted value: static_cast<int32_t>(0x1)
  static ::UnityEngine::XR::OpenXR::__OpenXRLoaderBase__LoaderState const InitializeAttempted;

  /// @brief Field Initialized value: static_cast<int32_t>(0x2)
  static ::UnityEngine::XR::OpenXR::__OpenXRLoaderBase__LoaderState const Initialized;

  /// @brief Field StartAttempted value: static_cast<int32_t>(0x3)
  static ::UnityEngine::XR::OpenXR::__OpenXRLoaderBase__LoaderState const StartAttempted;

  /// @brief Field Started value: static_cast<int32_t>(0x4)
  static ::UnityEngine::XR::OpenXR::__OpenXRLoaderBase__LoaderState const Started;

  /// @brief Field StopAttempted value: static_cast<int32_t>(0x5)
  static ::UnityEngine::XR::OpenXR::__OpenXRLoaderBase__LoaderState const StopAttempted;

  /// @brief Field Stopped value: static_cast<int32_t>(0x6)
  static ::UnityEngine::XR::OpenXR::__OpenXRLoaderBase__LoaderState const Stopped;

  /// @brief Field DeinitializeAttempted value: static_cast<int32_t>(0x7)
  static ::UnityEngine::XR::OpenXR::__OpenXRLoaderBase__LoaderState const DeinitializeAttempted;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::__OpenXRLoaderBase__LoaderState, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::__OpenXRLoaderBase__LoaderState, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::XR::OpenXR
// Type: ::ReceiveNativeEventDelegate
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::XR::OpenXR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2609))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14408))
// CS Name: ::OpenXRLoaderBase::ReceiveNativeEventDelegate*
class CORDL_TYPE __OpenXRLoaderBase__ReceiveNativeEventDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::UnityEngine::XR::OpenXR::__OpenXRLoaderBase__ReceiveNativeEventDelegate* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor addr 0x2b0178c size 0xc4 virtual false final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke addr 0x2b019a8 size 0x14 virtual true final false
  inline void Invoke(::UnityEngine::XR::OpenXR::Features::__OpenXRFeature__NativeEvent e, uint64_t payload);

  /// @brief Method BeginInvoke addr 0x2b019bc size 0xb4 virtual true final false
  inline ::System::IAsyncResult* BeginInvoke(::UnityEngine::XR::OpenXR::Features::__OpenXRFeature__NativeEvent e, uint64_t payload, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke addr 0x2b01a70 size 0xc virtual true final false
  inline void EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__OpenXRLoaderBase__ReceiveNativeEventDelegate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OpenXRLoaderBase__ReceiveNativeEventDelegate(__OpenXRLoaderBase__ReceiveNativeEventDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OpenXRLoaderBase__ReceiveNativeEventDelegate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OpenXRLoaderBase__ReceiveNativeEventDelegate(__OpenXRLoaderBase__ReceiveNativeEventDelegate const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OpenXRLoaderBase__ReceiveNativeEventDelegate();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::__OpenXRLoaderBase__ReceiveNativeEventDelegate, 0x80>, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::XR::OpenXR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14409))
// CS Name: ::OpenXRLoaderBase::<>c*
class CORDL_TYPE __OpenXRLoaderBase____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::UnityEngine::XR::OpenXR::__OpenXRLoaderBase____c* __9;

  /// @brief Field <>9__31_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__31_0, put = setStaticF___9__31_0))::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*, bool>* __9__31_0;

  /// @brief Field <>9__31_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__31_1, put = setStaticF___9__31_1))::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*, int32_t>* __9__31_1;

  /// @brief Field <>9__31_2, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__31_2, put = setStaticF___9__31_2))::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*, ::StringW>* __9__31_2;

  static inline void setStaticF___9(::UnityEngine::XR::OpenXR::__OpenXRLoaderBase____c* value);

  static inline ::UnityEngine::XR::OpenXR::__OpenXRLoaderBase____c* getStaticF___9();

  static inline void setStaticF___9__31_0(::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*, bool>* value);

  static inline ::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*, bool>* getStaticF___9__31_0();

  static inline void setStaticF___9__31_1(::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*, int32_t>* value);

  static inline ::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*, int32_t>* getStaticF___9__31_1();

  static inline void setStaticF___9__31_2(::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*, ::StringW>* value);

  static inline ::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*, ::StringW>* getStaticF___9__31_2();

  static inline ::UnityEngine::XR::OpenXR::__OpenXRLoaderBase____c* New_ctor();

  /// @brief Method .ctor addr 0x2b01ae0 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <InitializeInternal>b__31_0 addr 0x2b01ae8 size 0x5c virtual false final false
  inline bool _InitializeInternal_b__31_0(::UnityEngine::XR::OpenXR::Features::OpenXRFeature* f);

  /// @brief Method <InitializeInternal>b__31_1 addr 0x2b01b44 size 0x18 virtual false final false
  inline int32_t _InitializeInternal_b__31_1(::UnityEngine::XR::OpenXR::Features::OpenXRFeature* f);

  /// @brief Method <InitializeInternal>b__31_2 addr 0x2b01b5c size 0x18 virtual false final false
  inline ::StringW _InitializeInternal_b__31_2(::UnityEngine::XR::OpenXR::Features::OpenXRFeature* f);

  // Ctor Parameters [CppParam { name: "", ty: "__OpenXRLoaderBase____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OpenXRLoaderBase____c(__OpenXRLoaderBase____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OpenXRLoaderBase____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OpenXRLoaderBase____c(__OpenXRLoaderBase____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OpenXRLoaderBase____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::__OpenXRLoaderBase____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR
// Type: UnityEngine.XR.OpenXR::OpenXRLoaderBase
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 112, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::OpenXR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15900)), TypeDefinitionIndex(TypeDefinitionIndex(14440)), TypeDefinitionIndex(TypeDefinitionIndex(14407))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14410))
// CS Name: ::UnityEngine.XR.OpenXR::OpenXRLoaderBase*
class CORDL_TYPE OpenXRLoaderBase : public ::UnityEngine::XR::Management::XRLoaderHelper {
public:
  // Declarations
  using __c = ::UnityEngine::XR::OpenXR::__OpenXRLoaderBase____c;

  using ReceiveNativeEventDelegate = ::UnityEngine::XR::OpenXR::__OpenXRLoaderBase__ReceiveNativeEventDelegate;

  using LoaderState = ::UnityEngine::XR::OpenXR::__OpenXRLoaderBase__LoaderState;

  /// @brief Field <currentLoaderState>k__BackingField, offset 0x20, size 0x4
  __declspec(property(get = __get__currentLoaderState_k__BackingField,
                      put = __set__currentLoaderState_k__BackingField))::UnityEngine::XR::OpenXR::__OpenXRLoaderBase__LoaderState _currentLoaderState_k__BackingField;

  /// @brief Field validLoaderInitStates, offset 0x28, size 0x8
  __declspec(property(get = __get_validLoaderInitStates,
                      put = __set_validLoaderInitStates))::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::__OpenXRLoaderBase__LoaderState>* validLoaderInitStates;

  /// @brief Field validLoaderStartStates, offset 0x30, size 0x8
  __declspec(property(get = __get_validLoaderStartStates,
                      put = __set_validLoaderStartStates))::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::__OpenXRLoaderBase__LoaderState>* validLoaderStartStates;

  /// @brief Field validLoaderStopStates, offset 0x38, size 0x8
  __declspec(property(get = __get_validLoaderStopStates,
                      put = __set_validLoaderStopStates))::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::__OpenXRLoaderBase__LoaderState>* validLoaderStopStates;

  /// @brief Field validLoaderDeinitStates, offset 0x40, size 0x8
  __declspec(property(get = __get_validLoaderDeinitStates,
                      put = __set_validLoaderDeinitStates))::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::__OpenXRLoaderBase__LoaderState>* validLoaderDeinitStates;

  /// @brief Field runningStates, offset 0x48, size 0x8
  __declspec(property(get = __get_runningStates, put = __set_runningStates))::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::__OpenXRLoaderBase__LoaderState>* runningStates;

  /// @brief Field currentOpenXRState, offset 0x50, size 0x4
  __declspec(property(get = __get_currentOpenXRState, put = __set_currentOpenXRState))::UnityEngine::XR::OpenXR::Features::__OpenXRFeature__NativeEvent currentOpenXRState;

  /// @brief Field actionSetsAttached, offset 0x54, size 0x1
  __declspec(property(get = __get_actionSetsAttached, put = __set_actionSetsAttached)) bool actionSetsAttached;

  /// @brief Field unhandledExceptionHandler, offset 0x58, size 0x8
  __declspec(property(get = __get_unhandledExceptionHandler, put = __set_unhandledExceptionHandler))::System::UnhandledExceptionEventHandler* unhandledExceptionHandler;

  /// @brief Field DisableValidationChecksOnEnteringPlaymode, offset 0x60, size 0x1
  __declspec(property(get = __get_DisableValidationChecksOnEnteringPlaymode, put = __set_DisableValidationChecksOnEnteringPlaymode)) bool DisableValidationChecksOnEnteringPlaymode;

  /// @brief Field lastPollCheckTime, offset 0x68, size 0x8
  __declspec(property(get = __get_lastPollCheckTime, put = __set_lastPollCheckTime)) double_t lastPollCheckTime;

  /// @brief Field s_DisplaySubsystemDescriptors, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_DisplaySubsystemDescriptors,
                             put = setStaticF_s_DisplaySubsystemDescriptors))::System::Collections::Generic::List_1<::UnityEngine::XR::XRDisplaySubsystemDescriptor*>* s_DisplaySubsystemDescriptors;

  /// @brief Field s_InputSubsystemDescriptors, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_InputSubsystemDescriptors,
                             put = setStaticF_s_InputSubsystemDescriptors))::System::Collections::Generic::List_1<Il2CppObject*>* s_InputSubsystemDescriptors;

  /// @brief Field <Instance>k__BackingField, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__Instance_k__BackingField, put = setStaticF__Instance_k__BackingField))::UnityEngine::XR::OpenXR::OpenXRLoaderBase* _Instance_k__BackingField;

  __declspec(property(get = get_currentLoaderState, put = set_currentLoaderState))::UnityEngine::XR::OpenXR::__OpenXRLoaderBase__LoaderState currentLoaderState;

  __declspec(property(get = get_displaySubsystem)) Il2CppObject* displaySubsystem;

  __declspec(property(get = get_inputSubsystem))::UnityEngine::XR::XRInputSubsystem* inputSubsystem;

  __declspec(property(get = get_isInitialized)) bool isInitialized;

  __declspec(property(get = get_isStarted)) bool isStarted;

  constexpr ::UnityEngine::XR::OpenXR::__OpenXRLoaderBase__LoaderState& __get__currentLoaderState_k__BackingField();

  constexpr ::UnityEngine::XR::OpenXR::__OpenXRLoaderBase__LoaderState const& __get__currentLoaderState_k__BackingField() const;

  constexpr void __set__currentLoaderState_k__BackingField(::UnityEngine::XR::OpenXR::__OpenXRLoaderBase__LoaderState value);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::__OpenXRLoaderBase__LoaderState>*& __get_validLoaderInitStates();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::__OpenXRLoaderBase__LoaderState>*> const& __get_validLoaderInitStates() const;

  constexpr void __set_validLoaderInitStates(::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::__OpenXRLoaderBase__LoaderState>* value);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::__OpenXRLoaderBase__LoaderState>*& __get_validLoaderStartStates();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::__OpenXRLoaderBase__LoaderState>*> const& __get_validLoaderStartStates() const;

  constexpr void __set_validLoaderStartStates(::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::__OpenXRLoaderBase__LoaderState>* value);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::__OpenXRLoaderBase__LoaderState>*& __get_validLoaderStopStates();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::__OpenXRLoaderBase__LoaderState>*> const& __get_validLoaderStopStates() const;

  constexpr void __set_validLoaderStopStates(::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::__OpenXRLoaderBase__LoaderState>* value);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::__OpenXRLoaderBase__LoaderState>*& __get_validLoaderDeinitStates();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::__OpenXRLoaderBase__LoaderState>*> const& __get_validLoaderDeinitStates() const;

  constexpr void __set_validLoaderDeinitStates(::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::__OpenXRLoaderBase__LoaderState>* value);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::__OpenXRLoaderBase__LoaderState>*& __get_runningStates();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::__OpenXRLoaderBase__LoaderState>*> const& __get_runningStates() const;

  constexpr void __set_runningStates(::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::__OpenXRLoaderBase__LoaderState>* value);

  constexpr ::UnityEngine::XR::OpenXR::Features::__OpenXRFeature__NativeEvent& __get_currentOpenXRState();

  constexpr ::UnityEngine::XR::OpenXR::Features::__OpenXRFeature__NativeEvent const& __get_currentOpenXRState() const;

  constexpr void __set_currentOpenXRState(::UnityEngine::XR::OpenXR::Features::__OpenXRFeature__NativeEvent value);

  constexpr bool& __get_actionSetsAttached();

  constexpr bool const& __get_actionSetsAttached() const;

  constexpr void __set_actionSetsAttached(bool value);

  constexpr ::System::UnhandledExceptionEventHandler*& __get_unhandledExceptionHandler();

  constexpr ::cordl_internals::to_const_pointer<::System::UnhandledExceptionEventHandler*> const& __get_unhandledExceptionHandler() const;

  constexpr void __set_unhandledExceptionHandler(::System::UnhandledExceptionEventHandler* value);

  constexpr bool& __get_DisableValidationChecksOnEnteringPlaymode();

  constexpr bool const& __get_DisableValidationChecksOnEnteringPlaymode() const;

  constexpr void __set_DisableValidationChecksOnEnteringPlaymode(bool value);

  constexpr double_t& __get_lastPollCheckTime();

  constexpr double_t const& __get_lastPollCheckTime() const;

  constexpr void __set_lastPollCheckTime(double_t value);

  static inline void setStaticF_s_DisplaySubsystemDescriptors(::System::Collections::Generic::List_1<::UnityEngine::XR::XRDisplaySubsystemDescriptor*>* value);

  static inline ::System::Collections::Generic::List_1<::UnityEngine::XR::XRDisplaySubsystemDescriptor*>* getStaticF_s_DisplaySubsystemDescriptors();

  static inline void setStaticF_s_InputSubsystemDescriptors(::System::Collections::Generic::List_1<Il2CppObject*>* value);

  static inline ::System::Collections::Generic::List_1<Il2CppObject*>* getStaticF_s_InputSubsystemDescriptors();

  static inline void setStaticF__Instance_k__BackingField(::UnityEngine::XR::OpenXR::OpenXRLoaderBase* value);

  static inline ::UnityEngine::XR::OpenXR::OpenXRLoaderBase* getStaticF__Instance_k__BackingField();

  /// @brief Method get_Instance addr 0x2afcd18 size 0x58 virtual false final false
  static inline ::UnityEngine::XR::OpenXR::OpenXRLoaderBase* get_Instance();

  /// @brief Method set_Instance addr 0x2afcd70 size 0x5c virtual false final false
  static inline void set_Instance(::UnityEngine::XR::OpenXR::OpenXRLoaderBase* value);

  /// @brief Method get_currentLoaderState addr 0x2afcdcc size 0x8 virtual false final false
  inline ::UnityEngine::XR::OpenXR::__OpenXRLoaderBase__LoaderState get_currentLoaderState();

  /// @brief Method set_currentLoaderState addr 0x2afcdd4 size 0x8 virtual false final false
  inline void set_currentLoaderState(::UnityEngine::XR::OpenXR::__OpenXRLoaderBase__LoaderState value);

  /// @brief Method get_displaySubsystem addr 0x2afcddc size 0x70 virtual false final false
  inline Il2CppObject* get_displaySubsystem();

  /// @brief Method get_inputSubsystem addr 0x2afce4c size 0xd8 virtual false final false
  inline ::UnityEngine::XR::XRInputSubsystem* get_inputSubsystem();

  /// @brief Method get_isInitialized addr 0x2afcf24 size 0x1c virtual false final false
  inline bool get_isInitialized();

  /// @brief Method get_isStarted addr 0x2afcf40 size 0x54 virtual false final false
  inline bool get_isStarted();

  /// @brief Method ExceptionHandler addr 0x2afcf94 size 0x234 virtual false final false
  static inline void ExceptionHandler(::System::Object* sender, ::System::UnhandledExceptionEventArgs* args);

  /// @brief Method Initialize addr 0x2afd1c8 size 0x260 virtual true final false
  inline bool Initialize();

  /// @brief Method InitializeInternal addr 0x2afd428 size 0x510 virtual false final false
  inline bool InitializeInternal();

  /// @brief Method CreateSubsystems addr 0x2afe810 size 0x11c virtual false final false
  inline bool CreateSubsystems();

  /// @brief Method ProcessOpenXRMessageLoop addr 0x2afecd4 size 0x9c virtual false final false
  inline void ProcessOpenXRMessageLoop();

  /// @brief Method Start addr 0x2afedd4 size 0xa0 virtual true final false
  inline bool Start();

  /// @brief Method StartInternal addr 0x2afee74 size 0x1a8 virtual false final false
  inline bool StartInternal();

  /// @brief Method Stop addr 0x2b00658 size 0x120 virtual true final false
  inline bool Stop();

  /// @brief Method StopInternal addr 0x2b00778 size 0x58 virtual false final false
  inline void StopInternal();

  /// @brief Method Deinitialize addr 0x2b00834 size 0x2c4 virtual true final false
  inline bool Deinitialize();

  /// @brief Method CreateSubsystem addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TDescriptor, typename TSubsystem> inline void CreateSubsystem(::System::Collections::Generic::List_1<TDescriptor>* descriptors, ::StringW id);

  /// @brief Method StartSubsystem addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> inline void StartSubsystem();

  /// @brief Method StopSubsystem addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> inline void StopSubsystem();

  /// @brief Method DestroySubsystem addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> inline void DestroySubsystem();

  /// @brief Method SetApplicationInfo addr 0x2afde38 size 0x164 virtual false final false
  inline void SetApplicationInfo();

  /// @brief Method StringToWCHAR_T addr 0x2b00cf4 size 0x98 virtual false final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> StringToWCHAR_T(::StringW s);

  /// @brief Method LoadOpenXRSymbols addr 0x2afdc44 size 0x68 virtual false final false
  inline bool LoadOpenXRSymbols();

  /// @brief Method RequestOpenXRFeatures addr 0x2afdf9c size 0x7dc virtual false final false
  inline void RequestOpenXRFeatures();

  /// @brief Method DebugLogEnabledSpecExtensions addr 0x2afeb00 size 0x1d4 virtual false final false
  static inline void DebugLogEnabledSpecExtensions();

  /// @brief Method ReceiveNativeEvent addr 0x2afcadc size 0x23c virtual false final false
  static inline void ReceiveNativeEvent(::UnityEngine::XR::OpenXR::Features::__OpenXRFeature__NativeEvent e, uint64_t payload);

  /// @brief Method RegisterOpenXRCallbacks addr 0x2afe778 size 0x98 virtual false final false
  static inline void RegisterOpenXRCallbacks();

  /// @brief Method Internal_LoadOpenXRLibrary addr 0x2b00d8c size 0x8c virtual false final false
  static inline bool Internal_LoadOpenXRLibrary(::ArrayW<uint8_t, ::Array<uint8_t>*> loaderPath);

  /// @brief Method Internal_UnloadOpenXRLibrary addr 0x2b00bc0 size 0x64 virtual false final false
  static inline void Internal_UnloadOpenXRLibrary();

  /// @brief Method Internal_SetCallbacks addr 0x2b01850 size 0x80 virtual false final false
  static inline void Internal_SetCallbacks(::UnityEngine::XR::OpenXR::__OpenXRLoaderBase__ReceiveNativeEventDelegate* callback);

  /// @brief Method Internal_SetApplicationInfo addr 0x2b00c24 size 0xd0 virtual false final false
  static inline void Internal_SetApplicationInfo(::StringW applicationName, ::StringW applicationVersion, uint32_t applicationVersionHash, ::StringW engineVersion);

  /// @brief Method Internal_RequestExitSession addr 0x2b00af8 size 0x64 virtual false final false
  static inline void Internal_RequestExitSession();

  /// @brief Method Internal_InitializeSession addr 0x2afddc8 size 0x70 virtual false final false
  static inline bool Internal_InitializeSession();

  /// @brief Method Internal_CreateSessionIfNeeded addr 0x2aff01c size 0x70 virtual false final false
  static inline bool Internal_CreateSessionIfNeeded();

  /// @brief Method Internal_BeginSession addr 0x2aff08c size 0x64 virtual false final false
  static inline void Internal_BeginSession();

  /// @brief Method Internal_EndSession addr 0x2b007d0 size 0x64 virtual false final false
  static inline void Internal_EndSession();

  /// @brief Method Internal_DestroySession addr 0x2b00b5c size 0x64 virtual false final false
  static inline void Internal_DestroySession();

  /// @brief Method Internal_PumpMessageLoop addr 0x2afed70 size 0x64 virtual false final false
  static inline void Internal_PumpMessageLoop();

  /// @brief Method Internal_RequestEnableExtensionString addr 0x2b00e18 size 0x90 virtual false final false
  static inline bool Internal_RequestEnableExtensionString(::StringW extensionString);

  static inline ::UnityEngine::XR::OpenXR::OpenXRLoaderBase* New_ctor();

  /// @brief Method .ctor addr 0x2afc3fc size 0x6e0 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "OpenXRLoaderBase", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OpenXRLoaderBase(OpenXRLoaderBase&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OpenXRLoaderBase", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OpenXRLoaderBase(OpenXRLoaderBase const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OpenXRLoaderBase();

public:
  /// @brief Field <currentLoaderState>k__BackingField, offset: 0x20, size: 0x4, def value: None
  ::UnityEngine::XR::OpenXR::__OpenXRLoaderBase__LoaderState ____currentLoaderState_k__BackingField;

  /// @brief Field validLoaderInitStates, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::__OpenXRLoaderBase__LoaderState>* ___validLoaderInitStates;

  /// @brief Field validLoaderStartStates, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::__OpenXRLoaderBase__LoaderState>* ___validLoaderStartStates;

  /// @brief Field validLoaderStopStates, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::__OpenXRLoaderBase__LoaderState>* ___validLoaderStopStates;

  /// @brief Field validLoaderDeinitStates, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::__OpenXRLoaderBase__LoaderState>* ___validLoaderDeinitStates;

  /// @brief Field runningStates, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::__OpenXRLoaderBase__LoaderState>* ___runningStates;

  /// @brief Field currentOpenXRState, offset: 0x50, size: 0x4, def value: None
  ::UnityEngine::XR::OpenXR::Features::__OpenXRFeature__NativeEvent ___currentOpenXRState;

  /// @brief Field actionSetsAttached, offset: 0x54, size: 0x1, def value: None
  bool ___actionSetsAttached;

  /// @brief Field unhandledExceptionHandler, offset: 0x58, size: 0x8, def value: None
  ::System::UnhandledExceptionEventHandler* ___unhandledExceptionHandler;

  /// @brief Field DisableValidationChecksOnEnteringPlaymode, offset: 0x60, size: 0x1, def value: None
  bool ___DisableValidationChecksOnEnteringPlaymode;

  /// @brief Field lastPollCheckTime, offset: 0x68, size: 0x8, def value: None
  double_t ___lastPollCheckTime;

  /// @brief Field k_IdlePollingWaitTimeInSeconds offset 0xffffffff size 0x8
  static constexpr double_t k_IdlePollingWaitTimeInSeconds{ 0.1 };

  /// @brief Field LibraryName offset 0xffffffff size 0x8
  static constexpr ::ConstString LibraryName{ u"UnityOpenXR" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::OpenXRLoaderBase, 0x70>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::OpenXRLoaderBase, ____currentLoaderState_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::OpenXRLoaderBase, ___validLoaderInitStates) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::OpenXRLoaderBase, ___validLoaderStartStates) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::OpenXRLoaderBase, ___validLoaderStopStates) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::OpenXRLoaderBase, ___validLoaderDeinitStates) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::OpenXRLoaderBase, ___runningStates) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::OpenXRLoaderBase, ___currentOpenXRState) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::OpenXRLoaderBase, ___actionSetsAttached) == 0x54, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::OpenXRLoaderBase, ___unhandledExceptionHandler) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::OpenXRLoaderBase, ___DisableValidationChecksOnEnteringPlaymode) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::OpenXRLoaderBase, ___lastPollCheckTime) == 0x68, "Offset mismatch!");

} // namespace UnityEngine::XR::OpenXR
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::__OpenXRLoaderBase__LoaderState, "UnityEngine.XR.OpenXR", "OpenXRLoaderBase/LoaderState");
NEED_NO_BOX(::UnityEngine::XR::OpenXR::OpenXRLoaderBase);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::OpenXRLoaderBase*, "UnityEngine.XR.OpenXR", "OpenXRLoaderBase");
NEED_NO_BOX(::UnityEngine::XR::OpenXR::__OpenXRLoaderBase__ReceiveNativeEventDelegate);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::__OpenXRLoaderBase__ReceiveNativeEventDelegate*, "UnityEngine.XR.OpenXR", "OpenXRLoaderBase/ReceiveNativeEventDelegate");
NEED_NO_BOX(::UnityEngine::XR::OpenXR::__OpenXRLoaderBase____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::__OpenXRLoaderBase____c*, "UnityEngine.XR.OpenXR", "OpenXRLoaderBase/<>c");
