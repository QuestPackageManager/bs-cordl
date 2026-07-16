#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerLocalActivePlayerIntroAnimator.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLocalActivePlayerIntroAnimator_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableDirector_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator.SetBeforeIntroValues
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator::*)()>(
    &::GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator::SetBeforeIntroValues)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x59c16a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator*>(), { "SetBeforeIntroValues", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator.SetAfterIntroValues
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator::*)()>(
    &::GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator::SetAfterIntroValues)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x59c16b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator*>(), { "SetAfterIntroValues", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator::*)()>(
    &::GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59c1700;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Playables::PlayableDirector>& GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator::__cordl_internal_get__introPlayableDirector() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____introPlayableDirector;
}
constexpr ::UnityW<::UnityEngine::Playables::PlayableDirector> const& GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator::__cordl_internal_get__introPlayableDirector() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____introPlayableDirector;
}
constexpr void GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator::__cordl_internal_set__introPlayableDirector(::UnityW<::UnityEngine::Playables::PlayableDirector> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____introPlayableDirector = value;
}
inline void GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator::SetBeforeIntroValues() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator*>(), { "SetBeforeIntroValues", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator::SetAfterIntroValues() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator*>(), { "SetAfterIntroValues", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator* GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator::MultiplayerLocalActivePlayerIntroAnimator() {}
