#pragma once
// IWYU pragma private; include "HMUI/ContainerViewController.hpp"
#include "HMUI/zzzz__ViewController_impl.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_impl.hpp"
#include "System/Collections/zzzz__IEnumerator_impl.hpp"
#include "System/zzzz__IDisposable_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "HMUI/zzzz__ContainerViewController_def.hpp"
#include "HMUI/zzzz__ContainerViewController_def.hpp"
#include "HMUI/zzzz__Screen_def.hpp"
#include "HMUI/zzzz__ViewController_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Action_3_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
//  Writing Method size for method: ::HMUI::ContainerViewController___c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ContainerViewController___c::*)()>(&::HMUI::ContainerViewController___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2283d20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ContainerViewController___c*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ContainerViewController___c._IsChildInTransition_b__14_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HMUI::ContainerViewController___c::*)(::HMUI::ViewController*)>(
    &::HMUI::ContainerViewController___c::_IsChildInTransition_b__14_0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2283d28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ContainerViewController___c*>::get(), "<IsChildInTransition>b__14_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get() })));
    return ___internal_method;
  }
};
inline void HMUI::ContainerViewController___c::setStaticF___9(::HMUI::ContainerViewController___c* value) {
  ::cordl_internals::setStaticField<::HMUI::ContainerViewController___c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ContainerViewController___c*>::get>(
      std::forward<::HMUI::ContainerViewController___c*>(value));
}
inline ::HMUI::ContainerViewController___c* HMUI::ContainerViewController___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::HMUI::ContainerViewController___c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ContainerViewController___c*>::get>();
}
inline void HMUI::ContainerViewController___c::setStaticF___9__14_0(::System::Func_2<::UnityW<::HMUI::ViewController>, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityW<::HMUI::ViewController>, bool>*, "<>9__14_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ContainerViewController___c*>::get>(
      std::forward<::System::Func_2<::UnityW<::HMUI::ViewController>, bool>*>(value));
}
inline ::System::Func_2<::UnityW<::HMUI::ViewController>, bool>* HMUI::ContainerViewController___c::getStaticF___9__14_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityW<::HMUI::ViewController>, bool>*, "<>9__14_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ContainerViewController___c*>::get>();
}
inline void HMUI::ContainerViewController___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ContainerViewController___c*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool HMUI::ContainerViewController___c::_IsChildInTransition_b__14_0(::HMUI::ViewController* x) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ContainerViewController___c*>::get(), "<IsChildInTransition>b__14_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, x);
}
inline ::HMUI::ContainerViewController___c* HMUI::ContainerViewController___c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HMUI::ContainerViewController___c*>());
}
// Ctor Parameters []
constexpr ::HMUI::ContainerViewController___c::ContainerViewController___c() {}
//  Writing Method size for method: ::HMUI::ContainerViewController__AddViewControllerCoroutine_d__16._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ContainerViewController__AddViewControllerCoroutine_d__16::*)(int32_t)>(
    &::HMUI::ContainerViewController__AddViewControllerCoroutine_d__16::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x228394c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ContainerViewController__AddViewControllerCoroutine_d__16*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ContainerViewController__AddViewControllerCoroutine_d__16.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ContainerViewController__AddViewControllerCoroutine_d__16::*)()>(
    &::HMUI::ContainerViewController__AddViewControllerCoroutine_d__16::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2283d40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ContainerViewController__AddViewControllerCoroutine_d__16*>::get(),
                                                 "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ContainerViewController__AddViewControllerCoroutine_d__16.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HMUI::ContainerViewController__AddViewControllerCoroutine_d__16::*)()>(
    &::HMUI::ContainerViewController__AddViewControllerCoroutine_d__16::MoveNext)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x2283d44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ContainerViewController__AddViewControllerCoroutine_d__16*>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ContainerViewController__AddViewControllerCoroutine_d__16.System_Collections_Generic_IEnumerator_System_Object__get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::HMUI::ContainerViewController__AddViewControllerCoroutine_d__16::*)()>(
    &::HMUI::ContainerViewController__AddViewControllerCoroutine_d__16::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2283f50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ContainerViewController__AddViewControllerCoroutine_d__16*>::get(),
                                    "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ContainerViewController__AddViewControllerCoroutine_d__16.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ContainerViewController__AddViewControllerCoroutine_d__16::*)()>(
    &::HMUI::ContainerViewController__AddViewControllerCoroutine_d__16::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2283f58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ContainerViewController__AddViewControllerCoroutine_d__16*>::get(),
                                                 "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ContainerViewController__AddViewControllerCoroutine_d__16.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::HMUI::ContainerViewController__AddViewControllerCoroutine_d__16::*)()>(
    &::HMUI::ContainerViewController__AddViewControllerCoroutine_d__16::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2283f90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ContainerViewController__AddViewControllerCoroutine_d__16*>::get(),
                                                 "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___newViewController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
constexpr ::System::Action_2<float_t, ::ArrayW<::UnityW<::HMUI::ViewController>, ::Array<::UnityW<::HMUI::ViewController>>*>>*&
HMUI::ContainerViewController__AddViewControllerCoroutine_d__16::__cordl_internal_get_animationLayouter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___animationLayouter;
}
constexpr ::System::Action_2<float_t, ::ArrayW<::UnityW<::HMUI::ViewController>, ::Array<::UnityW<::HMUI::ViewController>>*>>* const&
HMUI::ContainerViewController__AddViewControllerCoroutine_d__16::__cordl_internal_get_animationLayouter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___animationLayouter;
}
constexpr void HMUI::ContainerViewController__AddViewControllerCoroutine_d__16::__cordl_internal_set_animationLayouter(
    ::System::Action_2<float_t, ::ArrayW<::UnityW<::HMUI::ViewController>, ::Array<::UnityW<::HMUI::ViewController>>*>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___animationLayouter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___finishedCallback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityW<::HMUI::ViewController>, ::Array<::UnityW<::HMUI::ViewController>>*>&
HMUI::ContainerViewController__AddViewControllerCoroutine_d__16::__cordl_internal_get__viewControllers_5__2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____viewControllers_5__2;
}
constexpr ::ArrayW<::UnityW<::HMUI::ViewController>, ::Array<::UnityW<::HMUI::ViewController>>*> const&
HMUI::ContainerViewController__AddViewControllerCoroutine_d__16::__cordl_internal_get__viewControllers_5__2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____viewControllers_5__2;
}
constexpr void HMUI::ContainerViewController__AddViewControllerCoroutine_d__16::__cordl_internal_set__viewControllers_5__2(
    ::ArrayW<::UnityW<::HMUI::ViewController>, ::Array<::UnityW<::HMUI::ViewController>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____viewControllers_5__2)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ContainerViewController__AddViewControllerCoroutine_d__16*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
