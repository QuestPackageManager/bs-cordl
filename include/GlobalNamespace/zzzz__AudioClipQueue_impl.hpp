#pragma once
// IWYU pragma private; include "GlobalNamespace\AudioClipQueue.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__AudioClipQueue_def.hpp"
#include "GlobalNamespace/zzzz__AudioClipQueue_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AudioClipQueue_AudioClipWithDelay._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioClipQueue_AudioClipWithDelay::*)(::UnityEngine::AudioClip*, float_t)>(
    &::GlobalNamespace::AudioClipQueue_AudioClipWithDelay::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x58b4730;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioClipQueue_AudioClipWithDelay*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::AudioClip*>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::AudioClipQueue_AudioClipWithDelay::__cordl_internal_get_audioClip() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___audioClip;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::AudioClipQueue_AudioClipWithDelay::__cordl_internal_get_audioClip() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___audioClip;
}
constexpr void GlobalNamespace::AudioClipQueue_AudioClipWithDelay::__cordl_internal_set_audioClip(::UnityW<::UnityEngine::AudioClip> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___audioClip = value;
}
constexpr float_t& GlobalNamespace::AudioClipQueue_AudioClipWithDelay::__cordl_internal_get_delay() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___delay;
}
constexpr float_t const& GlobalNamespace::AudioClipQueue_AudioClipWithDelay::__cordl_internal_get_delay() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___delay;
}
constexpr void GlobalNamespace::AudioClipQueue_AudioClipWithDelay::__cordl_internal_set_delay(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___delay = value;
}
inline void GlobalNamespace::AudioClipQueue_AudioClipWithDelay::_ctor(::UnityEngine::AudioClip* audioClip, float_t delay) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioClipQueue_AudioClipWithDelay*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::UnityEngine::AudioClip*>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, audioClip, delay);
}
inline ::GlobalNamespace::AudioClipQueue_AudioClipWithDelay* GlobalNamespace::AudioClipQueue_AudioClipWithDelay::New_ctor(::UnityEngine::AudioClip* audioClip, float_t delay) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AudioClipQueue_AudioClipWithDelay*>(audioClip, delay));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AudioClipQueue_AudioClipWithDelay::AudioClipQueue_AudioClipWithDelay() {}
//  Writing Method size for method: ::GlobalNamespace::AudioClipQueue.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioClipQueue::*)()>(&::GlobalNamespace::AudioClipQueue::Awake)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x58b43ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioClipQueue*>(), { "Awake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioClipQueue.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioClipQueue::*)()>(&::GlobalNamespace::AudioClipQueue::Update)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x58b4408;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioClipQueue*>(), { "Update", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioClipQueue.PlayAudioClipWithDelay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioClipQueue::*)(::UnityEngine::AudioClip*, float_t)>(&::GlobalNamespace::AudioClipQueue::PlayAudioClipWithDelay)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x58b4640;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioClipQueue*>(), { "PlayAudioClipWithDelay", {}, { ::i2c::type_of<::UnityEngine::AudioClip*>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioClipQueue._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioClipQueue::*)()>(&::GlobalNamespace::AudioClipQueue::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x58b473c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioClipQueue*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::AudioClipQueue::__cordl_internal_get__audioSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::AudioClipQueue::__cordl_internal_get__audioSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioSource;
}
constexpr void GlobalNamespace::AudioClipQueue::__cordl_internal_set__audioSource(::UnityW<::UnityEngine::AudioSource> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____audioSource = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::AudioClipQueue_AudioClipWithDelay*>*& GlobalNamespace::AudioClipQueue::__cordl_internal_get__queue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____queue;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::AudioClipQueue_AudioClipWithDelay*>* const& GlobalNamespace::AudioClipQueue::__cordl_internal_get__queue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____queue;
}
constexpr void GlobalNamespace::AudioClipQueue::__cordl_internal_set__queue(::System::Collections::Generic::List_1<::GlobalNamespace::AudioClipQueue_AudioClipWithDelay*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____queue = value;
}
inline void GlobalNamespace::AudioClipQueue::Awake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioClipQueue*>(), { "Awake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AudioClipQueue::Update() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioClipQueue*>(), { "Update", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AudioClipQueue::PlayAudioClipWithDelay(::UnityEngine::AudioClip* audioClip, float_t delay) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioClipQueue*>(), { "PlayAudioClipWithDelay", {}, { ::i2c::type_of<::UnityEngine::AudioClip*>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, audioClip, delay);
}
inline void GlobalNamespace::AudioClipQueue::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioClipQueue*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::AudioClipQueue* GlobalNamespace::AudioClipQueue::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AudioClipQueue*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AudioClipQueue::AudioClipQueue() {}
