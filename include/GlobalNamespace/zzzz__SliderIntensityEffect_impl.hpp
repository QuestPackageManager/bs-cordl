#pragma once
#include "GlobalNamespace/zzzz__EaseType_impl.hpp"
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
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__SliderIntensityEffect__InitData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SliderIntensityEffect__InitData::*)(::GlobalNamespace::ArcVisibilityType, bool)>(
    &::GlobalNamespace::__SliderIntensityEffect__InitData::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x26b103c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SliderIntensityEffect__InitData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ArcVisibilityType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::__SliderIntensityEffect__InitData::__cordl_internal_get_sliderColorIntensity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sliderColorIntensity;
}
constexpr float_t const& GlobalNamespace::__SliderIntensityEffect__InitData::__cordl_internal_get_sliderColorIntensity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sliderColorIntensity;
}
constexpr void GlobalNamespace::__SliderIntensityEffect__InitData::__cordl_internal_set_sliderColorIntensity(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sliderColorIntensity = value;
}
constexpr float_t& GlobalNamespace::__SliderIntensityEffect__InitData::__cordl_internal_get_hapticFeedback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hapticFeedback;
}
constexpr float_t const& GlobalNamespace::__SliderIntensityEffect__InitData::__cordl_internal_get_hapticFeedback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hapticFeedback;
}
constexpr void GlobalNamespace::__SliderIntensityEffect__InitData::__cordl_internal_set_hapticFeedback(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hapticFeedback = value;
}
inline ::GlobalNamespace::__SliderIntensityEffect__InitData* GlobalNamespace::__SliderIntensityEffect__InitData::New_ctor(::GlobalNamespace::ArcVisibilityType arcVisibilityType,
                                                                                                                          bool hapticFeedbackEnabled) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__SliderIntensityEffect__InitData*>(arcVisibilityType, hapticFeedbackEnabled));
}
inline void GlobalNamespace::__SliderIntensityEffect__InitData::_ctor(::GlobalNamespace::ArcVisibilityType arcVisibilityType, bool hapticFeedbackEnabled) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SliderIntensityEffect__InitData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ArcVisibilityType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, arcVisibilityType, hapticFeedbackEnabled);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__SliderIntensityEffect__InitData::__SliderIntensityEffect__InitData() {}
//  Writing Method size for method: ::GlobalNamespace::__SliderIntensityEffect__FadeElement._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SliderIntensityEffect__FadeElement::*)(
    ::GlobalNamespace::EaseType, float_t, float_t, ::System::Action*)>(&::GlobalNamespace::__SliderIntensityEffect__FadeElement::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x26b0ed4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SliderIntensityEffect__FadeElement*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EaseType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::__SliderIntensityEffect__FadeElement::__cordl_internal_get_duration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___duration;
}
constexpr float_t const& GlobalNamespace::__SliderIntensityEffect__FadeElement::__cordl_internal_get_duration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___duration;
}
constexpr void GlobalNamespace::__SliderIntensityEffect__FadeElement::__cordl_internal_set_duration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___duration = value;
}
constexpr float_t& GlobalNamespace::__SliderIntensityEffect__FadeElement::__cordl_internal_get_startIntensity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startIntensity;
}
constexpr float_t const& GlobalNamespace::__SliderIntensityEffect__FadeElement::__cordl_internal_get_startIntensity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startIntensity;
}
constexpr void GlobalNamespace::__SliderIntensityEffect__FadeElement::__cordl_internal_set_startIntensity(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___startIntensity = value;
}
constexpr float_t& GlobalNamespace::__SliderIntensityEffect__FadeElement::__cordl_internal_get_endIntensity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___endIntensity;
}
constexpr float_t const& GlobalNamespace::__SliderIntensityEffect__FadeElement::__cordl_internal_get_endIntensity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___endIntensity;
}
constexpr void GlobalNamespace::__SliderIntensityEffect__FadeElement::__cordl_internal_set_endIntensity(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___endIntensity = value;
}
constexpr ::GlobalNamespace::EaseType& GlobalNamespace::__SliderIntensityEffect__FadeElement::__cordl_internal_get_easeType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___easeType;
}
constexpr ::GlobalNamespace::EaseType const& GlobalNamespace::__SliderIntensityEffect__FadeElement::__cordl_internal_get_easeType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___easeType;
}
constexpr void GlobalNamespace::__SliderIntensityEffect__FadeElement::__cordl_internal_set_easeType(::GlobalNamespace::EaseType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___easeType = value;
}
constexpr ::System::Action*& GlobalNamespace::__SliderIntensityEffect__FadeElement::__cordl_internal_get_startCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startCallback;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& GlobalNamespace::__SliderIntensityEffect__FadeElement::__cordl_internal_get_startCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startCallback;
}
constexpr void GlobalNamespace::__SliderIntensityEffect__FadeElement::__cordl_internal_set_startCallback(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___startCallback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
/// @param startCallback: ::System::Action* (default: nullptr)
inline ::GlobalNamespace::__SliderIntensityEffect__FadeElement* GlobalNamespace::__SliderIntensityEffect__FadeElement::New_ctor(::GlobalNamespace::EaseType easeType, float_t startIntensity,
                                                                                                                                float_t endIntensity, ::System::Action* startCallback) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__SliderIntensityEffect__FadeElement*>(easeType, startIntensity, endIntensity, startCallback));
}
/// @param startCallback: ::System::Action* (default: nullptr)
inline void GlobalNamespace::__SliderIntensityEffect__FadeElement::_ctor(::GlobalNamespace::EaseType easeType, float_t startIntensity, float_t endIntensity, ::System::Action* startCallback) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SliderIntensityEffect__FadeElement*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EaseType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, easeType, startIntensity, endIntensity, startCallback);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__SliderIntensityEffect__FadeElement::__SliderIntensityEffect__FadeElement() {}
//  Writing Method size for method: ::GlobalNamespace::__SliderIntensityEffect__IntensityCalculationDelegate._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SliderIntensityEffect__IntensityCalculationDelegate::*)(::System::Object*, void*)>(
    &::GlobalNamespace::__SliderIntensityEffect__IntensityCalculationDelegate::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x26b10a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SliderIntensityEffect__IntensityCalculationDelegate*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SliderIntensityEffect__IntensityCalculationDelegate.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::__SliderIntensityEffect__IntensityCalculationDelegate::*)(float_t, float_t)>(
    &::GlobalNamespace::__SliderIntensityEffect__IntensityCalculationDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x26b116c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SliderIntensityEffect__IntensityCalculationDelegate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SliderIntensityEffect__IntensityCalculationDelegate*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SliderIntensityEffect__IntensityCalculationDelegate.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::GlobalNamespace::__SliderIntensityEffect__IntensityCalculationDelegate::*)(float_t, float_t, ::System::AsyncCallback*, ::System::Object*)>(
        &::GlobalNamespace::__SliderIntensityEffect__IntensityCalculationDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x26b1180;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SliderIntensityEffect__IntensityCalculationDelegate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SliderIntensityEffect__IntensityCalculationDelegate*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SliderIntensityEffect__IntensityCalculationDelegate.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::__SliderIntensityEffect__IntensityCalculationDelegate::*)(::System::IAsyncResult*)>(
    &::GlobalNamespace::__SliderIntensityEffect__IntensityCalculationDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x26b1218;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SliderIntensityEffect__IntensityCalculationDelegate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SliderIntensityEffect__IntensityCalculationDelegate*>::get(), 15));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__SliderIntensityEffect__IntensityCalculationDelegate* GlobalNamespace::__SliderIntensityEffect__IntensityCalculationDelegate::New_ctor(::System::Object* object,
                                                                                                                                                                  void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__SliderIntensityEffect__IntensityCalculationDelegate*>(object, method));
}
inline void GlobalNamespace::__SliderIntensityEffect__IntensityCalculationDelegate::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SliderIntensityEffect__IntensityCalculationDelegate*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline float_t GlobalNamespace::__SliderIntensityEffect__IntensityCalculationDelegate::Invoke(float_t timeSinceLastSection, float_t timeSinceHeadNoteJump) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SliderIntensityEffect__IntensityCalculationDelegate*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, timeSinceLastSection, timeSinceHeadNoteJump);
}
inline ::System::IAsyncResult* GlobalNamespace::__SliderIntensityEffect__IntensityCalculationDelegate::BeginInvoke(float_t timeSinceLastSection, float_t timeSinceHeadNoteJump,
                                                                                                                   ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SliderIntensityEffect__IntensityCalculationDelegate*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, timeSinceLastSection, timeSinceHeadNoteJump, callback, object);
}
inline float_t GlobalNamespace::__SliderIntensityEffect__IntensityCalculationDelegate::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SliderIntensityEffect__IntensityCalculationDelegate*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__SliderIntensityEffect__IntensityCalculationDelegate::__SliderIntensityEffect__IntensityCalculationDelegate() {}
//  Writing Method size for method: ::GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32::*)(int32_t)>(
    &::GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x26b0f8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32::*)()>(
    &::GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x26b1240;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32*>::get(),
                                                 "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32::*)()>(
    &::GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32::MoveNext)> {
  constexpr static std::size_t size = 0x38c;
  constexpr static std::size_t addrs = 0x26b125c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32*>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32.__m__Finally1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32::*)()>(
    &::GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32::__m__Finally1)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x26b15e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32*>::get(),
                                                 "<>m__Finally1", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32.System_Collections_Generic_IEnumerator_System_Object__get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32::*)()>(
    &::GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26b1698;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32*>::get(),
                                    "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32::*)()>(
    &::GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x26b16a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32*>::get(),
                                                 "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32::*)()>(
    &::GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26b16e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32*>::get(),
                                                 "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>*
GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr int32_t& GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32::__cordl_internal_set___2__current(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__SliderIntensityEffect__FadeElement*>*&
GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32::__cordl_internal_get_fadeElements() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fadeElements;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__SliderIntensityEffect__FadeElement*>*> const&
GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32::__cordl_internal_get_fadeElements() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fadeElements;
}
constexpr void GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32::__cordl_internal_set_fadeElements(
    ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__SliderIntensityEffect__FadeElement*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___fadeElements)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::SliderIntensityEffect>& GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::SliderIntensityEffect> const& GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::SliderIntensityEffect> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::__SliderIntensityEffect__FadeElement*>*&
GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32::__cordl_internal_get___7__wrap1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap1;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::__SliderIntensityEffect__FadeElement*>*> const&
GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32::__cordl_internal_get___7__wrap1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap1;
}
constexpr void GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32::__cordl_internal_set___7__wrap1(
    ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::__SliderIntensityEffect__FadeElement*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____7__wrap1)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__SliderIntensityEffect__FadeElement*& GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32::__cordl_internal_get__fadeElement_5__3() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fadeElement_5__3;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__SliderIntensityEffect__FadeElement*> const&
GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32::__cordl_internal_get__fadeElement_5__3() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fadeElement_5__3;
}
constexpr void GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32::__cordl_internal_set__fadeElement_5__3(::GlobalNamespace::__SliderIntensityEffect__FadeElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____fadeElement_5__3)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32::__cordl_internal_get__startTime_5__4() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startTime_5__4;
}
constexpr float_t const& GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32::__cordl_internal_get__startTime_5__4() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startTime_5__4;
}
constexpr void GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32::__cordl_internal_set__startTime_5__4(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____startTime_5__4 = value;
}
inline ::GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32* GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32*>(__1__state));
}
inline void GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32*>::get(),
                                               "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32*>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32::__m__Finally1() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32*>::get(),
                                               "<>m__Finally1", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32::System_Collections_Generic_IEnumerator_System_Object__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32*>::get(),
                                  "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32::__SliderIntensityEffect___ProcessEffectCoroutine_d__32() {}
//  Writing Method size for method: ::GlobalNamespace::SliderIntensityEffect.add_fadeInDidStartEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SliderIntensityEffect::*)(::System::Action*)>(
    &::GlobalNamespace::SliderIntensityEffect::add_fadeInDidStartEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x26aece8;

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
  constexpr static std::size_t addrs = 0x26af200;

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
  constexpr static std::size_t addrs = 0x26ad760;

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
  constexpr static std::size_t addrs = 0x26b0b84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderIntensityEffect*>::get(),
                                                                               "get_colorIntensity", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderIntensityEffect.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SliderIntensityEffect::*)()>(&::GlobalNamespace::SliderIntensityEffect::Awake)> {
  constexpr static std::size_t size = 0x328;
  constexpr static std::size_t addrs = 0x26b0bac;

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
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x26adc9c;

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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SliderIntensityEffect::*)(float_t)>(
    &::GlobalNamespace::SliderIntensityEffect::ManualUpdate)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x26af578;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderIntensityEffect*>::get(), "ManualUpdate", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderIntensityEffect.ProcessEffectCoroutine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (
    ::GlobalNamespace::SliderIntensityEffect::*)(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__SliderIntensityEffect__FadeElement*>*)>(
    &::GlobalNamespace::SliderIntensityEffect::ProcessEffectCoroutine)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x26b0f18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderIntensityEffect*>::get(), "ProcessEffectCoroutine", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__SliderIntensityEffect__FadeElement*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderIntensityEffect.StartIntensityDipEffect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SliderIntensityEffect::*)()>(
    &::GlobalNamespace::SliderIntensityEffect::StartIntensityDipEffect)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x26aff80;

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
  constexpr static std::size_t addrs = 0x26afd24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderIntensityEffect*>::get(),
                                                                               "StartIntensityFadeInEffect", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderIntensityEffect.StartFlashEffect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SliderIntensityEffect::*)()>(&::GlobalNamespace::SliderIntensityEffect::StartFlashEffect)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x26b0fb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderIntensityEffect*>::get(),
                                                                               "StartFlashEffect", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderIntensityEffect._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SliderIntensityEffect::*)()>(&::GlobalNamespace::SliderIntensityEffect::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x26b0fe4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderIntensityEffect*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderIntensityEffect._Awake_b__29_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SliderIntensityEffect::*)()>(&::GlobalNamespace::SliderIntensityEffect::_Awake_b__29_0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x26b1004;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderIntensityEffect*>::get(),
                                                                               "<Awake>b__29_0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderIntensityEffect._Awake_b__29_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SliderIntensityEffect::*)()>(&::GlobalNamespace::SliderIntensityEffect::_Awake_b__29_1)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x26b1020;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderIntensityEffect*>::get(),
                                                                               "<Awake>b__29_1", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
constexpr float_t& GlobalNamespace::SliderIntensityEffect::__cordl_internal_get__flashBoost() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____flashBoost;
}
constexpr float_t const& GlobalNamespace::SliderIntensityEffect::__cordl_internal_get__flashBoost() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____flashBoost;
}
constexpr void GlobalNamespace::SliderIntensityEffect::__cordl_internal_set__flashBoost(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____flashBoost = value;
}
constexpr float_t& GlobalNamespace::SliderIntensityEffect::__cordl_internal_get__flashInDuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____flashInDuration;
}
constexpr float_t const& GlobalNamespace::SliderIntensityEffect::__cordl_internal_get__flashInDuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____flashInDuration;
}
constexpr void GlobalNamespace::SliderIntensityEffect::__cordl_internal_set__flashInDuration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____flashInDuration = value;
}
constexpr float_t& GlobalNamespace::SliderIntensityEffect::__cordl_internal_get__flashOutDuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____flashOutDuration;
}
constexpr float_t const& GlobalNamespace::SliderIntensityEffect::__cordl_internal_get__flashOutDuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____flashOutDuration;
}
constexpr void GlobalNamespace::SliderIntensityEffect::__cordl_internal_set__flashOutDuration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____flashOutDuration = value;
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
constexpr ::GlobalNamespace::__SliderIntensityEffect__InitData*& GlobalNamespace::SliderIntensityEffect::__cordl_internal_get__initData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__SliderIntensityEffect__InitData*> const& GlobalNamespace::SliderIntensityEffect::__cordl_internal_get__initData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initData;
}
constexpr void GlobalNamespace::SliderIntensityEffect::__cordl_internal_set__initData(::GlobalNamespace::__SliderIntensityEffect__InitData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____initData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& GlobalNamespace::SliderIntensityEffect::__cordl_internal_get_fadeInDidStartEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fadeInDidStartEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& GlobalNamespace::SliderIntensityEffect::__cordl_internal_get_fadeInDidStartEvent() const {
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
constexpr float_t& GlobalNamespace::SliderIntensityEffect::__cordl_internal_get__halfJumpDuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____halfJumpDuration;
}
constexpr float_t const& GlobalNamespace::SliderIntensityEffect::__cordl_internal_get__halfJumpDuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____halfJumpDuration;
}
constexpr void GlobalNamespace::SliderIntensityEffect::__cordl_internal_set__halfJumpDuration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____halfJumpDuration = value;
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
constexpr float_t& GlobalNamespace::SliderIntensityEffect::__cordl_internal_get_headIntensity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headIntensity;
}
constexpr float_t const& GlobalNamespace::SliderIntensityEffect::__cordl_internal_get_headIntensity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headIntensity;
}
constexpr void GlobalNamespace::SliderIntensityEffect::__cordl_internal_set_headIntensity(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___headIntensity = value;
}
constexpr ::GlobalNamespace::__SliderIntensityEffect__IntensityCalculationDelegate*& GlobalNamespace::SliderIntensityEffect::__cordl_internal_get__intensityCalculationDelegate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____intensityCalculationDelegate;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__SliderIntensityEffect__IntensityCalculationDelegate*> const&
GlobalNamespace::SliderIntensityEffect::__cordl_internal_get__intensityCalculationDelegate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____intensityCalculationDelegate;
}
constexpr void GlobalNamespace::SliderIntensityEffect::__cordl_internal_set__intensityCalculationDelegate(::GlobalNamespace::__SliderIntensityEffect__IntensityCalculationDelegate* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____intensityCalculationDelegate)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::GlobalNamespace::__SliderIntensityEffect__FadeElement*, ::Array<::GlobalNamespace::__SliderIntensityEffect__FadeElement*>*>&
GlobalNamespace::SliderIntensityEffect::__cordl_internal_get__dipEffectFadeElements() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dipEffectFadeElements;
}
constexpr ::ArrayW<::GlobalNamespace::__SliderIntensityEffect__FadeElement*, ::Array<::GlobalNamespace::__SliderIntensityEffect__FadeElement*>*> const&
GlobalNamespace::SliderIntensityEffect::__cordl_internal_get__dipEffectFadeElements() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dipEffectFadeElements;
}
constexpr void GlobalNamespace::SliderIntensityEffect::__cordl_internal_set__dipEffectFadeElements(
    ::ArrayW<::GlobalNamespace::__SliderIntensityEffect__FadeElement*, ::Array<::GlobalNamespace::__SliderIntensityEffect__FadeElement*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____dipEffectFadeElements)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::GlobalNamespace::__SliderIntensityEffect__FadeElement*, ::Array<::GlobalNamespace::__SliderIntensityEffect__FadeElement*>*>&