inline void HMUI::ContainerViewController__AddViewControllerCoroutine_d__16::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ContainerViewController__AddViewControllerCoroutine_d__16*>::get(),
                                               "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool HMUI::ContainerViewController__AddViewControllerCoroutine_d__16::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ContainerViewController__AddViewControllerCoroutine_d__16*>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Object* HMUI::ContainerViewController__AddViewControllerCoroutine_d__16::System_Collections_Generic_IEnumerator_System_Object__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ContainerViewController__AddViewControllerCoroutine_d__16*>::get(),
                                  "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void HMUI::ContainerViewController__AddViewControllerCoroutine_d__16::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ContainerViewController__AddViewControllerCoroutine_d__16*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* HMUI::ContainerViewController__AddViewControllerCoroutine_d__16::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ContainerViewController__AddViewControllerCoroutine_d__16*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::HMUI::ContainerViewController__AddViewControllerCoroutine_d__16* HMUI::ContainerViewController__AddViewControllerCoroutine_d__16::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HMUI::ContainerViewController__AddViewControllerCoroutine_d__16*>(__1__state));
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ContainerViewController__RemoveViewControllersCoroutine_d__18::*)(int32_t)>(
    &::HMUI::ContainerViewController__RemoveViewControllersCoroutine_d__18::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2283a2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ContainerViewController__RemoveViewControllersCoroutine_d__18*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ContainerViewController__RemoveViewControllersCoroutine_d__18.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ContainerViewController__RemoveViewControllersCoroutine_d__18::*)()>(
    &::HMUI::ContainerViewController__RemoveViewControllersCoroutine_d__18::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2283f98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ContainerViewController__RemoveViewControllersCoroutine_d__18*>::get(),
                                                 "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ContainerViewController__RemoveViewControllersCoroutine_d__18.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HMUI::ContainerViewController__RemoveViewControllersCoroutine_d__18::*)()>(
    &::HMUI::ContainerViewController__RemoveViewControllersCoroutine_d__18::MoveNext)> {
  constexpr static std::size_t size = 0x308;
  constexpr static std::size_t addrs = 0x2283f9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ContainerViewController__RemoveViewControllersCoroutine_d__18*>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ContainerViewController__RemoveViewControllersCoroutine_d__18.System_Collections_Generic_IEnumerator_System_Object__get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::HMUI::ContainerViewController__RemoveViewControllersCoroutine_d__18::*)()>(
    &::HMUI::ContainerViewController__RemoveViewControllersCoroutine_d__18::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22842a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ContainerViewController__RemoveViewControllersCoroutine_d__18*>::get(),
                                    "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ContainerViewController__RemoveViewControllersCoroutine_d__18.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ContainerViewController__RemoveViewControllersCoroutine_d__18::*)()>(
    &::HMUI::ContainerViewController__RemoveViewControllersCoroutine_d__18::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x22842ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ContainerViewController__RemoveViewControllersCoroutine_d__18*>::get(),
                                                 "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ContainerViewController__RemoveViewControllersCoroutine_d__18.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::HMUI::ContainerViewController__RemoveViewControllersCoroutine_d__18::*)()>(
    &::HMUI::ContainerViewController__RemoveViewControllersCoroutine_d__18::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22842e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ContainerViewController__RemoveViewControllersCoroutine_d__18*>::get(),
                                                 "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityW<::HMUI::ViewController>, ::Array<::UnityW<::HMUI::ViewController>>*>&
HMUI::ContainerViewController__RemoveViewControllersCoroutine_d__18::__cordl_internal_get_viewControllersToRemove() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___viewControllersToRemove;
}
constexpr ::ArrayW<::UnityW<::HMUI::ViewController>, ::Array<::UnityW<::HMUI::ViewController>>*> const&
HMUI::ContainerViewController__RemoveViewControllersCoroutine_d__18::__cordl_internal_get_viewControllersToRemove() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___viewControllersToRemove;
}
constexpr void HMUI::ContainerViewController__RemoveViewControllersCoroutine_d__18::__cordl_internal_set_viewControllersToRemove(
    ::ArrayW<::UnityW<::HMUI::ViewController>, ::Array<::UnityW<::HMUI::ViewController>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___viewControllersToRemove)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
