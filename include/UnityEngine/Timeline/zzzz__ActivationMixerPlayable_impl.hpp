#pragma once
// IWYU pragma private; include "UnityEngine\Timeline\ActivationMixerPlayable.hpp"
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_impl.hpp"
#include "UnityEngine/Timeline/zzzz__ActivationTrack_impl.hpp"
#include "UnityEngine/Timeline/zzzz__ActivationMixerPlayable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Playables/zzzz__FrameData_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableGraph_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
#include "UnityEngine/Playables/zzzz__ScriptPlayable_1_def.hpp"
#include "UnityEngine/Timeline/zzzz__ActivationTrack_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::UnityEngine::Timeline::ActivationMixerPlayable.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Playables::ScriptPlayable_1<::UnityEngine::Timeline::ActivationMixerPlayable*> (*)(
    ::UnityEngine::Playables::PlayableGraph, int32_t)>(&::UnityEngine::Timeline::ActivationMixerPlayable::Create)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x69ac128;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::ActivationMixerPlayable*>(),
                                                             { "Create", {}, { ::i2c::type_of<::UnityEngine::Playables::PlayableGraph>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::ActivationMixerPlayable.get_postPlaybackState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Timeline::ActivationTrack_PostPlaybackState (::UnityEngine::Timeline::ActivationMixerPlayable::*)()>(
    &::UnityEngine::Timeline::ActivationMixerPlayable::get_postPlaybackState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69ac1b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::ActivationMixerPlayable*>(), { "get_postPlaybackState", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::ActivationMixerPlayable.set_postPlaybackState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::ActivationMixerPlayable::*)(::UnityEngine::Timeline::ActivationTrack_PostPlaybackState)>(
    &::UnityEngine::Timeline::ActivationMixerPlayable::set_postPlaybackState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69ac1bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::ActivationMixerPlayable*>(),
                                                             { "set_postPlaybackState", {}, { ::i2c::type_of<::UnityEngine::Timeline::ActivationTrack_PostPlaybackState>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::ActivationMixerPlayable.OnPlayableDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::ActivationMixerPlayable::*)(::UnityEngine::Playables::Playable)>(
    &::UnityEngine::Timeline::ActivationMixerPlayable::OnPlayableDestroy)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x69ac1c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::ActivationMixerPlayable*>(), { ::i2c::class_of<::UnityEngine::Timeline::ActivationMixerPlayable*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::ActivationMixerPlayable.ProcessFrame
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::ActivationMixerPlayable::*)(
    ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*)>(&::UnityEngine::Timeline::ActivationMixerPlayable::ProcessFrame)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x69ac288;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::ActivationMixerPlayable*>(), { ::i2c::class_of<::UnityEngine::Timeline::ActivationMixerPlayable*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::ActivationMixerPlayable._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::ActivationMixerPlayable::*)()>(&::UnityEngine::Timeline::ActivationMixerPlayable::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x69ac480;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::ActivationMixerPlayable*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Timeline::ActivationTrack_PostPlaybackState& UnityEngine::Timeline::ActivationMixerPlayable::__cordl_internal_get_m_PostPlaybackState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PostPlaybackState;
}
constexpr ::UnityEngine::Timeline::ActivationTrack_PostPlaybackState const& UnityEngine::Timeline::ActivationMixerPlayable::__cordl_internal_get_m_PostPlaybackState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PostPlaybackState;
}
constexpr void UnityEngine::Timeline::ActivationMixerPlayable::__cordl_internal_set_m_PostPlaybackState(::UnityEngine::Timeline::ActivationTrack_PostPlaybackState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PostPlaybackState = value;
}
constexpr bool& UnityEngine::Timeline::ActivationMixerPlayable::__cordl_internal_get_m_BoundGameObjectInitialStateIsActive() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BoundGameObjectInitialStateIsActive;
}
constexpr bool const& UnityEngine::Timeline::ActivationMixerPlayable::__cordl_internal_get_m_BoundGameObjectInitialStateIsActive() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BoundGameObjectInitialStateIsActive;
}
constexpr void UnityEngine::Timeline::ActivationMixerPlayable::__cordl_internal_set_m_BoundGameObjectInitialStateIsActive(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_BoundGameObjectInitialStateIsActive = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& UnityEngine::Timeline::ActivationMixerPlayable::__cordl_internal_get_m_BoundGameObject() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BoundGameObject;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& UnityEngine::Timeline::ActivationMixerPlayable::__cordl_internal_get_m_BoundGameObject() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BoundGameObject;
}
constexpr void UnityEngine::Timeline::ActivationMixerPlayable::__cordl_internal_set_m_BoundGameObject(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_BoundGameObject = value;
}
inline ::UnityEngine::Playables::ScriptPlayable_1<::UnityEngine::Timeline::ActivationMixerPlayable*>
UnityEngine::Timeline::ActivationMixerPlayable::Create(::UnityEngine::Playables::PlayableGraph graph, int32_t inputCount) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::ActivationMixerPlayable*>(),
                                                                                         { "Create", {}, { ::i2c::type_of<::UnityEngine::Playables::PlayableGraph>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::ScriptPlayable_1<::UnityEngine::Timeline::ActivationMixerPlayable*>>(nullptr, ___internal_method, graph, inputCount);
}
inline ::UnityEngine::Timeline::ActivationTrack_PostPlaybackState UnityEngine::Timeline::ActivationMixerPlayable::get_postPlaybackState() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::ActivationMixerPlayable*>(), { "get_postPlaybackState", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Timeline::ActivationTrack_PostPlaybackState>(this, ___internal_method);
}
inline void UnityEngine::Timeline::ActivationMixerPlayable::set_postPlaybackState(::UnityEngine::Timeline::ActivationTrack_PostPlaybackState value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::ActivationMixerPlayable*>(),
                                                           { "set_postPlaybackState", {}, { ::i2c::type_of<::UnityEngine::Timeline::ActivationTrack_PostPlaybackState>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Timeline::ActivationMixerPlayable::OnPlayableDestroy(::UnityEngine::Playables::Playable playable) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Timeline::ActivationMixerPlayable*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playable);
}
inline void UnityEngine::Timeline::ActivationMixerPlayable::ProcessFrame(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info, ::System::Object* playerData) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Timeline::ActivationMixerPlayable*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playable, info, playerData);
}
inline void UnityEngine::Timeline::ActivationMixerPlayable::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::ActivationMixerPlayable*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Timeline::ActivationMixerPlayable* UnityEngine::Timeline::ActivationMixerPlayable::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Timeline::ActivationMixerPlayable*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Timeline::ActivationMixerPlayable::ActivationMixerPlayable() {}