GlobalNamespace::SliderIntensityEffect::__cordl_internal_get__flashEffectFadeElements() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____flashEffectFadeElements;
}
constexpr ::ArrayW<::GlobalNamespace::__SliderIntensityEffect__FadeElement*, ::Array<::GlobalNamespace::__SliderIntensityEffect__FadeElement*>*> const&
GlobalNamespace::SliderIntensityEffect::__cordl_internal_get__flashEffectFadeElements() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____flashEffectFadeElements;
}
constexpr void GlobalNamespace::SliderIntensityEffect::__cordl_internal_set__flashEffectFadeElements(
    ::ArrayW<::GlobalNamespace::__SliderIntensityEffect__FadeElement*, ::Array<::GlobalNamespace::__SliderIntensityEffect__FadeElement*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____flashEffectFadeElements)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::GlobalNamespace::__SliderIntensityEffect__FadeElement*, ::Array<::GlobalNamespace::__SliderIntensityEffect__FadeElement*>*>&
GlobalNamespace::SliderIntensityEffect::__cordl_internal_get__fadeInEffectFadeElements() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fadeInEffectFadeElements;
}
constexpr ::ArrayW<::GlobalNamespace::__SliderIntensityEffect__FadeElement*, ::Array<::GlobalNamespace::__SliderIntensityEffect__FadeElement*>*> const&
GlobalNamespace::SliderIntensityEffect::__cordl_internal_get__fadeInEffectFadeElements() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fadeInEffectFadeElements;
}
constexpr void GlobalNamespace::SliderIntensityEffect::__cordl_internal_set__fadeInEffectFadeElements(
    ::ArrayW<::GlobalNamespace::__SliderIntensityEffect__FadeElement*, ::Array<::GlobalNamespace::__SliderIntensityEffect__FadeElement*>*> value) {
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
inline void GlobalNamespace::SliderIntensityEffect::Init(float_t sliderDuration, float_t halfJumpDuration, bool startVisible) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderIntensityEffect*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sliderDuration, halfJumpDuration, startVisible);
}
inline void GlobalNamespace::SliderIntensityEffect::ManualUpdate(float_t timeSinceHeadNoteJump) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderIntensityEffect*>::get(), "ManualUpdate",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, timeSinceHeadNoteJump);
}
inline ::System::Collections::IEnumerator*
GlobalNamespace::SliderIntensityEffect::ProcessEffectCoroutine(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__SliderIntensityEffect__FadeElement*>* fadeElements) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderIntensityEffect*>::get(), "ProcessEffectCoroutine", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__SliderIntensityEffect__FadeElement*>*>::get() })));
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
inline void GlobalNamespace::SliderIntensityEffect::StartFlashEffect() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderIntensityEffect*>::get(),
                                                                             "StartFlashEffect", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::SliderIntensityEffect* GlobalNamespace::SliderIntensityEffect::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::SliderIntensityEffect*>());
}
inline void GlobalNamespace::SliderIntensityEffect::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderIntensityEffect*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SliderIntensityEffect::_Awake_b__29_0() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderIntensityEffect*>::get(), "<Awake>b__29_0",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SliderIntensityEffect::_Awake_b__29_1() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderIntensityEffect*>::get(), "<Awake>b__29_1",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SliderIntensityEffect::SliderIntensityEffect() {}
