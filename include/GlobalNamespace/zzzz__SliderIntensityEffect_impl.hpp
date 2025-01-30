#pragma once
// IWYU pragma private; include "GlobalNamespace/SliderIntensityEffect.hpp"
#include "GlobalNamespace/zzzz__EaseType_impl.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_impl.hpp"
#include "System/Collections/zzzz__IEnumerator_impl.hpp"
#include "System/zzzz__IDisposable_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SliderIntensityEffect_def.hpp"
#include "GlobalNamespace/zzzz__ArcVisibilityType_def.hpp"
#include "GlobalNamespace/zzzz__AudioTimeSyncController_def.hpp"
#include "GlobalNamespace/zzzz__EaseType_def.hpp"
#include "GlobalNamespace/zzzz__SliderIntensityEffect_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SliderIntensityEffect_InitData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SliderIntensityEffect_InitData::*)(::GlobalNamespace::ArcVisibilityType, bool)>(
    &::GlobalNamespace::SliderIntensityEffect_InitData::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x3b7c488;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderIntensityEffect_InitData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ArcVisibilityType>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::SliderIntensityEffect_InitData::__cordl_internal_get_sliderColorIntensity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sliderColorIntensity;
}
constexpr float_t const& GlobalNamespace::SliderIntensityEffect_InitData::__cordl_internal_get_sliderColorIntensity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sliderColorIntensity;
}
constexpr void GlobalNamespace::SliderIntensityEffect_InitData::__cordl_internal_set_sliderColorIntensity(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sliderColorIntensity = value;
}
constexpr float_t& GlobalNamespace::SliderIntensityEffect_InitData::__cordl_internal_get_hapticFeedback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hapticFeedback;
}
constexpr float_t const& GlobalNamespace::SliderIntensityEffect_InitData::__cordl_internal_get_hapticFeedback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hapticFeedback;
}
constexpr void GlobalNamespace::SliderIntensityEffect_InitData::__cordl_internal_set_hapticFeedback(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hapticFeedback = value;
}
inline void GlobalNamespace::SliderIntensityEffect_InitData::_ctor(::GlobalNamespace::ArcVisibilityType arcVisibilityType, bool hapticFeedbackEnabled) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderIntensityEffect_InitData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ArcVisibilityType>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, arcVisibilityType, hapticFeedbackEnabled);
}
inline ::GlobalNamespace::SliderIntensityEffect_InitData* GlobalNamespace::SliderIntensityEffect_InitData::New_ctor(::GlobalNamespace::ArcVisibilityType arcVisibilityType,
                                                                                                                    bool hapticFeedbackEnabled) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::SliderIntensityEffect_InitData*>(arcVisibilityType, hapticFeedbackEnabled));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SliderIntensityEffect_InitData::SliderIntensityEffect_InitData() {}
