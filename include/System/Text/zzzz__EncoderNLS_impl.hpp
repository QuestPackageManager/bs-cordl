#pragma once
// IWYU pragma private; include "System\Text\EncoderNLS.hpp"
#include "System/Text/zzzz__Encoder_impl.hpp"
#include "System/Text/zzzz__EncoderNLS_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
//  Writing Method size for method: ::System::Text::EncoderNLS._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::EncoderNLS::*)(::System::Text::Encoding*)>(&::System::Text::EncoderNLS::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5ad45dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::EncoderNLS*>(), { ".ctor", {}, { ::i2c::type_of<::System::Text::Encoding*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::EncoderNLS.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::EncoderNLS::*)()>(&::System::Text::EncoderNLS::Reset)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5ad4604;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::EncoderNLS*>(), { ::i2c::class_of<::System::Text::EncoderNLS*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::EncoderNLS.GetByteCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::EncoderNLS::*)(::ArrayW<char16_t>, int32_t, int32_t, bool)>(&::System::Text::EncoderNLS::GetByteCount)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x5ad4624;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::EncoderNLS*>(), { ::i2c::class_of<::System::Text::EncoderNLS*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::EncoderNLS.GetByteCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::EncoderNLS::*)(char16_t*, int32_t, bool)>(&::System::Text::EncoderNLS::GetByteCount)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5ad47fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::EncoderNLS*>(), { ::i2c::class_of<::System::Text::EncoderNLS*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::EncoderNLS.GetBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::EncoderNLS::*)(::ArrayW<char16_t>, int32_t, int32_t, ::ArrayW<uint8_t>, int32_t, bool)>(
    &::System::Text::EncoderNLS::GetBytes)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x5ad48ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::EncoderNLS*>(), { ::i2c::class_of<::System::Text::EncoderNLS*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::EncoderNLS.GetBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::EncoderNLS::*)(char16_t*, int32_t, uint8_t*, int32_t, bool)>(&::System::Text::EncoderNLS::GetBytes)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x5ad4b78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::EncoderNLS*>(), { ::i2c::class_of<::System::Text::EncoderNLS*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::EncoderNLS.Convert
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::EncoderNLS::*)(::ArrayW<char16_t>, int32_t, int32_t, ::ArrayW<uint8_t>, int32_t, int32_t, bool, ::by_ref<int32_t>,
                                                                                            ::by_ref<int32_t>, ::by_ref<bool>)>(&::System::Text::EncoderNLS::Convert)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0x5ad4c90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::EncoderNLS*>(), { ::i2c::class_of<::System::Text::EncoderNLS*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::EncoderNLS.Convert
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::EncoderNLS::*)(char16_t*, int32_t, uint8_t*, int32_t, bool, ::by_ref<int32_t>, ::by_ref<int32_t>, ::by_ref<bool>)>(
    &::System::Text::EncoderNLS::Convert)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x5ad4f58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::EncoderNLS*>(), { ::i2c::class_of<::System::Text::EncoderNLS*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::EncoderNLS.get_Encoding
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::Encoding* (::System::Text::EncoderNLS::*)()>(&::System::Text::EncoderNLS::get_Encoding)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ad50f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::EncoderNLS*>(), { "get_Encoding", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::EncoderNLS.get_MustFlush
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Text::EncoderNLS::*)()>(&::System::Text::EncoderNLS::get_MustFlush)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ad5100;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::EncoderNLS*>(), { "get_MustFlush", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::EncoderNLS.get_HasState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Text::EncoderNLS::*)()>(&::System::Text::EncoderNLS::get_HasState)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5ad5108;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::EncoderNLS*>(), { ::i2c::class_of<::System::Text::EncoderNLS*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::EncoderNLS.ClearMustFlush
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::EncoderNLS::*)()>(&::System::Text::EncoderNLS::ClearMustFlush)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ad5118;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::EncoderNLS*>(), { "ClearMustFlush", {}, {} })));
    return ___internal_method;
  }
};
constexpr char16_t& System::Text::EncoderNLS::__cordl_internal_get__charLeftOver() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____charLeftOver;
}
constexpr char16_t const& System::Text::EncoderNLS::__cordl_internal_get__charLeftOver() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____charLeftOver;
}
constexpr void System::Text::EncoderNLS::__cordl_internal_set__charLeftOver(char16_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____charLeftOver = value;
}
constexpr ::System::Text::Encoding*& System::Text::EncoderNLS::__cordl_internal_get__encoding() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____encoding;
}
constexpr ::System::Text::Encoding* const& System::Text::EncoderNLS::__cordl_internal_get__encoding() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____encoding;
}
constexpr void System::Text::EncoderNLS::__cordl_internal_set__encoding(::System::Text::Encoding* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____encoding = value;
}
constexpr bool& System::Text::EncoderNLS::__cordl_internal_get__mustFlush() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mustFlush;
}
constexpr bool const& System::Text::EncoderNLS::__cordl_internal_get__mustFlush() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mustFlush;
}
constexpr void System::Text::EncoderNLS::__cordl_internal_set__mustFlush(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____mustFlush = value;
}
constexpr bool& System::Text::EncoderNLS::__cordl_internal_get__throwOnOverflow() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____throwOnOverflow;
}
constexpr bool const& System::Text::EncoderNLS::__cordl_internal_get__throwOnOverflow() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____throwOnOverflow;
}
constexpr void System::Text::EncoderNLS::__cordl_internal_set__throwOnOverflow(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____throwOnOverflow = value;
}
constexpr int32_t& System::Text::EncoderNLS::__cordl_internal_get__charsUsed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____charsUsed;
}
constexpr int32_t const& System::Text::EncoderNLS::__cordl_internal_get__charsUsed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____charsUsed;
}
constexpr void System::Text::EncoderNLS::__cordl_internal_set__charsUsed(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____charsUsed = value;
}
inline void System::Text::EncoderNLS::_ctor(::System::Text::Encoding* encoding) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::EncoderNLS*>(), { ".ctor", {}, { ::i2c::type_of<::System::Text::Encoding*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, encoding);
}
inline void System::Text::EncoderNLS::Reset() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::EncoderNLS*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t System::Text::EncoderNLS::GetByteCount(::ArrayW<char16_t> chars, int32_t index, int32_t count, bool flush) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::EncoderNLS*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, chars, index, count, flush);
}
inline int32_t System::Text::EncoderNLS::GetByteCount(char16_t* chars, int32_t count, bool flush) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::EncoderNLS*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, chars, count, flush);
}
inline int32_t System::Text::EncoderNLS::GetBytes(::ArrayW<char16_t> chars, int32_t charIndex, int32_t charCount, ::ArrayW<uint8_t> bytes, int32_t byteIndex, bool flush) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::EncoderNLS*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, chars, charIndex, charCount, bytes, byteIndex, flush);
}
inline int32_t System::Text::EncoderNLS::GetBytes(char16_t* chars, int32_t charCount, uint8_t* bytes, int32_t byteCount, bool flush) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::EncoderNLS*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, chars, charCount, bytes, byteCount, flush);
}
inline void System::Text::EncoderNLS::Convert(::ArrayW<char16_t> chars, int32_t charIndex, int32_t charCount, ::ArrayW<uint8_t> bytes, int32_t byteIndex, int32_t byteCount, bool flush,
                                              ::by_ref<int32_t> charsUsed, ::by_ref<int32_t> bytesUsed, ::by_ref<bool> completed) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::EncoderNLS*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, chars, charIndex, charCount, bytes, byteIndex, byteCount, flush, charsUsed, bytesUsed, completed);
}
inline void System::Text::EncoderNLS::Convert(char16_t* chars, int32_t charCount, uint8_t* bytes, int32_t byteCount, bool flush, ::by_ref<int32_t> charsUsed, ::by_ref<int32_t> bytesUsed,
                                              ::by_ref<bool> completed) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::EncoderNLS*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, chars, charCount, bytes, byteCount, flush, charsUsed, bytesUsed, completed);
}
inline ::System::Text::Encoding* System::Text::EncoderNLS::get_Encoding() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::EncoderNLS*>(), { "get_Encoding", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::Encoding*>(this, ___internal_method);
}
inline bool System::Text::EncoderNLS::get_MustFlush() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::EncoderNLS*>(), { "get_MustFlush", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Text::EncoderNLS::get_HasState() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::EncoderNLS*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Text::EncoderNLS::ClearMustFlush() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::EncoderNLS*>(), { "ClearMustFlush", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Text::EncoderNLS* System::Text::EncoderNLS::New_ctor(::System::Text::Encoding* encoding) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Text::EncoderNLS*>(encoding));
}
// Ctor Parameters []
constexpr ::System::Text::EncoderNLS::EncoderNLS() {}
