#pragma once
// IWYU pragma private; include "System\Xml\Ucs4Decoder.hpp"
#include "System/Text/zzzz__Decoder_impl.hpp"
#include "System/Xml/zzzz__Ucs4Decoder_def.hpp"
//  Writing Method size for method: ::System::Xml::Ucs4Decoder.GetCharCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::Ucs4Decoder::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::Xml::Ucs4Decoder::GetCharCount)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x62e3bac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Ucs4Decoder*>(), { ::i2c::class_of<::System::Xml::Ucs4Decoder*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Ucs4Decoder.GetFullChars
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::Ucs4Decoder::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::ArrayW<char16_t>, int32_t)>(
    &::System::Xml::Ucs4Decoder::GetFullChars)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Ucs4Decoder*>(), { ::i2c::class_of<::System::Xml::Ucs4Decoder*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Ucs4Decoder.GetChars
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::Ucs4Decoder::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::ArrayW<char16_t>, int32_t)>(
    &::System::Xml::Ucs4Decoder::GetChars)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x62e3bc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Ucs4Decoder*>(), { ::i2c::class_of<::System::Xml::Ucs4Decoder*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Ucs4Decoder.Convert
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Ucs4Decoder::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::ArrayW<char16_t>, int32_t, int32_t, bool, ::by_ref<int32_t>,
                                                                                            ::by_ref<int32_t>, ::by_ref<bool>)>(&::System::Xml::Ucs4Decoder::Convert)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x62e3d78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Ucs4Decoder*>(), { ::i2c::class_of<::System::Xml::Ucs4Decoder*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Ucs4Decoder.Ucs4ToUTF16
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Ucs4Decoder::*)(uint32_t, ::ArrayW<char16_t>, int32_t)>(&::System::Xml::Ucs4Decoder::Ucs4ToUTF16)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x62e3fac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::Ucs4Decoder*>(), { "Ucs4ToUTF16", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Ucs4Decoder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Ucs4Decoder::*)()>(&::System::Xml::Ucs4Decoder::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x62e4004;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Ucs4Decoder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint8_t>& System::Xml::Ucs4Decoder::__cordl_internal_get_lastBytes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastBytes;
}
constexpr ::ArrayW<uint8_t> const& System::Xml::Ucs4Decoder::__cordl_internal_get_lastBytes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastBytes;
}
constexpr void System::Xml::Ucs4Decoder::__cordl_internal_set_lastBytes(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lastBytes = value;
}
constexpr int32_t& System::Xml::Ucs4Decoder::__cordl_internal_get_lastBytesCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastBytesCount;
}
constexpr int32_t const& System::Xml::Ucs4Decoder::__cordl_internal_get_lastBytesCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastBytesCount;
}
constexpr void System::Xml::Ucs4Decoder::__cordl_internal_set_lastBytesCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lastBytesCount = value;
}
inline int32_t System::Xml::Ucs4Decoder::GetCharCount(::ArrayW<uint8_t> bytes, int32_t index, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Ucs4Decoder*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, bytes, index, count);
}
inline int32_t System::Xml::Ucs4Decoder::GetFullChars(::ArrayW<uint8_t> bytes, int32_t byteIndex, int32_t byteCount, ::ArrayW<char16_t> chars, int32_t charIndex) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Ucs4Decoder*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, bytes, byteIndex, byteCount, chars, charIndex);
}
inline int32_t System::Xml::Ucs4Decoder::GetChars(::ArrayW<uint8_t> bytes, int32_t byteIndex, int32_t byteCount, ::ArrayW<char16_t> chars, int32_t charIndex) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Ucs4Decoder*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, bytes, byteIndex, byteCount, chars, charIndex);
}
inline void System::Xml::Ucs4Decoder::Convert(::ArrayW<uint8_t> bytes, int32_t byteIndex, int32_t byteCount, ::ArrayW<char16_t> chars, int32_t charIndex, int32_t charCount, bool flush,
                                              ::by_ref<int32_t> bytesUsed, ::by_ref<int32_t> charsUsed, ::by_ref<bool> completed) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Ucs4Decoder*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bytes, byteIndex, byteCount, chars, charIndex, charCount, flush, bytesUsed, charsUsed, completed);
}
inline void System::Xml::Ucs4Decoder::Ucs4ToUTF16(uint32_t code, ::ArrayW<char16_t> chars, int32_t charIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::Ucs4Decoder*>(), { "Ucs4ToUTF16", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, code, chars, charIndex);
}
inline void System::Xml::Ucs4Decoder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Ucs4Decoder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::Ucs4Decoder* System::Xml::Ucs4Decoder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Ucs4Decoder*>());
}
// Ctor Parameters []
constexpr ::System::Xml::Ucs4Decoder::Ucs4Decoder() {}