//  Writing Method size for method: ::GlobalNamespace::SliderIntensityEffect_FadeElement._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SliderIntensityEffect_FadeElement::*)(
    ::GlobalNamespace::EaseType, float_t, float_t, ::System::Action*)>(&::GlobalNamespace::SliderIntensityEffect_FadeElement::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x3b7c35c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderIntensityEffect_FadeElement*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EaseType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::SliderIntensityEffect_FadeElement::__cordl_internal_get_duration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___duration;
}
constexpr float_t const& GlobalNamespace::SliderIntensityEffect_FadeElement::__cordl_internal_get_duration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___duration;
}
constexpr void GlobalNamespace::SliderIntensityEffect_FadeElement::__cordl_internal_set_duration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___duration = value;
}
constexpr float_t& GlobalNamespace::SliderIntensityEffect_FadeElement::__cordl_internal_get_startIntensity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startIntensity;
}
constexpr float_t const& GlobalNamespace::SliderIntensityEffect_FadeElement::__cordl_internal_get_startIntensity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startIntensity;
}
constexpr void GlobalNamespace::SliderIntensityEffect_FadeElement::__cordl_internal_set_startIntensity(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___startIntensity = value;
}
constexpr float_t& GlobalNamespace::SliderIntensityEffect_FadeElement::__cordl_internal_get_endIntensity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___endIntensity;
}
constexpr float_t const& GlobalNamespace::SliderIntensityEffect_FadeElement::__cordl_internal_get_endIntensity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___endIntensity;
}
constexpr void GlobalNamespace::SliderIntensityEffect_FadeElement::__cordl_internal_set_endIntensity(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___endIntensity = value;
}
constexpr ::GlobalNamespace::EaseType& GlobalNamespace::SliderIntensityEffect_FadeElement::__cordl_internal_get_easeType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___easeType;
}
constexpr ::GlobalNamespace::EaseType const& GlobalNamespace::SliderIntensityEffect_FadeElement::__cordl_internal_get_easeType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___easeType;
}
constexpr void GlobalNamespace::SliderIntensityEffect_FadeElement::__cordl_internal_set_easeType(::GlobalNamespace::EaseType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___easeType = value;
}
constexpr ::System::Action*& GlobalNamespace::SliderIntensityEffect_FadeElement::__cordl_internal_get_startCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startCallback;
}
constexpr ::System::Action* const& GlobalNamespace::SliderIntensityEffect_FadeElement::__cordl_internal_get_startCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startCallback;
}
constexpr void GlobalNamespace::SliderIntensityEffect_FadeElement::__cordl_internal_set_startCallback(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___startCallback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::SliderIntensityEffect_FadeElement::_ctor(::GlobalNamespace::EaseType easeType, float_t startIntensity, float_t endIntensity, ::System::Action* startCallback) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderIntensityEffect_FadeElement*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EaseType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, easeType, startIntensity, endIntensity, startCallback);
}
inline ::GlobalNamespace::SliderIntensityEffect_FadeElement* GlobalNamespace::SliderIntensityEffect_FadeElement::New_ctor(::GlobalNamespace::EaseType easeType, float_t startIntensity,
                                                                                                                          float_t endIntensity, ::System::Action* startCallback) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::SliderIntensityEffect_FadeElement*>(easeType, startIntensity, endIntensity, startCallback));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SliderIntensityEffect_FadeElement::SliderIntensityEffect_FadeElement() {}
