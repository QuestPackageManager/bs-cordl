#pragma once
// IWYU pragma private; include "System\Xml\UTF16Decoder.hpp"
#include "System/Text/zzzz__Decoder_impl.hpp"
#include "System/Xml/zzzz__UTF16Decoder_def.hpp"
//  Writing Method size for method: ::System::Xml::UTF16Decoder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::UTF16Decoder::*)(bool)>(&::System::Xml::UTF16Decoder::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x62e2f30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::UTF16Decoder*>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::UTF16Decoder.GetCharCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::UTF16Decoder::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::Xml::UTF16Decoder::GetCharCount)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x62e2f40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::UTF16Decoder*>(), { ::i2c::class_of<::System::Xml::UTF16Decoder*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::UTF16Decoder.GetCharCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::UTF16Decoder::*)(::ArrayW<uint8_t>, int32_t, int32_t, bool)>(&::System::Xml::UTF16Decoder::GetCharCount)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x62e2f50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::UTF16Decoder*>(), { ::i2c::class_of<::System::Xml::UTF16Decoder*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::UTF16Decoder.GetChars
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::UTF16Decoder::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::ArrayW<char16_t>, int32_t)>(
    &::System::Xml::UTF16Decoder::GetChars)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x62e3028;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::UTF16Decoder*>(), { ::i2c::class_of<::System::Xml::UTF16Decoder*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::UTF16Decoder.Convert
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::UTF16Decoder::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::ArrayW<char16_t>, int32_t, int32_t, bool, ::by_ref<int32_t>,
                                                                                             ::by_ref<int32_t>, ::by_ref<bool>)>(&::System::Xml::UTF16Decoder::Convert)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x62e31a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::UTF16Decoder*>(), { ::i2c::class_of<::System::Xml::UTF16Decoder*>(), 12 }));
    return ___internal_method;
  }
};
constexpr bool& System::Xml::UTF16Decoder::__cordl_internal_get_bigEndian() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bigEndian;
}
constexpr bool const& System::Xml::UTF16Decoder::__cordl_internal_get_bigEndian() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bigEndian;
}
constexpr void System::Xml::UTF16Decoder::__cordl_internal_set_bigEndian(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bigEndian = value;
}
constexpr int32_t& System::Xml::UTF16Decoder::__cordl_internal_get_lastByte() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastByte;
}
constexpr int32_t const& System::Xml::UTF16Decoder::__cordl_internal_get_lastByte() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastByte;
}
constexpr void System::Xml::UTF16Decoder::__cordl_internal_set_lastByte(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lastByte = value;
}
inline void System::Xml::UTF16Decoder::_ctor(bool bigEndian) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::UTF16Decoder*>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bigEndian);
}
inline int32_t System::Xml::UTF16Decoder::GetCharCount(::ArrayW<uint8_t> bytes, int32_t index, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::UTF16Decoder*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, bytes, index, count);
}
inline int32_t System::Xml::UTF16Decoder::GetCharCount(::ArrayW<uint8_t> bytes, int32_t index, int32_t count, bool flush) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::UTF16Decoder*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, bytes, index, count, flush);
}
inline int32_t System::Xml::UTF16Decoder::GetChars(::ArrayW<uint8_t> bytes, int32_t byteIndex, int32_t byteCount, ::ArrayW<char16_t> chars, int32_t charIndex) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::UTF16Decoder*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, bytes, byteIndex, byteCount, chars, charIndex);
}
inline void System::Xml::UTF16Decoder::Convert(::ArrayW<uint8_t> bytes, int32_t byteIndex, int32_t byteCount, ::ArrayW<char16_t> chars, int32_t charIndex, int32_t charCount, bool flush,
                                               ::by_ref<int32_t> bytesUsed, ::by_ref<int32_t> charsUsed, ::by_ref<bool> completed) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::UTF16Decoder*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bytes, byteIndex, byteCount, chars, charIndex, charCount, flush, bytesUsed, charsUsed, completed);
}
inline ::System::Xml::UTF16Decoder* System::Xml::UTF16Decoder::New_ctor(bool bigEndian) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::UTF16Decoder*>(bigEndian));
}
// Ctor Parameters []
constexpr ::System::Xml::UTF16Decoder::UTF16Decoder() {}
