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
#include "GlobalNamespace/zzzz__OVRCameraRig_def.hpp"
#include "GlobalNamespace/zzzz__OVRKeyboard_def.hpp"
#include "GlobalNamespace/zzzz__OVROverlay_def.hpp"
#include "GlobalNamespace/zzzz__OVRPassthroughLayer_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_def.hpp"
#include "GlobalNamespace/zzzz__OVRTrackedKeyboard_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__BoxCollider_def.hpp"
#include "UnityEngine/zzzz__Coroutine_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__MeshFilter_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
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
  constexpr static std::size_t addrs = 0x2a6ada4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent::_ctor(::StringW keyboardModel, ::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState state,
                                                                                                bool timeout) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
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
  constexpr static std::size_t addrs = 0x2a6afc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent::_ctor(bool isEnabled) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
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
  constexpr static std::size_t addrs = 0x2a69504;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___Start_d__88*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRTrackedKeyboard___Start_d__88.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRTrackedKeyboard___Start_d__88::*)()>(
    &::GlobalNamespace::__OVRTrackedKeyboard___Start_d__88::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2a6afcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___Start_d__88*>::get(),
                                                                               "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRTrackedKeyboard___Start_d__88.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__OVRTrackedKeyboard___Start_d__88::*)()>(
    &::GlobalNamespace::__OVRTrackedKeyboard___Start_d__88::MoveNext)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x2a6afd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___Start_d__88*>::get(),
                                                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRTrackedKeyboard___Start_d__88.System_Collections_Generic_IEnumerator_System_Object__get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::__OVRTrackedKeyboard___Start_d__88::*)()>(
    &::GlobalNamespace::__OVRTrackedKeyboard___Start_d__88::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a6b0d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___Start_d__88*>::get(),
                                    "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRTrackedKeyboard___Start_d__88.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRTrackedKeyboard___Start_d__88::*)()>(
    &::GlobalNamespace::__OVRTrackedKeyboard___Start_d__88::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2a6b0dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___Start_d__88*>::get(),
                                                 "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRTrackedKeyboard___Start_d__88.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::__OVRTrackedKeyboard___Start_d__88::*)()>(
    &::GlobalNamespace::__OVRTrackedKeyboard___Start_d__88::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a6b11c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___Start_d__88*>::get(),
                                                 "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr GlobalNamespace::__OVRTrackedKeyboard___Start_d__88::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>*
GlobalNamespace::__OVRTrackedKeyboard___Start_d__88::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr GlobalNamespace::__OVRTrackedKeyboard___Start_d__88::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::__OVRTrackedKeyboard___Start_d__88::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::__OVRTrackedKeyboard___Start_d__88::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::__OVRTrackedKeyboard___Start_d__88::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr int32_t& GlobalNamespace::__OVRTrackedKeyboard___Start_d__88::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::__OVRTrackedKeyboard___Start_d__88::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void GlobalNamespace::__OVRTrackedKeyboard___Start_d__88::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::__OVRTrackedKeyboard___Start_d__88::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& GlobalNamespace::__OVRTrackedKeyboard___Start_d__88::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void GlobalNamespace::__OVRTrackedKeyboard___Start_d__88::__cordl_internal_set___2__current(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::OVRTrackedKeyboard>& GlobalNamespace::__OVRTrackedKeyboard___Start_d__88::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::OVRTrackedKeyboard> const& GlobalNamespace::__OVRTrackedKeyboard___Start_d__88::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::__OVRTrackedKeyboard___Start_d__88::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::OVRTrackedKeyboard> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__OVRTrackedKeyboard___Start_d__88* GlobalNamespace::__OVRTrackedKeyboard___Start_d__88::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__OVRTrackedKeyboard___Start_d__88*>(__1__state));
}
inline void GlobalNamespace::__OVRTrackedKeyboard___Start_d__88::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___Start_d__88*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::__OVRTrackedKeyboard___Start_d__88::System_IDisposable_Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___Start_d__88*>::get(),
                                                                             "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::__OVRTrackedKeyboard___Start_d__88::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___Start_d__88*>::get(),
                                                                             "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__OVRTrackedKeyboard___Start_d__88::System_Collections_Generic_IEnumerator_System_Object__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___Start_d__88*>::get(),
                                  "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void GlobalNamespace::__OVRTrackedKeyboard___Start_d__88::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___Start_d__88*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__OVRTrackedKeyboard___Start_d__88::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___Start_d__88*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRTrackedKeyboard___Start_d__88::__OVRTrackedKeyboard___Start_d__88() {}
//  Writing Method size for method: ::GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89::*)(int32_t)>(
    &::GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2a69594;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89::*)()>(
    &::GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2a6b124;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89*>::get(),
                                                 "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89::*)()>(
    &::GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89::MoveNext)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x2a6b128;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89*>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89.System_Collections_Generic_IEnumerator_System_Object__get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89::*)()>(
    &::GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a6b298;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89*>::get(),
                                    "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89::*)()>(
    &::GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2a6b2a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89*>::get(),
                                                 "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89::*)()>(
    &::GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a6b2e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89*>::get(),
                                                 "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>*
GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr int32_t& GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89::__cordl_internal_set___2__current(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::OVRTrackedKeyboard>& GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::OVRTrackedKeyboard> const& GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::OVRTrackedKeyboard> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89* GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89*>(__1__state));
}
inline void GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89*>::get(),
                                               "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89*>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89::System_Collections_Generic_IEnumerator_System_Object__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89*>::get(),
                                  "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89() {}
