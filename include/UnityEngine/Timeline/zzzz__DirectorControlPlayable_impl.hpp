#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/DirectorControlPlayable.hpp"
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_impl.hpp"
#include "UnityEngine/Timeline/zzzz__DirectorControlPlayable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Playables/zzzz__FrameData_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableDirector_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableGraph_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
#include "UnityEngine/Playables/zzzz__ScriptPlayable_1_def.hpp"
#include "UnityEngine/Timeline/zzzz__DirectorControlPlayable_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Timeline::DirectorControlPlayable_PauseAction::DirectorControlPlayable_PauseAction(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Timeline::DirectorControlPlayable_PauseAction::DirectorControlPlayable_PauseAction() {}
constexpr ::UnityEngine::Timeline::DirectorControlPlayable_PauseAction UnityEngine::Timeline::DirectorControlPlayable_PauseAction::StopDirector{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Timeline::DirectorControlPlayable_PauseAction UnityEngine::Timeline::DirectorControlPlayable_PauseAction::PauseDirector{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::UnityEngine::Timeline::DirectorControlPlayable.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Playables::ScriptPlayable_1<::UnityEngine::Timeline::DirectorControlPlayable*> (*)(
    ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::Playables::PlayableDirector*)>(&::UnityEngine::Timeline::DirectorControlPlayable::Create)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x69bd5ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::DirectorControlPlayable*>(),
                                                { "Create", {}, { ::i2c::type_of<::UnityEngine::Playables::PlayableGraph>(), ::i2c::type_of<::UnityEngine::Playables::PlayableDirector*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::DirectorControlPlayable.OnPlayableDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::DirectorControlPlayable::*)(::UnityEngine::Playables::Playable)>(
    &::UnityEngine::Timeline::DirectorControlPlayable::OnPlayableDestroy)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x69c2b20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::DirectorControlPlayable*>(), { ::i2c::class_of<::UnityEngine::Timeline::DirectorControlPlayable*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::DirectorControlPlayable.PrepareFrame
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::DirectorControlPlayable::*)(::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData)>(
    &::UnityEngine::Timeline::DirectorControlPlayable::PrepareFrame)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x69c2be4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::DirectorControlPlayable*>(), { ::i2c::class_of<::UnityEngine::Timeline::DirectorControlPlayable*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::DirectorControlPlayable.OnBehaviourPlay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::DirectorControlPlayable::*)(::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData)>(
    &::UnityEngine::Timeline::DirectorControlPlayable::OnBehaviourPlay)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x69c3120;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::DirectorControlPlayable*>(), { ::i2c::class_of<::UnityEngine::Timeline::DirectorControlPlayable*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::DirectorControlPlayable.OnBehaviourPause
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::DirectorControlPlayable::*)(::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData)>(
    &::UnityEngine::Timeline::DirectorControlPlayable::OnBehaviourPause)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x69c31f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::DirectorControlPlayable*>(), { ::i2c::class_of<::UnityEngine::Timeline::DirectorControlPlayable*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::DirectorControlPlayable.ProcessFrame
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::DirectorControlPlayable::*)(
    ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*)>(&::UnityEngine::Timeline::DirectorControlPlayable::ProcessFrame)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x69c3314;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::DirectorControlPlayable*>(), { ::i2c::class_of<::UnityEngine::Timeline::DirectorControlPlayable*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::DirectorControlPlayable.SyncSpeed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::DirectorControlPlayable::*)(double_t)>(&::UnityEngine::Timeline::DirectorControlPlayable::SyncSpeed)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x69c2eb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::DirectorControlPlayable*>(), { "SyncSpeed", {}, { ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::DirectorControlPlayable.SyncStart
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::DirectorControlPlayable::*)(::UnityEngine::Playables::PlayableGraph, double_t)>(
    &::UnityEngine::Timeline::DirectorControlPlayable::SyncStart)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x69c3008;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::DirectorControlPlayable*>(),
                                                             { "SyncStart", {}, { ::i2c::type_of<::UnityEngine::Playables::PlayableGraph>(), ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::DirectorControlPlayable.SyncStop
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::DirectorControlPlayable::*)(::UnityEngine::Playables::PlayableGraph, double_t)>(
    &::UnityEngine::Timeline::DirectorControlPlayable::SyncStop)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x69c384c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::DirectorControlPlayable*>(),
                                                             { "SyncStop", {}, { ::i2c::type_of<::UnityEngine::Playables::PlayableGraph>(), ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::DirectorControlPlayable.DetectDiscontinuity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Timeline::DirectorControlPlayable::*)(::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData)>(
    &::UnityEngine::Timeline::DirectorControlPlayable::DetectDiscontinuity)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x69c2d94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::DirectorControlPlayable*>(),
                                                { "DetectDiscontinuity", {}, { ::i2c::type_of<::UnityEngine::Playables::Playable>(), ::i2c::type_of<::UnityEngine::Playables::FrameData>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::DirectorControlPlayable.DetectOutOfSync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Timeline::DirectorControlPlayable::*)(::UnityEngine::Playables::Playable)>(
    &::UnityEngine::Timeline::DirectorControlPlayable::DetectOutOfSync)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x69c3564;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::DirectorControlPlayable*>(), { "DetectOutOfSync", {}, { ::i2c::type_of<::UnityEngine::Playables::Playable>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::DirectorControlPlayable.UpdateTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::DirectorControlPlayable::*)(::UnityEngine::Playables::Playable)>(
    &::UnityEngine::Timeline::DirectorControlPlayable::UpdateTime)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x69c36b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::DirectorControlPlayable*>(), { "UpdateTime", {}, { ::i2c::type_of<::UnityEngine::Playables::Playable>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::DirectorControlPlayable._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::DirectorControlPlayable::*)()>(&::UnityEngine::Timeline::DirectorControlPlayable::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x69c3944;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::DirectorControlPlayable*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Playables::PlayableDirector>& UnityEngine::Timeline::DirectorControlPlayable::__cordl_internal_get_director() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___director;
}
constexpr ::UnityW<::UnityEngine::Playables::PlayableDirector> const& UnityEngine::Timeline::DirectorControlPlayable::__cordl_internal_get_director() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___director;
}
constexpr void UnityEngine::Timeline::DirectorControlPlayable::__cordl_internal_set_director(::UnityW<::UnityEngine::Playables::PlayableDirector> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___director = value;
}
constexpr ::UnityEngine::Timeline::DirectorControlPlayable_PauseAction& UnityEngine::Timeline::DirectorControlPlayable::__cordl_internal_get_pauseAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pauseAction;
}
constexpr ::UnityEngine::Timeline::DirectorControlPlayable_PauseAction const& UnityEngine::Timeline::DirectorControlPlayable::__cordl_internal_get_pauseAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pauseAction;
}
constexpr void UnityEngine::Timeline::DirectorControlPlayable::__cordl_internal_set_pauseAction(::UnityEngine::Timeline::DirectorControlPlayable_PauseAction value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___pauseAction = value;
}
constexpr bool& UnityEngine::Timeline::DirectorControlPlayable::__cordl_internal_get_m_SyncTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SyncTime;
}
constexpr bool const& UnityEngine::Timeline::DirectorControlPlayable::__cordl_internal_get_m_SyncTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SyncTime;
}
constexpr void UnityEngine::Timeline::DirectorControlPlayable::__cordl_internal_set_m_SyncTime(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SyncTime = value;
}
constexpr double_t& UnityEngine::Timeline::DirectorControlPlayable::__cordl_internal_get_m_AssetDuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AssetDuration;
}
constexpr double_t const& UnityEngine::Timeline::DirectorControlPlayable::__cordl_internal_get_m_AssetDuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AssetDuration;
}
constexpr void UnityEngine::Timeline::DirectorControlPlayable::__cordl_internal_set_m_AssetDuration(double_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AssetDuration = value;
}
inline ::UnityEngine::Playables::ScriptPlayable_1<::UnityEngine::Timeline::DirectorControlPlayable*>
UnityEngine::Timeline::DirectorControlPlayable::Create(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::Playables::PlayableDirector* director) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::DirectorControlPlayable*>(),
                                              { "Create", {}, { ::i2c::type_of<::UnityEngine::Playables::PlayableGraph>(), ::i2c::type_of<::UnityEngine::Playables::PlayableDirector*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::ScriptPlayable_1<::UnityEngine::Timeline::DirectorControlPlayable*>>(nullptr, ___internal_method, graph, director);
}
inline void UnityEngine::Timeline::DirectorControlPlayable::OnPlayableDestroy(::UnityEngine::Playables::Playable playable) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Timeline::DirectorControlPlayable*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playable);
}
inline void UnityEngine::Timeline::DirectorControlPlayable::PrepareFrame(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Timeline::DirectorControlPlayable*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playable, info);
}
inline void UnityEngine::Timeline::DirectorControlPlayable::OnBehaviourPlay(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Timeline::DirectorControlPlayable*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playable, info);
}
inline void UnityEngine::Timeline::DirectorControlPlayable::OnBehaviourPause(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Timeline::DirectorControlPlayable*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playable, info);
}
inline void UnityEngine::Timeline::DirectorControlPlayable::ProcessFrame(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info, ::System::Object* playerData) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Timeline::DirectorControlPlayable*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playable, info, playerData);
}
inline void UnityEngine::Timeline::DirectorControlPlayable::SyncSpeed(double_t speed) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::DirectorControlPlayable*>(), { "SyncSpeed", {}, { ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, speed);
}
inline void UnityEngine::Timeline::DirectorControlPlayable::SyncStart(::UnityEngine::Playables::PlayableGraph graph, double_t time) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::DirectorControlPlayable*>(),
                                                           { "SyncStart", {}, { ::i2c::type_of<::UnityEngine::Playables::PlayableGraph>(), ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, graph, time);
}
inline void UnityEngine::Timeline::DirectorControlPlayable::SyncStop(::UnityEngine::Playables::PlayableGraph graph, double_t time) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::DirectorControlPlayable*>(),
                                                           { "SyncStop", {}, { ::i2c::type_of<::UnityEngine::Playables::PlayableGraph>(), ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, graph, time);
}
inline bool UnityEngine::Timeline::DirectorControlPlayable::DetectDiscontinuity(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::DirectorControlPlayable*>(),
                                              { "DetectDiscontinuity", {}, { ::i2c::type_of<::UnityEngine::Playables::Playable>(), ::i2c::type_of<::UnityEngine::Playables::FrameData>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, playable, info);
}
inline bool UnityEngine::Timeline::DirectorControlPlayable::DetectOutOfSync(::UnityEngine::Playables::Playable playable) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::DirectorControlPlayable*>(), { "DetectOutOfSync", {}, { ::i2c::type_of<::UnityEngine::Playables::Playable>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, playable);
}
inline void UnityEngine::Timeline::DirectorControlPlayable::UpdateTime(::UnityEngine::Playables::Playable playable) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::DirectorControlPlayable*>(), { "UpdateTime", {}, { ::i2c::type_of<::UnityEngine::Playables::Playable>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playable);
}
inline void UnityEngine::Timeline::DirectorControlPlayable::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::DirectorControlPlayable*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Timeline::DirectorControlPlayable* UnityEngine::Timeline::DirectorControlPlayable::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Timeline::DirectorControlPlayable*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Timeline::DirectorControlPlayable::DirectorControlPlayable() {}