constexpr ::System::Action_3<float_t, ::ArrayW<::UnityW<::HMUI::ViewController>, ::Array<::UnityW<::HMUI::ViewController>>*>,
                             ::System::Collections::Generic::HashSet_1<::UnityW<::HMUI::ViewController>>*>*&
HMUI::ContainerViewController__RemoveViewControllersCoroutine_d__18::__cordl_internal_get_animationLayouter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___animationLayouter;
}
constexpr ::System::Action_3<float_t, ::ArrayW<::UnityW<::HMUI::ViewController>, ::Array<::UnityW<::HMUI::ViewController>>*>,
                             ::System::Collections::Generic::HashSet_1<::UnityW<::HMUI::ViewController>>*>* const&
HMUI::ContainerViewController__RemoveViewControllersCoroutine_d__18::__cordl_internal_get_animationLayouter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___animationLayouter;
}
constexpr void HMUI::ContainerViewController__RemoveViewControllersCoroutine_d__18::__cordl_internal_set_animationLayouter(
    ::System::Action_3<float_t, ::ArrayW<::UnityW<::HMUI::ViewController>, ::Array<::UnityW<::HMUI::ViewController>>*>, ::System::Collections::Generic::HashSet_1<::UnityW<::HMUI::ViewController>>*>*
        value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___animationLayouter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___finishedCallback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityW<::HMUI::ViewController>, ::Array<::UnityW<::HMUI::ViewController>>*>&
HMUI::ContainerViewController__RemoveViewControllersCoroutine_d__18::__cordl_internal_get__viewControllers_5__2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____viewControllers_5__2;
}
constexpr ::ArrayW<::UnityW<::HMUI::ViewController>, ::Array<::UnityW<::HMUI::ViewController>>*> const&
HMUI::ContainerViewController__RemoveViewControllersCoroutine_d__18::__cordl_internal_get__viewControllers_5__2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____viewControllers_5__2;
}
constexpr void HMUI::ContainerViewController__RemoveViewControllersCoroutine_d__18::__cordl_internal_set__viewControllers_5__2(
    ::ArrayW<::UnityW<::HMUI::ViewController>, ::Array<::UnityW<::HMUI::ViewController>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____viewControllers_5__2)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____viewControllersToRemoveSet_5__3)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ContainerViewController__RemoveViewControllersCoroutine_d__18*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