//  Writing Method size for method: ::GlobalNamespace::SliderIntensityEffect_IntensityCalculationDelegate._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SliderIntensityEffect_IntensityCalculationDelegate::*)(::System::Object*, ::System::IntPtr)>(
    &::GlobalNamespace::SliderIntensityEffect_IntensityCalculationDelegate::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x3b7c500;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderIntensityEffect_IntensityCalculationDelegate*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderIntensityEffect_IntensityCalculationDelegate.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::SliderIntensityEffect_IntensityCalculationDelegate::*)(float_t, float_t)>(
    &::GlobalNamespace::SliderIntensityEffect_IntensityCalculationDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3b7c58c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderIntensityEffect_IntensityCalculationDelegate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderIntensityEffect_IntensityCalculationDelegate*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderIntensityEffect_IntensityCalculationDelegate.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::GlobalNamespace::SliderIntensityEffect_IntensityCalculationDelegate::*)(float_t, float_t, ::System::AsyncCallback*, ::System::Object*)>(
        &::GlobalNamespace::SliderIntensityEffect_IntensityCalculationDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3b7c5a0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderIntensityEffect_IntensityCalculationDelegate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderIntensityEffect_IntensityCalculationDelegate*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderIntensityEffect_IntensityCalculationDelegate.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::SliderIntensityEffect_IntensityCalculationDelegate::*)(::System::IAsyncResult*)>(
    &::GlobalNamespace::SliderIntensityEffect_IntensityCalculationDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3b7c63c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderIntensityEffect_IntensityCalculationDelegate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderIntensityEffect_IntensityCalculationDelegate*>::get(), 15));
    return ___internal_method;
  }
};
inline void GlobalNamespace::SliderIntensityEffect_IntensityCalculationDelegate::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderIntensityEffect_IntensityCalculationDelegate*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline float_t GlobalNamespace::SliderIntensityEffect_IntensityCalculationDelegate::Invoke(float_t timeSinceLastSection, float_t timeSinceHeadNoteJump) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderIntensityEffect_IntensityCalculationDelegate*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, timeSinceLastSection, timeSinceHeadNoteJump);
}
inline ::System::IAsyncResult* GlobalNamespace::SliderIntensityEffect_IntensityCalculationDelegate::BeginInvoke(float_t timeSinceLastSection, float_t timeSinceHeadNoteJump,
                                                                                                                ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderIntensityEffect_IntensityCalculationDelegate*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, timeSinceLastSection, timeSinceHeadNoteJump, callback, object);
}
inline float_t GlobalNamespace::SliderIntensityEffect_IntensityCalculationDelegate::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderIntensityEffect_IntensityCalculationDelegate*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, result);
}
inline ::GlobalNamespace::SliderIntensityEffect_IntensityCalculationDelegate* GlobalNamespace::SliderIntensityEffect_IntensityCalculationDelegate::New_ctor(::System::Object* object,
                                                                                                                                                            ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::SliderIntensityEffect_IntensityCalculationDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SliderIntensityEffect_IntensityCalculationDelegate::SliderIntensityEffect_IntensityCalculationDelegate() {}
//  Writing Method size for method: ::GlobalNamespace::SliderIntensityEffect__ProcessEffectCoroutine_d__27._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SliderIntensityEffect__ProcessEffectCoroutine_d__27::*)(int32_t)>(
    &::GlobalNamespace::SliderIntensityEffect__ProcessEffectCoroutine_d__27::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3b7c40c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderIntensityEffect__ProcessEffectCoroutine_d__27*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderIntensityEffect__ProcessEffectCoroutine_d__27.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SliderIntensityEffect__ProcessEffectCoroutine_d__27::*)()>(
    &::GlobalNamespace::SliderIntensityEffect__ProcessEffectCoroutine_d__27::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3b7c664;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderIntensityEffect__ProcessEffectCoroutine_d__27*>::get(),
                                                 "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderIntensityEffect__ProcessEffectCoroutine_d__27.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::SliderIntensityEffect__ProcessEffectCoroutine_d__27::*)()>(
    &::GlobalNamespace::SliderIntensityEffect__ProcessEffectCoroutine_d__27::MoveNext)> {
  constexpr static std::size_t size = 0x388;
  constexpr static std::size_t addrs = 0x3b7c680;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderIntensityEffect__ProcessEffectCoroutine_d__27*>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderIntensityEffect__ProcessEffectCoroutine_d__27.__m__Finally1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SliderIntensityEffect__ProcessEffectCoroutine_d__27::*)()>(
    &::GlobalNamespace::SliderIntensityEffect__ProcessEffectCoroutine_d__27::__m__Finally1)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3b7ca08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderIntensityEffect__ProcessEffectCoroutine_d__27*>::get(),
                                                 "<>m__Finally1", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderIntensityEffect__ProcessEffectCoroutine_d__27.System_Collections_Generic_IEnumerator_System_Object__get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::SliderIntensityEffect__ProcessEffectCoroutine_d__27::*)()>(
    &::GlobalNamespace::SliderIntensityEffect__ProcessEffectCoroutine_d__27::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3b7cab8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderIntensityEffect__ProcessEffectCoroutine_d__27*>::get(),
                                    "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderIntensityEffect__ProcessEffectCoroutine_d__27.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SliderIntensityEffect__ProcessEffectCoroutine_d__27::*)()>(
    &::GlobalNamespace::SliderIntensityEffect__ProcessEffectCoroutine_d__27::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x3b7cac0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderIntensityEffect__ProcessEffectCoroutine_d__27*>::get(),
                                                 "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderIntensityEffect__ProcessEffectCoroutine_d__27.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::SliderIntensityEffect__ProcessEffectCoroutine_d__27::*)()>(
    &::GlobalNamespace::SliderIntensityEffect__ProcessEffectCoroutine_d__27::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3b7caf8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderIntensityEffect__ProcessEffectCoroutine_d__27*>::get(),
                                                 "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::SliderIntensityEffect__ProcessEffectCoroutine_d__27::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::SliderIntensityEffect__ProcessEffectCoroutine_d__27::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void GlobalNamespace::SliderIntensityEffect__ProcessEffectCoroutine_d__27::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::SliderIntensityEffect__ProcessEffectCoroutine_d__27::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::SliderIntensityEffect__ProcessEffectCoroutine_d__27::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void GlobalNamespace::SliderIntensityEffect__ProcessEffectCoroutine_d__27::__cordl_internal_set___2__current(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::SliderIntensityEffect_FadeElement*>*&
GlobalNamespace::SliderIntensityEffect__ProcessEffectCoroutine_d__27::__cordl_internal_get_fadeElements() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fadeElements;
}
constexpr ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::SliderIntensityEffect_FadeElement*>* const&
GlobalNamespace::SliderIntensityEffect__ProcessEffectCoroutine_d__27::__cordl_internal_get_fadeElements() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fadeElements;
}
constexpr void GlobalNamespace::SliderIntensityEffect__ProcessEffectCoroutine_d__27::__cordl_internal_set_fadeElements(
    ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::SliderIntensityEffect_FadeElement*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___fadeElements)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::SliderIntensityEffect>& GlobalNamespace::SliderIntensityEffect__ProcessEffectCoroutine_d__27::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::SliderIntensityEffect> const& GlobalNamespace::SliderIntensityEffect__ProcessEffectCoroutine_d__27::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::SliderIntensityEffect__ProcessEffectCoroutine_d__27::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::SliderIntensityEffect> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::SliderIntensityEffect_FadeElement*>*&
