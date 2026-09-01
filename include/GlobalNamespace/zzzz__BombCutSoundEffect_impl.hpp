#pragma once
// IWYU pragma private; include "GlobalNamespace\BombCutSoundEffect.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Zenject/zzzz__MonoMemoryPool_1_impl.hpp"
#include "GlobalNamespace/zzzz__BombCutSoundEffect_def.hpp"
#include "GlobalNamespace/zzzz__BombCutSoundEffect_def.hpp"
#include "GlobalNamespace/zzzz__Saber_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BombCutSoundEffect_Pool._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BombCutSoundEffect_Pool::*)()>(&::GlobalNamespace::BombCutSoundEffect_Pool::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x58b651c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BombCutSoundEffect_Pool*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::BombCutSoundEffect_Pool::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BombCutSoundEffect_Pool*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BombCutSoundEffect_Pool* GlobalNamespace::BombCutSoundEffect_Pool::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BombCutSoundEffect_Pool*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BombCutSoundEffect_Pool::BombCutSoundEffect_Pool() {}
//  Writing Method size for method: ::GlobalNamespace::BombCutSoundEffect.add_didFinishEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BombCutSoundEffect::*)(::System::Action_1<::UnityW<::GlobalNamespace::BombCutSoundEffect>>*)>(
    &::GlobalNamespace::BombCutSoundEffect::add_didFinishEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x58b6248;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BombCutSoundEffect*>(),
                                                             { "add_didFinishEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::BombCutSoundEffect>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BombCutSoundEffect.remove_didFinishEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BombCutSoundEffect::*)(::System::Action_1<::UnityW<::GlobalNamespace::BombCutSoundEffect>>*)>(
    &::GlobalNamespace::BombCutSoundEffect::remove_didFinishEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x58b6308;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BombCutSoundEffect*>(),
                                                             { "remove_didFinishEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::BombCutSoundEffect>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BombCutSoundEffect.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BombCutSoundEffect::*)(::UnityEngine::AudioClip*, ::GlobalNamespace::Saber*, float_t)>(
    &::GlobalNamespace::BombCutSoundEffect::Init)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x58b63c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BombCutSoundEffect*>(),
                                                             { "Init", {}, { ::i2c::type_of<::UnityEngine::AudioClip*>(), ::i2c::type_of<::GlobalNamespace::Saber*>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BombCutSoundEffect.LateUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BombCutSoundEffect::*)()>(&::GlobalNamespace::BombCutSoundEffect::LateUpdate)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x58b6438;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BombCutSoundEffect*>(), { "LateUpdate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BombCutSoundEffect.StopPlayingAndFinish
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BombCutSoundEffect::*)()>(&::GlobalNamespace::BombCutSoundEffect::StopPlayingAndFinish)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x58b64c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BombCutSoundEffect*>(), { "StopPlayingAndFinish", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BombCutSoundEffect._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BombCutSoundEffect::*)()>(&::GlobalNamespace::BombCutSoundEffect::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58b6518;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BombCutSoundEffect*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::BombCutSoundEffect::__cordl_internal_get__audioSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::BombCutSoundEffect::__cordl_internal_get__audioSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioSource;
}
constexpr void GlobalNamespace::BombCutSoundEffect::__cordl_internal_set__audioSource(::UnityW<::UnityEngine::AudioSource> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____audioSource = value;
}
constexpr ::System::Action_1<::UnityW<::GlobalNamespace::BombCutSoundEffect>>*& GlobalNamespace::BombCutSoundEffect::__cordl_internal_get_didFinishEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didFinishEvent;
}
constexpr ::System::Action_1<::UnityW<::GlobalNamespace::BombCutSoundEffect>>* const& GlobalNamespace::BombCutSoundEffect::__cordl_internal_get_didFinishEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didFinishEvent;
}
constexpr void GlobalNamespace::BombCutSoundEffect::__cordl_internal_set_didFinishEvent(::System::Action_1<::UnityW<::GlobalNamespace::BombCutSoundEffect>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___didFinishEvent = value;
}
constexpr ::UnityW<::GlobalNamespace::Saber>& GlobalNamespace::BombCutSoundEffect::__cordl_internal_get__saber() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saber;
}
constexpr ::UnityW<::GlobalNamespace::Saber> const& GlobalNamespace::BombCutSoundEffect::__cordl_internal_get__saber() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saber;
}
constexpr void GlobalNamespace::BombCutSoundEffect::__cordl_internal_set__saber(::UnityW<::GlobalNamespace::Saber> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____saber = value;
}
inline void GlobalNamespace::BombCutSoundEffect::add_didFinishEvent(::System::Action_1<::UnityW<::GlobalNamespace::BombCutSoundEffect>>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BombCutSoundEffect*>(),
                                                           { "add_didFinishEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::BombCutSoundEffect>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::BombCutSoundEffect::remove_didFinishEvent(::System::Action_1<::UnityW<::GlobalNamespace::BombCutSoundEffect>>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BombCutSoundEffect*>(),
                                                           { "remove_didFinishEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::BombCutSoundEffect>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::BombCutSoundEffect::Init(::UnityEngine::AudioClip* audioClip, ::GlobalNamespace::Saber* saber, float_t volume) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BombCutSoundEffect*>(),
                                                           { "Init", {}, { ::i2c::type_of<::UnityEngine::AudioClip*>(), ::i2c::type_of<::GlobalNamespace::Saber*>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, audioClip, saber, volume);
}
inline void GlobalNamespace::BombCutSoundEffect::LateUpdate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BombCutSoundEffect*>(), { "LateUpdate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BombCutSoundEffect::StopPlayingAndFinish() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BombCutSoundEffect*>(), { "StopPlayingAndFinish", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BombCutSoundEffect::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BombCutSoundEffect*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BombCutSoundEffect* GlobalNamespace::BombCutSoundEffect::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BombCutSoundEffect*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BombCutSoundEffect::BombCutSoundEffect() {}
