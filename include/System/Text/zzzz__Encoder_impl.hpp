#pragma once
// IWYU pragma private; include "System\Text\Encoder.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Text/zzzz__Encoder_def.hpp"
#include "System/Text/zzzz__EncoderFallbackBuffer_def.hpp"
#include "System/Text/zzzz__EncoderFallback_def.hpp"
//  Writing Method size for method: ::System::Text::Encoder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::Encoder::*)()>(&::System::Text::Encoder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5ad2c14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::Encoder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::Encoder.get_Fallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::EncoderFallback* (::System::Text::Encoder::*)()>(&::System::Text::Encoder::get_Fallback)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ad2c18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::Encoder*>(), { "get_Fallback", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::Encoder.get_FallbackBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::EncoderFallbackBuffer* (::System::Text::Encoder::*)()>(&::System::Text::Encoder::get_FallbackBuffer)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5ad2c20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::Encoder*>(), { "get_FallbackBuffer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::Encoder.get_InternalHasFallbackBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Text::Encoder::*)()>(&::System::Text::Encoder::get_InternalHasFallbackBuffer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5ad2cf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::Encoder*>(), { "get_InternalHasFallbackBuffer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::Encoder.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::Encoder::*)()>(&::System::Text::Encoder::Reset)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5ad2d08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::Encoder*>(), { ::i2c::class_of<::System::Text::Encoder*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::Encoder.GetByteCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::Encoder::*)(::ArrayW<char16_t>, int32_t, int32_t, bool)>(&::System::Text::Encoder::GetByteCount)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::Encoder*>(), { ::i2c::class_of<::System::Text::Encoder*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::Encoder.GetByteCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::Encoder::*)(char16_t*, int32_t, bool)>(&::System::Text::Encoder::GetByteCount)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x5ad2de8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::Encoder*>(), { ::i2c::class_of<::System::Text::Encoder*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::Encoder.GetBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::Encoder::*)(::ArrayW<char16_t>, int32_t, int32_t, ::ArrayW<uint8_t>, int32_t, bool)>(
    &::System::Text::Encoder::GetBytes)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::Encoder*>(), { ::i2c::class_of<::System::Text::Encoder*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::Encoder.GetBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::Encoder::*)(char16_t*, int32_t, uint8_t*, int32_t, bool)>(&::System::Text::Encoder::GetBytes)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x5ad2f50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::Encoder*>(), { ::i2c::class_of<::System::Text::Encoder*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::Encoder.Convert
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::Encoder::*)(::ArrayW<char16_t>, int32_t, int32_t, ::ArrayW<uint8_t>, int32_t, int32_t, bool, ::by_ref<int32_t>,
                                                                                         ::by_ref<int32_t>, ::by_ref<bool>)>(&::System::Text::Encoder::Convert)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0x5ad3164;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::Encoder*>(), { ::i2c::class_of<::System::Text::Encoder*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::Encoder.Convert
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::Encoder::*)(char16_t*, int32_t, uint8_t*, int32_t, bool, ::by_ref<int32_t>, ::by_ref<int32_t>, ::by_ref<bool>)>(
    &::System::Text::Encoder::Convert)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x5ad3440;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::Encoder*>(), { ::i2c::class_of<::System::Text::Encoder*>(), 10 }));
    return ___internal_method;
  }
};
constexpr ::System::Text::EncoderFallback*& System::Text::Encoder::__cordl_internal_get__fallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fallback;
}
constexpr ::System::Text::EncoderFallback* const& System::Text::Encoder::__cordl_internal_get__fallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fallback;
}
constexpr void System::Text::Encoder::__cordl_internal_set__fallback(::System::Text::EncoderFallback* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fallback = value;
}
constexpr ::System::Text::EncoderFallbackBuffer*& System::Text::Encoder::__cordl_internal_get__fallbackBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fallbackBuffer;
}
constexpr ::System::Text::EncoderFallbackBuffer* const& System::Text::Encoder::__cordl_internal_get__fallbackBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fallbackBuffer;
}
constexpr void System::Text::Encoder::__cordl_internal_set__fallbackBuffer(::System::Text::EncoderFallbackBuffer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fallbackBuffer = value;
}
inline void System::Text::Encoder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::Encoder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Text::EncoderFallback* System::Text::Encoder::get_Fallback() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::Encoder*>(), { "get_Fallback", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::EncoderFallback*>(this, ___internal_method);
}
inline ::System::Text::EncoderFallbackBuffer* System::Text::Encoder::get_FallbackBuffer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::Encoder*>(), { "get_FallbackBuffer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::EncoderFallbackBuffer*>(this, ___internal_method);
}
inline bool System::Text::Encoder::get_InternalHasFallbackBuffer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::Encoder*>(), { "get_InternalHasFallbackBuffer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Text::Encoder::Reset() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::Encoder*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t System::Text::Encoder::GetByteCount(::ArrayW<char16_t> chars, int32_t index, int32_t count, bool flush) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::Encoder*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, chars, index, count, flush);
}
inline int32_t System::Text::Encoder::GetByteCount(char16_t* chars, int32_t count, bool flush) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::Encoder*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, chars, count, flush);
}
inline int32_t System::Text::Encoder::GetBytes(::ArrayW<char16_t> chars, int32_t charIndex, int32_t charCount, ::ArrayW<uint8_t> bytes, int32_t byteIndex, bool flush) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::Encoder*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, chars, charIndex, charCount, bytes, byteIndex, flush);
}
inline int32_t System::Text::Encoder::GetBytes(char16_t* chars, int32_t charCount, uint8_t* bytes, int32_t byteCount, bool flush) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::Encoder*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, chars, charCount, bytes, byteCount, flush);
}
inline void System::Text::Encoder::Convert(::ArrayW<char16_t> chars, int32_t charIndex, int32_t charCount, ::ArrayW<uint8_t> bytes, int32_t byteIndex, int32_t byteCount, bool flush,
                                           ::by_ref<int32_t> charsUsed, ::by_ref<int32_t> bytesUsed, ::by_ref<bool> completed) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::Encoder*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, chars, charIndex, charCount, bytes, byteIndex, byteCount, flush, charsUsed, bytesUsed, completed);
}
inline void System::Text::Encoder::Convert(char16_t* chars, int32_t charCount, uint8_t* bytes, int32_t byteCount, bool flush, ::by_ref<int32_t> charsUsed, ::by_ref<int32_t> bytesUsed,
                                           ::by_ref<bool> completed) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::Encoder*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, chars, charCount, bytes, byteCount, flush, charsUsed, bytesUsed, completed);
}
inline ::System::Text::Encoder* System::Text::Encoder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Text::Encoder*>());
}
// Ctor Parameters []
constexpr ::System::Text::Encoder::Encoder() {}