//  Writing Method size for method: ::GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95::*)(int32_t)>(
    &::GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2a69c68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95::*)()>(
    &::GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2a6b2e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95*>::get(),
                                                 "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95::*)()>(
    &::GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95::MoveNext)> {
  constexpr static std::size_t size = 0x4bc;
  constexpr static std::size_t addrs = 0x2a6b2ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95*>::get(),
                                                 "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95.System_Collections_Generic_IEnumerator_System_Object__get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95::*)()>(
    &::GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a6b7a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95*>::get(),
                                    "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95::*)()>(
    &::GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2a6b7b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95*>::get(),
                                                 "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95::*)()>(
    &::GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a6b7f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95*>::get(),
                                                 "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>*
GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr int32_t& GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95::__cordl_internal_set___2__current(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::OVRTrackedKeyboard>& GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::OVRTrackedKeyboard> const& GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::OVRTrackedKeyboard> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__OVRKeyboard__TrackedKeyboardInfo& GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95::__cordl_internal_get__keyboardInfo_5__2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____keyboardInfo_5__2;
}
constexpr ::GlobalNamespace::__OVRKeyboard__TrackedKeyboardInfo const& GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95::__cordl_internal_get__keyboardInfo_5__2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____keyboardInfo_5__2;
}
constexpr void GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95::__cordl_internal_set__keyboardInfo_5__2(::GlobalNamespace::__OVRKeyboard__TrackedKeyboardInfo value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____keyboardInfo_5__2 = value;
}
inline ::GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95* GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95*>(__1__state));
}
inline void GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95*>::get(),
                                               "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95*>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95::System_Collections_Generic_IEnumerator_System_Object__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95*>::get(),
                                  "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95() {}
//  Writing Method size for method: ::GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96::*)(int32_t)>(
    &::GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2a69cf8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96::*)()>(
    &::GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2a6b7f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96*>::get(),
                                                 "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96::*)()>(
    &::GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96::MoveNext)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x2a6b7fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96*>::get(),
                                                 "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96.System_Collections_Generic_IEnumerator_System_Object__get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96::*)()>(
    &::GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a6bac0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96*>::get(),
                                    "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96::*)()>(
    &::GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2a6bac8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96*>::get(),
                                                 "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96::*)()>(
    &::GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a6bb08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96*>::get(),
                                                 "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>*
GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr int32_t& GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96::__cordl_internal_set___2__current(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::OVRTrackedKeyboard>& GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::OVRTrackedKeyboard> const& GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::OVRTrackedKeyboard> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96* GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96*>(__1__state));
}
inline void GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96*>::get(),
                                               "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96*>::get(),
                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96::System_Collections_Generic_IEnumerator_System_Object__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96*>::get(),
                                  "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96() {}
//  Writing Method size for method: ::GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98::*)(int32_t)>(
    &::GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2a6a0b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98::*)()>(
    &::GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2a6bb10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98*>::get(),
                                                 "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98::*)()>(
    &::GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98::MoveNext)> {
  constexpr static std::size_t size = 0x9a8;
  constexpr static std::size_t addrs = 0x2a6bb14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98*>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98.System_Collections_Generic_IEnumerator_System_Object__get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98::*)()>(
    &::GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a6c4bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98*>::get(),
                                    "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98::*)()>(
    &::GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2a6c4c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98*>::get(),
                                                 "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98::*)()>(
    &::GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a6c504;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98*>::get(),
                                                 "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>*
GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr int32_t& GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98::__cordl_internal_set___2__current(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::OVRTrackedKeyboard>& GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::OVRTrackedKeyboard> const& GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::OVRTrackedKeyboard> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98* GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98*>(__1__state));
}
inline void GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98*>::get(),
                                               "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98*>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98::System_Collections_Generic_IEnumerator_System_Object__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98*>::get(),
                                  "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98() {}
