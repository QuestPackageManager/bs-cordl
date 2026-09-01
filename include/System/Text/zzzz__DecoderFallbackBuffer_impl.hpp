#pragma once
// IWYU pragma private; include "System\Text\DecoderFallbackBuffer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Text/zzzz__DecoderFallbackBuffer_def.hpp"
//  Writing Method size for method: ::System::Text::DecoderFallbackBuffer.Fallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Text::DecoderFallbackBuffer::*)(::ArrayW<uint8_t>, int32_t)>(&::System::Text::DecoderFallbackBuffer::Fallback)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::DecoderFallbackBuffer*>(), { ::i2c::class_of<::System::Text::DecoderFallbackBuffer*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::DecoderFallbackBuffer.GetNextChar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (::System::Text::DecoderFallbackBuffer::*)()>(&::System::Text::DecoderFallbackBuffer::GetNextChar)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::DecoderFallbackBuffer*>(), { ::i2c::class_of<::System::Text::DecoderFallbackBuffer*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::DecoderFallbackBuffer.get_Remaining
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::DecoderFallbackBuffer::*)()>(&::System::Text::DecoderFallbackBuffer::get_Remaining)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::DecoderFallbackBuffer*>(), { ::i2c::class_of<::System::Text::DecoderFallbackBuffer*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::DecoderFallbackBuffer.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::DecoderFallbackBuffer::*)()>(&::System::Text::DecoderFallbackBuffer::Reset)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5ccc05c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::DecoderFallbackBuffer*>(), { ::i2c::class_of<::System::Text::DecoderFallbackBuffer*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::DecoderFallbackBuffer.InternalReset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::DecoderFallbackBuffer::*)()>(&::System::Text::DecoderFallbackBuffer::InternalReset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5cca8fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::DecoderFallbackBuffer*>(), { "InternalReset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::DecoderFallbackBuffer.InternalInitialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::DecoderFallbackBuffer::*)(uint8_t*, char16_t*)>(&::System::Text::DecoderFallbackBuffer::InternalInitialize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cca654;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::DecoderFallbackBuffer*>(), { "InternalInitialize", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<char16_t*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::DecoderFallbackBuffer.InternalFallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Text::DecoderFallbackBuffer::*)(::ArrayW<uint8_t>, uint8_t*, ::by_ref<char16_t*>)>(
    &::System::Text::DecoderFallbackBuffer::InternalFallback)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x5ccc084;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::DecoderFallbackBuffer*>(), { ::i2c::class_of<::System::Text::DecoderFallbackBuffer*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::DecoderFallbackBuffer.InternalFallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::DecoderFallbackBuffer::*)(::ArrayW<uint8_t>, uint8_t*)>(&::System::Text::DecoderFallbackBuffer::InternalFallback)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x5ccc1e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::DecoderFallbackBuffer*>(), { ::i2c::class_of<::System::Text::DecoderFallbackBuffer*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::DecoderFallbackBuffer.ThrowLastBytesRecursive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::DecoderFallbackBuffer::*)(::ArrayW<uint8_t>)>(&::System::Text::DecoderFallbackBuffer::ThrowLastBytesRecursive)> {
  constexpr static std::size_t size = 0x3c0;
  constexpr static std::size_t addrs = 0x5ccc324;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::DecoderFallbackBuffer*>(), { "ThrowLastBytesRecursive", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::DecoderFallbackBuffer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::DecoderFallbackBuffer::*)()>(&::System::Text::DecoderFallbackBuffer::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5ccba7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::DecoderFallbackBuffer*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr uint8_t*& System::Text::DecoderFallbackBuffer::__cordl_internal_get_byteStart() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___byteStart;
}
constexpr uint8_t* const& System::Text::DecoderFallbackBuffer::__cordl_internal_get_byteStart() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___byteStart;
}
constexpr void System::Text::DecoderFallbackBuffer::__cordl_internal_set_byteStart(uint8_t* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___byteStart = value;
}
constexpr char16_t*& System::Text::DecoderFallbackBuffer::__cordl_internal_get_charEnd() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___charEnd;
}
constexpr char16_t* const& System::Text::DecoderFallbackBuffer::__cordl_internal_get_charEnd() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___charEnd;
}
constexpr void System::Text::DecoderFallbackBuffer::__cordl_internal_set_charEnd(char16_t* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___charEnd = value;
}
inline bool System::Text::DecoderFallbackBuffer::Fallback(::ArrayW<uint8_t> bytesUnknown, int32_t index) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::DecoderFallbackBuffer*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, bytesUnknown, index);
}
inline char16_t System::Text::DecoderFallbackBuffer::GetNextChar() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::DecoderFallbackBuffer*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<char16_t>(this, ___internal_method);
}
inline int32_t System::Text::DecoderFallbackBuffer::get_Remaining() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::DecoderFallbackBuffer*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Text::DecoderFallbackBuffer::Reset() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::DecoderFallbackBuffer*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Text::DecoderFallbackBuffer::InternalReset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::DecoderFallbackBuffer*>(), { "InternalReset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Text::DecoderFallbackBuffer::InternalInitialize(uint8_t* byteStart, char16_t* charEnd) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::DecoderFallbackBuffer*>(), { "InternalInitialize", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<char16_t*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, byteStart, charEnd);
}
inline bool System::Text::DecoderFallbackBuffer::InternalFallback(::ArrayW<uint8_t> bytes, uint8_t* pBytes, ::by_ref<char16_t*> chars) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::DecoderFallbackBuffer*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, bytes, pBytes, chars);
}
inline int32_t System::Text::DecoderFallbackBuffer::InternalFallback(::ArrayW<uint8_t> bytes, uint8_t* pBytes) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::DecoderFallbackBuffer*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, bytes, pBytes);
}
inline void System::Text::DecoderFallbackBuffer::ThrowLastBytesRecursive(::ArrayW<uint8_t> bytesUnknown) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::DecoderFallbackBuffer*>(), { "ThrowLastBytesRecursive", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bytesUnknown);
}
inline void System::Text::DecoderFallbackBuffer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::DecoderFallbackBuffer*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Text::DecoderFallbackBuffer* System::Text::DecoderFallbackBuffer::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Text::DecoderFallbackBuffer*>());
}
// Ctor Parameters []
constexpr ::System::Text::DecoderFallbackBuffer::DecoderFallbackBuffer() {}
