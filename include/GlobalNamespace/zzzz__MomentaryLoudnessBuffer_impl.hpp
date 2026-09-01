#pragma once
// IWYU pragma private; include "GlobalNamespace\MomentaryLoudnessBuffer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MomentaryLoudnessBuffer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MomentaryLoudnessBuffer.get_isNextReadingIntervalReady
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MomentaryLoudnessBuffer::*)()>(&::GlobalNamespace::MomentaryLoudnessBuffer::get_isNextReadingIntervalReady)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3265f34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MomentaryLoudnessBuffer*>(), { "get_isNextReadingIntervalReady", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MomentaryLoudnessBuffer.get_buffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<float_t> (::GlobalNamespace::MomentaryLoudnessBuffer::*)()>(&::GlobalNamespace::MomentaryLoudnessBuffer::get_buffer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3267118;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MomentaryLoudnessBuffer*>(), { "get_buffer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MomentaryLoudnessBuffer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MomentaryLoudnessBuffer::*)(int32_t, int32_t, float_t, int32_t)>(&::GlobalNamespace::MomentaryLoudnessBuffer::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x3265e3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MomentaryLoudnessBuffer*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MomentaryLoudnessBuffer.AddSample
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MomentaryLoudnessBuffer::*)(float_t)>(&::GlobalNamespace::MomentaryLoudnessBuffer::AddSample)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x3265ef0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MomentaryLoudnessBuffer*>(), { "AddSample", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::MomentaryLoudnessBuffer::__cordl_internal_get_nextDataIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nextDataIndex;
}
constexpr int32_t const& GlobalNamespace::MomentaryLoudnessBuffer::__cordl_internal_get_nextDataIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nextDataIndex;
}
constexpr void GlobalNamespace::MomentaryLoudnessBuffer::__cordl_internal_set_nextDataIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nextDataIndex = value;
}
constexpr ::ArrayW<float_t>& GlobalNamespace::MomentaryLoudnessBuffer::__cordl_internal_get__buffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buffer;
}
constexpr ::ArrayW<float_t> const& GlobalNamespace::MomentaryLoudnessBuffer::__cordl_internal_get__buffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buffer;
}
constexpr void GlobalNamespace::MomentaryLoudnessBuffer::__cordl_internal_set__buffer(::ArrayW<float_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____buffer = value;
}
constexpr int32_t& GlobalNamespace::MomentaryLoudnessBuffer::__cordl_internal_get__readingInterval() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____readingInterval;
}
constexpr int32_t const& GlobalNamespace::MomentaryLoudnessBuffer::__cordl_internal_get__readingInterval() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____readingInterval;
}
constexpr void GlobalNamespace::MomentaryLoudnessBuffer::__cordl_internal_set__readingInterval(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____readingInterval = value;
}
inline bool GlobalNamespace::MomentaryLoudnessBuffer::get_isNextReadingIntervalReady() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MomentaryLoudnessBuffer*>(), { "get_isNextReadingIntervalReady", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::ArrayW<float_t> GlobalNamespace::MomentaryLoudnessBuffer::get_buffer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MomentaryLoudnessBuffer*>(), { "get_buffer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<float_t>>(this, ___internal_method);
}
inline void GlobalNamespace::MomentaryLoudnessBuffer::_ctor(int32_t numChannels, int32_t sampleFrequency, float_t momentaryWindowDuration, int32_t readingsPerBuffer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MomentaryLoudnessBuffer*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, numChannels, sampleFrequency, momentaryWindowDuration, readingsPerBuffer);
}
inline void GlobalNamespace::MomentaryLoudnessBuffer::AddSample(float_t data) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MomentaryLoudnessBuffer*>(), { "AddSample", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline ::GlobalNamespace::MomentaryLoudnessBuffer* GlobalNamespace::MomentaryLoudnessBuffer::New_ctor(int32_t numChannels, int32_t sampleFrequency, float_t momentaryWindowDuration,
                                                                                                      int32_t readingsPerBuffer) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MomentaryLoudnessBuffer*>(numChannels, sampleFrequency, momentaryWindowDuration, readingsPerBuffer));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MomentaryLoudnessBuffer::MomentaryLoudnessBuffer() {}
