#pragma once
// IWYU pragma private; include "GlobalNamespace\VisualEffectActivationClip.hpp"
#include "UnityEngine/Playables/zzzz__PlayableAsset_impl.hpp"
#include "GlobalNamespace/zzzz__VisualEffectActivationClip_def.hpp"
#include "GlobalNamespace/zzzz__VisualEffectActivationBehaviour_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableGraph_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
#include "UnityEngine/Timeline/zzzz__ClipCaps_def.hpp"
#include "UnityEngine/Timeline/zzzz__ITimelineClipAsset_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::VisualEffectActivationClip.get_clipCaps
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Timeline::ClipCaps (::GlobalNamespace::VisualEffectActivationClip::*)()>(
    &::GlobalNamespace::VisualEffectActivationClip::get_clipCaps)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69d1504;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VisualEffectActivationClip*>(), { "get_clipCaps", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VisualEffectActivationClip.CreatePlayable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Playables::Playable (::GlobalNamespace::VisualEffectActivationClip::*)(
    ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*)>(&::GlobalNamespace::VisualEffectActivationClip::CreatePlayable)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x69d150c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::VisualEffectActivationClip*>(), { ::i2c::class_of<::GlobalNamespace::VisualEffectActivationClip*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VisualEffectActivationClip._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VisualEffectActivationClip::*)()>(&::GlobalNamespace::VisualEffectActivationClip::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x69d15fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VisualEffectActivationClip*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::VisualEffectActivationBehaviour*& GlobalNamespace::VisualEffectActivationClip::__cordl_internal_get_activationBehavior() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___activationBehavior;
}
constexpr ::GlobalNamespace::VisualEffectActivationBehaviour* const& GlobalNamespace::VisualEffectActivationClip::__cordl_internal_get_activationBehavior() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___activationBehavior;
}
constexpr void GlobalNamespace::VisualEffectActivationClip::__cordl_internal_set_activationBehavior(::GlobalNamespace::VisualEffectActivationBehaviour* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___activationBehavior = value;
}
inline ::UnityEngine::Timeline::ClipCaps GlobalNamespace::VisualEffectActivationClip::get_clipCaps() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VisualEffectActivationClip*>(), { "get_clipCaps", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Timeline::ClipCaps>(this, ___internal_method);
}
inline ::UnityEngine::Playables::Playable GlobalNamespace::VisualEffectActivationClip::CreatePlayable(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* owner) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::VisualEffectActivationClip*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::Playable>(this, ___internal_method, graph, owner);
}
inline void GlobalNamespace::VisualEffectActivationClip::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VisualEffectActivationClip*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::VisualEffectActivationClip* GlobalNamespace::VisualEffectActivationClip::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::VisualEffectActivationClip*>());
}
/// @brief Convert operator to "::UnityEngine::Timeline::ITimelineClipAsset"
constexpr GlobalNamespace::VisualEffectActivationClip::operator ::UnityEngine::Timeline::ITimelineClipAsset*() noexcept {
  return static_cast<::UnityEngine::Timeline::ITimelineClipAsset*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Timeline::ITimelineClipAsset"
constexpr ::UnityEngine::Timeline::ITimelineClipAsset* GlobalNamespace::VisualEffectActivationClip::i___UnityEngine__Timeline__ITimelineClipAsset() noexcept {
  return static_cast<::UnityEngine::Timeline::ITimelineClipAsset*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VisualEffectActivationClip::VisualEffectActivationClip() {}
