#pragma once
// IWYU pragma private; include "HMUI/ContainerViewController.hpp"
#include "HMUI/zzzz__ViewController_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "HMUI/zzzz__ContainerViewController_def.hpp"
#include "HMUI/zzzz__ContainerViewController_def.hpp"
#include "HMUI/zzzz__Screen_def.hpp"
#include "HMUI/zzzz__ViewController_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Action_3_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
//  Writing Method size for method: ::HMUI::ContainerViewController___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ContainerViewController___c::*)()>(&::HMUI::ContainerViewController___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x32eeb08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ContainerViewController___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ContainerViewController___c._IsChildInTransition_b__14_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::HMUI::ContainerViewController___c::*)(::HMUI::ViewController*)>(&::HMUI::ContainerViewController___c::_IsChildInTransition_b__14_0)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x32eeb0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ContainerViewController___c*>(), { "<IsChildInTransition>b__14_0", {}, { ::i2c::type_of<::HMUI::ViewController*>() } })));
    return ___internal_method;
  }
};
inline void HMUI::ContainerViewController___c::setStaticF___9(::HMUI::ContainerViewController___c* value) {
  ::cordl_internals::setStaticField<::HMUI::ContainerViewController___c*, "<>9", ::HMUI::ContainerViewController___c*>(std::forward<::HMUI::ContainerViewController___c*>(value));
}
inline ::HMUI::ContainerViewController___c* HMUI::ContainerViewController___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::HMUI::ContainerViewController___c*, "<>9", ::HMUI::ContainerViewController___c*>();
}
inline void HMUI::ContainerViewController___c::setStaticF___9__14_0(::System::Func_2<::UnityW<::HMUI::ViewController>, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityW<::HMUI::ViewController>, bool>*, "<>9__14_0", ::HMUI::ContainerViewController___c*>(
      std::forward<::System::Func_2<::UnityW<::HMUI::ViewController>, bool>*>(value));
}
inline ::System::Func_2<::UnityW<::HMUI::ViewController>, bool>* HMUI::ContainerViewController___c::getStaticF___9__14_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityW<::HMUI::ViewController>, bool>*, "<>9__14_0", ::HMUI::ContainerViewController___c*>();
}
inline void HMUI::ContainerViewController___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ContainerViewController___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool HMUI::ContainerViewController___c::_IsChildInTransition_b__14_0(::HMUI::ViewController* x) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ContainerViewController___c*>(), { "<IsChildInTransition>b__14_0", {}, { ::i2c::type_of<::HMUI::ViewController*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline ::HMUI::ContainerViewController___c* HMUI::ContainerViewController___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HMUI::ContainerViewController___c*>());
}
// Ctor Parameters []
constexpr ::HMUI::ContainerViewController___c::ContainerViewController___c() {}
//  Writing Method size for method: ::HMUI::ContainerViewController__AddViewControllerCoroutine_d__16._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ContainerViewController__AddViewControllerCoroutine_d__16::*)(int32_t)>(
    &::HMUI::ContainerViewController__AddViewControllerCoroutine_d__16::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32ee760;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ContainerViewController__AddViewControllerCoroutine_d__16*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ContainerViewController__AddViewControllerCoroutine_d__16.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ContainerViewController__AddViewControllerCoroutine_d__16::*)()>(
    &::HMUI::ContainerViewController__AddViewControllerCoroutine_d__16::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x32eeb20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ContainerViewController__AddViewControllerCoroutine_d__16*>(), { "System.IDisposable.Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ContainerViewController__AddViewControllerCoroutine_d__16.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::HMUI::ContainerViewController__AddViewControllerCoroutine_d__16::*)()>(
    &::HMUI::ContainerViewController__AddViewControllerCoroutine_d__16::MoveNext)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x32eeb24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ContainerViewController__AddViewControllerCoroutine_d__16*>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ContainerViewController__AddViewControllerCoroutine_d__16.System_Collections_Generic_IEnumerator_System_Object__get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::HMUI::ContainerViewController__AddViewControllerCoroutine_d__16::*)()>(
    &::HMUI::ContainerViewController__AddViewControllerCoroutine_d__16::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32eed50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ContainerViewController__AddViewControllerCoroutine_d__16*>(),
                                                                                           { "System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ContainerViewController__AddViewControllerCoroutine_d__16.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ContainerViewController__AddViewControllerCoroutine_d__16::*)()>(
    &::HMUI::ContainerViewController__AddViewControllerCoroutine_d__16::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x32eed58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ContainerViewController__AddViewControllerCoroutine_d__16*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ContainerViewController__AddViewControllerCoroutine_d__16.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::HMUI::ContainerViewController__AddViewControllerCoroutine_d__16::*)()>(
    &::HMUI::ContainerViewController__AddViewControllerCoroutine_d__16::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32eed90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ContainerViewController__AddViewControllerCoroutine_d__16*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& HMUI::ContainerViewController__AddViewControllerCoroutine_d__16::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& HMUI::ContainerViewController__AddViewControllerCoroutine_d__16::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void HMUI::ContainerViewController__AddViewControllerCoroutine_d__16::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::System::Object*& HMUI::ContainerViewController__AddViewControllerCoroutine_d__16::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::System::Object* const& HMUI::ContainerViewController__AddViewControllerCoroutine_d__16::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void HMUI::ContainerViewController__AddViewControllerCoroutine_d__16::__cordl_internal_set___2__current(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____2__current = value;
}
constexpr ::UnityW<::HMUI::ContainerViewController>& HMUI::ContainerViewController__AddViewControllerCoroutine_d__16::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::HMUI::ContainerViewController> const& HMUI::ContainerViewController__AddViewControllerCoroutine_d__16::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void HMUI::ContainerViewController__AddViewControllerCoroutine_d__16::__cordl_internal_set___4__this(::UnityW<::HMUI::ContainerViewController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
constexpr ::UnityW<::HMUI::ViewController>& HMUI::ContainerViewController__AddViewControllerCoroutine_d__16::__cordl_internal_get_newViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___newViewController;
}
constexpr ::UnityW<::HMUI::ViewController> const& HMUI::ContainerViewController__AddViewControllerCoroutine_d__16::__cordl_internal_get_newViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___newViewController;
}
constexpr void HMUI::ContainerViewController__AddViewControllerCoroutine_d__16::__cordl_internal_set_newViewController(::UnityW<::HMUI::ViewController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___newViewController = value;
}
constexpr bool& HMUI::ContainerViewController__AddViewControllerCoroutine_d__16::__cordl_internal_get_immediately() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___immediately;
}
constexpr bool const& HMUI::ContainerViewController__AddViewControllerCoroutine_d__16::__cordl_internal_get_immediately() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___immediately;
}
constexpr void HMUI::ContainerViewController__AddViewControllerCoroutine_d__16::__cordl_internal_set_immediately(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___immediately = value;
}
constexpr ::System::Action_2<float_t, ::ArrayW<::UnityW<::HMUI::ViewController>>>*& HMUI::ContainerViewController__AddViewControllerCoroutine_d__16::__cordl_internal_get_animationLayouter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___animationLayouter;
}
constexpr ::System::Action_2<float_t, ::ArrayW<::UnityW<::HMUI::ViewController>>>* const&
HMUI::ContainerViewController__AddViewControllerCoroutine_d__16::__cordl_internal_get_animationLayouter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___animationLayouter;
}
constexpr void HMUI::ContainerViewController__AddViewControllerCoroutine_d__16::__cordl_internal_set_animationLayouter(::System::Action_2<float_t, ::ArrayW<::UnityW<::HMUI::ViewController>>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___animationLayouter = value;
}
constexpr ::System::Action*& HMUI::ContainerViewController__AddViewControllerCoroutine_d__16::__cordl_internal_get_finishedCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___finishedCallback;
}
constexpr ::System::Action* const& HMUI::ContainerViewController__AddViewControllerCoroutine_d__16::__cordl_internal_get_finishedCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___finishedCallback;
}
constexpr void HMUI::ContainerViewController__AddViewControllerCoroutine_d__16::__cordl_internal_set_finishedCallback(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___finishedCallback = value;
}
constexpr ::ArrayW<::UnityW<::HMUI::ViewController>>& HMUI::ContainerViewController__AddViewControllerCoroutine_d__16::__cordl_internal_get__viewControllers_5__2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____viewControllers_5__2;
}
constexpr ::ArrayW<::UnityW<::HMUI::ViewController>> const& HMUI::ContainerViewController__AddViewControllerCoroutine_d__16::__cordl_internal_get__viewControllers_5__2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____viewControllers_5__2;
}
constexpr void HMUI::ContainerViewController__AddViewControllerCoroutine_d__16::__cordl_internal_set__viewControllers_5__2(::ArrayW<::UnityW<::HMUI::ViewController>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____viewControllers_5__2 = value;
}
constexpr float_t& HMUI::ContainerViewController__AddViewControllerCoroutine_d__16::__cordl_internal_get__transitionDuration_5__3() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transitionDuration_5__3;
}
constexpr float_t const& HMUI::ContainerViewController__AddViewControllerCoroutine_d__16::__cordl_internal_get__transitionDuration_5__3() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transitionDuration_5__3;
}
constexpr void HMUI::ContainerViewController__AddViewControllerCoroutine_d__16::__cordl_internal_set__transitionDuration_5__3(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____transitionDuration_5__3 = value;
}
constexpr float_t& HMUI::ContainerViewController__AddViewControllerCoroutine_d__16::__cordl_internal_get__elapsedTime_5__4() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____elapsedTime_5__4;
}
constexpr float_t const& HMUI::ContainerViewController__AddViewControllerCoroutine_d__16::__cordl_internal_get__elapsedTime_5__4() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____elapsedTime_5__4;
}
constexpr void HMUI::ContainerViewController__AddViewControllerCoroutine_d__16::__cordl_internal_set__elapsedTime_5__4(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____elapsedTime_5__4 = value;
}
inline void HMUI::ContainerViewController__AddViewControllerCoroutine_d__16::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ContainerViewController__AddViewControllerCoroutine_d__16*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void HMUI::ContainerViewController__AddViewControllerCoroutine_d__16::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ContainerViewController__AddViewControllerCoroutine_d__16*>(), { "System.IDisposable.Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool HMUI::ContainerViewController__AddViewControllerCoroutine_d__16::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ContainerViewController__AddViewControllerCoroutine_d__16*>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* HMUI::ContainerViewController__AddViewControllerCoroutine_d__16::System_Collections_Generic_IEnumerator_System_Object__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ContainerViewController__AddViewControllerCoroutine_d__16*>(),
                                                                                         { "System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void HMUI::ContainerViewController__AddViewControllerCoroutine_d__16::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ContainerViewController__AddViewControllerCoroutine_d__16*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* HMUI::ContainerViewController__AddViewControllerCoroutine_d__16::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ContainerViewController__AddViewControllerCoroutine_d__16*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::HMUI::ContainerViewController__AddViewControllerCoroutine_d__16* HMUI::ContainerViewController__AddViewControllerCoroutine_d__16::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HMUI::ContainerViewController__AddViewControllerCoroutine_d__16*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr HMUI::ContainerViewController__AddViewControllerCoroutine_d__16::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>*
HMUI::ContainerViewController__AddViewControllerCoroutine_d__16::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr HMUI::ContainerViewController__AddViewControllerCoroutine_d__16::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* HMUI::ContainerViewController__AddViewControllerCoroutine_d__16::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr HMUI::ContainerViewController__AddViewControllerCoroutine_d__16::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* HMUI::ContainerViewController__AddViewControllerCoroutine_d__16::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::HMUI::ContainerViewController__AddViewControllerCoroutine_d__16::ContainerViewController__AddViewControllerCoroutine_d__16() {}
//  Writing Method size for method: ::HMUI::ContainerViewController__RemoveViewControllersCoroutine_d__18._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ContainerViewController__RemoveViewControllersCoroutine_d__18::*)(int32_t)>(
    &::HMUI::ContainerViewController__RemoveViewControllersCoroutine_d__18::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32ee838;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ContainerViewController__RemoveViewControllersCoroutine_d__18*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ContainerViewController__RemoveViewControllersCoroutine_d__18.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ContainerViewController__RemoveViewControllersCoroutine_d__18::*)()>(
    &::HMUI::ContainerViewController__RemoveViewControllersCoroutine_d__18::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x32eed98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ContainerViewController__RemoveViewControllersCoroutine_d__18*>(), { "System.IDisposable.Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ContainerViewController__RemoveViewControllersCoroutine_d__18.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::HMUI::ContainerViewController__RemoveViewControllersCoroutine_d__18::*)()>(
    &::HMUI::ContainerViewController__RemoveViewControllersCoroutine_d__18::MoveNext)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0x32eed9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ContainerViewController__RemoveViewControllersCoroutine_d__18*>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ContainerViewController__RemoveViewControllersCoroutine_d__18.System_Collections_Generic_IEnumerator_System_Object__get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::HMUI::ContainerViewController__RemoveViewControllersCoroutine_d__18::*)()>(
    &::HMUI::ContainerViewController__RemoveViewControllersCoroutine_d__18::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32ef0fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ContainerViewController__RemoveViewControllersCoroutine_d__18*>(),
                                                                                           { "System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ContainerViewController__RemoveViewControllersCoroutine_d__18.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ContainerViewController__RemoveViewControllersCoroutine_d__18::*)()>(
    &::HMUI::ContainerViewController__RemoveViewControllersCoroutine_d__18::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x32ef104;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ContainerViewController__RemoveViewControllersCoroutine_d__18*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ContainerViewController__RemoveViewControllersCoroutine_d__18.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::HMUI::ContainerViewController__RemoveViewControllersCoroutine_d__18::*)()>(
    &::HMUI::ContainerViewController__RemoveViewControllersCoroutine_d__18::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32ef13c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ContainerViewController__RemoveViewControllersCoroutine_d__18*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& HMUI::ContainerViewController__RemoveViewControllersCoroutine_d__18::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& HMUI::ContainerViewController__RemoveViewControllersCoroutine_d__18::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void HMUI::ContainerViewController__RemoveViewControllersCoroutine_d__18::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::System::Object*& HMUI::ContainerViewController__RemoveViewControllersCoroutine_d__18::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::System::Object* const& HMUI::ContainerViewController__RemoveViewControllersCoroutine_d__18::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void HMUI::ContainerViewController__RemoveViewControllersCoroutine_d__18::__cordl_internal_set___2__current(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____2__current = value;
}
constexpr ::UnityW<::HMUI::ContainerViewController>& HMUI::ContainerViewController__RemoveViewControllersCoroutine_d__18::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::HMUI::ContainerViewController> const& HMUI::ContainerViewController__RemoveViewControllersCoroutine_d__18::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void HMUI::ContainerViewController__RemoveViewControllersCoroutine_d__18::__cordl_internal_set___4__this(::UnityW<::HMUI::ContainerViewController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
constexpr ::ArrayW<::UnityW<::HMUI::ViewController>>& HMUI::ContainerViewController__RemoveViewControllersCoroutine_d__18::__cordl_internal_get_viewControllersToRemove() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___viewControllersToRemove;
}
constexpr ::ArrayW<::UnityW<::HMUI::ViewController>> const& HMUI::ContainerViewController__RemoveViewControllersCoroutine_d__18::__cordl_internal_get_viewControllersToRemove() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___viewControllersToRemove;
}
constexpr void HMUI::ContainerViewController__RemoveViewControllersCoroutine_d__18::__cordl_internal_set_viewControllersToRemove(::ArrayW<::UnityW<::HMUI::ViewController>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___viewControllersToRemove = value;
}
constexpr bool& HMUI::ContainerViewController__RemoveViewControllersCoroutine_d__18::__cordl_internal_get_immediately() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___immediately;
}
constexpr bool const& HMUI::ContainerViewController__RemoveViewControllersCoroutine_d__18::__cordl_internal_get_immediately() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___immediately;
}
constexpr void HMUI::ContainerViewController__RemoveViewControllersCoroutine_d__18::__cordl_internal_set_immediately(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___immediately = value;
}
constexpr ::System::Action_3<float_t, ::ArrayW<::UnityW<::HMUI::ViewController>>, ::System::Collections::Generic::HashSet_1<::UnityW<::HMUI::ViewController>>*>*&
HMUI::ContainerViewController__RemoveViewControllersCoroutine_d__18::__cordl_internal_get_animationLayouter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___animationLayouter;
}
constexpr ::System::Action_3<float_t, ::ArrayW<::UnityW<::HMUI::ViewController>>, ::System::Collections::Generic::HashSet_1<::UnityW<::HMUI::ViewController>>*>* const&
HMUI::ContainerViewController__RemoveViewControllersCoroutine_d__18::__cordl_internal_get_animationLayouter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___animationLayouter;
}
constexpr void HMUI::ContainerViewController__RemoveViewControllersCoroutine_d__18::__cordl_internal_set_animationLayouter(
    ::System::Action_3<float_t, ::ArrayW<::UnityW<::HMUI::ViewController>>, ::System::Collections::Generic::HashSet_1<::UnityW<::HMUI::ViewController>>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___animationLayouter = value;
}
constexpr ::System::Action*& HMUI::ContainerViewController__RemoveViewControllersCoroutine_d__18::__cordl_internal_get_finishedCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___finishedCallback;
}
constexpr ::System::Action* const& HMUI::ContainerViewController__RemoveViewControllersCoroutine_d__18::__cordl_internal_get_finishedCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___finishedCallback;
}
constexpr void HMUI::ContainerViewController__RemoveViewControllersCoroutine_d__18::__cordl_internal_set_finishedCallback(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___finishedCallback = value;
}
constexpr ::ArrayW<::UnityW<::HMUI::ViewController>>& HMUI::ContainerViewController__RemoveViewControllersCoroutine_d__18::__cordl_internal_get__viewControllers_5__2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____viewControllers_5__2;
}
constexpr ::ArrayW<::UnityW<::HMUI::ViewController>> const& HMUI::ContainerViewController__RemoveViewControllersCoroutine_d__18::__cordl_internal_get__viewControllers_5__2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____viewControllers_5__2;
}
constexpr void HMUI::ContainerViewController__RemoveViewControllersCoroutine_d__18::__cordl_internal_set__viewControllers_5__2(::ArrayW<::UnityW<::HMUI::ViewController>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____viewControllers_5__2 = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::HMUI::ViewController>>*&
HMUI::ContainerViewController__RemoveViewControllersCoroutine_d__18::__cordl_internal_get__viewControllersToRemoveSet_5__3() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____viewControllersToRemoveSet_5__3;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::HMUI::ViewController>>* const&
HMUI::ContainerViewController__RemoveViewControllersCoroutine_d__18::__cordl_internal_get__viewControllersToRemoveSet_5__3() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____viewControllersToRemoveSet_5__3;
}
constexpr void HMUI::ContainerViewController__RemoveViewControllersCoroutine_d__18::__cordl_internal_set__viewControllersToRemoveSet_5__3(
    ::System::Collections::Generic::HashSet_1<::UnityW<::HMUI::ViewController>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____viewControllersToRemoveSet_5__3 = value;
}
constexpr float_t& HMUI::ContainerViewController__RemoveViewControllersCoroutine_d__18::__cordl_internal_get__transitionDuration_5__4() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transitionDuration_5__4;
}
constexpr float_t const& HMUI::ContainerViewController__RemoveViewControllersCoroutine_d__18::__cordl_internal_get__transitionDuration_5__4() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transitionDuration_5__4;
}
constexpr void HMUI::ContainerViewController__RemoveViewControllersCoroutine_d__18::__cordl_internal_set__transitionDuration_5__4(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____transitionDuration_5__4 = value;
}
constexpr float_t& HMUI::ContainerViewController__RemoveViewControllersCoroutine_d__18::__cordl_internal_get__elapsedTime_5__5() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____elapsedTime_5__5;
}
constexpr float_t const& HMUI::ContainerViewController__RemoveViewControllersCoroutine_d__18::__cordl_internal_get__elapsedTime_5__5() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____elapsedTime_5__5;
}
constexpr void HMUI::ContainerViewController__RemoveViewControllersCoroutine_d__18::__cordl_internal_set__elapsedTime_5__5(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____elapsedTime_5__5 = value;
}
inline void HMUI::ContainerViewController__RemoveViewControllersCoroutine_d__18::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ContainerViewController__RemoveViewControllersCoroutine_d__18*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void HMUI::ContainerViewController__RemoveViewControllersCoroutine_d__18::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ContainerViewController__RemoveViewControllersCoroutine_d__18*>(), { "System.IDisposable.Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool HMUI::ContainerViewController__RemoveViewControllersCoroutine_d__18::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ContainerViewController__RemoveViewControllersCoroutine_d__18*>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* HMUI::ContainerViewController__RemoveViewControllersCoroutine_d__18::System_Collections_Generic_IEnumerator_System_Object__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ContainerViewController__RemoveViewControllersCoroutine_d__18*>(),
                                                                                         { "System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void HMUI::ContainerViewController__RemoveViewControllersCoroutine_d__18::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ContainerViewController__RemoveViewControllersCoroutine_d__18*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* HMUI::ContainerViewController__RemoveViewControllersCoroutine_d__18::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ContainerViewController__RemoveViewControllersCoroutine_d__18*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::HMUI::ContainerViewController__RemoveViewControllersCoroutine_d__18* HMUI::ContainerViewController__RemoveViewControllersCoroutine_d__18::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HMUI::ContainerViewController__RemoveViewControllersCoroutine_d__18*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr HMUI::ContainerViewController__RemoveViewControllersCoroutine_d__18::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>*
HMUI::ContainerViewController__RemoveViewControllersCoroutine_d__18::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr HMUI::ContainerViewController__RemoveViewControllersCoroutine_d__18::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* HMUI::ContainerViewController__RemoveViewControllersCoroutine_d__18::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr HMUI::ContainerViewController__RemoveViewControllersCoroutine_d__18::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* HMUI::ContainerViewController__RemoveViewControllersCoroutine_d__18::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::HMUI::ContainerViewController__RemoveViewControllersCoroutine_d__18::ContainerViewController__RemoveViewControllersCoroutine_d__18() {}
//  Writing Method size for method: ::HMUI::ContainerViewController.get_controllersContainer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::RectTransform> (::HMUI::ContainerViewController::*)()>(&::HMUI::ContainerViewController::get_controllersContainer)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x32ed97c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ContainerViewController*>(), { "get_controllersContainer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ContainerViewController.get_viewControllers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::HMUI::ViewController>>* (::HMUI::ContainerViewController::*)()>(
    &::HMUI::ContainerViewController::get_viewControllers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32eda2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ContainerViewController*>(), { "get_viewControllers", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ContainerViewController.__Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ContainerViewController::*)(::HMUI::Screen*, ::HMUI::ViewController*, ::HMUI::ContainerViewController*)>(
    &::HMUI::ContainerViewController::__Init)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x32eda34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::HMUI::ContainerViewController*>(), { ::i2c::class_of<::HMUI::ContainerViewController*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ContainerViewController.LayoutViewControllers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ContainerViewController::*)(::System::Collections::Generic::List_1<::UnityW<::HMUI::ViewController>>*)>(
    &::HMUI::ContainerViewController::LayoutViewControllers)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::HMUI::ContainerViewController*>(), { ::i2c::class_of<::HMUI::ContainerViewController*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ContainerViewController.__Activate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ContainerViewController::*)(bool, bool)>(&::HMUI::ContainerViewController::__Activate)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x32edc2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::HMUI::ContainerViewController*>(), { ::i2c::class_of<::HMUI::ContainerViewController*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ContainerViewController.__Deactivate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ContainerViewController::*)(bool, bool, bool)>(&::HMUI::ContainerViewController::__Deactivate)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x32ede38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::HMUI::ContainerViewController*>(), { ::i2c::class_of<::HMUI::ContainerViewController*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ContainerViewController.DeactivateGameObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ContainerViewController::*)()>(&::HMUI::ContainerViewController::DeactivateGameObject)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x32edfc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::HMUI::ContainerViewController*>(), { ::i2c::class_of<::HMUI::ContainerViewController*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ContainerViewController.ClearChildViewControllers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ContainerViewController::*)()>(&::HMUI::ContainerViewController::ClearChildViewControllers)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x32ee100;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ContainerViewController*>(), { "ClearChildViewControllers", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ContainerViewController.SetChildViewController
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ContainerViewController::*)(::HMUI::ViewController*)>(&::HMUI::ContainerViewController::SetChildViewController)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x32ee254;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ContainerViewController*>(), { "SetChildViewController", {}, { ::i2c::type_of<::HMUI::ViewController*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ContainerViewController.SetChildViewControllers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ContainerViewController::*)(::ArrayW<::HMUI::ViewController*>)>(&::HMUI::ContainerViewController::SetChildViewControllers)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x32ee2f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ContainerViewController*>(), { "SetChildViewControllers", {}, { ::i2c::type_of<::ArrayW<::HMUI::ViewController*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ContainerViewController.IsChildInTransition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::HMUI::ContainerViewController::*)()>(&::HMUI::ContainerViewController::IsChildInTransition)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x32ee458;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ContainerViewController*>(), { "IsChildInTransition", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ContainerViewController.AddViewController
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ContainerViewController::*)(
    ::HMUI::ViewController*, ::System::Action*, ::System::Action_2<float_t, ::ArrayW<::UnityW<::HMUI::ViewController>>>*, bool)>(&::HMUI::ContainerViewController::AddViewController)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x32ee55c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ContainerViewController*>(),
                                                             { "AddViewController",
                                                               {},
                                                               { ::i2c::type_of<::HMUI::ViewController*>(), ::i2c::type_of<::System::Action*>(),
                                                                 ::i2c::type_of<::System::Action_2<float_t, ::ArrayW<::UnityW<::HMUI::ViewController>>>*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ContainerViewController.AddViewControllerCoroutine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (
    ::HMUI::ContainerViewController::*)(::HMUI::ViewController*, ::System::Action*, ::System::Action_2<float_t, ::ArrayW<::UnityW<::HMUI::ViewController>>>*, bool)>(
    &::HMUI::ContainerViewController::AddViewControllerCoroutine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x32ee6e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ContainerViewController*>(),
                                                             { "AddViewControllerCoroutine",
                                                               {},
                                                               { ::i2c::type_of<::HMUI::ViewController*>(), ::i2c::type_of<::System::Action*>(),
                                                                 ::i2c::type_of<::System::Action_2<float_t, ::ArrayW<::UnityW<::HMUI::ViewController>>>*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ContainerViewController.RemoveViewControllers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ContainerViewController::*)(
    ::ArrayW<::HMUI::ViewController*>, ::System::Action*,
    ::System::Action_3<float_t, ::ArrayW<::UnityW<::HMUI::ViewController>>, ::System::Collections::Generic::HashSet_1<::UnityW<::HMUI::ViewController>>*>*, bool)>(
    &::HMUI::ContainerViewController::RemoveViewControllers)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x32ee768;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::HMUI::ContainerViewController*>(),
                         { "RemoveViewControllers",
                           {},
                           { ::i2c::type_of<::ArrayW<::HMUI::ViewController*>>(), ::i2c::type_of<::System::Action*>(),
                             ::i2c::type_of<::System::Action_3<float_t, ::ArrayW<::UnityW<::HMUI::ViewController>>, ::System::Collections::Generic::HashSet_1<::UnityW<::HMUI::ViewController>>*>*>(),
                             ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ContainerViewController.RemoveViewControllersCoroutine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (
    ::HMUI::ContainerViewController::*)(::ArrayW<::HMUI::ViewController*>, ::System::Action*,
                                        ::System::Action_3<float_t, ::ArrayW<::UnityW<::HMUI::ViewController>>, ::System::Collections::Generic::HashSet_1<::UnityW<::HMUI::ViewController>>*>*, bool)>(
    &::HMUI::ContainerViewController::RemoveViewControllersCoroutine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x32ee7b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::HMUI::ContainerViewController*>(),
                         { "RemoveViewControllersCoroutine",
                           {},
                           { ::i2c::type_of<::ArrayW<::HMUI::ViewController*>>(), ::i2c::type_of<::System::Action*>(),
                             ::i2c::type_of<::System::Action_3<float_t, ::ArrayW<::UnityW<::HMUI::ViewController>>, ::System::Collections::Generic::HashSet_1<::UnityW<::HMUI::ViewController>>*>*>(),
                             ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ContainerViewController.GetNewXPositionsForViewControllers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<float_t> (::HMUI::ContainerViewController::*)(::System::Collections::Generic::List_1<::UnityW<::HMUI::ViewController>>*, int32_t)>(
    &::HMUI::ContainerViewController::GetNewXPositionsForViewControllers)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x32ee840;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::HMUI::ContainerViewController*>(),
                            { "GetNewXPositionsForViewControllers", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::HMUI::ViewController>>*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ContainerViewController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ContainerViewController::*)()>(&::HMUI::ContainerViewController::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x32eea38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ContainerViewController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::RectTransform>& HMUI::ContainerViewController::__cordl_internal_get__controllersContainer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____controllersContainer;
}
constexpr ::UnityW<::UnityEngine::RectTransform> const& HMUI::ContainerViewController::__cordl_internal_get__controllersContainer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____controllersContainer;
}
constexpr void HMUI::ContainerViewController::__cordl_internal_set__controllersContainer(::UnityW<::UnityEngine::RectTransform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____controllersContainer = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::HMUI::ViewController>>*& HMUI::ContainerViewController::__cordl_internal_get__viewControllers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____viewControllers;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::HMUI::ViewController>>* const& HMUI::ContainerViewController::__cordl_internal_get__viewControllers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____viewControllers;
}
constexpr void HMUI::ContainerViewController::__cordl_internal_set__viewControllers(::System::Collections::Generic::List_1<::UnityW<::HMUI::ViewController>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____viewControllers = value;
}
inline ::UnityW<::UnityEngine::RectTransform> HMUI::ContainerViewController::get_controllersContainer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ContainerViewController*>(), { "get_controllersContainer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RectTransform>>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityW<::HMUI::ViewController>>* HMUI::ContainerViewController::get_viewControllers() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ContainerViewController*>(), { "get_viewControllers", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::HMUI::ViewController>>*>(this, ___internal_method);
}
inline void HMUI::ContainerViewController::__Init(::HMUI::Screen* screen, ::HMUI::ViewController* parentViewController, ::HMUI::ContainerViewController* containerViewController) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::HMUI::ContainerViewController*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, screen, parentViewController, containerViewController);
}
inline void HMUI::ContainerViewController::LayoutViewControllers(::System::Collections::Generic::List_1<::UnityW<::HMUI::ViewController>>* viewControllers) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::HMUI::ContainerViewController*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, viewControllers);
}
inline void HMUI::ContainerViewController::__Activate(bool addedToHierarchy, bool screenSystemEnabling) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::HMUI::ContainerViewController*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, addedToHierarchy, screenSystemEnabling);
}
inline void HMUI::ContainerViewController::__Deactivate(bool removedFromHierarchy, bool deactivateGameObject, bool screenSystemDisabling) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::HMUI::ContainerViewController*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, removedFromHierarchy, deactivateGameObject, screenSystemDisabling);
}
inline void HMUI::ContainerViewController::DeactivateGameObject() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::HMUI::ContainerViewController*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HMUI::ContainerViewController::ClearChildViewControllers() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ContainerViewController*>(), { "ClearChildViewControllers", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HMUI::ContainerViewController::SetChildViewController(::HMUI::ViewController* viewController) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ContainerViewController*>(), { "SetChildViewController", {}, { ::i2c::type_of<::HMUI::ViewController*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, viewController);
}
inline void HMUI::ContainerViewController::SetChildViewControllers(::ArrayW<::HMUI::ViewController*> viewControllers) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ContainerViewController*>(), { "SetChildViewControllers", {}, { ::i2c::type_of<::ArrayW<::HMUI::ViewController*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, viewControllers);
}
inline bool HMUI::ContainerViewController::IsChildInTransition() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ContainerViewController*>(), { "IsChildInTransition", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void HMUI::ContainerViewController::AddViewController(::HMUI::ViewController* viewController, ::System::Action* finishedCallback,
                                                             ::System::Action_2<float_t, ::ArrayW<::UnityW<::HMUI::ViewController>>>* animationLayouter, bool immediately) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ContainerViewController*>(),
                                                           { "AddViewController",
                                                             {},
                                                             { ::i2c::type_of<::HMUI::ViewController*>(), ::i2c::type_of<::System::Action*>(),
                                                               ::i2c::type_of<::System::Action_2<float_t, ::ArrayW<::UnityW<::HMUI::ViewController>>>*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, viewController, finishedCallback, animationLayouter, immediately);
}
inline ::System::Collections::IEnumerator* HMUI::ContainerViewController::AddViewControllerCoroutine(::HMUI::ViewController* newViewController, ::System::Action* finishedCallback,
                                                                                                     ::System::Action_2<float_t, ::ArrayW<::UnityW<::HMUI::ViewController>>>* animationLayouter,
                                                                                                     bool immediately) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ContainerViewController*>(),
                                                           { "AddViewControllerCoroutine",
                                                             {},
                                                             { ::i2c::type_of<::HMUI::ViewController*>(), ::i2c::type_of<::System::Action*>(),
                                                               ::i2c::type_of<::System::Action_2<float_t, ::ArrayW<::UnityW<::HMUI::ViewController>>>*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, newViewController, finishedCallback, animationLayouter, immediately);
}
inline void HMUI::ContainerViewController::RemoveViewControllers(
    ::ArrayW<::HMUI::ViewController*> viewControllers, ::System::Action* finishedCallback,
    ::System::Action_3<float_t, ::ArrayW<::UnityW<::HMUI::ViewController>>, ::System::Collections::Generic::HashSet_1<::UnityW<::HMUI::ViewController>>*>* animationLayouter, bool immediately) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::HMUI::ContainerViewController*>(),
                          { "RemoveViewControllers",
                            {},
                            { ::i2c::type_of<::ArrayW<::HMUI::ViewController*>>(), ::i2c::type_of<::System::Action*>(),
                              ::i2c::type_of<::System::Action_3<float_t, ::ArrayW<::UnityW<::HMUI::ViewController>>, ::System::Collections::Generic::HashSet_1<::UnityW<::HMUI::ViewController>>*>*>(),
                              ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, viewControllers, finishedCallback, animationLayouter, immediately);
}
inline ::System::Collections::IEnumerator* HMUI::ContainerViewController::RemoveViewControllersCoroutine(
    ::ArrayW<::HMUI::ViewController*> viewControllersToRemove, ::System::Action* finishedCallback,
    ::System::Action_3<float_t, ::ArrayW<::UnityW<::HMUI::ViewController>>, ::System::Collections::Generic::HashSet_1<::UnityW<::HMUI::ViewController>>*>* animationLayouter, bool immediately) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::HMUI::ContainerViewController*>(),
                          { "RemoveViewControllersCoroutine",
                            {},
                            { ::i2c::type_of<::ArrayW<::HMUI::ViewController*>>(), ::i2c::type_of<::System::Action*>(),
                              ::i2c::type_of<::System::Action_3<float_t, ::ArrayW<::UnityW<::HMUI::ViewController>>, ::System::Collections::Generic::HashSet_1<::UnityW<::HMUI::ViewController>>*>*>(),
                              ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, viewControllersToRemove, finishedCallback, animationLayouter, immediately);
}
inline ::ArrayW<float_t> HMUI::ContainerViewController::GetNewXPositionsForViewControllers(::System::Collections::Generic::List_1<::UnityW<::HMUI::ViewController>>* viewControllers,
                                                                                           int32_t exludeFromEndCount) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::HMUI::ContainerViewController*>(),
                          { "GetNewXPositionsForViewControllers", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::HMUI::ViewController>>*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<float_t>>(this, ___internal_method, viewControllers, exludeFromEndCount);
}
inline void HMUI::ContainerViewController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ContainerViewController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::HMUI::ContainerViewController* HMUI::ContainerViewController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HMUI::ContainerViewController*>());
}
// Ctor Parameters []
constexpr ::HMUI::ContainerViewController::ContainerViewController() {}
