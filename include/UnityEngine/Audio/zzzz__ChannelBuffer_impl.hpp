#pragma once
// IWYU pragma private; include "UnityEngine/Audio/ChannelBuffer.hpp"
#include "System/zzzz__Span_1_impl.hpp"
#include "UnityEngine/Audio/zzzz__ChannelBuffer_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
//  Writing Method size for method: ::UnityEngine::Audio::ChannelBuffer.get_channelCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Audio::ChannelBuffer::*)()>(&::UnityEngine::Audio::ChannelBuffer::get_channelCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6eaa570;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ChannelBuffer>(), { "get_channelCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::ChannelBuffer.get_frameCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Audio::ChannelBuffer::*)()>(&::UnityEngine::Audio::ChannelBuffer::get_frameCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6eaa578;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ChannelBuffer>(), { "get_frameCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::ChannelBuffer.get_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Audio::ChannelBuffer::*)(int32_t, int32_t)>(&::UnityEngine::Audio::ChannelBuffer::get_Item)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6eaa580;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ChannelBuffer>(), { "get_Item", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::ChannelBuffer.set_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Audio::ChannelBuffer::*)(int32_t, int32_t, float_t)>(&::UnityEngine::Audio::ChannelBuffer::set_Item)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6eaa5a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ChannelBuffer>(),
                                                                                           { "set_Item", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::ChannelBuffer.Clear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Audio::ChannelBuffer::*)()>(&::UnityEngine::Audio::ChannelBuffer::Clear)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6eaa5d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ChannelBuffer>(), { "Clear", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::ChannelBuffer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Audio::ChannelBuffer::*)(::System::Span_1<float_t>, int32_t)>(&::UnityEngine::Audio::ChannelBuffer::_ctor)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x6eaa620;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ChannelBuffer>(), { ".ctor", {}, { ::i2c::type_of<::System::Span_1<float_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline int32_t UnityEngine::Audio::ChannelBuffer::get_channelCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ChannelBuffer>(), { "get_channelCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t UnityEngine::Audio::ChannelBuffer::get_frameCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ChannelBuffer>(), { "get_frameCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline float_t UnityEngine::Audio::ChannelBuffer::get_Item(int32_t channel, int32_t frame) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ChannelBuffer>(), { "get_Item", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method, channel, frame);
}
inline void UnityEngine::Audio::ChannelBuffer::set_Item(int32_t channel, int32_t frame, float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ChannelBuffer>(),
                                                                                         { "set_Item", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, channel, frame, value);
}
inline void UnityEngine::Audio::ChannelBuffer::Clear() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ChannelBuffer>(), { "Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void UnityEngine::Audio::ChannelBuffer::_ctor(::System::Span_1<float_t> buffer, int32_t channels) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ChannelBuffer>(), { ".ctor", {}, { ::i2c::type_of<::System::Span_1<float_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, buffer, channels);
}
// Ctor Parameters [CppParam { name: "Buffer", ty: "::System::Span_1<float_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_ChannelCount", ty: "int32_t", modifiers: "",
// def_value: Some("{}"), comment: None }, CppParam { name: "m_FrameCount", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Audio::ChannelBuffer::ChannelBuffer(::System::Span_1<float_t> Buffer, int32_t m_ChannelCount, int32_t m_FrameCount) noexcept {
  this->Buffer = Buffer;
  this->m_ChannelCount = m_ChannelCount;
  this->m_FrameCount = m_FrameCount;
}
// Ctor Parameters []
constexpr ::UnityEngine::Audio::ChannelBuffer::ChannelBuffer() {}
