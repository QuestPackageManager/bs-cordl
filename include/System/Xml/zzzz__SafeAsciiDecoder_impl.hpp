#pragma once
// IWYU pragma private; include "System\Xml\SafeAsciiDecoder.hpp"
#include "System/Text/zzzz__Decoder_impl.hpp"
#include "System/Xml/zzzz__SafeAsciiDecoder_def.hpp"
//  Writing Method size for method: ::System::Xml::SafeAsciiDecoder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::SafeAsciiDecoder::*)()>(&::System::Xml::SafeAsciiDecoder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x62e3370;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::SafeAsciiDecoder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::SafeAsciiDecoder.GetCharCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::SafeAsciiDecoder::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::Xml::SafeAsciiDecoder::GetCharCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62e3374;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::SafeAsciiDecoder*>(), { ::i2c::class_of<::System::Xml::SafeAsciiDecoder*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::SafeAsciiDecoder.GetChars
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::SafeAsciiDecoder::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::ArrayW<char16_t>, int32_t)>(
    &::System::Xml::SafeAsciiDecoder::GetChars)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x62e337c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::SafeAsciiDecoder*>(), { ::i2c::class_of<::System::Xml::SafeAsciiDecoder*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::SafeAsciiDecoder.Convert
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::SafeAsciiDecoder::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::ArrayW<char16_t>, int32_t, int32_t, bool, ::by_ref<int32_t>,
                                                                                                 ::by_ref<int32_t>, ::by_ref<bool>)>(&::System::Xml::SafeAsciiDecoder::Convert)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x62e33ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::SafeAsciiDecoder*>(), { ::i2c::class_of<::System::Xml::SafeAsciiDecoder*>(), 12 }));
    return ___internal_method;
  }
};
inline void System::Xml::SafeAsciiDecoder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::SafeAsciiDecoder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t System::Xml::SafeAsciiDecoder::GetCharCount(::ArrayW<uint8_t> bytes, int32_t index, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::SafeAsciiDecoder*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, bytes, index, count);
}
inline int32_t System::Xml::SafeAsciiDecoder::GetChars(::ArrayW<uint8_t> bytes, int32_t byteIndex, int32_t byteCount, ::ArrayW<char16_t> chars, int32_t charIndex) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::SafeAsciiDecoder*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, bytes, byteIndex, byteCount, chars, charIndex);
}
inline void System::Xml::SafeAsciiDecoder::Convert(::ArrayW<uint8_t> bytes, int32_t byteIndex, int32_t byteCount, ::ArrayW<char16_t> chars, int32_t charIndex, int32_t charCount, bool flush,
                                                   ::by_ref<int32_t> bytesUsed, ::by_ref<int32_t> charsUsed, ::by_ref<bool> completed) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::SafeAsciiDecoder*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bytes, byteIndex, byteCount, chars, charIndex, charCount, flush, bytesUsed, charsUsed, completed);
}
inline ::System::Xml::SafeAsciiDecoder* System::Xml::SafeAsciiDecoder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::SafeAsciiDecoder*>());
}
// Ctor Parameters []
constexpr ::System::Xml::SafeAsciiDecoder::SafeAsciiDecoder() {}