GlobalNamespace::SliderIntensityEffect__ProcessEffectCoroutine_d__27::__cordl_internal_get___7__wrap1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap1;
}
constexpr ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::SliderIntensityEffect_FadeElement*>* const&
GlobalNamespace::SliderIntensityEffect__ProcessEffectCoroutine_d__27::__cordl_internal_get___7__wrap1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap1;
}
constexpr void GlobalNamespace::SliderIntensityEffect__ProcessEffectCoroutine_d__27::__cordl_internal_set___7__wrap1(
    ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::SliderIntensityEffect_FadeElement*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____7__wrap1)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::SliderIntensityEffect_FadeElement*& GlobalNamespace::SliderIntensityEffect__ProcessEffectCoroutine_d__27::__cordl_internal_get__fadeElement_5__3() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fadeElement_5__3;
}
constexpr ::GlobalNamespace::SliderIntensityEffect_FadeElement* const& GlobalNamespace::SliderIntensityEffect__ProcessEffectCoroutine_d__27::__cordl_internal_get__fadeElement_5__3() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fadeElement_5__3;
}
constexpr void GlobalNamespace::SliderIntensityEffect__ProcessEffectCoroutine_d__27::__cordl_internal_set__fadeElement_5__3(::GlobalNamespace::SliderIntensityEffect_FadeElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____fadeElement_5__3)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::SliderIntensityEffect__ProcessEffectCoroutine_d__27::__cordl_internal_get__startTime_5__4() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startTime_5__4;
}
constexpr float_t const& GlobalNamespace::SliderIntensityEffect__ProcessEffectCoroutine_d__27::__cordl_internal_get__startTime_5__4() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startTime_5__4;
}
constexpr void GlobalNamespace::SliderIntensityEffect__ProcessEffectCoroutine_d__27::__cordl_internal_set__startTime_5__4(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____startTime_5__4 = value;
}
inline void GlobalNamespace::SliderIntensityEffect__ProcessEffectCoroutine_d__27::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderIntensityEffect__ProcessEffectCoroutine_d__27*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::SliderIntensityEffect__ProcessEffectCoroutine_d__27::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderIntensityEffect__ProcessEffectCoroutine_d__27*>::get(),
                                               "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::SliderIntensityEffect__ProcessEffectCoroutine_d__27::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderIntensityEffect__ProcessEffectCoroutine_d__27*>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::SliderIntensityEffect__ProcessEffectCoroutine_d__27::__m__Finally1() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderIntensityEffect__ProcessEffectCoroutine_d__27*>::get(), "<>m__Finally1",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::SliderIntensityEffect__ProcessEffectCoroutine_d__27::System_Collections_Generic_IEnumerator_System_Object__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderIntensityEffect__ProcessEffectCoroutine_d__27*>::get(),
                                  "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void GlobalNamespace::SliderIntensityEffect__ProcessEffectCoroutine_d__27::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderIntensityEffect__ProcessEffectCoroutine_d__27*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::SliderIntensityEffect__ProcessEffectCoroutine_d__27::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderIntensityEffect__ProcessEffectCoroutine_d__27*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::SliderIntensityEffect__ProcessEffectCoroutine_d__27* GlobalNamespace::SliderIntensityEffect__ProcessEffectCoroutine_d__27::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::SliderIntensityEffect__ProcessEffectCoroutine_d__27*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr GlobalNamespace::SliderIntensityEffect__ProcessEffectCoroutine_d__27::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>*
