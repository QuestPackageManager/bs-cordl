#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRTrackedKeyboard.hpp"
#include "GlobalNamespace/zzzz__OVRKeyboard_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_impl.hpp"
#include "GlobalNamespace/zzzz__OVRTextureQualityFiltering_impl.hpp"
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardVisibilityChangedEvent::*)(
    ::StringW, ::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardState, bool)>(&::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardVisibilityChangedEvent::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5d331c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardVisibilityChangedEvent>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardState>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardVisibilityChangedEvent::_ctor(::StringW keyboardModel, ::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardState state, bool timeout) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardVisibilityChangedEvent>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardState>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, keyboardModel, state, timeout);
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardSetActiveEvent::*)(bool)>(
    &::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardSetActiveEvent::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d333e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardSetActiveEvent>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardSetActiveEvent::_ctor(bool isEnabled) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardSetActiveEvent>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, isEnabled);
}
// Ctor Parameters [CppParam { name: "IsEnabled", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardSetActiveEvent::OVRTrackedKeyboard_TrackedKeyboardSetActiveEvent(bool IsEnabled) noexcept {
  this->IsEnabled = IsEnabled;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardSetActiveEvent::OVRTrackedKeyboard_TrackedKeyboardSetActiveEvent() {}
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard___c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard___c::*)()>(&::GlobalNamespace::OVRTrackedKeyboard___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d3343c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard___c*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard___c.__ctor_b__110_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard___c::*)(
    ::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardSetActiveEvent)>(&::GlobalNamespace::OVRTrackedKeyboard___c::__ctor_b__110_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d33440;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard___c*>::get(), "<.ctor>b__110_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardSetActiveEvent>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard___c.__ctor_b__110_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard___c::*)(
    ::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardVisibilityChangedEvent)>(&::GlobalNamespace::OVRTrackedKeyboard___c::__ctor_b__110_1)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d33444;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard___c*>::get(), "<.ctor>b__110_1", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardVisibilityChangedEvent>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRTrackedKeyboard___c::setStaticF___9(::GlobalNamespace::OVRTrackedKeyboard___c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::OVRTrackedKeyboard___c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard___c*>::get>(
      std::forward<::GlobalNamespace::OVRTrackedKeyboard___c*>(value));
}
inline ::GlobalNamespace::OVRTrackedKeyboard___c* GlobalNamespace::OVRTrackedKeyboard___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::OVRTrackedKeyboard___c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard___c*>::get>();
}
inline void GlobalNamespace::OVRTrackedKeyboard___c::setStaticF___9__110_0(::System::Action_1<::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardSetActiveEvent>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardSetActiveEvent>*, "<>9__110_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard___c*>::get>(
      std::forward<::System::Action_1<::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardSetActiveEvent>*>(value));
}
inline ::System::Action_1<::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardSetActiveEvent>* GlobalNamespace::OVRTrackedKeyboard___c::getStaticF___9__110_0() {
  return ::cordl_internals::getStaticField<::System::Action_1<::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardSetActiveEvent>*, "<>9__110_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard___c*>::get>();
}
inline void GlobalNamespace::OVRTrackedKeyboard___c::setStaticF___9__110_1(::System::Action_1<::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardVisibilityChangedEvent>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardVisibilityChangedEvent>*, "<>9__110_1",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard___c*>::get>(
      std::forward<::System::Action_1<::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardVisibilityChangedEvent>*>(value));
}
inline ::System::Action_1<::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardVisibilityChangedEvent>* GlobalNamespace::OVRTrackedKeyboard___c::getStaticF___9__110_1() {
  return ::cordl_internals::getStaticField<::System::Action_1<::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardVisibilityChangedEvent>*, "<>9__110_1",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard___c*>::get>();
}
inline void GlobalNamespace::OVRTrackedKeyboard___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard___c*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRTrackedKeyboard___c::__ctor_b__110_0(::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardSetActiveEvent _p0_) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard___c*>::get(), "<.ctor>b__110_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardSetActiveEvent>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, _p0_);
}
inline void GlobalNamespace::OVRTrackedKeyboard___c::__ctor_b__110_1(::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardVisibilityChangedEvent _p0_) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard___c*>::get(), "<.ctor>b__110_1", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardVisibilityChangedEvent>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, _p0_);
}
inline ::GlobalNamespace::OVRTrackedKeyboard___c* GlobalNamespace::OVRTrackedKeyboard___c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OVRTrackedKeyboard___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRTrackedKeyboard___c::OVRTrackedKeyboard___c() {}
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard__InitializeHandPresenceData_d__86._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard__InitializeHandPresenceData_d__86::*)(int32_t)>(
    &::GlobalNamespace::OVRTrackedKeyboard__InitializeHandPresenceData_d__86::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d31a38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard__InitializeHandPresenceData_d__86*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard__InitializeHandPresenceData_d__86.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard__InitializeHandPresenceData_d__86::*)()>(
    &::GlobalNamespace::OVRTrackedKeyboard__InitializeHandPresenceData_d__86::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d33448;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard__InitializeHandPresenceData_d__86*>::get(),
                                                 "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard__InitializeHandPresenceData_d__86.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRTrackedKeyboard__InitializeHandPresenceData_d__86::*)()>(
    &::GlobalNamespace::OVRTrackedKeyboard__InitializeHandPresenceData_d__86::MoveNext)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x5d3344c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard__InitializeHandPresenceData_d__86*>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard__InitializeHandPresenceData_d__86.System_Collections_Generic_IEnumerator_System_Object__get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::OVRTrackedKeyboard__InitializeHandPresenceData_d__86::*)()>(
    &::GlobalNamespace::OVRTrackedKeyboard__InitializeHandPresenceData_d__86::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d335d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard__InitializeHandPresenceData_d__86*>::get(),
                                    "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard__InitializeHandPresenceData_d__86.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard__InitializeHandPresenceData_d__86::*)()>(
    &::GlobalNamespace::OVRTrackedKeyboard__InitializeHandPresenceData_d__86::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5d335d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard__InitializeHandPresenceData_d__86*>::get(),
                                                 "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard__InitializeHandPresenceData_d__86.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::OVRTrackedKeyboard__InitializeHandPresenceData_d__86::*)()>(
    &::GlobalNamespace::OVRTrackedKeyboard__InitializeHandPresenceData_d__86::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d33610;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard__InitializeHandPresenceData_d__86*>::get(),
                                                 "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::OVRTrackedKeyboard__InitializeHandPresenceData_d__86::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard__InitializeHandPresenceData_d__86*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::OVRTrackedKeyboard__InitializeHandPresenceData_d__86::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard__InitializeHandPresenceData_d__86*>::get(),
                                               "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRTrackedKeyboard__InitializeHandPresenceData_d__86::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard__InitializeHandPresenceData_d__86*>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::OVRTrackedKeyboard__InitializeHandPresenceData_d__86::System_Collections_Generic_IEnumerator_System_Object__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard__InitializeHandPresenceData_d__86*>::get(),
                                  "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRTrackedKeyboard__InitializeHandPresenceData_d__86::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard__InitializeHandPresenceData_d__86*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::OVRTrackedKeyboard__InitializeHandPresenceData_d__86::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard__InitializeHandPresenceData_d__86*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRTrackedKeyboard__InitializeHandPresenceData_d__86* GlobalNamespace::OVRTrackedKeyboard__InitializeHandPresenceData_d__86::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OVRTrackedKeyboard__InitializeHandPresenceData_d__86*>(__1__state));
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard__Start_d__85::*)(int32_t)>(
    &::GlobalNamespace::OVRTrackedKeyboard__Start_d__85::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d319dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard__Start_d__85*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard__Start_d__85.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard__Start_d__85::*)()>(
    &::GlobalNamespace::OVRTrackedKeyboard__Start_d__85::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d33618;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard__Start_d__85*>::get(),
                                                                               "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard__Start_d__85.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRTrackedKeyboard__Start_d__85::*)()>(
    &::GlobalNamespace::OVRTrackedKeyboard__Start_d__85::MoveNext)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x5d3361c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard__Start_d__85*>::get(),
                                                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard__Start_d__85.System_Collections_Generic_IEnumerator_System_Object__get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::OVRTrackedKeyboard__Start_d__85::*)()>(
    &::GlobalNamespace::OVRTrackedKeyboard__Start_d__85::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d3372c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard__Start_d__85*>::get(),
                                    "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard__Start_d__85.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard__Start_d__85::*)()>(
    &::GlobalNamespace::OVRTrackedKeyboard__Start_d__85::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5d33734;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard__Start_d__85*>::get(),
                                                 "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard__Start_d__85.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::OVRTrackedKeyboard__Start_d__85::*)()>(
    &::GlobalNamespace::OVRTrackedKeyboard__Start_d__85::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d3376c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard__Start_d__85*>::get(),
                                                 "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::OVRTrackedKeyboard__Start_d__85::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard__Start_d__85*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::OVRTrackedKeyboard__Start_d__85::System_IDisposable_Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard__Start_d__85*>::get(),
                                                                             "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRTrackedKeyboard__Start_d__85::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard__Start_d__85*>::get(),
                                                                             "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::OVRTrackedKeyboard__Start_d__85::System_Collections_Generic_IEnumerator_System_Object__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard__Start_d__85*>::get(),
                                  "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRTrackedKeyboard__Start_d__85::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard__Start_d__85*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::OVRTrackedKeyboard__Start_d__85::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard__Start_d__85*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRTrackedKeyboard__Start_d__85* GlobalNamespace::OVRTrackedKeyboard__Start_d__85::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OVRTrackedKeyboard__Start_d__85*>(__1__state));
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard__StartKeyboardTrackingCoroutine_d__93::*)(int32_t)>(
    &::GlobalNamespace::OVRTrackedKeyboard__StartKeyboardTrackingCoroutine_d__93::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d3221c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard__StartKeyboardTrackingCoroutine_d__93*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard__StartKeyboardTrackingCoroutine_d__93.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard__StartKeyboardTrackingCoroutine_d__93::*)()>(
    &::GlobalNamespace::OVRTrackedKeyboard__StartKeyboardTrackingCoroutine_d__93::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d33774;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard__StartKeyboardTrackingCoroutine_d__93*>::get(),
                                                 "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard__StartKeyboardTrackingCoroutine_d__93.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRTrackedKeyboard__StartKeyboardTrackingCoroutine_d__93::*)()>(
    &::GlobalNamespace::OVRTrackedKeyboard__StartKeyboardTrackingCoroutine_d__93::MoveNext)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x5d33778;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard__StartKeyboardTrackingCoroutine_d__93*>::get(),
                                                 "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard__StartKeyboardTrackingCoroutine_d__93.System_Collections_Generic_IEnumerator_System_Object__get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::OVRTrackedKeyboard__StartKeyboardTrackingCoroutine_d__93::*)()>(
    &::GlobalNamespace::OVRTrackedKeyboard__StartKeyboardTrackingCoroutine_d__93::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d33a58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard__StartKeyboardTrackingCoroutine_d__93*>::get(),
                                    "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard__StartKeyboardTrackingCoroutine_d__93.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard__StartKeyboardTrackingCoroutine_d__93::*)()>(
    &::GlobalNamespace::OVRTrackedKeyboard__StartKeyboardTrackingCoroutine_d__93::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5d33a60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard__StartKeyboardTrackingCoroutine_d__93*>::get(),
                                                 "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard__StartKeyboardTrackingCoroutine_d__93.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::OVRTrackedKeyboard__StartKeyboardTrackingCoroutine_d__93::*)()>(
    &::GlobalNamespace::OVRTrackedKeyboard__StartKeyboardTrackingCoroutine_d__93::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d33a98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard__StartKeyboardTrackingCoroutine_d__93*>::get(),
                                                 "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::OVRTrackedKeyboard__StartKeyboardTrackingCoroutine_d__93::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard__StartKeyboardTrackingCoroutine_d__93*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::OVRTrackedKeyboard__StartKeyboardTrackingCoroutine_d__93::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard__StartKeyboardTrackingCoroutine_d__93*>::get(),
                                               "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRTrackedKeyboard__StartKeyboardTrackingCoroutine_d__93::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard__StartKeyboardTrackingCoroutine_d__93*>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::OVRTrackedKeyboard__StartKeyboardTrackingCoroutine_d__93::System_Collections_Generic_IEnumerator_System_Object__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard__StartKeyboardTrackingCoroutine_d__93*>::get(),
                                  "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRTrackedKeyboard__StartKeyboardTrackingCoroutine_d__93::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard__StartKeyboardTrackingCoroutine_d__93*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::OVRTrackedKeyboard__StartKeyboardTrackingCoroutine_d__93::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard__StartKeyboardTrackingCoroutine_d__93*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRTrackedKeyboard__StartKeyboardTrackingCoroutine_d__93* GlobalNamespace::OVRTrackedKeyboard__StartKeyboardTrackingCoroutine_d__93::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OVRTrackedKeyboard__StartKeyboardTrackingCoroutine_d__93*>(__1__state));
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard__UpdateKeyboardPose_d__95::*)(int32_t)>(
    &::GlobalNamespace::OVRTrackedKeyboard__UpdateKeyboardPose_d__95::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d325d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard__UpdateKeyboardPose_d__95*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard__UpdateKeyboardPose_d__95.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard__UpdateKeyboardPose_d__95::*)()>(
    &::GlobalNamespace::OVRTrackedKeyboard__UpdateKeyboardPose_d__95::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d33aa0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard__UpdateKeyboardPose_d__95*>::get(),
                                                 "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard__UpdateKeyboardPose_d__95.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRTrackedKeyboard__UpdateKeyboardPose_d__95::*)()>(
    &::GlobalNamespace::OVRTrackedKeyboard__UpdateKeyboardPose_d__95::MoveNext)> {
  constexpr static std::size_t size = 0x988;
  constexpr static std::size_t addrs = 0x5d33aa4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard__UpdateKeyboardPose_d__95*>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard__UpdateKeyboardPose_d__95.System_Collections_Generic_IEnumerator_System_Object__get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::OVRTrackedKeyboard__UpdateKeyboardPose_d__95::*)()>(
    &::GlobalNamespace::OVRTrackedKeyboard__UpdateKeyboardPose_d__95::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d3442c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard__UpdateKeyboardPose_d__95*>::get(),
                                    "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard__UpdateKeyboardPose_d__95.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard__UpdateKeyboardPose_d__95::*)()>(
    &::GlobalNamespace::OVRTrackedKeyboard__UpdateKeyboardPose_d__95::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5d34434;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard__UpdateKeyboardPose_d__95*>::get(),
                                                 "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard__UpdateKeyboardPose_d__95.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::OVRTrackedKeyboard__UpdateKeyboardPose_d__95::*)()>(
    &::GlobalNamespace::OVRTrackedKeyboard__UpdateKeyboardPose_d__95::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d3446c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard__UpdateKeyboardPose_d__95*>::get(),
                                                 "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::OVRTrackedKeyboard__UpdateKeyboardPose_d__95::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard__UpdateKeyboardPose_d__95*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::OVRTrackedKeyboard__UpdateKeyboardPose_d__95::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard__UpdateKeyboardPose_d__95*>::get(),
                                               "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRTrackedKeyboard__UpdateKeyboardPose_d__95::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard__UpdateKeyboardPose_d__95*>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::OVRTrackedKeyboard__UpdateKeyboardPose_d__95::System_Collections_Generic_IEnumerator_System_Object__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard__UpdateKeyboardPose_d__95*>::get(),
                                  "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRTrackedKeyboard__UpdateKeyboardPose_d__95::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard__UpdateKeyboardPose_d__95*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::OVRTrackedKeyboard__UpdateKeyboardPose_d__95::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard__UpdateKeyboardPose_d__95*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRTrackedKeyboard__UpdateKeyboardPose_d__95* GlobalNamespace::OVRTrackedKeyboard__UpdateKeyboardPose_d__95::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OVRTrackedKeyboard__UpdateKeyboardPose_d__95*>(__1__state));
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard__UpdateTrackingStateCoroutine_d__92::*)(int32_t)>(
    &::GlobalNamespace::OVRTrackedKeyboard__UpdateTrackingStateCoroutine_d__92::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d321c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard__UpdateTrackingStateCoroutine_d__92*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard__UpdateTrackingStateCoroutine_d__92.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard__UpdateTrackingStateCoroutine_d__92::*)()>(
    &::GlobalNamespace::OVRTrackedKeyboard__UpdateTrackingStateCoroutine_d__92::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d34474;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard__UpdateTrackingStateCoroutine_d__92*>::get(),
                                                 "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard__UpdateTrackingStateCoroutine_d__92.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRTrackedKeyboard__UpdateTrackingStateCoroutine_d__92::*)()>(
    &::GlobalNamespace::OVRTrackedKeyboard__UpdateTrackingStateCoroutine_d__92::MoveNext)> {
  constexpr static std::size_t size = 0x490;
  constexpr static std::size_t addrs = 0x5d34478;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard__UpdateTrackingStateCoroutine_d__92*>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard__UpdateTrackingStateCoroutine_d__92.System_Collections_Generic_IEnumerator_System_Object__get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::OVRTrackedKeyboard__UpdateTrackingStateCoroutine_d__92::*)()>(
    &::GlobalNamespace::OVRTrackedKeyboard__UpdateTrackingStateCoroutine_d__92::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d34908;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard__UpdateTrackingStateCoroutine_d__92*>::get(),
                                    "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard__UpdateTrackingStateCoroutine_d__92.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard__UpdateTrackingStateCoroutine_d__92::*)()>(
    &::GlobalNamespace::OVRTrackedKeyboard__UpdateTrackingStateCoroutine_d__92::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5d34910;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard__UpdateTrackingStateCoroutine_d__92*>::get(),
                                                 "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard__UpdateTrackingStateCoroutine_d__92.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::OVRTrackedKeyboard__UpdateTrackingStateCoroutine_d__92::*)()>(
    &::GlobalNamespace::OVRTrackedKeyboard__UpdateTrackingStateCoroutine_d__92::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d34948;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard__UpdateTrackingStateCoroutine_d__92*>::get(),
                                                 "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard__UpdateTrackingStateCoroutine_d__92*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::OVRTrackedKeyboard__UpdateTrackingStateCoroutine_d__92::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard__UpdateTrackingStateCoroutine_d__92*>::get(),
                                               "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRTrackedKeyboard__UpdateTrackingStateCoroutine_d__92::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard__UpdateTrackingStateCoroutine_d__92*>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::OVRTrackedKeyboard__UpdateTrackingStateCoroutine_d__92::System_Collections_Generic_IEnumerator_System_Object__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard__UpdateTrackingStateCoroutine_d__92*>::get(),
                                  "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRTrackedKeyboard__UpdateTrackingStateCoroutine_d__92::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard__UpdateTrackingStateCoroutine_d__92*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::OVRTrackedKeyboard__UpdateTrackingStateCoroutine_d__92::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard__UpdateTrackingStateCoroutine_d__92*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRTrackedKeyboard__UpdateTrackingStateCoroutine_d__92* GlobalNamespace::OVRTrackedKeyboard__UpdateTrackingStateCoroutine_d__92::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OVRTrackedKeyboard__UpdateTrackingStateCoroutine_d__92*>(__1__state));
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::OVRTrackedKeyboard::*)()>(
    &::GlobalNamespace::OVRTrackedKeyboard::get_CurrentKeyboardAngleFromUp)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d316a4;

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
  constexpr static std::size_t addrs = 0x5d316ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(), "set_CurrentKeyboardAngleFromUp",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.get_TrackingState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardState (::GlobalNamespace::OVRTrackedKeyboard::*)()>(
    &::GlobalNamespace::OVRTrackedKeyboard::get_TrackingState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d316b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                                                                               "get_TrackingState", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.set_TrackingState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard::*)(::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardState)>(
    &::GlobalNamespace::OVRTrackedKeyboard::set_TrackingState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d316bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(), "set_TrackingState", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardState>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.get_ActiveKeyboardInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRKeyboard_TrackedKeyboardInfo (::GlobalNamespace::OVRTrackedKeyboard::*)()>(
    &::GlobalNamespace::OVRTrackedKeyboard::get_ActiveKeyboardInfo)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5d316c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                                                                               "get_ActiveKeyboardInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.set_ActiveKeyboardInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard::*)(::GlobalNamespace::OVRKeyboard_TrackedKeyboardInfo)>(
    &::GlobalNamespace::OVRTrackedKeyboard::set_ActiveKeyboardInfo)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5d316dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(), "set_ActiveKeyboardInfo", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRKeyboard_TrackedKeyboardInfo>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.get_SystemKeyboardInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRKeyboard_TrackedKeyboardInfo (::GlobalNamespace::OVRTrackedKeyboard::*)()>(
    &::GlobalNamespace::OVRTrackedKeyboard::get_SystemKeyboardInfo)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5d316f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                                                                               "get_SystemKeyboardInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.set_SystemKeyboardInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard::*)(::GlobalNamespace::OVRKeyboard_TrackedKeyboardInfo)>(
    &::GlobalNamespace::OVRTrackedKeyboard::set_SystemKeyboardInfo)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5d31708;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(), "set_SystemKeyboardInfo", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRKeyboard_TrackedKeyboardInfo>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.get_Presentation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRTrackedKeyboard_KeyboardPresentation (::GlobalNamespace::OVRTrackedKeyboard::*)()>(
    &::GlobalNamespace::OVRTrackedKeyboard::get_Presentation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d3171c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                                                                               "get_Presentation", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.set_Presentation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard::*)(::GlobalNamespace::OVRTrackedKeyboard_KeyboardPresentation)>(
    &::GlobalNamespace::OVRTrackedKeyboard::set_Presentation)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5d31724;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(), "set_Presentation", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRTrackedKeyboard_KeyboardPresentation>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.get_TrackingEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRTrackedKeyboard::*)()>(&::GlobalNamespace::OVRTrackedKeyboard::get_TrackingEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d31914;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                                                                               "get_TrackingEnabled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.set_TrackingEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard::*)(bool)>(&::GlobalNamespace::OVRTrackedKeyboard::set_TrackingEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d3191c;

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
  constexpr static std::size_t addrs = 0x5d31924;

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
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d3192c;

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
  constexpr static std::size_t addrs = 0x5d31934;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                                                                               "get_ShowUntracked", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.set_ShowUntracked
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard::*)(bool)>(&::GlobalNamespace::OVRTrackedKeyboard::set_ShowUntracked)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d3193c;

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
  constexpr static std::size_t addrs = 0x5d31944;

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
  constexpr static std::size_t addrs = 0x5d31954;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(), "set_RemoteKeyboard",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.get_KeyboardQueryFlags
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin_TrackedKeyboardQueryFlags (::GlobalNamespace::OVRTrackedKeyboard::*)()>(
    &::GlobalNamespace::OVRTrackedKeyboard::get_KeyboardQueryFlags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d3196c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                                                                               "get_KeyboardQueryFlags", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.set_KeyboardQueryFlags
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard::*)(::GlobalNamespace::OVRPlugin_TrackedKeyboardQueryFlags)>(
    &::GlobalNamespace::OVRTrackedKeyboard::set_KeyboardQueryFlags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d31974;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(), "set_KeyboardQueryFlags", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPlugin_TrackedKeyboardQueryFlags>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.get_PassthroughOverlay
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::GlobalNamespace::OVROverlay> (::GlobalNamespace::OVRTrackedKeyboard::*)()>(
    &::GlobalNamespace::OVRTrackedKeyboard::get_PassthroughOverlay)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d3197c;

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
  constexpr static std::size_t addrs = 0x5d31984;

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
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5d31988;

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
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5d319e4;

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
  constexpr static std::size_t addrs = 0x5d31a40;

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
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x5d31ad8;

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
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5d31d04;

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
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5d32114;

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
  constexpr static std::size_t addrs = 0x5d32158;

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
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5d3216c;

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
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5d321c8;

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
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x5d32224;

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
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5d32580;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                                                                               "UpdateKeyboardPose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.UpdateSkippedPoseTimer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard::*)()>(&::GlobalNamespace::OVRTrackedKeyboard::UpdateSkippedPoseTimer)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5d325dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                                                                               "UpdateSkippedPoseTimer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.LoadKeyboardMesh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard::*)()>(&::GlobalNamespace::OVRTrackedKeyboard::LoadKeyboardMesh)> {
  constexpr static std::size_t size = 0x518;
  constexpr static std::size_t addrs = 0x5d32644;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                                                                               "LoadKeyboardMesh", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.UpdateTextureQuality
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard::*)()>(&::GlobalNamespace::OVRTrackedKeyboard::UpdateTextureQuality)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x5d32e28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                                                                               "UpdateTextureQuality", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.UpdatePresentation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard::*)(bool)>(&::GlobalNamespace::OVRTrackedKeyboard::UpdatePresentation)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x5d317c0;

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
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x5d32b5c;

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
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x5d32f68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                                                                               "UpdateKeyboardVisibility", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.SetKeyboardState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard::*)(::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardState)>(
    &::GlobalNamespace::OVRTrackedKeyboard::SetKeyboardState)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x5d32418;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(), "SetKeyboardState", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardState>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.GetKeyboardVisibility
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRTrackedKeyboard::*)()>(&::GlobalNamespace::OVRTrackedKeyboard::GetKeyboardVisibility)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5d31774;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                                                                               "GetKeyboardVisibility", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTrackedKeyboard.InitializeKeyboardInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRTrackedKeyboard::*)()>(&::GlobalNamespace::OVRTrackedKeyboard::InitializeKeyboardInfo)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5d32528;

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
  constexpr static std::size_t size = 0x3cc;
  constexpr static std::size_t addrs = 0x5d31d48;

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
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5d330b8;

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
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5d33084;

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
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x5d331d0;

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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ProjectedPassthroughMR)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___TrackedKeyboardActiveChanged)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
constexpr ::UnityEngine::Coroutine* const& GlobalNamespace::OVRTrackedKeyboard::__cordl_internal_get_updateKeyboardRoutine_() const {
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
inline ::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardState GlobalNamespace::OVRTrackedKeyboard::get_TrackingState() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(), "get_TrackingState",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardState, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRTrackedKeyboard::set_TrackingState(::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardState value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(), "set_TrackingState", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardState>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::OVRKeyboard_TrackedKeyboardInfo GlobalNamespace::OVRTrackedKeyboard::get_ActiveKeyboardInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                                                                             "get_ActiveKeyboardInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRKeyboard_TrackedKeyboardInfo, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRTrackedKeyboard::set_ActiveKeyboardInfo(::GlobalNamespace::OVRKeyboard_TrackedKeyboardInfo value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(), "set_ActiveKeyboardInfo", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRKeyboard_TrackedKeyboardInfo>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::OVRKeyboard_TrackedKeyboardInfo GlobalNamespace::OVRTrackedKeyboard::get_SystemKeyboardInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                                                                             "get_SystemKeyboardInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRKeyboard_TrackedKeyboardInfo, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRTrackedKeyboard::set_SystemKeyboardInfo(::GlobalNamespace::OVRKeyboard_TrackedKeyboardInfo value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(), "set_SystemKeyboardInfo", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRKeyboard_TrackedKeyboardInfo>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::OVRTrackedKeyboard_KeyboardPresentation GlobalNamespace::OVRTrackedKeyboard::get_Presentation() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(), "get_Presentation",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTrackedKeyboard_KeyboardPresentation, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRTrackedKeyboard::set_Presentation(::GlobalNamespace::OVRTrackedKeyboard_KeyboardPresentation value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(), "set_Presentation", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRTrackedKeyboard_KeyboardPresentation>::get() })));
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
inline ::GlobalNamespace::OVRPlugin_TrackedKeyboardQueryFlags GlobalNamespace::OVRTrackedKeyboard::get_KeyboardQueryFlags() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(),
                                                                             "get_KeyboardQueryFlags", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPlugin_TrackedKeyboardQueryFlags, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRTrackedKeyboard::set_KeyboardQueryFlags(::GlobalNamespace::OVRPlugin_TrackedKeyboardQueryFlags value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(), "set_KeyboardQueryFlags", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPlugin_TrackedKeyboardQueryFlags>::get() })));
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
inline void GlobalNamespace::OVRTrackedKeyboard::SetKeyboardState(::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardState state) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(), "SetKeyboardState", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRTrackedKeyboard_TrackedKeyboardState>::get() })));
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
inline void GlobalNamespace::OVRTrackedKeyboard::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTrackedKeyboard*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRTrackedKeyboard* GlobalNamespace::OVRTrackedKeyboard::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OVRTrackedKeyboard*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRTrackedKeyboard::OVRTrackedKeyboard() {}
