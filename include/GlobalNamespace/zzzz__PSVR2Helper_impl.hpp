#pragma once
// IWYU pragma private; include "GlobalNamespace/PSVR2Helper.hpp"
#include "GlobalNamespace/zzzz__IVRPlatformHelper_impl.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_impl.hpp"
#include "System/Collections/zzzz__IEnumerator_impl.hpp"
#include "System/zzzz__IDisposable_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Pose_impl.hpp"
#include "GlobalNamespace/zzzz__PSVR2Helper_def.hpp"
#include "GlobalNamespace/zzzz__PSVR2Helper_def.hpp"
#include "GlobalNamespace/zzzz__UnityXRController_def.hpp"
#include "GlobalNamespace/zzzz__VRPlatformSDK_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/InputSystem/XR/zzzz__XRControllerWithRumble_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionReference_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputAction_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDeviceChange_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDevice_def.hpp"
#include "UnityEngine/XR/zzzz__XRNode_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PSVR2Helper_HeadsetHapticFrequencyLimit._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PSVR2Helper_HeadsetHapticFrequencyLimit::*)(float_t, int32_t)>(
    &::GlobalNamespace::PSVR2Helper_HeadsetHapticFrequencyLimit::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x39d0060;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper_HeadsetHapticFrequencyLimit>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::PSVR2Helper_HeadsetHapticFrequencyLimit::_ctor(float_t maxTimePlayed, int32_t maximumFrequency) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper_HeadsetHapticFrequencyLimit>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, maxTimePlayed, maximumFrequency);
}
// Ctor Parameters [CppParam { name: "maxTimePlayed", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "maximumFrequency", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::PSVR2Helper_HeadsetHapticFrequencyLimit::PSVR2Helper_HeadsetHapticFrequencyLimit(float_t maxTimePlayed, int32_t maximumFrequency) noexcept {
  this->maxTimePlayed = maxTimePlayed;
  this->maximumFrequency = maximumFrequency;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PSVR2Helper_HeadsetHapticFrequencyLimit::PSVR2Helper_HeadsetHapticFrequencyLimit() {}