GlobalNamespace::SliderIntensityEffect__ProcessEffectCoroutine_d__27::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr GlobalNamespace::SliderIntensityEffect__ProcessEffectCoroutine_d__27::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::SliderIntensityEffect__ProcessEffectCoroutine_d__27::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::SliderIntensityEffect__ProcessEffectCoroutine_d__27::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::SliderIntensityEffect__ProcessEffectCoroutine_d__27::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SliderIntensityEffect__ProcessEffectCoroutine_d__27::SliderIntensityEffect__ProcessEffectCoroutine_d__27() {}
//  Writing Method size for method: ::GlobalNamespace::SliderIntensityEffect.add_fadeInDidStartEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SliderIntensityEffect::*)(::System::Action*)>(
    &::GlobalNamespace::SliderIntensityEffect::add_fadeInDidStartEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3b79b7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderIntensityEffect*>::get(), "add_fadeInDidStartEvent",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderIntensityEffect.remove_fadeInDidStartEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SliderIntensityEffect::*)(::System::Action*)>(
    &::GlobalNamespace::SliderIntensityEffect::remove_fadeInDidStartEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3b7a07c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderIntensityEffect*>::get(), "remove_fadeInDidStartEvent",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderIntensityEffect.get_intensity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::SliderIntensityEffect::*)()>(&::GlobalNamespace::SliderIntensityEffect::get_intensity)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3b78640;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderIntensityEffect*>::get(),
                                                                               "get_intensity", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderIntensityEffect.get_colorIntensity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::SliderIntensityEffect::*)()>(
    &::GlobalNamespace::SliderIntensityEffect::get_colorIntensity)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3b7c0e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderIntensityEffect*>::get(),
                                                                               "get_colorIntensity", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderIntensityEffect.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SliderIntensityEffect::*)()>(&::GlobalNamespace::SliderIntensityEffect::Awake)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x3b7c108;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderIntensityEffect*>::get(), "Awake",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderIntensityEffect.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SliderIntensityEffect::*)(float_t, float_t, bool)>(
    &::GlobalNamespace::SliderIntensityEffect::Init)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x3b78c48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderIntensityEffect*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderIntensityEffect.ManualUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SliderIntensityEffect::*)(float_t, float_t)>(
    &::GlobalNamespace::SliderIntensityEffect::ManualUpdate)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x3b7a788;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderIntensityEffect*>::get(), "ManualUpdate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderIntensityEffect.ProcessEffectCoroutine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (
    ::GlobalNamespace::SliderIntensityEffect::*)(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::SliderIntensityEffect_FadeElement*>*)>(
    &::GlobalNamespace::SliderIntensityEffect::ProcessEffectCoroutine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x3b7c3a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderIntensityEffect*>::get(), "ProcessEffectCoroutine", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::SliderIntensityEffect_FadeElement*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderIntensityEffect.StartIntensityDipEffect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SliderIntensityEffect::*)()>(
    &::GlobalNamespace::SliderIntensityEffect::StartIntensityDipEffect)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x3b7b438;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderIntensityEffect*>::get(),
                                                                               "StartIntensityDipEffect", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderIntensityEffect.StartIntensityFadeInEffect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SliderIntensityEffect::*)()>(
    &::GlobalNamespace::SliderIntensityEffect::StartIntensityFadeInEffect)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x3b7b1ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderIntensityEffect*>::get(),
                                                                               "StartIntensityFadeInEffect", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderIntensityEffect._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SliderIntensityEffect::*)()>(&::GlobalNamespace::SliderIntensityEffect::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3b7c434;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderIntensityEffect*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderIntensityEffect._Awake_b__24_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SliderIntensityEffect::*)()>(&::GlobalNamespace::SliderIntensityEffect::_Awake_b__24_0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3b7c450;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderIntensityEffect*>::get(),
                                                                               "<Awake>b__24_0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderIntensityEffect._Awake_b__24_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SliderIntensityEffect::*)()>(&::GlobalNamespace::SliderIntensityEffect::_Awake_b__24_1)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3b7c46c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderIntensityEffect*>::get(),
                                                                               "<Awake>b__24_1", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::SliderIntensityEffect::__cordl_internal_get__longSliderHeadIntensity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____longSliderHeadIntensity;
}
constexpr float_t const& GlobalNamespace::SliderIntensityEffect::__cordl_internal_get__longSliderHeadIntensity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____longSliderHeadIntensity;
}
constexpr void GlobalNamespace::SliderIntensityEffect::__cordl_internal_set__longSliderHeadIntensity(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____longSliderHeadIntensity = value;
}
constexpr float_t& GlobalNamespace::SliderIntensityEffect::__cordl_internal_get__shortSliderHeadIntensity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shortSliderHeadIntensity;
}
constexpr float_t const& GlobalNamespace::SliderIntensityEffect::__cordl_internal_get__shortSliderHeadIntensity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shortSliderHeadIntensity;
}
constexpr void GlobalNamespace::SliderIntensityEffect::__cordl_internal_set__shortSliderHeadIntensity(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____shortSliderHeadIntensity = value;
}
constexpr float_t& GlobalNamespace::SliderIntensityEffect::__cordl_internal_get__tailIntensity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tailIntensity;
}
constexpr float_t const& GlobalNamespace::SliderIntensityEffect::__cordl_internal_get__tailIntensity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tailIntensity;
}
constexpr void GlobalNamespace::SliderIntensityEffect::__cordl_internal_set__tailIntensity(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____tailIntensity = value;
}
constexpr float_t& GlobalNamespace::SliderIntensityEffect::__cordl_internal_get__fadeOutDuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fadeOutDuration;
}
constexpr float_t const& GlobalNamespace::SliderIntensityEffect::__cordl_internal_get__fadeOutDuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fadeOutDuration;
}
constexpr void GlobalNamespace::SliderIntensityEffect::__cordl_internal_set__fadeOutDuration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fadeOutDuration = value;
}
constexpr float_t& GlobalNamespace::SliderIntensityEffect::__cordl_internal_get__stayOffDuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stayOffDuration;
}
constexpr float_t const& GlobalNamespace::SliderIntensityEffect::__cordl_internal_get__stayOffDuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stayOffDuration;
}
constexpr void GlobalNamespace::SliderIntensityEffect::__cordl_internal_set__stayOffDuration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____stayOffDuration = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioTimeSyncController>& GlobalNamespace::SliderIntensityEffect::__cordl_internal_get__audioTimeSyncController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioTimeSyncController;
}
constexpr ::UnityW<::GlobalNamespace::AudioTimeSyncController> const& GlobalNamespace::SliderIntensityEffect::__cordl_internal_get__audioTimeSyncController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioTimeSyncController;
}
constexpr void GlobalNamespace::SliderIntensityEffect::__cordl_internal_set__audioTimeSyncController(::UnityW<::GlobalNamespace::AudioTimeSyncController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____audioTimeSyncController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::SliderIntensityEffect_InitData*& GlobalNamespace::SliderIntensityEffect::__cordl_internal_get__initData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initData;
}
constexpr ::GlobalNamespace::SliderIntensityEffect_InitData* const& GlobalNamespace::SliderIntensityEffect::__cordl_internal_get__initData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initData;
}
constexpr void GlobalNamespace::SliderIntensityEffect::__cordl_internal_set__initData(::GlobalNamespace::SliderIntensityEffect_InitData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____initData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& GlobalNamespace::SliderIntensityEffect::__cordl_internal_get_fadeInDidStartEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fadeInDidStartEvent;
}
constexpr ::System::Action* const& GlobalNamespace::SliderIntensityEffect::__cordl_internal_get_fadeInDidStartEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fadeInDidStartEvent;
}
constexpr void GlobalNamespace::SliderIntensityEffect::__cordl_internal_set_fadeInDidStartEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___fadeInDidStartEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::SliderIntensityEffect::__cordl_internal_get__coreIntensity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____coreIntensity;
}
constexpr float_t const& GlobalNamespace::SliderIntensityEffect::__cordl_internal_get__coreIntensity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____coreIntensity;
}
constexpr void GlobalNamespace::SliderIntensityEffect::__cordl_internal_set__coreIntensity(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____coreIntensity = value;
}
constexpr float_t& GlobalNamespace::SliderIntensityEffect::__cordl_internal_get__effectIntensity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____effectIntensity;
}
constexpr float_t const& GlobalNamespace::SliderIntensityEffect::__cordl_internal_get__effectIntensity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____effectIntensity;
}
constexpr void GlobalNamespace::SliderIntensityEffect::__cordl_internal_set__effectIntensity(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____effectIntensity = value;
}
constexpr float_t& GlobalNamespace::SliderIntensityEffect::__cordl_internal_get__sliderDuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sliderDuration;
}
constexpr float_t const& GlobalNamespace::SliderIntensityEffect::__cordl_internal_get__sliderDuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sliderDuration;
}
constexpr void GlobalNamespace::SliderIntensityEffect::__cordl_internal_set__sliderDuration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sliderDuration = value;
}
constexpr float_t& GlobalNamespace::SliderIntensityEffect::__cordl_internal_get__headIntensity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headIntensity;
}
constexpr float_t const& GlobalNamespace::SliderIntensityEffect::__cordl_internal_get__headIntensity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headIntensity;
}
constexpr void GlobalNamespace::SliderIntensityEffect::__cordl_internal_set__headIntensity(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____headIntensity = value;
}
constexpr ::GlobalNamespace::SliderIntensityEffect_IntensityCalculationDelegate*& GlobalNamespace::SliderIntensityEffect::__cordl_internal_get__intensityCalculationDelegate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____intensityCalculationDelegate;
}
constexpr ::GlobalNamespace::SliderIntensityEffect_IntensityCalculationDelegate* const& GlobalNamespace::SliderIntensityEffect::__cordl_internal_get__intensityCalculationDelegate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____intensityCalculationDelegate;
}
constexpr void GlobalNamespace::SliderIntensityEffect::__cordl_internal_set__intensityCalculationDelegate(::GlobalNamespace::SliderIntensityEffect_IntensityCalculationDelegate* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____intensityCalculationDelegate)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::GlobalNamespace::SliderIntensityEffect_FadeElement*, ::Array<::GlobalNamespace::SliderIntensityEffect_FadeElement*>*>&
GlobalNamespace::SliderIntensityEffect::__cordl_internal_get__dipEffectFadeElements() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dipEffectFadeElements;
}
constexpr ::ArrayW<::GlobalNamespace::SliderIntensityEffect_FadeElement*, ::Array<::GlobalNamespace::SliderIntensityEffect_FadeElement*>*> const&
GlobalNamespace::SliderIntensityEffect::__cordl_internal_get__dipEffectFadeElements() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dipEffectFadeElements;
}
constexpr void GlobalNamespace::SliderIntensityEffect::__cordl_internal_set__dipEffectFadeElements(
    ::ArrayW<::GlobalNamespace::SliderIntensityEffect_FadeElement*, ::Array<::GlobalNamespace::SliderIntensityEffect_FadeElement*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____dipEffectFadeElements)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::GlobalNamespace::SliderIntensityEffect_FadeElement*, ::Array<::GlobalNamespace::SliderIntensityEffect_FadeElement*>*>&
