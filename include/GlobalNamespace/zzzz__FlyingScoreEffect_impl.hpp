#pragma once
#include "GlobalNamespace/zzzz__FlyingObjectEffect_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "Zenject/zzzz__MonoMemoryPool_1_impl.hpp"
#include "GlobalNamespace/zzzz__FlyingScoreEffect_def.hpp"
#include "UnityEngine/zzzz__SpriteRenderer_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "GlobalNamespace/zzzz__ICutScoreBufferDidChangeReceiver_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "GlobalNamespace/zzzz__IReadonlyCutScoreBuffer_def.hpp"
#include "GlobalNamespace/zzzz__FlyingScoreEffect_def.hpp"
#include "GlobalNamespace/zzzz__ICutScoreBufferDidFinishReceiver_def.hpp"
#include "TMPro/zzzz__TextMeshPro_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "GlobalNamespace/zzzz__CutScoreBuffer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FlyingScoreEffect.InitAndPresent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FlyingScoreEffect::*)(
    ::GlobalNamespace::IReadonlyCutScoreBuffer*, float_t, ::UnityEngine::Vector3, ::UnityEngine::Color)>(&::GlobalNamespace::FlyingScoreEffect::InitAndPresent)> {
  constexpr static std::size_t size = 0x4e4;
  constexpr static std::size_t addrs = 0x2398790;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlyingScoreEffect*>::get(), "InitAndPresent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IReadonlyCutScoreBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FlyingScoreEffect.ManualUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FlyingScoreEffect::*)(float_t)>(&::GlobalNamespace::FlyingScoreEffect::ManualUpdate)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2398cfc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlyingScoreEffect*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlyingScoreEffect*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FlyingScoreEffect.HandleCutScoreBufferDidChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FlyingScoreEffect::*)(::GlobalNamespace::CutScoreBuffer*)>(
    &::GlobalNamespace::FlyingScoreEffect::HandleCutScoreBufferDidChange)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2398d84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlyingScoreEffect*>::get(), "HandleCutScoreBufferDidChange", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::CutScoreBuffer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FlyingScoreEffect.RefreshScore
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FlyingScoreEffect::*)(int32_t, int32_t)>(
    &::GlobalNamespace::FlyingScoreEffect::RefreshScore)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2398c74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlyingScoreEffect*>::get(), "RefreshScore", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FlyingScoreEffect.HandleCutScoreBufferDidFinish
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FlyingScoreEffect::*)(::GlobalNamespace::CutScoreBuffer*)>(
    &::GlobalNamespace::FlyingScoreEffect::HandleCutScoreBufferDidFinish)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2398dd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlyingScoreEffect*>::get(), "HandleCutScoreBufferDidFinish", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::CutScoreBuffer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FlyingScoreEffect.UnregisterCallbacksIfNeeded
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FlyingScoreEffect::*)()>(
    &::GlobalNamespace::FlyingScoreEffect::UnregisterCallbacksIfNeeded)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x2398dd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlyingScoreEffect*>::get(),
                                                                               "UnregisterCallbacksIfNeeded", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FlyingScoreEffect._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FlyingScoreEffect::*)()>(&::GlobalNamespace::FlyingScoreEffect::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2398efc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlyingScoreEffect*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::ICutScoreBufferDidChangeReceiver"
constexpr GlobalNamespace::FlyingScoreEffect::operator ::GlobalNamespace::ICutScoreBufferDidChangeReceiver*() noexcept {
  return static_cast<::GlobalNamespace::ICutScoreBufferDidChangeReceiver*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::ICutScoreBufferDidFinishReceiver"
constexpr GlobalNamespace::FlyingScoreEffect::operator ::GlobalNamespace::ICutScoreBufferDidFinishReceiver*() noexcept {
  return static_cast<::GlobalNamespace::ICutScoreBufferDidFinishReceiver*>(static_cast<void*>(this));
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::FlyingScoreEffect::__get__fadeAnimationCurve() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fadeAnimationCurve;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& GlobalNamespace::FlyingScoreEffect::__get__fadeAnimationCurve() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fadeAnimationCurve;
}
constexpr void GlobalNamespace::FlyingScoreEffect::__set__fadeAnimationCurve(::UnityEngine::AnimationCurve* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____fadeAnimationCurve)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::SpriteRenderer*& GlobalNamespace::FlyingScoreEffect::__get__maxCutDistanceScoreIndicator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxCutDistanceScoreIndicator;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::SpriteRenderer*> const& GlobalNamespace::FlyingScoreEffect::__get__maxCutDistanceScoreIndicator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxCutDistanceScoreIndicator;
}
constexpr void GlobalNamespace::FlyingScoreEffect::__set__maxCutDistanceScoreIndicator(::UnityEngine::SpriteRenderer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____maxCutDistanceScoreIndicator)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::TMPro::TextMeshPro*& GlobalNamespace::FlyingScoreEffect::__get__text() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____text;
}
constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshPro*> const& GlobalNamespace::FlyingScoreEffect::__get__text() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____text;
}
constexpr void GlobalNamespace::FlyingScoreEffect::__set__text(::TMPro::TextMeshPro* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____text)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Color& GlobalNamespace::FlyingScoreEffect::__get__color() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____color;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::FlyingScoreEffect::__get__color() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____color;
}
constexpr void GlobalNamespace::FlyingScoreEffect::__set__color(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____color = value;
}
constexpr float_t& GlobalNamespace::FlyingScoreEffect::__get__colorAMultiplier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorAMultiplier;
}
constexpr float_t const& GlobalNamespace::FlyingScoreEffect::__get__colorAMultiplier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorAMultiplier;
}
constexpr void GlobalNamespace::FlyingScoreEffect::__set__colorAMultiplier(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____colorAMultiplier = value;
}
constexpr bool& GlobalNamespace::FlyingScoreEffect::__get__registeredToCallbacks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____registeredToCallbacks;
}
constexpr bool const& GlobalNamespace::FlyingScoreEffect::__get__registeredToCallbacks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____registeredToCallbacks;
}
constexpr void GlobalNamespace::FlyingScoreEffect::__set__registeredToCallbacks(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____registeredToCallbacks = value;
}
constexpr ::GlobalNamespace::IReadonlyCutScoreBuffer*& GlobalNamespace::FlyingScoreEffect::__get__cutScoreBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cutScoreBuffer;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IReadonlyCutScoreBuffer*> const& GlobalNamespace::FlyingScoreEffect::__get__cutScoreBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cutScoreBuffer;
}
constexpr void GlobalNamespace::FlyingScoreEffect::__set__cutScoreBuffer(::GlobalNamespace::IReadonlyCutScoreBuffer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____cutScoreBuffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::FlyingScoreEffect::InitAndPresent(::GlobalNamespace::IReadonlyCutScoreBuffer* cutScoreBuffer, float_t duration, ::UnityEngine::Vector3 targetPos,
                                                               ::UnityEngine::Color color) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlyingScoreEffect*>::get(), "InitAndPresent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IReadonlyCutScoreBuffer*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cutScoreBuffer, duration, targetPos, color);
}
inline void GlobalNamespace::FlyingScoreEffect::ManualUpdate(float_t t) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlyingScoreEffect*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, t);
}
inline void GlobalNamespace::FlyingScoreEffect::HandleCutScoreBufferDidChange(::GlobalNamespace::CutScoreBuffer* cutScoreBuffer) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlyingScoreEffect*>::get(), "HandleCutScoreBufferDidChange", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::CutScoreBuffer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cutScoreBuffer);
}
inline void GlobalNamespace::FlyingScoreEffect::RefreshScore(int32_t score, int32_t maxPossibleCutScore) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlyingScoreEffect*>::get(), "RefreshScore", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, score, maxPossibleCutScore);
}
inline void GlobalNamespace::FlyingScoreEffect::HandleCutScoreBufferDidFinish(::GlobalNamespace::CutScoreBuffer* cutScoreBuffer) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlyingScoreEffect*>::get(), "HandleCutScoreBufferDidFinish", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::CutScoreBuffer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cutScoreBuffer);
}
inline void GlobalNamespace::FlyingScoreEffect::UnregisterCallbacksIfNeeded() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlyingScoreEffect*>::get(),
                                                                             "UnregisterCallbacksIfNeeded", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::FlyingScoreEffect* GlobalNamespace::FlyingScoreEffect::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::FlyingScoreEffect*>());
}
inline void GlobalNamespace::FlyingScoreEffect::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlyingScoreEffect*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FlyingScoreEffect::FlyingScoreEffect() {}
//  Writing Method size for method: ::GlobalNamespace::__FlyingScoreEffect__Pool.OnDespawned
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__FlyingScoreEffect__Pool::*)(::GlobalNamespace::FlyingScoreEffect*)>(
    &::GlobalNamespace::__FlyingScoreEffect__Pool::OnDespawned)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2398f2c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__FlyingScoreEffect__Pool*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__FlyingScoreEffect__Pool*>::get(), 16));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__FlyingScoreEffect__Pool._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__FlyingScoreEffect__Pool::*)()>(&::GlobalNamespace::__FlyingScoreEffect__Pool::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2398f8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__FlyingScoreEffect__Pool*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline void GlobalNamespace::__FlyingScoreEffect__Pool::OnDespawned(::GlobalNamespace::FlyingScoreEffect* item) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__FlyingScoreEffect__Pool*>::get(), 16)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, item);
}
inline ::GlobalNamespace::__FlyingScoreEffect__Pool* GlobalNamespace::__FlyingScoreEffect__Pool::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__FlyingScoreEffect__Pool*>());
}
inline void GlobalNamespace::__FlyingScoreEffect__Pool::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__FlyingScoreEffect__Pool*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__FlyingScoreEffect__Pool::__FlyingScoreEffect__Pool() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
