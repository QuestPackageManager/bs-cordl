#pragma once
// IWYU pragma private; include "HMUI/ViewControllerTransitionHelpers.hpp"
#include "HMUI/zzzz__ViewController_impl.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_impl.hpp"
#include "System/Collections/zzzz__IEnumerator_impl.hpp"
#include "System/zzzz__IDisposable_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "HMUI/zzzz__ViewControllerTransitionHelpers_def.hpp"
#include "HMUI/zzzz__ViewControllerTransitionHelpers_def.hpp"
#include "HMUI/zzzz__ViewController_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::HMUI::ViewControllerTransitionHelpers___c__DisplayClass5_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ViewControllerTransitionHelpers___c__DisplayClass5_0::*)()>(
    &::HMUI::ViewControllerTransitionHelpers___c__DisplayClass5_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2291110;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewControllerTransitionHelpers___c__DisplayClass5_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewControllerTransitionHelpers___c__DisplayClass5_0._DoHorizontalTransition_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ViewControllerTransitionHelpers___c__DisplayClass5_0::*)(float_t)>(
    &::HMUI::ViewControllerTransitionHelpers___c__DisplayClass5_0::_DoHorizontalTransition_b__0)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2291118;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewControllerTransitionHelpers___c__DisplayClass5_0*>::get(), "<DoHorizontalTransition>b__0",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::HMUI::ViewController>& HMUI::ViewControllerTransitionHelpers___c__DisplayClass5_0::__cordl_internal_get_toPresentViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___toPresentViewController;
}
constexpr ::UnityW<::HMUI::ViewController> const& HMUI::ViewControllerTransitionHelpers___c__DisplayClass5_0::__cordl_internal_get_toPresentViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___toPresentViewController;
}
constexpr void HMUI::ViewControllerTransitionHelpers___c__DisplayClass5_0::__cordl_internal_set_toPresentViewController(::UnityW<::HMUI::ViewController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___toPresentViewController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& HMUI::ViewControllerTransitionHelpers___c__DisplayClass5_0::__cordl_internal_get_moveOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___moveOffset;
}
constexpr float_t const& HMUI::ViewControllerTransitionHelpers___c__DisplayClass5_0::__cordl_internal_get_moveOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___moveOffset;
}
constexpr void HMUI::ViewControllerTransitionHelpers___c__DisplayClass5_0::__cordl_internal_set_moveOffset(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___moveOffset = value;
}
constexpr ::UnityW<::HMUI::ViewController>& HMUI::ViewControllerTransitionHelpers___c__DisplayClass5_0::__cordl_internal_get_toDismissViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___toDismissViewController;
}
constexpr ::UnityW<::HMUI::ViewController> const& HMUI::ViewControllerTransitionHelpers___c__DisplayClass5_0::__cordl_internal_get_toDismissViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___toDismissViewController;
}
constexpr void HMUI::ViewControllerTransitionHelpers___c__DisplayClass5_0::__cordl_internal_set_toDismissViewController(::UnityW<::HMUI::ViewController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___toDismissViewController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& HMUI::ViewControllerTransitionHelpers___c__DisplayClass5_0::__cordl_internal_get_baseCanvasGroupAlpha() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___baseCanvasGroupAlpha;
}
constexpr float_t const& HMUI::ViewControllerTransitionHelpers___c__DisplayClass5_0::__cordl_internal_get_baseCanvasGroupAlpha() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___baseCanvasGroupAlpha;
}
constexpr void HMUI::ViewControllerTransitionHelpers___c__DisplayClass5_0::__cordl_internal_set_baseCanvasGroupAlpha(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___baseCanvasGroupAlpha = value;
}
inline void HMUI::ViewControllerTransitionHelpers___c__DisplayClass5_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewControllerTransitionHelpers___c__DisplayClass5_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HMUI::ViewControllerTransitionHelpers___c__DisplayClass5_0::_DoHorizontalTransition_b__0(float_t t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewControllerTransitionHelpers___c__DisplayClass5_0*>::get(), "<DoHorizontalTransition>b__0",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, t);
}
inline ::HMUI::ViewControllerTransitionHelpers___c__DisplayClass5_0* HMUI::ViewControllerTransitionHelpers___c__DisplayClass5_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HMUI::ViewControllerTransitionHelpers___c__DisplayClass5_0*>());
}
// Ctor Parameters []
constexpr ::HMUI::ViewControllerTransitionHelpers___c__DisplayClass5_0::ViewControllerTransitionHelpers___c__DisplayClass5_0() {}
//  Writing Method size for method: ::HMUI::ViewControllerTransitionHelpers___c__DisplayClass6_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ViewControllerTransitionHelpers___c__DisplayClass6_0::*)()>(
    &::HMUI::ViewControllerTransitionHelpers___c__DisplayClass6_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22911f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewControllerTransitionHelpers___c__DisplayClass6_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewControllerTransitionHelpers___c__DisplayClass6_0._DoVerticalTransition_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ViewControllerTransitionHelpers___c__DisplayClass6_0::*)(float_t)>(
    &::HMUI::ViewControllerTransitionHelpers___c__DisplayClass6_0::_DoVerticalTransition_b__0)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x22911f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewControllerTransitionHelpers___c__DisplayClass6_0*>::get(), "<DoVerticalTransition>b__0",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::HMUI::ViewController>& HMUI::ViewControllerTransitionHelpers___c__DisplayClass6_0::__cordl_internal_get_toPresentViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___toPresentViewController;
}
constexpr ::UnityW<::HMUI::ViewController> const& HMUI::ViewControllerTransitionHelpers___c__DisplayClass6_0::__cordl_internal_get_toPresentViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___toPresentViewController;
}
constexpr void HMUI::ViewControllerTransitionHelpers___c__DisplayClass6_0::__cordl_internal_set_toPresentViewController(::UnityW<::HMUI::ViewController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___toPresentViewController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& HMUI::ViewControllerTransitionHelpers___c__DisplayClass6_0::__cordl_internal_get_moveOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___moveOffset;
}
constexpr float_t const& HMUI::ViewControllerTransitionHelpers___c__DisplayClass6_0::__cordl_internal_get_moveOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___moveOffset;
}
constexpr void HMUI::ViewControllerTransitionHelpers___c__DisplayClass6_0::__cordl_internal_set_moveOffset(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___moveOffset = value;
}
constexpr float_t& HMUI::ViewControllerTransitionHelpers___c__DisplayClass6_0::__cordl_internal_get_baseCanvasGroupAlpha() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___baseCanvasGroupAlpha;
}
constexpr float_t const& HMUI::ViewControllerTransitionHelpers___c__DisplayClass6_0::__cordl_internal_get_baseCanvasGroupAlpha() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___baseCanvasGroupAlpha;
}
constexpr void HMUI::ViewControllerTransitionHelpers___c__DisplayClass6_0::__cordl_internal_set_baseCanvasGroupAlpha(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___baseCanvasGroupAlpha = value;
}
constexpr ::UnityW<::HMUI::ViewController>& HMUI::ViewControllerTransitionHelpers___c__DisplayClass6_0::__cordl_internal_get_toDismissViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___toDismissViewController;
}
constexpr ::UnityW<::HMUI::ViewController> const& HMUI::ViewControllerTransitionHelpers___c__DisplayClass6_0::__cordl_internal_get_toDismissViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___toDismissViewController;
}
constexpr void HMUI::ViewControllerTransitionHelpers___c__DisplayClass6_0::__cordl_internal_set_toDismissViewController(::UnityW<::HMUI::ViewController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___toDismissViewController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void HMUI::ViewControllerTransitionHelpers___c__DisplayClass6_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewControllerTransitionHelpers___c__DisplayClass6_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HMUI::ViewControllerTransitionHelpers___c__DisplayClass6_0::_DoVerticalTransition_b__0(float_t t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewControllerTransitionHelpers___c__DisplayClass6_0*>::get(), "<DoVerticalTransition>b__0",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, t);
}
inline ::HMUI::ViewControllerTransitionHelpers___c__DisplayClass6_0* HMUI::ViewControllerTransitionHelpers___c__DisplayClass6_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HMUI::ViewControllerTransitionHelpers___c__DisplayClass6_0*>());
}
// Ctor Parameters []
constexpr ::HMUI::ViewControllerTransitionHelpers___c__DisplayClass6_0::ViewControllerTransitionHelpers___c__DisplayClass6_0() {}
//  Writing Method size for method: ::HMUI::ViewControllerTransitionHelpers__AnimationCoroutine_d__8._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ViewControllerTransitionHelpers__AnimationCoroutine_d__8::*)(int32_t)>(
    &::HMUI::ViewControllerTransitionHelpers__AnimationCoroutine_d__8::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x22910e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewControllerTransitionHelpers__AnimationCoroutine_d__8*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewControllerTransitionHelpers__AnimationCoroutine_d__8.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ViewControllerTransitionHelpers__AnimationCoroutine_d__8::*)()>(
    &::HMUI::ViewControllerTransitionHelpers__AnimationCoroutine_d__8::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x22912dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewControllerTransitionHelpers__AnimationCoroutine_d__8*>::get(),
                                                 "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewControllerTransitionHelpers__AnimationCoroutine_d__8.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HMUI::ViewControllerTransitionHelpers__AnimationCoroutine_d__8::*)()>(
    &::HMUI::ViewControllerTransitionHelpers__AnimationCoroutine_d__8::MoveNext)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x22912e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewControllerTransitionHelpers__AnimationCoroutine_d__8*>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewControllerTransitionHelpers__AnimationCoroutine_d__8.System_Collections_Generic_IEnumerator_System_Object__get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::HMUI::ViewControllerTransitionHelpers__AnimationCoroutine_d__8::*)()>(
    &::HMUI::ViewControllerTransitionHelpers__AnimationCoroutine_d__8::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22913c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewControllerTransitionHelpers__AnimationCoroutine_d__8*>::get(),
                                    "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewControllerTransitionHelpers__AnimationCoroutine_d__8.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ViewControllerTransitionHelpers__AnimationCoroutine_d__8::*)()>(
    &::HMUI::ViewControllerTransitionHelpers__AnimationCoroutine_d__8::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x22913c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewControllerTransitionHelpers__AnimationCoroutine_d__8*>::get(),
                                                 "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewControllerTransitionHelpers__AnimationCoroutine_d__8.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::HMUI::ViewControllerTransitionHelpers__AnimationCoroutine_d__8::*)()>(
    &::HMUI::ViewControllerTransitionHelpers__AnimationCoroutine_d__8::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2291400;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewControllerTransitionHelpers__AnimationCoroutine_d__8*>::get(),
                                                 "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr int32_t& HMUI::ViewControllerTransitionHelpers__AnimationCoroutine_d__8::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& HMUI::ViewControllerTransitionHelpers__AnimationCoroutine_d__8::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void HMUI::ViewControllerTransitionHelpers__AnimationCoroutine_d__8::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::System::Object*& HMUI::ViewControllerTransitionHelpers__AnimationCoroutine_d__8::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::System::Object* const& HMUI::ViewControllerTransitionHelpers__AnimationCoroutine_d__8::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void HMUI::ViewControllerTransitionHelpers__AnimationCoroutine_d__8::__cordl_internal_set___2__current(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<float_t>*& HMUI::ViewControllerTransitionHelpers__AnimationCoroutine_d__8::__cordl_internal_get_transitionAnimation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___transitionAnimation;
}
constexpr ::System::Action_1<float_t>* const& HMUI::ViewControllerTransitionHelpers__AnimationCoroutine_d__8::__cordl_internal_get_transitionAnimation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___transitionAnimation;
}
constexpr void HMUI::ViewControllerTransitionHelpers__AnimationCoroutine_d__8::__cordl_internal_set_transitionAnimation(::System::Action_1<float_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___transitionAnimation)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& HMUI::ViewControllerTransitionHelpers__AnimationCoroutine_d__8::__cordl_internal_get__elapsedTime_5__2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____elapsedTime_5__2;
}
constexpr float_t const& HMUI::ViewControllerTransitionHelpers__AnimationCoroutine_d__8::__cordl_internal_get__elapsedTime_5__2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____elapsedTime_5__2;
}
constexpr void HMUI::ViewControllerTransitionHelpers__AnimationCoroutine_d__8::__cordl_internal_set__elapsedTime_5__2(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____elapsedTime_5__2 = value;
}
inline void HMUI::ViewControllerTransitionHelpers__AnimationCoroutine_d__8::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewControllerTransitionHelpers__AnimationCoroutine_d__8*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
inline void HMUI::ViewControllerTransitionHelpers__AnimationCoroutine_d__8::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewControllerTransitionHelpers__AnimationCoroutine_d__8*>::get(),
                                               "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool HMUI::ViewControllerTransitionHelpers__AnimationCoroutine_d__8::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewControllerTransitionHelpers__AnimationCoroutine_d__8*>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Object* HMUI::ViewControllerTransitionHelpers__AnimationCoroutine_d__8::System_Collections_Generic_IEnumerator_System_Object__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewControllerTransitionHelpers__AnimationCoroutine_d__8*>::get(),
                                  "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void HMUI::ViewControllerTransitionHelpers__AnimationCoroutine_d__8::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewControllerTransitionHelpers__AnimationCoroutine_d__8*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* HMUI::ViewControllerTransitionHelpers__AnimationCoroutine_d__8::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewControllerTransitionHelpers__AnimationCoroutine_d__8*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::HMUI::ViewControllerTransitionHelpers__AnimationCoroutine_d__8* HMUI::ViewControllerTransitionHelpers__AnimationCoroutine_d__8::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HMUI::ViewControllerTransitionHelpers__AnimationCoroutine_d__8*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr HMUI::ViewControllerTransitionHelpers__AnimationCoroutine_d__8::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>*
