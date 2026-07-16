#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/ScheduleRuntimeClip.hpp"
#include "UnityEngine/Playables/zzzz__Playable_impl.hpp"
#include "UnityEngine/Timeline/zzzz__RuntimeClipBase_impl.hpp"
#include "UnityEngine/Timeline/zzzz__ScheduleRuntimeClip_def.hpp"
#include "UnityEngine/Playables/zzzz__FrameData_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
#include "UnityEngine/Timeline/zzzz__TimelineClip_def.hpp"
//  Writing Method size for method: ::UnityEngine::Timeline::ScheduleRuntimeClip.get_start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::UnityEngine::Timeline::ScheduleRuntimeClip::*)()>(&::UnityEngine::Timeline::ScheduleRuntimeClip::get_start)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x69c0310;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::ScheduleRuntimeClip*>(), { ::i2c::class_of<::UnityEngine::Timeline::ScheduleRuntimeClip*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::ScheduleRuntimeClip.get_duration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::UnityEngine::Timeline::ScheduleRuntimeClip::*)()>(&::UnityEngine::Timeline::ScheduleRuntimeClip::get_duration)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x69c0390;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::ScheduleRuntimeClip*>(), { ::i2c::class_of<::UnityEngine::Timeline::ScheduleRuntimeClip*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::ScheduleRuntimeClip.SetTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::ScheduleRuntimeClip::*)(double_t)>(&::UnityEngine::Timeline::ScheduleRuntimeClip::SetTime)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x69c03dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::ScheduleRuntimeClip*>(), { "SetTime", {}, { ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::ScheduleRuntimeClip.get_clip
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Timeline::TimelineClip* (::UnityEngine::Timeline::ScheduleRuntimeClip::*)()>(
    &::UnityEngine::Timeline::ScheduleRuntimeClip::get_clip)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69c0438;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::ScheduleRuntimeClip*>(), { "get_clip", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::ScheduleRuntimeClip.get_mixer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Playables::Playable (::UnityEngine::Timeline::ScheduleRuntimeClip::*)()>(
    &::UnityEngine::Timeline::ScheduleRuntimeClip::get_mixer)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x69c0440;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::ScheduleRuntimeClip*>(), { "get_mixer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::ScheduleRuntimeClip.get_playable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Playables::Playable (::UnityEngine::Timeline::ScheduleRuntimeClip::*)()>(
    &::UnityEngine::Timeline::ScheduleRuntimeClip::get_playable)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x69c044c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::ScheduleRuntimeClip*>(), { "get_playable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::ScheduleRuntimeClip._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::ScheduleRuntimeClip::*)(
    ::UnityEngine::Timeline::TimelineClip*, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::Playable, double_t, double_t)>(&::UnityEngine::Timeline::ScheduleRuntimeClip::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x69bac24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::ScheduleRuntimeClip*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Timeline::TimelineClip*>(), ::i2c::type_of<::UnityEngine::Playables::Playable>(),
                                                                 ::i2c::type_of<::UnityEngine::Playables::Playable>(), ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::ScheduleRuntimeClip.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::ScheduleRuntimeClip::*)(
    ::UnityEngine::Timeline::TimelineClip*, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::Playable, double_t, double_t)>(&::UnityEngine::Timeline::ScheduleRuntimeClip::Create)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x69c0458;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::ScheduleRuntimeClip*>(),
                                                             { "Create",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Timeline::TimelineClip*>(), ::i2c::type_of<::UnityEngine::Playables::Playable>(),
                                                                 ::i2c::type_of<::UnityEngine::Playables::Playable>(), ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::ScheduleRuntimeClip.set_enable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::ScheduleRuntimeClip::*)(bool)>(&::UnityEngine::Timeline::ScheduleRuntimeClip::set_enable)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x69c04f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::ScheduleRuntimeClip*>(), { ::i2c::class_of<::UnityEngine::Timeline::ScheduleRuntimeClip*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::ScheduleRuntimeClip.EvaluateAt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::ScheduleRuntimeClip::*)(double_t, ::UnityEngine::Playables::FrameData)>(
    &::UnityEngine::Timeline::ScheduleRuntimeClip::EvaluateAt)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x69c0614;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::ScheduleRuntimeClip*>(), { ::i2c::class_of<::UnityEngine::Timeline::ScheduleRuntimeClip*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::ScheduleRuntimeClip.DisableAt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::ScheduleRuntimeClip::*)(double_t, double_t, ::UnityEngine::Playables::FrameData)>(
    &::UnityEngine::Timeline::ScheduleRuntimeClip::DisableAt)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x69c08a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::ScheduleRuntimeClip*>(), { ::i2c::class_of<::UnityEngine::Timeline::ScheduleRuntimeClip*>(), 10 }));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Timeline::TimelineClip*& UnityEngine::Timeline::ScheduleRuntimeClip::__cordl_internal_get_m_Clip() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Clip;
}
constexpr ::UnityEngine::Timeline::TimelineClip* const& UnityEngine::Timeline::ScheduleRuntimeClip::__cordl_internal_get_m_Clip() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Clip;
}
constexpr void UnityEngine::Timeline::ScheduleRuntimeClip::__cordl_internal_set_m_Clip(::UnityEngine::Timeline::TimelineClip* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Clip = value;
}
constexpr ::UnityEngine::Playables::Playable& UnityEngine::Timeline::ScheduleRuntimeClip::__cordl_internal_get_m_Playable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Playable;
}
constexpr ::UnityEngine::Playables::Playable const& UnityEngine::Timeline::ScheduleRuntimeClip::__cordl_internal_get_m_Playable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Playable;
}
constexpr void UnityEngine::Timeline::ScheduleRuntimeClip::__cordl_internal_set_m_Playable(::UnityEngine::Playables::Playable value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Playable = value;
}
constexpr ::UnityEngine::Playables::Playable& UnityEngine::Timeline::ScheduleRuntimeClip::__cordl_internal_get_m_ParentMixer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ParentMixer;
}
constexpr ::UnityEngine::Playables::Playable const& UnityEngine::Timeline::ScheduleRuntimeClip::__cordl_internal_get_m_ParentMixer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ParentMixer;
}
constexpr void UnityEngine::Timeline::ScheduleRuntimeClip::__cordl_internal_set_m_ParentMixer(::UnityEngine::Playables::Playable value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ParentMixer = value;
}
constexpr double_t& UnityEngine::Timeline::ScheduleRuntimeClip::__cordl_internal_get_m_StartDelay() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StartDelay;
}
constexpr double_t const& UnityEngine::Timeline::ScheduleRuntimeClip::__cordl_internal_get_m_StartDelay() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StartDelay;
}
constexpr void UnityEngine::Timeline::ScheduleRuntimeClip::__cordl_internal_set_m_StartDelay(double_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_StartDelay = value;
}
constexpr double_t& UnityEngine::Timeline::ScheduleRuntimeClip::__cordl_internal_get_m_FinishTail() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FinishTail;
}
constexpr double_t const& UnityEngine::Timeline::ScheduleRuntimeClip::__cordl_internal_get_m_FinishTail() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FinishTail;
}
constexpr void UnityEngine::Timeline::ScheduleRuntimeClip::__cordl_internal_set_m_FinishTail(double_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_FinishTail = value;
}
constexpr bool& UnityEngine::Timeline::ScheduleRuntimeClip::__cordl_internal_get_m_Started() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Started;
}
constexpr bool const& UnityEngine::Timeline::ScheduleRuntimeClip::__cordl_internal_get_m_Started() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Started;
}
constexpr void UnityEngine::Timeline::ScheduleRuntimeClip::__cordl_internal_set_m_Started(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Started = value;
}
inline double_t UnityEngine::Timeline::ScheduleRuntimeClip::get_start() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Timeline::ScheduleRuntimeClip*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline double_t UnityEngine::Timeline::ScheduleRuntimeClip::get_duration() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Timeline::ScheduleRuntimeClip*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline void UnityEngine::Timeline::ScheduleRuntimeClip::SetTime(double_t time) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::ScheduleRuntimeClip*>(), { "SetTime", {}, { ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, time);
}
inline ::UnityEngine::Timeline::TimelineClip* UnityEngine::Timeline::ScheduleRuntimeClip::get_clip() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::ScheduleRuntimeClip*>(), { "get_clip", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Timeline::TimelineClip*>(this, ___internal_method);
}
inline ::UnityEngine::Playables::Playable UnityEngine::Timeline::ScheduleRuntimeClip::get_mixer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::ScheduleRuntimeClip*>(), { "get_mixer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::Playable>(this, ___internal_method);
}
inline ::UnityEngine::Playables::Playable UnityEngine::Timeline::ScheduleRuntimeClip::get_playable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::ScheduleRuntimeClip*>(), { "get_playable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::Playable>(this, ___internal_method);
}
inline void UnityEngine::Timeline::ScheduleRuntimeClip::_ctor(::UnityEngine::Timeline::TimelineClip* clip, ::UnityEngine::Playables::Playable clipPlayable,
                                                              ::UnityEngine::Playables::Playable parentMixer, double_t startDelay, double_t finishTail) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::ScheduleRuntimeClip*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Timeline::TimelineClip*>(), ::i2c::type_of<::UnityEngine::Playables::Playable>(),
                                                               ::i2c::type_of<::UnityEngine::Playables::Playable>(), ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clip, clipPlayable, parentMixer, startDelay, finishTail);
}
inline void UnityEngine::Timeline::ScheduleRuntimeClip::Create(::UnityEngine::Timeline::TimelineClip* clip, ::UnityEngine::Playables::Playable clipPlayable,
                                                               ::UnityEngine::Playables::Playable parentMixer, double_t startDelay, double_t finishTail) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::ScheduleRuntimeClip*>(),
                                                           { "Create",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Timeline::TimelineClip*>(), ::i2c::type_of<::UnityEngine::Playables::Playable>(),
                                                               ::i2c::type_of<::UnityEngine::Playables::Playable>(), ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clip, clipPlayable, parentMixer, startDelay, finishTail);
}
inline void UnityEngine::Timeline::ScheduleRuntimeClip::set_enable(bool value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Timeline::ScheduleRuntimeClip*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Timeline::ScheduleRuntimeClip::EvaluateAt(double_t localTime, ::UnityEngine::Playables::FrameData frameData) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Timeline::ScheduleRuntimeClip*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, localTime, frameData);
}
inline void UnityEngine::Timeline::ScheduleRuntimeClip::DisableAt(double_t localTime, double_t rootDuration, ::UnityEngine::Playables::FrameData frameData) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Timeline::ScheduleRuntimeClip*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, localTime, rootDuration, frameData);
}
inline ::UnityEngine::Timeline::ScheduleRuntimeClip* UnityEngine::Timeline::ScheduleRuntimeClip::New_ctor(::UnityEngine::Timeline::TimelineClip* clip, ::UnityEngine::Playables::Playable clipPlayable,
                                                                                                          ::UnityEngine::Playables::Playable parentMixer, double_t startDelay, double_t finishTail) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Timeline::ScheduleRuntimeClip*>(clip, clipPlayable, parentMixer, startDelay, finishTail));
}
// Ctor Parameters []
constexpr ::UnityEngine::Timeline::ScheduleRuntimeClip::ScheduleRuntimeClip() {}
