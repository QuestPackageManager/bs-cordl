#pragma once
// IWYU pragma private; include "Oculus\Platform\VoipAudioSourceHiLevel.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Platform/zzzz__VoipAudioSourceHiLevel_def.hpp"
#include "Oculus/Platform/zzzz__IVoipPCMSource_def.hpp"
#include "Oculus/Platform/zzzz__VoipAudioSourceHiLevel_def.hpp"
#include "Oculus/Platform/zzzz__VoipSampleRate_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::VoipAudioSourceHiLevel_FilterReadDelegate.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::VoipAudioSourceHiLevel_FilterReadDelegate::*)()>(
    &::Oculus::Platform::VoipAudioSourceHiLevel_FilterReadDelegate::Awake)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5decb10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::VoipAudioSourceHiLevel_FilterReadDelegate*>(), { "Awake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::VoipAudioSourceHiLevel_FilterReadDelegate.OnAudioFilterRead
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::VoipAudioSourceHiLevel_FilterReadDelegate::*)(::ArrayW<float_t>, int32_t)>(
    &::Oculus::Platform::VoipAudioSourceHiLevel_FilterReadDelegate::OnAudioFilterRead)> {
  constexpr static std::size_t size = 0x4c0;
  constexpr static std::size_t addrs = 0x5decb94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::VoipAudioSourceHiLevel_FilterReadDelegate*>(),
                                                                                           { "OnAudioFilterRead", {}, { ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::VoipAudioSourceHiLevel_FilterReadDelegate._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::VoipAudioSourceHiLevel_FilterReadDelegate::*)()>(
    &::Oculus::Platform::VoipAudioSourceHiLevel_FilterReadDelegate::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5ded054;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::VoipAudioSourceHiLevel_FilterReadDelegate*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Oculus::Platform::VoipAudioSourceHiLevel>& Oculus::Platform::VoipAudioSourceHiLevel_FilterReadDelegate::__cordl_internal_get_parent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___parent;
}
constexpr ::UnityW<::Oculus::Platform::VoipAudioSourceHiLevel> const& Oculus::Platform::VoipAudioSourceHiLevel_FilterReadDelegate::__cordl_internal_get_parent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___parent;
}
constexpr void Oculus::Platform::VoipAudioSourceHiLevel_FilterReadDelegate::__cordl_internal_set_parent(::UnityW<::Oculus::Platform::VoipAudioSourceHiLevel> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___parent = value;
}
constexpr ::ArrayW<float_t>& Oculus::Platform::VoipAudioSourceHiLevel_FilterReadDelegate::__cordl_internal_get_scratchBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scratchBuffer;
}
constexpr ::ArrayW<float_t> const& Oculus::Platform::VoipAudioSourceHiLevel_FilterReadDelegate::__cordl_internal_get_scratchBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scratchBuffer;
}
constexpr void Oculus::Platform::VoipAudioSourceHiLevel_FilterReadDelegate::__cordl_internal_set_scratchBuffer(::ArrayW<float_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___scratchBuffer = value;
}
inline void Oculus::Platform::VoipAudioSourceHiLevel_FilterReadDelegate::Awake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::VoipAudioSourceHiLevel_FilterReadDelegate*>(), { "Awake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Platform::VoipAudioSourceHiLevel_FilterReadDelegate::OnAudioFilterRead(::ArrayW<float_t> data, int32_t channels) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::VoipAudioSourceHiLevel_FilterReadDelegate*>(),
                                                                                         { "OnAudioFilterRead", {}, { ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, channels);
}
inline void Oculus::Platform::VoipAudioSourceHiLevel_FilterReadDelegate::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::VoipAudioSourceHiLevel_FilterReadDelegate*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Platform::VoipAudioSourceHiLevel_FilterReadDelegate* Oculus::Platform::VoipAudioSourceHiLevel_FilterReadDelegate::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Platform::VoipAudioSourceHiLevel_FilterReadDelegate*>());
}
// Ctor Parameters []
constexpr ::Oculus::Platform::VoipAudioSourceHiLevel_FilterReadDelegate::VoipAudioSourceHiLevel_FilterReadDelegate() {}
//  Writing Method size for method: ::Oculus::Platform::VoipAudioSourceHiLevel.set_senderID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::VoipAudioSourceHiLevel::*)(uint64_t)>(&::Oculus::Platform::VoipAudioSourceHiLevel::set_senderID)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5dec35c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::VoipAudioSourceHiLevel*>(), { "set_senderID", {}, { ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::VoipAudioSourceHiLevel.Stop
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::VoipAudioSourceHiLevel::*)()>(&::Oculus::Platform::VoipAudioSourceHiLevel::Stop)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5dec414;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::VoipAudioSourceHiLevel*>(), { "Stop", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::VoipAudioSourceHiLevel.SampleRateToEnum
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::VoipSampleRate (::Oculus::Platform::VoipAudioSourceHiLevel::*)(int32_t)>(
    &::Oculus::Platform::VoipAudioSourceHiLevel::SampleRateToEnum)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5dec418;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::VoipAudioSourceHiLevel*>(), { "SampleRateToEnum", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::VoipAudioSourceHiLevel.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::VoipAudioSourceHiLevel::*)()>(&::Oculus::Platform::VoipAudioSourceHiLevel::Awake)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0x5dec45c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::VoipAudioSourceHiLevel*>(), { "Awake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::VoipAudioSourceHiLevel.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::VoipAudioSourceHiLevel::*)()>(&::Oculus::Platform::VoipAudioSourceHiLevel::Start)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5dec730;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::VoipAudioSourceHiLevel*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::VoipAudioSourceHiLevel.CreatePCMSource
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::VoipAudioSourceHiLevel::*)()>(&::Oculus::Platform::VoipAudioSourceHiLevel::CreatePCMSource)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5dec748;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::VoipAudioSourceHiLevel*>(), { ::i2c::class_of<::Oculus::Platform::VoipAudioSourceHiLevel*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::VoipAudioSourceHiLevel.MSToElements
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t)>(&::Oculus::Platform::VoipAudioSourceHiLevel::MSToElements)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5dec79c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::VoipAudioSourceHiLevel*>(), { "MSToElements", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::VoipAudioSourceHiLevel.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::VoipAudioSourceHiLevel::*)()>(&::Oculus::Platform::VoipAudioSourceHiLevel::Update)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0x5dec808;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::VoipAudioSourceHiLevel*>(), { "Update", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::VoipAudioSourceHiLevel._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::VoipAudioSourceHiLevel::*)()>(&::Oculus::Platform::VoipAudioSourceHiLevel::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5decb0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::VoipAudioSourceHiLevel*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& Oculus::Platform::VoipAudioSourceHiLevel::__cordl_internal_get_initialPlaybackDelayMS() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___initialPlaybackDelayMS;
}
constexpr int32_t const& Oculus::Platform::VoipAudioSourceHiLevel::__cordl_internal_get_initialPlaybackDelayMS() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___initialPlaybackDelayMS;
}
constexpr void Oculus::Platform::VoipAudioSourceHiLevel::__cordl_internal_set_initialPlaybackDelayMS(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___initialPlaybackDelayMS = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& Oculus::Platform::VoipAudioSourceHiLevel::__cordl_internal_get_audioSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___audioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& Oculus::Platform::VoipAudioSourceHiLevel::__cordl_internal_get_audioSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___audioSource;
}
constexpr void Oculus::Platform::VoipAudioSourceHiLevel::__cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___audioSource = value;
}
constexpr float_t& Oculus::Platform::VoipAudioSourceHiLevel::__cordl_internal_get_peakAmplitude() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___peakAmplitude;
}
constexpr float_t const& Oculus::Platform::VoipAudioSourceHiLevel::__cordl_internal_get_peakAmplitude() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___peakAmplitude;
}
constexpr void Oculus::Platform::VoipAudioSourceHiLevel::__cordl_internal_set_peakAmplitude(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___peakAmplitude = value;
}
constexpr ::Oculus::Platform::IVoipPCMSource*& Oculus::Platform::VoipAudioSourceHiLevel::__cordl_internal_get_pcmSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pcmSource;
}
constexpr ::Oculus::Platform::IVoipPCMSource* const& Oculus::Platform::VoipAudioSourceHiLevel::__cordl_internal_get_pcmSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pcmSource;
}
constexpr void Oculus::Platform::VoipAudioSourceHiLevel::__cordl_internal_set_pcmSource(::Oculus::Platform::IVoipPCMSource* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___pcmSource = value;
}
inline void Oculus::Platform::VoipAudioSourceHiLevel::setStaticF_audioSystemPlaybackFrequency(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "audioSystemPlaybackFrequency", ::Oculus::Platform::VoipAudioSourceHiLevel*>(std::forward<int32_t>(value));
}
inline int32_t Oculus::Platform::VoipAudioSourceHiLevel::getStaticF_audioSystemPlaybackFrequency() {
  return ::cordl_internals::getStaticField<int32_t, "audioSystemPlaybackFrequency", ::Oculus::Platform::VoipAudioSourceHiLevel*>();
}
inline void Oculus::Platform::VoipAudioSourceHiLevel::setStaticF_verboseLogging(bool value) {
  ::cordl_internals::setStaticField<bool, "verboseLogging", ::Oculus::Platform::VoipAudioSourceHiLevel*>(std::forward<bool>(value));
}
inline bool Oculus::Platform::VoipAudioSourceHiLevel::getStaticF_verboseLogging() {
  return ::cordl_internals::getStaticField<bool, "verboseLogging", ::Oculus::Platform::VoipAudioSourceHiLevel*>();
}
inline void Oculus::Platform::VoipAudioSourceHiLevel::set_senderID(uint64_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::VoipAudioSourceHiLevel*>(), { "set_senderID", {}, { ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Platform::VoipAudioSourceHiLevel::Stop() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::VoipAudioSourceHiLevel*>(), { "Stop", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Platform::VoipSampleRate Oculus::Platform::VoipAudioSourceHiLevel::SampleRateToEnum(int32_t rate) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::VoipAudioSourceHiLevel*>(), { "SampleRateToEnum", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::VoipSampleRate>(this, ___internal_method, rate);
}
inline void Oculus::Platform::VoipAudioSourceHiLevel::Awake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::VoipAudioSourceHiLevel*>(), { "Awake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Platform::VoipAudioSourceHiLevel::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::VoipAudioSourceHiLevel*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Platform::VoipAudioSourceHiLevel::CreatePCMSource() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::VoipAudioSourceHiLevel*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Oculus::Platform::VoipAudioSourceHiLevel::MSToElements(int32_t ms) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::VoipAudioSourceHiLevel*>(), { "MSToElements", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, ms);
}
inline void Oculus::Platform::VoipAudioSourceHiLevel::Update() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::VoipAudioSourceHiLevel*>(), { "Update", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Platform::VoipAudioSourceHiLevel::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::VoipAudioSourceHiLevel*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Platform::VoipAudioSourceHiLevel* Oculus::Platform::VoipAudioSourceHiLevel::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Platform::VoipAudioSourceHiLevel*>());
}
// Ctor Parameters []
constexpr ::Oculus::Platform::VoipAudioSourceHiLevel::VoipAudioSourceHiLevel() {}
