#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLobbyCenterScreenLayoutAnimator_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
#include "Tweening/zzzz__TimeTweeningManager_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator.StartCountdown
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator::*)()>(
    &::GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator::StartCountdown)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x22a3430;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator*>::get(), "StartCountdown",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator.StopCountdown
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator::*)(bool)>(
    &::GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator::StopCountdown)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x22a35f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator*>::get(), "StopCountdown",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator.Move
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator::*)(
    ::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t)>(&::GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator::Move)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x22a34b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator*>::get(), "Move", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator::*)()>(
    &::GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22a3690;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator._Move_b__7_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator::*)(::UnityEngine::Vector3)>(
    &::GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator::_Move_b__7_0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x22a3698;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator*>::get(), "<Move>b__7_0",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::RectTransform*& GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator::__get__nextLevelTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nextLevelTransform;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RectTransform*> const& GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator::__get__nextLevelTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nextLevelTransform;
}
constexpr void GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator::__set__nextLevelTransform(::UnityEngine::RectTransform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____nextLevelTransform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::RectTransform*& GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator::__get__nextLevelBasePosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nextLevelBasePosition;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RectTransform*> const& GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator::__get__nextLevelBasePosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nextLevelBasePosition;
}
constexpr void GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator::__set__nextLevelBasePosition(::UnityEngine::RectTransform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____nextLevelBasePosition)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::RectTransform*& GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator::__get__nextLevelCountdownPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nextLevelCountdownPosition;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RectTransform*> const& GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator::__get__nextLevelCountdownPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nextLevelCountdownPosition;
}
constexpr void GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator::__set__nextLevelCountdownPosition(::UnityEngine::RectTransform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____nextLevelCountdownPosition)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator::__get__transitionDuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transitionDuration;
}
constexpr float_t const& GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator::__get__transitionDuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transitionDuration;
}
constexpr void GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator::__set__transitionDuration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____transitionDuration = value;
}
constexpr ::Tweening::TimeTweeningManager*& GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator::__get__tweeningManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tweeningManager;
}
constexpr ::cordl_internals::to_const_pointer<::Tweening::TimeTweeningManager*> const& GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator::__get__tweeningManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tweeningManager;
}
constexpr void GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator::__set__tweeningManager(::Tweening::TimeTweeningManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____tweeningManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator::StartCountdown() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator*>::get(), "StartCountdown",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator::StopCountdown(bool instant) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator*>::get(), "StopCountdown",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, instant);
}
inline void GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator::Move(::UnityEngine::Vector3 from, ::UnityEngine::Vector3 to, float_t duration) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator*>::get(), "Move", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, from, to, duration);
}
inline ::GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator* GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator*>());
}
inline void GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator::_Move_b__7_0(::UnityEngine::Vector3 pos) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator*>::get(), "<Move>b__7_0",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pos);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator::MultiplayerLobbyCenterScreenLayoutAnimator() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
