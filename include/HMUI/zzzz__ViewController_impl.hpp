#pragma once
// IWYU pragma private; include "HMUI\ViewController.hpp"
#include "HMUI/zzzz__ViewControllerBase_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "HMUI/zzzz__ViewController_def.hpp"
#include "HMUI/zzzz__ButtonBinder_def.hpp"
#include "HMUI/zzzz__ContainerViewController_def.hpp"
#include "HMUI/zzzz__Screen_def.hpp"
#include "HMUI/zzzz__ViewController_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/EventSystems/zzzz__BaseRaycaster_def.hpp"
#include "UnityEngine/zzzz__CanvasGroup_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HMUI::ViewController_AnimationType::ViewController_AnimationType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HMUI::ViewController_AnimationType::ViewController_AnimationType() {}
constexpr ::HMUI::ViewController_AnimationType HMUI::ViewController_AnimationType::None{ static_cast<int32_t>(0x0) };
constexpr ::HMUI::ViewController_AnimationType HMUI::ViewController_AnimationType::In{ static_cast<int32_t>(0x1) };
constexpr ::HMUI::ViewController_AnimationType HMUI::ViewController_AnimationType::Out{ static_cast<int32_t>(0x2) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HMUI::ViewController_AnimationDirection::ViewController_AnimationDirection(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HMUI::ViewController_AnimationDirection::ViewController_AnimationDirection() {}
constexpr ::HMUI::ViewController_AnimationDirection HMUI::ViewController_AnimationDirection::Horizontal{ static_cast<int32_t>(0x0) };
constexpr ::HMUI::ViewController_AnimationDirection HMUI::ViewController_AnimationDirection::Vertical{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::HMUI::ViewController__DismissViewControllerCoroutine_d__54._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ViewController__DismissViewControllerCoroutine_d__54::*)(int32_t)>(
    &::HMUI::ViewController__DismissViewControllerCoroutine_d__54::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32f6d78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ViewController__DismissViewControllerCoroutine_d__54*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewController__DismissViewControllerCoroutine_d__54.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ViewController__DismissViewControllerCoroutine_d__54::*)()>(
    &::HMUI::ViewController__DismissViewControllerCoroutine_d__54::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x32f6f70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ViewController__DismissViewControllerCoroutine_d__54*>(), { "System.IDisposable.Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewController__DismissViewControllerCoroutine_d__54.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::HMUI::ViewController__DismissViewControllerCoroutine_d__54::*)()>(
    &::HMUI::ViewController__DismissViewControllerCoroutine_d__54::MoveNext)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x32f6f74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ViewController__DismissViewControllerCoroutine_d__54*>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewController__DismissViewControllerCoroutine_d__54.System_Collections_Generic_IEnumerator_System_Object__get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::HMUI::ViewController__DismissViewControllerCoroutine_d__54::*)()>(
    &::HMUI::ViewController__DismissViewControllerCoroutine_d__54::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32f72a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ViewController__DismissViewControllerCoroutine_d__54*>(),
                                                                                           { "System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewController__DismissViewControllerCoroutine_d__54.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ViewController__DismissViewControllerCoroutine_d__54::*)()>(
    &::HMUI::ViewController__DismissViewControllerCoroutine_d__54::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x32f72b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ViewController__DismissViewControllerCoroutine_d__54*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewController__DismissViewControllerCoroutine_d__54.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::HMUI::ViewController__DismissViewControllerCoroutine_d__54::*)()>(
    &::HMUI::ViewController__DismissViewControllerCoroutine_d__54::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32f72e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ViewController__DismissViewControllerCoroutine_d__54*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& HMUI::ViewController__DismissViewControllerCoroutine_d__54::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& HMUI::ViewController__DismissViewControllerCoroutine_d__54::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void HMUI::ViewController__DismissViewControllerCoroutine_d__54::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::System::Object*& HMUI::ViewController__DismissViewControllerCoroutine_d__54::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::System::Object* const& HMUI::ViewController__DismissViewControllerCoroutine_d__54::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void HMUI::ViewController__DismissViewControllerCoroutine_d__54::__cordl_internal_set___2__current(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____2__current = value;
}
constexpr ::UnityW<::HMUI::ViewController>& HMUI::ViewController__DismissViewControllerCoroutine_d__54::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::HMUI::ViewController> const& HMUI::ViewController__DismissViewControllerCoroutine_d__54::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void HMUI::ViewController__DismissViewControllerCoroutine_d__54::__cordl_internal_set___4__this(::UnityW<::HMUI::ViewController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
constexpr bool& HMUI::ViewController__DismissViewControllerCoroutine_d__54::__cordl_internal_get_immediately() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___immediately;
}
constexpr bool const& HMUI::ViewController__DismissViewControllerCoroutine_d__54::__cordl_internal_get_immediately() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___immediately;
}
constexpr void HMUI::ViewController__DismissViewControllerCoroutine_d__54::__cordl_internal_set_immediately(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___immediately = value;
}
constexpr ::HMUI::ViewController_AnimationDirection& HMUI::ViewController__DismissViewControllerCoroutine_d__54::__cordl_internal_get_animationDirection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___animationDirection;
}
constexpr ::HMUI::ViewController_AnimationDirection const& HMUI::ViewController__DismissViewControllerCoroutine_d__54::__cordl_internal_get_animationDirection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___animationDirection;
}
constexpr void HMUI::ViewController__DismissViewControllerCoroutine_d__54::__cordl_internal_set_animationDirection(::HMUI::ViewController_AnimationDirection value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___animationDirection = value;
}
constexpr ::System::Action*& HMUI::ViewController__DismissViewControllerCoroutine_d__54::__cordl_internal_get_finishedCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___finishedCallback;
}
constexpr ::System::Action* const& HMUI::ViewController__DismissViewControllerCoroutine_d__54::__cordl_internal_get_finishedCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___finishedCallback;
}
constexpr void HMUI::ViewController__DismissViewControllerCoroutine_d__54::__cordl_internal_set_finishedCallback(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___finishedCallback = value;
}
constexpr ::UnityW<::HMUI::ViewController>& HMUI::ViewController__DismissViewControllerCoroutine_d__54::__cordl_internal_get__movingInViewController_5__2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____movingInViewController_5__2;
}
constexpr ::UnityW<::HMUI::ViewController> const& HMUI::ViewController__DismissViewControllerCoroutine_d__54::__cordl_internal_get__movingInViewController_5__2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____movingInViewController_5__2;
}
constexpr void HMUI::ViewController__DismissViewControllerCoroutine_d__54::__cordl_internal_set__movingInViewController_5__2(::UnityW<::HMUI::ViewController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____movingInViewController_5__2 = value;
}
inline void HMUI::ViewController__DismissViewControllerCoroutine_d__54::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ViewController__DismissViewControllerCoroutine_d__54*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void HMUI::ViewController__DismissViewControllerCoroutine_d__54::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ViewController__DismissViewControllerCoroutine_d__54*>(), { "System.IDisposable.Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool HMUI::ViewController__DismissViewControllerCoroutine_d__54::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ViewController__DismissViewControllerCoroutine_d__54*>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* HMUI::ViewController__DismissViewControllerCoroutine_d__54::System_Collections_Generic_IEnumerator_System_Object__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ViewController__DismissViewControllerCoroutine_d__54*>(),
                                                                                         { "System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void HMUI::ViewController__DismissViewControllerCoroutine_d__54::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ViewController__DismissViewControllerCoroutine_d__54*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* HMUI::ViewController__DismissViewControllerCoroutine_d__54::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ViewController__DismissViewControllerCoroutine_d__54*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::HMUI::ViewController__DismissViewControllerCoroutine_d__54* HMUI::ViewController__DismissViewControllerCoroutine_d__54::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HMUI::ViewController__DismissViewControllerCoroutine_d__54*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr HMUI::ViewController__DismissViewControllerCoroutine_d__54::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>*
HMUI::ViewController__DismissViewControllerCoroutine_d__54::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr HMUI::ViewController__DismissViewControllerCoroutine_d__54::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* HMUI::ViewController__DismissViewControllerCoroutine_d__54::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr HMUI::ViewController__DismissViewControllerCoroutine_d__54::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* HMUI::ViewController__DismissViewControllerCoroutine_d__54::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::HMUI::ViewController__DismissViewControllerCoroutine_d__54::ViewController__DismissViewControllerCoroutine_d__54() {}
//  Writing Method size for method: ::HMUI::ViewController__PresentViewControllerCoroutine_d__50._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ViewController__PresentViewControllerCoroutine_d__50::*)(int32_t)>(
    &::HMUI::ViewController__PresentViewControllerCoroutine_d__50::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32f6c6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ViewController__PresentViewControllerCoroutine_d__50*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewController__PresentViewControllerCoroutine_d__50.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ViewController__PresentViewControllerCoroutine_d__50::*)()>(
    &::HMUI::ViewController__PresentViewControllerCoroutine_d__50::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x32f72f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ViewController__PresentViewControllerCoroutine_d__50*>(), { "System.IDisposable.Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewController__PresentViewControllerCoroutine_d__50.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::HMUI::ViewController__PresentViewControllerCoroutine_d__50::*)()>(
    &::HMUI::ViewController__PresentViewControllerCoroutine_d__50::MoveNext)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x32f72f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ViewController__PresentViewControllerCoroutine_d__50*>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewController__PresentViewControllerCoroutine_d__50.System_Collections_Generic_IEnumerator_System_Object__get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::HMUI::ViewController__PresentViewControllerCoroutine_d__50::*)()>(
    &::HMUI::ViewController__PresentViewControllerCoroutine_d__50::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32f7590;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ViewController__PresentViewControllerCoroutine_d__50*>(),
                                                                                           { "System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewController__PresentViewControllerCoroutine_d__50.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ViewController__PresentViewControllerCoroutine_d__50::*)()>(
    &::HMUI::ViewController__PresentViewControllerCoroutine_d__50::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x32f7598;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ViewController__PresentViewControllerCoroutine_d__50*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewController__PresentViewControllerCoroutine_d__50.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::HMUI::ViewController__PresentViewControllerCoroutine_d__50::*)()>(
    &::HMUI::ViewController__PresentViewControllerCoroutine_d__50::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32f75d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ViewController__PresentViewControllerCoroutine_d__50*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& HMUI::ViewController__PresentViewControllerCoroutine_d__50::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& HMUI::ViewController__PresentViewControllerCoroutine_d__50::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void HMUI::ViewController__PresentViewControllerCoroutine_d__50::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::System::Object*& HMUI::ViewController__PresentViewControllerCoroutine_d__50::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::System::Object* const& HMUI::ViewController__PresentViewControllerCoroutine_d__50::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void HMUI::ViewController__PresentViewControllerCoroutine_d__50::__cordl_internal_set___2__current(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____2__current = value;
}
constexpr ::UnityW<::HMUI::ViewController>& HMUI::ViewController__PresentViewControllerCoroutine_d__50::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::HMUI::ViewController> const& HMUI::ViewController__PresentViewControllerCoroutine_d__50::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void HMUI::ViewController__PresentViewControllerCoroutine_d__50::__cordl_internal_set___4__this(::UnityW<::HMUI::ViewController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
constexpr ::UnityW<::HMUI::ViewController>& HMUI::ViewController__PresentViewControllerCoroutine_d__50::__cordl_internal_get_newViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___newViewController;
}
constexpr ::UnityW<::HMUI::ViewController> const& HMUI::ViewController__PresentViewControllerCoroutine_d__50::__cordl_internal_get_newViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___newViewController;
}
constexpr void HMUI::ViewController__PresentViewControllerCoroutine_d__50::__cordl_internal_set_newViewController(::UnityW<::HMUI::ViewController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___newViewController = value;
}
constexpr bool& HMUI::ViewController__PresentViewControllerCoroutine_d__50::__cordl_internal_get_immediately() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___immediately;
}
constexpr bool const& HMUI::ViewController__PresentViewControllerCoroutine_d__50::__cordl_internal_get_immediately() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___immediately;
}
constexpr void HMUI::ViewController__PresentViewControllerCoroutine_d__50::__cordl_internal_set_immediately(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___immediately = value;
}
constexpr ::HMUI::ViewController_AnimationDirection& HMUI::ViewController__PresentViewControllerCoroutine_d__50::__cordl_internal_get_animationDirection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___animationDirection;
}
constexpr ::HMUI::ViewController_AnimationDirection const& HMUI::ViewController__PresentViewControllerCoroutine_d__50::__cordl_internal_get_animationDirection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___animationDirection;
}
constexpr void HMUI::ViewController__PresentViewControllerCoroutine_d__50::__cordl_internal_set_animationDirection(::HMUI::ViewController_AnimationDirection value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___animationDirection = value;
}
constexpr ::System::Action*& HMUI::ViewController__PresentViewControllerCoroutine_d__50::__cordl_internal_get_finishedCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___finishedCallback;
}
constexpr ::System::Action* const& HMUI::ViewController__PresentViewControllerCoroutine_d__50::__cordl_internal_get_finishedCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___finishedCallback;
}
constexpr void HMUI::ViewController__PresentViewControllerCoroutine_d__50::__cordl_internal_set_finishedCallback(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___finishedCallback = value;
}
inline void HMUI::ViewController__PresentViewControllerCoroutine_d__50::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ViewController__PresentViewControllerCoroutine_d__50*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void HMUI::ViewController__PresentViewControllerCoroutine_d__50::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ViewController__PresentViewControllerCoroutine_d__50*>(), { "System.IDisposable.Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool HMUI::ViewController__PresentViewControllerCoroutine_d__50::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ViewController__PresentViewControllerCoroutine_d__50*>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* HMUI::ViewController__PresentViewControllerCoroutine_d__50::System_Collections_Generic_IEnumerator_System_Object__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ViewController__PresentViewControllerCoroutine_d__50*>(),
                                                                                         { "System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void HMUI::ViewController__PresentViewControllerCoroutine_d__50::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ViewController__PresentViewControllerCoroutine_d__50*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* HMUI::ViewController__PresentViewControllerCoroutine_d__50::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ViewController__PresentViewControllerCoroutine_d__50*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::HMUI::ViewController__PresentViewControllerCoroutine_d__50* HMUI::ViewController__PresentViewControllerCoroutine_d__50::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HMUI::ViewController__PresentViewControllerCoroutine_d__50*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr HMUI::ViewController__PresentViewControllerCoroutine_d__50::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>*
HMUI::ViewController__PresentViewControllerCoroutine_d__50::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr HMUI::ViewController__PresentViewControllerCoroutine_d__50::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* HMUI::ViewController__PresentViewControllerCoroutine_d__50::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr HMUI::ViewController__PresentViewControllerCoroutine_d__50::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* HMUI::ViewController__PresentViewControllerCoroutine_d__50::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::HMUI::ViewController__PresentViewControllerCoroutine_d__50::ViewController__PresentViewControllerCoroutine_d__50() {}
//  Writing Method size for method: ::HMUI::ViewController__ReplaceViewControllerCoroutine_d__52._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ViewController__ReplaceViewControllerCoroutine_d__52::*)(int32_t)>(
    &::HMUI::ViewController__ReplaceViewControllerCoroutine_d__52::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32f6cf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ViewController__ReplaceViewControllerCoroutine_d__52*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewController__ReplaceViewControllerCoroutine_d__52.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ViewController__ReplaceViewControllerCoroutine_d__52::*)()>(
    &::HMUI::ViewController__ReplaceViewControllerCoroutine_d__52::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x32f75d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ViewController__ReplaceViewControllerCoroutine_d__52*>(), { "System.IDisposable.Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewController__ReplaceViewControllerCoroutine_d__52.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::HMUI::ViewController__ReplaceViewControllerCoroutine_d__52::*)()>(
    &::HMUI::ViewController__ReplaceViewControllerCoroutine_d__52::MoveNext)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x32f75dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ViewController__ReplaceViewControllerCoroutine_d__52*>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewController__ReplaceViewControllerCoroutine_d__52.System_Collections_Generic_IEnumerator_System_Object__get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::HMUI::ViewController__ReplaceViewControllerCoroutine_d__52::*)()>(
    &::HMUI::ViewController__ReplaceViewControllerCoroutine_d__52::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32f7848;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ViewController__ReplaceViewControllerCoroutine_d__52*>(),
                                                                                           { "System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewController__ReplaceViewControllerCoroutine_d__52.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ViewController__ReplaceViewControllerCoroutine_d__52::*)()>(
    &::HMUI::ViewController__ReplaceViewControllerCoroutine_d__52::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x32f7850;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ViewController__ReplaceViewControllerCoroutine_d__52*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewController__ReplaceViewControllerCoroutine_d__52.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::HMUI::ViewController__ReplaceViewControllerCoroutine_d__52::*)()>(
    &::HMUI::ViewController__ReplaceViewControllerCoroutine_d__52::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32f7888;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ViewController__ReplaceViewControllerCoroutine_d__52*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& HMUI::ViewController__ReplaceViewControllerCoroutine_d__52::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& HMUI::ViewController__ReplaceViewControllerCoroutine_d__52::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void HMUI::ViewController__ReplaceViewControllerCoroutine_d__52::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::System::Object*& HMUI::ViewController__ReplaceViewControllerCoroutine_d__52::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::System::Object* const& HMUI::ViewController__ReplaceViewControllerCoroutine_d__52::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void HMUI::ViewController__ReplaceViewControllerCoroutine_d__52::__cordl_internal_set___2__current(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____2__current = value;
}
constexpr ::UnityW<::HMUI::ViewController>& HMUI::ViewController__ReplaceViewControllerCoroutine_d__52::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::HMUI::ViewController> const& HMUI::ViewController__ReplaceViewControllerCoroutine_d__52::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void HMUI::ViewController__ReplaceViewControllerCoroutine_d__52::__cordl_internal_set___4__this(::UnityW<::HMUI::ViewController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
constexpr ::UnityW<::HMUI::ViewController>& HMUI::ViewController__ReplaceViewControllerCoroutine_d__52::__cordl_internal_get_newViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___newViewController;
}
constexpr ::UnityW<::HMUI::ViewController> const& HMUI::ViewController__ReplaceViewControllerCoroutine_d__52::__cordl_internal_get_newViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___newViewController;
}
constexpr void HMUI::ViewController__ReplaceViewControllerCoroutine_d__52::__cordl_internal_set_newViewController(::UnityW<::HMUI::ViewController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___newViewController = value;
}
constexpr ::HMUI::ViewController_AnimationType& HMUI::ViewController__ReplaceViewControllerCoroutine_d__52::__cordl_internal_get_animationType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___animationType;
}
constexpr ::HMUI::ViewController_AnimationType const& HMUI::ViewController__ReplaceViewControllerCoroutine_d__52::__cordl_internal_get_animationType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___animationType;
}
constexpr void HMUI::ViewController__ReplaceViewControllerCoroutine_d__52::__cordl_internal_set_animationType(::HMUI::ViewController_AnimationType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___animationType = value;
}
constexpr ::HMUI::ViewController_AnimationDirection& HMUI::ViewController__ReplaceViewControllerCoroutine_d__52::__cordl_internal_get_animationDirection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___animationDirection;
}
constexpr ::HMUI::ViewController_AnimationDirection const& HMUI::ViewController__ReplaceViewControllerCoroutine_d__52::__cordl_internal_get_animationDirection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___animationDirection;
}
constexpr void HMUI::ViewController__ReplaceViewControllerCoroutine_d__52::__cordl_internal_set_animationDirection(::HMUI::ViewController_AnimationDirection value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___animationDirection = value;
}
constexpr ::System::Action*& HMUI::ViewController__ReplaceViewControllerCoroutine_d__52::__cordl_internal_get_finishedCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___finishedCallback;
}
constexpr ::System::Action* const& HMUI::ViewController__ReplaceViewControllerCoroutine_d__52::__cordl_internal_get_finishedCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___finishedCallback;
}
constexpr void HMUI::ViewController__ReplaceViewControllerCoroutine_d__52::__cordl_internal_set_finishedCallback(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___finishedCallback = value;
}
inline void HMUI::ViewController__ReplaceViewControllerCoroutine_d__52::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ViewController__ReplaceViewControllerCoroutine_d__52*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void HMUI::ViewController__ReplaceViewControllerCoroutine_d__52::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ViewController__ReplaceViewControllerCoroutine_d__52*>(), { "System.IDisposable.Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool HMUI::ViewController__ReplaceViewControllerCoroutine_d__52::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ViewController__ReplaceViewControllerCoroutine_d__52*>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* HMUI::ViewController__ReplaceViewControllerCoroutine_d__52::System_Collections_Generic_IEnumerator_System_Object__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ViewController__ReplaceViewControllerCoroutine_d__52*>(),
                                                                                         { "System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void HMUI::ViewController__ReplaceViewControllerCoroutine_d__52::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ViewController__ReplaceViewControllerCoroutine_d__52*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* HMUI::ViewController__ReplaceViewControllerCoroutine_d__52::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ViewController__ReplaceViewControllerCoroutine_d__52*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::HMUI::ViewController__ReplaceViewControllerCoroutine_d__52* HMUI::ViewController__ReplaceViewControllerCoroutine_d__52::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HMUI::ViewController__ReplaceViewControllerCoroutine_d__52*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr HMUI::ViewController__ReplaceViewControllerCoroutine_d__52::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>*
HMUI::ViewController__ReplaceViewControllerCoroutine_d__52::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr HMUI::ViewController__ReplaceViewControllerCoroutine_d__52::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* HMUI::ViewController__ReplaceViewControllerCoroutine_d__52::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr HMUI::ViewController__ReplaceViewControllerCoroutine_d__52::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* HMUI::ViewController__ReplaceViewControllerCoroutine_d__52::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::HMUI::ViewController__ReplaceViewControllerCoroutine_d__52::ViewController__ReplaceViewControllerCoroutine_d__52() {}
//  Writing Method size for method: ::HMUI::ViewController.get_containerViewController
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::HMUI::ContainerViewController> (::HMUI::ViewController::*)()>(&::HMUI::ViewController::get_containerViewController)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32f6964;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ViewController*>(), { "get_containerViewController", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewController.get_screen
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::HMUI::Screen> (::HMUI::ViewController::*)()>(&::HMUI::ViewController::get_screen)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32f696c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ViewController*>(), { "get_screen", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewController.get_parentViewController
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::HMUI::ViewController> (::HMUI::ViewController::*)()>(&::HMUI::ViewController::get_parentViewController)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32f6974;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ViewController*>(), { "get_parentViewController", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewController.get_childViewController
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::HMUI::ViewController> (::HMUI::ViewController::*)()>(&::HMUI::ViewController::get_childViewController)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32f697c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ViewController*>(), { "get_childViewController", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewController.get_isInViewControllerHierarchy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::HMUI::ViewController::*)()>(&::HMUI::ViewController::get_isInViewControllerHierarchy)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x32f6984;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ViewController*>(), { "get_isInViewControllerHierarchy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewController.get_isActivated
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::HMUI::ViewController::*)()>(&::HMUI::ViewController::get_isActivated)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32f69e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ViewController*>(), { "get_isActivated", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewController.get_wasActivatedBefore
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::HMUI::ViewController::*)()>(&::HMUI::ViewController::get_wasActivatedBefore)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32f69f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ViewController*>(), { "get_wasActivatedBefore", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewController.get_isInTransition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::HMUI::ViewController::*)()>(&::HMUI::ViewController::get_isInTransition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32f69f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ViewController*>(), { "get_isInTransition", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewController.set_isInTransition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ViewController::*)(bool)>(&::HMUI::ViewController::set_isInTransition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32f6a00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ViewController*>(), { "set_isInTransition", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewController.get_enableUserInteractions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::HMUI::ViewController::*)()>(&::HMUI::ViewController::get_enableUserInteractions)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x32f6a08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ViewController*>(), { "get_enableUserInteractions", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewController.set_enableUserInteractions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ViewController::*)(bool)>(&::HMUI::ViewController::set_enableUserInteractions)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x32f6584;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ViewController*>(), { "set_enableUserInteractions", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewController.get_buttonBinder
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::HMUI::ButtonBinder* (::HMUI::ViewController::*)()>(&::HMUI::ViewController::get_buttonBinder)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32f6ac0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ViewController*>(), { "get_buttonBinder", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewController.set_buttonBinder
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ViewController::*)(::HMUI::ButtonBinder*)>(&::HMUI::ViewController::set_buttonBinder)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32f6ac8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ViewController*>(), { "set_buttonBinder", {}, { ::i2c::type_of<::HMUI::ButtonBinder*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewController.get_rectTransform
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::RectTransform> (::HMUI::ViewController::*)()>(&::HMUI::ViewController::get_rectTransform)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x32f5204;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ViewController*>(), { "get_rectTransform", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewController.get_canvasGroup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::CanvasGroup> (::HMUI::ViewController::*)()>(&::HMUI::ViewController::get_canvasGroup)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x32f5e34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ViewController*>(), { "get_canvasGroup", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewController.get_graphicRaycaster
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::EventSystems::BaseRaycaster> (::HMUI::ViewController::*)()>(&::HMUI::ViewController::get_graphicRaycaster)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x32f6a24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ViewController*>(), { "get_graphicRaycaster", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewController.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ViewController::*)()>(&::HMUI::ViewController::OnDestroy)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x32f6ad0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::HMUI::ViewController*>(), { ::i2c::class_of<::HMUI::ViewController*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewController.DidActivate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ViewController::*)(bool, bool, bool)>(&::HMUI::ViewController::DidActivate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x32f6b18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::HMUI::ViewController*>(), { ::i2c::class_of<::HMUI::ViewController*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewController.DidDeactivate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ViewController::*)(bool, bool)>(&::HMUI::ViewController::DidDeactivate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x32f6b1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::HMUI::ViewController*>(), { ::i2c::class_of<::HMUI::ViewController*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewController.__Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ViewController::*)(::HMUI::Screen*, ::HMUI::ViewController*, ::HMUI::ContainerViewController*)>(&::HMUI::ViewController::__Init)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x32ef5e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::HMUI::ViewController*>(), { ::i2c::class_of<::HMUI::ViewController*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewController.__ResetViewController
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ViewController::*)()>(&::HMUI::ViewController::__ResetViewController)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x32f6b20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::HMUI::ViewController*>(), { ::i2c::class_of<::HMUI::ViewController*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewController.__PresentViewController
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ViewController::*)(::HMUI::ViewController*, ::System::Action*, ::HMUI::ViewController_AnimationDirection, bool)>(
    &::HMUI::ViewController::__PresentViewController)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x32f2878;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ViewController*>(), { "__PresentViewController",
                                                                                                           {},
                                                                                                           { ::i2c::type_of<::HMUI::ViewController*>(), ::i2c::type_of<::System::Action*>(),
                                                                                                             ::i2c::type_of<::HMUI::ViewController_AnimationDirection>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewController.PresentViewControllerCoroutine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (
    ::HMUI::ViewController::*)(::HMUI::ViewController*, ::System::Action*, ::HMUI::ViewController_AnimationDirection, bool)>(&::HMUI::ViewController::PresentViewControllerCoroutine)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x32f6be8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ViewController*>(), { "PresentViewControllerCoroutine",
                                                                                                           {},
                                                                                                           { ::i2c::type_of<::HMUI::ViewController*>(), ::i2c::type_of<::System::Action*>(),
                                                                                                             ::i2c::type_of<::HMUI::ViewController_AnimationDirection>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewController.__ReplaceViewController
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ViewController::*)(::HMUI::ViewController*, ::System::Action*, ::HMUI::ViewController_AnimationType,
                                                                                        ::HMUI::ViewController_AnimationDirection)>(&::HMUI::ViewController::__ReplaceViewController)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x32f2c08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::HMUI::ViewController*>(), { "__ReplaceViewController",
                                                                          {},
                                                                          { ::i2c::type_of<::HMUI::ViewController*>(), ::i2c::type_of<::System::Action*>(),
                                                                            ::i2c::type_of<::HMUI::ViewController_AnimationType>(), ::i2c::type_of<::HMUI::ViewController_AnimationDirection>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewController.ReplaceViewControllerCoroutine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::HMUI::ViewController::*)(::HMUI::ViewController*, ::System::Action*, ::HMUI::ViewController_AnimationType,
                                                                                                                       ::HMUI::ViewController_AnimationDirection)>(
    &::HMUI::ViewController::ReplaceViewControllerCoroutine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x32f6c74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::HMUI::ViewController*>(), { "ReplaceViewControllerCoroutine",
                                                                          {},
                                                                          { ::i2c::type_of<::HMUI::ViewController*>(), ::i2c::type_of<::System::Action*>(),
                                                                            ::i2c::type_of<::HMUI::ViewController_AnimationType>(), ::i2c::type_of<::HMUI::ViewController_AnimationDirection>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewController.__DismissViewController
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ViewController::*)(::System::Action*, ::HMUI::ViewController_AnimationDirection, bool)>(
    &::HMUI::ViewController::__DismissViewController)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x32f22c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::HMUI::ViewController*>(),
                            { "__DismissViewController", {}, { ::i2c::type_of<::System::Action*>(), ::i2c::type_of<::HMUI::ViewController_AnimationDirection>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewController.DismissViewControllerCoroutine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::HMUI::ViewController::*)(::System::Action*, ::HMUI::ViewController_AnimationDirection, bool)>(
    &::HMUI::ViewController::DismissViewControllerCoroutine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x32f6cf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::HMUI::ViewController*>(),
                            { "DismissViewControllerCoroutine", {}, { ::i2c::type_of<::System::Action*>(), ::i2c::type_of<::HMUI::ViewController_AnimationDirection>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewController.__Activate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ViewController::*)(bool, bool)>(&::HMUI::ViewController::__Activate)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x32ef83c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::HMUI::ViewController*>(), { ::i2c::class_of<::HMUI::ViewController*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewController.__Deactivate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ViewController::*)(bool, bool, bool)>(&::HMUI::ViewController::__Deactivate)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x32ef9e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::HMUI::ViewController*>(), { ::i2c::class_of<::HMUI::ViewController*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewController.DeactivateGameObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ViewController::*)()>(&::HMUI::ViewController::DeactivateGameObject)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x32efb80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::HMUI::ViewController*>(), { ::i2c::class_of<::HMUI::ViewController*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewController.IsViewControllerInHierarchy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::HMUI::ViewController::*)(::HMUI::ViewController*)>(&::HMUI::ViewController::IsViewControllerInHierarchy)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x32f6d80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ViewController*>(), { "IsViewControllerInHierarchy", {}, { ::i2c::type_of<::HMUI::ViewController*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewController.Log
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::HMUI::ViewController::Log)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x32f6f14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ViewController*>(), { "Log", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ViewController::*)()>(&::HMUI::ViewController::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x32f057c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ViewController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::HMUI::ButtonBinder*& HMUI::ViewController::__cordl_internal_get__buttonBinder_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buttonBinder_k__BackingField;
}
constexpr ::HMUI::ButtonBinder* const& HMUI::ViewController::__cordl_internal_get__buttonBinder_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buttonBinder_k__BackingField;
}
constexpr void HMUI::ViewController::__cordl_internal_set__buttonBinder_k__BackingField(::HMUI::ButtonBinder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____buttonBinder_k__BackingField = value;
}
constexpr ::UnityW<::HMUI::ContainerViewController>& HMUI::ViewController::__cordl_internal_get__containerViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____containerViewController;
}
constexpr ::UnityW<::HMUI::ContainerViewController> const& HMUI::ViewController::__cordl_internal_get__containerViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____containerViewController;
}
constexpr void HMUI::ViewController::__cordl_internal_set__containerViewController(::UnityW<::HMUI::ContainerViewController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____containerViewController = value;
}
constexpr ::UnityW<::HMUI::ViewController>& HMUI::ViewController::__cordl_internal_get__parentViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parentViewController;
}
constexpr ::UnityW<::HMUI::ViewController> const& HMUI::ViewController::__cordl_internal_get__parentViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parentViewController;
}
constexpr void HMUI::ViewController::__cordl_internal_set__parentViewController(::UnityW<::HMUI::ViewController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____parentViewController = value;
}
constexpr ::UnityW<::HMUI::ViewController>& HMUI::ViewController::__cordl_internal_get__childViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____childViewController;
}
constexpr ::UnityW<::HMUI::ViewController> const& HMUI::ViewController::__cordl_internal_get__childViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____childViewController;
}
constexpr void HMUI::ViewController::__cordl_internal_set__childViewController(::UnityW<::HMUI::ViewController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____childViewController = value;
}
constexpr ::UnityW<::HMUI::Screen>& HMUI::ViewController::__cordl_internal_get__screen() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____screen;
}
constexpr ::UnityW<::HMUI::Screen> const& HMUI::ViewController::__cordl_internal_get__screen() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____screen;
}
constexpr void HMUI::ViewController::__cordl_internal_set__screen(::UnityW<::HMUI::Screen> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____screen = value;
}
constexpr ::UnityW<::UnityEngine::RectTransform>& HMUI::ViewController::__cordl_internal_get__rectTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rectTransform;
}
constexpr ::UnityW<::UnityEngine::RectTransform> const& HMUI::ViewController::__cordl_internal_get__rectTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rectTransform;
}
constexpr void HMUI::ViewController::__cordl_internal_set__rectTransform(::UnityW<::UnityEngine::RectTransform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rectTransform = value;
}
constexpr ::UnityW<::UnityEngine::CanvasGroup>& HMUI::ViewController::__cordl_internal_get__canvasGroup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____canvasGroup;
}
constexpr ::UnityW<::UnityEngine::CanvasGroup> const& HMUI::ViewController::__cordl_internal_get__canvasGroup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____canvasGroup;
}
constexpr void HMUI::ViewController::__cordl_internal_set__canvasGroup(::UnityW<::UnityEngine::CanvasGroup> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____canvasGroup = value;
}
constexpr bool& HMUI::ViewController::__cordl_internal_get__wasActivatedBefore() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____wasActivatedBefore;
}
constexpr bool const& HMUI::ViewController::__cordl_internal_get__wasActivatedBefore() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____wasActivatedBefore;
}
constexpr void HMUI::ViewController::__cordl_internal_set__wasActivatedBefore(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____wasActivatedBefore = value;
}
constexpr bool& HMUI::ViewController::__cordl_internal_get__isActivated() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isActivated;
}
constexpr bool const& HMUI::ViewController::__cordl_internal_get__isActivated() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isActivated;
}
constexpr void HMUI::ViewController::__cordl_internal_set__isActivated(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isActivated = value;
}
constexpr bool& HMUI::ViewController::__cordl_internal_get__isInTransition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isInTransition;
}
constexpr bool const& HMUI::ViewController::__cordl_internal_get__isInTransition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isInTransition;
}
constexpr void HMUI::ViewController::__cordl_internal_set__isInTransition(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isInTransition = value;
}
constexpr ::UnityW<::UnityEngine::EventSystems::BaseRaycaster>& HMUI::ViewController::__cordl_internal_get__graphicRaycaster() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____graphicRaycaster;
}
constexpr ::UnityW<::UnityEngine::EventSystems::BaseRaycaster> const& HMUI::ViewController::__cordl_internal_get__graphicRaycaster() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____graphicRaycaster;
}
constexpr void HMUI::ViewController::__cordl_internal_set__graphicRaycaster(::UnityW<::UnityEngine::EventSystems::BaseRaycaster> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____graphicRaycaster = value;
}
inline ::UnityW<::HMUI::ContainerViewController> HMUI::ViewController::get_containerViewController() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ViewController*>(), { "get_containerViewController", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::HMUI::ContainerViewController>>(this, ___internal_method);
}
inline ::UnityW<::HMUI::Screen> HMUI::ViewController::get_screen() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ViewController*>(), { "get_screen", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::HMUI::Screen>>(this, ___internal_method);
}
inline ::UnityW<::HMUI::ViewController> HMUI::ViewController::get_parentViewController() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ViewController*>(), { "get_parentViewController", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::HMUI::ViewController>>(this, ___internal_method);
}
inline ::UnityW<::HMUI::ViewController> HMUI::ViewController::get_childViewController() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ViewController*>(), { "get_childViewController", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::HMUI::ViewController>>(this, ___internal_method);
}
inline bool HMUI::ViewController::get_isInViewControllerHierarchy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ViewController*>(), { "get_isInViewControllerHierarchy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool HMUI::ViewController::get_isActivated() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ViewController*>(), { "get_isActivated", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool HMUI::ViewController::get_wasActivatedBefore() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ViewController*>(), { "get_wasActivatedBefore", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool HMUI::ViewController::get_isInTransition() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ViewController*>(), { "get_isInTransition", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void HMUI::ViewController::set_isInTransition(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ViewController*>(), { "set_isInTransition", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool HMUI::ViewController::get_enableUserInteractions() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ViewController*>(), { "get_enableUserInteractions", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void HMUI::ViewController::set_enableUserInteractions(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ViewController*>(), { "set_enableUserInteractions", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::HMUI::ButtonBinder* HMUI::ViewController::get_buttonBinder() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ViewController*>(), { "get_buttonBinder", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::HMUI::ButtonBinder*>(this, ___internal_method);
}
inline void HMUI::ViewController::set_buttonBinder(::HMUI::ButtonBinder* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ViewController*>(), { "set_buttonBinder", {}, { ::i2c::type_of<::HMUI::ButtonBinder*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::RectTransform> HMUI::ViewController::get_rectTransform() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ViewController*>(), { "get_rectTransform", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RectTransform>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::CanvasGroup> HMUI::ViewController::get_canvasGroup() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ViewController*>(), { "get_canvasGroup", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::CanvasGroup>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::EventSystems::BaseRaycaster> HMUI::ViewController::get_graphicRaycaster() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ViewController*>(), { "get_graphicRaycaster", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::EventSystems::BaseRaycaster>>(this, ___internal_method);
}
inline void HMUI::ViewController::OnDestroy() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::HMUI::ViewController*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HMUI::ViewController::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::HMUI::ViewController*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline void HMUI::ViewController::DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::HMUI::ViewController*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, removedFromHierarchy, screenSystemDisabling);
}
inline void HMUI::ViewController::__Init(::HMUI::Screen* screen, ::HMUI::ViewController* parentViewController, ::HMUI::ContainerViewController* containerViewController) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::HMUI::ViewController*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, screen, parentViewController, containerViewController);
}
inline void HMUI::ViewController::__ResetViewController() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::HMUI::ViewController*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HMUI::ViewController::__PresentViewController(::HMUI::ViewController* viewController, ::System::Action* finishedCallback, ::HMUI::ViewController_AnimationDirection animationDirection,
                                                          bool immediately) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ViewController*>(), { "__PresentViewController",
                                                                                                         {},
                                                                                                         { ::i2c::type_of<::HMUI::ViewController*>(), ::i2c::type_of<::System::Action*>(),
                                                                                                           ::i2c::type_of<::HMUI::ViewController_AnimationDirection>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, viewController, finishedCallback, animationDirection, immediately);
}
inline ::System::Collections::IEnumerator* HMUI::ViewController::PresentViewControllerCoroutine(::HMUI::ViewController* newViewController, ::System::Action* finishedCallback,
                                                                                                ::HMUI::ViewController_AnimationDirection animationDirection, bool immediately) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ViewController*>(), { "PresentViewControllerCoroutine",
                                                                                                         {},
                                                                                                         { ::i2c::type_of<::HMUI::ViewController*>(), ::i2c::type_of<::System::Action*>(),
                                                                                                           ::i2c::type_of<::HMUI::ViewController_AnimationDirection>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, newViewController, finishedCallback, animationDirection, immediately);
}
inline void HMUI::ViewController::__ReplaceViewController(::HMUI::ViewController* viewController, ::System::Action* finishedCallback, ::HMUI::ViewController_AnimationType animationType,
                                                          ::HMUI::ViewController_AnimationDirection animationDirection) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::HMUI::ViewController*>(), { "__ReplaceViewController",
                                                                        {},
                                                                        { ::i2c::type_of<::HMUI::ViewController*>(), ::i2c::type_of<::System::Action*>(),
                                                                          ::i2c::type_of<::HMUI::ViewController_AnimationType>(), ::i2c::type_of<::HMUI::ViewController_AnimationDirection>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, viewController, finishedCallback, animationType, animationDirection);
}
inline ::System::Collections::IEnumerator* HMUI::ViewController::ReplaceViewControllerCoroutine(::HMUI::ViewController* newViewController, ::System::Action* finishedCallback,
                                                                                                ::HMUI::ViewController_AnimationType animationType,
                                                                                                ::HMUI::ViewController_AnimationDirection animationDirection) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::HMUI::ViewController*>(), { "ReplaceViewControllerCoroutine",
                                                                        {},
                                                                        { ::i2c::type_of<::HMUI::ViewController*>(), ::i2c::type_of<::System::Action*>(),
                                                                          ::i2c::type_of<::HMUI::ViewController_AnimationType>(), ::i2c::type_of<::HMUI::ViewController_AnimationDirection>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, newViewController, finishedCallback, animationType, animationDirection);
}
inline void HMUI::ViewController::__DismissViewController(::System::Action* finishedCallback, ::HMUI::ViewController_AnimationDirection animationDirection, bool immediately) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::HMUI::ViewController*>(),
                          { "__DismissViewController", {}, { ::i2c::type_of<::System::Action*>(), ::i2c::type_of<::HMUI::ViewController_AnimationDirection>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, finishedCallback, animationDirection, immediately);
}
inline ::System::Collections::IEnumerator* HMUI::ViewController::DismissViewControllerCoroutine(::System::Action* finishedCallback, ::HMUI::ViewController_AnimationDirection animationDirection,
                                                                                                bool immediately) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::HMUI::ViewController*>(),
                          { "DismissViewControllerCoroutine", {}, { ::i2c::type_of<::System::Action*>(), ::i2c::type_of<::HMUI::ViewController_AnimationDirection>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, finishedCallback, animationDirection, immediately);
}
inline void HMUI::ViewController::__Activate(bool addedToHierarchy, bool screenSystemEnabling) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::HMUI::ViewController*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, addedToHierarchy, screenSystemEnabling);
}
inline void HMUI::ViewController::__Deactivate(bool removedFromHierarchy, bool deactivateGameObject, bool screenSystemDisabling) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::HMUI::ViewController*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, removedFromHierarchy, deactivateGameObject, screenSystemDisabling);
}
inline void HMUI::ViewController::DeactivateGameObject() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::HMUI::ViewController*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool HMUI::ViewController::IsViewControllerInHierarchy(::HMUI::ViewController* viewController) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ViewController*>(), { "IsViewControllerInHierarchy", {}, { ::i2c::type_of<::HMUI::ViewController*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, viewController);
}
inline void HMUI::ViewController::Log(::StringW message) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ViewController*>(), { "Log", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, message);
}
inline void HMUI::ViewController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ViewController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::HMUI::ViewController* HMUI::ViewController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HMUI::ViewController*>());
}
// Ctor Parameters []
constexpr ::HMUI::ViewController::ViewController() {}
