#pragma once
// IWYU pragma private; include "GlobalNamespace/BufferedAudioStream.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BufferedAudioStream_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BufferedAudioStream._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BufferedAudioStream::*)(::UnityEngine::AudioSource*)>(&::GlobalNamespace::BufferedAudioStream::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5db1270;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BufferedAudioStream*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::AudioSource*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BufferedAudioStream.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BufferedAudioStream::*)()>(&::GlobalNamespace::BufferedAudioStream::Update)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x5db1374;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BufferedAudioStream*>(), { "Update", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BufferedAudioStream.Stop
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BufferedAudioStream::*)()>(&::GlobalNamespace::BufferedAudioStream::Stop)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5db1330;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BufferedAudioStream*>(), { "Stop", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BufferedAudioStream.AddData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BufferedAudioStream::*)(::ArrayW<float_t>)>(&::GlobalNamespace::BufferedAudioStream::AddData)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x5db1598;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BufferedAudioStream*>(), { "AddData", {}, { ::i2c::type_of<::ArrayW<float_t>>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::BufferedAudioStream::__cordl_internal_get_audio() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___audio;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::BufferedAudioStream::__cordl_internal_get_audio() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___audio;
}
constexpr void GlobalNamespace::BufferedAudioStream::__cordl_internal_set_audio(::UnityW<::UnityEngine::AudioSource> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___audio = value;
}
constexpr ::ArrayW<float_t>& GlobalNamespace::BufferedAudioStream::__cordl_internal_get_audioBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___audioBuffer;
}
constexpr ::ArrayW<float_t> const& GlobalNamespace::BufferedAudioStream::__cordl_internal_get_audioBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___audioBuffer;
}
constexpr void GlobalNamespace::BufferedAudioStream::__cordl_internal_set_audioBuffer(::ArrayW<float_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___audioBuffer = value;
}
constexpr int32_t& GlobalNamespace::BufferedAudioStream::__cordl_internal_get_writePos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___writePos;
}
constexpr int32_t const& GlobalNamespace::BufferedAudioStream::__cordl_internal_get_writePos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___writePos;
}
constexpr void GlobalNamespace::BufferedAudioStream::__cordl_internal_set_writePos(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___writePos = value;
}
constexpr float_t& GlobalNamespace::BufferedAudioStream::__cordl_internal_get_playbackDelayRemaining() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playbackDelayRemaining;
}
constexpr float_t const& GlobalNamespace::BufferedAudioStream::__cordl_internal_get_playbackDelayRemaining() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playbackDelayRemaining;
}
constexpr void GlobalNamespace::BufferedAudioStream::__cordl_internal_set_playbackDelayRemaining(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___playbackDelayRemaining = value;
}
constexpr float_t& GlobalNamespace::BufferedAudioStream::__cordl_internal_get_remainingBufferTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___remainingBufferTime;
}
constexpr float_t const& GlobalNamespace::BufferedAudioStream::__cordl_internal_get_remainingBufferTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___remainingBufferTime;
}
constexpr void GlobalNamespace::BufferedAudioStream::__cordl_internal_set_remainingBufferTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___remainingBufferTime = value;
}
inline void GlobalNamespace::BufferedAudioStream::_ctor(::UnityEngine::AudioSource* audio) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BufferedAudioStream*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::AudioSource*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, audio);
}
inline void GlobalNamespace::BufferedAudioStream::Update() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BufferedAudioStream*>(), { "Update", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BufferedAudioStream::Stop() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BufferedAudioStream*>(), { "Stop", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BufferedAudioStream::AddData(::ArrayW<float_t> samples) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BufferedAudioStream*>(), { "AddData", {}, { ::i2c::type_of<::ArrayW<float_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, samples);
}
inline ::GlobalNamespace::BufferedAudioStream* GlobalNamespace::BufferedAudioStream::New_ctor(::UnityEngine::AudioSource* audio) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BufferedAudioStream*>(audio));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BufferedAudioStream::BufferedAudioStream() {}