HMUI::ViewControllerTransitionHelpers__AnimationCoroutine_d__8::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr HMUI::ViewControllerTransitionHelpers__AnimationCoroutine_d__8::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* HMUI::ViewControllerTransitionHelpers__AnimationCoroutine_d__8::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr HMUI::ViewControllerTransitionHelpers__AnimationCoroutine_d__8::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* HMUI::ViewControllerTransitionHelpers__AnimationCoroutine_d__8::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::HMUI::ViewControllerTransitionHelpers__AnimationCoroutine_d__8::ViewControllerTransitionHelpers__AnimationCoroutine_d__8() {}
//  Writing Method size for method: ::HMUI::ViewControllerTransitionHelpers__DoDismissTransition_d__4._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ViewControllerTransitionHelpers__DoDismissTransition_d__4::*)(int32_t)>(
    &::HMUI::ViewControllerTransitionHelpers__DoDismissTransition_d__4::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2290f10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewControllerTransitionHelpers__DoDismissTransition_d__4*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewControllerTransitionHelpers__DoDismissTransition_d__4.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ViewControllerTransitionHelpers__DoDismissTransition_d__4::*)()>(
    &::HMUI::ViewControllerTransitionHelpers__DoDismissTransition_d__4::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2291408;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewControllerTransitionHelpers__DoDismissTransition_d__4*>::get(),
                                                 "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewControllerTransitionHelpers__DoDismissTransition_d__4.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HMUI::ViewControllerTransitionHelpers__DoDismissTransition_d__4::*)()>(
    &::HMUI::ViewControllerTransitionHelpers__DoDismissTransition_d__4::MoveNext)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x229140c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewControllerTransitionHelpers__DoDismissTransition_d__4*>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewControllerTransitionHelpers__DoDismissTransition_d__4.System_Collections_Generic_IEnumerator_System_Object__get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::HMUI::ViewControllerTransitionHelpers__DoDismissTransition_d__4::*)()>(
    &::HMUI::ViewControllerTransitionHelpers__DoDismissTransition_d__4::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22914a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewControllerTransitionHelpers__DoDismissTransition_d__4*>::get(),
                                    "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewControllerTransitionHelpers__DoDismissTransition_d__4.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ViewControllerTransitionHelpers__DoDismissTransition_d__4::*)()>(
    &::HMUI::ViewControllerTransitionHelpers__DoDismissTransition_d__4::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x22914a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewControllerTransitionHelpers__DoDismissTransition_d__4*>::get(),
                                                 "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewControllerTransitionHelpers__DoDismissTransition_d__4.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::HMUI::ViewControllerTransitionHelpers__DoDismissTransition_d__4::*)()>(
    &::HMUI::ViewControllerTransitionHelpers__DoDismissTransition_d__4::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22914e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewControllerTransitionHelpers__DoDismissTransition_d__4*>::get(),
                                                 "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr int32_t& HMUI::ViewControllerTransitionHelpers__DoDismissTransition_d__4::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& HMUI::ViewControllerTransitionHelpers__DoDismissTransition_d__4::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void HMUI::ViewControllerTransitionHelpers__DoDismissTransition_d__4::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::System::Object*& HMUI::ViewControllerTransitionHelpers__DoDismissTransition_d__4::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::System::Object* const& HMUI::ViewControllerTransitionHelpers__DoDismissTransition_d__4::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void HMUI::ViewControllerTransitionHelpers__DoDismissTransition_d__4::__cordl_internal_set___2__current(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::HMUI::ViewController_AnimationDirection& HMUI::ViewControllerTransitionHelpers__DoDismissTransition_d__4::__cordl_internal_get_animationDirection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___animationDirection;
}
constexpr ::HMUI::ViewController_AnimationDirection const& HMUI::ViewControllerTransitionHelpers__DoDismissTransition_d__4::__cordl_internal_get_animationDirection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___animationDirection;
}
constexpr void HMUI::ViewControllerTransitionHelpers__DoDismissTransition_d__4::__cordl_internal_set_animationDirection(::HMUI::ViewController_AnimationDirection value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___animationDirection = value;
}
constexpr ::UnityW<::HMUI::ViewController>& HMUI::ViewControllerTransitionHelpers__DoDismissTransition_d__4::__cordl_internal_get_toPresentViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___toPresentViewController;
}
constexpr ::UnityW<::HMUI::ViewController> const& HMUI::ViewControllerTransitionHelpers__DoDismissTransition_d__4::__cordl_internal_get_toPresentViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___toPresentViewController;
}
constexpr void HMUI::ViewControllerTransitionHelpers__DoDismissTransition_d__4::__cordl_internal_set_toPresentViewController(::UnityW<::HMUI::ViewController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___toPresentViewController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::HMUI::ViewController>& HMUI::ViewControllerTransitionHelpers__DoDismissTransition_d__4::__cordl_internal_get_toDismissViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___toDismissViewController;
}
constexpr ::UnityW<::HMUI::ViewController> const& HMUI::ViewControllerTransitionHelpers__DoDismissTransition_d__4::__cordl_internal_get_toDismissViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___toDismissViewController;
}
constexpr void HMUI::ViewControllerTransitionHelpers__DoDismissTransition_d__4::__cordl_internal_set_toDismissViewController(::UnityW<::HMUI::ViewController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___toDismissViewController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& HMUI::ViewControllerTransitionHelpers__DoDismissTransition_d__4::__cordl_internal_get_moveOffsetMultiplier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___moveOffsetMultiplier;
}
constexpr float_t const& HMUI::ViewControllerTransitionHelpers__DoDismissTransition_d__4::__cordl_internal_get_moveOffsetMultiplier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___moveOffsetMultiplier;
}
constexpr void HMUI::ViewControllerTransitionHelpers__DoDismissTransition_d__4::__cordl_internal_set_moveOffsetMultiplier(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___moveOffsetMultiplier = value;
}
inline void HMUI::ViewControllerTransitionHelpers__DoDismissTransition_d__4::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewControllerTransitionHelpers__DoDismissTransition_d__4*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
inline void HMUI::ViewControllerTransitionHelpers__DoDismissTransition_d__4::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewControllerTransitionHelpers__DoDismissTransition_d__4*>::get(),
                                               "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool HMUI::ViewControllerTransitionHelpers__DoDismissTransition_d__4::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewControllerTransitionHelpers__DoDismissTransition_d__4*>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Object* HMUI::ViewControllerTransitionHelpers__DoDismissTransition_d__4::System_Collections_Generic_IEnumerator_System_Object__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewControllerTransitionHelpers__DoDismissTransition_d__4*>::get(),
                                  "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void HMUI::ViewControllerTransitionHelpers__DoDismissTransition_d__4::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewControllerTransitionHelpers__DoDismissTransition_d__4*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* HMUI::ViewControllerTransitionHelpers__DoDismissTransition_d__4::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewControllerTransitionHelpers__DoDismissTransition_d__4*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::HMUI::ViewControllerTransitionHelpers__DoDismissTransition_d__4* HMUI::ViewControllerTransitionHelpers__DoDismissTransition_d__4::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HMUI::ViewControllerTransitionHelpers__DoDismissTransition_d__4*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr HMUI::ViewControllerTransitionHelpers__DoDismissTransition_d__4::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>*
