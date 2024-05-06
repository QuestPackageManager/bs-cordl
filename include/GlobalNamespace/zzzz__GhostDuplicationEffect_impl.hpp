#pragma once
// IWYU pragma private; include "GlobalNamespace/GhostDuplicationEffect.hpp"
#include "GlobalNamespace/zzzz__EaseType_impl.hpp"
#include "GlobalNamespace/zzzz__GhostDuplicationEffect_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__GhostDuplicationEffect_def.hpp"
#include "GlobalNamespace/zzzz__EaseType_def.hpp"
#include "GlobalNamespace/zzzz__GhostDuplicationEffect_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Tweening/zzzz__TimeTweeningManager_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__CanvasGroup_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
// Ctor Parameters [CppParam { name: "startAlpha", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "startPosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "startSize", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "endAlpha", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "endPosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "endSize", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "duration", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "delay", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "easeType", ty:
// "::GlobalNamespace::EaseType", modifiers: "", def_value: Some("{}") }, CppParam { name: "distanceCurve", ty: "::UnityEngine::AnimationCurve*", modifiers: "", def_value: Some("nullptr") }, CppParam
// { name: "peakDistance", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "lastPhase", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__GhostDuplicationEffect__GhostEffectParams::__GhostDuplicationEffect__GhostEffectParams(float_t startAlpha, ::UnityEngine::Vector3 startPosition, float_t startSize,
                                                                                                                      float_t endAlpha, ::UnityEngine::Vector3 endPosition, float_t endSize,
                                                                                                                      float_t duration, float_t delay, ::GlobalNamespace::EaseType easeType,
                                                                                                                      ::UnityEngine::AnimationCurve* distanceCurve, float_t peakDistance,
                                                                                                                      bool lastPhase) noexcept {
  this->startAlpha = startAlpha;
  this->startPosition = startPosition;
  this->startSize = startSize;
  this->endAlpha = endAlpha;
  this->endPosition = endPosition;
  this->endSize = endSize;
  this->duration = duration;
  this->delay = delay;
  this->easeType = easeType;
  this->distanceCurve = distanceCurve;
  this->peakDistance = peakDistance;
  this->lastPhase = lastPhase;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__GhostDuplicationEffect__GhostEffectParams::__GhostDuplicationEffect__GhostEffectParams() {}
//  Writing Method size for method: ::GlobalNamespace::__GhostDuplicationEffect____c__DisplayClass7_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__GhostDuplicationEffect____c__DisplayClass7_0::*)()>(
    &::GlobalNamespace::__GhostDuplicationEffect____c__DisplayClass7_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26b9654;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GhostDuplicationEffect____c__DisplayClass7_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__GhostDuplicationEffect____c__DisplayClass7_0._Animate_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__GhostDuplicationEffect____c__DisplayClass7_0::*)(float_t)>(
    &::GlobalNamespace::__GhostDuplicationEffect____c__DisplayClass7_0::_Animate_b__0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x26b9928;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GhostDuplicationEffect____c__DisplayClass7_0*>::get(), "<Animate>b__0",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__GhostDuplicationEffect____c__DisplayClass7_0._Animate_b__1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__GhostDuplicationEffect____c__DisplayClass7_0::*)(float_t)>(
    &::GlobalNamespace::__GhostDuplicationEffect____c__DisplayClass7_0::_Animate_b__1)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x26b9940;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GhostDuplicationEffect____c__DisplayClass7_0*>::get(), "<Animate>b__1",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__GhostDuplicationEffect____c__DisplayClass7_0._Animate_b__2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__GhostDuplicationEffect____c__DisplayClass7_0::*)(::UnityEngine::Vector3)>(
    &::GlobalNamespace::__GhostDuplicationEffect____c__DisplayClass7_0::_Animate_b__2)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x26b996c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GhostDuplicationEffect____c__DisplayClass7_0*>::get(), "<Animate>b__2", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__GhostDuplicationEffect____c__DisplayClass7_0._Animate_b__3
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__GhostDuplicationEffect____c__DisplayClass7_0::*)(float_t)>(
    &::GlobalNamespace::__GhostDuplicationEffect____c__DisplayClass7_0::_Animate_b__3)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x26b99bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GhostDuplicationEffect____c__DisplayClass7_0*>::get(), "<Animate>b__3",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::GhostDuplicationEffect>& GlobalNamespace::__GhostDuplicationEffect____c__DisplayClass7_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::GhostDuplicationEffect> const& GlobalNamespace::__GhostDuplicationEffect____c__DisplayClass7_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::__GhostDuplicationEffect____c__DisplayClass7_0::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::GhostDuplicationEffect> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__GhostDuplicationEffect__GhostEffectParams& GlobalNamespace::__GhostDuplicationEffect____c__DisplayClass7_0::__cordl_internal_get_ghostEffectParams() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ghostEffectParams;
}
constexpr ::GlobalNamespace::__GhostDuplicationEffect__GhostEffectParams const& GlobalNamespace::__GhostDuplicationEffect____c__DisplayClass7_0::__cordl_internal_get_ghostEffectParams() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ghostEffectParams;
}
constexpr void GlobalNamespace::__GhostDuplicationEffect____c__DisplayClass7_0::__cordl_internal_set_ghostEffectParams(::GlobalNamespace::__GhostDuplicationEffect__GhostEffectParams value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ghostEffectParams = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::__GhostDuplicationEffect____c__DisplayClass7_0::__cordl_internal_get_direction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___direction;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::__GhostDuplicationEffect____c__DisplayClass7_0::__cordl_internal_get_direction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___direction;
}
constexpr void GlobalNamespace::__GhostDuplicationEffect____c__DisplayClass7_0::__cordl_internal_set_direction(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___direction = value;
}
inline ::GlobalNamespace::__GhostDuplicationEffect____c__DisplayClass7_0* GlobalNamespace::__GhostDuplicationEffect____c__DisplayClass7_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__GhostDuplicationEffect____c__DisplayClass7_0*>());
}
inline void GlobalNamespace::__GhostDuplicationEffect____c__DisplayClass7_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GhostDuplicationEffect____c__DisplayClass7_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__GhostDuplicationEffect____c__DisplayClass7_0::_Animate_b__0(float_t val) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GhostDuplicationEffect____c__DisplayClass7_0*>::get(), "<Animate>b__0",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, val);
}
inline void GlobalNamespace::__GhostDuplicationEffect____c__DisplayClass7_0::_Animate_b__1(float_t val) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GhostDuplicationEffect____c__DisplayClass7_0*>::get(), "<Animate>b__1",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, val);
}
inline void GlobalNamespace::__GhostDuplicationEffect____c__DisplayClass7_0::_Animate_b__2(::UnityEngine::Vector3 pos) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GhostDuplicationEffect____c__DisplayClass7_0*>::get(), "<Animate>b__2", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pos);
}
inline void GlobalNamespace::__GhostDuplicationEffect____c__DisplayClass7_0::_Animate_b__3(float_t val) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GhostDuplicationEffect____c__DisplayClass7_0*>::get(), "<Animate>b__3",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, val);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__GhostDuplicationEffect____c__DisplayClass7_0::__GhostDuplicationEffect____c__DisplayClass7_0() {}
//  Writing Method size for method: ::GlobalNamespace::__GhostDuplicationEffect___HideRedundantWithDelay_d__8._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__GhostDuplicationEffect___HideRedundantWithDelay_d__8::*)(int32_t)>(
    &::GlobalNamespace::__GhostDuplicationEffect___HideRedundantWithDelay_d__8::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x26b96d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GhostDuplicationEffect___HideRedundantWithDelay_d__8*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__GhostDuplicationEffect___HideRedundantWithDelay_d__8.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__GhostDuplicationEffect___HideRedundantWithDelay_d__8::*)()>(
    &::GlobalNamespace::__GhostDuplicationEffect___HideRedundantWithDelay_d__8::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x26b99fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GhostDuplicationEffect___HideRedundantWithDelay_d__8*>::get(),
                                                 "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__GhostDuplicationEffect___HideRedundantWithDelay_d__8.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__GhostDuplicationEffect___HideRedundantWithDelay_d__8::*)()>(
    &::GlobalNamespace::__GhostDuplicationEffect___HideRedundantWithDelay_d__8::MoveNext)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x26b9a00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GhostDuplicationEffect___HideRedundantWithDelay_d__8*>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__GhostDuplicationEffect___HideRedundantWithDelay_d__8.System_Collections_Generic_IEnumerator_System_Object__get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::__GhostDuplicationEffect___HideRedundantWithDelay_d__8::*)()>(
    &::GlobalNamespace::__GhostDuplicationEffect___HideRedundantWithDelay_d__8::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26b9afc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GhostDuplicationEffect___HideRedundantWithDelay_d__8*>::get(),
                                    "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__GhostDuplicationEffect___HideRedundantWithDelay_d__8.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__GhostDuplicationEffect___HideRedundantWithDelay_d__8::*)()>(
    &::GlobalNamespace::__GhostDuplicationEffect___HideRedundantWithDelay_d__8::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x26b9b04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GhostDuplicationEffect___HideRedundantWithDelay_d__8*>::get(),
                                                 "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__GhostDuplicationEffect___HideRedundantWithDelay_d__8.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::__GhostDuplicationEffect___HideRedundantWithDelay_d__8::*)()>(
    &::GlobalNamespace::__GhostDuplicationEffect___HideRedundantWithDelay_d__8::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26b9b44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GhostDuplicationEffect___HideRedundantWithDelay_d__8*>::get(),
                                                 "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr GlobalNamespace::__GhostDuplicationEffect___HideRedundantWithDelay_d__8::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>*
GlobalNamespace::__GhostDuplicationEffect___HideRedundantWithDelay_d__8::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr GlobalNamespace::__GhostDuplicationEffect___HideRedundantWithDelay_d__8::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::__GhostDuplicationEffect___HideRedundantWithDelay_d__8::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::__GhostDuplicationEffect___HideRedundantWithDelay_d__8::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::__GhostDuplicationEffect___HideRedundantWithDelay_d__8::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr int32_t& GlobalNamespace::__GhostDuplicationEffect___HideRedundantWithDelay_d__8::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::__GhostDuplicationEffect___HideRedundantWithDelay_d__8::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void GlobalNamespace::__GhostDuplicationEffect___HideRedundantWithDelay_d__8::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::__GhostDuplicationEffect___HideRedundantWithDelay_d__8::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& GlobalNamespace::__GhostDuplicationEffect___HideRedundantWithDelay_d__8::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void GlobalNamespace::__GhostDuplicationEffect___HideRedundantWithDelay_d__8::__cordl_internal_set___2__current(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::__GhostDuplicationEffect___HideRedundantWithDelay_d__8::__cordl_internal_get_delay() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___delay;
}
constexpr float_t const& GlobalNamespace::__GhostDuplicationEffect___HideRedundantWithDelay_d__8::__cordl_internal_get_delay() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___delay;
}
constexpr void GlobalNamespace::__GhostDuplicationEffect___HideRedundantWithDelay_d__8::__cordl_internal_set_delay(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___delay = value;
}
constexpr ::UnityW<::GlobalNamespace::GhostDuplicationEffect>& GlobalNamespace::__GhostDuplicationEffect___HideRedundantWithDelay_d__8::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::GhostDuplicationEffect> const& GlobalNamespace::__GhostDuplicationEffect___HideRedundantWithDelay_d__8::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::__GhostDuplicationEffect___HideRedundantWithDelay_d__8::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::GhostDuplicationEffect> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__GhostDuplicationEffect___HideRedundantWithDelay_d__8* GlobalNamespace::__GhostDuplicationEffect___HideRedundantWithDelay_d__8::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__GhostDuplicationEffect___HideRedundantWithDelay_d__8*>(__1__state));
}
inline void GlobalNamespace::__GhostDuplicationEffect___HideRedundantWithDelay_d__8::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GhostDuplicationEffect___HideRedundantWithDelay_d__8*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::__GhostDuplicationEffect___HideRedundantWithDelay_d__8::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GhostDuplicationEffect___HideRedundantWithDelay_d__8*>::get(),
                                               "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::__GhostDuplicationEffect___HideRedundantWithDelay_d__8::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GhostDuplicationEffect___HideRedundantWithDelay_d__8*>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__GhostDuplicationEffect___HideRedundantWithDelay_d__8::System_Collections_Generic_IEnumerator_System_Object__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GhostDuplicationEffect___HideRedundantWithDelay_d__8*>::get(),
                                  "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void GlobalNamespace::__GhostDuplicationEffect___HideRedundantWithDelay_d__8::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GhostDuplicationEffect___HideRedundantWithDelay_d__8*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__GhostDuplicationEffect___HideRedundantWithDelay_d__8::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GhostDuplicationEffect___HideRedundantWithDelay_d__8*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__GhostDuplicationEffect___HideRedundantWithDelay_d__8::__GhostDuplicationEffect___HideRedundantWithDelay_d__8() {}
