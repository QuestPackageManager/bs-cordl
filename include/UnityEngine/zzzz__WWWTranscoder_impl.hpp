#pragma once
// IWYU pragma private; include "UnityEngine/WWWTranscoder.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__WWWTranscoder_def.hpp"
//  Writing Method size for method: ::UnityEngine::WWWTranscoder.Hex2Byte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (*)(::ArrayW<uint8_t>, int32_t)>(&::UnityEngine::WWWTranscoder::Hex2Byte)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x6e247c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::WWWTranscoder*>(), { "Hex2Byte", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::WWWTranscoder.URLDecode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<uint8_t>)>(&::UnityEngine::WWWTranscoder::URLDecode)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6e24458;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::WWWTranscoder*>(), { "URLDecode", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::WWWTranscoder.ByteSubArrayEquals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>)>(&::UnityEngine::WWWTranscoder::ByteSubArrayEquals)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6e24b58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::WWWTranscoder*>(),
                                                             { "ByteSubArrayEquals", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::WWWTranscoder.Decode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<uint8_t>, uint8_t, ::ArrayW<uint8_t>)>(&::UnityEngine::WWWTranscoder::Decode)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0x6e2487c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::WWWTranscoder*>(),
                                                             { "Decode", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::WWWTranscoder::setStaticF_ucHexChars(::ArrayW<uint8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t>, "ucHexChars", ::UnityEngine::WWWTranscoder*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> UnityEngine::WWWTranscoder::getStaticF_ucHexChars() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "ucHexChars", ::UnityEngine::WWWTranscoder*>();
}
inline void UnityEngine::WWWTranscoder::setStaticF_lcHexChars(::ArrayW<uint8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t>, "lcHexChars", ::UnityEngine::WWWTranscoder*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> UnityEngine::WWWTranscoder::getStaticF_lcHexChars() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "lcHexChars", ::UnityEngine::WWWTranscoder*>();
}
inline void UnityEngine::WWWTranscoder::setStaticF_urlEscapeChar(uint8_t value) {
  ::cordl_internals::setStaticField<uint8_t, "urlEscapeChar", ::UnityEngine::WWWTranscoder*>(std::forward<uint8_t>(value));
}
inline uint8_t UnityEngine::WWWTranscoder::getStaticF_urlEscapeChar() {
  return ::cordl_internals::getStaticField<uint8_t, "urlEscapeChar", ::UnityEngine::WWWTranscoder*>();
}
inline void UnityEngine::WWWTranscoder::setStaticF_urlSpace(::ArrayW<uint8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t>, "urlSpace", ::UnityEngine::WWWTranscoder*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> UnityEngine::WWWTranscoder::getStaticF_urlSpace() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "urlSpace", ::UnityEngine::WWWTranscoder*>();
}
inline void UnityEngine::WWWTranscoder::setStaticF_dataSpace(::ArrayW<uint8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t>, "dataSpace", ::UnityEngine::WWWTranscoder*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> UnityEngine::WWWTranscoder::getStaticF_dataSpace() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "dataSpace", ::UnityEngine::WWWTranscoder*>();
}
inline void UnityEngine::WWWTranscoder::setStaticF_urlForbidden(::ArrayW<uint8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t>, "urlForbidden", ::UnityEngine::WWWTranscoder*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> UnityEngine::WWWTranscoder::getStaticF_urlForbidden() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "urlForbidden", ::UnityEngine::WWWTranscoder*>();
}
inline void UnityEngine::WWWTranscoder::setStaticF_qpEscapeChar(uint8_t value) {
  ::cordl_internals::setStaticField<uint8_t, "qpEscapeChar", ::UnityEngine::WWWTranscoder*>(std::forward<uint8_t>(value));
}
inline uint8_t UnityEngine::WWWTranscoder::getStaticF_qpEscapeChar() {
  return ::cordl_internals::getStaticField<uint8_t, "qpEscapeChar", ::UnityEngine::WWWTranscoder*>();
}
inline void UnityEngine::WWWTranscoder::setStaticF_qpSpace(::ArrayW<uint8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t>, "qpSpace", ::UnityEngine::WWWTranscoder*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> UnityEngine::WWWTranscoder::getStaticF_qpSpace() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "qpSpace", ::UnityEngine::WWWTranscoder*>();
}
inline void UnityEngine::WWWTranscoder::setStaticF_qpForbidden(::ArrayW<uint8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t>, "qpForbidden", ::UnityEngine::WWWTranscoder*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> UnityEngine::WWWTranscoder::getStaticF_qpForbidden() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "qpForbidden", ::UnityEngine::WWWTranscoder*>();
}
inline uint8_t UnityEngine::WWWTranscoder::Hex2Byte(::ArrayW<uint8_t> b, int32_t offset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::WWWTranscoder*>(), { "Hex2Byte", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint8_t>(nullptr, ___internal_method, b, offset);
}
inline ::ArrayW<uint8_t> UnityEngine::WWWTranscoder::URLDecode(::ArrayW<uint8_t> toEncode) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::WWWTranscoder*>(), { "URLDecode", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, toEncode);
}
inline bool UnityEngine::WWWTranscoder::ByteSubArrayEquals(::ArrayW<uint8_t> array, int32_t index, ::ArrayW<uint8_t> comperand) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::WWWTranscoder*>(),
                                                           { "ByteSubArrayEquals", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, array, index, comperand);
}
inline ::ArrayW<uint8_t> UnityEngine::WWWTranscoder::Decode(::ArrayW<uint8_t> input, uint8_t escapeChar, ::ArrayW<uint8_t> space) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::WWWTranscoder*>(),
                                                           { "Decode", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, input, escapeChar, space);
}
// Ctor Parameters []
constexpr ::UnityEngine::WWWTranscoder::WWWTranscoder() {}