HMUI::ViewControllerTransitionHelpers__DoDismissTransition_d__4::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr HMUI::ViewControllerTransitionHelpers__DoDismissTransition_d__4::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* HMUI::ViewControllerTransitionHelpers__DoDismissTransition_d__4::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr HMUI::ViewControllerTransitionHelpers__DoDismissTransition_d__4::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* HMUI::ViewControllerTransitionHelpers__DoDismissTransition_d__4::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::HMUI::ViewControllerTransitionHelpers__DoDismissTransition_d__4::ViewControllerTransitionHelpers__DoDismissTransition_d__4() {}
//  Writing Method size for method: ::HMUI::ViewControllerTransitionHelpers__DoHorizontalTransition_d__5._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ViewControllerTransitionHelpers__DoHorizontalTransition_d__5::*)(int32_t)>(
    &::HMUI::ViewControllerTransitionHelpers__DoHorizontalTransition_d__5::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2290fb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewControllerTransitionHelpers__DoHorizontalTransition_d__5*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewControllerTransitionHelpers__DoHorizontalTransition_d__5.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ViewControllerTransitionHelpers__DoHorizontalTransition_d__5::*)()>(
    &::HMUI::ViewControllerTransitionHelpers__DoHorizontalTransition_d__5::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x22914e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewControllerTransitionHelpers__DoHorizontalTransition_d__5*>::get(),
                                                 "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewControllerTransitionHelpers__DoHorizontalTransition_d__5.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HMUI::ViewControllerTransitionHelpers__DoHorizontalTransition_d__5::*)()>(
    &::HMUI::ViewControllerTransitionHelpers__DoHorizontalTransition_d__5::MoveNext)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x22914ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewControllerTransitionHelpers__DoHorizontalTransition_d__5*>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewControllerTransitionHelpers__DoHorizontalTransition_d__5.System_Collections_Generic_IEnumerator_System_Object__get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::HMUI::ViewControllerTransitionHelpers__DoHorizontalTransition_d__5::*)()>(
    &::HMUI::ViewControllerTransitionHelpers__DoHorizontalTransition_d__5::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2291640;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewControllerTransitionHelpers__DoHorizontalTransition_d__5*>::get(),
                                    "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewControllerTransitionHelpers__DoHorizontalTransition_d__5.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ViewControllerTransitionHelpers__DoHorizontalTransition_d__5::*)()>(
    &::HMUI::ViewControllerTransitionHelpers__DoHorizontalTransition_d__5::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2291648;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewControllerTransitionHelpers__DoHorizontalTransition_d__5*>::get(),
                                                 "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewControllerTransitionHelpers__DoHorizontalTransition_d__5.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::HMUI::ViewControllerTransitionHelpers__DoHorizontalTransition_d__5::*)()>(
    &::HMUI::ViewControllerTransitionHelpers__DoHorizontalTransition_d__5::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2291680;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewControllerTransitionHelpers__DoHorizontalTransition_d__5*>::get(),
                                                 "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr int32_t& HMUI::ViewControllerTransitionHelpers__DoHorizontalTransition_d__5::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& HMUI::ViewControllerTransitionHelpers__DoHorizontalTransition_d__5::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void HMUI::ViewControllerTransitionHelpers__DoHorizontalTransition_d__5::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::System::Object*& HMUI::ViewControllerTransitionHelpers__DoHorizontalTransition_d__5::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::System::Object* const& HMUI::ViewControllerTransitionHelpers__DoHorizontalTransition_d__5::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void HMUI::ViewControllerTransitionHelpers__DoHorizontalTransition_d__5::__cordl_internal_set___2__current(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::HMUI::ViewController>& HMUI::ViewControllerTransitionHelpers__DoHorizontalTransition_d__5::__cordl_internal_get_toPresentViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___toPresentViewController;
}
constexpr ::UnityW<::HMUI::ViewController> const& HMUI::ViewControllerTransitionHelpers__DoHorizontalTransition_d__5::__cordl_internal_get_toPresentViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___toPresentViewController;
}
constexpr void HMUI::ViewControllerTransitionHelpers__DoHorizontalTransition_d__5::__cordl_internal_set_toPresentViewController(::UnityW<::HMUI::ViewController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___toPresentViewController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::HMUI::ViewController>& HMUI::ViewControllerTransitionHelpers__DoHorizontalTransition_d__5::__cordl_internal_get_toDismissViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___toDismissViewController;
}
constexpr ::UnityW<::HMUI::ViewController> const& HMUI::ViewControllerTransitionHelpers__DoHorizontalTransition_d__5::__cordl_internal_get_toDismissViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___toDismissViewController;
}
constexpr void HMUI::ViewControllerTransitionHelpers__DoHorizontalTransition_d__5::__cordl_internal_set_toDismissViewController(::UnityW<::HMUI::ViewController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___toDismissViewController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& HMUI::ViewControllerTransitionHelpers__DoHorizontalTransition_d__5::__cordl_internal_get_moveOffsetMultiplier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___moveOffsetMultiplier;
}
constexpr float_t const& HMUI::ViewControllerTransitionHelpers__DoHorizontalTransition_d__5::__cordl_internal_get_moveOffsetMultiplier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___moveOffsetMultiplier;
}
constexpr void HMUI::ViewControllerTransitionHelpers__DoHorizontalTransition_d__5::__cordl_internal_set_moveOffsetMultiplier(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___moveOffsetMultiplier = value;
}
constexpr ::HMUI::ViewControllerTransitionHelpers___c__DisplayClass5_0*& HMUI::ViewControllerTransitionHelpers__DoHorizontalTransition_d__5::__cordl_internal_get___8__1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____8__1;
}
constexpr ::HMUI::ViewControllerTransitionHelpers___c__DisplayClass5_0* const& HMUI::ViewControllerTransitionHelpers__DoHorizontalTransition_d__5::__cordl_internal_get___8__1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____8__1;
}
constexpr void HMUI::ViewControllerTransitionHelpers__DoHorizontalTransition_d__5::__cordl_internal_set___8__1(::HMUI::ViewControllerTransitionHelpers___c__DisplayClass5_0* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____8__1)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void HMUI::ViewControllerTransitionHelpers__DoHorizontalTransition_d__5::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewControllerTransitionHelpers__DoHorizontalTransition_d__5*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
inline void HMUI::ViewControllerTransitionHelpers__DoHorizontalTransition_d__5::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewControllerTransitionHelpers__DoHorizontalTransition_d__5*>::get(),
                                               "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool HMUI::ViewControllerTransitionHelpers__DoHorizontalTransition_d__5::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewControllerTransitionHelpers__DoHorizontalTransition_d__5*>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Object* HMUI::ViewControllerTransitionHelpers__DoHorizontalTransition_d__5::System_Collections_Generic_IEnumerator_System_Object__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewControllerTransitionHelpers__DoHorizontalTransition_d__5*>::get(),
                                  "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void HMUI::ViewControllerTransitionHelpers__DoHorizontalTransition_d__5::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewControllerTransitionHelpers__DoHorizontalTransition_d__5*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* HMUI::ViewControllerTransitionHelpers__DoHorizontalTransition_d__5::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewControllerTransitionHelpers__DoHorizontalTransition_d__5*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::HMUI::ViewControllerTransitionHelpers__DoHorizontalTransition_d__5* HMUI::ViewControllerTransitionHelpers__DoHorizontalTransition_d__5::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HMUI::ViewControllerTransitionHelpers__DoHorizontalTransition_d__5*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr HMUI::ViewControllerTransitionHelpers__DoHorizontalTransition_d__5::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>*