//  Writing Method size for method: ::GlobalNamespace::PSVR2Helper___c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PSVR2Helper___c::*)()>(&::GlobalNamespace::PSVR2Helper___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d00c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper___c*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PSVR2Helper___c._HasAnyVRControllerConnected_b__54_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::PSVR2Helper___c::*)(::UnityEngine::InputSystem::InputDevice*)>(
    &::GlobalNamespace::PSVR2Helper___c::_HasAnyVRControllerConnected_b__54_0)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x39d00d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper___c*>::get(), "<HasAnyVRControllerConnected>b__54_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::PSVR2Helper___c::setStaticF___9(::GlobalNamespace::PSVR2Helper___c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::PSVR2Helper___c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper___c*>::get>(
      std::forward<::GlobalNamespace::PSVR2Helper___c*>(value));
}
inline ::GlobalNamespace::PSVR2Helper___c* GlobalNamespace::PSVR2Helper___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::PSVR2Helper___c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper___c*>::get>();
}
inline void GlobalNamespace::PSVR2Helper___c::setStaticF___9__54_0(::System::Func_2<::UnityEngine::InputSystem::InputDevice*, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::InputSystem::InputDevice*, bool>*, "<>9__54_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper___c*>::get>(
      std::forward<::System::Func_2<::UnityEngine::InputSystem::InputDevice*, bool>*>(value));
}
inline ::System::Func_2<::UnityEngine::InputSystem::InputDevice*, bool>* GlobalNamespace::PSVR2Helper___c::getStaticF___9__54_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::InputSystem::InputDevice*, bool>*, "<>9__54_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper___c*>::get>();
}
inline void GlobalNamespace::PSVR2Helper___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper___c*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::PSVR2Helper___c::_HasAnyVRControllerConnected_b__54_0(::UnityEngine::InputSystem::InputDevice* device) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper___c*>::get(), "<HasAnyVRControllerConnected>b__54_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, device);
}
inline ::GlobalNamespace::PSVR2Helper___c* GlobalNamespace::PSVR2Helper___c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::PSVR2Helper___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PSVR2Helper___c::PSVR2Helper___c() {}
//  Writing Method size for method: ::GlobalNamespace::PSVR2Helper__CheckControllerConnectionOnStartup_d__75._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PSVR2Helper__CheckControllerConnectionOnStartup_d__75::*)(int32_t)>(
    &::GlobalNamespace::PSVR2Helper__CheckControllerConnectionOnStartup_d__75::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x39cfe08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper__CheckControllerConnectionOnStartup_d__75*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PSVR2Helper__CheckControllerConnectionOnStartup_d__75.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PSVR2Helper__CheckControllerConnectionOnStartup_d__75::*)()>(
    &::GlobalNamespace::PSVR2Helper__CheckControllerConnectionOnStartup_d__75::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x39d016c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper__CheckControllerConnectionOnStartup_d__75*>::get(),
                                                 "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PSVR2Helper__CheckControllerConnectionOnStartup_d__75.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::PSVR2Helper__CheckControllerConnectionOnStartup_d__75::*)()>(
    &::GlobalNamespace::PSVR2Helper__CheckControllerConnectionOnStartup_d__75::MoveNext)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x39d0170;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper__CheckControllerConnectionOnStartup_d__75*>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PSVR2Helper__CheckControllerConnectionOnStartup_d__75.System_Collections_Generic_IEnumerator_System_Object__get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::PSVR2Helper__CheckControllerConnectionOnStartup_d__75::*)()>(
    &::GlobalNamespace::PSVR2Helper__CheckControllerConnectionOnStartup_d__75::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d0234;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper__CheckControllerConnectionOnStartup_d__75*>::get(),
                                    "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PSVR2Helper__CheckControllerConnectionOnStartup_d__75.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PSVR2Helper__CheckControllerConnectionOnStartup_d__75::*)()>(
    &::GlobalNamespace::PSVR2Helper__CheckControllerConnectionOnStartup_d__75::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x39d023c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper__CheckControllerConnectionOnStartup_d__75*>::get(),
                                                 "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PSVR2Helper__CheckControllerConnectionOnStartup_d__75.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::PSVR2Helper__CheckControllerConnectionOnStartup_d__75::*)()>(
    &::GlobalNamespace::PSVR2Helper__CheckControllerConnectionOnStartup_d__75::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d0274;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper__CheckControllerConnectionOnStartup_d__75*>::get(),
                                                 "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::PSVR2Helper__CheckControllerConnectionOnStartup_d__75::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::PSVR2Helper__CheckControllerConnectionOnStartup_d__75::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void GlobalNamespace::PSVR2Helper__CheckControllerConnectionOnStartup_d__75::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::PSVR2Helper__CheckControllerConnectionOnStartup_d__75::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::PSVR2Helper__CheckControllerConnectionOnStartup_d__75::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void GlobalNamespace::PSVR2Helper__CheckControllerConnectionOnStartup_d__75::__cordl_internal_set___2__current(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::PSVR2Helper__CheckControllerConnectionOnStartup_d__75::__cordl_internal_get_delayInSeconds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___delayInSeconds;
}
constexpr float_t const& GlobalNamespace::PSVR2Helper__CheckControllerConnectionOnStartup_d__75::__cordl_internal_get_delayInSeconds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___delayInSeconds;
}
constexpr void GlobalNamespace::PSVR2Helper__CheckControllerConnectionOnStartup_d__75::__cordl_internal_set_delayInSeconds(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___delayInSeconds = value;
}
constexpr ::UnityW<::GlobalNamespace::PSVR2Helper>& GlobalNamespace::PSVR2Helper__CheckControllerConnectionOnStartup_d__75::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::PSVR2Helper> const& GlobalNamespace::PSVR2Helper__CheckControllerConnectionOnStartup_d__75::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::PSVR2Helper__CheckControllerConnectionOnStartup_d__75::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::PSVR2Helper> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::PSVR2Helper__CheckControllerConnectionOnStartup_d__75::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper__CheckControllerConnectionOnStartup_d__75*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::PSVR2Helper__CheckControllerConnectionOnStartup_d__75::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper__CheckControllerConnectionOnStartup_d__75*>::get(),
                                               "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::PSVR2Helper__CheckControllerConnectionOnStartup_d__75::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper__CheckControllerConnectionOnStartup_d__75*>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::PSVR2Helper__CheckControllerConnectionOnStartup_d__75::System_Collections_Generic_IEnumerator_System_Object__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper__CheckControllerConnectionOnStartup_d__75*>::get(),
                                  "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void GlobalNamespace::PSVR2Helper__CheckControllerConnectionOnStartup_d__75::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper__CheckControllerConnectionOnStartup_d__75*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::PSVR2Helper__CheckControllerConnectionOnStartup_d__75::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper__CheckControllerConnectionOnStartup_d__75*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::PSVR2Helper__CheckControllerConnectionOnStartup_d__75* GlobalNamespace::PSVR2Helper__CheckControllerConnectionOnStartup_d__75::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::PSVR2Helper__CheckControllerConnectionOnStartup_d__75*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr GlobalNamespace::PSVR2Helper__CheckControllerConnectionOnStartup_d__75::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>*
