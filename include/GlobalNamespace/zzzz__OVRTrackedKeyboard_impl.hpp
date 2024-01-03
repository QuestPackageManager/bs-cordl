#pragma once
#include "GlobalNamespace/zzzz__OVRKeyboard_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_impl.hpp"
#include "GlobalNamespace/zzzz__OVRTextureQualityFiltering_impl.hpp"
#include "GlobalNamespace/zzzz__OVRTrackedKeyboard_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__OVRTrackedKeyboard_def.hpp"
#include "GlobalNamespace/zzzz__OVRTrackedKeyboard_def.hpp"
#include "GlobalNamespace/zzzz__OVRCameraRig_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "GlobalNamespace/zzzz__OVRKeyboard_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "GlobalNamespace/zzzz__OVRPassthroughLayer_def.hpp"
#include "GlobalNamespace/zzzz__OVROverlay_def.hpp"
#include "UnityEngine/zzzz__MeshFilter_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
#include "UnityEngine/zzzz__Coroutine_def.hpp"
#include "UnityEngine/zzzz__BoxCollider_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState::__OVRTrackedKeyboard__TrackedKeyboardState(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState::__OVRTrackedKeyboard__TrackedKeyboardState() {}
constexpr ::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState::Uninitialized{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState::NoTrackableKeyboard{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState::Offline{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState::StartedNotTracked{ static_cast<int32_t>(0x3) };
constexpr ::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState::Stale{ static_cast<int32_t>(0x4) };
constexpr ::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState::Valid{ static_cast<int32_t>(0x5) };
constexpr ::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState::Error{ static_cast<int32_t>(0x6) };
constexpr ::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState::ErrorExtensionFailed{ static_cast<int32_t>(0x7) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVRTrackedKeyboard__KeyboardPresentation::__OVRTrackedKeyboard__KeyboardPresentation(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRTrackedKeyboard__KeyboardPresentation::__OVRTrackedKeyboard__KeyboardPresentation() {}
constexpr ::GlobalNamespace::__OVRTrackedKeyboard__KeyboardPresentation GlobalNamespace::__OVRTrackedKeyboard__KeyboardPresentation::PreferOpaque{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__OVRTrackedKeyboard__KeyboardPresentation GlobalNamespace::__OVRTrackedKeyboard__KeyboardPresentation::PreferKeyLabels{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent::*)(
    ::StringW, ::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState, bool)>(&::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2795680;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent::_ctor(::StringW keyboardModel, ::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState state,
                                                                                                bool timeout) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, keyboardModel, state, timeout);
}
// Ctor Parameters [CppParam { name: "ActiveKeyboardName", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "State", ty:
// "::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState", modifiers: "", def_value: Some("{}") }, CppParam { name: "TrackingTimeout", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent::__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent(
    ::StringW ActiveKeyboardName, ::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState State, bool TrackingTimeout) noexcept {
  this->ActiveKeyboardName = ActiveKeyboardName;
  this->State = State;
  this->TrackingTimeout = TrackingTimeout;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent::__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent() {}
//  Writing Method size for method: ::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent::*)(bool)>(
    &::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x279589c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent::_ctor(bool isEnabled) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, isEnabled);
}
// Ctor Parameters [CppParam { name: "IsEnabled", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent::__OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent(bool IsEnabled) noexcept {
  this->IsEnabled = IsEnabled;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent::__OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent() {}
//  Writing Method size for method: ::GlobalNamespace::__OVRTrackedKeyboard___Start_d__88._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRTrackedKeyboard___Start_d__88::*)(int32_t)>(
    &::GlobalNamespace::__OVRTrackedKeyboard___Start_d__88::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2793de0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___Start_d__88*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRTrackedKeyboard___Start_d__88.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRTrackedKeyboard___Start_d__88::*)()>(
    &::GlobalNamespace::__OVRTrackedKeyboard___Start_d__88::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x27958a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___Start_d__88*>::get(),
                                                                               "System.IDisposable.Dispose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRTrackedKeyboard___Start_d__88.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__OVRTrackedKeyboard___Start_d__88::*)()>(
    &::GlobalNamespace::__OVRTrackedKeyboard___Start_d__88::MoveNext)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x27958ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___Start_d__88*>::get(),
                                                                               "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRTrackedKeyboard___Start_d__88.System_Collections_Generic_IEnumerator_System_Object__get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::__OVRTrackedKeyboard___Start_d__88::*)()>(
    &::GlobalNamespace::__OVRTrackedKeyboard___Start_d__88::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27959b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___Start_d__88*>::get(),
                                                 "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRTrackedKeyboard___Start_d__88.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRTrackedKeyboard___Start_d__88::*)()>(
    &::GlobalNamespace::__OVRTrackedKeyboard___Start_d__88::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x27959b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___Start_d__88*>::get(),
                                                                               "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRTrackedKeyboard___Start_d__88.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::__OVRTrackedKeyboard___Start_d__88::*)()>(
    &::GlobalNamespace::__OVRTrackedKeyboard___Start_d__88::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27959f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___Start_d__88*>::get(),
                                                                               "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr GlobalNamespace::__OVRTrackedKeyboard___Start_d__88::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr GlobalNamespace::__OVRTrackedKeyboard___Start_d__88::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::__OVRTrackedKeyboard___Start_d__88::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr int32_t& GlobalNamespace::__OVRTrackedKeyboard___Start_d__88::__get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::__OVRTrackedKeyboard___Start_d__88::__get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void GlobalNamespace::__OVRTrackedKeyboard___Start_d__88::__set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::__OVRTrackedKeyboard___Start_d__88::__get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& GlobalNamespace::__OVRTrackedKeyboard___Start_d__88::__get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void GlobalNamespace::__OVRTrackedKeyboard___Start_d__88::__set___2__current(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::OVRTrackedKeyboard*& GlobalNamespace::__OVRTrackedKeyboard___Start_d__88::__get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVRTrackedKeyboard*> const& GlobalNamespace::__OVRTrackedKeyboard___Start_d__88::__get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::__OVRTrackedKeyboard___Start_d__88::__set___4__this(::GlobalNamespace::OVRTrackedKeyboard* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__OVRTrackedKeyboard___Start_d__88* GlobalNamespace::__OVRTrackedKeyboard___Start_d__88::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__OVRTrackedKeyboard___Start_d__88*>(__1__state));
}
inline void GlobalNamespace::__OVRTrackedKeyboard___Start_d__88::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___Start_d__88*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::__OVRTrackedKeyboard___Start_d__88::System_IDisposable_Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___Start_d__88*>::get(),
                                                                             "System.IDisposable.Dispose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::__OVRTrackedKeyboard___Start_d__88::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___Start_d__88*>::get(),
                                                                             "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__OVRTrackedKeyboard___Start_d__88::System_Collections_Generic_IEnumerator_System_Object__get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___Start_d__88*>::get(),
                                               "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void GlobalNamespace::__OVRTrackedKeyboard___Start_d__88::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___Start_d__88*>::get(),
                                                                             "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__OVRTrackedKeyboard___Start_d__88::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___Start_d__88*>::get(),
                                                                             "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRTrackedKeyboard___Start_d__88::__OVRTrackedKeyboard___Start_d__88() {}
//  Writing Method size for method: ::GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89::*)(int32_t)>(
    &::GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2793e70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89::*)()>(
    &::GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2795a00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89*>::get(),
                                                 "System.IDisposable.Dispose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89::*)()>(
    &::GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89::MoveNext)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x2795a04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89*>::get(), "MoveNext",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89.System_Collections_Generic_IEnumerator_System_Object__get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89::*)()>(
    &::GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2795b74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89*>::get(),
                                                 "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89::*)()>(
    &::GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2795b7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89*>::get(),
                                                 "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89::*)()>(
    &::GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2795bbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89*>::get(),
                                                 "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr int32_t& GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89::__get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89::__get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89::__set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89::__get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89::__get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89::__set___2__current(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::OVRTrackedKeyboard*& GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89::__get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVRTrackedKeyboard*> const& GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89::__get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89::__set___4__this(::GlobalNamespace::OVRTrackedKeyboard* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89* GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89*>(__1__state));
}
inline void GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89*>::get(),
                                               "System.IDisposable.Dispose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89*>::get(), "MoveNext",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89::System_Collections_Generic_IEnumerator_System_Object__get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89*>::get(),
                                               "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89() {}
