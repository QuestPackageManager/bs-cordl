#pragma once
// IWYU pragma private; include "GlobalNamespace\MultiplayerConnectedPlayerIntroAnimator.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerConnectedPlayerIntroAnimator_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableDirector_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerIntroAnimator.SetBeforeIntroValues
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerIntroAnimator::*)()>(
    &::GlobalNamespace::MultiplayerConnectedPlayerIntroAnimator::SetBeforeIntroValues)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x59bc3ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerIntroAnimator*>(), { "SetBeforeIntroValues", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerIntroAnimator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerIntroAnimator::*)()>(&::GlobalNamespace::MultiplayerConnectedPlayerIntroAnimator::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59bc3c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerIntroAnimator*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Playables::PlayableDirector>& GlobalNamespace::MultiplayerConnectedPlayerIntroAnimator::__cordl_internal_get__introPlayableDirector() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____introPlayableDirector;
}
constexpr ::UnityW<::UnityEngine::Playables::PlayableDirector> const& GlobalNamespace::MultiplayerConnectedPlayerIntroAnimator::__cordl_internal_get__introPlayableDirector() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____introPlayableDirector;
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerIntroAnimator::__cordl_internal_set__introPlayableDirector(::UnityW<::UnityEngine::Playables::PlayableDirector> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____introPlayableDirector = value;
}
inline void GlobalNamespace::MultiplayerConnectedPlayerIntroAnimator::SetBeforeIntroValues() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerIntroAnimator*>(), { "SetBeforeIntroValues", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerConnectedPlayerIntroAnimator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerIntroAnimator*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MultiplayerConnectedPlayerIntroAnimator* GlobalNamespace::MultiplayerConnectedPlayerIntroAnimator::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MultiplayerConnectedPlayerIntroAnimator*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerConnectedPlayerIntroAnimator::MultiplayerConnectedPlayerIntroAnimator() {}
