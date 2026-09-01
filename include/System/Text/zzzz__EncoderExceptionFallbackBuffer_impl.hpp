#pragma once
// IWYU pragma private; include "System\Text\EncoderExceptionFallbackBuffer.hpp"
#include "System/Text/zzzz__EncoderFallbackBuffer_impl.hpp"
#include "System/Text/zzzz__EncoderExceptionFallbackBuffer_def.hpp"
//  Writing Method size for method: ::System::Text::EncoderExceptionFallbackBuffer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::EncoderExceptionFallbackBuffer::*)()>(&::System::Text::EncoderExceptionFallbackBuffer::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5ad3cd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::EncoderExceptionFallbackBuffer*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::EncoderExceptionFallbackBuffer.Fallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Text::EncoderExceptionFallbackBuffer::*)(char16_t, int32_t)>(&::System::Text::EncoderExceptionFallbackBuffer::Fallback)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5ad3d48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::EncoderExceptionFallbackBuffer*>(), { ::i2c::class_of<::System::Text::EncoderExceptionFallbackBuffer*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::EncoderExceptionFallbackBuffer.Fallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Text::EncoderExceptionFallbackBuffer::*)(char16_t, char16_t, int32_t)>(
    &::System::Text::EncoderExceptionFallbackBuffer::Fallback)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x5ad3e24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::EncoderExceptionFallbackBuffer*>(), { ::i2c::class_of<::System::Text::EncoderExceptionFallbackBuffer*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::EncoderExceptionFallbackBuffer.GetNextChar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (::System::Text::EncoderExceptionFallbackBuffer::*)()>(&::System::Text::EncoderExceptionFallbackBuffer::GetNextChar)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ad41e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::EncoderExceptionFallbackBuffer*>(), { ::i2c::class_of<::System::Text::EncoderExceptionFallbackBuffer*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::EncoderExceptionFallbackBuffer.MovePrevious
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Text::EncoderExceptionFallbackBuffer::*)()>(&::System::Text::EncoderExceptionFallbackBuffer::MovePrevious)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ad41ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::EncoderExceptionFallbackBuffer*>(), { ::i2c::class_of<::System::Text::EncoderExceptionFallbackBuffer*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::EncoderExceptionFallbackBuffer.get_Remaining
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::EncoderExceptionFallbackBuffer::*)()>(&::System::Text::EncoderExceptionFallbackBuffer::get_Remaining)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ad41f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::EncoderExceptionFallbackBuffer*>(), { ::i2c::class_of<::System::Text::EncoderExceptionFallbackBuffer*>(), 8 }));
    return ___internal_method;
  }
};
inline void System::Text::EncoderExceptionFallbackBuffer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::EncoderExceptionFallbackBuffer*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::Text::EncoderExceptionFallbackBuffer::Fallback(char16_t charUnknown, int32_t index) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::EncoderExceptionFallbackBuffer*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, charUnknown, index);
}
inline bool System::Text::EncoderExceptionFallbackBuffer::Fallback(char16_t charUnknownHigh, char16_t charUnknownLow, int32_t index) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::EncoderExceptionFallbackBuffer*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, charUnknownHigh, charUnknownLow, index);
}
inline char16_t System::Text::EncoderExceptionFallbackBuffer::GetNextChar() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::EncoderExceptionFallbackBuffer*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<char16_t>(this, ___internal_method);
}
inline bool System::Text::EncoderExceptionFallbackBuffer::MovePrevious() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::EncoderExceptionFallbackBuffer*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t System::Text::EncoderExceptionFallbackBuffer::get_Remaining() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::EncoderExceptionFallbackBuffer*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Text::EncoderExceptionFallbackBuffer* System::Text::EncoderExceptionFallbackBuffer::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Text::EncoderExceptionFallbackBuffer*>());
}
// Ctor Parameters []
constexpr ::System::Text::EncoderExceptionFallbackBuffer::EncoderExceptionFallbackBuffer() {}
