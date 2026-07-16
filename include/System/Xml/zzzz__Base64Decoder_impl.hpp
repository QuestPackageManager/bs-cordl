#pragma once
// IWYU pragma private; include "System/Xml/Base64Decoder.hpp"
#include "System/Xml/zzzz__IncrementalReadDecoder_impl.hpp"
#include "System/Xml/zzzz__Base64Decoder_def.hpp"
#include "System/zzzz__Array_def.hpp"
//  Writing Method size for method: ::System::Xml::Base64Decoder.get_DecodedCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::Base64Decoder::*)()>(&::System::Xml::Base64Decoder::get_DecodedCount)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x618c56c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Base64Decoder*>(), { ::i2c::class_of<::System::Xml::Base64Decoder*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Base64Decoder.get_IsFull
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Base64Decoder::*)()>(&::System::Xml::Base64Decoder::get_IsFull)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x618c578;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Base64Decoder*>(), { ::i2c::class_of<::System::Xml::Base64Decoder*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Base64Decoder.Decode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::Base64Decoder::*)(::ArrayW<char16_t>, int32_t, int32_t)>(&::System::Xml::Base64Decoder::Decode)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x618c588;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Base64Decoder*>(), { ::i2c::class_of<::System::Xml::Base64Decoder*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Base64Decoder.Decode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::Base64Decoder::*)(::StringW, int32_t, int32_t)>(&::System::Xml::Base64Decoder::Decode)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x618c954;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Base64Decoder*>(), { ::i2c::class_of<::System::Xml::Base64Decoder*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Base64Decoder.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Base64Decoder::*)()>(&::System::Xml::Base64Decoder::Reset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x618caa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Base64Decoder*>(), { ::i2c::class_of<::System::Xml::Base64Decoder*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Base64Decoder.SetNextOutputBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Base64Decoder::*)(::System::Array*, int32_t, int32_t)>(&::System::Xml::Base64Decoder::SetNextOutputBuffer)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x618caa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Base64Decoder*>(), { ::i2c::class_of<::System::Xml::Base64Decoder*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Base64Decoder.ConstructMapBase64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)()>(&::System::Xml::Base64Decoder::ConstructMapBase64)> {
  constexpr static std::size_t size = 0x324;
  constexpr static std::size_t addrs = 0x618cb54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Base64Decoder*>(), { "ConstructMapBase64", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Base64Decoder.Decode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Base64Decoder::*)(char16_t*, char16_t*, uint8_t*, uint8_t*, ::by_ref<int32_t>, ::by_ref<int32_t>)>(
    &::System::Xml::Base64Decoder::Decode)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x618c6d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::Base64Decoder*>(), { "Decode",
                                                                                {},
                                                                                { ::i2c::type_of<char16_t*>(), ::i2c::type_of<char16_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>(),
                                                                                  ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Base64Decoder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Base64Decoder::*)()>(&::System::Xml::Base64Decoder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x618ce78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Base64Decoder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint8_t>& System::Xml::Base64Decoder::__cordl_internal_get_buffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buffer;
}
constexpr ::ArrayW<uint8_t> const& System::Xml::Base64Decoder::__cordl_internal_get_buffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buffer;
}
constexpr void System::Xml::Base64Decoder::__cordl_internal_set_buffer(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___buffer = value;
}
constexpr int32_t& System::Xml::Base64Decoder::__cordl_internal_get_startIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startIndex;
}
constexpr int32_t const& System::Xml::Base64Decoder::__cordl_internal_get_startIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startIndex;
}
constexpr void System::Xml::Base64Decoder::__cordl_internal_set_startIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___startIndex = value;
}
constexpr int32_t& System::Xml::Base64Decoder::__cordl_internal_get_curIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___curIndex;
}
constexpr int32_t const& System::Xml::Base64Decoder::__cordl_internal_get_curIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___curIndex;
}
constexpr void System::Xml::Base64Decoder::__cordl_internal_set_curIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___curIndex = value;
}
constexpr int32_t& System::Xml::Base64Decoder::__cordl_internal_get_endIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___endIndex;
}
constexpr int32_t const& System::Xml::Base64Decoder::__cordl_internal_get_endIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___endIndex;
}
constexpr void System::Xml::Base64Decoder::__cordl_internal_set_endIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___endIndex = value;
}
constexpr int32_t& System::Xml::Base64Decoder::__cordl_internal_get_bits() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bits;
}
constexpr int32_t const& System::Xml::Base64Decoder::__cordl_internal_get_bits() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bits;
}
constexpr void System::Xml::Base64Decoder::__cordl_internal_set_bits(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bits = value;
}
constexpr int32_t& System::Xml::Base64Decoder::__cordl_internal_get_bitsFilled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bitsFilled;
}
constexpr int32_t const& System::Xml::Base64Decoder::__cordl_internal_get_bitsFilled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bitsFilled;
}
constexpr void System::Xml::Base64Decoder::__cordl_internal_set_bitsFilled(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bitsFilled = value;
}
inline void System::Xml::Base64Decoder::setStaticF_CharsBase64(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "CharsBase64", ::System::Xml::Base64Decoder*>(std::forward<::StringW>(value));
}
inline ::StringW System::Xml::Base64Decoder::getStaticF_CharsBase64() {
  return ::cordl_internals::getStaticField<::StringW, "CharsBase64", ::System::Xml::Base64Decoder*>();
}
inline void System::Xml::Base64Decoder::setStaticF_MapBase64(::ArrayW<uint8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t>, "MapBase64", ::System::Xml::Base64Decoder*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> System::Xml::Base64Decoder::getStaticF_MapBase64() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "MapBase64", ::System::Xml::Base64Decoder*>();
}
inline int32_t System::Xml::Base64Decoder::get_DecodedCount() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Base64Decoder*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool System::Xml::Base64Decoder::get_IsFull() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Base64Decoder*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t System::Xml::Base64Decoder::Decode(::ArrayW<char16_t> chars, int32_t startPos, int32_t len) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Base64Decoder*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, chars, startPos, len);
}
inline int32_t System::Xml::Base64Decoder::Decode(::StringW str, int32_t startPos, int32_t len) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Base64Decoder*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, str, startPos, len);
}
inline void System::Xml::Base64Decoder::Reset() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Base64Decoder*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::Base64Decoder::SetNextOutputBuffer(::System::Array* buffer, int32_t index, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Base64Decoder*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, index, count);
}
inline ::ArrayW<uint8_t> System::Xml::Base64Decoder::ConstructMapBase64() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Base64Decoder*>(), { "ConstructMapBase64", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method);
}
inline void System::Xml::Base64Decoder::Decode(char16_t* pChars, char16_t* pCharsEndPos, uint8_t* pBytes, uint8_t* pBytesEndPos, ::by_ref<int32_t> charsDecoded, ::by_ref<int32_t> bytesDecoded) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::Base64Decoder*>(), { "Decode",
                                                                              {},
                                                                              { ::i2c::type_of<char16_t*>(), ::i2c::type_of<char16_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>(),
                                                                                ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pChars, pCharsEndPos, pBytes, pBytesEndPos, charsDecoded, bytesDecoded);
}
inline void System::Xml::Base64Decoder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Base64Decoder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::Base64Decoder* System::Xml::Base64Decoder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Base64Decoder*>());
}
// Ctor Parameters []
constexpr ::System::Xml::Base64Decoder::Base64Decoder() {}
