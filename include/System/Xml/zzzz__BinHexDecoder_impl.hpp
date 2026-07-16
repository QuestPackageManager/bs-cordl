#pragma once
// IWYU pragma private; include "System/Xml/BinHexDecoder.hpp"
#include "System/Xml/zzzz__IncrementalReadDecoder_impl.hpp"
#include "System/Xml/zzzz__BinHexDecoder_def.hpp"
#include "System/zzzz__Array_def.hpp"
//  Writing Method size for method: ::System::Xml::BinHexDecoder.get_DecodedCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::BinHexDecoder::*)()>(&::System::Xml::BinHexDecoder::get_DecodedCount)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x618d3bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::BinHexDecoder*>(), { ::i2c::class_of<::System::Xml::BinHexDecoder*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::BinHexDecoder.get_IsFull
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::BinHexDecoder::*)()>(&::System::Xml::BinHexDecoder::get_IsFull)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x618d3c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::BinHexDecoder*>(), { ::i2c::class_of<::System::Xml::BinHexDecoder*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::BinHexDecoder.Decode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::BinHexDecoder::*)(::ArrayW<char16_t>, int32_t, int32_t)>(&::System::Xml::BinHexDecoder::Decode)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x618d3d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::BinHexDecoder*>(), { ::i2c::class_of<::System::Xml::BinHexDecoder*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::BinHexDecoder.Decode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::BinHexDecoder::*)(::StringW, int32_t, int32_t)>(&::System::Xml::BinHexDecoder::Decode)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x618d6d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::BinHexDecoder*>(), { ::i2c::class_of<::System::Xml::BinHexDecoder*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::BinHexDecoder.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::BinHexDecoder::*)()>(&::System::Xml::BinHexDecoder::Reset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x618d820;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::BinHexDecoder*>(), { ::i2c::class_of<::System::Xml::BinHexDecoder*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::BinHexDecoder.SetNextOutputBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::BinHexDecoder::*)(::System::Array*, int32_t, int32_t)>(&::System::Xml::BinHexDecoder::SetNextOutputBuffer)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x618d828;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::BinHexDecoder*>(), { ::i2c::class_of<::System::Xml::BinHexDecoder*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::BinHexDecoder.Decode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<char16_t>, bool)>(&::System::Xml::BinHexDecoder::Decode)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x618d8d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::BinHexDecoder*>(), { "Decode", {}, { ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::BinHexDecoder.Decode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(char16_t*, char16_t*, uint8_t*, uint8_t*, ::by_ref<bool>, ::by_ref<uint8_t>, ::by_ref<int32_t>, ::by_ref<int32_t>)>(
    &::System::Xml::BinHexDecoder::Decode)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x618d528;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::BinHexDecoder*>(),
                                                { "Decode",
                                                  {},
                                                  { ::i2c::type_of<char16_t*>(), ::i2c::type_of<char16_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<::by_ref<bool>>(),
                                                    ::i2c::type_of<::by_ref<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::BinHexDecoder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::BinHexDecoder::*)()>(&::System::Xml::BinHexDecoder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x618dab0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::BinHexDecoder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint8_t>& System::Xml::BinHexDecoder::__cordl_internal_get_buffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buffer;
}
constexpr ::ArrayW<uint8_t> const& System::Xml::BinHexDecoder::__cordl_internal_get_buffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buffer;
}
constexpr void System::Xml::BinHexDecoder::__cordl_internal_set_buffer(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___buffer = value;
}
constexpr int32_t& System::Xml::BinHexDecoder::__cordl_internal_get_startIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startIndex;
}
constexpr int32_t const& System::Xml::BinHexDecoder::__cordl_internal_get_startIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startIndex;
}
constexpr void System::Xml::BinHexDecoder::__cordl_internal_set_startIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___startIndex = value;
}
constexpr int32_t& System::Xml::BinHexDecoder::__cordl_internal_get_curIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___curIndex;
}
constexpr int32_t const& System::Xml::BinHexDecoder::__cordl_internal_get_curIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___curIndex;
}
constexpr void System::Xml::BinHexDecoder::__cordl_internal_set_curIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___curIndex = value;
}
constexpr int32_t& System::Xml::BinHexDecoder::__cordl_internal_get_endIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___endIndex;
}
constexpr int32_t const& System::Xml::BinHexDecoder::__cordl_internal_get_endIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___endIndex;
}
constexpr void System::Xml::BinHexDecoder::__cordl_internal_set_endIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___endIndex = value;
}
constexpr bool& System::Xml::BinHexDecoder::__cordl_internal_get_hasHalfByteCached() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasHalfByteCached;
}
constexpr bool const& System::Xml::BinHexDecoder::__cordl_internal_get_hasHalfByteCached() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasHalfByteCached;
}
constexpr void System::Xml::BinHexDecoder::__cordl_internal_set_hasHalfByteCached(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hasHalfByteCached = value;
}
constexpr uint8_t& System::Xml::BinHexDecoder::__cordl_internal_get_cachedHalfByte() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cachedHalfByte;
}
constexpr uint8_t const& System::Xml::BinHexDecoder::__cordl_internal_get_cachedHalfByte() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cachedHalfByte;
}
constexpr void System::Xml::BinHexDecoder::__cordl_internal_set_cachedHalfByte(uint8_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cachedHalfByte = value;
}
inline int32_t System::Xml::BinHexDecoder::get_DecodedCount() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::BinHexDecoder*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool System::Xml::BinHexDecoder::get_IsFull() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::BinHexDecoder*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t System::Xml::BinHexDecoder::Decode(::ArrayW<char16_t> chars, int32_t startPos, int32_t len) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::BinHexDecoder*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, chars, startPos, len);
}
inline int32_t System::Xml::BinHexDecoder::Decode(::StringW str, int32_t startPos, int32_t len) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::BinHexDecoder*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, str, startPos, len);
}
inline void System::Xml::BinHexDecoder::Reset() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::BinHexDecoder*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::BinHexDecoder::SetNextOutputBuffer(::System::Array* buffer, int32_t index, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::BinHexDecoder*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, index, count);
}
inline ::ArrayW<uint8_t> System::Xml::BinHexDecoder::Decode(::ArrayW<char16_t> chars, bool allowOddChars) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::BinHexDecoder*>(), { "Decode", {}, { ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, chars, allowOddChars);
}
inline void System::Xml::BinHexDecoder::Decode(char16_t* pChars, char16_t* pCharsEndPos, uint8_t* pBytes, uint8_t* pBytesEndPos, ::by_ref<bool> hasHalfByteCached, ::by_ref<uint8_t> cachedHalfByte,
                                               ::by_ref<int32_t> charsDecoded, ::by_ref<int32_t> bytesDecoded) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::BinHexDecoder*>(),
                                              { "Decode",
                                                {},
                                                { ::i2c::type_of<char16_t*>(), ::i2c::type_of<char16_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<::by_ref<bool>>(),
                                                  ::i2c::type_of<::by_ref<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, pChars, pCharsEndPos, pBytes, pBytesEndPos, hasHalfByteCached, cachedHalfByte, charsDecoded, bytesDecoded);
}
inline void System::Xml::BinHexDecoder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::BinHexDecoder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::BinHexDecoder* System::Xml::BinHexDecoder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::BinHexDecoder*>());
}
// Ctor Parameters []
constexpr ::System::Xml::BinHexDecoder::BinHexDecoder() {}
