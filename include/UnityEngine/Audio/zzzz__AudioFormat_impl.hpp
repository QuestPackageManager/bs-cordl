#pragma once
// IWYU pragma private; include "UnityEngine/Audio/AudioFormat.hpp"
#include "UnityEngine/zzzz__AudioConfiguration_impl.hpp"
#include "UnityEngine/Audio/zzzz__AudioFormat_def.hpp"
#include "UnityEngine/zzzz__AudioConfiguration_def.hpp"
#include "UnityEngine/zzzz__AudioSpeakerMode_def.hpp"
//  Writing Method size for method: ::UnityEngine::Audio::AudioFormat._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Audio::AudioFormat::*)(::UnityEngine::AudioConfiguration)>(&::UnityEngine::Audio::AudioFormat::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6eaa518;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioFormat>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::AudioConfiguration>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioFormat._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Audio::AudioFormat::*)(::UnityEngine::AudioSpeakerMode, int32_t, int32_t)>(&::UnityEngine::Audio::AudioFormat::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6eaa52c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioFormat>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::UnityEngine::AudioSpeakerMode>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioFormat.get_channelCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Audio::AudioFormat::*)()>(&::UnityEngine::Audio::AudioFormat::get_channelCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6eaa53c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioFormat>(), { "get_channelCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioFormat.get_bufferFrameCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Audio::AudioFormat::*)()>(&::UnityEngine::Audio::AudioFormat::get_bufferFrameCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6eaa544;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioFormat>(), { "get_bufferFrameCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioFormat.get_sampleRate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Audio::AudioFormat::*)()>(&::UnityEngine::Audio::AudioFormat::get_sampleRate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6eaa54c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioFormat>(), { "get_sampleRate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioFormat.get_speakerMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AudioSpeakerMode (::UnityEngine::Audio::AudioFormat::*)()>(&::UnityEngine::Audio::AudioFormat::get_speakerMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6eaa554;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioFormat>(), { "get_speakerMode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioFormat.get_audioConfiguration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AudioConfiguration (::UnityEngine::Audio::AudioFormat::*)()>(&::UnityEngine::Audio::AudioFormat::get_audioConfiguration)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6eaa55c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioFormat>(), { "get_audioConfiguration", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::Audio::AudioFormat::_ctor(::UnityEngine::AudioConfiguration config) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioFormat>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::AudioConfiguration>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, config);
}
inline void UnityEngine::Audio::AudioFormat::_ctor(::UnityEngine::AudioSpeakerMode speakerMode, int32_t sampleRate, int32_t bufferSize) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioFormat>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::AudioSpeakerMode>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, speakerMode, sampleRate, bufferSize);
}
inline int32_t UnityEngine::Audio::AudioFormat::get_channelCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioFormat>(), { "get_channelCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t UnityEngine::Audio::AudioFormat::get_bufferFrameCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioFormat>(), { "get_bufferFrameCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t UnityEngine::Audio::AudioFormat::get_sampleRate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioFormat>(), { "get_sampleRate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::UnityEngine::AudioSpeakerMode UnityEngine::Audio::AudioFormat::get_speakerMode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioFormat>(), { "get_speakerMode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::AudioSpeakerMode>(*this, ___internal_method);
}
inline ::UnityEngine::AudioConfiguration UnityEngine::Audio::AudioFormat::get_audioConfiguration() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioFormat>(), { "get_audioConfiguration", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::AudioConfiguration>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_Config", ty: "::UnityEngine::AudioConfiguration", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Audio::AudioFormat::AudioFormat(::UnityEngine::AudioConfiguration m_Config) noexcept {
  this->m_Config = m_Config;
}
// Ctor Parameters []
constexpr ::UnityEngine::Audio::AudioFormat::AudioFormat() {}
