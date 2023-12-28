#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__FlyingObjectEffect_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "GlobalNamespace/zzzz__LazyCopyHashSet_1_def.hpp"
#include "GlobalNamespace/zzzz__IFlyingObjectEffectDidFinishEvent_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "GlobalNamespace/zzzz__ILazyCopyHashSet_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FlyingObjectEffect.get_didFinishEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::IFlyingObjectEffectDidFinishEvent*>* (
    ::GlobalNamespace::FlyingObjectEffect::*)()>(&::GlobalNamespace::FlyingObjectEffect::get_didFinishEvent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x239821c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlyingObjectEffect*>::get(),
                                                                               "get_didFinishEvent", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FlyingObjectEffect.InitAndPresent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FlyingObjectEffect::*)(float_t, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, bool)>(
    &::GlobalNamespace::FlyingObjectEffect::InitAndPresent)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2398224;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlyingObjectEffect*>::get(), "InitAndPresent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FlyingObjectEffect.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FlyingObjectEffect::*)()>(&::GlobalNamespace::FlyingObjectEffect::Update)> {
  constexpr static std::size_t size = 0x3b8;
  constexpr static std::size_t addrs = 0x239830c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlyingObjectEffect*>::get(), "Update",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FlyingObjectEffect.ManualUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FlyingObjectEffect::*)(float_t)>(&::GlobalNamespace::FlyingObjectEffect::ManualUpdate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlyingObjectEffect*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlyingObjectEffect*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FlyingObjectEffect._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FlyingObjectEffect::*)()>(&::GlobalNamespace::FlyingObjectEffect::_ctor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x23986c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlyingObjectEffect*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::FlyingObjectEffect::__get__moveAnimationCurve() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____moveAnimationCurve;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& GlobalNamespace::FlyingObjectEffect::__get__moveAnimationCurve() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____moveAnimationCurve;
}
constexpr void GlobalNamespace::FlyingObjectEffect::__set__moveAnimationCurve(::UnityEngine::AnimationCurve* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____moveAnimationCurve)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::FlyingObjectEffect::__get__shakeFrequency() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shakeFrequency;
}
constexpr float_t const& GlobalNamespace::FlyingObjectEffect::__get__shakeFrequency() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shakeFrequency;
}
constexpr void GlobalNamespace::FlyingObjectEffect::__set__shakeFrequency(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____shakeFrequency = value;
}
constexpr float_t& GlobalNamespace::FlyingObjectEffect::__get__shakeStrength() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shakeStrength;
}
constexpr float_t const& GlobalNamespace::FlyingObjectEffect::__get__shakeStrength() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shakeStrength;
}
constexpr void GlobalNamespace::FlyingObjectEffect::__set__shakeStrength(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____shakeStrength = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::FlyingObjectEffect::__get__shakeStrengthAnimationCurve() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shakeStrengthAnimationCurve;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& GlobalNamespace::FlyingObjectEffect::__get__shakeStrengthAnimationCurve() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shakeStrengthAnimationCurve;
}
constexpr void GlobalNamespace::FlyingObjectEffect::__set__shakeStrengthAnimationCurve(::UnityEngine::AnimationCurve* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____shakeStrengthAnimationCurve)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::FlyingObjectEffect::__get__initialized() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initialized;
}
constexpr bool const& GlobalNamespace::FlyingObjectEffect::__get__initialized() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initialized;
}
constexpr void GlobalNamespace::FlyingObjectEffect::__set__initialized(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____initialized = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::FlyingObjectEffect::__get__shakeRotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shakeRotation;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::FlyingObjectEffect::__get__shakeRotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shakeRotation;
}
constexpr void GlobalNamespace::FlyingObjectEffect::__set__shakeRotation(::UnityEngine::Quaternion value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____shakeRotation = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::FlyingObjectEffect::__get__rotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rotation;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::FlyingObjectEffect::__get__rotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rotation;
}
constexpr void GlobalNamespace::FlyingObjectEffect::__set__rotation(::UnityEngine::Quaternion value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rotation = value;
}
constexpr float_t& GlobalNamespace::FlyingObjectEffect::__get__elapsedTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____elapsedTime;
}
constexpr float_t const& GlobalNamespace::FlyingObjectEffect::__get__elapsedTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____elapsedTime;
}
constexpr void GlobalNamespace::FlyingObjectEffect::__set__elapsedTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____elapsedTime = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::FlyingObjectEffect::__get__startPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startPos;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::FlyingObjectEffect::__get__startPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startPos;
}
constexpr void GlobalNamespace::FlyingObjectEffect::__set__startPos(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____startPos = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::FlyingObjectEffect::__get__targetPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____targetPos;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::FlyingObjectEffect::__get__targetPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____targetPos;
}
constexpr void GlobalNamespace::FlyingObjectEffect::__set__targetPos(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____targetPos = value;
}
constexpr float_t& GlobalNamespace::FlyingObjectEffect::__get__duration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____duration;
}
constexpr float_t const& GlobalNamespace::FlyingObjectEffect::__get__duration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____duration;
}
constexpr void GlobalNamespace::FlyingObjectEffect::__set__duration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____duration = value;
}
constexpr bool& GlobalNamespace::FlyingObjectEffect::__get__shake() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shake;
}
constexpr bool const& GlobalNamespace::FlyingObjectEffect::__get__shake() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shake;
}
constexpr void GlobalNamespace::FlyingObjectEffect::__set__shake(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____shake = value;
}
constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::IFlyingObjectEffectDidFinishEvent*>*& GlobalNamespace::FlyingObjectEffect::__get__didFinishEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____didFinishEvent;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::IFlyingObjectEffectDidFinishEvent*>*> const&
GlobalNamespace::FlyingObjectEffect::__get__didFinishEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____didFinishEvent;
}
constexpr void GlobalNamespace::FlyingObjectEffect::__set__didFinishEvent(::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::IFlyingObjectEffectDidFinishEvent*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____didFinishEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::IFlyingObjectEffectDidFinishEvent*>* GlobalNamespace::FlyingObjectEffect::get_didFinishEvent() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlyingObjectEffect*>::get(),
                                                                             "get_didFinishEvent", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::IFlyingObjectEffectDidFinishEvent*>*, false>(this, ___internal_method);
}
inline void GlobalNamespace::FlyingObjectEffect::InitAndPresent(float_t duration, ::UnityEngine::Vector3 targetPos, ::UnityEngine::Quaternion rotation, bool shake) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlyingObjectEffect*>::get(), "InitAndPresent", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, duration, targetPos, rotation, shake);
}
inline void GlobalNamespace::FlyingObjectEffect::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlyingObjectEffect*>::get(), "Update",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::FlyingObjectEffect::ManualUpdate(float_t t) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlyingObjectEffect*>::get(), "ManualUpdate", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, t);
}
inline ::GlobalNamespace::FlyingObjectEffect* GlobalNamespace::FlyingObjectEffect::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::FlyingObjectEffect*>());
}
inline void GlobalNamespace::FlyingObjectEffect::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlyingObjectEffect*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FlyingObjectEffect::FlyingObjectEffect() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