HMUI::ViewControllerTransitionHelpers__DoHorizontalTransition_d__5::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr HMUI::ViewControllerTransitionHelpers__DoHorizontalTransition_d__5::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* HMUI::ViewControllerTransitionHelpers__DoHorizontalTransition_d__5::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr HMUI::ViewControllerTransitionHelpers__DoHorizontalTransition_d__5::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* HMUI::ViewControllerTransitionHelpers__DoHorizontalTransition_d__5::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::HMUI::ViewControllerTransitionHelpers__DoHorizontalTransition_d__5::ViewControllerTransitionHelpers__DoHorizontalTransition_d__5() {}
//  Writing Method size for method: ::HMUI::ViewControllerTransitionHelpers__DoPresentTransition_d__3._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ViewControllerTransitionHelpers__DoPresentTransition_d__3::*)(int32_t)>(
    &::HMUI::ViewControllerTransitionHelpers__DoPresentTransition_d__3::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2290ee8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewControllerTransitionHelpers__DoPresentTransition_d__3*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewControllerTransitionHelpers__DoPresentTransition_d__3.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ViewControllerTransitionHelpers__DoPresentTransition_d__3::*)()>(
    &::HMUI::ViewControllerTransitionHelpers__DoPresentTransition_d__3::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2291688;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewControllerTransitionHelpers__DoPresentTransition_d__3*>::get(),
                                                 "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewControllerTransitionHelpers__DoPresentTransition_d__3.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HMUI::ViewControllerTransitionHelpers__DoPresentTransition_d__3::*)()>(
    &::HMUI::ViewControllerTransitionHelpers__DoPresentTransition_d__3::MoveNext)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x229168c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewControllerTransitionHelpers__DoPresentTransition_d__3*>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewControllerTransitionHelpers__DoPresentTransition_d__3.System_Collections_Generic_IEnumerator_System_Object__get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::HMUI::ViewControllerTransitionHelpers__DoPresentTransition_d__3::*)()>(
    &::HMUI::ViewControllerTransitionHelpers__DoPresentTransition_d__3::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2291720;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewControllerTransitionHelpers__DoPresentTransition_d__3*>::get(),
                                    "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewControllerTransitionHelpers__DoPresentTransition_d__3.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ViewControllerTransitionHelpers__DoPresentTransition_d__3::*)()>(
    &::HMUI::ViewControllerTransitionHelpers__DoPresentTransition_d__3::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2291728;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewControllerTransitionHelpers__DoPresentTransition_d__3*>::get(),
                                                 "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewControllerTransitionHelpers__DoPresentTransition_d__3.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::HMUI::ViewControllerTransitionHelpers__DoPresentTransition_d__3::*)()>(
    &::HMUI::ViewControllerTransitionHelpers__DoPresentTransition_d__3::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2291760;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewControllerTransitionHelpers__DoPresentTransition_d__3*>::get(),
                                                 "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr int32_t& HMUI::ViewControllerTransitionHelpers__DoPresentTransition_d__3::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& HMUI::ViewControllerTransitionHelpers__DoPresentTransition_d__3::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void HMUI::ViewControllerTransitionHelpers__DoPresentTransition_d__3::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::System::Object*& HMUI::ViewControllerTransitionHelpers__DoPresentTransition_d__3::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::System::Object* const& HMUI::ViewControllerTransitionHelpers__DoPresentTransition_d__3::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void HMUI::ViewControllerTransitionHelpers__DoPresentTransition_d__3::__cordl_internal_set___2__current(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::HMUI::ViewController_AnimationDirection& HMUI::ViewControllerTransitionHelpers__DoPresentTransition_d__3::__cordl_internal_get_animationDirection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___animationDirection;
}
constexpr ::HMUI::ViewController_AnimationDirection const& HMUI::ViewControllerTransitionHelpers__DoPresentTransition_d__3::__cordl_internal_get_animationDirection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___animationDirection;
}
constexpr void HMUI::ViewControllerTransitionHelpers__DoPresentTransition_d__3::__cordl_internal_set_animationDirection(::HMUI::ViewController_AnimationDirection value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___animationDirection = value;
}
constexpr ::UnityW<::HMUI::ViewController>& HMUI::ViewControllerTransitionHelpers__DoPresentTransition_d__3::__cordl_internal_get_toPresentViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___toPresentViewController;
}
constexpr ::UnityW<::HMUI::ViewController> const& HMUI::ViewControllerTransitionHelpers__DoPresentTransition_d__3::__cordl_internal_get_toPresentViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___toPresentViewController;
}
constexpr void HMUI::ViewControllerTransitionHelpers__DoPresentTransition_d__3::__cordl_internal_set_toPresentViewController(::UnityW<::HMUI::ViewController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___toPresentViewController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::HMUI::ViewController>& HMUI::ViewControllerTransitionHelpers__DoPresentTransition_d__3::__cordl_internal_get_toDismissViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___toDismissViewController;
}
constexpr ::UnityW<::HMUI::ViewController> const& HMUI::ViewControllerTransitionHelpers__DoPresentTransition_d__3::__cordl_internal_get_toDismissViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___toDismissViewController;
}
constexpr void HMUI::ViewControllerTransitionHelpers__DoPresentTransition_d__3::__cordl_internal_set_toDismissViewController(::UnityW<::HMUI::ViewController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___toDismissViewController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& HMUI::ViewControllerTransitionHelpers__DoPresentTransition_d__3::__cordl_internal_get_moveOffsetMultiplier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___moveOffsetMultiplier;
}
constexpr float_t const& HMUI::ViewControllerTransitionHelpers__DoPresentTransition_d__3::__cordl_internal_get_moveOffsetMultiplier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___moveOffsetMultiplier;
}
constexpr void HMUI::ViewControllerTransitionHelpers__DoPresentTransition_d__3::__cordl_internal_set_moveOffsetMultiplier(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___moveOffsetMultiplier = value;
}
inline void HMUI::ViewControllerTransitionHelpers__DoPresentTransition_d__3::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewControllerTransitionHelpers__DoPresentTransition_d__3*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
inline void HMUI::ViewControllerTransitionHelpers__DoPresentTransition_d__3::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewControllerTransitionHelpers__DoPresentTransition_d__3*>::get(),
                                               "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool HMUI::ViewControllerTransitionHelpers__DoPresentTransition_d__3::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewControllerTransitionHelpers__DoPresentTransition_d__3*>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Object* HMUI::ViewControllerTransitionHelpers__DoPresentTransition_d__3::System_Collections_Generic_IEnumerator_System_Object__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewControllerTransitionHelpers__DoPresentTransition_d__3*>::get(),
                                  "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void HMUI::ViewControllerTransitionHelpers__DoPresentTransition_d__3::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewControllerTransitionHelpers__DoPresentTransition_d__3*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* HMUI::ViewControllerTransitionHelpers__DoPresentTransition_d__3::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewControllerTransitionHelpers__DoPresentTransition_d__3*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::HMUI::ViewControllerTransitionHelpers__DoPresentTransition_d__3* HMUI::ViewControllerTransitionHelpers__DoPresentTransition_d__3::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HMUI::ViewControllerTransitionHelpers__DoPresentTransition_d__3*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr HMUI::ViewControllerTransitionHelpers__DoPresentTransition_d__3::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>*