GlobalNamespace::SliderIntensityEffect::__cordl_internal_get__fadeInEffectFadeElements() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fadeInEffectFadeElements;
}
constexpr ::ArrayW<::GlobalNamespace::SliderIntensityEffect_FadeElement*, ::Array<::GlobalNamespace::SliderIntensityEffect_FadeElement*>*> const&
GlobalNamespace::SliderIntensityEffect::__cordl_internal_get__fadeInEffectFadeElements() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fadeInEffectFadeElements;
}
constexpr void GlobalNamespace::SliderIntensityEffect::__cordl_internal_set__fadeInEffectFadeElements(
    ::ArrayW<::GlobalNamespace::SliderIntensityEffect_FadeElement*, ::Array<::GlobalNamespace::SliderIntensityEffect_FadeElement*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____fadeInEffectFadeElements)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::SliderIntensityEffect::add_fadeInDidStartEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderIntensityEffect*>::get(), "add_fadeInDidStartEvent",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::SliderIntensityEffect::remove_fadeInDidStartEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderIntensityEffect*>::get(), "remove_fadeInDidStartEvent",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::SliderIntensityEffect::get_intensity() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderIntensityEffect*>::get(), "get_intensity",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::SliderIntensityEffect::get_colorIntensity() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderIntensityEffect*>::get(),
                                                                             "get_colorIntensity", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::SliderIntensityEffect::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderIntensityEffect*>::get(), "Awake",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SliderIntensityEffect::Init(float_t sliderDuration, float_t initialHalfJumpDuration, bool startVisible) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderIntensityEffect*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sliderDuration, initialHalfJumpDuration, startVisible);
}
inline void GlobalNamespace::SliderIntensityEffect::ManualUpdate(float_t timeSinceHeadNoteJump, float_t halfJumpDuration) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderIntensityEffect*>::get(), "ManualUpdate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, timeSinceHeadNoteJump, halfJumpDuration);
}
inline ::System::Collections::IEnumerator*
GlobalNamespace::SliderIntensityEffect::ProcessEffectCoroutine(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::SliderIntensityEffect_FadeElement*>* fadeElements) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderIntensityEffect*>::get(), "ProcessEffectCoroutine", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::SliderIntensityEffect_FadeElement*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method, fadeElements);
}
inline void GlobalNamespace::SliderIntensityEffect::StartIntensityDipEffect() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderIntensityEffect*>::get(),
                                                                             "StartIntensityDipEffect", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SliderIntensityEffect::StartIntensityFadeInEffect() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderIntensityEffect*>::get(),
                                                                             "StartIntensityFadeInEffect", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SliderIntensityEffect::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderIntensityEffect*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SliderIntensityEffect::_Awake_b__24_0() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderIntensityEffect*>::get(), "<Awake>b__24_0",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SliderIntensityEffect::_Awake_b__24_1() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderIntensityEffect*>::get(), "<Awake>b__24_1",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::SliderIntensityEffect* GlobalNamespace::SliderIntensityEffect::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::SliderIntensityEffect*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SliderIntensityEffect::SliderIntensityEffect() {}