//  Writing Method size for method: ::GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95::*)(int32_t)>(
    &::GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2794544;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95::*)()>(
    &::GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2795bc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95*>::get(),
                                                 "System.IDisposable.Dispose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95::*)()>(
    &::GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95::MoveNext)> {
  constexpr static std::size_t size = 0x4bc;
  constexpr static std::size_t addrs = 0x2795bc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95*>::get(),
                                                 "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95.System_Collections_Generic_IEnumerator_System_Object__get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95::*)()>(
    &::GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2796084;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95*>::get(),
                                                 "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95::*)()>(
    &::GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x279608c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95*>::get(),
                                                 "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95::*)()>(
    &::GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27960cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95*>::get(),
                                                 "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr int32_t& GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95::__get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95::__get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95::__set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95::__get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95::__get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95::__set___2__current(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::OVRTrackedKeyboard*& GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95::__get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVRTrackedKeyboard*> const& GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95::__get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95::__set___4__this(::GlobalNamespace::OVRTrackedKeyboard* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__OVRKeyboard__TrackedKeyboardInfo& GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95::__get__keyboardInfo_5__2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____keyboardInfo_5__2;
}
constexpr ::GlobalNamespace::__OVRKeyboard__TrackedKeyboardInfo const& GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95::__get__keyboardInfo_5__2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____keyboardInfo_5__2;
}
constexpr void GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95::__set__keyboardInfo_5__2(::GlobalNamespace::__OVRKeyboard__TrackedKeyboardInfo value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____keyboardInfo_5__2 = value;
}
inline ::GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95* GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95*>(__1__state));
}
inline void GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95*>::get(),
                                               "System.IDisposable.Dispose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95*>::get(), "MoveNext",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95::System_Collections_Generic_IEnumerator_System_Object__get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95*>::get(),
                                               "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95() {}
//  Writing Method size for method: ::GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96::*)(int32_t)>(
    &::GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x27945d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96*>::get(),
                                                 ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96::*)()>(
    &::GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x27960d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96*>::get(),
                                                 "System.IDisposable.Dispose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96::*)()>(
    &::GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96::MoveNext)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x27960d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96*>::get(),
                                                 "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96.System_Collections_Generic_IEnumerator_System_Object__get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96::*)()>(
    &::GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x279639c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96*>::get(),
                                                 "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96::*)()>(
    &::GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x27963a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96*>::get(),
                                                 "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96::*)()>(
    &::GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27963e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96*>::get(),
                                                 "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr int32_t& GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96::__get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96::__get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96::__set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96::__get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96::__get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96::__set___2__current(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::OVRTrackedKeyboard*& GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96::__get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVRTrackedKeyboard*> const& GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96::__get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96::__set___4__this(::GlobalNamespace::OVRTrackedKeyboard* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96* GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96*>(__1__state));
}
inline void GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96*>::get(),
                                               "System.IDisposable.Dispose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96*>::get(),
                                               "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96::System_Collections_Generic_IEnumerator_System_Object__get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96*>::get(),
                                               "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96() {}
//  Writing Method size for method: ::GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98::*)(int32_t)>(
    &::GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x279498c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98::*)()>(
    &::GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x27963ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98*>::get(),
                                                 "System.IDisposable.Dispose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98::*)()>(
    &::GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98::MoveNext)> {
  constexpr static std::size_t size = 0x9a8;
  constexpr static std::size_t addrs = 0x27963f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98*>::get(), "MoveNext",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98.System_Collections_Generic_IEnumerator_System_Object__get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98::*)()>(
    &::GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2796d98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98*>::get(),
                                                 "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98::*)()>(
    &::GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2796da0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98*>::get(),
                                                 "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98::*)()>(
    &::GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2796de0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98*>::get(),
                                                 "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr int32_t& GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98::__get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98::__get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98::__set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98::__get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98::__get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98::__set___2__current(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::OVRTrackedKeyboard*& GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98::__get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVRTrackedKeyboard*> const& GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98::__get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98::__set___4__this(::GlobalNamespace::OVRTrackedKeyboard* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98* GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98*>(__1__state));
}
inline void GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98*>::get(),
                                               "System.IDisposable.Dispose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98*>::get(), "MoveNext",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98::System_Collections_Generic_IEnumerator_System_Object__get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98*>::get(),
                                               "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98() {}