HMUI::ViewControllerTransitionHelpers__DoPresentTransition_d__3::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr HMUI::ViewControllerTransitionHelpers__DoPresentTransition_d__3::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* HMUI::ViewControllerTransitionHelpers__DoPresentTransition_d__3::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr HMUI::ViewControllerTransitionHelpers__DoPresentTransition_d__3::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* HMUI::ViewControllerTransitionHelpers__DoPresentTransition_d__3::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::HMUI::ViewControllerTransitionHelpers__DoPresentTransition_d__3::ViewControllerTransitionHelpers__DoPresentTransition_d__3() {}
//  Writing Method size for method: ::HMUI::ViewControllerTransitionHelpers__DoVerticalTransition_d__6._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ViewControllerTransitionHelpers__DoVerticalTransition_d__6::*)(int32_t)>(
    &::HMUI::ViewControllerTransitionHelpers__DoVerticalTransition_d__6::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2291058;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewControllerTransitionHelpers__DoVerticalTransition_d__6*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewControllerTransitionHelpers__DoVerticalTransition_d__6.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ViewControllerTransitionHelpers__DoVerticalTransition_d__6::*)()>(
    &::HMUI::ViewControllerTransitionHelpers__DoVerticalTransition_d__6::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2291768;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewControllerTransitionHelpers__DoVerticalTransition_d__6*>::get(),
                                                 "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewControllerTransitionHelpers__DoVerticalTransition_d__6.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HMUI::ViewControllerTransitionHelpers__DoVerticalTransition_d__6::*)()>(
    &::HMUI::ViewControllerTransitionHelpers__DoVerticalTransition_d__6::MoveNext)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x229176c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewControllerTransitionHelpers__DoVerticalTransition_d__6*>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewControllerTransitionHelpers__DoVerticalTransition_d__6.System_Collections_Generic_IEnumerator_System_Object__get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::HMUI::ViewControllerTransitionHelpers__DoVerticalTransition_d__6::*)()>(
    &::HMUI::ViewControllerTransitionHelpers__DoVerticalTransition_d__6::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22918c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewControllerTransitionHelpers__DoVerticalTransition_d__6*>::get(),
                                    "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewControllerTransitionHelpers__DoVerticalTransition_d__6.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ViewControllerTransitionHelpers__DoVerticalTransition_d__6::*)()>(
    &::HMUI::ViewControllerTransitionHelpers__DoVerticalTransition_d__6::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x22918cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewControllerTransitionHelpers__DoVerticalTransition_d__6*>::get(),
                                                 "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewControllerTransitionHelpers__DoVerticalTransition_d__6.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::HMUI::ViewControllerTransitionHelpers__DoVerticalTransition_d__6::*)()>(
    &::HMUI::ViewControllerTransitionHelpers__DoVerticalTransition_d__6::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2291904;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewControllerTransitionHelpers__DoVerticalTransition_d__6*>::get(),
                                                 "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr int32_t& HMUI::ViewControllerTransitionHelpers__DoVerticalTransition_d__6::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& HMUI::ViewControllerTransitionHelpers__DoVerticalTransition_d__6::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void HMUI::ViewControllerTransitionHelpers__DoVerticalTransition_d__6::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::System::Object*& HMUI::ViewControllerTransitionHelpers__DoVerticalTransition_d__6::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::System::Object* const& HMUI::ViewControllerTransitionHelpers__DoVerticalTransition_d__6::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void HMUI::ViewControllerTransitionHelpers__DoVerticalTransition_d__6::__cordl_internal_set___2__current(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::HMUI::ViewController>& HMUI::ViewControllerTransitionHelpers__DoVerticalTransition_d__6::__cordl_internal_get_toPresentViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___toPresentViewController;
}
constexpr ::UnityW<::HMUI::ViewController> const& HMUI::ViewControllerTransitionHelpers__DoVerticalTransition_d__6::__cordl_internal_get_toPresentViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___toPresentViewController;
}
constexpr void HMUI::ViewControllerTransitionHelpers__DoVerticalTransition_d__6::__cordl_internal_set_toPresentViewController(::UnityW<::HMUI::ViewController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___toPresentViewController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::HMUI::ViewController>& HMUI::ViewControllerTransitionHelpers__DoVerticalTransition_d__6::__cordl_internal_get_toDismissViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___toDismissViewController;
}
constexpr ::UnityW<::HMUI::ViewController> const& HMUI::ViewControllerTransitionHelpers__DoVerticalTransition_d__6::__cordl_internal_get_toDismissViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___toDismissViewController;
}
constexpr void HMUI::ViewControllerTransitionHelpers__DoVerticalTransition_d__6::__cordl_internal_set_toDismissViewController(::UnityW<::HMUI::ViewController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___toDismissViewController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& HMUI::ViewControllerTransitionHelpers__DoVerticalTransition_d__6::__cordl_internal_get_moveOffsetMultiplier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___moveOffsetMultiplier;
}
constexpr float_t const& HMUI::ViewControllerTransitionHelpers__DoVerticalTransition_d__6::__cordl_internal_get_moveOffsetMultiplier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___moveOffsetMultiplier;
}
constexpr void HMUI::ViewControllerTransitionHelpers__DoVerticalTransition_d__6::__cordl_internal_set_moveOffsetMultiplier(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___moveOffsetMultiplier = value;
}
constexpr ::HMUI::ViewControllerTransitionHelpers___c__DisplayClass6_0*& HMUI::ViewControllerTransitionHelpers__DoVerticalTransition_d__6::__cordl_internal_get___8__1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____8__1;
}
constexpr ::HMUI::ViewControllerTransitionHelpers___c__DisplayClass6_0* const& HMUI::ViewControllerTransitionHelpers__DoVerticalTransition_d__6::__cordl_internal_get___8__1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____8__1;
}
constexpr void HMUI::ViewControllerTransitionHelpers__DoVerticalTransition_d__6::__cordl_internal_set___8__1(::HMUI::ViewControllerTransitionHelpers___c__DisplayClass6_0* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____8__1)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void HMUI::ViewControllerTransitionHelpers__DoVerticalTransition_d__6::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewControllerTransitionHelpers__DoVerticalTransition_d__6*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
inline void HMUI::ViewControllerTransitionHelpers__DoVerticalTransition_d__6::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewControllerTransitionHelpers__DoVerticalTransition_d__6*>::get(),
                                               "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool HMUI::ViewControllerTransitionHelpers__DoVerticalTransition_d__6::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewControllerTransitionHelpers__DoVerticalTransition_d__6*>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Object* HMUI::ViewControllerTransitionHelpers__DoVerticalTransition_d__6::System_Collections_Generic_IEnumerator_System_Object__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewControllerTransitionHelpers__DoVerticalTransition_d__6*>::get(),
                                  "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void HMUI::ViewControllerTransitionHelpers__DoVerticalTransition_d__6::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewControllerTransitionHelpers__DoVerticalTransition_d__6*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* HMUI::ViewControllerTransitionHelpers__DoVerticalTransition_d__6::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewControllerTransitionHelpers__DoVerticalTransition_d__6*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::HMUI::ViewControllerTransitionHelpers__DoVerticalTransition_d__6* HMUI::ViewControllerTransitionHelpers__DoVerticalTransition_d__6::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HMUI::ViewControllerTransitionHelpers__DoVerticalTransition_d__6*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr HMUI::ViewControllerTransitionHelpers__DoVerticalTransition_d__6::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>*
