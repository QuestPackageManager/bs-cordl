#pragma once
// IWYU pragma private; include "GlobalNamespace\OVRTrackedKeyboard.hpp"
#include "GlobalNamespace/zzzz__OVRKeyboard_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_impl.hpp"
#include "GlobalNamespace/zzzz__OVRTextureQualityFiltering_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MeshRenderer_impl.hpp"
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
constexpr ::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardState::OVRTrackedKeyboard_TrackedKeyboardState(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardState::OVRTrackedKeyboard_TrackedKeyboardState() {}
constexpr ::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardState GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardState::Uninitialized{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardState GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardState::NoTrackableKeyboard{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardState GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardState::Offline{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardState GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardState::StartedNotTracked{ static_cast<int32_t>(0x3) };
constexpr ::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardState GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardState::Stale{ static_cast<int32_t>(0x4) };
constexpr ::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardState GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardState::Valid{ static_cast<int32_t>(0x5) };
constexpr ::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardState GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardState::Error{ static_cast<int32_t>(0x6) };
constexpr ::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardState GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardState::ErrorExtensionFailed{ static_cast<int32_t>(0x7) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRTrackedKeyboard_KeyboardPresentation::OVRTrackedKeyboard_KeyboardPresentation(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRTrackedKeyboard_KeyboardPresentation::OVRTrackedKeyboard_KeyboardPresentation() {}
constexpr ::GlobalNamespace::OVRTrackedKeyboard_KeyboardPresentation GlobalNamespace::OVRTrackedKeyboard_KeyboardPresentation::PreferOpaque{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::OVRTrackedKeyboard_KeyboardPresentation GlobalNamespace::OVRTrackedKeyboard_KeyboardPresentation::PreferMR{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardVisibilityChangedEvent._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardVisibilityChangedEvent::*)(
    ::StringW, ::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardState, bool)>(&::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardVisibilityChangedEvent::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5ee167c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardVisibilityChangedEvent>(),
                                         { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardState>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardVisibilityChangedEvent::_ctor(::StringW keyboardModel, ::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardState state, bool timeout) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardVisibilityChangedEvent>(),
                                              { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardState>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, keyboardModel, state, timeout);
}
// Ctor Parameters [CppParam { name: "ActiveKeyboardName", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "State", ty:
// "::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardState", modifiers: "", def_value: Some("{}") }, CppParam { name: "TrackingTimeout", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardVisibilityChangedEvent::OVRTrackedKeyboard_TrackedKeyboardVisibilityChangedEvent(
    ::StringW ActiveKeyboardName, ::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardState State, bool TrackingTimeout) noexcept {
  this->ActiveKeyboardName = ActiveKeyboardName;
  this->State = State;
  this->TrackingTimeout = TrackingTimeout;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardVisibilityChangedEvent::OVRTrackedKeyboard_TrackedKeyboardVisibilityChangedEvent() {}
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardSetActiveEvent._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardSetActiveEvent::*)(bool)>(
    &::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardSetActiveEvent::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ee189c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardSetActiveEvent>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardSetActiveEvent::_ctor(bool isEnabled) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardSetActiveEvent>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, isEnabled);
}
// Ctor Parameters [CppParam { name: "IsEnabled", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardSetActiveEvent::OVRTrackedKeyboard_TrackedKeyboardSetActiveEvent(bool IsEnabled) noexcept {
  this->IsEnabled = IsEnabled;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardSetActiveEvent::OVRTrackedKeyboard_TrackedKeyboardSetActiveEvent() {}
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard___c::*)()>(&::GlobalNamespace::OVRTrackedKeyboard___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5ee18f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard___c.__ctor_b__110_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard___c::*)(::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardSetActiveEvent)>(
    &::GlobalNamespace::OVRTrackedKeyboard___c::__ctor_b__110_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5ee18fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard___c*>(),
                                                             { "<.ctor>b__110_0", {}, { ::i2c::type_of<::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardSetActiveEvent>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard___c.__ctor_b__110_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard___c::*)(::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardVisibilityChangedEvent)>(
    &::GlobalNamespace::OVRTrackedKeyboard___c::__ctor_b__110_1)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5ee1900;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard___c*>(),
                                                             { "<.ctor>b__110_1", {}, { ::i2c::type_of<::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardVisibilityChangedEvent>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRTrackedKeyboard___c::setStaticF___9(::GlobalNamespace::OVRTrackedKeyboard___c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::OVRTrackedKeyboard___c*, "<>9", ::GlobalNamespace::OVRTrackedKeyboard___c*>(std::forward<::GlobalNamespace::OVRTrackedKeyboard___c*>(value));
}
inline ::GlobalNamespace::OVRTrackedKeyboard___c* GlobalNamespace::OVRTrackedKeyboard___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::OVRTrackedKeyboard___c*, "<>9", ::GlobalNamespace::OVRTrackedKeyboard___c*>();
}
inline void GlobalNamespace::OVRTrackedKeyboard___c::setStaticF___9__110_0(::System::Action_1<::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardSetActiveEvent>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardSetActiveEvent>*, "<>9__110_0", ::GlobalNamespace::OVRTrackedKeyboard___c*>(
      std::forward<::System::Action_1<::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardSetActiveEvent>*>(value));
}
inline ::System::Action_1<::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardSetActiveEvent>* GlobalNamespace::OVRTrackedKeyboard___c::getStaticF___9__110_0() {
  return ::cordl_internals::getStaticField<::System::Action_1<::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardSetActiveEvent>*, "<>9__110_0", ::GlobalNamespace::OVRTrackedKeyboard___c*>();
}
inline void GlobalNamespace::OVRTrackedKeyboard___c::setStaticF___9__110_1(::System::Action_1<::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardVisibilityChangedEvent>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardVisibilityChangedEvent>*, "<>9__110_1", ::GlobalNamespace::OVRTrackedKeyboard___c*>(
      std::forward<::System::Action_1<::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardVisibilityChangedEvent>*>(value));
}
inline ::System::Action_1<::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardVisibilityChangedEvent>* GlobalNamespace::OVRTrackedKeyboard___c::getStaticF___9__110_1() {
  return ::cordl_internals::getStaticField<::System::Action_1<::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardVisibilityChangedEvent>*, "<>9__110_1",
                                           ::GlobalNamespace::OVRTrackedKeyboard___c*>();
}
inline void GlobalNamespace::OVRTrackedKeyboard___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRTrackedKeyboard___c::__ctor_b__110_0(::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardSetActiveEvent _p0_) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard___c*>(),
                                                           { "<.ctor>b__110_0", {}, { ::i2c::type_of<::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardSetActiveEvent>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _p0_);
}
inline void GlobalNamespace::OVRTrackedKeyboard___c::__ctor_b__110_1(::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardVisibilityChangedEvent _p0_) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard___c*>(),
                                                           { "<.ctor>b__110_1", {}, { ::i2c::type_of<::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardVisibilityChangedEvent>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _p0_);
}
inline ::GlobalNamespace::OVRTrackedKeyboard___c* GlobalNamespace::OVRTrackedKeyboard___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRTrackedKeyboard___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRTrackedKeyboard___c::OVRTrackedKeyboard___c() {}
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard__InitializeHandPresenceData_d__86._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard__InitializeHandPresenceData_d__86::*)(int32_t)>(
    &::GlobalNamespace::OVRTrackedKeyboard__InitializeHandPresenceData_d__86::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5edfef4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard__InitializeHandPresenceData_d__86*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard__InitializeHandPresenceData_d__86.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard__InitializeHandPresenceData_d__86::*)()>(
    &::GlobalNamespace::OVRTrackedKeyboard__InitializeHandPresenceData_d__86::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5ee1904;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard__InitializeHandPresenceData_d__86*>(), { "System.IDisposable.Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard__InitializeHandPresenceData_d__86.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRTrackedKeyboard__InitializeHandPresenceData_d__86::*)()>(
    &::GlobalNamespace::OVRTrackedKeyboard__InitializeHandPresenceData_d__86::MoveNext)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x5ee1908;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard__InitializeHandPresenceData_d__86*>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard__InitializeHandPresenceData_d__86.System_Collections_Generic_IEnumerator_System_Object__get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::OVRTrackedKeyboard__InitializeHandPresenceData_d__86::*)()>(
    &::GlobalNamespace::OVRTrackedKeyboard__InitializeHandPresenceData_d__86::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ee1a8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard__InitializeHandPresenceData_d__86*>(),
                                                                                           { "System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard__InitializeHandPresenceData_d__86.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard__InitializeHandPresenceData_d__86::*)()>(
    &::GlobalNamespace::OVRTrackedKeyboard__InitializeHandPresenceData_d__86::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5ee1a94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard__InitializeHandPresenceData_d__86*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard__InitializeHandPresenceData_d__86.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::OVRTrackedKeyboard__InitializeHandPresenceData_d__86::*)()>(
    &::GlobalNamespace::OVRTrackedKeyboard__InitializeHandPresenceData_d__86::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ee1acc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard__InitializeHandPresenceData_d__86*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::OVRTrackedKeyboard__InitializeHandPresenceData_d__86::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::OVRTrackedKeyboard__InitializeHandPresenceData_d__86::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void GlobalNamespace::OVRTrackedKeyboard__InitializeHandPresenceData_d__86::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::OVRTrackedKeyboard__InitializeHandPresenceData_d__86::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::OVRTrackedKeyboard__InitializeHandPresenceData_d__86::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void GlobalNamespace::OVRTrackedKeyboard__InitializeHandPresenceData_d__86::__cordl_internal_set___2__current(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::OVRTrackedKeyboard>& GlobalNamespace::OVRTrackedKeyboard__InitializeHandPresenceData_d__86::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::OVRTrackedKeyboard> const& GlobalNamespace::OVRTrackedKeyboard__InitializeHandPresenceData_d__86::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::OVRTrackedKeyboard__InitializeHandPresenceData_d__86::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::OVRTrackedKeyboard> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
inline void GlobalNamespace::OVRTrackedKeyboard__InitializeHandPresenceData_d__86::_ctor(int32_t __1__state) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard__InitializeHandPresenceData_d__86*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::OVRTrackedKeyboard__InitializeHandPresenceData_d__86::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard__InitializeHandPresenceData_d__86*>(), { "System.IDisposable.Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRTrackedKeyboard__InitializeHandPresenceData_d__86::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard__InitializeHandPresenceData_d__86*>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::OVRTrackedKeyboard__InitializeHandPresenceData_d__86::System_Collections_Generic_IEnumerator_System_Object__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard__InitializeHandPresenceData_d__86*>(),
                                                                                         { "System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::OVRTrackedKeyboard__InitializeHandPresenceData_d__86::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard__InitializeHandPresenceData_d__86*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::OVRTrackedKeyboard__InitializeHandPresenceData_d__86::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard__InitializeHandPresenceData_d__86*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRTrackedKeyboard__InitializeHandPresenceData_d__86* GlobalNamespace::OVRTrackedKeyboard__InitializeHandPresenceData_d__86::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRTrackedKeyboard__InitializeHandPresenceData_d__86*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr GlobalNamespace::OVRTrackedKeyboard__InitializeHandPresenceData_d__86::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>*
GlobalNamespace::OVRTrackedKeyboard__InitializeHandPresenceData_d__86::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr GlobalNamespace::OVRTrackedKeyboard__InitializeHandPresenceData_d__86::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::OVRTrackedKeyboard__InitializeHandPresenceData_d__86::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::OVRTrackedKeyboard__InitializeHandPresenceData_d__86::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::OVRTrackedKeyboard__InitializeHandPresenceData_d__86::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRTrackedKeyboard__InitializeHandPresenceData_d__86::OVRTrackedKeyboard__InitializeHandPresenceData_d__86() {}
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard__Start_d__85._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard__Start_d__85::*)(int32_t)>(&::GlobalNamespace::OVRTrackedKeyboard__Start_d__85::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5edfe98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard__Start_d__85*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard__Start_d__85.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard__Start_d__85::*)()>(
    &::GlobalNamespace::OVRTrackedKeyboard__Start_d__85::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5ee1ad4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard__Start_d__85*>(), { "System.IDisposable.Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard__Start_d__85.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRTrackedKeyboard__Start_d__85::*)()>(&::GlobalNamespace::OVRTrackedKeyboard__Start_d__85::MoveNext)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x5ee1ad8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard__Start_d__85*>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard__Start_d__85.System_Collections_Generic_IEnumerator_System_Object__get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::OVRTrackedKeyboard__Start_d__85::*)()>(
    &::GlobalNamespace::OVRTrackedKeyboard__Start_d__85::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ee1be8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard__Start_d__85*>(), { "System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard__Start_d__85.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard__Start_d__85::*)()>(
    &::GlobalNamespace::OVRTrackedKeyboard__Start_d__85::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5ee1bf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard__Start_d__85*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard__Start_d__85.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::OVRTrackedKeyboard__Start_d__85::*)()>(
    &::GlobalNamespace::OVRTrackedKeyboard__Start_d__85::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ee1c28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard__Start_d__85*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::OVRTrackedKeyboard__Start_d__85::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::OVRTrackedKeyboard__Start_d__85::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void GlobalNamespace::OVRTrackedKeyboard__Start_d__85::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::OVRTrackedKeyboard__Start_d__85::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::OVRTrackedKeyboard__Start_d__85::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void GlobalNamespace::OVRTrackedKeyboard__Start_d__85::__cordl_internal_set___2__current(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::OVRTrackedKeyboard>& GlobalNamespace::OVRTrackedKeyboard__Start_d__85::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::OVRTrackedKeyboard> const& GlobalNamespace::OVRTrackedKeyboard__Start_d__85::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::OVRTrackedKeyboard__Start_d__85::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::OVRTrackedKeyboard> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
inline void GlobalNamespace::OVRTrackedKeyboard__Start_d__85::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard__Start_d__85*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::OVRTrackedKeyboard__Start_d__85::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard__Start_d__85*>(), { "System.IDisposable.Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRTrackedKeyboard__Start_d__85::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard__Start_d__85*>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::OVRTrackedKeyboard__Start_d__85::System_Collections_Generic_IEnumerator_System_Object__get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard__Start_d__85*>(), { "System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::OVRTrackedKeyboard__Start_d__85::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard__Start_d__85*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::OVRTrackedKeyboard__Start_d__85::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard__Start_d__85*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRTrackedKeyboard__Start_d__85* GlobalNamespace::OVRTrackedKeyboard__Start_d__85::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRTrackedKeyboard__Start_d__85*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr GlobalNamespace::OVRTrackedKeyboard__Start_d__85::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>*
GlobalNamespace::OVRTrackedKeyboard__Start_d__85::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr GlobalNamespace::OVRTrackedKeyboard__Start_d__85::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::OVRTrackedKeyboard__Start_d__85::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::OVRTrackedKeyboard__Start_d__85::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::OVRTrackedKeyboard__Start_d__85::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRTrackedKeyboard__Start_d__85::OVRTrackedKeyboard__Start_d__85() {}
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard__StartKeyboardTrackingCoroutine_d__93._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard__StartKeyboardTrackingCoroutine_d__93::*)(int32_t)>(
    &::GlobalNamespace::OVRTrackedKeyboard__StartKeyboardTrackingCoroutine_d__93::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ee06d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard__StartKeyboardTrackingCoroutine_d__93*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard__StartKeyboardTrackingCoroutine_d__93.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard__StartKeyboardTrackingCoroutine_d__93::*)()>(
    &::GlobalNamespace::OVRTrackedKeyboard__StartKeyboardTrackingCoroutine_d__93::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5ee1c30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard__StartKeyboardTrackingCoroutine_d__93*>(), { "System.IDisposable.Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard__StartKeyboardTrackingCoroutine_d__93.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRTrackedKeyboard__StartKeyboardTrackingCoroutine_d__93::*)()>(
    &::GlobalNamespace::OVRTrackedKeyboard__StartKeyboardTrackingCoroutine_d__93::MoveNext)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x5ee1c34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard__StartKeyboardTrackingCoroutine_d__93*>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard__StartKeyboardTrackingCoroutine_d__93.System_Collections_Generic_IEnumerator_System_Object__get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::OVRTrackedKeyboard__StartKeyboardTrackingCoroutine_d__93::*)()>(
    &::GlobalNamespace::OVRTrackedKeyboard__StartKeyboardTrackingCoroutine_d__93::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ee1f14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard__StartKeyboardTrackingCoroutine_d__93*>(),
                                                                                           { "System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard__StartKeyboardTrackingCoroutine_d__93.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard__StartKeyboardTrackingCoroutine_d__93::*)()>(
    &::GlobalNamespace::OVRTrackedKeyboard__StartKeyboardTrackingCoroutine_d__93::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5ee1f1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard__StartKeyboardTrackingCoroutine_d__93*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard__StartKeyboardTrackingCoroutine_d__93.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::OVRTrackedKeyboard__StartKeyboardTrackingCoroutine_d__93::*)()>(
    &::GlobalNamespace::OVRTrackedKeyboard__StartKeyboardTrackingCoroutine_d__93::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ee1f54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard__StartKeyboardTrackingCoroutine_d__93*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::OVRTrackedKeyboard__StartKeyboardTrackingCoroutine_d__93::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::OVRTrackedKeyboard__StartKeyboardTrackingCoroutine_d__93::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void GlobalNamespace::OVRTrackedKeyboard__StartKeyboardTrackingCoroutine_d__93::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::OVRTrackedKeyboard__StartKeyboardTrackingCoroutine_d__93::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::OVRTrackedKeyboard__StartKeyboardTrackingCoroutine_d__93::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void GlobalNamespace::OVRTrackedKeyboard__StartKeyboardTrackingCoroutine_d__93::__cordl_internal_set___2__current(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::OVRTrackedKeyboard>& GlobalNamespace::OVRTrackedKeyboard__StartKeyboardTrackingCoroutine_d__93::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::OVRTrackedKeyboard> const& GlobalNamespace::OVRTrackedKeyboard__StartKeyboardTrackingCoroutine_d__93::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::OVRTrackedKeyboard__StartKeyboardTrackingCoroutine_d__93::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::OVRTrackedKeyboard> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
inline void GlobalNamespace::OVRTrackedKeyboard__StartKeyboardTrackingCoroutine_d__93::_ctor(int32_t __1__state) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard__StartKeyboardTrackingCoroutine_d__93*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::OVRTrackedKeyboard__StartKeyboardTrackingCoroutine_d__93::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard__StartKeyboardTrackingCoroutine_d__93*>(), { "System.IDisposable.Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRTrackedKeyboard__StartKeyboardTrackingCoroutine_d__93::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard__StartKeyboardTrackingCoroutine_d__93*>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::OVRTrackedKeyboard__StartKeyboardTrackingCoroutine_d__93::System_Collections_Generic_IEnumerator_System_Object__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard__StartKeyboardTrackingCoroutine_d__93*>(),
                                                                                         { "System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::OVRTrackedKeyboard__StartKeyboardTrackingCoroutine_d__93::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard__StartKeyboardTrackingCoroutine_d__93*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::OVRTrackedKeyboard__StartKeyboardTrackingCoroutine_d__93::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard__StartKeyboardTrackingCoroutine_d__93*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRTrackedKeyboard__StartKeyboardTrackingCoroutine_d__93* GlobalNamespace::OVRTrackedKeyboard__StartKeyboardTrackingCoroutine_d__93::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRTrackedKeyboard__StartKeyboardTrackingCoroutine_d__93*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr GlobalNamespace::OVRTrackedKeyboard__StartKeyboardTrackingCoroutine_d__93::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>*
GlobalNamespace::OVRTrackedKeyboard__StartKeyboardTrackingCoroutine_d__93::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr GlobalNamespace::OVRTrackedKeyboard__StartKeyboardTrackingCoroutine_d__93::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::OVRTrackedKeyboard__StartKeyboardTrackingCoroutine_d__93::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::OVRTrackedKeyboard__StartKeyboardTrackingCoroutine_d__93::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::OVRTrackedKeyboard__StartKeyboardTrackingCoroutine_d__93::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRTrackedKeyboard__StartKeyboardTrackingCoroutine_d__93::OVRTrackedKeyboard__StartKeyboardTrackingCoroutine_d__93() {}
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard__UpdateKeyboardPose_d__95._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard__UpdateKeyboardPose_d__95::*)(int32_t)>(
    &::GlobalNamespace::OVRTrackedKeyboard__UpdateKeyboardPose_d__95::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ee0a90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard__UpdateKeyboardPose_d__95*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard__UpdateKeyboardPose_d__95.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard__UpdateKeyboardPose_d__95::*)()>(
    &::GlobalNamespace::OVRTrackedKeyboard__UpdateKeyboardPose_d__95::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5ee1f5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard__UpdateKeyboardPose_d__95*>(), { "System.IDisposable.Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard__UpdateKeyboardPose_d__95.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRTrackedKeyboard__UpdateKeyboardPose_d__95::*)()>(
    &::GlobalNamespace::OVRTrackedKeyboard__UpdateKeyboardPose_d__95::MoveNext)> {
  constexpr static std::size_t size = 0x988;
  constexpr static std::size_t addrs = 0x5ee1f60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard__UpdateKeyboardPose_d__95*>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard__UpdateKeyboardPose_d__95.System_Collections_Generic_IEnumerator_System_Object__get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::OVRTrackedKeyboard__UpdateKeyboardPose_d__95::*)()>(
    &::GlobalNamespace::OVRTrackedKeyboard__UpdateKeyboardPose_d__95::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ee28e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard__UpdateKeyboardPose_d__95*>(),
                                                                                           { "System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard__UpdateKeyboardPose_d__95.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard__UpdateKeyboardPose_d__95::*)()>(
    &::GlobalNamespace::OVRTrackedKeyboard__UpdateKeyboardPose_d__95::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5ee28f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard__UpdateKeyboardPose_d__95*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard__UpdateKeyboardPose_d__95.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::OVRTrackedKeyboard__UpdateKeyboardPose_d__95::*)()>(
    &::GlobalNamespace::OVRTrackedKeyboard__UpdateKeyboardPose_d__95::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ee2928;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard__UpdateKeyboardPose_d__95*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::OVRTrackedKeyboard__UpdateKeyboardPose_d__95::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::OVRTrackedKeyboard__UpdateKeyboardPose_d__95::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void GlobalNamespace::OVRTrackedKeyboard__UpdateKeyboardPose_d__95::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::OVRTrackedKeyboard__UpdateKeyboardPose_d__95::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::OVRTrackedKeyboard__UpdateKeyboardPose_d__95::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void GlobalNamespace::OVRTrackedKeyboard__UpdateKeyboardPose_d__95::__cordl_internal_set___2__current(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::OVRTrackedKeyboard>& GlobalNamespace::OVRTrackedKeyboard__UpdateKeyboardPose_d__95::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::OVRTrackedKeyboard> const& GlobalNamespace::OVRTrackedKeyboard__UpdateKeyboardPose_d__95::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::OVRTrackedKeyboard__UpdateKeyboardPose_d__95::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::OVRTrackedKeyboard> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
inline void GlobalNamespace::OVRTrackedKeyboard__UpdateKeyboardPose_d__95::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard__UpdateKeyboardPose_d__95*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::OVRTrackedKeyboard__UpdateKeyboardPose_d__95::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard__UpdateKeyboardPose_d__95*>(), { "System.IDisposable.Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRTrackedKeyboard__UpdateKeyboardPose_d__95::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard__UpdateKeyboardPose_d__95*>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::OVRTrackedKeyboard__UpdateKeyboardPose_d__95::System_Collections_Generic_IEnumerator_System_Object__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard__UpdateKeyboardPose_d__95*>(),
                                                                                         { "System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::OVRTrackedKeyboard__UpdateKeyboardPose_d__95::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard__UpdateKeyboardPose_d__95*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::OVRTrackedKeyboard__UpdateKeyboardPose_d__95::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard__UpdateKeyboardPose_d__95*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRTrackedKeyboard__UpdateKeyboardPose_d__95* GlobalNamespace::OVRTrackedKeyboard__UpdateKeyboardPose_d__95::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRTrackedKeyboard__UpdateKeyboardPose_d__95*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr GlobalNamespace::OVRTrackedKeyboard__UpdateKeyboardPose_d__95::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>*
GlobalNamespace::OVRTrackedKeyboard__UpdateKeyboardPose_d__95::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr GlobalNamespace::OVRTrackedKeyboard__UpdateKeyboardPose_d__95::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::OVRTrackedKeyboard__UpdateKeyboardPose_d__95::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::OVRTrackedKeyboard__UpdateKeyboardPose_d__95::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::OVRTrackedKeyboard__UpdateKeyboardPose_d__95::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRTrackedKeyboard__UpdateKeyboardPose_d__95::OVRTrackedKeyboard__UpdateKeyboardPose_d__95() {}
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard__UpdateTrackingStateCoroutine_d__92._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard__UpdateTrackingStateCoroutine_d__92::*)(int32_t)>(
    &::GlobalNamespace::OVRTrackedKeyboard__UpdateTrackingStateCoroutine_d__92::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ee067c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard__UpdateTrackingStateCoroutine_d__92*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard__UpdateTrackingStateCoroutine_d__92.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard__UpdateTrackingStateCoroutine_d__92::*)()>(
    &::GlobalNamespace::OVRTrackedKeyboard__UpdateTrackingStateCoroutine_d__92::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5ee2930;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard__UpdateTrackingStateCoroutine_d__92*>(), { "System.IDisposable.Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard__UpdateTrackingStateCoroutine_d__92.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRTrackedKeyboard__UpdateTrackingStateCoroutine_d__92::*)()>(
    &::GlobalNamespace::OVRTrackedKeyboard__UpdateTrackingStateCoroutine_d__92::MoveNext)> {
  constexpr static std::size_t size = 0x490;
  constexpr static std::size_t addrs = 0x5ee2934;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard__UpdateTrackingStateCoroutine_d__92*>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard__UpdateTrackingStateCoroutine_d__92.System_Collections_Generic_IEnumerator_System_Object__get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::OVRTrackedKeyboard__UpdateTrackingStateCoroutine_d__92::*)()>(
    &::GlobalNamespace::OVRTrackedKeyboard__UpdateTrackingStateCoroutine_d__92::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ee2dc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard__UpdateTrackingStateCoroutine_d__92*>(),
                                                                                           { "System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard__UpdateTrackingStateCoroutine_d__92.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard__UpdateTrackingStateCoroutine_d__92::*)()>(
    &::GlobalNamespace::OVRTrackedKeyboard__UpdateTrackingStateCoroutine_d__92::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5ee2dcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard__UpdateTrackingStateCoroutine_d__92*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard__UpdateTrackingStateCoroutine_d__92.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::OVRTrackedKeyboard__UpdateTrackingStateCoroutine_d__92::*)()>(
    &::GlobalNamespace::OVRTrackedKeyboard__UpdateTrackingStateCoroutine_d__92::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ee2e04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard__UpdateTrackingStateCoroutine_d__92*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::OVRTrackedKeyboard__UpdateTrackingStateCoroutine_d__92::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::OVRTrackedKeyboard__UpdateTrackingStateCoroutine_d__92::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void GlobalNamespace::OVRTrackedKeyboard__UpdateTrackingStateCoroutine_d__92::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::OVRTrackedKeyboard__UpdateTrackingStateCoroutine_d__92::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::OVRTrackedKeyboard__UpdateTrackingStateCoroutine_d__92::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void GlobalNamespace::OVRTrackedKeyboard__UpdateTrackingStateCoroutine_d__92::__cordl_internal_set___2__current(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::OVRTrackedKeyboard>& GlobalNamespace::OVRTrackedKeyboard__UpdateTrackingStateCoroutine_d__92::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::OVRTrackedKeyboard> const& GlobalNamespace::OVRTrackedKeyboard__UpdateTrackingStateCoroutine_d__92::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::OVRTrackedKeyboard__UpdateTrackingStateCoroutine_d__92::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::OVRTrackedKeyboard> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
constexpr ::GlobalNamespace::OVRKeyboard_TrackedKeyboardInfo& GlobalNamespace::OVRTrackedKeyboard__UpdateTrackingStateCoroutine_d__92::__cordl_internal_get__keyboardInfo_5__2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____keyboardInfo_5__2;
}
constexpr ::GlobalNamespace::OVRKeyboard_TrackedKeyboardInfo const& GlobalNamespace::OVRTrackedKeyboard__UpdateTrackingStateCoroutine_d__92::__cordl_internal_get__keyboardInfo_5__2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____keyboardInfo_5__2;
}
constexpr void GlobalNamespace::OVRTrackedKeyboard__UpdateTrackingStateCoroutine_d__92::__cordl_internal_set__keyboardInfo_5__2(::GlobalNamespace::OVRKeyboard_TrackedKeyboardInfo value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____keyboardInfo_5__2 = value;
}
inline void GlobalNamespace::OVRTrackedKeyboard__UpdateTrackingStateCoroutine_d__92::_ctor(int32_t __1__state) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard__UpdateTrackingStateCoroutine_d__92*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::OVRTrackedKeyboard__UpdateTrackingStateCoroutine_d__92::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard__UpdateTrackingStateCoroutine_d__92*>(), { "System.IDisposable.Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRTrackedKeyboard__UpdateTrackingStateCoroutine_d__92::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard__UpdateTrackingStateCoroutine_d__92*>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::OVRTrackedKeyboard__UpdateTrackingStateCoroutine_d__92::System_Collections_Generic_IEnumerator_System_Object__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard__UpdateTrackingStateCoroutine_d__92*>(),
                                                                                         { "System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::OVRTrackedKeyboard__UpdateTrackingStateCoroutine_d__92::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard__UpdateTrackingStateCoroutine_d__92*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::OVRTrackedKeyboard__UpdateTrackingStateCoroutine_d__92::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard__UpdateTrackingStateCoroutine_d__92*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRTrackedKeyboard__UpdateTrackingStateCoroutine_d__92* GlobalNamespace::OVRTrackedKeyboard__UpdateTrackingStateCoroutine_d__92::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRTrackedKeyboard__UpdateTrackingStateCoroutine_d__92*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr GlobalNamespace::OVRTrackedKeyboard__UpdateTrackingStateCoroutine_d__92::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>*
GlobalNamespace::OVRTrackedKeyboard__UpdateTrackingStateCoroutine_d__92::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr GlobalNamespace::OVRTrackedKeyboard__UpdateTrackingStateCoroutine_d__92::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::OVRTrackedKeyboard__UpdateTrackingStateCoroutine_d__92::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::OVRTrackedKeyboard__UpdateTrackingStateCoroutine_d__92::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::OVRTrackedKeyboard__UpdateTrackingStateCoroutine_d__92::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRTrackedKeyboard__UpdateTrackingStateCoroutine_d__92::OVRTrackedKeyboard__UpdateTrackingStateCoroutine_d__92() {}
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.get_CurrentKeyboardAngleFromUp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::OVRTrackedKeyboard::*)()>(&::GlobalNamespace::OVRTrackedKeyboard::get_CurrentKeyboardAngleFromUp)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5edfb60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard*>(), { "get_CurrentKeyboardAngleFromUp", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.set_CurrentKeyboardAngleFromUp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard::*)(float_t)>(&::GlobalNamespace::OVRTrackedKeyboard::set_CurrentKeyboardAngleFromUp)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5edfb68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard*>(), { "set_CurrentKeyboardAngleFromUp", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.get_TrackingState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardState (::GlobalNamespace::OVRTrackedKeyboard::*)()>(
    &::GlobalNamespace::OVRTrackedKeyboard::get_TrackingState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5edfb70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard*>(), { "get_TrackingState", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.set_TrackingState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard::*)(::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardState)>(
    &::GlobalNamespace::OVRTrackedKeyboard::set_TrackingState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5edfb78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard*>(), { "set_TrackingState", {}, { ::i2c::type_of<::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardState>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.get_ActiveKeyboardInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRKeyboard_TrackedKeyboardInfo (::GlobalNamespace::OVRTrackedKeyboard::*)()>(
    &::GlobalNamespace::OVRTrackedKeyboard::get_ActiveKeyboardInfo)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5edfb80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard*>(), { "get_ActiveKeyboardInfo", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.set_ActiveKeyboardInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard::*)(::GlobalNamespace::OVRKeyboard_TrackedKeyboardInfo)>(
    &::GlobalNamespace::OVRTrackedKeyboard::set_ActiveKeyboardInfo)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5edfb98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard*>(), { "set_ActiveKeyboardInfo", {}, { ::i2c::type_of<::GlobalNamespace::OVRKeyboard_TrackedKeyboardInfo>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.get_SystemKeyboardInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRKeyboard_TrackedKeyboardInfo (::GlobalNamespace::OVRTrackedKeyboard::*)()>(
    &::GlobalNamespace::OVRTrackedKeyboard::get_SystemKeyboardInfo)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5edfbb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard*>(), { "get_SystemKeyboardInfo", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.set_SystemKeyboardInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard::*)(::GlobalNamespace::OVRKeyboard_TrackedKeyboardInfo)>(
    &::GlobalNamespace::OVRTrackedKeyboard::set_SystemKeyboardInfo)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5edfbc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard*>(), { "set_SystemKeyboardInfo", {}, { ::i2c::type_of<::GlobalNamespace::OVRKeyboard_TrackedKeyboardInfo>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.get_Presentation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTrackedKeyboard_KeyboardPresentation (::GlobalNamespace::OVRTrackedKeyboard::*)()>(
    &::GlobalNamespace::OVRTrackedKeyboard::get_Presentation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5edfbd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard*>(), { "get_Presentation", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.set_Presentation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard::*)(::GlobalNamespace::OVRTrackedKeyboard_KeyboardPresentation)>(
    &::GlobalNamespace::OVRTrackedKeyboard::set_Presentation)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5edfbe0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard*>(), { "set_Presentation", {}, { ::i2c::type_of<::GlobalNamespace::OVRTrackedKeyboard_KeyboardPresentation>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.get_TrackingEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRTrackedKeyboard::*)()>(&::GlobalNamespace::OVRTrackedKeyboard::get_TrackingEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5edfdd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard*>(), { "get_TrackingEnabled", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.set_TrackingEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard::*)(bool)>(&::GlobalNamespace::OVRTrackedKeyboard::set_TrackingEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5edfdd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard*>(), { "set_TrackingEnabled", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.get_ConnectionRequired
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRTrackedKeyboard::*)()>(&::GlobalNamespace::OVRTrackedKeyboard::get_ConnectionRequired)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5edfde0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard*>(), { "get_ConnectionRequired", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.set_ConnectionRequired
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard::*)(bool)>(&::GlobalNamespace::OVRTrackedKeyboard::set_ConnectionRequired)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5edfde8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard*>(), { "set_ConnectionRequired", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.get_ShowUntracked
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRTrackedKeyboard::*)()>(&::GlobalNamespace::OVRTrackedKeyboard::get_ShowUntracked)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5edfdf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard*>(), { "get_ShowUntracked", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.set_ShowUntracked
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard::*)(bool)>(&::GlobalNamespace::OVRTrackedKeyboard::set_ShowUntracked)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5edfdf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard*>(), { "set_ShowUntracked", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.get_RemoteKeyboard
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRTrackedKeyboard::*)()>(&::GlobalNamespace::OVRTrackedKeyboard::get_RemoteKeyboard)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5edfe00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard*>(), { "get_RemoteKeyboard", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.set_RemoteKeyboard
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard::*)(bool)>(&::GlobalNamespace::OVRTrackedKeyboard::set_RemoteKeyboard)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5edfe10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard*>(), { "set_RemoteKeyboard", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.get_KeyboardQueryFlags
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRPlugin_TrackedKeyboardQueryFlags (::GlobalNamespace::OVRTrackedKeyboard::*)()>(
    &::GlobalNamespace::OVRTrackedKeyboard::get_KeyboardQueryFlags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5edfe28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard*>(), { "get_KeyboardQueryFlags", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.set_KeyboardQueryFlags
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard::*)(::GlobalNamespace::OVRPlugin_TrackedKeyboardQueryFlags)>(
    &::GlobalNamespace::OVRTrackedKeyboard::set_KeyboardQueryFlags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5edfe30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard*>(),
                                                             { "set_KeyboardQueryFlags", {}, { ::i2c::type_of<::GlobalNamespace::OVRPlugin_TrackedKeyboardQueryFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.get_PassthroughOverlay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::OVROverlay> (::GlobalNamespace::OVRTrackedKeyboard::*)()>(
    &::GlobalNamespace::OVRTrackedKeyboard::get_PassthroughOverlay)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5edfe38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard*>(), { "get_PassthroughOverlay", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.set_PassthroughOverlay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard::*)(::GlobalNamespace::OVROverlay*)>(
    &::GlobalNamespace::OVRTrackedKeyboard::set_PassthroughOverlay)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5edfe40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard*>(), { "set_PassthroughOverlay", {}, { ::i2c::type_of<::GlobalNamespace::OVROverlay*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::OVRTrackedKeyboard::*)()>(&::GlobalNamespace::OVRTrackedKeyboard::Start)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5edfe44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.InitializeHandPresenceData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::OVRTrackedKeyboard::*)()>(
    &::GlobalNamespace::OVRTrackedKeyboard::InitializeHandPresenceData)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5edfea0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard*>(), { "InitializeHandPresenceData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.RegisterPassthroughMeshToSDK
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard::*)()>(&::GlobalNamespace::OVRTrackedKeyboard::RegisterPassthroughMeshToSDK)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5edfefc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard*>(), { "RegisterPassthroughMeshToSDK", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.GetDistanceToKeyboard
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::OVRTrackedKeyboard::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::OVRTrackedKeyboard::GetDistanceToKeyboard)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x5edff94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard*>(), { "GetDistanceToKeyboard", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.LaunchLocalKeyboardSelectionDialog
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard::*)()>(&::GlobalNamespace::OVRTrackedKeyboard::LaunchLocalKeyboardSelectionDialog)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5ee01c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard*>(), { "LaunchLocalKeyboardSelectionDialog", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.LaunchRemoteKeyboardSelectionDialog
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard::*)()>(&::GlobalNamespace::OVRTrackedKeyboard::LaunchRemoteKeyboardSelectionDialog)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5ee05d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard*>(), { "LaunchRemoteKeyboardSelectionDialog", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.KeyboardTrackerIsRunning
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRTrackedKeyboard::*)()>(&::GlobalNamespace::OVRTrackedKeyboard::KeyboardTrackerIsRunning)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5ee0614;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard*>(), { "KeyboardTrackerIsRunning", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.UpdateTrackingStateCoroutine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::OVRTrackedKeyboard::*)()>(
    &::GlobalNamespace::OVRTrackedKeyboard::UpdateTrackingStateCoroutine)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5ee0628;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard*>(), { "UpdateTrackingStateCoroutine", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.StartKeyboardTrackingCoroutine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::OVRTrackedKeyboard::*)()>(
    &::GlobalNamespace::OVRTrackedKeyboard::StartKeyboardTrackingCoroutine)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5ee0684;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard*>(), { "StartKeyboardTrackingCoroutine", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.StopKeyboardTrackingInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard::*)()>(&::GlobalNamespace::OVRTrackedKeyboard::StopKeyboardTrackingInternal)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x5ee06e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard*>(), { "StopKeyboardTrackingInternal", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.UpdateKeyboardPose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::OVRTrackedKeyboard::*)()>(&::GlobalNamespace::OVRTrackedKeyboard::UpdateKeyboardPose)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5ee0a3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard*>(), { "UpdateKeyboardPose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.UpdateSkippedPoseTimer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard::*)()>(&::GlobalNamespace::OVRTrackedKeyboard::UpdateSkippedPoseTimer)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5ee0a98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard*>(), { "UpdateSkippedPoseTimer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.LoadKeyboardMesh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard::*)()>(&::GlobalNamespace::OVRTrackedKeyboard::LoadKeyboardMesh)> {
  constexpr static std::size_t size = 0x518;
  constexpr static std::size_t addrs = 0x5ee0b00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard*>(), { "LoadKeyboardMesh", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.UpdateTextureQuality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard::*)()>(&::GlobalNamespace::OVRTrackedKeyboard::UpdateTextureQuality)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x5ee12e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard*>(), { "UpdateTextureQuality", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.UpdatePresentation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard::*)(bool)>(&::GlobalNamespace::OVRTrackedKeyboard::UpdatePresentation)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x5edfc7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard*>(), { "UpdatePresentation", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.LoadRuntimeKeyboardMesh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::GlobalNamespace::OVRTrackedKeyboard::*)()>(
    &::GlobalNamespace::OVRTrackedKeyboard::LoadRuntimeKeyboardMesh)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x5ee1018;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard*>(), { "LoadRuntimeKeyboardMesh", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.UpdateKeyboardVisibility
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard::*)()>(&::GlobalNamespace::OVRTrackedKeyboard::UpdateKeyboardVisibility)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x5ee1424;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard*>(), { "UpdateKeyboardVisibility", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.SetKeyboardState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard::*)(::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardState)>(
    &::GlobalNamespace::OVRTrackedKeyboard::SetKeyboardState)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x5ee08d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard*>(), { "SetKeyboardState", {}, { ::i2c::type_of<::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardState>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.GetKeyboardVisibility
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRTrackedKeyboard::*)()>(&::GlobalNamespace::OVRTrackedKeyboard::GetKeyboardVisibility)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5edfc30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard*>(), { "GetKeyboardVisibility", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.InitializeKeyboardInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard::*)()>(&::GlobalNamespace::OVRTrackedKeyboard::InitializeKeyboardInfo)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5ee09e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard*>(), { "InitializeKeyboardInfo", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.LaunchOverlayIntent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard::*)(::StringW)>(&::GlobalNamespace::OVRTrackedKeyboard::LaunchOverlayIntent)> {
  constexpr static std::size_t size = 0x3cc;
  constexpr static std::size_t addrs = 0x5ee0204;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard*>(), { "LaunchOverlayIntent", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard::*)()>(&::GlobalNamespace::OVRTrackedKeyboard::Dispose)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5ee1574;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.DispatchVisibilityEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard::*)(bool)>(&::GlobalNamespace::OVRTrackedKeyboard::DispatchVisibilityEvent)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5ee1540;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard*>(), { "DispatchVisibilityEvent", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard::*)()>(&::GlobalNamespace::OVRTrackedKeyboard::_ctor)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x5ee168c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard*>(), { ".ctor", {}, {} })));
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
constexpr ::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardState& GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_get__TrackingState_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____TrackingState_k__BackingField;
}
constexpr ::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardState const& GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_get__TrackingState_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____TrackingState_k__BackingField;
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_set__TrackingState_k__BackingField(::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____TrackingState_k__BackingField = value;
}
constexpr ::GlobalNamespace::OVRKeyboard_TrackedKeyboardInfo& GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_get__ActiveKeyboardInfo_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ActiveKeyboardInfo_k__BackingField;
}
constexpr ::GlobalNamespace::OVRKeyboard_TrackedKeyboardInfo const& GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_get__ActiveKeyboardInfo_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ActiveKeyboardInfo_k__BackingField;
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_set__ActiveKeyboardInfo_k__BackingField(::GlobalNamespace::OVRKeyboard_TrackedKeyboardInfo value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ActiveKeyboardInfo_k__BackingField = value;
}
constexpr ::GlobalNamespace::OVRKeyboard_TrackedKeyboardInfo& GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_get__SystemKeyboardInfo_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____SystemKeyboardInfo_k__BackingField;
}
constexpr ::GlobalNamespace::OVRKeyboard_TrackedKeyboardInfo const& GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_get__SystemKeyboardInfo_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____SystemKeyboardInfo_k__BackingField;
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_set__SystemKeyboardInfo_k__BackingField(::GlobalNamespace::OVRKeyboard_TrackedKeyboardInfo value) {
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
constexpr ::GlobalNamespace::OVRPlugin_TrackedKeyboardQueryFlags& GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_get_keyboardQueryFlags() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyboardQueryFlags;
}
constexpr ::GlobalNamespace::OVRPlugin_TrackedKeyboardQueryFlags const& GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_get_keyboardQueryFlags() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyboardQueryFlags;
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_set_keyboardQueryFlags(::GlobalNamespace::OVRPlugin_TrackedKeyboardQueryFlags value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___keyboardQueryFlags = value;
}
constexpr ::GlobalNamespace::OVRTrackedKeyboard_KeyboardPresentation& GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_get_presentation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___presentation;
}
constexpr ::GlobalNamespace::OVRTrackedKeyboard_KeyboardPresentation const& GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_get_presentation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___presentation;
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_set_presentation(::GlobalNamespace::OVRTrackedKeyboard_KeyboardPresentation value) {
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
  this->___keyboardModelShader = value;
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
  this->___keyboardModelAlphaBlendShader = value;
}
constexpr ::GlobalNamespace::OVRPlugin_TrackedKeyboardPresentationStyles& GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_get_currentKeyboardPresentationStyles() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentKeyboardPresentationStyles;
}
constexpr ::GlobalNamespace::OVRPlugin_TrackedKeyboardPresentationStyles const& GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_get_currentKeyboardPresentationStyles() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentKeyboardPresentationStyles;
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_set_currentKeyboardPresentationStyles(::GlobalNamespace::OVRPlugin_TrackedKeyboardPresentationStyles value) {
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
  this->___projectedPassthroughOpaque_ = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>>& GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_get_activeKeyboardRenderers_() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___activeKeyboardRenderers_;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>> const& GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_get_activeKeyboardRenderers_() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___activeKeyboardRenderers_;
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_set_activeKeyboardRenderers_(::ArrayW<::UnityW<::UnityEngine::MeshRenderer>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___activeKeyboardRenderers_ = value;
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
  this->___activeKeyboardMesh_ = value;
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
  this->___activeKeyboardMeshRenderer_ = value;
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
  this->___passthroughQuad_ = value;
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
  this->___dynamicQualityTexture_ = value;
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
  this->___PassthroughShader = value;
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
  this->___projectedPassthroughRoot = value;
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
  this->___projectedPassthroughMesh = value;
}
constexpr ::UnityW<::GlobalNamespace::OVRPassthroughLayer>& GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_get_ProjectedPassthroughMR() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ProjectedPassthroughMR;
}
constexpr ::UnityW<::GlobalNamespace::OVRPassthroughLayer> const& GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_get_ProjectedPassthroughMR() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ProjectedPassthroughMR;
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_set_ProjectedPassthroughMR(::UnityW<::GlobalNamespace::OVRPassthroughLayer> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ProjectedPassthroughMR = value;
}
constexpr ::System::Action_1<::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardSetActiveEvent>*& GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_get_TrackedKeyboardActiveChanged() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TrackedKeyboardActiveChanged;
}
constexpr ::System::Action_1<::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardSetActiveEvent>* const&
GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_get_TrackedKeyboardActiveChanged() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TrackedKeyboardActiveChanged;
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_set_TrackedKeyboardActiveChanged(::System::Action_1<::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardSetActiveEvent>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___TrackedKeyboardActiveChanged = value;
}
constexpr ::System::Action_1<::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardVisibilityChangedEvent>*&
GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_get_TrackedKeyboardVisibilityChanged() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TrackedKeyboardVisibilityChanged;
}
constexpr ::System::Action_1<::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardVisibilityChangedEvent>* const&
GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_get_TrackedKeyboardVisibilityChanged() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TrackedKeyboardVisibilityChanged;
}
constexpr void
GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_set_TrackedKeyboardVisibilityChanged(::System::Action_1<::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardVisibilityChangedEvent>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___TrackedKeyboardVisibilityChanged = value;
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
  this->___ActiveKeyboardTransform = value;
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
  this->___cameraRig_ = value;
}
constexpr ::UnityEngine::Coroutine*& GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_get_updateKeyboardRoutine_() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___updateKeyboardRoutine_;
}
constexpr ::UnityEngine::Coroutine* const& GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_get_updateKeyboardRoutine_() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___updateKeyboardRoutine_;
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_set_updateKeyboardRoutine_(::UnityEngine::Coroutine* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___updateKeyboardRoutine_ = value;
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
  this->___keyboardBoundingBox_ = value;
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
  ::cordl_internals::setStaticField<float_t, "underlayScaleMultX_", ::GlobalNamespace::OVRTrackedKeyboard*>(std::forward<float_t>(value));
}
inline float_t GlobalNamespace::OVRTrackedKeyboard::getStaticF_underlayScaleMultX_() {
  return ::cordl_internals::getStaticField<float_t, "underlayScaleMultX_", ::GlobalNamespace::OVRTrackedKeyboard*>();
}
inline void GlobalNamespace::OVRTrackedKeyboard::setStaticF_underlayScaleConstY_(float_t value) {
  ::cordl_internals::setStaticField<float_t, "underlayScaleConstY_", ::GlobalNamespace::OVRTrackedKeyboard*>(std::forward<float_t>(value));
}
inline float_t GlobalNamespace::OVRTrackedKeyboard::getStaticF_underlayScaleConstY_() {
  return ::cordl_internals::getStaticField<float_t, "underlayScaleConstY_", ::GlobalNamespace::OVRTrackedKeyboard*>();
}
inline void GlobalNamespace::OVRTrackedKeyboard::setStaticF_underlayScaleMultZ_(float_t value) {
  ::cordl_internals::setStaticField<float_t, "underlayScaleMultZ_", ::GlobalNamespace::OVRTrackedKeyboard*>(std::forward<float_t>(value));
}
inline float_t GlobalNamespace::OVRTrackedKeyboard::getStaticF_underlayScaleMultZ_() {
  return ::cordl_internals::getStaticField<float_t, "underlayScaleMultZ_", ::GlobalNamespace::OVRTrackedKeyboard*>();
}
inline void GlobalNamespace::OVRTrackedKeyboard::setStaticF_underlayOffset_(::UnityEngine::Vector3 value) {
  ::cordl_internals::setStaticField<::UnityEngine::Vector3, "underlayOffset_", ::GlobalNamespace::OVRTrackedKeyboard*>(std::forward<::UnityEngine::Vector3>(value));
}
inline ::UnityEngine::Vector3 GlobalNamespace::OVRTrackedKeyboard::getStaticF_underlayOffset_() {
  return ::cordl_internals::getStaticField<::UnityEngine::Vector3, "underlayOffset_", ::GlobalNamespace::OVRTrackedKeyboard*>();
}
inline void GlobalNamespace::OVRTrackedKeyboard::setStaticF_boundingBoxAboveKeyboardY_(float_t value) {
  ::cordl_internals::setStaticField<float_t, "boundingBoxAboveKeyboardY_", ::GlobalNamespace::OVRTrackedKeyboard*>(std::forward<float_t>(value));
}
inline float_t GlobalNamespace::OVRTrackedKeyboard::getStaticF_boundingBoxAboveKeyboardY_() {
  return ::cordl_internals::getStaticField<float_t, "boundingBoxAboveKeyboardY_", ::GlobalNamespace::OVRTrackedKeyboard*>();
}
inline void GlobalNamespace::OVRTrackedKeyboard::setStaticF_initialHorizontalDistanceKeyboard_(float_t value) {
  ::cordl_internals::setStaticField<float_t, "initialHorizontalDistanceKeyboard_", ::GlobalNamespace::OVRTrackedKeyboard*>(std::forward<float_t>(value));
}
inline float_t GlobalNamespace::OVRTrackedKeyboard::getStaticF_initialHorizontalDistanceKeyboard_() {
  return ::cordl_internals::getStaticField<float_t, "initialHorizontalDistanceKeyboard_", ::GlobalNamespace::OVRTrackedKeyboard*>();
}
inline void GlobalNamespace::OVRTrackedKeyboard::setStaticF_initialVerticalDistanceKeyboard_(float_t value) {
  ::cordl_internals::setStaticField<float_t, "initialVerticalDistanceKeyboard_", ::GlobalNamespace::OVRTrackedKeyboard*>(std::forward<float_t>(value));
}
inline float_t GlobalNamespace::OVRTrackedKeyboard::getStaticF_initialVerticalDistanceKeyboard_() {
  return ::cordl_internals::getStaticField<float_t, "initialVerticalDistanceKeyboard_", ::GlobalNamespace::OVRTrackedKeyboard*>();
}
inline float_t GlobalNamespace::OVRTrackedKeyboard::get_CurrentKeyboardAngleFromUp() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard*>(), { "get_CurrentKeyboardAngleFromUp", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::OVRTrackedKeyboard::set_CurrentKeyboardAngleFromUp(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard*>(), { "set_CurrentKeyboardAngleFromUp", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardState GlobalNamespace::OVRTrackedKeyboard::get_TrackingState() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard*>(), { "get_TrackingState", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardState>(this, ___internal_method);
}
inline void GlobalNamespace::OVRTrackedKeyboard::set_TrackingState(::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardState value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard*>(), { "set_TrackingState", {}, { ::i2c::type_of<::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardState>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::OVRKeyboard_TrackedKeyboardInfo GlobalNamespace::OVRTrackedKeyboard::get_ActiveKeyboardInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard*>(), { "get_ActiveKeyboardInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRKeyboard_TrackedKeyboardInfo>(this, ___internal_method);
}
inline void GlobalNamespace::OVRTrackedKeyboard::set_ActiveKeyboardInfo(::GlobalNamespace::OVRKeyboard_TrackedKeyboardInfo value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard*>(),
                                                                                         { "set_ActiveKeyboardInfo", {}, { ::i2c::type_of<::GlobalNamespace::OVRKeyboard_TrackedKeyboardInfo>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::OVRKeyboard_TrackedKeyboardInfo GlobalNamespace::OVRTrackedKeyboard::get_SystemKeyboardInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard*>(), { "get_SystemKeyboardInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRKeyboard_TrackedKeyboardInfo>(this, ___internal_method);
}
inline void GlobalNamespace::OVRTrackedKeyboard::set_SystemKeyboardInfo(::GlobalNamespace::OVRKeyboard_TrackedKeyboardInfo value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard*>(),
                                                                                         { "set_SystemKeyboardInfo", {}, { ::i2c::type_of<::GlobalNamespace::OVRKeyboard_TrackedKeyboardInfo>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::OVRTrackedKeyboard_KeyboardPresentation GlobalNamespace::OVRTrackedKeyboard::get_Presentation() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard*>(), { "get_Presentation", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTrackedKeyboard_KeyboardPresentation>(this, ___internal_method);
}
inline void GlobalNamespace::OVRTrackedKeyboard::set_Presentation(::GlobalNamespace::OVRTrackedKeyboard_KeyboardPresentation value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard*>(), { "set_Presentation", {}, { ::i2c::type_of<::GlobalNamespace::OVRTrackedKeyboard_KeyboardPresentation>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::OVRTrackedKeyboard::get_TrackingEnabled() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard*>(), { "get_TrackingEnabled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::OVRTrackedKeyboard::set_TrackingEnabled(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard*>(), { "set_TrackingEnabled", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::OVRTrackedKeyboard::get_ConnectionRequired() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard*>(), { "get_ConnectionRequired", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::OVRTrackedKeyboard::set_ConnectionRequired(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard*>(), { "set_ConnectionRequired", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::OVRTrackedKeyboard::get_ShowUntracked() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard*>(), { "get_ShowUntracked", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::OVRTrackedKeyboard::set_ShowUntracked(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard*>(), { "set_ShowUntracked", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::OVRTrackedKeyboard::get_RemoteKeyboard() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard*>(), { "get_RemoteKeyboard", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::OVRTrackedKeyboard::set_RemoteKeyboard(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard*>(), { "set_RemoteKeyboard", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::OVRPlugin_TrackedKeyboardQueryFlags GlobalNamespace::OVRTrackedKeyboard::get_KeyboardQueryFlags() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard*>(), { "get_KeyboardQueryFlags", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPlugin_TrackedKeyboardQueryFlags>(this, ___internal_method);
}
inline void GlobalNamespace::OVRTrackedKeyboard::set_KeyboardQueryFlags(::GlobalNamespace::OVRPlugin_TrackedKeyboardQueryFlags value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard*>(), { "set_KeyboardQueryFlags", {}, { ::i2c::type_of<::GlobalNamespace::OVRPlugin_TrackedKeyboardQueryFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::GlobalNamespace::OVROverlay> GlobalNamespace::OVRTrackedKeyboard::get_PassthroughOverlay() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard*>(), { "get_PassthroughOverlay", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::OVROverlay>>(this, ___internal_method);
}
inline void GlobalNamespace::OVRTrackedKeyboard::set_PassthroughOverlay(::GlobalNamespace::OVROverlay* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard*>(), { "set_PassthroughOverlay", {}, { ::i2c::type_of<::GlobalNamespace::OVROverlay*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::OVRTrackedKeyboard::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::OVRTrackedKeyboard::InitializeHandPresenceData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard*>(), { "InitializeHandPresenceData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void GlobalNamespace::OVRTrackedKeyboard::RegisterPassthroughMeshToSDK() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard*>(), { "RegisterPassthroughMeshToSDK", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t GlobalNamespace::OVRTrackedKeyboard::GetDistanceToKeyboard(::UnityEngine::Vector3 point) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard*>(), { "GetDistanceToKeyboard", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, point);
}
inline void GlobalNamespace::OVRTrackedKeyboard::LaunchLocalKeyboardSelectionDialog() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard*>(), { "LaunchLocalKeyboardSelectionDialog", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRTrackedKeyboard::LaunchRemoteKeyboardSelectionDialog() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard*>(), { "LaunchRemoteKeyboardSelectionDialog", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRTrackedKeyboard::KeyboardTrackerIsRunning() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard*>(), { "KeyboardTrackerIsRunning", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::OVRTrackedKeyboard::UpdateTrackingStateCoroutine() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard*>(), { "UpdateTrackingStateCoroutine", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::OVRTrackedKeyboard::StartKeyboardTrackingCoroutine() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard*>(), { "StartKeyboardTrackingCoroutine", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void GlobalNamespace::OVRTrackedKeyboard::StopKeyboardTrackingInternal() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard*>(), { "StopKeyboardTrackingInternal", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::OVRTrackedKeyboard::UpdateKeyboardPose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard*>(), { "UpdateKeyboardPose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void GlobalNamespace::OVRTrackedKeyboard::UpdateSkippedPoseTimer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard*>(), { "UpdateSkippedPoseTimer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRTrackedKeyboard::LoadKeyboardMesh() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard*>(), { "LoadKeyboardMesh", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRTrackedKeyboard::UpdateTextureQuality() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard*>(), { "UpdateTextureQuality", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRTrackedKeyboard::UpdatePresentation(bool isVisible) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard*>(), { "UpdatePresentation", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isVisible);
}
inline ::UnityW<::UnityEngine::GameObject> GlobalNamespace::OVRTrackedKeyboard::LoadRuntimeKeyboardMesh() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard*>(), { "LoadRuntimeKeyboardMesh", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method);
}
inline void GlobalNamespace::OVRTrackedKeyboard::UpdateKeyboardVisibility() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard*>(), { "UpdateKeyboardVisibility", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRTrackedKeyboard::SetKeyboardState(::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardState state) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard*>(), { "SetKeyboardState", {}, { ::i2c::type_of<::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardState>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline bool GlobalNamespace::OVRTrackedKeyboard::GetKeyboardVisibility() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard*>(), { "GetKeyboardVisibility", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::OVRTrackedKeyboard::InitializeKeyboardInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard*>(), { "InitializeKeyboardInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRTrackedKeyboard::LaunchOverlayIntent(::StringW dataUri) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard*>(), { "LaunchOverlayIntent", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dataUri);
}
inline void GlobalNamespace::OVRTrackedKeyboard::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRTrackedKeyboard::DispatchVisibilityEvent(bool timeOut) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard*>(), { "DispatchVisibilityEvent", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, timeOut);
}
inline void GlobalNamespace::OVRTrackedKeyboard::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTrackedKeyboard*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRTrackedKeyboard* GlobalNamespace::OVRTrackedKeyboard::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRTrackedKeyboard*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRTrackedKeyboard::OVRTrackedKeyboard() {}
