#pragma once
// IWYU pragma private; include "UnityEngine\Timeline\TimeControlPlayable.hpp"
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_impl.hpp"
#include "UnityEngine/Timeline/zzzz__TimeControlPlayable_def.hpp"
#include "UnityEngine/Playables/zzzz__FrameData_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableGraph_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
#include "UnityEngine/Playables/zzzz__ScriptPlayable_1_def.hpp"
#include "UnityEngine/Timeline/zzzz__ITimeControl_def.hpp"
//  Writing Method size for method: ::UnityEngine::Timeline::TimeControlPlayable.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Playables::ScriptPlayable_1<::UnityEngine::Timeline::TimeControlPlayable*> (*)(
    ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::Timeline::ITimeControl*)>(&::UnityEngine::Timeline::TimeControlPlayable::Create)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x69ca0c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimeControlPlayable*>(),
                                                { "Create", {}, { ::i2c::type_of<::UnityEngine::Playables::PlayableGraph>(), ::i2c::type_of<::UnityEngine::Timeline::ITimeControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimeControlPlayable.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::TimeControlPlayable::*)(::UnityEngine::Timeline::ITimeControl*)>(
    &::UnityEngine::Timeline::TimeControlPlayable::Initialize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69ca1c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimeControlPlayable*>(), { "Initialize", {}, { ::i2c::type_of<::UnityEngine::Timeline::ITimeControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimeControlPlayable.PrepareFrame
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::TimeControlPlayable::*)(::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData)>(
    &::UnityEngine::Timeline::TimeControlPlayable::PrepareFrame)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x69ca1d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimeControlPlayable*>(), { ::i2c::class_of<::UnityEngine::Timeline::TimeControlPlayable*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimeControlPlayable.OnBehaviourPlay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::TimeControlPlayable::*)(::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData)>(
    &::UnityEngine::Timeline::TimeControlPlayable::OnBehaviourPlay)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x69ca2cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimeControlPlayable*>(), { ::i2c::class_of<::UnityEngine::Timeline::TimeControlPlayable*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimeControlPlayable.OnBehaviourPause
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::TimeControlPlayable::*)(::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData)>(
    &::UnityEngine::Timeline::TimeControlPlayable::OnBehaviourPause)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x69ca384;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimeControlPlayable*>(), { ::i2c::class_of<::UnityEngine::Timeline::TimeControlPlayable*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimeControlPlayable._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::TimeControlPlayable::*)()>(&::UnityEngine::Timeline::TimeControlPlayable::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x69ca438;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimeControlPlayable*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Timeline::ITimeControl*& UnityEngine::Timeline::TimeControlPlayable::__cordl_internal_get_m_timeControl() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_timeControl;
}
constexpr ::UnityEngine::Timeline::ITimeControl* const& UnityEngine::Timeline::TimeControlPlayable::__cordl_internal_get_m_timeControl() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_timeControl;
}
constexpr void UnityEngine::Timeline::TimeControlPlayable::__cordl_internal_set_m_timeControl(::UnityEngine::Timeline::ITimeControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_timeControl = value;
}
constexpr bool& UnityEngine::Timeline::TimeControlPlayable::__cordl_internal_get_m_started() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_started;
}
constexpr bool const& UnityEngine::Timeline::TimeControlPlayable::__cordl_internal_get_m_started() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_started;
}
constexpr void UnityEngine::Timeline::TimeControlPlayable::__cordl_internal_set_m_started(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_started = value;
}
inline ::UnityEngine::Playables::ScriptPlayable_1<::UnityEngine::Timeline::TimeControlPlayable*>
UnityEngine::Timeline::TimeControlPlayable::Create(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::Timeline::ITimeControl* timeControl) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimeControlPlayable*>(),
                                                           { "Create", {}, { ::i2c::type_of<::UnityEngine::Playables::PlayableGraph>(), ::i2c::type_of<::UnityEngine::Timeline::ITimeControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::ScriptPlayable_1<::UnityEngine::Timeline::TimeControlPlayable*>>(nullptr, ___internal_method, graph, timeControl);
}
inline void UnityEngine::Timeline::TimeControlPlayable::Initialize(::UnityEngine::Timeline::ITimeControl* timeControl) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimeControlPlayable*>(), { "Initialize", {}, { ::i2c::type_of<::UnityEngine::Timeline::ITimeControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, timeControl);
}
inline void UnityEngine::Timeline::TimeControlPlayable::PrepareFrame(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Timeline::TimeControlPlayable*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playable, info);
}
inline void UnityEngine::Timeline::TimeControlPlayable::OnBehaviourPlay(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Timeline::TimeControlPlayable*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playable, info);
}
inline void UnityEngine::Timeline::TimeControlPlayable::OnBehaviourPause(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Timeline::TimeControlPlayable*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playable, info);
}
inline void UnityEngine::Timeline::TimeControlPlayable::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimeControlPlayable*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Timeline::TimeControlPlayable* UnityEngine::Timeline::TimeControlPlayable::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Timeline::TimeControlPlayable*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Timeline::TimeControlPlayable::TimeControlPlayable() {}
