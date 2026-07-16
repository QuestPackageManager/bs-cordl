#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/ActivationTrack.hpp"
#include "UnityEngine/Timeline/zzzz__TrackAsset_impl.hpp"
#include "UnityEngine/Timeline/zzzz__ActivationTrack_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableDirector_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableGraph_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
#include "UnityEngine/Timeline/zzzz__ActivationMixerPlayable_def.hpp"
#include "UnityEngine/Timeline/zzzz__ActivationTrack_def.hpp"
#include "UnityEngine/Timeline/zzzz__IPropertyCollector_def.hpp"
#include "UnityEngine/Timeline/zzzz__TimelineClip_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Timeline::ActivationTrack_PostPlaybackState::ActivationTrack_PostPlaybackState(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Timeline::ActivationTrack_PostPlaybackState::ActivationTrack_PostPlaybackState() {}
constexpr ::UnityEngine::Timeline::ActivationTrack_PostPlaybackState UnityEngine::Timeline::ActivationTrack_PostPlaybackState::Active{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Timeline::ActivationTrack_PostPlaybackState UnityEngine::Timeline::ActivationTrack_PostPlaybackState::Inactive{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Timeline::ActivationTrack_PostPlaybackState UnityEngine::Timeline::ActivationTrack_PostPlaybackState::Revert{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::Timeline::ActivationTrack_PostPlaybackState UnityEngine::Timeline::ActivationTrack_PostPlaybackState::LeaveAsIs{ static_cast<int32_t>(0x3) };
//  Writing Method size for method: ::UnityEngine::Timeline::ActivationTrack.CanCompileClips
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Timeline::ActivationTrack::*)()>(&::UnityEngine::Timeline::ActivationTrack::CanCompileClips)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x69a6cec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::ActivationTrack*>(), { ::i2c::class_of<::UnityEngine::Timeline::ActivationTrack*>(), 33 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::ActivationTrack.get_postPlaybackState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Timeline::ActivationTrack_PostPlaybackState (::UnityEngine::Timeline::ActivationTrack::*)()>(
    &::UnityEngine::Timeline::ActivationTrack::get_postPlaybackState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69a6e10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::ActivationTrack*>(), { "get_postPlaybackState", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::ActivationTrack.set_postPlaybackState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::ActivationTrack::*)(::UnityEngine::Timeline::ActivationTrack_PostPlaybackState)>(
    &::UnityEngine::Timeline::ActivationTrack::set_postPlaybackState)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x69a6e18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::ActivationTrack*>(),
                                                             { "set_postPlaybackState", {}, { ::i2c::type_of<::UnityEngine::Timeline::ActivationTrack_PostPlaybackState>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::ActivationTrack.CreateTrackMixer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Playables::Playable (::UnityEngine::Timeline::ActivationTrack::*)(
    ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, int32_t)>(&::UnityEngine::Timeline::ActivationTrack::CreateTrackMixer)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x69a6e40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::ActivationTrack*>(), { ::i2c::class_of<::UnityEngine::Timeline::ActivationTrack*>(), 24 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::ActivationTrack.UpdateTrackMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::ActivationTrack::*)()>(&::UnityEngine::Timeline::ActivationTrack::UpdateTrackMode)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x69a6e2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::ActivationTrack*>(), { "UpdateTrackMode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::ActivationTrack.GatherProperties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::ActivationTrack::*)(::UnityEngine::Playables::PlayableDirector*, ::UnityEngine::Timeline::IPropertyCollector*)>(
    &::UnityEngine::Timeline::ActivationTrack::GatherProperties)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x69a6f28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::ActivationTrack*>(), { ::i2c::class_of<::UnityEngine::Timeline::ActivationTrack*>(), 29 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::ActivationTrack.OnCreateClip
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::ActivationTrack::*)(::UnityEngine::Timeline::TimelineClip*)>(
    &::UnityEngine::Timeline::ActivationTrack::OnCreateClip)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x69a71e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::ActivationTrack*>(), { ::i2c::class_of<::UnityEngine::Timeline::ActivationTrack*>(), 30 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::ActivationTrack._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::ActivationTrack::*)()>(&::UnityEngine::Timeline::ActivationTrack::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x69a723c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::ActivationTrack*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Timeline::ActivationTrack_PostPlaybackState& UnityEngine::Timeline::ActivationTrack::__cordl_internal_get_m_PostPlaybackState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PostPlaybackState;
}
constexpr ::UnityEngine::Timeline::ActivationTrack_PostPlaybackState const& UnityEngine::Timeline::ActivationTrack::__cordl_internal_get_m_PostPlaybackState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PostPlaybackState;
}
constexpr void UnityEngine::Timeline::ActivationTrack::__cordl_internal_set_m_PostPlaybackState(::UnityEngine::Timeline::ActivationTrack_PostPlaybackState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PostPlaybackState = value;
}
constexpr ::UnityEngine::Timeline::ActivationMixerPlayable*& UnityEngine::Timeline::ActivationTrack::__cordl_internal_get_m_ActivationMixer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ActivationMixer;
}
constexpr ::UnityEngine::Timeline::ActivationMixerPlayable* const& UnityEngine::Timeline::ActivationTrack::__cordl_internal_get_m_ActivationMixer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ActivationMixer;
}
constexpr void UnityEngine::Timeline::ActivationTrack::__cordl_internal_set_m_ActivationMixer(::UnityEngine::Timeline::ActivationMixerPlayable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ActivationMixer = value;
}
inline bool UnityEngine::Timeline::ActivationTrack::CanCompileClips() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Timeline::ActivationTrack*>(), 33 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::Timeline::ActivationTrack_PostPlaybackState UnityEngine::Timeline::ActivationTrack::get_postPlaybackState() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::ActivationTrack*>(), { "get_postPlaybackState", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Timeline::ActivationTrack_PostPlaybackState>(this, ___internal_method);
}
inline void UnityEngine::Timeline::ActivationTrack::set_postPlaybackState(::UnityEngine::Timeline::ActivationTrack_PostPlaybackState value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::ActivationTrack*>(),
                                                           { "set_postPlaybackState", {}, { ::i2c::type_of<::UnityEngine::Timeline::ActivationTrack_PostPlaybackState>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Playables::Playable UnityEngine::Timeline::ActivationTrack::CreateTrackMixer(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* go, int32_t inputCount) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Timeline::ActivationTrack*>(), 24 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::Playable>(this, ___internal_method, graph, go, inputCount);
}
inline void UnityEngine::Timeline::ActivationTrack::UpdateTrackMode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::ActivationTrack*>(), { "UpdateTrackMode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Timeline::ActivationTrack::GatherProperties(::UnityEngine::Playables::PlayableDirector* director, ::UnityEngine::Timeline::IPropertyCollector* driver) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Timeline::ActivationTrack*>(), 29 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, director, driver);
}
inline void UnityEngine::Timeline::ActivationTrack::OnCreateClip(::UnityEngine::Timeline::TimelineClip* clip) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Timeline::ActivationTrack*>(), 30 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clip);
}
inline void UnityEngine::Timeline::ActivationTrack::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::ActivationTrack*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Timeline::ActivationTrack* UnityEngine::Timeline::ActivationTrack::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Timeline::ActivationTrack*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Timeline::ActivationTrack::ActivationTrack() {}
