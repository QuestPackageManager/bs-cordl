#pragma once
// IWYU pragma private; include "UnityEngine\Timeline\RuntimeClip.hpp"
#include "UnityEngine/Playables/zzzz__Playable_impl.hpp"
#include "UnityEngine/Timeline/zzzz__RuntimeClipBase_impl.hpp"
#include "UnityEngine/Timeline/zzzz__RuntimeClip_def.hpp"
#include "UnityEngine/Playables/zzzz__FrameData_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
#include "UnityEngine/Timeline/zzzz__TimelineClip_def.hpp"
//  Writing Method size for method: ::UnityEngine::Timeline::RuntimeClip.get_start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::UnityEngine::Timeline::RuntimeClip::*)()>(&::UnityEngine::Timeline::RuntimeClip::get_start)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x69c53d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::RuntimeClip*>(), { ::i2c::class_of<::UnityEngine::Timeline::RuntimeClip*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::RuntimeClip.get_duration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::UnityEngine::Timeline::RuntimeClip::*)()>(&::UnityEngine::Timeline::RuntimeClip::get_duration)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x69c5400;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::RuntimeClip*>(), { ::i2c::class_of<::UnityEngine::Timeline::RuntimeClip*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::RuntimeClip._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::RuntimeClip::*)(::UnityEngine::Timeline::TimelineClip*, ::UnityEngine::Playables::Playable,
                                                                                                      ::UnityEngine::Playables::Playable)>(&::UnityEngine::Timeline::RuntimeClip::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x69afb20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::RuntimeClip*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Timeline::TimelineClip*>(), ::i2c::type_of<::UnityEngine::Playables::Playable>(),
                                                                 ::i2c::type_of<::UnityEngine::Playables::Playable>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::RuntimeClip.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::RuntimeClip::*)(::UnityEngine::Timeline::TimelineClip*, ::UnityEngine::Playables::Playable,
                                                                                                      ::UnityEngine::Playables::Playable)>(&::UnityEngine::Timeline::RuntimeClip::Create)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x69c5418;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::RuntimeClip*>(),
                                                             { "Create",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Timeline::TimelineClip*>(), ::i2c::type_of<::UnityEngine::Playables::Playable>(),
                                                                 ::i2c::type_of<::UnityEngine::Playables::Playable>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::RuntimeClip.get_clip
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Timeline::TimelineClip* (::UnityEngine::Timeline::RuntimeClip::*)()>(&::UnityEngine::Timeline::RuntimeClip::get_clip)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69c54a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::RuntimeClip*>(), { "get_clip", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::RuntimeClip.get_mixer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Playables::Playable (::UnityEngine::Timeline::RuntimeClip::*)()>(&::UnityEngine::Timeline::RuntimeClip::get_mixer)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x69c54a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::RuntimeClip*>(), { "get_mixer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::RuntimeClip.get_playable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Playables::Playable (::UnityEngine::Timeline::RuntimeClip::*)()>(&::UnityEngine::Timeline::RuntimeClip::get_playable)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x69c54b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::RuntimeClip*>(), { "get_playable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::RuntimeClip.set_enable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::RuntimeClip::*)(bool)>(&::UnityEngine::Timeline::RuntimeClip::set_enable)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x69c54c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::RuntimeClip*>(), { ::i2c::class_of<::UnityEngine::Timeline::RuntimeClip*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::RuntimeClip.SetTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::RuntimeClip::*)(double_t)>(&::UnityEngine::Timeline::RuntimeClip::SetTime)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x69c5608;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::RuntimeClip*>(), { "SetTime", {}, { ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::RuntimeClip.SetDuration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::RuntimeClip::*)(double_t)>(&::UnityEngine::Timeline::RuntimeClip::SetDuration)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x69c5664;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::RuntimeClip*>(), { "SetDuration", {}, { ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::RuntimeClip.EvaluateAt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::RuntimeClip::*)(double_t, ::UnityEngine::Playables::FrameData)>(
    &::UnityEngine::Timeline::RuntimeClip::EvaluateAt)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x69c56c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::RuntimeClip*>(), { ::i2c::class_of<::UnityEngine::Timeline::RuntimeClip*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::RuntimeClip.DisableAt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::RuntimeClip::*)(double_t, double_t, ::UnityEngine::Playables::FrameData)>(
    &::UnityEngine::Timeline::RuntimeClip::DisableAt)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x69c58bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::RuntimeClip*>(), { ::i2c::class_of<::UnityEngine::Timeline::RuntimeClip*>(), 10 }));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Timeline::TimelineClip*& UnityEngine::Timeline::RuntimeClip::__cordl_internal_get_m_Clip() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Clip;
}
constexpr ::UnityEngine::Timeline::TimelineClip* const& UnityEngine::Timeline::RuntimeClip::__cordl_internal_get_m_Clip() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Clip;
}
constexpr void UnityEngine::Timeline::RuntimeClip::__cordl_internal_set_m_Clip(::UnityEngine::Timeline::TimelineClip* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Clip = value;
}
constexpr ::UnityEngine::Playables::Playable& UnityEngine::Timeline::RuntimeClip::__cordl_internal_get_m_Playable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Playable;
}
constexpr ::UnityEngine::Playables::Playable const& UnityEngine::Timeline::RuntimeClip::__cordl_internal_get_m_Playable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Playable;
}
constexpr void UnityEngine::Timeline::RuntimeClip::__cordl_internal_set_m_Playable(::UnityEngine::Playables::Playable value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Playable = value;
}
constexpr ::UnityEngine::Playables::Playable& UnityEngine::Timeline::RuntimeClip::__cordl_internal_get_m_ParentMixer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ParentMixer;
}
constexpr ::UnityEngine::Playables::Playable const& UnityEngine::Timeline::RuntimeClip::__cordl_internal_get_m_ParentMixer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ParentMixer;
}
constexpr void UnityEngine::Timeline::RuntimeClip::__cordl_internal_set_m_ParentMixer(::UnityEngine::Playables::Playable value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ParentMixer = value;
}
inline double_t UnityEngine::Timeline::RuntimeClip::get_start() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Timeline::RuntimeClip*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline double_t UnityEngine::Timeline::RuntimeClip::get_duration() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Timeline::RuntimeClip*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline void UnityEngine::Timeline::RuntimeClip::_ctor(::UnityEngine::Timeline::TimelineClip* clip, ::UnityEngine::Playables::Playable clipPlayable, ::UnityEngine::Playables::Playable parentMixer) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Timeline::RuntimeClip*>(),
          { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Timeline::TimelineClip*>(), ::i2c::type_of<::UnityEngine::Playables::Playable>(), ::i2c::type_of<::UnityEngine::Playables::Playable>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clip, clipPlayable, parentMixer);
}
inline void UnityEngine::Timeline::RuntimeClip::Create(::UnityEngine::Timeline::TimelineClip* clip, ::UnityEngine::Playables::Playable clipPlayable, ::UnityEngine::Playables::Playable parentMixer) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Timeline::RuntimeClip*>(),
          { "Create", {}, { ::i2c::type_of<::UnityEngine::Timeline::TimelineClip*>(), ::i2c::type_of<::UnityEngine::Playables::Playable>(), ::i2c::type_of<::UnityEngine::Playables::Playable>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clip, clipPlayable, parentMixer);
}
inline ::UnityEngine::Timeline::TimelineClip* UnityEngine::Timeline::RuntimeClip::get_clip() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::RuntimeClip*>(), { "get_clip", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Timeline::TimelineClip*>(this, ___internal_method);
}
inline ::UnityEngine::Playables::Playable UnityEngine::Timeline::RuntimeClip::get_mixer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::RuntimeClip*>(), { "get_mixer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::Playable>(this, ___internal_method);
}
inline ::UnityEngine::Playables::Playable UnityEngine::Timeline::RuntimeClip::get_playable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::RuntimeClip*>(), { "get_playable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::Playable>(this, ___internal_method);
}
inline void UnityEngine::Timeline::RuntimeClip::set_enable(bool value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Timeline::RuntimeClip*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Timeline::RuntimeClip::SetTime(double_t time) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::RuntimeClip*>(), { "SetTime", {}, { ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, time);
}
inline void UnityEngine::Timeline::RuntimeClip::SetDuration(double_t duration) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::RuntimeClip*>(), { "SetDuration", {}, { ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, duration);
}
inline void UnityEngine::Timeline::RuntimeClip::EvaluateAt(double_t localTime, ::UnityEngine::Playables::FrameData frameData) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Timeline::RuntimeClip*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, localTime, frameData);
}
inline void UnityEngine::Timeline::RuntimeClip::DisableAt(double_t localTime, double_t rootDuration, ::UnityEngine::Playables::FrameData frameData) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Timeline::RuntimeClip*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, localTime, rootDuration, frameData);
}
inline ::UnityEngine::Timeline::RuntimeClip* UnityEngine::Timeline::RuntimeClip::New_ctor(::UnityEngine::Timeline::TimelineClip* clip, ::UnityEngine::Playables::Playable clipPlayable,
                                                                                          ::UnityEngine::Playables::Playable parentMixer) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Timeline::RuntimeClip*>(clip, clipPlayable, parentMixer));
}
// Ctor Parameters []
constexpr ::UnityEngine::Timeline::RuntimeClip::RuntimeClip() {}