//  Writing Method size for method: ::GlobalNamespace::__OVRTrackedKeyboard____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRTrackedKeyboard____c::*)()>(&::GlobalNamespace::__OVRTrackedKeyboard____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a6c570;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard____c*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRTrackedKeyboard____c.__ctor_b__113_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRTrackedKeyboard____c::*)(
    ::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent)>(&::GlobalNamespace::__OVRTrackedKeyboard____c::__ctor_b__113_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2a6c578;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard____c*>::get(), "<.ctor>b__113_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRTrackedKeyboard____c.__ctor_b__113_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRTrackedKeyboard____c::*)(
    ::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent)>(&::GlobalNamespace::__OVRTrackedKeyboard____c::__ctor_b__113_1)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2a6c57c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard____c*>::get(), "<.ctor>b__113_1", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent>::get() })));
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
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__OVRTrackedKeyboard____c*>());
}
inline void GlobalNamespace::__OVRTrackedKeyboard____c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard____c*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__OVRTrackedKeyboard____c::__ctor_b__113_0(::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent _p0_) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard____c*>::get(), "<.ctor>b__113_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, _p0_);
}
inline void GlobalNamespace::__OVRTrackedKeyboard____c::__ctor_b__113_1(::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent _p0_) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTrackedKeyboard____c*>::get(), "<.ctor>b__113_1", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, _p0_);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRTrackedKeyboard____c::__OVRTrackedKeyboard____c() {}
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.get_CurrentKeyboardAngleFromUp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::OVRTrackedKeyboard::*)()>(
    &::GlobalNamespace::OVRTrackedKeyboard::get_CurrentKeyboardAngleFromUp)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a69110;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                                                                               "get_CurrentKeyboardAngleFromUp", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.set_CurrentKeyboardAngleFromUp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard::*)(float_t)>(
    &::GlobalNamespace::OVRTrackedKeyboard::set_CurrentKeyboardAngleFromUp)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a69118;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(), "set_CurrentKeyboardAngleFromUp",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.get_TrackingState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState (::GlobalNamespace::OVRTrackedKeyboard::*)()>(
    &::GlobalNamespace::OVRTrackedKeyboard::get_TrackingState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a69120;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                                                                               "get_TrackingState", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.set_TrackingState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard::*)(::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState)>(
    &::GlobalNamespace::OVRTrackedKeyboard::set_TrackingState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a69128;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(), "set_TrackingState", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.get_ActiveKeyboardInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__OVRKeyboard__TrackedKeyboardInfo (::GlobalNamespace::OVRTrackedKeyboard::*)()>(
    &::GlobalNamespace::OVRTrackedKeyboard::get_ActiveKeyboardInfo)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2a69130;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                                                                               "get_ActiveKeyboardInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.set_ActiveKeyboardInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard::*)(::GlobalNamespace::__OVRKeyboard__TrackedKeyboardInfo)>(
    &::GlobalNamespace::OVRTrackedKeyboard::set_ActiveKeyboardInfo)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2a69144;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(), "set_ActiveKeyboardInfo", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRKeyboard__TrackedKeyboardInfo>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.get_SystemKeyboardInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__OVRKeyboard__TrackedKeyboardInfo (::GlobalNamespace::OVRTrackedKeyboard::*)()>(
    &::GlobalNamespace::OVRTrackedKeyboard::get_SystemKeyboardInfo)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2a69158;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                                                                               "get_SystemKeyboardInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.set_SystemKeyboardInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard::*)(::GlobalNamespace::__OVRKeyboard__TrackedKeyboardInfo)>(
    &::GlobalNamespace::OVRTrackedKeyboard::set_SystemKeyboardInfo)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2a69170;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(), "set_SystemKeyboardInfo", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRKeyboard__TrackedKeyboardInfo>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.get_Presentation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__OVRTrackedKeyboard__KeyboardPresentation (::GlobalNamespace::OVRTrackedKeyboard::*)()>(
    &::GlobalNamespace::OVRTrackedKeyboard::get_Presentation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a69188;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                                                                               "get_Presentation", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.set_Presentation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard::*)(::GlobalNamespace::__OVRTrackedKeyboard__KeyboardPresentation)>(
    &::GlobalNamespace::OVRTrackedKeyboard::set_Presentation)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2a69190;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(), "set_Presentation", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRTrackedKeyboard__KeyboardPresentation>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.get_TrackingEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRTrackedKeyboard::*)()>(&::GlobalNamespace::OVRTrackedKeyboard::get_TrackingEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a6941c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                                                                               "get_TrackingEnabled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.set_TrackingEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard::*)(bool)>(&::GlobalNamespace::OVRTrackedKeyboard::set_TrackingEnabled)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2a69424;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(), "set_TrackingEnabled",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.get_ConnectionRequired
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRTrackedKeyboard::*)()>(&::GlobalNamespace::OVRTrackedKeyboard::get_ConnectionRequired)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a69430;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                                                                               "get_ConnectionRequired", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.set_ConnectionRequired
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard::*)(bool)>(
    &::GlobalNamespace::OVRTrackedKeyboard::set_ConnectionRequired)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2a69438;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(), "set_ConnectionRequired",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.get_ShowUntracked
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRTrackedKeyboard::*)()>(&::GlobalNamespace::OVRTrackedKeyboard::get_ShowUntracked)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a69444;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                                                                               "get_ShowUntracked", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.set_ShowUntracked
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard::*)(bool)>(&::GlobalNamespace::OVRTrackedKeyboard::set_ShowUntracked)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2a6944c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(), "set_ShowUntracked",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.get_RemoteKeyboard
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRTrackedKeyboard::*)()>(&::GlobalNamespace::OVRTrackedKeyboard::get_RemoteKeyboard)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a69458;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                                                                               "get_RemoteKeyboard", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.set_RemoteKeyboard
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard::*)(bool)>(&::GlobalNamespace::OVRTrackedKeyboard::set_RemoteKeyboard)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2a69468;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(), "set_RemoteKeyboard",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.get_KeyboardQueryFlags
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__OVRPlugin__TrackedKeyboardQueryFlags (::GlobalNamespace::OVRTrackedKeyboard::*)()>(
    &::GlobalNamespace::OVRTrackedKeyboard::get_KeyboardQueryFlags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a69480;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                                                                               "get_KeyboardQueryFlags", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.set_KeyboardQueryFlags
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard::*)(::GlobalNamespace::__OVRPlugin__TrackedKeyboardQueryFlags)>(
    &::GlobalNamespace::OVRTrackedKeyboard::set_KeyboardQueryFlags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a69488;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(), "set_KeyboardQueryFlags", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRPlugin__TrackedKeyboardQueryFlags>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.get_PassthroughOverlay
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::GlobalNamespace::OVROverlay> (::GlobalNamespace::OVRTrackedKeyboard::*)()>(
    &::GlobalNamespace::OVRTrackedKeyboard::get_PassthroughOverlay)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a69490;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                                                                               "get_PassthroughOverlay", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.set_PassthroughOverlay
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard::*)(::GlobalNamespace::OVROverlay*)>(
    &::GlobalNamespace::OVRTrackedKeyboard::set_PassthroughOverlay)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2a69498;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(), "set_PassthroughOverlay", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVROverlay*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::OVRTrackedKeyboard::*)()>(
    &::GlobalNamespace::OVRTrackedKeyboard::Start)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2a6949c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(), "Start",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.InitializeHandPresenceData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::OVRTrackedKeyboard::*)()>(
    &::GlobalNamespace::OVRTrackedKeyboard::InitializeHandPresenceData)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2a6952c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                                                                               "InitializeHandPresenceData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.RegisterPassthroughMeshToSDK
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard::*)()>(
    &::GlobalNamespace::OVRTrackedKeyboard::RegisterPassthroughMeshToSDK)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2a695bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                                                                               "RegisterPassthroughMeshToSDK", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.GetDistanceToKeyboard
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::OVRTrackedKeyboard::*)(::UnityEngine::Vector3)>(
    &::GlobalNamespace::OVRTrackedKeyboard::GetDistanceToKeyboard)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x2a69654;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(), "GetDistanceToKeyboard", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.LaunchLocalKeyboardSelectionDialog
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard::*)()>(
    &::GlobalNamespace::OVRTrackedKeyboard::LaunchLocalKeyboardSelectionDialog)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2a697e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(), "LaunchLocalKeyboardSelectionDialog",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.LaunchRemoteKeyboardSelectionDialog
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard::*)()>(
    &::GlobalNamespace::OVRTrackedKeyboard::LaunchRemoteKeyboardSelectionDialog)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2a69bac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(), "LaunchRemoteKeyboardSelectionDialog",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.KeyboardTrackerIsRunning
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRTrackedKeyboard::*)()>(
    &::GlobalNamespace::OVRTrackedKeyboard::KeyboardTrackerIsRunning)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2a69bec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                                                                               "KeyboardTrackerIsRunning", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.UpdateTrackingStateCoroutine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::OVRTrackedKeyboard::*)()>(
    &::GlobalNamespace::OVRTrackedKeyboard::UpdateTrackingStateCoroutine)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2a69c00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                                                                               "UpdateTrackingStateCoroutine", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.StartKeyboardTrackingCoroutine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::OVRTrackedKeyboard::*)()>(
    &::GlobalNamespace::OVRTrackedKeyboard::StartKeyboardTrackingCoroutine)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2a69c90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                                                                               "StartKeyboardTrackingCoroutine", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.StopKeyboardTrackingInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard::*)()>(
    &::GlobalNamespace::OVRTrackedKeyboard::StopKeyboardTrackingInternal)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x2a69d20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                                                                               "StopKeyboardTrackingInternal", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.UpdateKeyboardPose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::OVRTrackedKeyboard::*)()>(
    &::GlobalNamespace::OVRTrackedKeyboard::UpdateKeyboardPose)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2a6a048;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                                                                               "UpdateKeyboardPose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.UpdateSkippedPoseTimer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard::*)()>(&::GlobalNamespace::OVRTrackedKeyboard::UpdateSkippedPoseTimer)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2a6a0d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                                                                               "UpdateSkippedPoseTimer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.LoadKeyboardMesh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard::*)()>(&::GlobalNamespace::OVRTrackedKeyboard::LoadKeyboardMesh)> {
  constexpr static std::size_t size = 0x648;
  constexpr static std::size_t addrs = 0x2a6a120;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                                                                               "LoadKeyboardMesh", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.UpdateTextureQuality
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard::*)()>(&::GlobalNamespace::OVRTrackedKeyboard::UpdateTextureQuality)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x2a6aa1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                                                                               "UpdateTextureQuality", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.UpdatePresentation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard::*)(bool)>(&::GlobalNamespace::OVRTrackedKeyboard::UpdatePresentation)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x2a69224;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(), "UpdatePresentation",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.LoadRuntimeKeyboardMesh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::GameObject> (::GlobalNamespace::OVRTrackedKeyboard::*)()>(
    &::GlobalNamespace::OVRTrackedKeyboard::LoadRuntimeKeyboardMesh)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0x2a6a768;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                                                                               "LoadRuntimeKeyboardMesh", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.UpdateKeyboardVisibility
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard::*)()>(
    &::GlobalNamespace::OVRTrackedKeyboard::UpdateKeyboardVisibility)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x2a6ab4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                                                                               "UpdateKeyboardVisibility", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.SetKeyboardState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard::*)(::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState)>(
    &::GlobalNamespace::OVRTrackedKeyboard::SetKeyboardState)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x2a69f18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(), "SetKeyboardState", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.GetKeyboardVisibility
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRTrackedKeyboard::*)()>(&::GlobalNamespace::OVRTrackedKeyboard::GetKeyboardVisibility)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2a691e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                                                                               "GetKeyboardVisibility", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.InitializeKeyboardInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard::*)()>(&::GlobalNamespace::OVRTrackedKeyboard::InitializeKeyboardInfo)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2a69ff4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                                                                               "InitializeKeyboardInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.LaunchOverlayIntent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard::*)(::StringW)>(
    &::GlobalNamespace::OVRTrackedKeyboard::LaunchOverlayIntent)> {
  constexpr static std::size_t size = 0x38c;
  constexpr static std::size_t addrs = 0x2a69820;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(), "LaunchOverlayIntent",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard::*)()>(&::GlobalNamespace::OVRTrackedKeyboard::Dispose)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x2a6ac90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(), "Dispose",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.DispatchVisibilityEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard::*)(bool)>(
    &::GlobalNamespace::OVRTrackedKeyboard::DispatchVisibilityEvent)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2a6ac60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(), "DispatchVisibilityEvent",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard::*)()>(&::GlobalNamespace::OVRTrackedKeyboard::_ctor)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x2a6adb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_get__CurrentKeyboardAngleFromUp_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CurrentKeyboardAngleFromUp_k__BackingField;
}
constexpr float_t const& GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_get__CurrentKeyboardAngleFromUp_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CurrentKeyboardAngleFromUp_k__BackingField;
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_set__CurrentKeyboardAngleFromUp_k__BackingField(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____CurrentKeyboardAngleFromUp_k__BackingField = value;
}
constexpr ::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState& GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_get__TrackingState_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____TrackingState_k__BackingField;
}
constexpr ::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState const& GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_get__TrackingState_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____TrackingState_k__BackingField;
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_set__TrackingState_k__BackingField(::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____TrackingState_k__BackingField = value;
}
constexpr ::GlobalNamespace::__OVRKeyboard__TrackedKeyboardInfo& GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_get__ActiveKeyboardInfo_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ActiveKeyboardInfo_k__BackingField;
}
constexpr ::GlobalNamespace::__OVRKeyboard__TrackedKeyboardInfo const& GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_get__ActiveKeyboardInfo_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ActiveKeyboardInfo_k__BackingField;
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_set__ActiveKeyboardInfo_k__BackingField(::GlobalNamespace::__OVRKeyboard__TrackedKeyboardInfo value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ActiveKeyboardInfo_k__BackingField = value;
}
constexpr ::GlobalNamespace::__OVRKeyboard__TrackedKeyboardInfo& GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_get__SystemKeyboardInfo_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____SystemKeyboardInfo_k__BackingField;
}
constexpr ::GlobalNamespace::__OVRKeyboard__TrackedKeyboardInfo const& GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_get__SystemKeyboardInfo_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____SystemKeyboardInfo_k__BackingField;
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_set__SystemKeyboardInfo_k__BackingField(::GlobalNamespace::__OVRKeyboard__TrackedKeyboardInfo value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____SystemKeyboardInfo_k__BackingField = value;
}
constexpr bool& GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_get_trackingEnabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___trackingEnabled;
}
constexpr bool const& GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_get_trackingEnabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___trackingEnabled;
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_set_trackingEnabled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___trackingEnabled = value;
}
constexpr bool& GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_get_connectionRequired() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___connectionRequired;
}
constexpr bool const& GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_get_connectionRequired() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___connectionRequired;
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_set_connectionRequired(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___connectionRequired = value;
}
constexpr bool& GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_get_showUntracked() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___showUntracked;
}
constexpr bool const& GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_get_showUntracked() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___showUntracked;
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_set_showUntracked(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___showUntracked = value;
}
constexpr ::GlobalNamespace::__OVRPlugin__TrackedKeyboardQueryFlags& GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_get_keyboardQueryFlags() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyboardQueryFlags;
}
constexpr ::GlobalNamespace::__OVRPlugin__TrackedKeyboardQueryFlags const& GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_get_keyboardQueryFlags() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyboardQueryFlags;
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_set_keyboardQueryFlags(::GlobalNamespace::__OVRPlugin__TrackedKeyboardQueryFlags value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___keyboardQueryFlags = value;
}
constexpr ::GlobalNamespace::__OVRTrackedKeyboard__KeyboardPresentation& GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_get_presentation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___presentation;
}
constexpr ::GlobalNamespace::__OVRTrackedKeyboard__KeyboardPresentation const& GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_get_presentation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___presentation;
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_set_presentation(::GlobalNamespace::__OVRTrackedKeyboard__KeyboardPresentation value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___presentation = value;
}
constexpr ::GlobalNamespace::OVRTextureQualityFiltering& GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_get_textureFiltering() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___textureFiltering;
}
constexpr ::GlobalNamespace::OVRTextureQualityFiltering const& GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_get_textureFiltering() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___textureFiltering;
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_set_textureFiltering(::GlobalNamespace::OVRTextureQualityFiltering value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___textureFiltering = value;
}
constexpr float_t& GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_get_mipmapBias() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mipmapBias;
}
constexpr float_t const& GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_get_mipmapBias() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mipmapBias;
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_set_mipmapBias(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mipmapBias = value;
}
constexpr float_t& GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_get_PassthroughBorderMultiplier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PassthroughBorderMultiplier;
}
constexpr float_t const& GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_get_PassthroughBorderMultiplier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PassthroughBorderMultiplier;
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_set_PassthroughBorderMultiplier(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___PassthroughBorderMultiplier = value;
}
constexpr ::UnityW<::UnityEngine::Shader>& GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_get_keyboardModelShader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyboardModelShader;
}
constexpr ::UnityW<::UnityEngine::Shader> const& GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_get_keyboardModelShader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyboardModelShader;
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_set_keyboardModelShader(::UnityW<::UnityEngine::Shader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___keyboardModelShader)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Shader>& GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_get_keyboardModelAlphaBlendShader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyboardModelAlphaBlendShader;
}
constexpr ::UnityW<::UnityEngine::Shader> const& GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_get_keyboardModelAlphaBlendShader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyboardModelAlphaBlendShader;
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_set_keyboardModelAlphaBlendShader(::UnityW<::UnityEngine::Shader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___keyboardModelAlphaBlendShader)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__OVRPlugin__TrackedKeyboardPresentationStyles& GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_get_currentKeyboardPresentationStyles() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentKeyboardPresentationStyles;
}
constexpr ::GlobalNamespace::__OVRPlugin__TrackedKeyboardPresentationStyles const& GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_get_currentKeyboardPresentationStyles() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentKeyboardPresentationStyles;
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_set_currentKeyboardPresentationStyles(::GlobalNamespace::__OVRPlugin__TrackedKeyboardPresentationStyles value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___currentKeyboardPresentationStyles = value;
}
constexpr ::UnityW<::GlobalNamespace::OVROverlay>& GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_get_projectedPassthroughOpaque_() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___projectedPassthroughOpaque_;
}
constexpr ::UnityW<::GlobalNamespace::OVROverlay> const& GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_get_projectedPassthroughOpaque_() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___projectedPassthroughOpaque_;
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_set_projectedPassthroughOpaque_(::UnityW<::GlobalNamespace::OVROverlay> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___projectedPassthroughOpaque_)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>, ::Array<::UnityW<::UnityEngine::MeshRenderer>>*>& GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_get_activeKeyboardRenderers_() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___activeKeyboardRenderers_;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>, ::Array<::UnityW<::UnityEngine::MeshRenderer>>*> const&
GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_get_activeKeyboardRenderers_() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___activeKeyboardRenderers_;
}
constexpr void
GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_set_activeKeyboardRenderers_(::ArrayW<::UnityW<::UnityEngine::MeshRenderer>, ::Array<::UnityW<::UnityEngine::MeshRenderer>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___activeKeyboardRenderers_)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_get_activeKeyboardMesh_() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___activeKeyboardMesh_;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_get_activeKeyboardMesh_() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___activeKeyboardMesh_;
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_set_activeKeyboardMesh_(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___activeKeyboardMesh_)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*>& GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_get_keyboardMeshNodes_() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyboardMeshNodes_;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> const& GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_get_keyboardMeshNodes_() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyboardMeshNodes_;
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_set_keyboardMeshNodes_(::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___keyboardMeshNodes_)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::MeshRenderer>& GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_get_activeKeyboardMeshRenderer_() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___activeKeyboardMeshRenderer_;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer> const& GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_get_activeKeyboardMeshRenderer_() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___activeKeyboardMeshRenderer_;
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_set_activeKeyboardMeshRenderer_(::UnityW<::UnityEngine::MeshRenderer> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___activeKeyboardMeshRenderer_)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_get_passthroughQuad_() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___passthroughQuad_;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_get_passthroughQuad_() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___passthroughQuad_;
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_set_passthroughQuad_(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___passthroughQuad_)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Shader>& GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_get_opaqueShader_() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___opaqueShader_;
}
constexpr ::UnityW<::UnityEngine::Shader> const& GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_get_opaqueShader_() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___opaqueShader_;
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_set_opaqueShader_(::UnityW<::UnityEngine::Shader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___opaqueShader_)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Texture2D>& GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_get_dynamicQualityTexture_() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dynamicQualityTexture_;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_get_dynamicQualityTexture_() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dynamicQualityTexture_;
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_set_dynamicQualityTexture_(::UnityW<::UnityEngine::Texture2D> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___dynamicQualityTexture_)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_get_untrackedPosition_() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___untrackedPosition_;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_get_untrackedPosition_() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___untrackedPosition_;
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_set_untrackedPosition_(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___untrackedPosition_ = value;
}
constexpr ::UnityW<::UnityEngine::Shader>& GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_get_KeyLabelModeShader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___KeyLabelModeShader;
}
constexpr ::UnityW<::UnityEngine::Shader> const& GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_get_KeyLabelModeShader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___KeyLabelModeShader;
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_set_KeyLabelModeShader(::UnityW<::UnityEngine::Shader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___KeyLabelModeShader)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Shader>& GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_get_PassthroughShader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PassthroughShader;
}
constexpr ::UnityW<::UnityEngine::Shader> const& GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_get_PassthroughShader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PassthroughShader;
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_set_PassthroughShader(::UnityW<::UnityEngine::Shader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___PassthroughShader)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_get_projectedPassthroughRoot() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___projectedPassthroughRoot;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_get_projectedPassthroughRoot() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___projectedPassthroughRoot;
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_set_projectedPassthroughRoot(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___projectedPassthroughRoot)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::MeshFilter>& GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_get_projectedPassthroughMesh() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___projectedPassthroughMesh;
}
constexpr ::UnityW<::UnityEngine::MeshFilter> const& GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_get_projectedPassthroughMesh() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___projectedPassthroughMesh;
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_set_projectedPassthroughMesh(::UnityW<::UnityEngine::MeshFilter> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___projectedPassthroughMesh)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::OVRPassthroughLayer>& GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_get_ProjectedPassthroughKeyLabel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ProjectedPassthroughKeyLabel;
}
constexpr ::UnityW<::GlobalNamespace::OVRPassthroughLayer> const& GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_get_ProjectedPassthroughKeyLabel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ProjectedPassthroughKeyLabel;
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_set_ProjectedPassthroughKeyLabel(::UnityW<::GlobalNamespace::OVRPassthroughLayer> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ProjectedPassthroughKeyLabel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent>*& GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_get_TrackedKeyboardActiveChanged() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TrackedKeyboardActiveChanged;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent>*> const&
GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_get_TrackedKeyboardActiveChanged() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TrackedKeyboardActiveChanged;
}
constexpr void
GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_set_TrackedKeyboardActiveChanged(::System::Action_1<::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___TrackedKeyboardActiveChanged)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent>*&
GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_get_TrackedKeyboardVisibilityChanged() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TrackedKeyboardVisibilityChanged;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent>*> const&
GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_get_TrackedKeyboardVisibilityChanged() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TrackedKeyboardVisibilityChanged;
}
constexpr void
GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_set_TrackedKeyboardVisibilityChanged(::System::Action_1<::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___TrackedKeyboardVisibilityChanged)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_get_ActiveKeyboardTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ActiveKeyboardTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_get_ActiveKeyboardTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ActiveKeyboardTransform;
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_set_ActiveKeyboardTransform(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ActiveKeyboardTransform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_get_HandsOverKeyboard() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___HandsOverKeyboard;
}
constexpr bool const& GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_get_HandsOverKeyboard() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___HandsOverKeyboard;
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_set_HandsOverKeyboard(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___HandsOverKeyboard = value;
}
constexpr ::UnityW<::GlobalNamespace::OVRCameraRig>& GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_get_cameraRig_() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cameraRig_;
}
constexpr ::UnityW<::GlobalNamespace::OVRCameraRig> const& GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_get_cameraRig_() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cameraRig_;
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_set_cameraRig_(::UnityW<::GlobalNamespace::OVRCameraRig> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___cameraRig_)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Coroutine*& GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_get_updateKeyboardRoutine_() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___updateKeyboardRoutine_;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Coroutine*> const& GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_get_updateKeyboardRoutine_() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___updateKeyboardRoutine_;
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_set_updateKeyboardRoutine_(::UnityEngine::Coroutine* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___updateKeyboardRoutine_)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::BoxCollider>& GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_get_keyboardBoundingBox_() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyboardBoundingBox_;
}
constexpr ::UnityW<::UnityEngine::BoxCollider> const& GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_get_keyboardBoundingBox_() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyboardBoundingBox_;
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_set_keyboardBoundingBox_(::UnityW<::UnityEngine::BoxCollider> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___keyboardBoundingBox_)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_get_staleTimeoutCounter_() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___staleTimeoutCounter_;
}
constexpr float_t const& GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_get_staleTimeoutCounter_() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___staleTimeoutCounter_;
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_set_staleTimeoutCounter_(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___staleTimeoutCounter_ = value;
}
constexpr float_t& GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_get_reacquisitionTimer_() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reacquisitionTimer_;
}
constexpr float_t const& GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_get_reacquisitionTimer_() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reacquisitionTimer_;
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_set_reacquisitionTimer_(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___reacquisitionTimer_ = value;
}
constexpr float_t& GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_get_sendFilteredPoseEventTimer_() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sendFilteredPoseEventTimer_;
}
constexpr float_t const& GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_get_sendFilteredPoseEventTimer_() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sendFilteredPoseEventTimer_;
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_set_sendFilteredPoseEventTimer_(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sendFilteredPoseEventTimer_ = value;
}
constexpr int32_t& GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_get_skippedPoseCount_() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___skippedPoseCount_;
}
constexpr int32_t const& GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_get_skippedPoseCount_() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___skippedPoseCount_;
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_set_skippedPoseCount_(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___skippedPoseCount_ = value;
}
constexpr ::System::Nullable_1<::UnityEngine::Vector3>& GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_get_EWAPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___EWAPosition;
}
constexpr ::System::Nullable_1<::UnityEngine::Vector3> const& GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_get_EWAPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___EWAPosition;
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_set_EWAPosition(::System::Nullable_1<::UnityEngine::Vector3> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___EWAPosition = value;
}
constexpr ::System::Nullable_1<::UnityEngine::Quaternion>& GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_get_EWARotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___EWARotation;
}
constexpr ::System::Nullable_1<::UnityEngine::Quaternion> const& GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_get_EWARotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___EWARotation;
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_set_EWARotation(::System::Nullable_1<::UnityEngine::Quaternion> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___EWARotation = value;
}
constexpr float_t& GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_get_HAND_HEIGHT_TUNING() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___HAND_HEIGHT_TUNING;
}
constexpr float_t const& GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_get_HAND_HEIGHT_TUNING() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___HAND_HEIGHT_TUNING;
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_set_HAND_HEIGHT_TUNING(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___HAND_HEIGHT_TUNING = value;
}
constexpr bool& GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_get_UseHeuristicRollback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___UseHeuristicRollback;
}
constexpr bool const& GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_get_UseHeuristicRollback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___UseHeuristicRollback;
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_set_UseHeuristicRollback(bool value) {
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
                                                                             "get_CurrentKeyboardAngleFromUp", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRTrackedKeyboard::set_CurrentKeyboardAngleFromUp(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(), "set_CurrentKeyboardAngleFromUp",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState GlobalNamespace::OVRTrackedKeyboard::get_TrackingState() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(), "get_TrackingState",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRTrackedKeyboard::set_TrackingState(::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(), "set_TrackingState", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::__OVRKeyboard__TrackedKeyboardInfo GlobalNamespace::OVRTrackedKeyboard::get_ActiveKeyboardInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                                                                             "get_ActiveKeyboardInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__OVRKeyboard__TrackedKeyboardInfo, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRTrackedKeyboard::set_ActiveKeyboardInfo(::GlobalNamespace::__OVRKeyboard__TrackedKeyboardInfo value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(), "set_ActiveKeyboardInfo", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRKeyboard__TrackedKeyboardInfo>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::__OVRKeyboard__TrackedKeyboardInfo GlobalNamespace::OVRTrackedKeyboard::get_SystemKeyboardInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                                                                             "get_SystemKeyboardInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__OVRKeyboard__TrackedKeyboardInfo, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRTrackedKeyboard::set_SystemKeyboardInfo(::GlobalNamespace::__OVRKeyboard__TrackedKeyboardInfo value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(), "set_SystemKeyboardInfo", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRKeyboard__TrackedKeyboardInfo>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::__OVRTrackedKeyboard__KeyboardPresentation GlobalNamespace::OVRTrackedKeyboard::get_Presentation() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(), "get_Presentation",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__OVRTrackedKeyboard__KeyboardPresentation, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRTrackedKeyboard::set_Presentation(::GlobalNamespace::__OVRTrackedKeyboard__KeyboardPresentation value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(), "set_Presentation", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRTrackedKeyboard__KeyboardPresentation>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool GlobalNamespace::OVRTrackedKeyboard::get_TrackingEnabled() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                                                                             "get_TrackingEnabled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRTrackedKeyboard::set_TrackingEnabled(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(), "set_TrackingEnabled",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool GlobalNamespace::OVRTrackedKeyboard::get_ConnectionRequired() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                                                                             "get_ConnectionRequired", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRTrackedKeyboard::set_ConnectionRequired(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(), "set_ConnectionRequired",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool GlobalNamespace::OVRTrackedKeyboard::get_ShowUntracked() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(), "get_ShowUntracked",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRTrackedKeyboard::set_ShowUntracked(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(), "set_ShowUntracked",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool GlobalNamespace::OVRTrackedKeyboard::get_RemoteKeyboard() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                                                                             "get_RemoteKeyboard", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRTrackedKeyboard::set_RemoteKeyboard(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(), "set_RemoteKeyboard",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::__OVRPlugin__TrackedKeyboardQueryFlags GlobalNamespace::OVRTrackedKeyboard::get_KeyboardQueryFlags() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                                                                             "get_KeyboardQueryFlags", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__OVRPlugin__TrackedKeyboardQueryFlags, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRTrackedKeyboard::set_KeyboardQueryFlags(::GlobalNamespace::__OVRPlugin__TrackedKeyboardQueryFlags value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(), "set_KeyboardQueryFlags", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRPlugin__TrackedKeyboardQueryFlags>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::GlobalNamespace::OVROverlay> GlobalNamespace::OVRTrackedKeyboard::get_PassthroughOverlay() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                                                                             "get_PassthroughOverlay", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::OVROverlay>, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRTrackedKeyboard::set_PassthroughOverlay(::GlobalNamespace::OVROverlay* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(), "set_PassthroughOverlay", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVROverlay*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::OVRTrackedKeyboard::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(), "Start",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::OVRTrackedKeyboard::InitializeHandPresenceData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                                                                             "InitializeHandPresenceData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRTrackedKeyboard::RegisterPassthroughMeshToSDK() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                                                                             "RegisterPassthroughMeshToSDK", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::OVRTrackedKeyboard::GetDistanceToKeyboard(::UnityEngine::Vector3 point) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(), "GetDistanceToKeyboard", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, point);
}
inline void GlobalNamespace::OVRTrackedKeyboard::LaunchLocalKeyboardSelectionDialog() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(), "LaunchLocalKeyboardSelectionDialog",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRTrackedKeyboard::LaunchRemoteKeyboardSelectionDialog() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(), "LaunchRemoteKeyboardSelectionDialog",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRTrackedKeyboard::KeyboardTrackerIsRunning() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                                                                             "KeyboardTrackerIsRunning", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::OVRTrackedKeyboard::UpdateTrackingStateCoroutine() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                                                                             "UpdateTrackingStateCoroutine", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::OVRTrackedKeyboard::StartKeyboardTrackingCoroutine() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                                                                             "StartKeyboardTrackingCoroutine", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRTrackedKeyboard::StopKeyboardTrackingInternal() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                                                                             "StopKeyboardTrackingInternal", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::OVRTrackedKeyboard::UpdateKeyboardPose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                                                                             "UpdateKeyboardPose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRTrackedKeyboard::UpdateSkippedPoseTimer() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                                                                             "UpdateSkippedPoseTimer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRTrackedKeyboard::LoadKeyboardMesh() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(), "LoadKeyboardMesh",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRTrackedKeyboard::UpdateTextureQuality() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                                                                             "UpdateTextureQuality", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRTrackedKeyboard::UpdatePresentation(bool isVisible) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(), "UpdatePresentation",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, isVisible);
}
inline ::UnityW<::UnityEngine::GameObject> GlobalNamespace::OVRTrackedKeyboard::LoadRuntimeKeyboardMesh() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                                                                             "LoadRuntimeKeyboardMesh", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRTrackedKeyboard::UpdateKeyboardVisibility() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                                                                             "UpdateKeyboardVisibility", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRTrackedKeyboard::SetKeyboardState(::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState state) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(), "SetKeyboardState", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, state);
}
inline bool GlobalNamespace::OVRTrackedKeyboard::GetKeyboardVisibility() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                                                                             "GetKeyboardVisibility", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRTrackedKeyboard::InitializeKeyboardInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                                                                             "InitializeKeyboardInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRTrackedKeyboard::LaunchOverlayIntent(::StringW dataUri) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(), "LaunchOverlayIntent",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dataUri);
}
inline void GlobalNamespace::OVRTrackedKeyboard::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(), "Dispose",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRTrackedKeyboard::DispatchVisibilityEvent(bool timeOut) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(), "DispatchVisibilityEvent",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, timeOut);
}
inline ::GlobalNamespace::OVRTrackedKeyboard* GlobalNamespace::OVRTrackedKeyboard::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OVRTrackedKeyboard*>());
}
inline void GlobalNamespace::OVRTrackedKeyboard::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRTrackedKeyboard::OVRTrackedKeyboard() {}