GlobalNamespace::PSVR2Helper__CheckControllerConnectionOnStartup_d__75::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr GlobalNamespace::PSVR2Helper__CheckControllerConnectionOnStartup_d__75::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::PSVR2Helper__CheckControllerConnectionOnStartup_d__75::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::PSVR2Helper__CheckControllerConnectionOnStartup_d__75::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::PSVR2Helper__CheckControllerConnectionOnStartup_d__75::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PSVR2Helper__CheckControllerConnectionOnStartup_d__75::PSVR2Helper__CheckControllerConnectionOnStartup_d__75() {}
//  Writing Method size for method: ::GlobalNamespace::PSVR2Helper.add_controllersDidChangeReferenceEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PSVR2Helper::*)(::System::Action*)>(
    &::GlobalNamespace::PSVR2Helper::add_controllersDidChangeReferenceEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x39ce0b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(), "add_controllersDidChangeReferenceEvent",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PSVR2Helper.remove_controllersDidChangeReferenceEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PSVR2Helper::*)(::System::Action*)>(
    &::GlobalNamespace::PSVR2Helper::remove_controllersDidChangeReferenceEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x39ce154;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(), "remove_controllersDidChangeReferenceEvent",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PSVR2Helper.add_vrControllersDisconnectedOnStartupEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PSVR2Helper::*)(::System::Action*)>(
    &::GlobalNamespace::PSVR2Helper::add_vrControllersDisconnectedOnStartupEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x39ce1f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(), "add_vrControllersDisconnectedOnStartupEvent",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PSVR2Helper.remove_vrControllersDisconnectedOnStartupEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PSVR2Helper::*)(::System::Action*)>(
    &::GlobalNamespace::PSVR2Helper::remove_vrControllersDisconnectedOnStartupEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x39ce28c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(), "remove_vrControllersDisconnectedOnStartupEvent",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PSVR2Helper.get_hasInputFocus
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::PSVR2Helper::*)()>(&::GlobalNamespace::PSVR2Helper::get_hasInputFocus)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39ce328;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(), "get_hasInputFocus",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PSVR2Helper.get_hasVrFocus
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::PSVR2Helper::*)()>(&::GlobalNamespace::PSVR2Helper::get_hasVrFocus)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39ce330;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(), "get_hasVrFocus",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PSVR2Helper.get_isAlwaysWireless
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::PSVR2Helper::*)()>(&::GlobalNamespace::PSVR2Helper::get_isAlwaysWireless)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39ce338;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(), "get_isAlwaysWireless",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PSVR2Helper.get_vrPlatformSDK
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::VRPlatformSDK (::GlobalNamespace::PSVR2Helper::*)()>(
    &::GlobalNamespace::PSVR2Helper::get_vrPlatformSDK)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39ce340;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(), "get_vrPlatformSDK",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PSVR2Helper.add_inputFocusWasCapturedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PSVR2Helper::*)(::System::Action*)>(
    &::GlobalNamespace::PSVR2Helper::add_inputFocusWasCapturedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x39ce348;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(), "add_inputFocusWasCapturedEvent",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PSVR2Helper.remove_inputFocusWasCapturedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PSVR2Helper::*)(::System::Action*)>(
    &::GlobalNamespace::PSVR2Helper::remove_inputFocusWasCapturedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x39ce3e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(), "remove_inputFocusWasCapturedEvent",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PSVR2Helper.add_inputFocusWasReleasedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PSVR2Helper::*)(::System::Action*)>(
    &::GlobalNamespace::PSVR2Helper::add_inputFocusWasReleasedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x39ce480;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(), "add_inputFocusWasReleasedEvent",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PSVR2Helper.remove_inputFocusWasReleasedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PSVR2Helper::*)(::System::Action*)>(
    &::GlobalNamespace::PSVR2Helper::remove_inputFocusWasReleasedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x39ce51c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(), "remove_inputFocusWasReleasedEvent",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PSVR2Helper.add_vrFocusWasCapturedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PSVR2Helper::*)(::System::Action*)>(
    &::GlobalNamespace::PSVR2Helper::add_vrFocusWasCapturedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x39ce5b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(), "add_vrFocusWasCapturedEvent",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PSVR2Helper.remove_vrFocusWasCapturedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PSVR2Helper::*)(::System::Action*)>(
    &::GlobalNamespace::PSVR2Helper::remove_vrFocusWasCapturedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x39ce654;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(), "remove_vrFocusWasCapturedEvent",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PSVR2Helper.add_vrFocusWasReleasedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PSVR2Helper::*)(::System::Action*)>(
    &::GlobalNamespace::PSVR2Helper::add_vrFocusWasReleasedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x39ce6f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(), "add_vrFocusWasReleasedEvent",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PSVR2Helper.remove_vrFocusWasReleasedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PSVR2Helper::*)(::System::Action*)>(
    &::GlobalNamespace::PSVR2Helper::remove_vrFocusWasReleasedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x39ce78c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(), "remove_vrFocusWasReleasedEvent",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PSVR2Helper.add_hmdUnmountedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PSVR2Helper::*)(::System::Action*)>(
    &::GlobalNamespace::PSVR2Helper::add_hmdUnmountedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x39ce828;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(), "add_hmdUnmountedEvent", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PSVR2Helper.remove_hmdUnmountedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PSVR2Helper::*)(::System::Action*)>(
    &::GlobalNamespace::PSVR2Helper::remove_hmdUnmountedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x39ce8c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(), "remove_hmdUnmountedEvent",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PSVR2Helper.add_hmdMountedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PSVR2Helper::*)(::System::Action*)>(&::GlobalNamespace::PSVR2Helper::add_hmdMountedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x39ce960;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(), "add_hmdMountedEvent", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PSVR2Helper.remove_hmdMountedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PSVR2Helper::*)(::System::Action*)>(
    &::GlobalNamespace::PSVR2Helper::remove_hmdMountedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x39ce9fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(), "remove_hmdMountedEvent", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PSVR2Helper.add_controllersDidDisconnectEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PSVR2Helper::*)(::System::Action*)>(
    &::GlobalNamespace::PSVR2Helper::add_controllersDidDisconnectEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x39cea98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(), "add_controllersDidDisconnectEvent",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PSVR2Helper.remove_controllersDidDisconnectEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PSVR2Helper::*)(::System::Action*)>(
    &::GlobalNamespace::PSVR2Helper::remove_controllersDidDisconnectEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x39ceb34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(), "remove_controllersDidDisconnectEvent",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PSVR2Helper.HasAnyVRControllerConnected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::PSVR2Helper::*)()>(&::GlobalNamespace::PSVR2Helper::HasAnyVRControllerConnected)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x39cebd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(),
                                                                               "HasAnyVRControllerConnected", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PSVR2Helper.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PSVR2Helper::*)()>(&::GlobalNamespace::PSVR2Helper::Awake)> {
  constexpr static std::size_t size = 0x324;
  constexpr static std::size_t addrs = 0x39ced2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(), "Awake",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PSVR2Helper.TryGetPoseOffsetForNode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::PSVR2Helper::*)(::UnityEngine::XR::XRNode, ::ByRef<::UnityEngine::Pose>)>(
    &::GlobalNamespace::PSVR2Helper::TryGetPoseOffsetForNode)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x39cf10c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(), "TryGetPoseOffsetForNode", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Pose>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PSVR2Helper.GetNodePose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::PSVR2Helper::*)(
    ::UnityEngine::XR::XRNode, int32_t, ::ByRef<::UnityEngine::Vector3>, ::ByRef<::UnityEngine::Quaternion>)>(&::GlobalNamespace::PSVR2Helper::GetNodePose)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x39cf12c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(), "GetNodePose", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector3>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Quaternion>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PSVR2Helper.GetRootPositionOffsetForLegacyNodePose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Pose (::GlobalNamespace::PSVR2Helper::*)(::UnityEngine::XR::XRNode)>(
    &::GlobalNamespace::PSVR2Helper::GetRootPositionOffsetForLegacyNodePose)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x39cf298;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(), "GetRootPositionOffsetForLegacyNodePose", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PSVR2Helper.TryGetLegacyPoseOffsetForNode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::PSVR2Helper::*)(
    ::UnityEngine::XR::XRNode, ::ByRef<::UnityEngine::Vector3>, ::ByRef<::UnityEngine::Vector3>)>(&::GlobalNamespace::PSVR2Helper::TryGetLegacyPoseOffsetForNode)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x39cf30c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(), "TryGetLegacyPoseOffsetForNode", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector3>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector3>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PSVR2Helper.GetTriggerValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::PSVR2Helper::*)(::UnityEngine::XR::XRNode)>(
    &::GlobalNamespace::PSVR2Helper::GetTriggerValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39cf384;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(), "GetTriggerValue", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PSVR2Helper.GetAnyJoystickMaxAxis
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::GlobalNamespace::PSVR2Helper::*)()>(
    &::GlobalNamespace::PSVR2Helper::GetAnyJoystickMaxAxis)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x39cf38c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(), "GetAnyJoystickMaxAxis",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PSVR2Helper.GetThumbstickValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::GlobalNamespace::PSVR2Helper::*)(::UnityEngine::XR::XRNode)>(
    &::GlobalNamespace::PSVR2Helper::GetThumbstickValue)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x39cf390;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(), "GetThumbstickValue", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PSVR2Helper.IsAdvancedHapticsSupported
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::PSVR2Helper::*)(::UnityEngine::XR::XRNode)>(
    &::GlobalNamespace::PSVR2Helper::IsAdvancedHapticsSupported)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39cf464;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(), "IsAdvancedHapticsSupported", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PSVR2Helper.GetMenuButton
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::PSVR2Helper::*)()>(&::GlobalNamespace::PSVR2Helper::GetMenuButton)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39cf46c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(), "GetMenuButton",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PSVR2Helper.GetMenuButtonDown
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::PSVR2Helper::*)()>(&::GlobalNamespace::PSVR2Helper::GetMenuButtonDown)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39cf474;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(), "GetMenuButtonDown",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PSVR2Helper.RefreshControllersReference
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PSVR2Helper::*)()>(&::GlobalNamespace::PSVR2Helper::RefreshControllersReference)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x39cf47c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(),
                                                                               "RefreshControllersReference", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PSVR2Helper.StopHaptics
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PSVR2Helper::*)(::UnityEngine::XR::XRNode)>(&::GlobalNamespace::PSVR2Helper::StopHaptics)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x39cf498;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(), "StopHaptics", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PSVR2Helper.TriggerHapticPulse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PSVR2Helper::*)(::UnityEngine::XR::XRNode, float_t, float_t, float_t)>(
    &::GlobalNamespace::PSVR2Helper::TriggerHapticPulse)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x39cf49c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(), "TriggerHapticPulse", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 4>{
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PSVR2Helper.GetTRCCompliantHeadsetHapticFrequency
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::PSVR2Helper::*)(float_t)>(
    &::GlobalNamespace::PSVR2Helper::GetTRCCompliantHeadsetHapticFrequency)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x39cf53c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(), "GetTRCCompliantHeadsetHapticFrequency",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PSVR2Helper.HandleApplicationVRFocusLost
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PSVR2Helper::*)()>(&::GlobalNamespace::PSVR2Helper::HandleApplicationVRFocusLost)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x39cf73c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(),
                                                                               "HandleApplicationVRFocusLost", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PSVR2Helper.HandleApplicationVRFocusResumed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PSVR2Helper::*)()>(&::GlobalNamespace::PSVR2Helper::HandleApplicationVRFocusResumed)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x39cf75c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(), "HandleApplicationVRFocusResumed",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PSVR2Helper.HandleApplicationInputFocusLost
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PSVR2Helper::*)()>(&::GlobalNamespace::PSVR2Helper::HandleApplicationInputFocusLost)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x39cf780;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(), "HandleApplicationInputFocusLost",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PSVR2Helper.HandleApplicationInputFocusResumed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PSVR2Helper::*)()>(&::GlobalNamespace::PSVR2Helper::HandleApplicationInputFocusResumed)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x39cf7a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(), "HandleApplicationInputFocusResumed",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PSVR2Helper.InputDeviceChangeTriggered
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PSVR2Helper::*)(
    ::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::InputDeviceChange)>(&::GlobalNamespace::PSVR2Helper::InputDeviceChangeTriggered)> {
  constexpr static std::size_t size = 0x368;
  constexpr static std::size_t addrs = 0x39cf7c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(), "InputDeviceChangeTriggered", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDeviceChange>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PSVR2Helper.CheckControllerConnectionOnStartup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::PSVR2Helper::*)(float_t)>(
    &::GlobalNamespace::PSVR2Helper::CheckControllerConnectionOnStartup)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x39cfd98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(), "CheckControllerConnectionOnStartup",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PSVR2Helper.AddControllerToMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PSVR2Helper::*)(::UnityEngine::XR::XRNode, ::UnityEngine::InputSystem::InputDevice*)>(
    &::GlobalNamespace::PSVR2Helper::AddControllerToMap)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x39cfb2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(), "AddControllerToMap", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PSVR2Helper.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PSVR2Helper::*)()>(&::GlobalNamespace::PSVR2Helper::OnDestroy)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x39cfe30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(), "OnDestroy",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PSVR2Helper.OnPauseGamePerformed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PSVR2Helper::*)(::UnityEngine::InputSystem::InputAction_CallbackContext)>(
    &::GlobalNamespace::PSVR2Helper::OnPauseGamePerformed)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x39cfed4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(), "OnPauseGamePerformed", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction_CallbackContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PSVR2Helper.OnPauseGameCancelled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PSVR2Helper::*)(::UnityEngine::InputSystem::InputAction_CallbackContext)>(
    &::GlobalNamespace::PSVR2Helper::OnPauseGameCancelled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39cfee0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(), "OnPauseGameCancelled", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction_CallbackContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PSVR2Helper.LateUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PSVR2Helper::*)()>(&::GlobalNamespace::PSVR2Helper::LateUpdate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39cfee8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(), "LateUpdate",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PSVR2Helper._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PSVR2Helper::*)()>(&::GlobalNamespace::PSVR2Helper::_ctor)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x39cfef0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::UnityXRController_Configuration*& GlobalNamespace::PSVR2Helper::__cordl_internal_get__leftController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leftController;
}
constexpr ::GlobalNamespace::UnityXRController_Configuration* const& GlobalNamespace::PSVR2Helper::__cordl_internal_get__leftController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leftController;
}
constexpr void GlobalNamespace::PSVR2Helper::__cordl_internal_set__leftController(::GlobalNamespace::UnityXRController_Configuration* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____leftController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::UnityXRController_Configuration*& GlobalNamespace::PSVR2Helper::__cordl_internal_get__rightController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rightController;
}
constexpr ::GlobalNamespace::UnityXRController_Configuration* const& GlobalNamespace::PSVR2Helper::__cordl_internal_get__rightController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rightController;
}
constexpr void GlobalNamespace::PSVR2Helper::__cordl_internal_set__rightController(::GlobalNamespace::UnityXRController_Configuration* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____rightController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& GlobalNamespace::PSVR2Helper::__cordl_internal_get__pauseGameActionReference() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pauseGameActionReference;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& GlobalNamespace::PSVR2Helper::__cordl_internal_get__pauseGameActionReference() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pauseGameActionReference;
}
constexpr void GlobalNamespace::PSVR2Helper::__cordl_internal_set__pauseGameActionReference(::UnityW<::UnityEngine::InputSystem::InputActionReference> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____pauseGameActionReference)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Pose& GlobalNamespace::PSVR2Helper::__cordl_internal_get__defaultPose() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultPose;
}
constexpr ::UnityEngine::Pose const& GlobalNamespace::PSVR2Helper::__cordl_internal_get__defaultPose() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultPose;
}
constexpr void GlobalNamespace::PSVR2Helper::__cordl_internal_set__defaultPose(::UnityEngine::Pose value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____defaultPose = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::XRNode, ::GlobalNamespace::UnityXRController*>*& GlobalNamespace::PSVR2Helper::__cordl_internal_get__controllers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____controllers;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::XRNode, ::GlobalNamespace::UnityXRController*>* const&
GlobalNamespace::PSVR2Helper::__cordl_internal_get__controllers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____controllers;
}
constexpr void GlobalNamespace::PSVR2Helper::__cordl_internal_set__controllers(::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::XRNode, ::GlobalNamespace::UnityXRController*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____controllers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::XRNode, ::UnityEngine::InputSystem::XR::XRControllerWithRumble*>*&
GlobalNamespace::PSVR2Helper::__cordl_internal_get__controllersWithRumble() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____controllersWithRumble;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::XRNode, ::UnityEngine::InputSystem::XR::XRControllerWithRumble*>* const&
GlobalNamespace::PSVR2Helper::__cordl_internal_get__controllersWithRumble() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____controllersWithRumble;
}
constexpr void GlobalNamespace::PSVR2Helper::__cordl_internal_set__controllersWithRumble(
    ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::XRNode, ::UnityEngine::InputSystem::XR::XRControllerWithRumble*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____controllersWithRumble)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::InputSystem::InputAction*& GlobalNamespace::PSVR2Helper::__cordl_internal_get__pauseGameAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pauseGameAction;
}
constexpr ::UnityEngine::InputSystem::InputAction* const& GlobalNamespace::PSVR2Helper::__cordl_internal_get__pauseGameAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pauseGameAction;
}
constexpr void GlobalNamespace::PSVR2Helper::__cordl_internal_set__pauseGameAction(::UnityEngine::InputSystem::InputAction* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____pauseGameAction)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::PSVR2Helper::__cordl_internal_get__timeWhenStartedPlayingHaptic() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timeWhenStartedPlayingHaptic;
}
constexpr float_t const& GlobalNamespace::PSVR2Helper::__cordl_internal_get__timeWhenStartedPlayingHaptic() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timeWhenStartedPlayingHaptic;
}
constexpr void GlobalNamespace::PSVR2Helper::__cordl_internal_set__timeWhenStartedPlayingHaptic(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____timeWhenStartedPlayingHaptic = value;
}
constexpr float_t& GlobalNamespace::PSVR2Helper::__cordl_internal_get__lastTimeWhenTriggeredHaptic() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastTimeWhenTriggeredHaptic;
}
constexpr float_t const& GlobalNamespace::PSVR2Helper::__cordl_internal_get__lastTimeWhenTriggeredHaptic() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastTimeWhenTriggeredHaptic;
}
constexpr void GlobalNamespace::PSVR2Helper::__cordl_internal_set__lastTimeWhenTriggeredHaptic(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lastTimeWhenTriggeredHaptic = value;
}
constexpr bool& GlobalNamespace::PSVR2Helper::__cordl_internal_get__hasInputFocus() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasInputFocus;
}
constexpr bool const& GlobalNamespace::PSVR2Helper::__cordl_internal_get__hasInputFocus() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasInputFocus;
}
constexpr void GlobalNamespace::PSVR2Helper::__cordl_internal_set__hasInputFocus(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hasInputFocus = value;
}
constexpr bool& GlobalNamespace::PSVR2Helper::__cordl_internal_get__menuButtonDown() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____menuButtonDown;
}
constexpr bool const& GlobalNamespace::PSVR2Helper::__cordl_internal_get__menuButtonDown() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____menuButtonDown;
}
constexpr void GlobalNamespace::PSVR2Helper::__cordl_internal_set__menuButtonDown(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____menuButtonDown = value;
}
constexpr bool& GlobalNamespace::PSVR2Helper::__cordl_internal_get__menuButtonDownThisFrame() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____menuButtonDownThisFrame;
}
constexpr bool const& GlobalNamespace::PSVR2Helper::__cordl_internal_get__menuButtonDownThisFrame() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____menuButtonDownThisFrame;
}
constexpr void GlobalNamespace::PSVR2Helper::__cordl_internal_set__menuButtonDownThisFrame(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____menuButtonDownThisFrame = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::PSVR2Helper_HeadsetHapticFrequencyLimit>*& GlobalNamespace::PSVR2Helper::__cordl_internal_get__maximumHapticFrequencyLimits() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maximumHapticFrequencyLimits;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::PSVR2Helper_HeadsetHapticFrequencyLimit>* const&
GlobalNamespace::PSVR2Helper::__cordl_internal_get__maximumHapticFrequencyLimits() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maximumHapticFrequencyLimits;
}
constexpr void
GlobalNamespace::PSVR2Helper::__cordl_internal_set__maximumHapticFrequencyLimits(::System::Collections::Generic::List_1<::GlobalNamespace::PSVR2Helper_HeadsetHapticFrequencyLimit>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____maximumHapticFrequencyLimits)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& GlobalNamespace::PSVR2Helper::__cordl_internal_get_controllersDidChangeReferenceEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___controllersDidChangeReferenceEvent;
}
constexpr ::System::Action* const& GlobalNamespace::PSVR2Helper::__cordl_internal_get_controllersDidChangeReferenceEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___controllersDidChangeReferenceEvent;
}
constexpr void GlobalNamespace::PSVR2Helper::__cordl_internal_set_controllersDidChangeReferenceEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___controllersDidChangeReferenceEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& GlobalNamespace::PSVR2Helper::__cordl_internal_get_vrControllersDisconnectedOnStartupEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___vrControllersDisconnectedOnStartupEvent;
}
constexpr ::System::Action* const& GlobalNamespace::PSVR2Helper::__cordl_internal_get_vrControllersDisconnectedOnStartupEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___vrControllersDisconnectedOnStartupEvent;
}
constexpr void GlobalNamespace::PSVR2Helper::__cordl_internal_set_vrControllersDisconnectedOnStartupEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___vrControllersDisconnectedOnStartupEvent)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::PSVR2Helper::__cordl_internal_get__hasVrFocus() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasVrFocus;
}
constexpr bool const& GlobalNamespace::PSVR2Helper::__cordl_internal_get__hasVrFocus() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasVrFocus;
}
constexpr void GlobalNamespace::PSVR2Helper::__cordl_internal_set__hasVrFocus(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hasVrFocus = value;
}
constexpr ::System::Action*& GlobalNamespace::PSVR2Helper::__cordl_internal_get_inputFocusWasCapturedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inputFocusWasCapturedEvent;
}
constexpr ::System::Action* const& GlobalNamespace::PSVR2Helper::__cordl_internal_get_inputFocusWasCapturedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inputFocusWasCapturedEvent;
}
constexpr void GlobalNamespace::PSVR2Helper::__cordl_internal_set_inputFocusWasCapturedEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___inputFocusWasCapturedEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& GlobalNamespace::PSVR2Helper::__cordl_internal_get_inputFocusWasReleasedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inputFocusWasReleasedEvent;
}
constexpr ::System::Action* const& GlobalNamespace::PSVR2Helper::__cordl_internal_get_inputFocusWasReleasedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inputFocusWasReleasedEvent;
}
constexpr void GlobalNamespace::PSVR2Helper::__cordl_internal_set_inputFocusWasReleasedEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___inputFocusWasReleasedEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& GlobalNamespace::PSVR2Helper::__cordl_internal_get_vrFocusWasCapturedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___vrFocusWasCapturedEvent;
}
constexpr ::System::Action* const& GlobalNamespace::PSVR2Helper::__cordl_internal_get_vrFocusWasCapturedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___vrFocusWasCapturedEvent;
}
constexpr void GlobalNamespace::PSVR2Helper::__cordl_internal_set_vrFocusWasCapturedEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___vrFocusWasCapturedEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& GlobalNamespace::PSVR2Helper::__cordl_internal_get_vrFocusWasReleasedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___vrFocusWasReleasedEvent;
}
constexpr ::System::Action* const& GlobalNamespace::PSVR2Helper::__cordl_internal_get_vrFocusWasReleasedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___vrFocusWasReleasedEvent;
}
constexpr void GlobalNamespace::PSVR2Helper::__cordl_internal_set_vrFocusWasReleasedEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___vrFocusWasReleasedEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& GlobalNamespace::PSVR2Helper::__cordl_internal_get_hmdUnmountedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hmdUnmountedEvent;
}
constexpr ::System::Action* const& GlobalNamespace::PSVR2Helper::__cordl_internal_get_hmdUnmountedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hmdUnmountedEvent;
}
constexpr void GlobalNamespace::PSVR2Helper::__cordl_internal_set_hmdUnmountedEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___hmdUnmountedEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& GlobalNamespace::PSVR2Helper::__cordl_internal_get_hmdMountedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hmdMountedEvent;
}
constexpr ::System::Action* const& GlobalNamespace::PSVR2Helper::__cordl_internal_get_hmdMountedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hmdMountedEvent;
}
constexpr void GlobalNamespace::PSVR2Helper::__cordl_internal_set_hmdMountedEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___hmdMountedEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& GlobalNamespace::PSVR2Helper::__cordl_internal_get_controllersDidDisconnectEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___controllersDidDisconnectEvent;
}
constexpr ::System::Action* const& GlobalNamespace::PSVR2Helper::__cordl_internal_get_controllersDidDisconnectEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___controllersDidDisconnectEvent;
}
constexpr void GlobalNamespace::PSVR2Helper::__cordl_internal_set_controllersDidDisconnectEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___controllersDidDisconnectEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::PSVR2Helper::add_controllersDidChangeReferenceEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(), "add_controllersDidChangeReferenceEvent",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::PSVR2Helper::remove_controllersDidChangeReferenceEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(), "remove_controllersDidChangeReferenceEvent",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::PSVR2Helper::add_vrControllersDisconnectedOnStartupEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(), "add_vrControllersDisconnectedOnStartupEvent",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::PSVR2Helper::remove_vrControllersDisconnectedOnStartupEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(), "remove_vrControllersDisconnectedOnStartupEvent",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool GlobalNamespace::PSVR2Helper::get_hasInputFocus() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(), "get_hasInputFocus",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool GlobalNamespace::PSVR2Helper::get_hasVrFocus() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(), "get_hasVrFocus",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool GlobalNamespace::PSVR2Helper::get_isAlwaysWireless() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(), "get_isAlwaysWireless",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::GlobalNamespace::VRPlatformSDK GlobalNamespace::PSVR2Helper::get_vrPlatformSDK() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(), "get_vrPlatformSDK",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::VRPlatformSDK, false>(this, ___internal_method);
}
inline void GlobalNamespace::PSVR2Helper::add_inputFocusWasCapturedEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(), "add_inputFocusWasCapturedEvent",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::PSVR2Helper::remove_inputFocusWasCapturedEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(), "remove_inputFocusWasCapturedEvent",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::PSVR2Helper::add_inputFocusWasReleasedEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(), "add_inputFocusWasReleasedEvent",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::PSVR2Helper::remove_inputFocusWasReleasedEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(), "remove_inputFocusWasReleasedEvent",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::PSVR2Helper::add_vrFocusWasCapturedEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(), "add_vrFocusWasCapturedEvent",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::PSVR2Helper::remove_vrFocusWasCapturedEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(), "remove_vrFocusWasCapturedEvent",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::PSVR2Helper::add_vrFocusWasReleasedEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(), "add_vrFocusWasReleasedEvent",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::PSVR2Helper::remove_vrFocusWasReleasedEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(), "remove_vrFocusWasReleasedEvent",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::PSVR2Helper::add_hmdUnmountedEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(), "add_hmdUnmountedEvent", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::PSVR2Helper::remove_hmdUnmountedEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(), "remove_hmdUnmountedEvent", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::PSVR2Helper::add_hmdMountedEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(), "add_hmdMountedEvent", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::PSVR2Helper::remove_hmdMountedEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(), "remove_hmdMountedEvent", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::PSVR2Helper::add_controllersDidDisconnectEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(), "add_controllersDidDisconnectEvent",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::PSVR2Helper::remove_controllersDidDisconnectEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(), "remove_controllersDidDisconnectEvent",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool GlobalNamespace::PSVR2Helper::HasAnyVRControllerConnected() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(),
                                                                             "HasAnyVRControllerConnected", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::PSVR2Helper::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(), "Awake",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::PSVR2Helper::TryGetPoseOffsetForNode(::UnityEngine::XR::XRNode node, ::ByRef<::UnityEngine::Pose> poseOffset) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(), "TryGetPoseOffsetForNode", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Pose>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, node, poseOffset);
}
inline bool GlobalNamespace::PSVR2Helper::GetNodePose(::UnityEngine::XR::XRNode nodeType, int32_t idx, ::ByRef<::UnityEngine::Vector3> pos, ::ByRef<::UnityEngine::Quaternion> rot) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(), "GetNodePose", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector3>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Quaternion>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, nodeType, idx, pos, rot);
}
inline ::UnityEngine::Pose GlobalNamespace::PSVR2Helper::GetRootPositionOffsetForLegacyNodePose(::UnityEngine::XR::XRNode node) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(), "GetRootPositionOffsetForLegacyNodePose", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose, false>(this, ___internal_method, node);
}
inline bool GlobalNamespace::PSVR2Helper::TryGetLegacyPoseOffsetForNode(::UnityEngine::XR::XRNode node, ::ByRef<::UnityEngine::Vector3> position, ::ByRef<::UnityEngine::Vector3> rotation) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(), "TryGetLegacyPoseOffsetForNode", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector3>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector3>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, node, position, rotation);
}
inline float_t GlobalNamespace::PSVR2Helper::GetTriggerValue(::UnityEngine::XR::XRNode node) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(), "GetTriggerValue", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, node);
}
inline ::UnityEngine::Vector2 GlobalNamespace::PSVR2Helper::GetAnyJoystickMaxAxis() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(), "GetAnyJoystickMaxAxis",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector2 GlobalNamespace::PSVR2Helper::GetThumbstickValue(::UnityEngine::XR::XRNode nodeType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(), "GetThumbstickValue", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(this, ___internal_method, nodeType);
}
inline bool GlobalNamespace::PSVR2Helper::IsAdvancedHapticsSupported(::UnityEngine::XR::XRNode node) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(), "IsAdvancedHapticsSupported", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, node);
}
inline bool GlobalNamespace::PSVR2Helper::GetMenuButton() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(), "GetMenuButton",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool GlobalNamespace::PSVR2Helper::GetMenuButtonDown() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(), "GetMenuButtonDown",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::PSVR2Helper::RefreshControllersReference() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(),
                                                                             "RefreshControllersReference", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::PSVR2Helper::StopHaptics(::UnityEngine::XR::XRNode node) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(), "StopHaptics", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, node);
}
inline void GlobalNamespace::PSVR2Helper::TriggerHapticPulse(::UnityEngine::XR::XRNode node, float_t duration, float_t strength, float_t frequency) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(), "TriggerHapticPulse", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 4>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, node, duration, strength, frequency);
}
inline int32_t GlobalNamespace::PSVR2Helper::GetTRCCompliantHeadsetHapticFrequency(float_t initialFrequency) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(), "GetTRCCompliantHeadsetHapticFrequency",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, initialFrequency);
}
inline void GlobalNamespace::PSVR2Helper::HandleApplicationVRFocusLost() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(),
                                                                             "HandleApplicationVRFocusLost", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::PSVR2Helper::HandleApplicationVRFocusResumed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(),
                                                                             "HandleApplicationVRFocusResumed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::PSVR2Helper::HandleApplicationInputFocusLost() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(),
                                                                             "HandleApplicationInputFocusLost", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::PSVR2Helper::HandleApplicationInputFocusResumed() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(), "HandleApplicationInputFocusResumed",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::PSVR2Helper::InputDeviceChangeTriggered(::UnityEngine::InputSystem::InputDevice* inputDevice, ::UnityEngine::InputSystem::InputDeviceChange inputDeviceChange) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(), "InputDeviceChangeTriggered", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDeviceChange>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inputDevice, inputDeviceChange);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::PSVR2Helper::CheckControllerConnectionOnStartup(float_t delayInSeconds) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(), "CheckControllerConnectionOnStartup",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method, delayInSeconds);
}
inline void GlobalNamespace::PSVR2Helper::AddControllerToMap(::UnityEngine::XR::XRNode forNode, ::UnityEngine::InputSystem::InputDevice* device) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(), "AddControllerToMap", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, forNode, device);
}
inline void GlobalNamespace::PSVR2Helper::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(), "OnDestroy",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::PSVR2Helper::OnPauseGamePerformed(::UnityEngine::InputSystem::InputAction_CallbackContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(), "OnPauseGamePerformed", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction_CallbackContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context);
}
inline void GlobalNamespace::PSVR2Helper::OnPauseGameCancelled(::UnityEngine::InputSystem::InputAction_CallbackContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(), "OnPauseGameCancelled", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction_CallbackContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context);
}
inline void GlobalNamespace::PSVR2Helper::LateUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(), "LateUpdate",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::PSVR2Helper::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PSVR2Helper*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::PSVR2Helper* GlobalNamespace::PSVR2Helper::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::PSVR2Helper*>());
}
/// @brief Convert operator to "::GlobalNamespace::IVRPlatformHelper"
constexpr GlobalNamespace::PSVR2Helper::operator ::GlobalNamespace::IVRPlatformHelper*() noexcept {
  return static_cast<::GlobalNamespace::IVRPlatformHelper*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IVRPlatformHelper"
constexpr ::GlobalNamespace::IVRPlatformHelper* GlobalNamespace::PSVR2Helper::i___GlobalNamespace__IVRPlatformHelper() noexcept {
  return static_cast<::GlobalNamespace::IVRPlatformHelper*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PSVR2Helper::PSVR2Helper() {}
