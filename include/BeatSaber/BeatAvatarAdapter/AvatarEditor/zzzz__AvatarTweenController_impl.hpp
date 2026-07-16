#pragma once
// IWYU pragma private; include "BeatSaber/BeatAvatarAdapter/AvatarEditor/AvatarTweenController.hpp"
#include "GlobalNamespace/zzzz__EaseType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "BeatSaber/BeatAvatarAdapter/AvatarEditor/zzzz__AvatarTweenController_def.hpp"
#include "BeatSaber/BeatAvatarAdapter/AvatarEditor/zzzz__AvatarTweenController_def.hpp"
#include "GlobalNamespace/zzzz__ICoroutineStarter_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Tweening/zzzz__TimeTweeningManager_def.hpp"
#include "Tweening/zzzz__Tween_1_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__WaitForSeconds_def.hpp"
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController___c__DisplayClass54_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController___c__DisplayClass54_0::*)()>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController___c__DisplayClass54_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x32751dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController___c__DisplayClass54_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController___c__DisplayClass54_0._CreatePopTween_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController___c__DisplayClass54_0::*)(float_t)>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController___c__DisplayClass54_0::_CreatePopTween_b__0)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x3276050;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController___c__DisplayClass54_0*>(),
                                                             { "<CreatePopTween>b__0", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController___c__DisplayClass54_0::__cordl_internal_get_partTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___partTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController___c__DisplayClass54_0::__cordl_internal_get_partTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___partTransform;
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController___c__DisplayClass54_0::__cordl_internal_set_partTransform(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___partTransform = value;
}
constexpr ::UnityEngine::Vector3& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController___c__DisplayClass54_0::__cordl_internal_get_originalScale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___originalScale;
}
constexpr ::UnityEngine::Vector3 const& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController___c__DisplayClass54_0::__cordl_internal_get_originalScale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___originalScale;
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController___c__DisplayClass54_0::__cordl_internal_set_originalScale(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___originalScale = value;
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController___c__DisplayClass54_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController___c__DisplayClass54_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController___c__DisplayClass54_0::_CreatePopTween_b__0(float_t val) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController___c__DisplayClass54_0*>(),
                                                                                         { "<CreatePopTween>b__0", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, val);
}
inline ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController___c__DisplayClass54_0* BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController___c__DisplayClass54_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController___c__DisplayClass54_0*>());
}
// Ctor Parameters []
constexpr ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController___c__DisplayClass54_0::AvatarTweenController___c__DisplayClass54_0() {}
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController__AppearAnimation_d__55._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController__AppearAnimation_d__55::*)(int32_t)>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController__AppearAnimation_d__55::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32751e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController__AppearAnimation_d__55*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController__AppearAnimation_d__55.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController__AppearAnimation_d__55::*)()>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController__AppearAnimation_d__55::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3276084;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController__AppearAnimation_d__55*>(), { "System.IDisposable.Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController__AppearAnimation_d__55.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController__AppearAnimation_d__55::*)()>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController__AppearAnimation_d__55::MoveNext)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x3276088;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController__AppearAnimation_d__55*>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController__AppearAnimation_d__55.System_Collections_Generic_IEnumerator_System_Object__get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController__AppearAnimation_d__55::*)()>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController__AppearAnimation_d__55::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3276290;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController__AppearAnimation_d__55*>(),
                                                             { "System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController__AppearAnimation_d__55.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController__AppearAnimation_d__55::*)()>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController__AppearAnimation_d__55::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x3276298;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController__AppearAnimation_d__55*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController__AppearAnimation_d__55.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController__AppearAnimation_d__55::*)()>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController__AppearAnimation_d__55::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32762d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController__AppearAnimation_d__55*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController__AppearAnimation_d__55::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController__AppearAnimation_d__55::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController__AppearAnimation_d__55::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::System::Object*& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController__AppearAnimation_d__55::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::System::Object* const& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController__AppearAnimation_d__55::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController__AppearAnimation_d__55::__cordl_internal_set___2__current(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____2__current = value;
}
constexpr ::UnityW<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController>&
BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController__AppearAnimation_d__55::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController> const&
BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController__AppearAnimation_d__55::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController__AppearAnimation_d__55::__cordl_internal_set___4__this(
    ::UnityW<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
constexpr ::UnityEngine::WaitForSeconds*& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController__AppearAnimation_d__55::__cordl_internal_get__waitYieldInstruction_5__2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____waitYieldInstruction_5__2;
}
constexpr ::UnityEngine::WaitForSeconds* const& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController__AppearAnimation_d__55::__cordl_internal_get__waitYieldInstruction_5__2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____waitYieldInstruction_5__2;
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController__AppearAnimation_d__55::__cordl_internal_set__waitYieldInstruction_5__2(::UnityEngine::WaitForSeconds* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____waitYieldInstruction_5__2 = value;
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController__AppearAnimation_d__55::_ctor(int32_t __1__state) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController__AppearAnimation_d__55*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController__AppearAnimation_d__55::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController__AppearAnimation_d__55*>(), { "System.IDisposable.Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController__AppearAnimation_d__55::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController__AppearAnimation_d__55*>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController__AppearAnimation_d__55::System_Collections_Generic_IEnumerator_System_Object__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController__AppearAnimation_d__55*>(),
                                                                                         { "System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController__AppearAnimation_d__55::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController__AppearAnimation_d__55*>(),
                                                                                         { "System.Collections.IEnumerator.Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController__AppearAnimation_d__55::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController__AppearAnimation_d__55*>(),
                                                                                         { "System.Collections.IEnumerator.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController__AppearAnimation_d__55*
BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController__AppearAnimation_d__55::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController__AppearAnimation_d__55*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController__AppearAnimation_d__55::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>*
BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController__AppearAnimation_d__55::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController__AppearAnimation_d__55::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController__AppearAnimation_d__55::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController__AppearAnimation_d__55::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController__AppearAnimation_d__55::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController__AppearAnimation_d__55::AvatarTweenController__AppearAnimation_d__55() {}
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController__DisappearAnimation_d__60._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController__DisappearAnimation_d__60::*)(int32_t)>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController__DisappearAnimation_d__60::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3275f08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController__DisappearAnimation_d__60*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController__DisappearAnimation_d__60.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController__DisappearAnimation_d__60::*)()>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController__DisappearAnimation_d__60::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x32762d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController__DisappearAnimation_d__60*>(), { "System.IDisposable.Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController__DisappearAnimation_d__60.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController__DisappearAnimation_d__60::*)()>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController__DisappearAnimation_d__60::MoveNext)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0x32762dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController__DisappearAnimation_d__60*>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController__DisappearAnimation_d__60.System_Collections_Generic_IEnumerator_System_Object__get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController__DisappearAnimation_d__60::*)()>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController__DisappearAnimation_d__60::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32765e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController__DisappearAnimation_d__60*>(),
                                                             { "System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController__DisappearAnimation_d__60.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController__DisappearAnimation_d__60::*)()>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController__DisappearAnimation_d__60::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x32765e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController__DisappearAnimation_d__60*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController__DisappearAnimation_d__60.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController__DisappearAnimation_d__60::*)()>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController__DisappearAnimation_d__60::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3276620;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController__DisappearAnimation_d__60*>(),
                                                             { "System.Collections.IEnumerator.get_Current", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController__DisappearAnimation_d__60::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController__DisappearAnimation_d__60::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController__DisappearAnimation_d__60::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::System::Object*& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController__DisappearAnimation_d__60::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::System::Object* const& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController__DisappearAnimation_d__60::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController__DisappearAnimation_d__60::__cordl_internal_set___2__current(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____2__current = value;
}
constexpr ::UnityW<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController>&
BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController__DisappearAnimation_d__60::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController> const&
BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController__DisappearAnimation_d__60::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController__DisappearAnimation_d__60::__cordl_internal_set___4__this(
    ::UnityW<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController__DisappearAnimation_d__60::_ctor(int32_t __1__state) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController__DisappearAnimation_d__60*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController__DisappearAnimation_d__60::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController__DisappearAnimation_d__60*>(), { "System.IDisposable.Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController__DisappearAnimation_d__60::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController__DisappearAnimation_d__60*>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController__DisappearAnimation_d__60::System_Collections_Generic_IEnumerator_System_Object__get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController__DisappearAnimation_d__60*>(),
                                                           { "System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController__DisappearAnimation_d__60::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController__DisappearAnimation_d__60*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController__DisappearAnimation_d__60::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController__DisappearAnimation_d__60*>(),
                                                           { "System.Collections.IEnumerator.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController__DisappearAnimation_d__60*
BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController__DisappearAnimation_d__60::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController__DisappearAnimation_d__60*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController__DisappearAnimation_d__60::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>*
BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController__DisappearAnimation_d__60::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController__DisappearAnimation_d__60::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController__DisappearAnimation_d__60::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController__DisappearAnimation_d__60::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController__DisappearAnimation_d__60::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController__DisappearAnimation_d__60::AvatarTweenController__DisappearAnimation_d__60() {}
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::*)()>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::Awake)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x3274d08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>(), { "Awake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController.OnDisable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::*)()>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::OnDisable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3274d54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>(), { "OnDisable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::*)()>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::OnDestroy)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3274df0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController.PresentAvatar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::*)()>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::PresentAvatar)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x3272068;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>(), { "PresentAvatar", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController.HideAvatar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::*)()>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::HideAvatar)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x3272998;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>(), { "HideAvatar", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController.PopAll
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::*)()>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::PopAll)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x3274e9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>(), { "PopAll", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController.PopHead
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::*)()>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::PopHead)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x327502c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>(), { "PopHead", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController.PopHands
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::*)()>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::PopHands)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3275034;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>(), { "PopHands", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController.PopClothes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::*)()>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::PopClothes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x327503c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>(), { "PopClothes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController.PopHead
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::*)(float_t)>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::PopHead)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x3274ec8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>(), { "PopHead", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController.PopHands
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::*)(float_t)>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::PopHands)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x3274f88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>(), { "PopHands", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController.PopClothes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::*)(float_t)>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::PopClothes)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x3274f28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>(), { "PopClothes", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController.CreatePopTween
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Tweening::Tween_1<float_t>* (::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::*)(::UnityEngine::Transform*, float_t)>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::CreatePopTween)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x3275044;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>(),
                                                                                           { "CreatePopTween", {}, { ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController.AppearAnimation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::*)()>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::AppearAnimation)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x3274df4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>(), { "AppearAnimation", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController.AppearBody
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::*)()>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::AppearBody)> {
  constexpr static std::size_t size = 0x344;
  constexpr static std::size_t addrs = 0x32751e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>(), { "AppearBody", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController.AppearHead
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::*)()>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::AppearHead)> {
  constexpr static std::size_t size = 0x344;
  constexpr static std::size_t addrs = 0x327552c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>(), { "AppearHead", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController.AppearLeftHand
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::*)()>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::AppearLeftHand)> {
  constexpr static std::size_t size = 0x34c;
  constexpr static std::size_t addrs = 0x3275870;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>(), { "AppearLeftHand", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController.AppearRightHand
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::*)()>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::AppearRightHand)> {
  constexpr static std::size_t size = 0x34c;
  constexpr static std::size_t addrs = 0x3275bbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>(), { "AppearRightHand", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController.DisappearAnimation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::*)()>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::DisappearAnimation)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x3274e48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>(), { "DisappearAnimation", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController.StopAll
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::*)()>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::StopAll)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x3274d58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>(), { "StopAll", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::*)()>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x3275f10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController._AppearBody_b__56_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::*)(::UnityEngine::Vector3)>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::_AppearBody_b__56_0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3275f60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>(),
                                                                                           { "<AppearBody>b__56_0", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController._AppearBody_b__56_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::*)(::UnityEngine::Vector3)>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::_AppearBody_b__56_1)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3275f78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>(),
                                                                                           { "<AppearBody>b__56_1", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController._AppearHead_b__57_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::*)(::UnityEngine::Vector3)>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::_AppearHead_b__57_0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3275f90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>(),
                                                                                           { "<AppearHead>b__57_0", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController._AppearHead_b__57_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::*)(::UnityEngine::Vector3)>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::_AppearHead_b__57_1)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3275fa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>(),
                                                                                           { "<AppearHead>b__57_1", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController._AppearLeftHand_b__58_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::*)(::UnityEngine::Vector3)>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::_AppearLeftHand_b__58_0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3275fc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>(),
                                                                                           { "<AppearLeftHand>b__58_0", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController._AppearLeftHand_b__58_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::*)(::UnityEngine::Vector3)>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::_AppearLeftHand_b__58_1)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3275fd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>(),
                                                                                           { "<AppearLeftHand>b__58_1", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController._AppearRightHand_b__59_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::*)(::UnityEngine::Vector3)>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::_AppearRightHand_b__59_0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3275ff0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>(),
                                                                                           { "<AppearRightHand>b__59_0", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController._AppearRightHand_b__59_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::*)(::UnityEngine::Vector3)>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::_AppearRightHand_b__59_1)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3276008;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>(),
                                                                                           { "<AppearRightHand>b__59_1", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController._DisappearAnimation_b__60_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::*)(::UnityEngine::Vector3)>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::_DisappearAnimation_b__60_0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3276020;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>(),
                                                                                           { "<DisappearAnimation>b__60_0", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController._DisappearAnimation_b__60_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::*)(::UnityEngine::Vector3)>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::_DisappearAnimation_b__60_1)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3276038;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>(),
                                                                                           { "<DisappearAnimation>b__60_1", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__cordl_internal_get__avatarTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__cordl_internal_get__avatarTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarTransform;
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__cordl_internal_set__avatarTransform(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____avatarTransform = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__cordl_internal_get__headParent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headParent;
}
constexpr ::UnityW<::UnityEngine::Transform> const& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__cordl_internal_get__headParent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headParent;
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__cordl_internal_set__headParent(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____headParent = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__cordl_internal_get__leftHandTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leftHandTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__cordl_internal_get__leftHandTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leftHandTransform;
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__cordl_internal_set__leftHandTransform(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____leftHandTransform = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__cordl_internal_get__rightHandTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rightHandTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__cordl_internal_get__rightHandTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rightHandTransform;
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__cordl_internal_set__rightHandTransform(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rightHandTransform = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__cordl_internal_get__bodyTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bodyTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__cordl_internal_get__bodyTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bodyTransform;
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__cordl_internal_set__bodyTransform(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bodyTransform = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__cordl_internal_get__headInnerTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headInnerTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__cordl_internal_get__headInnerTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headInnerTransform;
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__cordl_internal_set__headInnerTransform(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____headInnerTransform = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__cordl_internal_get__leftHandInnerTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leftHandInnerTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__cordl_internal_get__leftHandInnerTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leftHandInnerTransform;
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__cordl_internal_set__leftHandInnerTransform(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____leftHandInnerTransform = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__cordl_internal_get__rightHandInnerTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rightHandInnerTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__cordl_internal_get__rightHandInnerTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rightHandInnerTransform;
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__cordl_internal_set__rightHandInnerTransform(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rightHandInnerTransform = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__cordl_internal_get__bodyInnerTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bodyInnerTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__cordl_internal_get__bodyInnerTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bodyInnerTransform;
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__cordl_internal_set__bodyInnerTransform(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bodyInnerTransform = value;
}
constexpr float_t& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__cordl_internal_get__popDuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____popDuration;
}
constexpr float_t const& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__cordl_internal_get__popDuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____popDuration;
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__cordl_internal_set__popDuration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____popDuration = value;
}
constexpr ::GlobalNamespace::EaseType& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__cordl_internal_get__popEaseType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____popEaseType;
}
constexpr ::GlobalNamespace::EaseType const& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__cordl_internal_get__popEaseType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____popEaseType;
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__cordl_internal_set__popEaseType(::GlobalNamespace::EaseType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____popEaseType = value;
}
constexpr float_t& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__cordl_internal_get__headPopAmount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headPopAmount;
}
constexpr float_t const& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__cordl_internal_get__headPopAmount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headPopAmount;
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__cordl_internal_set__headPopAmount(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____headPopAmount = value;
}
constexpr float_t& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__cordl_internal_get__handsPopAmount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____handsPopAmount;
}
constexpr float_t const& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__cordl_internal_get__handsPopAmount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____handsPopAmount;
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__cordl_internal_set__handsPopAmount(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____handsPopAmount = value;
}
constexpr float_t& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__cordl_internal_get__clothesPopAmount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clothesPopAmount;
}
constexpr float_t const& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__cordl_internal_get__clothesPopAmount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clothesPopAmount;
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__cordl_internal_set__clothesPopAmount(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____clothesPopAmount = value;
}
constexpr float_t& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__cordl_internal_get__allPopAmount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allPopAmount;
}
constexpr float_t const& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__cordl_internal_get__allPopAmount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allPopAmount;
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__cordl_internal_set__allPopAmount(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____allPopAmount = value;
}
constexpr float_t& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__cordl_internal_get__appearDuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____appearDuration;
}
constexpr float_t const& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__cordl_internal_get__appearDuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____appearDuration;
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__cordl_internal_set__appearDuration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____appearDuration = value;
}
constexpr float_t& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__cordl_internal_get__appearSpacing() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____appearSpacing;
}
constexpr float_t const& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__cordl_internal_get__appearSpacing() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____appearSpacing;
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__cordl_internal_set__appearSpacing(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____appearSpacing = value;
}
constexpr float_t& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__cordl_internal_get__appearHeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____appearHeight;
}
constexpr float_t const& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__cordl_internal_get__appearHeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____appearHeight;
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__cordl_internal_set__appearHeight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____appearHeight = value;
}
constexpr ::UnityEngine::Vector3& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__cordl_internal_get__squashFactor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____squashFactor;
}
constexpr ::UnityEngine::Vector3 const& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__cordl_internal_get__squashFactor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____squashFactor;
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__cordl_internal_set__squashFactor(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____squashFactor = value;
}
constexpr float_t& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__cordl_internal_get__disappearDuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disappearDuration;
}
constexpr float_t const& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__cordl_internal_get__disappearDuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disappearDuration;
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__cordl_internal_set__disappearDuration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____disappearDuration = value;
}
constexpr float_t& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__cordl_internal_get__disappearHeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disappearHeight;
}
constexpr float_t const& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__cordl_internal_get__disappearHeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disappearHeight;
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__cordl_internal_set__disappearHeight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____disappearHeight = value;
}
constexpr ::UnityEngine::Vector3& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__cordl_internal_get__disappearSquash() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disappearSquash;
}
constexpr ::UnityEngine::Vector3 const& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__cordl_internal_get__disappearSquash() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disappearSquash;
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__cordl_internal_set__disappearSquash(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____disappearSquash = value;
}
constexpr ::GlobalNamespace::EaseType& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__cordl_internal_get__disappearScaleEase() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disappearScaleEase;
}
constexpr ::GlobalNamespace::EaseType const& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__cordl_internal_get__disappearScaleEase() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disappearScaleEase;
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__cordl_internal_set__disappearScaleEase(::GlobalNamespace::EaseType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____disappearScaleEase = value;
}
constexpr ::GlobalNamespace::EaseType& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__cordl_internal_get__disappearPositionEase() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disappearPositionEase;
}
constexpr ::GlobalNamespace::EaseType const& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__cordl_internal_get__disappearPositionEase() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disappearPositionEase;
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__cordl_internal_set__disappearPositionEase(::GlobalNamespace::EaseType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____disappearPositionEase = value;
}
constexpr ::UnityW<::Tweening::TimeTweeningManager>& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__cordl_internal_get__tweeningManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tweeningManager;
}
constexpr ::UnityW<::Tweening::TimeTweeningManager> const& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__cordl_internal_get__tweeningManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tweeningManager;
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__cordl_internal_set__tweeningManager(::UnityW<::Tweening::TimeTweeningManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____tweeningManager = value;
}
constexpr ::GlobalNamespace::ICoroutineStarter*& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__cordl_internal_get__sharedCoroutineStarter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sharedCoroutineStarter;
}
constexpr ::GlobalNamespace::ICoroutineStarter* const& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__cordl_internal_get__sharedCoroutineStarter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sharedCoroutineStarter;
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__cordl_internal_set__sharedCoroutineStarter(::GlobalNamespace::ICoroutineStarter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sharedCoroutineStarter = value;
}
constexpr ::Tweening::Tween_1<float_t>*& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__cordl_internal_get__popHeadTween() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____popHeadTween;
}
constexpr ::Tweening::Tween_1<float_t>* const& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__cordl_internal_get__popHeadTween() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____popHeadTween;
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__cordl_internal_set__popHeadTween(::Tweening::Tween_1<float_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____popHeadTween = value;
}
constexpr ::Tweening::Tween_1<float_t>*& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__cordl_internal_get__popLeftHandTween() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____popLeftHandTween;
}
constexpr ::Tweening::Tween_1<float_t>* const& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__cordl_internal_get__popLeftHandTween() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____popLeftHandTween;
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__cordl_internal_set__popLeftHandTween(::Tweening::Tween_1<float_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____popLeftHandTween = value;
}
constexpr ::Tweening::Tween_1<float_t>*& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__cordl_internal_get__popRightHandTween() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____popRightHandTween;
}
constexpr ::Tweening::Tween_1<float_t>* const& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__cordl_internal_get__popRightHandTween() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____popRightHandTween;
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__cordl_internal_set__popRightHandTween(::Tweening::Tween_1<float_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____popRightHandTween = value;
}
constexpr ::Tweening::Tween_1<float_t>*& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__cordl_internal_get__popClothesTween() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____popClothesTween;
}
constexpr ::Tweening::Tween_1<float_t>* const& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__cordl_internal_get__popClothesTween() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____popClothesTween;
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__cordl_internal_set__popClothesTween(::Tweening::Tween_1<float_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____popClothesTween = value;
}
constexpr ::Tweening::Tween_1<::UnityEngine::Vector3>*& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__cordl_internal_get__appearHeadPositionTween() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____appearHeadPositionTween;
}
constexpr ::Tweening::Tween_1<::UnityEngine::Vector3>* const& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__cordl_internal_get__appearHeadPositionTween() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____appearHeadPositionTween;
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__cordl_internal_set__appearHeadPositionTween(::Tweening::Tween_1<::UnityEngine::Vector3>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____appearHeadPositionTween = value;
}
constexpr ::Tweening::Tween_1<::UnityEngine::Vector3>*& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__cordl_internal_get__appearHeadScaleTween() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____appearHeadScaleTween;
}
constexpr ::Tweening::Tween_1<::UnityEngine::Vector3>* const& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__cordl_internal_get__appearHeadScaleTween() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____appearHeadScaleTween;
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__cordl_internal_set__appearHeadScaleTween(::Tweening::Tween_1<::UnityEngine::Vector3>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____appearHeadScaleTween = value;
}
constexpr ::Tweening::Tween_1<::UnityEngine::Vector3>*& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__cordl_internal_get__appearBodyPositionTween() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____appearBodyPositionTween;
}
constexpr ::Tweening::Tween_1<::UnityEngine::Vector3>* const& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__cordl_internal_get__appearBodyPositionTween() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____appearBodyPositionTween;
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__cordl_internal_set__appearBodyPositionTween(::Tweening::Tween_1<::UnityEngine::Vector3>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____appearBodyPositionTween = value;
}
constexpr ::Tweening::Tween_1<::UnityEngine::Vector3>*& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__cordl_internal_get__appearBodyScaleTween() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____appearBodyScaleTween;
}
constexpr ::Tweening::Tween_1<::UnityEngine::Vector3>* const& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__cordl_internal_get__appearBodyScaleTween() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____appearBodyScaleTween;
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__cordl_internal_set__appearBodyScaleTween(::Tweening::Tween_1<::UnityEngine::Vector3>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____appearBodyScaleTween = value;
}
constexpr ::Tweening::Tween_1<::UnityEngine::Vector3>*& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__cordl_internal_get__appearRightHandPositionTween() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____appearRightHandPositionTween;
}
constexpr ::Tweening::Tween_1<::UnityEngine::Vector3>* const& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__cordl_internal_get__appearRightHandPositionTween() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____appearRightHandPositionTween;
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__cordl_internal_set__appearRightHandPositionTween(::Tweening::Tween_1<::UnityEngine::Vector3>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____appearRightHandPositionTween = value;
}
constexpr ::Tweening::Tween_1<::UnityEngine::Vector3>*& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__cordl_internal_get__appearRightHandScaleTween() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____appearRightHandScaleTween;
}
constexpr ::Tweening::Tween_1<::UnityEngine::Vector3>* const& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__cordl_internal_get__appearRightHandScaleTween() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____appearRightHandScaleTween;
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__cordl_internal_set__appearRightHandScaleTween(::Tweening::Tween_1<::UnityEngine::Vector3>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____appearRightHandScaleTween = value;
}
constexpr ::Tweening::Tween_1<::UnityEngine::Vector3>*& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__cordl_internal_get__appearLeftHandPositionTween() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____appearLeftHandPositionTween;
}
constexpr ::Tweening::Tween_1<::UnityEngine::Vector3>* const& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__cordl_internal_get__appearLeftHandPositionTween() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____appearLeftHandPositionTween;
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__cordl_internal_set__appearLeftHandPositionTween(::Tweening::Tween_1<::UnityEngine::Vector3>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____appearLeftHandPositionTween = value;
}
constexpr ::Tweening::Tween_1<::UnityEngine::Vector3>*& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__cordl_internal_get__appearLeftHandScaleTween() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____appearLeftHandScaleTween;
}
constexpr ::Tweening::Tween_1<::UnityEngine::Vector3>* const& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__cordl_internal_get__appearLeftHandScaleTween() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____appearLeftHandScaleTween;
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__cordl_internal_set__appearLeftHandScaleTween(::Tweening::Tween_1<::UnityEngine::Vector3>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____appearLeftHandScaleTween = value;
}
constexpr ::Tweening::Tween_1<::UnityEngine::Vector3>*& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__cordl_internal_get__disappearScaleTween() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disappearScaleTween;
}
constexpr ::Tweening::Tween_1<::UnityEngine::Vector3>* const& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__cordl_internal_get__disappearScaleTween() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disappearScaleTween;
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__cordl_internal_set__disappearScaleTween(::Tweening::Tween_1<::UnityEngine::Vector3>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____disappearScaleTween = value;
}
constexpr ::Tweening::Tween_1<::UnityEngine::Vector3>*& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__cordl_internal_get__disappearPositionTween() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disappearPositionTween;
}
constexpr ::Tweening::Tween_1<::UnityEngine::Vector3>* const& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__cordl_internal_get__disappearPositionTween() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disappearPositionTween;
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__cordl_internal_set__disappearPositionTween(::Tweening::Tween_1<::UnityEngine::Vector3>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____disappearPositionTween = value;
}
constexpr ::UnityEngine::Vector3& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__cordl_internal_get__avatarLocalPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarLocalPosition;
}
constexpr ::UnityEngine::Vector3 const& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__cordl_internal_get__avatarLocalPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarLocalPosition;
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__cordl_internal_set__avatarLocalPosition(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____avatarLocalPosition = value;
}
constexpr ::UnityEngine::Vector3& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__cordl_internal_get__avatarLocalScale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarLocalScale;
}
constexpr ::UnityEngine::Vector3 const& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__cordl_internal_get__avatarLocalScale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarLocalScale;
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__cordl_internal_set__avatarLocalScale(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____avatarLocalScale = value;
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::Awake() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>(), { "Awake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::OnDisable() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>(), { "OnDisable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::OnDestroy() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::PresentAvatar() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>(), { "PresentAvatar", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::HideAvatar() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>(), { "HideAvatar", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::PopAll() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>(), { "PopAll", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::PopHead() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>(), { "PopHead", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::PopHands() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>(), { "PopHands", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::PopClothes() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>(), { "PopClothes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::PopHead(float_t popAmount) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>(), { "PopHead", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, popAmount);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::PopHands(float_t popAmount) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>(), { "PopHands", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, popAmount);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::PopClothes(float_t popAmount) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>(), { "PopClothes", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, popAmount);
}
inline ::Tweening::Tween_1<float_t>* BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::CreatePopTween(::UnityEngine::Transform* partTransform, float_t popAmount) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>(),
                                                                                         { "CreatePopTween", {}, { ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Tweening::Tween_1<float_t>*>(this, ___internal_method, partTransform, popAmount);
}
inline ::System::Collections::IEnumerator* BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::AppearAnimation() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>(), { "AppearAnimation", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::AppearBody() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>(), { "AppearBody", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::AppearHead() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>(), { "AppearHead", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::AppearLeftHand() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>(), { "AppearLeftHand", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::AppearRightHand() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>(), { "AppearRightHand", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::DisappearAnimation() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>(), { "DisappearAnimation", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::StopAll() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>(), { "StopAll", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::_AppearBody_b__56_0(::UnityEngine::Vector3 val) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>(),
                                                                                         { "<AppearBody>b__56_0", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, val);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::_AppearBody_b__56_1(::UnityEngine::Vector3 val) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>(),
                                                                                         { "<AppearBody>b__56_1", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, val);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::_AppearHead_b__57_0(::UnityEngine::Vector3 val) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>(),
                                                                                         { "<AppearHead>b__57_0", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, val);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::_AppearHead_b__57_1(::UnityEngine::Vector3 val) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>(),
                                                                                         { "<AppearHead>b__57_1", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, val);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::_AppearLeftHand_b__58_0(::UnityEngine::Vector3 val) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>(),
                                                                                         { "<AppearLeftHand>b__58_0", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, val);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::_AppearLeftHand_b__58_1(::UnityEngine::Vector3 val) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>(),
                                                                                         { "<AppearLeftHand>b__58_1", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, val);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::_AppearRightHand_b__59_0(::UnityEngine::Vector3 val) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>(),
                                                                                         { "<AppearRightHand>b__59_0", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, val);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::_AppearRightHand_b__59_1(::UnityEngine::Vector3 val) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>(),
                                                                                         { "<AppearRightHand>b__59_1", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, val);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::_DisappearAnimation_b__60_0(::UnityEngine::Vector3 val) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>(),
                                                                                         { "<DisappearAnimation>b__60_0", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, val);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::_DisappearAnimation_b__60_1(::UnityEngine::Vector3 val) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>(),
                                                                                         { "<DisappearAnimation>b__60_1", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, val);
}
inline ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController* BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>());
}
// Ctor Parameters []
constexpr ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::AvatarTweenController() {}
