#pragma once
// IWYU pragma private; include "System/Text/DecoderNLS.hpp"
#include "System/Text/zzzz__Decoder_impl.hpp"
#include "System/Text/zzzz__DecoderNLS_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
//  Writing Method size for method: ::System::Text::DecoderNLS._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::DecoderNLS::*)(::System::Text::Encoding*)>(&::System::Text::DecoderNLS::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5acf858;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::DecoderNLS*>(), { ".ctor", {}, { ::i2c::type_of<::System::Text::Encoding*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::DecoderNLS.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::DecoderNLS::*)()>(&::System::Text::DecoderNLS::Reset)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5acf880;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::DecoderNLS*>(), { ::i2c::class_of<::System::Text::DecoderNLS*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::DecoderNLS.GetCharCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::DecoderNLS::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::Text::DecoderNLS::GetCharCount)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5acf898;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::DecoderNLS*>(), { ::i2c::class_of<::System::Text::DecoderNLS*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::DecoderNLS.GetCharCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::DecoderNLS::*)(::ArrayW<uint8_t>, int32_t, int32_t, bool)>(&::System::Text::DecoderNLS::GetCharCount)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x5acf8a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::DecoderNLS*>(), { ::i2c::class_of<::System::Text::DecoderNLS*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::DecoderNLS.GetCharCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::DecoderNLS::*)(uint8_t*, int32_t, bool)>(&::System::Text::DecoderNLS::GetCharCount)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5acfa80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::DecoderNLS*>(), { ::i2c::class_of<::System::Text::DecoderNLS*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::DecoderNLS.GetChars
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::DecoderNLS::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::ArrayW<char16_t>, int32_t)>(
    &::System::Text::DecoderNLS::GetChars)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5acfb70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::DecoderNLS*>(), { ::i2c::class_of<::System::Text::DecoderNLS*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::DecoderNLS.GetChars
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::DecoderNLS::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::ArrayW<char16_t>, int32_t, bool)>(
    &::System::Text::DecoderNLS::GetChars)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x5acfb80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::DecoderNLS*>(), { ::i2c::class_of<::System::Text::DecoderNLS*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::DecoderNLS.GetChars
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::DecoderNLS::*)(uint8_t*, int32_t, char16_t*, int32_t, bool)>(&::System::Text::DecoderNLS::GetChars)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x5acfe10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::DecoderNLS*>(), { ::i2c::class_of<::System::Text::DecoderNLS*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::DecoderNLS.Convert
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::DecoderNLS::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::ArrayW<char16_t>, int32_t, int32_t, bool, ::by_ref<int32_t>,
                                                                                            ::by_ref<int32_t>, ::by_ref<bool>)>(&::System::Text::DecoderNLS::Convert)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x5acff28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::DecoderNLS*>(), { ::i2c::class_of<::System::Text::DecoderNLS*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::DecoderNLS.Convert
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::DecoderNLS::*)(uint8_t*, int32_t, char16_t*, int32_t, bool, ::by_ref<int32_t>, ::by_ref<int32_t>, ::by_ref<bool>)>(
    &::System::Text::DecoderNLS::Convert)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x5ad01f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::DecoderNLS*>(), { ::i2c::class_of<::System::Text::DecoderNLS*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::DecoderNLS.get_MustFlush
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Text::DecoderNLS::*)()>(&::System::Text::DecoderNLS::get_MustFlush)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ad0398;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::DecoderNLS*>(), { "get_MustFlush", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::DecoderNLS.get_HasState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Text::DecoderNLS::*)()>(&::System::Text::DecoderNLS::get_HasState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ad03a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::DecoderNLS*>(), { ::i2c::class_of<::System::Text::DecoderNLS*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::DecoderNLS.ClearMustFlush
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::DecoderNLS::*)()>(&::System::Text::DecoderNLS::ClearMustFlush)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ad03a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::DecoderNLS*>(), { "ClearMustFlush", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Text::Encoding*& System::Text::DecoderNLS::__cordl_internal_get__encoding() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____encoding;
}
constexpr ::System::Text::Encoding* const& System::Text::DecoderNLS::__cordl_internal_get__encoding() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____encoding;
}
constexpr void System::Text::DecoderNLS::__cordl_internal_set__encoding(::System::Text::Encoding* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____encoding = value;
}
constexpr bool& System::Text::DecoderNLS::__cordl_internal_get__mustFlush() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mustFlush;
}
constexpr bool const& System::Text::DecoderNLS::__cordl_internal_get__mustFlush() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mustFlush;
}
constexpr void System::Text::DecoderNLS::__cordl_internal_set__mustFlush(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____mustFlush = value;
}
constexpr bool& System::Text::DecoderNLS::__cordl_internal_get__throwOnOverflow() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____throwOnOverflow;
}
constexpr bool const& System::Text::DecoderNLS::__cordl_internal_get__throwOnOverflow() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____throwOnOverflow;
}
constexpr void System::Text::DecoderNLS::__cordl_internal_set__throwOnOverflow(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____throwOnOverflow = value;
}
constexpr int32_t& System::Text::DecoderNLS::__cordl_internal_get__bytesUsed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bytesUsed;
}
constexpr int32_t const& System::Text::DecoderNLS::__cordl_internal_get__bytesUsed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bytesUsed;
}
constexpr void System::Text::DecoderNLS::__cordl_internal_set__bytesUsed(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bytesUsed = value;
}
inline void System::Text::DecoderNLS::_ctor(::System::Text::Encoding* encoding) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::DecoderNLS*>(), { ".ctor", {}, { ::i2c::type_of<::System::Text::Encoding*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, encoding);
}
inline void System::Text::DecoderNLS::Reset() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::DecoderNLS*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t System::Text::DecoderNLS::GetCharCount(::ArrayW<uint8_t> bytes, int32_t index, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::DecoderNLS*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, bytes, index, count);
}
inline int32_t System::Text::DecoderNLS::GetCharCount(::ArrayW<uint8_t> bytes, int32_t index, int32_t count, bool flush) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::DecoderNLS*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, bytes, index, count, flush);
}
inline int32_t System::Text::DecoderNLS::GetCharCount(uint8_t* bytes, int32_t count, bool flush) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::DecoderNLS*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, bytes, count, flush);
}
inline int32_t System::Text::DecoderNLS::GetChars(::ArrayW<uint8_t> bytes, int32_t byteIndex, int32_t byteCount, ::ArrayW<char16_t> chars, int32_t charIndex) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::DecoderNLS*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, bytes, byteIndex, byteCount, chars, charIndex);
}
inline int32_t System::Text::DecoderNLS::GetChars(::ArrayW<uint8_t> bytes, int32_t byteIndex, int32_t byteCount, ::ArrayW<char16_t> chars, int32_t charIndex, bool flush) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::DecoderNLS*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, bytes, byteIndex, byteCount, chars, charIndex, flush);
}
inline int32_t System::Text::DecoderNLS::GetChars(uint8_t* bytes, int32_t byteCount, char16_t* chars, int32_t charCount, bool flush) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::DecoderNLS*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, bytes, byteCount, chars, charCount, flush);
}
inline void System::Text::DecoderNLS::Convert(::ArrayW<uint8_t> bytes, int32_t byteIndex, int32_t byteCount, ::ArrayW<char16_t> chars, int32_t charIndex, int32_t charCount, bool flush,
                                              ::by_ref<int32_t> bytesUsed, ::by_ref<int32_t> charsUsed, ::by_ref<bool> completed) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::DecoderNLS*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bytes, byteIndex, byteCount, chars, charIndex, charCount, flush, bytesUsed, charsUsed, completed);
}
inline void System::Text::DecoderNLS::Convert(uint8_t* bytes, int32_t byteCount, char16_t* chars, int32_t charCount, bool flush, ::by_ref<int32_t> bytesUsed, ::by_ref<int32_t> charsUsed,
                                              ::by_ref<bool> completed) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::DecoderNLS*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bytes, byteCount, chars, charCount, flush, bytesUsed, charsUsed, completed);
}
inline bool System::Text::DecoderNLS::get_MustFlush() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::DecoderNLS*>(), { "get_MustFlush", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Text::DecoderNLS::get_HasState() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::DecoderNLS*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Text::DecoderNLS::ClearMustFlush() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::DecoderNLS*>(), { "ClearMustFlush", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Text::DecoderNLS* System::Text::DecoderNLS::New_ctor(::System::Text::Encoding* encoding) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Text::DecoderNLS*>(encoding));
}
// Ctor Parameters []
constexpr ::System::Text::DecoderNLS::DecoderNLS() {}
