#pragma once
// IWYU pragma private; include "System/Text/DecoderExceptionFallbackBuffer.hpp"
#include "System/Text/zzzz__DecoderFallbackBuffer_impl.hpp"
#include "System/Text/zzzz__DecoderExceptionFallbackBuffer_def.hpp"
//  Writing Method size for method: ::System::Text::DecoderExceptionFallbackBuffer.Fallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Text::DecoderExceptionFallbackBuffer::*)(::ArrayW<uint8_t>, int32_t)>(
    &::System::Text::DecoderExceptionFallbackBuffer::Fallback)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cc9b04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::DecoderExceptionFallbackBuffer*>(), { ::i2c::class_of<::System::Text::DecoderExceptionFallbackBuffer*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::DecoderExceptionFallbackBuffer.GetNextChar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (::System::Text::DecoderExceptionFallbackBuffer::*)()>(&::System::Text::DecoderExceptionFallbackBuffer::GetNextChar)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cc9ce0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::DecoderExceptionFallbackBuffer*>(), { ::i2c::class_of<::System::Text::DecoderExceptionFallbackBuffer*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::DecoderExceptionFallbackBuffer.get_Remaining
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::DecoderExceptionFallbackBuffer::*)()>(&::System::Text::DecoderExceptionFallbackBuffer::get_Remaining)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cc9ce8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::DecoderExceptionFallbackBuffer*>(), { ::i2c::class_of<::System::Text::DecoderExceptionFallbackBuffer*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::DecoderExceptionFallbackBuffer.Throw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::DecoderExceptionFallbackBuffer::*)(::ArrayW<uint8_t>, int32_t)>(&::System::Text::DecoderExceptionFallbackBuffer::Throw)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x5cc9b0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Text::DecoderExceptionFallbackBuffer*>(), { "Throw", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::DecoderExceptionFallbackBuffer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::DecoderExceptionFallbackBuffer::*)()>(&::System::Text::DecoderExceptionFallbackBuffer::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5cc9a90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::DecoderExceptionFallbackBuffer*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline bool System::Text::DecoderExceptionFallbackBuffer::Fallback(::ArrayW<uint8_t> bytesUnknown, int32_t index) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::DecoderExceptionFallbackBuffer*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, bytesUnknown, index);
}
inline char16_t System::Text::DecoderExceptionFallbackBuffer::GetNextChar() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::DecoderExceptionFallbackBuffer*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<char16_t>(this, ___internal_method);
}
inline int32_t System::Text::DecoderExceptionFallbackBuffer::get_Remaining() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::DecoderExceptionFallbackBuffer*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Text::DecoderExceptionFallbackBuffer::Throw(::ArrayW<uint8_t> bytesUnknown, int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Text::DecoderExceptionFallbackBuffer*>(), { "Throw", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bytesUnknown, index);
}
inline void System::Text::DecoderExceptionFallbackBuffer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::DecoderExceptionFallbackBuffer*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Text::DecoderExceptionFallbackBuffer* System::Text::DecoderExceptionFallbackBuffer::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Text::DecoderExceptionFallbackBuffer*>());
}
// Ctor Parameters []
constexpr ::System::Text::DecoderExceptionFallbackBuffer::DecoderExceptionFallbackBuffer() {}
