#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLobbyCenterStageLayoutAnimator_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
#include "Tweening/zzzz__TimeTweeningManager_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLobbyCenterStageLayoutAnimator.StartCountdown
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLobbyCenterStageLayoutAnimator::*)()>(
    &::GlobalNamespace::MultiplayerLobbyCenterStageLayoutAnimator::StartCountdown)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x22a36bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyCenterStageLayoutAnimator*>::get(), "StartCountdown",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLobbyCenterStageLayoutAnimator.StopCountdown
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLobbyCenterStageLayoutAnimator::*)(bool)>(
    &::GlobalNamespace::MultiplayerLobbyCenterStageLayoutAnimator::StopCountdown)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x22a387c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyCenterStageLayoutAnimator*>::get(), "StopCountdown",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLobbyCenterStageLayoutAnimator.Move
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLobbyCenterStageLayoutAnimator::*)(
    ::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t)>(&::GlobalNamespace::MultiplayerLobbyCenterStageLayoutAnimator::Move)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x22a3740;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyCenterStageLayoutAnimator*>::get(), "Move", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLobbyCenterStageLayoutAnimator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLobbyCenterStageLayoutAnimator::*)()>(
    &::GlobalNamespace::MultiplayerLobbyCenterStageLayoutAnimator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22a391c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyCenterStageLayoutAnimator*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLobbyCenterStageLayoutAnimator._Move_b__7_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLobbyCenterStageLayoutAnimator::*)(::UnityEngine::Vector3)>(
    &::GlobalNamespace::MultiplayerLobbyCenterStageLayoutAnimator::_Move_b__7_0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x22a3924;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyCenterStageLayoutAnimator*>::get(), "<Move>b__7_0",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::RectTransform*& GlobalNamespace::MultiplayerLobbyCenterStageLayoutAnimator::__get__nextLevelTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____nextLevelTransform;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RectTransform*> const& GlobalNamespace::MultiplayerLobbyCenterStageLayoutAnimator::__get__nextLevelTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____nextLevelTransform;
}
constexpr void GlobalNamespace::MultiplayerLobbyCenterStageLayoutAnimator::__set__nextLevelTransform(::UnityEngine::RectTransform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____nextLevelTransform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::RectTransform*& GlobalNamespace::MultiplayerLobbyCenterStageLayoutAnimator::__get__nextLevelBasePosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____nextLevelBasePosition;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RectTransform*> const& GlobalNamespace::MultiplayerLobbyCenterStageLayoutAnimator::__get__nextLevelBasePosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____nextLevelBasePosition;
}
constexpr void GlobalNamespace::MultiplayerLobbyCenterStageLayoutAnimator::__set__nextLevelBasePosition(::UnityEngine::RectTransform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____nextLevelBasePosition)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::RectTransform*& GlobalNamespace::MultiplayerLobbyCenterStageLayoutAnimator::__get__nextLevelCountdownPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____nextLevelCountdownPosition;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RectTransform*> const& GlobalNamespace::MultiplayerLobbyCenterStageLayoutAnimator::__get__nextLevelCountdownPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____nextLevelCountdownPosition;
}
constexpr void GlobalNamespace::MultiplayerLobbyCenterStageLayoutAnimator::__set__nextLevelCountdownPosition(::UnityEngine::RectTransform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____nextLevelCountdownPosition)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::MultiplayerLobbyCenterStageLayoutAnimator::__get__transitionDuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____transitionDuration;
}
constexpr float_t const& GlobalNamespace::MultiplayerLobbyCenterStageLayoutAnimator::__get__transitionDuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____transitionDuration;
}
constexpr void GlobalNamespace::MultiplayerLobbyCenterStageLayoutAnimator::__set__transitionDuration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____transitionDuration = value;
}
constexpr ::Tweening::TimeTweeningManager*& GlobalNamespace::MultiplayerLobbyCenterStageLayoutAnimator::__get__tweeningManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____tweeningManager;
}
constexpr ::cordl_internals::to_const_pointer<::Tweening::TimeTweeningManager*> const& GlobalNamespace::MultiplayerLobbyCenterStageLayoutAnimator::__get__tweeningManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____tweeningManager;
}
constexpr void GlobalNamespace::MultiplayerLobbyCenterStageLayoutAnimator::__set__tweeningManager(::Tweening::TimeTweeningManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____tweeningManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::MultiplayerLobbyCenterStageLayoutAnimator::StartCountdown() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyCenterStageLayoutAnimator*>::get(), "StartCountdown",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerLobbyCenterStageLayoutAnimator::StopCountdown(bool instant) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyCenterStageLayoutAnimator*>::get(), "StopCountdown",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, instant);
}
inline void GlobalNamespace::MultiplayerLobbyCenterStageLayoutAnimator::Move(::UnityEngine::Vector3 from, ::UnityEngine::Vector3 to, float_t duration) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyCenterStageLayoutAnimator*>::get(), "Move", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, from, to, duration);
}
inline ::GlobalNamespace::MultiplayerLobbyCenterStageLayoutAnimator* GlobalNamespace::MultiplayerLobbyCenterStageLayoutAnimator::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MultiplayerLobbyCenterStageLayoutAnimator*>());
}
inline void GlobalNamespace::MultiplayerLobbyCenterStageLayoutAnimator::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyCenterStageLayoutAnimator*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerLobbyCenterStageLayoutAnimator::_Move_b__7_0(::UnityEngine::Vector3 pos) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyCenterStageLayoutAnimator*>::get(), "<Move>b__7_0",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pos);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerLobbyCenterStageLayoutAnimator::MultiplayerLobbyCenterStageLayoutAnimator() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
