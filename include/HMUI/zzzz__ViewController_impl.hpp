#pragma once
// IWYU pragma private; include "HMUI/ViewController.hpp"
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ViewController__DismissViewControllerCoroutine_d__54::*)(int32_t)>(
    &::HMUI::ViewController__DismissViewControllerCoroutine_d__54::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3200e88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewController__DismissViewControllerCoroutine_d__54*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewController__DismissViewControllerCoroutine_d__54.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ViewController__DismissViewControllerCoroutine_d__54::*)()>(
    &::HMUI::ViewController__DismissViewControllerCoroutine_d__54::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3201080;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewController__DismissViewControllerCoroutine_d__54*>::get(),
                                                 "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewController__DismissViewControllerCoroutine_d__54.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HMUI::ViewController__DismissViewControllerCoroutine_d__54::*)()>(
    &::HMUI::ViewController__DismissViewControllerCoroutine_d__54::MoveNext)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x3201084;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewController__DismissViewControllerCoroutine_d__54*>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewController__DismissViewControllerCoroutine_d__54.System_Collections_Generic_IEnumerator_System_Object__get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::HMUI::ViewController__DismissViewControllerCoroutine_d__54::*)()>(
    &::HMUI::ViewController__DismissViewControllerCoroutine_d__54::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32013b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewController__DismissViewControllerCoroutine_d__54*>::get(),
                                    "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewController__DismissViewControllerCoroutine_d__54.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ViewController__DismissViewControllerCoroutine_d__54::*)()>(
    &::HMUI::ViewController__DismissViewControllerCoroutine_d__54::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x32013c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewController__DismissViewControllerCoroutine_d__54*>::get(),
                                                 "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewController__DismissViewControllerCoroutine_d__54.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::HMUI::ViewController__DismissViewControllerCoroutine_d__54::*)()>(
    &::HMUI::ViewController__DismissViewControllerCoroutine_d__54::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32013f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewController__DismissViewControllerCoroutine_d__54*>::get(),
                                                 "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___finishedCallback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____movingInViewController_5__2)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void HMUI::ViewController__DismissViewControllerCoroutine_d__54::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewController__DismissViewControllerCoroutine_d__54*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
inline void HMUI::ViewController__DismissViewControllerCoroutine_d__54::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewController__DismissViewControllerCoroutine_d__54*>::get(),
                                               "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool HMUI::ViewController__DismissViewControllerCoroutine_d__54::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewController__DismissViewControllerCoroutine_d__54*>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Object* HMUI::ViewController__DismissViewControllerCoroutine_d__54::System_Collections_Generic_IEnumerator_System_Object__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewController__DismissViewControllerCoroutine_d__54*>::get(),
                                  "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void HMUI::ViewController__DismissViewControllerCoroutine_d__54::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewController__DismissViewControllerCoroutine_d__54*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* HMUI::ViewController__DismissViewControllerCoroutine_d__54::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewController__DismissViewControllerCoroutine_d__54*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::HMUI::ViewController__DismissViewControllerCoroutine_d__54* HMUI::ViewController__DismissViewControllerCoroutine_d__54::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HMUI::ViewController__DismissViewControllerCoroutine_d__54*>(__1__state));
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ViewController__PresentViewControllerCoroutine_d__50::*)(int32_t)>(
    &::HMUI::ViewController__PresentViewControllerCoroutine_d__50::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3200d7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewController__PresentViewControllerCoroutine_d__50*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewController__PresentViewControllerCoroutine_d__50.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ViewController__PresentViewControllerCoroutine_d__50::*)()>(
    &::HMUI::ViewController__PresentViewControllerCoroutine_d__50::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3201400;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewController__PresentViewControllerCoroutine_d__50*>::get(),
                                                 "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewController__PresentViewControllerCoroutine_d__50.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HMUI::ViewController__PresentViewControllerCoroutine_d__50::*)()>(
    &::HMUI::ViewController__PresentViewControllerCoroutine_d__50::MoveNext)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x3201404;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewController__PresentViewControllerCoroutine_d__50*>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewController__PresentViewControllerCoroutine_d__50.System_Collections_Generic_IEnumerator_System_Object__get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::HMUI::ViewController__PresentViewControllerCoroutine_d__50::*)()>(
    &::HMUI::ViewController__PresentViewControllerCoroutine_d__50::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32016a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewController__PresentViewControllerCoroutine_d__50*>::get(),
                                    "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewController__PresentViewControllerCoroutine_d__50.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ViewController__PresentViewControllerCoroutine_d__50::*)()>(
    &::HMUI::ViewController__PresentViewControllerCoroutine_d__50::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x32016a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewController__PresentViewControllerCoroutine_d__50*>::get(),
                                                 "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewController__PresentViewControllerCoroutine_d__50.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::HMUI::ViewController__PresentViewControllerCoroutine_d__50::*)()>(
    &::HMUI::ViewController__PresentViewControllerCoroutine_d__50::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32016e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewController__PresentViewControllerCoroutine_d__50*>::get(),
                                                 "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___newViewController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___finishedCallback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void HMUI::ViewController__PresentViewControllerCoroutine_d__50::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewController__PresentViewControllerCoroutine_d__50*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
inline void HMUI::ViewController__PresentViewControllerCoroutine_d__50::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewController__PresentViewControllerCoroutine_d__50*>::get(),
                                               "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool HMUI::ViewController__PresentViewControllerCoroutine_d__50::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewController__PresentViewControllerCoroutine_d__50*>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Object* HMUI::ViewController__PresentViewControllerCoroutine_d__50::System_Collections_Generic_IEnumerator_System_Object__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewController__PresentViewControllerCoroutine_d__50*>::get(),
                                  "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void HMUI::ViewController__PresentViewControllerCoroutine_d__50::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewController__PresentViewControllerCoroutine_d__50*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* HMUI::ViewController__PresentViewControllerCoroutine_d__50::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewController__PresentViewControllerCoroutine_d__50*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::HMUI::ViewController__PresentViewControllerCoroutine_d__50* HMUI::ViewController__PresentViewControllerCoroutine_d__50::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HMUI::ViewController__PresentViewControllerCoroutine_d__50*>(__1__state));
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ViewController__ReplaceViewControllerCoroutine_d__52::*)(int32_t)>(
    &::HMUI::ViewController__ReplaceViewControllerCoroutine_d__52::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3200e00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewController__ReplaceViewControllerCoroutine_d__52*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewController__ReplaceViewControllerCoroutine_d__52.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ViewController__ReplaceViewControllerCoroutine_d__52::*)()>(
    &::HMUI::ViewController__ReplaceViewControllerCoroutine_d__52::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x32016e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewController__ReplaceViewControllerCoroutine_d__52*>::get(),
                                                 "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewController__ReplaceViewControllerCoroutine_d__52.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HMUI::ViewController__ReplaceViewControllerCoroutine_d__52::*)()>(
    &::HMUI::ViewController__ReplaceViewControllerCoroutine_d__52::MoveNext)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x32016ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewController__ReplaceViewControllerCoroutine_d__52*>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewController__ReplaceViewControllerCoroutine_d__52.System_Collections_Generic_IEnumerator_System_Object__get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::HMUI::ViewController__ReplaceViewControllerCoroutine_d__52::*)()>(
    &::HMUI::ViewController__ReplaceViewControllerCoroutine_d__52::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3201958;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewController__ReplaceViewControllerCoroutine_d__52*>::get(),
                                    "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewController__ReplaceViewControllerCoroutine_d__52.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ViewController__ReplaceViewControllerCoroutine_d__52::*)()>(
    &::HMUI::ViewController__ReplaceViewControllerCoroutine_d__52::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x3201960;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewController__ReplaceViewControllerCoroutine_d__52*>::get(),
                                                 "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewController__ReplaceViewControllerCoroutine_d__52.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::HMUI::ViewController__ReplaceViewControllerCoroutine_d__52::*)()>(
    &::HMUI::ViewController__ReplaceViewControllerCoroutine_d__52::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3201998;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewController__ReplaceViewControllerCoroutine_d__52*>::get(),
                                                 "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___newViewController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___finishedCallback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void HMUI::ViewController__ReplaceViewControllerCoroutine_d__52::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewController__ReplaceViewControllerCoroutine_d__52*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
inline void HMUI::ViewController__ReplaceViewControllerCoroutine_d__52::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewController__ReplaceViewControllerCoroutine_d__52*>::get(),
                                               "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool HMUI::ViewController__ReplaceViewControllerCoroutine_d__52::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewController__ReplaceViewControllerCoroutine_d__52*>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Object* HMUI::ViewController__ReplaceViewControllerCoroutine_d__52::System_Collections_Generic_IEnumerator_System_Object__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewController__ReplaceViewControllerCoroutine_d__52*>::get(),
                                  "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void HMUI::ViewController__ReplaceViewControllerCoroutine_d__52::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewController__ReplaceViewControllerCoroutine_d__52*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* HMUI::ViewController__ReplaceViewControllerCoroutine_d__52::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewController__ReplaceViewControllerCoroutine_d__52*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::HMUI::ViewController__ReplaceViewControllerCoroutine_d__52* HMUI::ViewController__ReplaceViewControllerCoroutine_d__52::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HMUI::ViewController__ReplaceViewControllerCoroutine_d__52*>(__1__state));
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::HMUI::ContainerViewController> (::HMUI::ViewController::*)()>(
    &::HMUI::ViewController::get_containerViewController)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3200a74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewController*>::get(), "get_containerViewController",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewController.get_screen
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::HMUI::Screen> (::HMUI::ViewController::*)()>(&::HMUI::ViewController::get_screen)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3200a7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewController*>::get(), "get_screen",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewController.get_parentViewController
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::HMUI::ViewController> (::HMUI::ViewController::*)()>(&::HMUI::ViewController::get_parentViewController)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3200a84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewController*>::get(), "get_parentViewController",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewController.get_childViewController
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::HMUI::ViewController> (::HMUI::ViewController::*)()>(&::HMUI::ViewController::get_childViewController)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3200a8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewController*>::get(), "get_childViewController",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewController.get_isInViewControllerHierarchy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HMUI::ViewController::*)()>(&::HMUI::ViewController::get_isInViewControllerHierarchy)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x3200a94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewController*>::get(), "get_isInViewControllerHierarchy",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewController.get_isActivated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HMUI::ViewController::*)()>(&::HMUI::ViewController::get_isActivated)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3200af8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewController*>::get(), "get_isActivated",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewController.get_wasActivatedBefore
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HMUI::ViewController::*)()>(&::HMUI::ViewController::get_wasActivatedBefore)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3200b00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewController*>::get(), "get_wasActivatedBefore",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewController.get_isInTransition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HMUI::ViewController::*)()>(&::HMUI::ViewController::get_isInTransition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3200b08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewController*>::get(), "get_isInTransition",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewController.set_isInTransition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ViewController::*)(bool)>(&::HMUI::ViewController::set_isInTransition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3200b10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewController*>::get(), "set_isInTransition", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewController.get_enableUserInteractions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HMUI::ViewController::*)()>(&::HMUI::ViewController::get_enableUserInteractions)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3200b18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewController*>::get(), "get_enableUserInteractions",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewController.set_enableUserInteractions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ViewController::*)(bool)>(&::HMUI::ViewController::set_enableUserInteractions)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x3200694;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewController*>::get(), "set_enableUserInteractions",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewController.get_buttonBinder
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HMUI::ButtonBinder* (::HMUI::ViewController::*)()>(&::HMUI::ViewController::get_buttonBinder)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3200bd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewController*>::get(), "get_buttonBinder",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewController.set_buttonBinder
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ViewController::*)(::HMUI::ButtonBinder*)>(&::HMUI::ViewController::set_buttonBinder)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3200bd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewController*>::get(), "set_buttonBinder", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ButtonBinder*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewController.get_rectTransform
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::RectTransform> (::HMUI::ViewController::*)()>(&::HMUI::ViewController::get_rectTransform)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x31ff314;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewController*>::get(), "get_rectTransform",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewController.get_canvasGroup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::CanvasGroup> (::HMUI::ViewController::*)()>(&::HMUI::ViewController::get_canvasGroup)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x31fff44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewController*>::get(), "get_canvasGroup",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewController.get_graphicRaycaster
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::EventSystems::BaseRaycaster> (::HMUI::ViewController::*)()>(
    &::HMUI::ViewController::get_graphicRaycaster)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3200b34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewController*>::get(), "get_graphicRaycaster",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewController.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ViewController::*)()>(&::HMUI::ViewController::OnDestroy)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x3200be0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewController*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewController*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewController.DidActivate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ViewController::*)(bool, bool, bool)>(&::HMUI::ViewController::DidActivate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3200c28;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewController*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewController*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewController.DidDeactivate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ViewController::*)(bool, bool)>(&::HMUI::ViewController::DidDeactivate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3200c2c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewController*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewController*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewController.__Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ViewController::*)(::HMUI::Screen*, ::HMUI::ViewController*, ::HMUI::ContainerViewController*)>(
    &::HMUI::ViewController::__Init)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x31f96f0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewController*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewController*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewController.__ResetViewController
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ViewController::*)()>(&::HMUI::ViewController::__ResetViewController)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x3200c30;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewController*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewController*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewController.__PresentViewController
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::HMUI::ViewController::*)(::HMUI::ViewController*, ::System::Action*, ::HMUI::ViewController_AnimationDirection, bool)>(&::HMUI::ViewController::__PresentViewController)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x31fc988;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewController*>::get(), "__PresentViewController", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController_AnimationDirection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewController.PresentViewControllerCoroutine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (
    ::HMUI::ViewController::*)(::HMUI::ViewController*, ::System::Action*, ::HMUI::ViewController_AnimationDirection, bool)>(&::HMUI::ViewController::PresentViewControllerCoroutine)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x3200cf8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewController*>::get(), "PresentViewControllerCoroutine", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController_AnimationDirection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewController.__ReplaceViewController
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ViewController::*)(
    ::HMUI::ViewController*, ::System::Action*, ::HMUI::ViewController_AnimationType, ::HMUI::ViewController_AnimationDirection)>(&::HMUI::ViewController::__ReplaceViewController)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x31fcd18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewController*>::get(), "__ReplaceViewController", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController_AnimationType>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController_AnimationDirection>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewController.ReplaceViewControllerCoroutine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (
    ::HMUI::ViewController::*)(::HMUI::ViewController*, ::System::Action*, ::HMUI::ViewController_AnimationType, ::HMUI::ViewController_AnimationDirection)>(
    &::HMUI::ViewController::ReplaceViewControllerCoroutine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x3200d84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewController*>::get(), "ReplaceViewControllerCoroutine", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController_AnimationType>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController_AnimationDirection>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewController.__DismissViewController
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ViewController::*)(::System::Action*, ::HMUI::ViewController_AnimationDirection, bool)>(
    &::HMUI::ViewController::__DismissViewController)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x31fc3d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewController*>::get(), "__DismissViewController", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController_AnimationDirection>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewController.DismissViewControllerCoroutine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (
    ::HMUI::ViewController::*)(::System::Action*, ::HMUI::ViewController_AnimationDirection, bool)>(&::HMUI::ViewController::DismissViewControllerCoroutine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x3200e08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewController*>::get(), "DismissViewControllerCoroutine", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController_AnimationDirection>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewController.__Activate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ViewController::*)(bool, bool)>(&::HMUI::ViewController::__Activate)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x31f994c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewController*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewController*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewController.__Deactivate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ViewController::*)(bool, bool, bool)>(&::HMUI::ViewController::__Deactivate)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x31f9af0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewController*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewController*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewController.DeactivateGameObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ViewController::*)()>(&::HMUI::ViewController::DeactivateGameObject)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x31f9c90;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewController*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewController*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewController.IsViewControllerInHierarchy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HMUI::ViewController::*)(::HMUI::ViewController*)>(&::HMUI::ViewController::IsViewControllerInHierarchy)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x3200e90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewController*>::get(), "IsViewControllerInHierarchy", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewController.Log
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&::HMUI::ViewController::Log)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x3201024;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewController*>::get(), "Log", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ViewController::*)()>(&::HMUI::ViewController::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x31fa68c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewController*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____buttonBinder_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____containerViewController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____parentViewController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____childViewController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____screen)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____rectTransform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____canvasGroup)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____graphicRaycaster)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityW<::HMUI::ContainerViewController> HMUI::ViewController::get_containerViewController() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewController*>::get(), "get_containerViewController",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::HMUI::ContainerViewController>, false>(this, ___internal_method);
}
inline ::UnityW<::HMUI::Screen> HMUI::ViewController::get_screen() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewController*>::get(), "get_screen",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::HMUI::Screen>, false>(this, ___internal_method);
}
inline ::UnityW<::HMUI::ViewController> HMUI::ViewController::get_parentViewController() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewController*>::get(), "get_parentViewController",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::HMUI::ViewController>, false>(this, ___internal_method);
}
inline ::UnityW<::HMUI::ViewController> HMUI::ViewController::get_childViewController() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewController*>::get(), "get_childViewController",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::HMUI::ViewController>, false>(this, ___internal_method);
}
inline bool HMUI::ViewController::get_isInViewControllerHierarchy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewController*>::get(), "get_isInViewControllerHierarchy",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool HMUI::ViewController::get_isActivated() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewController*>::get(), "get_isActivated",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool HMUI::ViewController::get_wasActivatedBefore() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewController*>::get(), "get_wasActivatedBefore",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool HMUI::ViewController::get_isInTransition() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewController*>::get(), "get_isInTransition",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void HMUI::ViewController::set_isInTransition(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewController*>::get(), "set_isInTransition", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool HMUI::ViewController::get_enableUserInteractions() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewController*>::get(), "get_enableUserInteractions",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void HMUI::ViewController::set_enableUserInteractions(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewController*>::get(), "set_enableUserInteractions",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::HMUI::ButtonBinder* HMUI::ViewController::get_buttonBinder() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewController*>::get(), "get_buttonBinder",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::HMUI::ButtonBinder*, false>(this, ___internal_method);
}
inline void HMUI::ViewController::set_buttonBinder(::HMUI::ButtonBinder* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewController*>::get(), "set_buttonBinder", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ButtonBinder*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::RectTransform> HMUI::ViewController::get_rectTransform() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewController*>::get(), "get_rectTransform",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RectTransform>, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::CanvasGroup> HMUI::ViewController::get_canvasGroup() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewController*>::get(), "get_canvasGroup",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::CanvasGroup>, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::EventSystems::BaseRaycaster> HMUI::ViewController::get_graphicRaycaster() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewController*>::get(), "get_graphicRaycaster",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::EventSystems::BaseRaycaster>, false>(this, ___internal_method);
}
inline void HMUI::ViewController::OnDestroy() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewController*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HMUI::ViewController::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewController*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline void HMUI::ViewController::DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewController*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, removedFromHierarchy, screenSystemDisabling);
}
inline void HMUI::ViewController::__Init(::HMUI::Screen* screen, ::HMUI::ViewController* parentViewController, ::HMUI::ContainerViewController* containerViewController) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewController*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, screen, parentViewController, containerViewController);
}
inline void HMUI::ViewController::__ResetViewController() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewController*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HMUI::ViewController::__PresentViewController(::HMUI::ViewController* viewController, ::System::Action* finishedCallback, ::HMUI::ViewController_AnimationDirection animationDirection,
                                                          bool immediately) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewController*>::get(), "__PresentViewController", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController_AnimationDirection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, viewController, finishedCallback, animationDirection, immediately);
}
inline ::System::Collections::IEnumerator* HMUI::ViewController::PresentViewControllerCoroutine(::HMUI::ViewController* newViewController, ::System::Action* finishedCallback,
                                                                                                ::HMUI::ViewController_AnimationDirection animationDirection, bool immediately) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewController*>::get(), "PresentViewControllerCoroutine", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController_AnimationDirection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method, newViewController, finishedCallback, animationDirection, immediately);
}
inline void HMUI::ViewController::__ReplaceViewController(::HMUI::ViewController* viewController, ::System::Action* finishedCallback, ::HMUI::ViewController_AnimationType animationType,
                                                          ::HMUI::ViewController_AnimationDirection animationDirection) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewController*>::get(), "__ReplaceViewController", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController_AnimationType>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController_AnimationDirection>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, viewController, finishedCallback, animationType, animationDirection);
}
inline ::System::Collections::IEnumerator* HMUI::ViewController::ReplaceViewControllerCoroutine(::HMUI::ViewController* newViewController, ::System::Action* finishedCallback,
                                                                                                ::HMUI::ViewController_AnimationType animationType,
                                                                                                ::HMUI::ViewController_AnimationDirection animationDirection) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewController*>::get(), "ReplaceViewControllerCoroutine", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController_AnimationType>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController_AnimationDirection>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method, newViewController, finishedCallback, animationType, animationDirection);
}
inline void HMUI::ViewController::__DismissViewController(::System::Action* finishedCallback, ::HMUI::ViewController_AnimationDirection animationDirection, bool immediately) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewController*>::get(), "__DismissViewController", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController_AnimationDirection>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, finishedCallback, animationDirection, immediately);
}
inline ::System::Collections::IEnumerator* HMUI::ViewController::DismissViewControllerCoroutine(::System::Action* finishedCallback, ::HMUI::ViewController_AnimationDirection animationDirection,
                                                                                                bool immediately) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewController*>::get(), "DismissViewControllerCoroutine", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController_AnimationDirection>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method, finishedCallback, animationDirection, immediately);
}
inline void HMUI::ViewController::__Activate(bool addedToHierarchy, bool screenSystemEnabling) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewController*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, addedToHierarchy, screenSystemEnabling);
}
inline void HMUI::ViewController::__Deactivate(bool removedFromHierarchy, bool deactivateGameObject, bool screenSystemDisabling) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewController*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, removedFromHierarchy, deactivateGameObject, screenSystemDisabling);
}
inline void HMUI::ViewController::DeactivateGameObject() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewController*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool HMUI::ViewController::IsViewControllerInHierarchy(::HMUI::ViewController* viewController) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewController*>::get(), "IsViewControllerInHierarchy", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, viewController);
}
inline void HMUI::ViewController::Log(::StringW message) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewController*>::get(), "Log", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, message);
}
inline void HMUI::ViewController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewController*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::HMUI::ViewController* HMUI::ViewController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HMUI::ViewController*>());
}
// Ctor Parameters []
constexpr ::HMUI::ViewController::ViewController() {}