//  Writing Method size for method: ::GlobalNamespace::__OVRTrackedKeyboard____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRTrackedKeyboard____c::*)()>(&::GlobalNamespace::__OVRTrackedKeyboard____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2796e4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard____c*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRTrackedKeyboard____c.__ctor_b__113_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRTrackedKeyboard____c::*)(
    ::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent)>(&::GlobalNamespace::__OVRTrackedKeyboard____c::__ctor_b__113_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2796e54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard____c*>::get(), "<.ctor>b__113_0", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRTrackedKeyboard____c.__ctor_b__113_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRTrackedKeyboard____c::*)(
    ::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent)>(&::GlobalNamespace::__OVRTrackedKeyboard____c::__ctor_b__113_1)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2796e58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard____c*>::get(), "<.ctor>b__113_1", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::__OVRTrackedKeyboard____c::setStaticF___9(::GlobalNamespace::__OVRTrackedKeyboard____c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::__OVRTrackedKeyboard____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard____c*>::get>(
      std::forward<::GlobalNamespace::__OVRTrackedKeyboard____c*>(value));
}
inline ::GlobalNamespace::__OVRTrackedKeyboard____c* GlobalNamespace::__OVRTrackedKeyboard____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::__OVRTrackedKeyboard____c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard____c*>::get>();
}
inline void GlobalNamespace::__OVRTrackedKeyboard____c::setStaticF___9__113_0(::System::Action_1<::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent>*, "<>9__113_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard____c*>::get>(
      std::forward<::System::Action_1<::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent>*>(value));
}
inline ::System::Action_1<::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent>* GlobalNamespace::__OVRTrackedKeyboard____c::getStaticF___9__113_0() {
  return ::cordl_internals::getStaticField<::System::Action_1<::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent>*, "<>9__113_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard____c*>::get>();
}
inline void GlobalNamespace::__OVRTrackedKeyboard____c::setStaticF___9__113_1(::System::Action_1<::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent>*, "<>9__113_1",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard____c*>::get>(
      std::forward<::System::Action_1<::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent>*>(value));
}
inline ::System::Action_1<::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent>* GlobalNamespace::__OVRTrackedKeyboard____c::getStaticF___9__113_1() {
  return ::cordl_internals::getStaticField<::System::Action_1<::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent>*, "<>9__113_1",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard____c*>::get>();
}
inline ::GlobalNamespace::__OVRTrackedKeyboard____c* GlobalNamespace::__OVRTrackedKeyboard____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__OVRTrackedKeyboard____c*>());
}
inline void GlobalNamespace::__OVRTrackedKeyboard____c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard____c*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__OVRTrackedKeyboard____c::__ctor_b__113_0(::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent _p0_) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard____c*>::get(), "<.ctor>b__113_0", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, _p0_);
}
inline void GlobalNamespace::__OVRTrackedKeyboard____c::__ctor_b__113_1(::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent _p0_) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard____c*>::get(), "<.ctor>b__113_1", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, _p0_);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRTrackedKeyboard____c::__OVRTrackedKeyboard____c() {}
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.get_CurrentKeyboardAngleFromUp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::OVRTrackedKeyboard::*)()>(
    &::GlobalNamespace::OVRTrackedKeyboard::get_CurrentKeyboardAngleFromUp)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27939ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                                                                               "get_CurrentKeyboardAngleFromUp", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.set_CurrentKeyboardAngleFromUp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard::*)(float_t)>(
    &::GlobalNamespace::OVRTrackedKeyboard::set_CurrentKeyboardAngleFromUp)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27939f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(), "set_CurrentKeyboardAngleFromUp",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.get_TrackingState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState (::GlobalNamespace::OVRTrackedKeyboard::*)()>(
    &::GlobalNamespace::OVRTrackedKeyboard::get_TrackingState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27939fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                                                                               "get_TrackingState", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.set_TrackingState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard::*)(::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState)>(
    &::GlobalNamespace::OVRTrackedKeyboard::set_TrackingState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2793a04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(), "set_TrackingState", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.get_ActiveKeyboardInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__OVRKeyboard__TrackedKeyboardInfo (::GlobalNamespace::OVRTrackedKeyboard::*)()>(
    &::GlobalNamespace::OVRTrackedKeyboard::get_ActiveKeyboardInfo)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2793a0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                                                                               "get_ActiveKeyboardInfo", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.set_ActiveKeyboardInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard::*)(::GlobalNamespace::__OVRKeyboard__TrackedKeyboardInfo)>(
    &::GlobalNamespace::OVRTrackedKeyboard::set_ActiveKeyboardInfo)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2793a20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(), "set_ActiveKeyboardInfo", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRKeyboard__TrackedKeyboardInfo>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.get_SystemKeyboardInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__OVRKeyboard__TrackedKeyboardInfo (::GlobalNamespace::OVRTrackedKeyboard::*)()>(
    &::GlobalNamespace::OVRTrackedKeyboard::get_SystemKeyboardInfo)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2793a34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                                                                               "get_SystemKeyboardInfo", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.set_SystemKeyboardInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard::*)(::GlobalNamespace::__OVRKeyboard__TrackedKeyboardInfo)>(
    &::GlobalNamespace::OVRTrackedKeyboard::set_SystemKeyboardInfo)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2793a4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(), "set_SystemKeyboardInfo", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRKeyboard__TrackedKeyboardInfo>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.get_Presentation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__OVRTrackedKeyboard__KeyboardPresentation (::GlobalNamespace::OVRTrackedKeyboard::*)()>(
    &::GlobalNamespace::OVRTrackedKeyboard::get_Presentation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2793a64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                                                                               "get_Presentation", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.set_Presentation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard::*)(::GlobalNamespace::__OVRTrackedKeyboard__KeyboardPresentation)>(
    &::GlobalNamespace::OVRTrackedKeyboard::set_Presentation)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2793a6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(), "set_Presentation", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRTrackedKeyboard__KeyboardPresentation>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.get_TrackingEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRTrackedKeyboard::*)()>(&::GlobalNamespace::OVRTrackedKeyboard::get_TrackingEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2793cf8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                                                                               "get_TrackingEnabled", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.set_TrackingEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard::*)(bool)>(&::GlobalNamespace::OVRTrackedKeyboard::set_TrackingEnabled)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2793d00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(), "set_TrackingEnabled",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.get_ConnectionRequired
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRTrackedKeyboard::*)()>(&::GlobalNamespace::OVRTrackedKeyboard::get_ConnectionRequired)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2793d0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                                                                               "get_ConnectionRequired", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.set_ConnectionRequired
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard::*)(bool)>(
    &::GlobalNamespace::OVRTrackedKeyboard::set_ConnectionRequired)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2793d14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(), "set_ConnectionRequired",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.get_ShowUntracked
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRTrackedKeyboard::*)()>(&::GlobalNamespace::OVRTrackedKeyboard::get_ShowUntracked)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2793d20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                                                                               "get_ShowUntracked", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.set_ShowUntracked
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard::*)(bool)>(&::GlobalNamespace::OVRTrackedKeyboard::set_ShowUntracked)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2793d28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(), "set_ShowUntracked",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.get_RemoteKeyboard
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRTrackedKeyboard::*)()>(&::GlobalNamespace::OVRTrackedKeyboard::get_RemoteKeyboard)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2793d34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                                                                               "get_RemoteKeyboard", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.set_RemoteKeyboard
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard::*)(bool)>(&::GlobalNamespace::OVRTrackedKeyboard::set_RemoteKeyboard)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2793d44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(), "set_RemoteKeyboard",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.get_KeyboardQueryFlags
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__OVRPlugin__TrackedKeyboardQueryFlags (::GlobalNamespace::OVRTrackedKeyboard::*)()>(
    &::GlobalNamespace::OVRTrackedKeyboard::get_KeyboardQueryFlags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2793d5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                                                                               "get_KeyboardQueryFlags", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.set_KeyboardQueryFlags
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard::*)(::GlobalNamespace::__OVRPlugin__TrackedKeyboardQueryFlags)>(
    &::GlobalNamespace::OVRTrackedKeyboard::set_KeyboardQueryFlags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2793d64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(), "set_KeyboardQueryFlags", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRPlugin__TrackedKeyboardQueryFlags>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.get_PassthroughOverlay
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVROverlay* (::GlobalNamespace::OVRTrackedKeyboard::*)()>(
    &::GlobalNamespace::OVRTrackedKeyboard::get_PassthroughOverlay)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2793d6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                                                                               "get_PassthroughOverlay", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.set_PassthroughOverlay
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard::*)(::GlobalNamespace::OVROverlay*)>(
    &::GlobalNamespace::OVRTrackedKeyboard::set_PassthroughOverlay)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2793d74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(), "set_PassthroughOverlay", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVROverlay*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::OVRTrackedKeyboard::*)()>(
    &::GlobalNamespace::OVRTrackedKeyboard::Start)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2793d78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(), "Start",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.InitializeHandPresenceData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::OVRTrackedKeyboard::*)()>(
    &::GlobalNamespace::OVRTrackedKeyboard::InitializeHandPresenceData)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2793e08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                                                                               "InitializeHandPresenceData", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.RegisterPassthroughMeshToSDK
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard::*)()>(
    &::GlobalNamespace::OVRTrackedKeyboard::RegisterPassthroughMeshToSDK)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2793e98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                                                                               "RegisterPassthroughMeshToSDK", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.GetDistanceToKeyboard
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::OVRTrackedKeyboard::*)(::UnityEngine::Vector3)>(
    &::GlobalNamespace::OVRTrackedKeyboard::GetDistanceToKeyboard)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x2793f30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(), "GetDistanceToKeyboard", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.LaunchLocalKeyboardSelectionDialog
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard::*)()>(
    &::GlobalNamespace::OVRTrackedKeyboard::LaunchLocalKeyboardSelectionDialog)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x27940bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                                                                               "LaunchLocalKeyboardSelectionDialog", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.LaunchRemoteKeyboardSelectionDialog
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard::*)()>(
    &::GlobalNamespace::OVRTrackedKeyboard::LaunchRemoteKeyboardSelectionDialog)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2794488;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                                                                               "LaunchRemoteKeyboardSelectionDialog", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.KeyboardTrackerIsRunning
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRTrackedKeyboard::*)()>(
    &::GlobalNamespace::OVRTrackedKeyboard::KeyboardTrackerIsRunning)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x27944c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                                                                               "KeyboardTrackerIsRunning", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.UpdateTrackingStateCoroutine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::OVRTrackedKeyboard::*)()>(
    &::GlobalNamespace::OVRTrackedKeyboard::UpdateTrackingStateCoroutine)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x27944dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                                                                               "UpdateTrackingStateCoroutine", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.StartKeyboardTrackingCoroutine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::OVRTrackedKeyboard::*)()>(
    &::GlobalNamespace::OVRTrackedKeyboard::StartKeyboardTrackingCoroutine)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x279456c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                                                                               "StartKeyboardTrackingCoroutine", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.StopKeyboardTrackingInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard::*)()>(
    &::GlobalNamespace::OVRTrackedKeyboard::StopKeyboardTrackingInternal)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x27945fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                                                                               "StopKeyboardTrackingInternal", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.UpdateKeyboardPose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::OVRTrackedKeyboard::*)()>(
    &::GlobalNamespace::OVRTrackedKeyboard::UpdateKeyboardPose)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2794924;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                                                                               "UpdateKeyboardPose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.UpdateSkippedPoseTimer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard::*)()>(&::GlobalNamespace::OVRTrackedKeyboard::UpdateSkippedPoseTimer)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x27949b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                                                                               "UpdateSkippedPoseTimer", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.LoadKeyboardMesh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard::*)()>(&::GlobalNamespace::OVRTrackedKeyboard::LoadKeyboardMesh)> {
  constexpr static std::size_t size = 0x648;
  constexpr static std::size_t addrs = 0x27949fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                                                                               "LoadKeyboardMesh", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.UpdateTextureQuality
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard::*)()>(&::GlobalNamespace::OVRTrackedKeyboard::UpdateTextureQuality)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x27952f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                                                                               "UpdateTextureQuality", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.UpdatePresentation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard::*)(bool)>(&::GlobalNamespace::OVRTrackedKeyboard::UpdatePresentation)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x2793b00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(), "UpdatePresentation",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.LoadRuntimeKeyboardMesh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GameObject* (::GlobalNamespace::OVRTrackedKeyboard::*)()>(
    &::GlobalNamespace::OVRTrackedKeyboard::LoadRuntimeKeyboardMesh)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0x2795044;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                                                                               "LoadRuntimeKeyboardMesh", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.UpdateKeyboardVisibility
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard::*)()>(
    &::GlobalNamespace::OVRTrackedKeyboard::UpdateKeyboardVisibility)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x2795428;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                                                                               "UpdateKeyboardVisibility", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.SetKeyboardState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard::*)(::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState)>(
    &::GlobalNamespace::OVRTrackedKeyboard::SetKeyboardState)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x27947f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(), "SetKeyboardState", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.GetKeyboardVisibility
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRTrackedKeyboard::*)()>(&::GlobalNamespace::OVRTrackedKeyboard::GetKeyboardVisibility)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2793abc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                                                                               "GetKeyboardVisibility", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.InitializeKeyboardInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard::*)()>(&::GlobalNamespace::OVRTrackedKeyboard::InitializeKeyboardInfo)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x27948d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                                                                               "InitializeKeyboardInfo", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.LaunchOverlayIntent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard::*)(::StringW)>(
    &::GlobalNamespace::OVRTrackedKeyboard::LaunchOverlayIntent)> {
  constexpr static std::size_t size = 0x38c;
  constexpr static std::size_t addrs = 0x27940fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(), "LaunchOverlayIntent",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard::*)()>(&::GlobalNamespace::OVRTrackedKeyboard::Dispose)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x279556c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(), "Dispose",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.DispatchVisibilityEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard::*)(bool)>(
    &::GlobalNamespace::OVRTrackedKeyboard::DispatchVisibilityEvent)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x279553c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(), "DispatchVisibilityEvent",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard::*)()>(&::GlobalNamespace::OVRTrackedKeyboard::_ctor)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x2795694;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::OVRTrackedKeyboard::__get__CurrentKeyboardAngleFromUp_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CurrentKeyboardAngleFromUp_k__BackingField;
}
constexpr float_t const& GlobalNamespace::OVRTrackedKeyboard::__get__CurrentKeyboardAngleFromUp_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CurrentKeyboardAngleFromUp_k__BackingField;
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__set__CurrentKeyboardAngleFromUp_k__BackingField(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____CurrentKeyboardAngleFromUp_k__BackingField = value;
}
constexpr ::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState& GlobalNamespace::OVRTrackedKeyboard::__get__TrackingState_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____TrackingState_k__BackingField;
}
constexpr ::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState const& GlobalNamespace::OVRTrackedKeyboard::__get__TrackingState_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____TrackingState_k__BackingField;
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__set__TrackingState_k__BackingField(::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____TrackingState_k__BackingField = value;
}
constexpr ::GlobalNamespace::__OVRKeyboard__TrackedKeyboardInfo& GlobalNamespace::OVRTrackedKeyboard::__get__ActiveKeyboardInfo_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ActiveKeyboardInfo_k__BackingField;
}
constexpr ::GlobalNamespace::__OVRKeyboard__TrackedKeyboardInfo const& GlobalNamespace::OVRTrackedKeyboard::__get__ActiveKeyboardInfo_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ActiveKeyboardInfo_k__BackingField;
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__set__ActiveKeyboardInfo_k__BackingField(::GlobalNamespace::__OVRKeyboard__TrackedKeyboardInfo value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ActiveKeyboardInfo_k__BackingField = value;
}
constexpr ::GlobalNamespace::__OVRKeyboard__TrackedKeyboardInfo& GlobalNamespace::OVRTrackedKeyboard::__get__SystemKeyboardInfo_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____SystemKeyboardInfo_k__BackingField;
}
constexpr ::GlobalNamespace::__OVRKeyboard__TrackedKeyboardInfo const& GlobalNamespace::OVRTrackedKeyboard::__get__SystemKeyboardInfo_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____SystemKeyboardInfo_k__BackingField;
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__set__SystemKeyboardInfo_k__BackingField(::GlobalNamespace::__OVRKeyboard__TrackedKeyboardInfo value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____SystemKeyboardInfo_k__BackingField = value;
}
constexpr bool& GlobalNamespace::OVRTrackedKeyboard::__get_trackingEnabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___trackingEnabled;
}
constexpr bool const& GlobalNamespace::OVRTrackedKeyboard::__get_trackingEnabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___trackingEnabled;
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__set_trackingEnabled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___trackingEnabled = value;
}
constexpr bool& GlobalNamespace::OVRTrackedKeyboard::__get_connectionRequired() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___connectionRequired;
}
constexpr bool const& GlobalNamespace::OVRTrackedKeyboard::__get_connectionRequired() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___connectionRequired;
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__set_connectionRequired(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___connectionRequired = value;
}
constexpr bool& GlobalNamespace::OVRTrackedKeyboard::__get_showUntracked() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___showUntracked;
}
constexpr bool const& GlobalNamespace::OVRTrackedKeyboard::__get_showUntracked() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___showUntracked;
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__set_showUntracked(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___showUntracked = value;
}
constexpr ::GlobalNamespace::__OVRPlugin__TrackedKeyboardQueryFlags& GlobalNamespace::OVRTrackedKeyboard::__get_keyboardQueryFlags() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyboardQueryFlags;
}
constexpr ::GlobalNamespace::__OVRPlugin__TrackedKeyboardQueryFlags const& GlobalNamespace::OVRTrackedKeyboard::__get_keyboardQueryFlags() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyboardQueryFlags;
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__set_keyboardQueryFlags(::GlobalNamespace::__OVRPlugin__TrackedKeyboardQueryFlags value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___keyboardQueryFlags = value;
}
constexpr ::GlobalNamespace::__OVRTrackedKeyboard__KeyboardPresentation& GlobalNamespace::OVRTrackedKeyboard::__get_presentation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___presentation;
}
constexpr ::GlobalNamespace::__OVRTrackedKeyboard__KeyboardPresentation const& GlobalNamespace::OVRTrackedKeyboard::__get_presentation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___presentation;
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__set_presentation(::GlobalNamespace::__OVRTrackedKeyboard__KeyboardPresentation value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___presentation = value;
}
constexpr ::GlobalNamespace::OVRTextureQualityFiltering& GlobalNamespace::OVRTrackedKeyboard::__get_textureFiltering() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___textureFiltering;
}
constexpr ::GlobalNamespace::OVRTextureQualityFiltering const& GlobalNamespace::OVRTrackedKeyboard::__get_textureFiltering() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___textureFiltering;
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__set_textureFiltering(::GlobalNamespace::OVRTextureQualityFiltering value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___textureFiltering = value;
}
constexpr float_t& GlobalNamespace::OVRTrackedKeyboard::__get_mipmapBias() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mipmapBias;
}
constexpr float_t const& GlobalNamespace::OVRTrackedKeyboard::__get_mipmapBias() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mipmapBias;
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__set_mipmapBias(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mipmapBias = value;
}
constexpr float_t& GlobalNamespace::OVRTrackedKeyboard::__get_PassthroughBorderMultiplier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PassthroughBorderMultiplier;
}
constexpr float_t const& GlobalNamespace::OVRTrackedKeyboard::__get_PassthroughBorderMultiplier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PassthroughBorderMultiplier;
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__set_PassthroughBorderMultiplier(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___PassthroughBorderMultiplier = value;
}
constexpr ::UnityEngine::Shader*& GlobalNamespace::OVRTrackedKeyboard::__get_keyboardModelShader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyboardModelShader;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Shader*> const& GlobalNamespace::OVRTrackedKeyboard::__get_keyboardModelShader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyboardModelShader;
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__set_keyboardModelShader(::UnityEngine::Shader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___keyboardModelShader)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Shader*& GlobalNamespace::OVRTrackedKeyboard::__get_keyboardModelAlphaBlendShader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyboardModelAlphaBlendShader;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Shader*> const& GlobalNamespace::OVRTrackedKeyboard::__get_keyboardModelAlphaBlendShader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyboardModelAlphaBlendShader;
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__set_keyboardModelAlphaBlendShader(::UnityEngine::Shader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___keyboardModelAlphaBlendShader)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__OVRPlugin__TrackedKeyboardPresentationStyles& GlobalNamespace::OVRTrackedKeyboard::__get_currentKeyboardPresentationStyles() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentKeyboardPresentationStyles;
}
constexpr ::GlobalNamespace::__OVRPlugin__TrackedKeyboardPresentationStyles const& GlobalNamespace::OVRTrackedKeyboard::__get_currentKeyboardPresentationStyles() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentKeyboardPresentationStyles;
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__set_currentKeyboardPresentationStyles(::GlobalNamespace::__OVRPlugin__TrackedKeyboardPresentationStyles value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___currentKeyboardPresentationStyles = value;
}
constexpr ::GlobalNamespace::OVROverlay*& GlobalNamespace::OVRTrackedKeyboard::__get_projectedPassthroughOpaque_() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___projectedPassthroughOpaque_;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVROverlay*> const& GlobalNamespace::OVRTrackedKeyboard::__get_projectedPassthroughOpaque_() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___projectedPassthroughOpaque_;
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__set_projectedPassthroughOpaque_(::GlobalNamespace::OVROverlay* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___projectedPassthroughOpaque_)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::MeshRenderer*, ::Array<::UnityEngine::MeshRenderer*>*>& GlobalNamespace::OVRTrackedKeyboard::__get_activeKeyboardRenderers_() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___activeKeyboardRenderers_;
}
constexpr ::ArrayW<::UnityEngine::MeshRenderer*, ::Array<::UnityEngine::MeshRenderer*>*> const& GlobalNamespace::OVRTrackedKeyboard::__get_activeKeyboardRenderers_() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___activeKeyboardRenderers_;
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__set_activeKeyboardRenderers_(::ArrayW<::UnityEngine::MeshRenderer*, ::Array<::UnityEngine::MeshRenderer*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___activeKeyboardRenderers_)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::GameObject*& GlobalNamespace::OVRTrackedKeyboard::__get_activeKeyboardMesh_() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___activeKeyboardMesh_;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& GlobalNamespace::OVRTrackedKeyboard::__get_activeKeyboardMesh_() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___activeKeyboardMesh_;
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__set_activeKeyboardMesh_(::UnityEngine::GameObject* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___activeKeyboardMesh_)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*>& GlobalNamespace::OVRTrackedKeyboard::__get_keyboardMeshNodes_() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyboardMeshNodes_;
}
constexpr ::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*> const& GlobalNamespace::OVRTrackedKeyboard::__get_keyboardMeshNodes_() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyboardMeshNodes_;
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__set_keyboardMeshNodes_(::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___keyboardMeshNodes_)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::MeshRenderer*& GlobalNamespace::OVRTrackedKeyboard::__get_activeKeyboardMeshRenderer_() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___activeKeyboardMeshRenderer_;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::MeshRenderer*> const& GlobalNamespace::OVRTrackedKeyboard::__get_activeKeyboardMeshRenderer_() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___activeKeyboardMeshRenderer_;
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__set_activeKeyboardMeshRenderer_(::UnityEngine::MeshRenderer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___activeKeyboardMeshRenderer_)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::GameObject*& GlobalNamespace::OVRTrackedKeyboard::__get_passthroughQuad_() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___passthroughQuad_;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& GlobalNamespace::OVRTrackedKeyboard::__get_passthroughQuad_() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___passthroughQuad_;
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__set_passthroughQuad_(::UnityEngine::GameObject* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___passthroughQuad_)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Shader*& GlobalNamespace::OVRTrackedKeyboard::__get_opaqueShader_() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___opaqueShader_;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Shader*> const& GlobalNamespace::OVRTrackedKeyboard::__get_opaqueShader_() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___opaqueShader_;
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__set_opaqueShader_(::UnityEngine::Shader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___opaqueShader_)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Texture2D*& GlobalNamespace::OVRTrackedKeyboard::__get_dynamicQualityTexture_() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dynamicQualityTexture_;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Texture2D*> const& GlobalNamespace::OVRTrackedKeyboard::__get_dynamicQualityTexture_() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dynamicQualityTexture_;
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__set_dynamicQualityTexture_(::UnityEngine::Texture2D* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___dynamicQualityTexture_)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::OVRTrackedKeyboard::__get_untrackedPosition_() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___untrackedPosition_;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::OVRTrackedKeyboard::__get_untrackedPosition_() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___untrackedPosition_;
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__set_untrackedPosition_(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___untrackedPosition_ = value;
}
constexpr ::UnityEngine::Shader*& GlobalNamespace::OVRTrackedKeyboard::__get_KeyLabelModeShader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___KeyLabelModeShader;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Shader*> const& GlobalNamespace::OVRTrackedKeyboard::__get_KeyLabelModeShader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___KeyLabelModeShader;
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__set_KeyLabelModeShader(::UnityEngine::Shader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___KeyLabelModeShader)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Shader*& GlobalNamespace::OVRTrackedKeyboard::__get_PassthroughShader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PassthroughShader;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Shader*> const& GlobalNamespace::OVRTrackedKeyboard::__get_PassthroughShader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PassthroughShader;
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__set_PassthroughShader(::UnityEngine::Shader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___PassthroughShader)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Transform*& GlobalNamespace::OVRTrackedKeyboard::__get_projectedPassthroughRoot() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___projectedPassthroughRoot;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& GlobalNamespace::OVRTrackedKeyboard::__get_projectedPassthroughRoot() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___projectedPassthroughRoot;
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__set_projectedPassthroughRoot(::UnityEngine::Transform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___projectedPassthroughRoot)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::MeshFilter*& GlobalNamespace::OVRTrackedKeyboard::__get_projectedPassthroughMesh() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___projectedPassthroughMesh;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::MeshFilter*> const& GlobalNamespace::OVRTrackedKeyboard::__get_projectedPassthroughMesh() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___projectedPassthroughMesh;
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__set_projectedPassthroughMesh(::UnityEngine::MeshFilter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___projectedPassthroughMesh)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::OVRPassthroughLayer*& GlobalNamespace::OVRTrackedKeyboard::__get_ProjectedPassthroughKeyLabel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ProjectedPassthroughKeyLabel;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVRPassthroughLayer*> const& GlobalNamespace::OVRTrackedKeyboard::__get_ProjectedPassthroughKeyLabel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ProjectedPassthroughKeyLabel;
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__set_ProjectedPassthroughKeyLabel(::GlobalNamespace::OVRPassthroughLayer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ProjectedPassthroughKeyLabel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent>*& GlobalNamespace::OVRTrackedKeyboard::__get_TrackedKeyboardActiveChanged() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TrackedKeyboardActiveChanged;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent>*> const&
GlobalNamespace::OVRTrackedKeyboard::__get_TrackedKeyboardActiveChanged() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TrackedKeyboardActiveChanged;
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__set_TrackedKeyboardActiveChanged(::System::Action_1<::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___TrackedKeyboardActiveChanged)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent>*& GlobalNamespace::OVRTrackedKeyboard::__get_TrackedKeyboardVisibilityChanged() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TrackedKeyboardVisibilityChanged;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent>*> const&
GlobalNamespace::OVRTrackedKeyboard::__get_TrackedKeyboardVisibilityChanged() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TrackedKeyboardVisibilityChanged;
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__set_TrackedKeyboardVisibilityChanged(::System::Action_1<::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___TrackedKeyboardVisibilityChanged)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Transform*& GlobalNamespace::OVRTrackedKeyboard::__get_ActiveKeyboardTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ActiveKeyboardTransform;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& GlobalNamespace::OVRTrackedKeyboard::__get_ActiveKeyboardTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ActiveKeyboardTransform;
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__set_ActiveKeyboardTransform(::UnityEngine::Transform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ActiveKeyboardTransform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::OVRTrackedKeyboard::__get_HandsOverKeyboard() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___HandsOverKeyboard;
}
constexpr bool const& GlobalNamespace::OVRTrackedKeyboard::__get_HandsOverKeyboard() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___HandsOverKeyboard;
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__set_HandsOverKeyboard(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___HandsOverKeyboard = value;
}
constexpr ::GlobalNamespace::OVRCameraRig*& GlobalNamespace::OVRTrackedKeyboard::__get_cameraRig_() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cameraRig_;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVRCameraRig*> const& GlobalNamespace::OVRTrackedKeyboard::__get_cameraRig_() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cameraRig_;
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__set_cameraRig_(::GlobalNamespace::OVRCameraRig* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___cameraRig_)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Coroutine*& GlobalNamespace::OVRTrackedKeyboard::__get_updateKeyboardRoutine_() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___updateKeyboardRoutine_;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Coroutine*> const& GlobalNamespace::OVRTrackedKeyboard::__get_updateKeyboardRoutine_() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___updateKeyboardRoutine_;
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__set_updateKeyboardRoutine_(::UnityEngine::Coroutine* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___updateKeyboardRoutine_)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::BoxCollider*& GlobalNamespace::OVRTrackedKeyboard::__get_keyboardBoundingBox_() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyboardBoundingBox_;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::BoxCollider*> const& GlobalNamespace::OVRTrackedKeyboard::__get_keyboardBoundingBox_() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyboardBoundingBox_;
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__set_keyboardBoundingBox_(::UnityEngine::BoxCollider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___keyboardBoundingBox_)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::OVRTrackedKeyboard::__get_staleTimeoutCounter_() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___staleTimeoutCounter_;
}
constexpr float_t const& GlobalNamespace::OVRTrackedKeyboard::__get_staleTimeoutCounter_() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___staleTimeoutCounter_;
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__set_staleTimeoutCounter_(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___staleTimeoutCounter_ = value;
}
constexpr float_t& GlobalNamespace::OVRTrackedKeyboard::__get_reacquisitionTimer_() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reacquisitionTimer_;
}
constexpr float_t const& GlobalNamespace::OVRTrackedKeyboard::__get_reacquisitionTimer_() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reacquisitionTimer_;
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__set_reacquisitionTimer_(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___reacquisitionTimer_ = value;
}
constexpr float_t& GlobalNamespace::OVRTrackedKeyboard::__get_sendFilteredPoseEventTimer_() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sendFilteredPoseEventTimer_;
}
constexpr float_t const& GlobalNamespace::OVRTrackedKeyboard::__get_sendFilteredPoseEventTimer_() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sendFilteredPoseEventTimer_;
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__set_sendFilteredPoseEventTimer_(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sendFilteredPoseEventTimer_ = value;
}
constexpr int32_t& GlobalNamespace::OVRTrackedKeyboard::__get_skippedPoseCount_() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___skippedPoseCount_;
}
constexpr int32_t const& GlobalNamespace::OVRTrackedKeyboard::__get_skippedPoseCount_() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___skippedPoseCount_;
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__set_skippedPoseCount_(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___skippedPoseCount_ = value;
}
constexpr ::System::Nullable_1<::UnityEngine::Vector3>& GlobalNamespace::OVRTrackedKeyboard::__get_EWAPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___EWAPosition;
}
constexpr ::System::Nullable_1<::UnityEngine::Vector3> const& GlobalNamespace::OVRTrackedKeyboard::__get_EWAPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___EWAPosition;
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__set_EWAPosition(::System::Nullable_1<::UnityEngine::Vector3> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___EWAPosition = value;
}
constexpr ::System::Nullable_1<::UnityEngine::Quaternion>& GlobalNamespace::OVRTrackedKeyboard::__get_EWARotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___EWARotation;
}
constexpr ::System::Nullable_1<::UnityEngine::Quaternion> const& GlobalNamespace::OVRTrackedKeyboard::__get_EWARotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___EWARotation;
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__set_EWARotation(::System::Nullable_1<::UnityEngine::Quaternion> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___EWARotation = value;
}
constexpr float_t& GlobalNamespace::OVRTrackedKeyboard::__get_HAND_HEIGHT_TUNING() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___HAND_HEIGHT_TUNING;
}
constexpr float_t const& GlobalNamespace::OVRTrackedKeyboard::__get_HAND_HEIGHT_TUNING() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___HAND_HEIGHT_TUNING;
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__set_HAND_HEIGHT_TUNING(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___HAND_HEIGHT_TUNING = value;
}
constexpr bool& GlobalNamespace::OVRTrackedKeyboard::__get_UseHeuristicRollback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___UseHeuristicRollback;
}
constexpr bool const& GlobalNamespace::OVRTrackedKeyboard::__get_UseHeuristicRollback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___UseHeuristicRollback;
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__set_UseHeuristicRollback(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___UseHeuristicRollback = value;
}
inline void GlobalNamespace::OVRTrackedKeyboard::setStaticF_underlayScaleMultX_(float_t value) {
  ::cordl_internals::setStaticField<float_t, "underlayScaleMultX_", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get>(std::forward<float_t>(value));
}
inline float_t GlobalNamespace::OVRTrackedKeyboard::getStaticF_underlayScaleMultX_() {
  return ::cordl_internals::getStaticField<float_t, "underlayScaleMultX_", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get>();
}
inline void GlobalNamespace::OVRTrackedKeyboard::setStaticF_underlayScaleConstY_(float_t value) {
  ::cordl_internals::setStaticField<float_t, "underlayScaleConstY_", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get>(std::forward<float_t>(value));
}
inline float_t GlobalNamespace::OVRTrackedKeyboard::getStaticF_underlayScaleConstY_() {
  return ::cordl_internals::getStaticField<float_t, "underlayScaleConstY_", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get>();
}
inline void GlobalNamespace::OVRTrackedKeyboard::setStaticF_underlayScaleMultZ_(float_t value) {
  ::cordl_internals::setStaticField<float_t, "underlayScaleMultZ_", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get>(std::forward<float_t>(value));
}
inline float_t GlobalNamespace::OVRTrackedKeyboard::getStaticF_underlayScaleMultZ_() {
  return ::cordl_internals::getStaticField<float_t, "underlayScaleMultZ_", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get>();
}
inline void GlobalNamespace::OVRTrackedKeyboard::setStaticF_underlayOffset_(::UnityEngine::Vector3 value) {
  ::cordl_internals::setStaticField<::UnityEngine::Vector3, "underlayOffset_", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get>(
      std::forward<::UnityEngine::Vector3>(value));
}
inline ::UnityEngine::Vector3 GlobalNamespace::OVRTrackedKeyboard::getStaticF_underlayOffset_() {
  return ::cordl_internals::getStaticField<::UnityEngine::Vector3, "underlayOffset_", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get>();
}
inline void GlobalNamespace::OVRTrackedKeyboard::setStaticF_boundingBoxAboveKeyboardY_(float_t value) {
  ::cordl_internals::setStaticField<float_t, "boundingBoxAboveKeyboardY_", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get>(
      std::forward<float_t>(value));
}
inline float_t GlobalNamespace::OVRTrackedKeyboard::getStaticF_boundingBoxAboveKeyboardY_() {
  return ::cordl_internals::getStaticField<float_t, "boundingBoxAboveKeyboardY_", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get>();
}
inline void GlobalNamespace::OVRTrackedKeyboard::setStaticF_initialHorizontalDistanceKeyboard_(float_t value) {
  ::cordl_internals::setStaticField<float_t, "initialHorizontalDistanceKeyboard_", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get>(
      std::forward<float_t>(value));
}
inline float_t GlobalNamespace::OVRTrackedKeyboard::getStaticF_initialHorizontalDistanceKeyboard_() {
  return ::cordl_internals::getStaticField<float_t, "initialHorizontalDistanceKeyboard_", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get>();
}
inline void GlobalNamespace::OVRTrackedKeyboard::setStaticF_initialVerticalDistanceKeyboard_(float_t value) {
  ::cordl_internals::setStaticField<float_t, "initialVerticalDistanceKeyboard_", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get>(
      std::forward<float_t>(value));
}
inline float_t GlobalNamespace::OVRTrackedKeyboard::getStaticF_initialVerticalDistanceKeyboard_() {
  return ::cordl_internals::getStaticField<float_t, "initialVerticalDistanceKeyboard_", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get>();
}
inline float_t GlobalNamespace::OVRTrackedKeyboard::get_CurrentKeyboardAngleFromUp() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                                                                             "get_CurrentKeyboardAngleFromUp", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRTrackedKeyboard::set_CurrentKeyboardAngleFromUp(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(), "set_CurrentKeyboardAngleFromUp",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState GlobalNamespace::OVRTrackedKeyboard::get_TrackingState() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(), "get_TrackingState",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRTrackedKeyboard::set_TrackingState(::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(), "set_TrackingState", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::__OVRKeyboard__TrackedKeyboardInfo GlobalNamespace::OVRTrackedKeyboard::get_ActiveKeyboardInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                                                                             "get_ActiveKeyboardInfo", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__OVRKeyboard__TrackedKeyboardInfo, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRTrackedKeyboard::set_ActiveKeyboardInfo(::GlobalNamespace::__OVRKeyboard__TrackedKeyboardInfo value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(), "set_ActiveKeyboardInfo", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRKeyboard__TrackedKeyboardInfo>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::__OVRKeyboard__TrackedKeyboardInfo GlobalNamespace::OVRTrackedKeyboard::get_SystemKeyboardInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                                                                             "get_SystemKeyboardInfo", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__OVRKeyboard__TrackedKeyboardInfo, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRTrackedKeyboard::set_SystemKeyboardInfo(::GlobalNamespace::__OVRKeyboard__TrackedKeyboardInfo value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(), "set_SystemKeyboardInfo", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRKeyboard__TrackedKeyboardInfo>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::__OVRTrackedKeyboard__KeyboardPresentation GlobalNamespace::OVRTrackedKeyboard::get_Presentation() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(), "get_Presentation",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__OVRTrackedKeyboard__KeyboardPresentation, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRTrackedKeyboard::set_Presentation(::GlobalNamespace::__OVRTrackedKeyboard__KeyboardPresentation value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(), "set_Presentation", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRTrackedKeyboard__KeyboardPresentation>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool GlobalNamespace::OVRTrackedKeyboard::get_TrackingEnabled() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                                                                             "get_TrackingEnabled", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRTrackedKeyboard::set_TrackingEnabled(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(), "set_TrackingEnabled",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool GlobalNamespace::OVRTrackedKeyboard::get_ConnectionRequired() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                                                                             "get_ConnectionRequired", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRTrackedKeyboard::set_ConnectionRequired(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(), "set_ConnectionRequired",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool GlobalNamespace::OVRTrackedKeyboard::get_ShowUntracked() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(), "get_ShowUntracked",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRTrackedKeyboard::set_ShowUntracked(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(), "set_ShowUntracked", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool GlobalNamespace::OVRTrackedKeyboard::get_RemoteKeyboard() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                                                                             "get_RemoteKeyboard", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRTrackedKeyboard::set_RemoteKeyboard(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(), "set_RemoteKeyboard", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::__OVRPlugin__TrackedKeyboardQueryFlags GlobalNamespace::OVRTrackedKeyboard::get_KeyboardQueryFlags() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                                                                             "get_KeyboardQueryFlags", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__OVRPlugin__TrackedKeyboardQueryFlags, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRTrackedKeyboard::set_KeyboardQueryFlags(::GlobalNamespace::__OVRPlugin__TrackedKeyboardQueryFlags value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(), "set_KeyboardQueryFlags", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRPlugin__TrackedKeyboardQueryFlags>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::OVROverlay* GlobalNamespace::OVRTrackedKeyboard::get_PassthroughOverlay() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                                                                             "get_PassthroughOverlay", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVROverlay*, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRTrackedKeyboard::set_PassthroughOverlay(::GlobalNamespace::OVROverlay* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(), "set_PassthroughOverlay", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVROverlay*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::OVRTrackedKeyboard::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(), "Start",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::OVRTrackedKeyboard::InitializeHandPresenceData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                                                                             "InitializeHandPresenceData", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRTrackedKeyboard::RegisterPassthroughMeshToSDK() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                                                                             "RegisterPassthroughMeshToSDK", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::OVRTrackedKeyboard::GetDistanceToKeyboard(::UnityEngine::Vector3 point) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(), "GetDistanceToKeyboard",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, point);
}
inline void GlobalNamespace::OVRTrackedKeyboard::LaunchLocalKeyboardSelectionDialog() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                                                                             "LaunchLocalKeyboardSelectionDialog", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRTrackedKeyboard::LaunchRemoteKeyboardSelectionDialog() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                                                                             "LaunchRemoteKeyboardSelectionDialog", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRTrackedKeyboard::KeyboardTrackerIsRunning() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                                                                             "KeyboardTrackerIsRunning", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::OVRTrackedKeyboard::UpdateTrackingStateCoroutine() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                                                                             "UpdateTrackingStateCoroutine", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::OVRTrackedKeyboard::StartKeyboardTrackingCoroutine() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                                                                             "StartKeyboardTrackingCoroutine", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRTrackedKeyboard::StopKeyboardTrackingInternal() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                                                                             "StopKeyboardTrackingInternal", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::OVRTrackedKeyboard::UpdateKeyboardPose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                                                                             "UpdateKeyboardPose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRTrackedKeyboard::UpdateSkippedPoseTimer() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                                                                             "UpdateSkippedPoseTimer", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRTrackedKeyboard::LoadKeyboardMesh() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(), "LoadKeyboardMesh",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRTrackedKeyboard::UpdateTextureQuality() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                                                                             "UpdateTextureQuality", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRTrackedKeyboard::UpdatePresentation(bool isVisible) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(), "UpdatePresentation", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, isVisible);
}
inline ::UnityEngine::GameObject* GlobalNamespace::OVRTrackedKeyboard::LoadRuntimeKeyboardMesh() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                                                                             "LoadRuntimeKeyboardMesh", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GameObject*, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRTrackedKeyboard::UpdateKeyboardVisibility() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                                                                             "UpdateKeyboardVisibility", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRTrackedKeyboard::SetKeyboardState(::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState state) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(), "SetKeyboardState", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, state);
}
inline bool GlobalNamespace::OVRTrackedKeyboard::GetKeyboardVisibility() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                                                                             "GetKeyboardVisibility", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRTrackedKeyboard::InitializeKeyboardInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                                                                             "InitializeKeyboardInfo", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRTrackedKeyboard::LaunchOverlayIntent(::StringW dataUri) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(), "LaunchOverlayIntent",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dataUri);
}
inline void GlobalNamespace::OVRTrackedKeyboard::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(), "Dispose",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRTrackedKeyboard::DispatchVisibilityEvent(bool timeOut) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(), "DispatchVisibilityEvent",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, timeOut);
}
inline ::GlobalNamespace::OVRTrackedKeyboard* GlobalNamespace::OVRTrackedKeyboard::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::OVRTrackedKeyboard*>());
}
inline void GlobalNamespace::OVRTrackedKeyboard::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRTrackedKeyboard::OVRTrackedKeyboard() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