//  Writing Method size for method: ::GlobalNamespace::GhostDuplicationEffect.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GhostDuplicationEffect::*)()>(&::GlobalNamespace::GhostDuplicationEffect::OnDestroy)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x26b90fc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GhostDuplicationEffect*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GhostDuplicationEffect*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostDuplicationEffect.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GhostDuplicationEffect::*)()>(&::GlobalNamespace::GhostDuplicationEffect::Awake)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x26b9184;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GhostDuplicationEffect*>::get(), "Awake",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostDuplicationEffect.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GhostDuplicationEffect::*)()>(&::GlobalNamespace::GhostDuplicationEffect::Init)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x26b9194;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GhostDuplicationEffect*>::get(), "Init",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostDuplicationEffect.Animate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GhostDuplicationEffect::*)(::GlobalNamespace::__GhostDuplicationEffect__GhostEffectParams)>(
    &::GlobalNamespace::GhostDuplicationEffect::Animate)> {
  constexpr static std::size_t size = 0x3b4;
  constexpr static std::size_t addrs = 0x26b92a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GhostDuplicationEffect*>::get(), "Animate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__GhostDuplicationEffect__GhostEffectParams>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostDuplicationEffect.HideRedundantWithDelay
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::GhostDuplicationEffect::*)(float_t)>(
    &::GlobalNamespace::GhostDuplicationEffect::HideRedundantWithDelay)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x26b965c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GhostDuplicationEffect*>::get(), "HideRedundantWithDelay",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostDuplicationEffect.SetDistances
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GhostDuplicationEffect::*)(float_t, ::UnityEngine::Vector3)>(
    &::GlobalNamespace::GhostDuplicationEffect::SetDistances)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x26b96fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GhostDuplicationEffect*>::get(), "SetDistances", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostDuplicationEffect.set_hide
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GhostDuplicationEffect::*)(bool)>(&::GlobalNamespace::GhostDuplicationEffect::set_hide)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x26b97e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GhostDuplicationEffect*>::get(), "set_hide",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostDuplicationEffect.set_size
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GhostDuplicationEffect::*)(float_t)>(&::GlobalNamespace::GhostDuplicationEffect::set_size)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x26b9814;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GhostDuplicationEffect*>::get(), "set_size", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostDuplicationEffect.get_size
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::GhostDuplicationEffect::*)()>(&::GlobalNamespace::GhostDuplicationEffect::get_size)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x26b9898;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GhostDuplicationEffect*>::get(), "get_size",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostDuplicationEffect.set_alpha
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GhostDuplicationEffect::*)(float_t)>(
    &::GlobalNamespace::GhostDuplicationEffect::set_alpha)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x26b921c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GhostDuplicationEffect*>::get(), "set_alpha", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostDuplicationEffect.get_alpha
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::GhostDuplicationEffect::*)()>(&::GlobalNamespace::GhostDuplicationEffect::get_alpha)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x26b98e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GhostDuplicationEffect*>::get(), "get_alpha",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostDuplicationEffect._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GhostDuplicationEffect::*)()>(&::GlobalNamespace::GhostDuplicationEffect::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26b9920;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GhostDuplicationEffect*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::UnityEngine::CanvasGroup>, ::Array<::UnityW<::UnityEngine::CanvasGroup>>*>& GlobalNamespace::GhostDuplicationEffect::__cordl_internal_get__canvases() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____canvases;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::CanvasGroup>, ::Array<::UnityW<::UnityEngine::CanvasGroup>>*> const& GlobalNamespace::GhostDuplicationEffect::__cordl_internal_get__canvases() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____canvases;
}
constexpr void GlobalNamespace::GhostDuplicationEffect::__cordl_internal_set__canvases(::ArrayW<::UnityW<::UnityEngine::CanvasGroup>, ::Array<::UnityW<::UnityEngine::CanvasGroup>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____canvases)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::GhostDuplicationEffect::__cordl_internal_get_isInitialized() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isInitialized;
}
constexpr bool const& GlobalNamespace::GhostDuplicationEffect::__cordl_internal_get_isInitialized() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isInitialized;
}
constexpr void GlobalNamespace::GhostDuplicationEffect::__cordl_internal_set_isInitialized(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isInitialized = value;
}
constexpr ::UnityW<::Tweening::TimeTweeningManager>& GlobalNamespace::GhostDuplicationEffect::__cordl_internal_get__tweeningManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tweeningManager;
}
constexpr ::UnityW<::Tweening::TimeTweeningManager> const& GlobalNamespace::GhostDuplicationEffect::__cordl_internal_get__tweeningManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tweeningManager;
}
constexpr void GlobalNamespace::GhostDuplicationEffect::__cordl_internal_set__tweeningManager(::UnityW<::Tweening::TimeTweeningManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____tweeningManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::GhostDuplicationEffect::OnDestroy() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GhostDuplicationEffect*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::GhostDuplicationEffect::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GhostDuplicationEffect*>::get(), "Awake",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::GhostDuplicationEffect::Init() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GhostDuplicationEffect*>::get(), "Init",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::GhostDuplicationEffect::Animate(::GlobalNamespace::__GhostDuplicationEffect__GhostEffectParams ghostEffectParams) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GhostDuplicationEffect*>::get(), "Animate", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__GhostDuplicationEffect__GhostEffectParams>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ghostEffectParams);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::GhostDuplicationEffect::HideRedundantWithDelay(float_t delay) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GhostDuplicationEffect*>::get(), "HideRedundantWithDelay",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method, delay);
}
inline void GlobalNamespace::GhostDuplicationEffect::SetDistances(float_t distance, ::UnityEngine::Vector3 direction) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GhostDuplicationEffect*>::get(), "SetDistances", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, distance, direction);
}
inline void GlobalNamespace::GhostDuplicationEffect::set_hide(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GhostDuplicationEffect*>::get(), "set_hide",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::GhostDuplicationEffect::set_size(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GhostDuplicationEffect*>::get(), "set_size",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::GhostDuplicationEffect::get_size() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GhostDuplicationEffect*>::get(), "get_size",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::GhostDuplicationEffect::set_alpha(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GhostDuplicationEffect*>::get(), "set_alpha",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::GhostDuplicationEffect::get_alpha() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GhostDuplicationEffect*>::get(), "get_alpha",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline ::GlobalNamespace::GhostDuplicationEffect* GlobalNamespace::GhostDuplicationEffect::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::GhostDuplicationEffect*>());
}
inline void GlobalNamespace::GhostDuplicationEffect::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GhostDuplicationEffect*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GhostDuplicationEffect::GhostDuplicationEffect() {}
