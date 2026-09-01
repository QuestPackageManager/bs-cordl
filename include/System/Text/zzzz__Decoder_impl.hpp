#pragma once
// IWYU pragma private; include "System\Text\Decoder.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Text/zzzz__Decoder_def.hpp"
#include "System/Text/zzzz__DecoderFallbackBuffer_def.hpp"
#include "System/Text/zzzz__DecoderFallback_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
//  Writing Method size for method: ::System::Text::Decoder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::Decoder::*)()>(&::System::Text::Decoder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5ccacd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::Decoder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::Decoder.get_Fallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::DecoderFallback* (::System::Text::Decoder::*)()>(&::System::Text::Decoder::get_Fallback)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ccacd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::Decoder*>(), { "get_Fallback", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::Decoder.get_FallbackBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::DecoderFallbackBuffer* (::System::Text::Decoder::*)()>(&::System::Text::Decoder::get_FallbackBuffer)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5cca618;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::Decoder*>(), { "get_FallbackBuffer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::Decoder.get_InternalHasFallbackBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Text::Decoder::*)()>(&::System::Text::Decoder::get_InternalHasFallbackBuffer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5ccacdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::Decoder*>(), { "get_InternalHasFallbackBuffer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::Decoder.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::Decoder::*)()>(&::System::Text::Decoder::Reset)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x5ccacec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::Decoder*>(), { ::i2c::class_of<::System::Text::Decoder*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::Decoder.GetCharCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::Decoder::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::Text::Decoder::GetCharCount)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::Decoder*>(), { ::i2c::class_of<::System::Text::Decoder*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::Decoder.GetCharCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::Decoder::*)(::ArrayW<uint8_t>, int32_t, int32_t, bool)>(&::System::Text::Decoder::GetCharCount)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5ccae14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::Decoder*>(), { ::i2c::class_of<::System::Text::Decoder*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::Decoder.GetCharCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::Decoder::*)(uint8_t*, int32_t, bool)>(&::System::Text::Decoder::GetCharCount)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x5ccae20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::Decoder*>(), { ::i2c::class_of<::System::Text::Decoder*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::Decoder.GetChars
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::Decoder::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::ArrayW<char16_t>, int32_t)>(&::System::Text::Decoder::GetChars)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::Decoder*>(), { ::i2c::class_of<::System::Text::Decoder*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::Decoder.GetChars
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::Decoder::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::ArrayW<char16_t>, int32_t, bool)>(
    &::System::Text::Decoder::GetChars)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5ccaf78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::Decoder*>(), { ::i2c::class_of<::System::Text::Decoder*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::Decoder.GetChars
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::Decoder::*)(uint8_t*, int32_t, char16_t*, int32_t, bool)>(&::System::Text::Decoder::GetChars)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x5ccaf84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::Decoder*>(), { ::i2c::class_of<::System::Text::Decoder*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::Decoder.GetChars
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::Decoder::*)(::System::ReadOnlySpan_1<uint8_t>, ::System::Span_1<char16_t>, bool)>(&::System::Text::Decoder::GetChars)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5ccb194;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::Decoder*>(), { ::i2c::class_of<::System::Text::Decoder*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::Decoder.Convert
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::Decoder::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::ArrayW<char16_t>, int32_t, int32_t, bool, ::by_ref<int32_t>,
                                                                                         ::by_ref<int32_t>, ::by_ref<bool>)>(&::System::Text::Decoder::Convert)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0x5ccb28c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::Decoder*>(), { ::i2c::class_of<::System::Text::Decoder*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::Decoder.Convert
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::Decoder::*)(uint8_t*, int32_t, char16_t*, int32_t, bool, ::by_ref<int32_t>, ::by_ref<int32_t>, ::by_ref<bool>)>(
    &::System::Text::Decoder::Convert)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x5ccb568;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::Decoder*>(), { ::i2c::class_of<::System::Text::Decoder*>(), 13 }));
    return ___internal_method;
  }
};
constexpr ::System::Text::DecoderFallback*& System::Text::Decoder::__cordl_internal_get__fallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fallback;
}
constexpr ::System::Text::DecoderFallback* const& System::Text::Decoder::__cordl_internal_get__fallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fallback;
}
constexpr void System::Text::Decoder::__cordl_internal_set__fallback(::System::Text::DecoderFallback* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fallback = value;
}
constexpr ::System::Text::DecoderFallbackBuffer*& System::Text::Decoder::__cordl_internal_get__fallbackBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fallbackBuffer;
}
constexpr ::System::Text::DecoderFallbackBuffer* const& System::Text::Decoder::__cordl_internal_get__fallbackBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fallbackBuffer;
}
constexpr void System::Text::Decoder::__cordl_internal_set__fallbackBuffer(::System::Text::DecoderFallbackBuffer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fallbackBuffer = value;
}
inline void System::Text::Decoder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::Decoder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Text::DecoderFallback* System::Text::Decoder::get_Fallback() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::Decoder*>(), { "get_Fallback", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::DecoderFallback*>(this, ___internal_method);
}
inline ::System::Text::DecoderFallbackBuffer* System::Text::Decoder::get_FallbackBuffer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::Decoder*>(), { "get_FallbackBuffer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::DecoderFallbackBuffer*>(this, ___internal_method);
}
inline bool System::Text::Decoder::get_InternalHasFallbackBuffer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::Decoder*>(), { "get_InternalHasFallbackBuffer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Text::Decoder::Reset() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::Decoder*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t System::Text::Decoder::GetCharCount(::ArrayW<uint8_t> bytes, int32_t index, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::Decoder*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, bytes, index, count);
}
inline int32_t System::Text::Decoder::GetCharCount(::ArrayW<uint8_t> bytes, int32_t index, int32_t count, bool flush) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::Decoder*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, bytes, index, count, flush);
}
inline int32_t System::Text::Decoder::GetCharCount(uint8_t* bytes, int32_t count, bool flush) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::Decoder*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, bytes, count, flush);
}
inline int32_t System::Text::Decoder::GetChars(::ArrayW<uint8_t> bytes, int32_t byteIndex, int32_t byteCount, ::ArrayW<char16_t> chars, int32_t charIndex) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::Decoder*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, bytes, byteIndex, byteCount, chars, charIndex);
}
inline int32_t System::Text::Decoder::GetChars(::ArrayW<uint8_t> bytes, int32_t byteIndex, int32_t byteCount, ::ArrayW<char16_t> chars, int32_t charIndex, bool flush) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::Decoder*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, bytes, byteIndex, byteCount, chars, charIndex, flush);
}
inline int32_t System::Text::Decoder::GetChars(uint8_t* bytes, int32_t byteCount, char16_t* chars, int32_t charCount, bool flush) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::Decoder*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, bytes, byteCount, chars, charCount, flush);
}
inline int32_t System::Text::Decoder::GetChars(::System::ReadOnlySpan_1<uint8_t> bytes, ::System::Span_1<char16_t> chars, bool flush) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::Decoder*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, bytes, chars, flush);
}
inline void System::Text::Decoder::Convert(::ArrayW<uint8_t> bytes, int32_t byteIndex, int32_t byteCount, ::ArrayW<char16_t> chars, int32_t charIndex, int32_t charCount, bool flush,
                                           ::by_ref<int32_t> bytesUsed, ::by_ref<int32_t> charsUsed, ::by_ref<bool> completed) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::Decoder*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bytes, byteIndex, byteCount, chars, charIndex, charCount, flush, bytesUsed, charsUsed, completed);
}
inline void System::Text::Decoder::Convert(uint8_t* bytes, int32_t byteCount, char16_t* chars, int32_t charCount, bool flush, ::by_ref<int32_t> bytesUsed, ::by_ref<int32_t> charsUsed,
                                           ::by_ref<bool> completed) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::Decoder*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bytes, byteCount, chars, charCount, flush, bytesUsed, charsUsed, completed);
}
inline ::System::Text::Decoder* System::Text::Decoder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Text::Decoder*>());
}
// Ctor Parameters []
constexpr ::System::Text::Decoder::Decoder() {}