HMUI::ViewControllerTransitionHelpers__DoVerticalTransition_d__6::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr HMUI::ViewControllerTransitionHelpers__DoVerticalTransition_d__6::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* HMUI::ViewControllerTransitionHelpers__DoVerticalTransition_d__6::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr HMUI::ViewControllerTransitionHelpers__DoVerticalTransition_d__6::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* HMUI::ViewControllerTransitionHelpers__DoVerticalTransition_d__6::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::HMUI::ViewControllerTransitionHelpers__DoVerticalTransition_d__6::ViewControllerTransitionHelpers__DoVerticalTransition_d__6() {}
//  Writing Method size for method: ::HMUI::ViewControllerTransitionHelpers.DoPresentTransition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::IEnumerator* (*)(::HMUI::ViewController*, ::HMUI::ViewController*, ::HMUI::ViewController_AnimationDirection, float_t)>(
        &::HMUI::ViewControllerTransitionHelpers::DoPresentTransition)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2290b7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewControllerTransitionHelpers*>::get(), "DoPresentTransition", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController_AnimationDirection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewControllerTransitionHelpers.DoDismissTransition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::IEnumerator* (*)(::HMUI::ViewController*, ::HMUI::ViewController*, ::HMUI::ViewController_AnimationDirection, float_t)>(
        &::HMUI::ViewControllerTransitionHelpers::DoDismissTransition)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x22907a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewControllerTransitionHelpers*>::get(), "DoDismissTransition", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController_AnimationDirection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewControllerTransitionHelpers.DoHorizontalTransition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (*)(::HMUI::ViewController*, ::HMUI::ViewController*, float_t)>(
    &::HMUI::ViewControllerTransitionHelpers::DoHorizontalTransition)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2290f38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewControllerTransitionHelpers*>::get(), "DoHorizontalTransition", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewControllerTransitionHelpers.DoVerticalTransition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (*)(::HMUI::ViewController*, ::HMUI::ViewController*, float_t)>(
    &::HMUI::ViewControllerTransitionHelpers::DoVerticalTransition)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2290fdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewControllerTransitionHelpers*>::get(), "DoVerticalTransition", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewControllerTransitionHelpers.ImmediateTransition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::HMUI::ViewController*, ::HMUI::ViewController*)>(
    &::HMUI::ViewControllerTransitionHelpers::ImmediateTransition)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x2290824;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewControllerTransitionHelpers*>::get(), "ImmediateTransition", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewControllerTransitionHelpers.AnimationCoroutine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (*)(::System::Action_1<float_t>*)>(
    &::HMUI::ViewControllerTransitionHelpers::AnimationCoroutine)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2291080;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewControllerTransitionHelpers*>::get(), "AnimationCoroutine", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<float_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ViewControllerTransitionHelpers._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ViewControllerTransitionHelpers::*)()>(&::HMUI::ViewControllerTransitionHelpers::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2291108;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewControllerTransitionHelpers*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::System::Collections::IEnumerator* HMUI::ViewControllerTransitionHelpers::DoPresentTransition(::HMUI::ViewController* toPresentViewController, ::HMUI::ViewController* toDismissViewController,
                                                                                                      ::HMUI::ViewController_AnimationDirection animationDirection, float_t moveOffsetMultiplier) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewControllerTransitionHelpers*>::get(), "DoPresentTransition", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController_AnimationDirection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(nullptr, ___internal_method, toPresentViewController, toDismissViewController, animationDirection,
                                                                                         moveOffsetMultiplier);
}
inline ::System::Collections::IEnumerator* HMUI::ViewControllerTransitionHelpers::DoDismissTransition(::HMUI::ViewController* toPresentViewController, ::HMUI::ViewController* toDismissViewController,
                                                                                                      ::HMUI::ViewController_AnimationDirection animationDirection, float_t moveOffsetMultiplier) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewControllerTransitionHelpers*>::get(), "DoDismissTransition", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController_AnimationDirection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(nullptr, ___internal_method, toPresentViewController, toDismissViewController, animationDirection,
                                                                                         moveOffsetMultiplier);
}
inline ::System::Collections::IEnumerator* HMUI::ViewControllerTransitionHelpers::DoHorizontalTransition(::HMUI::ViewController* toPresentViewController,
                                                                                                         ::HMUI::ViewController* toDismissViewController, float_t moveOffsetMultiplier) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewControllerTransitionHelpers*>::get(),
                                                                             "DoHorizontalTransition", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(nullptr, ___internal_method, toPresentViewController, toDismissViewController, moveOffsetMultiplier);
}
inline ::System::Collections::IEnumerator* HMUI::ViewControllerTransitionHelpers::DoVerticalTransition(::HMUI::ViewController* toPresentViewController, ::HMUI::ViewController* toDismissViewController,
                                                                                                       float_t moveOffsetMultiplier) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewControllerTransitionHelpers*>::get(),
                                                                             "DoVerticalTransition", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(nullptr, ___internal_method, toPresentViewController, toDismissViewController, moveOffsetMultiplier);
}
inline void HMUI::ViewControllerTransitionHelpers::ImmediateTransition(::HMUI::ViewController* toPresentViewController, ::HMUI::ViewController* toDismissViewController) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewControllerTransitionHelpers*>::get(), "ImmediateTransition", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, toPresentViewController, toDismissViewController);
}
inline ::System::Collections::IEnumerator* HMUI::ViewControllerTransitionHelpers::AnimationCoroutine(::System::Action_1<float_t>* transitionAnimation) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewControllerTransitionHelpers*>::get(), "AnimationCoroutine", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<float_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(nullptr, ___internal_method, transitionAnimation);
}
inline void HMUI::ViewControllerTransitionHelpers::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ViewControllerTransitionHelpers*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::HMUI::ViewControllerTransitionHelpers* HMUI::ViewControllerTransitionHelpers::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HMUI::ViewControllerTransitionHelpers*>());
}
// Ctor Parameters []
constexpr ::HMUI::ViewControllerTransitionHelpers::ViewControllerTransitionHelpers() {}