inline void HMUI::ContainerViewController__RemoveViewControllersCoroutine_d__18::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ContainerViewController__RemoveViewControllersCoroutine_d__18*>::get(),
                                               "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool HMUI::ContainerViewController__RemoveViewControllersCoroutine_d__18::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ContainerViewController__RemoveViewControllersCoroutine_d__18*>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Object* HMUI::ContainerViewController__RemoveViewControllersCoroutine_d__18::System_Collections_Generic_IEnumerator_System_Object__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ContainerViewController__RemoveViewControllersCoroutine_d__18*>::get(),
                                  "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void HMUI::ContainerViewController__RemoveViewControllersCoroutine_d__18::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ContainerViewController__RemoveViewControllersCoroutine_d__18*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* HMUI::ContainerViewController__RemoveViewControllersCoroutine_d__18::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ContainerViewController__RemoveViewControllersCoroutine_d__18*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::HMUI::ContainerViewController__RemoveViewControllersCoroutine_d__18* HMUI::ContainerViewController__RemoveViewControllersCoroutine_d__18::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HMUI::ContainerViewController__RemoveViewControllersCoroutine_d__18*>(__1__state));
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::RectTransform> (::HMUI::ContainerViewController::*)()>(
    &::HMUI::ContainerViewController::get_controllersContainer)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2282bc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ContainerViewController*>::get(),
                                                                               "get_controllersContainer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ContainerViewController.get_viewControllers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityW<::HMUI::ViewController>>* (::HMUI::ContainerViewController::*)()>(
    &::HMUI::ContainerViewController::get_viewControllers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2282c6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ContainerViewController*>::get(), "get_viewControllers",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ContainerViewController.__Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::HMUI::ContainerViewController::*)(::HMUI::Screen*, ::HMUI::ViewController*, ::HMUI::ContainerViewController*)>(&::HMUI::ContainerViewController::__Init)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2282c74;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ContainerViewController*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ContainerViewController*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ContainerViewController.LayoutViewControllers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ContainerViewController::*)(::System::Collections::Generic::List_1<::UnityW<::HMUI::ViewController>>*)>(
    &::HMUI::ContainerViewController::LayoutViewControllers)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ContainerViewController*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ContainerViewController*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ContainerViewController.__Activate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ContainerViewController::*)(bool, bool)>(&::HMUI::ContainerViewController::__Activate)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x2282e60;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ContainerViewController*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ContainerViewController*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ContainerViewController.__Deactivate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ContainerViewController::*)(bool, bool, bool)>(&::HMUI::ContainerViewController::__Deactivate)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x22830a0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ContainerViewController*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ContainerViewController*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ContainerViewController.DeactivateGameObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ContainerViewController::*)()>(&::HMUI::ContainerViewController::DeactivateGameObject)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x2283208;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ContainerViewController*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ContainerViewController*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ContainerViewController.ClearChildViewControllers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ContainerViewController::*)()>(&::HMUI::ContainerViewController::ClearChildViewControllers)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x2283338;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ContainerViewController*>::get(),
                                                                               "ClearChildViewControllers", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ContainerViewController.SetChildViewController
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ContainerViewController::*)(::HMUI::ViewController*)>(
    &::HMUI::ContainerViewController::SetChildViewController)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2283460;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ContainerViewController*>::get(), "SetChildViewController", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ContainerViewController.SetChildViewControllers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ContainerViewController::*)(::ArrayW<::HMUI::ViewController*, ::Array<::HMUI::ViewController*>*>)>(
    &::HMUI::ContainerViewController::SetChildViewControllers)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x2283500;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ContainerViewController*>::get(), "SetChildViewControllers", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::HMUI::ViewController*, ::Array<::HMUI::ViewController*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ContainerViewController.IsChildInTransition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HMUI::ContainerViewController::*)()>(&::HMUI::ContainerViewController::IsChildInTransition)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x2283658;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ContainerViewController*>::get(), "IsChildInTransition",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ContainerViewController.AddViewController
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ContainerViewController::*)(
    ::HMUI::ViewController*, ::System::Action*, ::System::Action_2<float_t, ::ArrayW<::UnityW<::HMUI::ViewController>, ::Array<::UnityW<::HMUI::ViewController>>*>>*, bool)>(
    &::HMUI::ContainerViewController::AddViewController)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x228374c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ContainerViewController*>::get(), "AddViewController", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<float_t, ::ArrayW<::UnityW<::HMUI::ViewController>, ::Array<::UnityW<::HMUI::ViewController>>*>>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ContainerViewController.AddViewControllerCoroutine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (
    ::HMUI::ContainerViewController::*)(::HMUI::ViewController*, ::System::Action*,
                                        ::System::Action_2<float_t, ::ArrayW<::UnityW<::HMUI::ViewController>, ::Array<::UnityW<::HMUI::ViewController>>*>>*, bool)>(
    &::HMUI::ContainerViewController::AddViewControllerCoroutine)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x22838c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ContainerViewController*>::get(), "AddViewControllerCoroutine", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<float_t, ::ArrayW<::UnityW<::HMUI::ViewController>, ::Array<::UnityW<::HMUI::ViewController>>*>>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ContainerViewController.RemoveViewControllers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ContainerViewController::*)(
    ::ArrayW<::HMUI::ViewController*, ::Array<::HMUI::ViewController*>*>, ::System::Action*,
    ::System::Action_3<float_t, ::ArrayW<::UnityW<::HMUI::ViewController>, ::Array<::UnityW<::HMUI::ViewController>>*>, ::System::Collections::Generic::HashSet_1<::UnityW<::HMUI::ViewController>>*>*,
    bool)>(&::HMUI::ContainerViewController::RemoveViewControllers)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2283974;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ContainerViewController*>::get(), "RemoveViewControllers", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::HMUI::ViewController*, ::Array<::HMUI::ViewController*>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_3<float_t, ::ArrayW<::UnityW<::HMUI::ViewController>, ::Array<::UnityW<::HMUI::ViewController>>*>,
                                                                                     ::System::Collections::Generic::HashSet_1<::UnityW<::HMUI::ViewController>>*>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ContainerViewController.RemoveViewControllersCoroutine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (
    ::HMUI::ContainerViewController::*)(::ArrayW<::HMUI::ViewController*, ::Array<::HMUI::ViewController*>*>, ::System::Action*,
                                        ::System::Action_3<float_t, ::ArrayW<::UnityW<::HMUI::ViewController>, ::Array<::UnityW<::HMUI::ViewController>>*>,
                                                           ::System::Collections::Generic::HashSet_1<::UnityW<::HMUI::ViewController>>*>*,
                                        bool)>(&::HMUI::ContainerViewController::RemoveViewControllersCoroutine)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x22839a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ContainerViewController*>::get(), "RemoveViewControllersCoroutine", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::HMUI::ViewController*, ::Array<::HMUI::ViewController*>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_3<float_t, ::ArrayW<::UnityW<::HMUI::ViewController>, ::Array<::UnityW<::HMUI::ViewController>>*>,
                                                                                     ::System::Collections::Generic::HashSet_1<::UnityW<::HMUI::ViewController>>*>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ContainerViewController.GetNewXPositionsForViewControllers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<float_t, ::Array<float_t>*> (::HMUI::ContainerViewController::*)(
    ::System::Collections::Generic::List_1<::UnityW<::HMUI::ViewController>>*, int32_t)>(&::HMUI::ContainerViewController::GetNewXPositionsForViewControllers)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x2283a54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ContainerViewController*>::get(), "GetNewXPositionsForViewControllers", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityW<::HMUI::ViewController>>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ContainerViewController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ContainerViewController::*)()>(&::HMUI::ContainerViewController::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2283c40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ContainerViewController*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____controllersContainer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____viewControllers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityW<::UnityEngine::RectTransform> HMUI::ContainerViewController::get_controllersContainer() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ContainerViewController*>::get(),
                                                                             "get_controllersContainer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RectTransform>, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityW<::HMUI::ViewController>>* HMUI::ContainerViewController::get_viewControllers() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ContainerViewController*>::get(), "get_viewControllers",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::HMUI::ViewController>>*, false>(this, ___internal_method);
}
inline void HMUI::ContainerViewController::__Init(::HMUI::Screen* screen, ::HMUI::ViewController* parentViewController, ::HMUI::ContainerViewController* containerViewController) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ContainerViewController*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, screen, parentViewController, containerViewController);
}
inline void HMUI::ContainerViewController::LayoutViewControllers(::System::Collections::Generic::List_1<::UnityW<::HMUI::ViewController>>* viewControllers) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ContainerViewController*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, viewControllers);
}
inline void HMUI::ContainerViewController::__Activate(bool addedToHierarchy, bool screenSystemEnabling) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ContainerViewController*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, addedToHierarchy, screenSystemEnabling);
}
inline void HMUI::ContainerViewController::__Deactivate(bool removedFromHierarchy, bool deactivateGameObject, bool screenSystemDisabling) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ContainerViewController*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, removedFromHierarchy, deactivateGameObject, screenSystemDisabling);
}
inline void HMUI::ContainerViewController::DeactivateGameObject() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ContainerViewController*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HMUI::ContainerViewController::ClearChildViewControllers() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ContainerViewController*>::get(),
                                                                             "ClearChildViewControllers", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HMUI::ContainerViewController::SetChildViewController(::HMUI::ViewController* viewController) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ContainerViewController*>::get(), "SetChildViewController", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, viewController);
}
inline void HMUI::ContainerViewController::SetChildViewControllers(::ArrayW<::HMUI::ViewController*, ::Array<::HMUI::ViewController*>*> viewControllers) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ContainerViewController*>::get(), "SetChildViewControllers", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::HMUI::ViewController*, ::Array<::HMUI::ViewController*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, viewControllers);
}
inline bool HMUI::ContainerViewController::IsChildInTransition() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ContainerViewController*>::get(), "IsChildInTransition",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void HMUI::ContainerViewController::AddViewController(::HMUI::ViewController* viewController, ::System::Action* finishedCallback,
                                                             ::System::Action_2<float_t, ::ArrayW<::UnityW<::HMUI::ViewController>, ::Array<::UnityW<::HMUI::ViewController>>*>>* animationLayouter,
                                                             bool immediately) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ContainerViewController*>::get(), "AddViewController", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<float_t, ::ArrayW<::UnityW<::HMUI::ViewController>, ::Array<::UnityW<::HMUI::ViewController>>*>>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, viewController, finishedCallback, animationLayouter, immediately);
}
inline ::System::Collections::IEnumerator*
HMUI::ContainerViewController::AddViewControllerCoroutine(::HMUI::ViewController* newViewController, ::System::Action* finishedCallback,
                                                          ::System::Action_2<float_t, ::ArrayW<::UnityW<::HMUI::ViewController>, ::Array<::UnityW<::HMUI::ViewController>>*>>* animationLayouter,
                                                          bool immediately) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ContainerViewController*>::get(), "AddViewControllerCoroutine", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<float_t, ::ArrayW<::UnityW<::HMUI::ViewController>, ::Array<::UnityW<::HMUI::ViewController>>*>>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method, newViewController, finishedCallback, animationLayouter, immediately);
}
inline void HMUI::ContainerViewController::RemoveViewControllers(::ArrayW<::HMUI::ViewController*, ::Array<::HMUI::ViewController*>*> viewControllers, ::System::Action* finishedCallback,
                                                                 ::System::Action_3<float_t, ::ArrayW<::UnityW<::HMUI::ViewController>, ::Array<::UnityW<::HMUI::ViewController>>*>,
                                                                                    ::System::Collections::Generic::HashSet_1<::UnityW<::HMUI::ViewController>>*>* animationLayouter,
                                                                 bool immediately) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ContainerViewController*>::get(), "RemoveViewControllers", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::HMUI::ViewController*, ::Array<::HMUI::ViewController*>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_3<float_t, ::ArrayW<::UnityW<::HMUI::ViewController>, ::Array<::UnityW<::HMUI::ViewController>>*>,
                                                                                   ::System::Collections::Generic::HashSet_1<::UnityW<::HMUI::ViewController>>*>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, viewControllers, finishedCallback, animationLayouter, immediately);
}
inline ::System::Collections::IEnumerator*
HMUI::ContainerViewController::RemoveViewControllersCoroutine(::ArrayW<::HMUI::ViewController*, ::Array<::HMUI::ViewController*>*> viewControllersToRemove, ::System::Action* finishedCallback,
                                                              ::System::Action_3<float_t, ::ArrayW<::UnityW<::HMUI::ViewController>, ::Array<::UnityW<::HMUI::ViewController>>*>,
                                                                                 ::System::Collections::Generic::HashSet_1<::UnityW<::HMUI::ViewController>>*>* animationLayouter,
                                                              bool immediately) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ContainerViewController*>::get(), "RemoveViewControllersCoroutine", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::HMUI::ViewController*, ::Array<::HMUI::ViewController*>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_3<float_t, ::ArrayW<::UnityW<::HMUI::ViewController>, ::Array<::UnityW<::HMUI::ViewController>>*>,
                                                                                   ::System::Collections::Generic::HashSet_1<::UnityW<::HMUI::ViewController>>*>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method, viewControllersToRemove, finishedCallback, animationLayouter, immediately);
}
inline ::ArrayW<float_t, ::Array<float_t>*> HMUI::ContainerViewController::GetNewXPositionsForViewControllers(::System::Collections::Generic::List_1<::UnityW<::HMUI::ViewController>>* viewControllers,
                                                                                                              int32_t exludeFromEndCount) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ContainerViewController*>::get(), "GetNewXPositionsForViewControllers", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityW<::HMUI::ViewController>>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<float_t, ::Array<float_t>*>, false>(this, ___internal_method, viewControllers, exludeFromEndCount);
}
inline void HMUI::ContainerViewController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ContainerViewController*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::HMUI::ContainerViewController* HMUI::ContainerViewController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HMUI::ContainerViewController*>());
}
// Ctor Parameters []
constexpr ::HMUI::ContainerViewController::ContainerViewController() {}
