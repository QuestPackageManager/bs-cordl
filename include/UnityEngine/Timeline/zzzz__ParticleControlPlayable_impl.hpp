#pragma once
// IWYU pragma private; include "UnityEngine\Timeline\ParticleControlPlayable.hpp"
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_impl.hpp"
#include "UnityEngine/Timeline/zzzz__ParticleControlPlayable_def.hpp"
#include "UnityEngine/Playables/zzzz__FrameData_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableGraph_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
#include "UnityEngine/Playables/zzzz__ScriptPlayable_1_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
//  Writing Method size for method: ::UnityEngine::Timeline::ParticleControlPlayable.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Playables::ScriptPlayable_1<::UnityEngine::Timeline::ParticleControlPlayable*> (*)(
    ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::ParticleSystem*, uint32_t)>(&::UnityEngine::Timeline::ParticleControlPlayable::Create)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x69c9168;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::ParticleControlPlayable*>(),
                            { "Create", {}, { ::i2c::type_of<::UnityEngine::Playables::PlayableGraph>(), ::i2c::type_of<::UnityEngine::ParticleSystem*>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::ParticleControlPlayable.get_particleSystem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::ParticleSystem> (::UnityEngine::Timeline::ParticleControlPlayable::*)()>(
    &::UnityEngine::Timeline::ParticleControlPlayable::get_particleSystem)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69c9334;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::ParticleControlPlayable*>(), { "get_particleSystem", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::ParticleControlPlayable.set_particleSystem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::ParticleControlPlayable::*)(::UnityEngine::ParticleSystem*)>(
    &::UnityEngine::Timeline::ParticleControlPlayable::set_particleSystem)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69c933c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::ParticleControlPlayable*>(), { "set_particleSystem", {}, { ::i2c::type_of<::UnityEngine::ParticleSystem*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::ParticleControlPlayable.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::ParticleControlPlayable::*)(::UnityEngine::ParticleSystem*, uint32_t)>(
    &::UnityEngine::Timeline::ParticleControlPlayable::Initialize)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x69c92bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::ParticleControlPlayable*>(),
                                                                                           { "Initialize", {}, { ::i2c::type_of<::UnityEngine::ParticleSystem*>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::ParticleControlPlayable.SetRandomSeed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::ParticleSystem*, uint32_t)>(&::UnityEngine::Timeline::ParticleControlPlayable::SetRandomSeed)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x69c9344;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::ParticleControlPlayable*>(),
                                                                                           { "SetRandomSeed", {}, { ::i2c::type_of<::UnityEngine::ParticleSystem*>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::ParticleControlPlayable.PrepareFrame
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::ParticleControlPlayable::*)(::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData)>(
    &::UnityEngine::Timeline::ParticleControlPlayable::PrepareFrame)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x69c9470;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::ParticleControlPlayable*>(), { ::i2c::class_of<::UnityEngine::Timeline::ParticleControlPlayable*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::ParticleControlPlayable.OnBehaviourPlay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::ParticleControlPlayable::*)(::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData)>(
    &::UnityEngine::Timeline::ParticleControlPlayable::OnBehaviourPlay)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x69c9710;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::ParticleControlPlayable*>(), { ::i2c::class_of<::UnityEngine::Timeline::ParticleControlPlayable*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::ParticleControlPlayable.OnBehaviourPause
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::ParticleControlPlayable::*)(::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData)>(
    &::UnityEngine::Timeline::ParticleControlPlayable::OnBehaviourPause)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x69c971c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::ParticleControlPlayable*>(), { ::i2c::class_of<::UnityEngine::Timeline::ParticleControlPlayable*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::ParticleControlPlayable.Simulate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::ParticleControlPlayable::*)(float_t, bool)>(&::UnityEngine::Timeline::ParticleControlPlayable::Simulate)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x69c9630;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::ParticleControlPlayable*>(), { "Simulate", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::ParticleControlPlayable._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::ParticleControlPlayable::*)()>(&::UnityEngine::Timeline::ParticleControlPlayable::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x69c9728;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::ParticleControlPlayable*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr float_t& UnityEngine::Timeline::ParticleControlPlayable::__cordl_internal_get_m_LastPlayableTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LastPlayableTime;
}
constexpr float_t const& UnityEngine::Timeline::ParticleControlPlayable::__cordl_internal_get_m_LastPlayableTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LastPlayableTime;
}
constexpr void UnityEngine::Timeline::ParticleControlPlayable::__cordl_internal_set_m_LastPlayableTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LastPlayableTime = value;
}
constexpr float_t& UnityEngine::Timeline::ParticleControlPlayable::__cordl_internal_get_m_LastParticleTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LastParticleTime;
}
constexpr float_t const& UnityEngine::Timeline::ParticleControlPlayable::__cordl_internal_get_m_LastParticleTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LastParticleTime;
}
constexpr void UnityEngine::Timeline::ParticleControlPlayable::__cordl_internal_set_m_LastParticleTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LastParticleTime = value;
}
constexpr uint32_t& UnityEngine::Timeline::ParticleControlPlayable::__cordl_internal_get_m_RandomSeed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RandomSeed;
}
constexpr uint32_t const& UnityEngine::Timeline::ParticleControlPlayable::__cordl_internal_get_m_RandomSeed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RandomSeed;
}
constexpr void UnityEngine::Timeline::ParticleControlPlayable::__cordl_internal_set_m_RandomSeed(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RandomSeed = value;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem>& UnityEngine::Timeline::ParticleControlPlayable::__cordl_internal_get__particleSystem_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____particleSystem_k__BackingField;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem> const& UnityEngine::Timeline::ParticleControlPlayable::__cordl_internal_get__particleSystem_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____particleSystem_k__BackingField;
}
constexpr void UnityEngine::Timeline::ParticleControlPlayable::__cordl_internal_set__particleSystem_k__BackingField(::UnityW<::UnityEngine::ParticleSystem> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____particleSystem_k__BackingField = value;
}
inline ::UnityEngine::Playables::ScriptPlayable_1<::UnityEngine::Timeline::ParticleControlPlayable*>
UnityEngine::Timeline::ParticleControlPlayable::Create(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::ParticleSystem* component, uint32_t randomSeed) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::ParticleControlPlayable*>(),
                                       { "Create", {}, { ::i2c::type_of<::UnityEngine::Playables::PlayableGraph>(), ::i2c::type_of<::UnityEngine::ParticleSystem*>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::ScriptPlayable_1<::UnityEngine::Timeline::ParticleControlPlayable*>>(nullptr, ___internal_method, graph, component, randomSeed);
}
inline ::UnityW<::UnityEngine::ParticleSystem> UnityEngine::Timeline::ParticleControlPlayable::get_particleSystem() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::ParticleControlPlayable*>(), { "get_particleSystem", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::ParticleSystem>>(this, ___internal_method);
}
inline void UnityEngine::Timeline::ParticleControlPlayable::set_particleSystem(::UnityEngine::ParticleSystem* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::ParticleControlPlayable*>(), { "set_particleSystem", {}, { ::i2c::type_of<::UnityEngine::ParticleSystem*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Timeline::ParticleControlPlayable::Initialize(::UnityEngine::ParticleSystem* ps, uint32_t randomSeed) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::ParticleControlPlayable*>(),
                                                                                         { "Initialize", {}, { ::i2c::type_of<::UnityEngine::ParticleSystem*>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ps, randomSeed);
}
inline void UnityEngine::Timeline::ParticleControlPlayable::SetRandomSeed(::UnityEngine::ParticleSystem* particleSystem, uint32_t randomSeed) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::ParticleControlPlayable*>(),
                                                                                         { "SetRandomSeed", {}, { ::i2c::type_of<::UnityEngine::ParticleSystem*>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, particleSystem, randomSeed);
}
inline void UnityEngine::Timeline::ParticleControlPlayable::PrepareFrame(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData data) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Timeline::ParticleControlPlayable*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playable, data);
}
inline void UnityEngine::Timeline::ParticleControlPlayable::OnBehaviourPlay(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Timeline::ParticleControlPlayable*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playable, info);
}
inline void UnityEngine::Timeline::ParticleControlPlayable::OnBehaviourPause(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Timeline::ParticleControlPlayable*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playable, info);
}
inline void UnityEngine::Timeline::ParticleControlPlayable::Simulate(float_t time, bool restart) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::ParticleControlPlayable*>(), { "Simulate", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, time, restart);
}
inline void UnityEngine::Timeline::ParticleControlPlayable::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::ParticleControlPlayable*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Timeline::ParticleControlPlayable* UnityEngine::Timeline::ParticleControlPlayable::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Timeline::ParticleControlPlayable*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Timeline::ParticleControlPlayable::ParticleControlPlayable() {}
