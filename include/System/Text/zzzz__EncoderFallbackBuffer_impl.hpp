#pragma once
// IWYU pragma private; include "System\Text\EncoderFallbackBuffer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Text/zzzz__EncoderFallbackBuffer_def.hpp"
#include "System/Text/zzzz__EncoderNLS_def.hpp"
//  Writing Method size for method: ::System::Text::EncoderFallbackBuffer.Fallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Text::EncoderFallbackBuffer::*)(char16_t, int32_t)>(&::System::Text::EncoderFallbackBuffer::Fallback)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::EncoderFallbackBuffer*>(), { ::i2c::class_of<::System::Text::EncoderFallbackBuffer*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::EncoderFallbackBuffer.Fallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Text::EncoderFallbackBuffer::*)(char16_t, char16_t, int32_t)>(&::System::Text::EncoderFallbackBuffer::Fallback)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::EncoderFallbackBuffer*>(), { ::i2c::class_of<::System::Text::EncoderFallbackBuffer*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::EncoderFallbackBuffer.GetNextChar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (::System::Text::EncoderFallbackBuffer::*)()>(&::System::Text::EncoderFallbackBuffer::GetNextChar)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::EncoderFallbackBuffer*>(), { ::i2c::class_of<::System::Text::EncoderFallbackBuffer*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::EncoderFallbackBuffer.MovePrevious
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Text::EncoderFallbackBuffer::*)()>(&::System::Text::EncoderFallbackBuffer::MovePrevious)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::EncoderFallbackBuffer*>(), { ::i2c::class_of<::System::Text::EncoderFallbackBuffer*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::EncoderFallbackBuffer.get_Remaining
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::EncoderFallbackBuffer::*)()>(&::System::Text::EncoderFallbackBuffer::get_Remaining)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::EncoderFallbackBuffer*>(), { ::i2c::class_of<::System::Text::EncoderFallbackBuffer*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::EncoderFallbackBuffer.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::EncoderFallbackBuffer::*)()>(&::System::Text::EncoderFallbackBuffer::Reset)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5ad4348;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::EncoderFallbackBuffer*>(), { ::i2c::class_of<::System::Text::EncoderFallbackBuffer*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::EncoderFallbackBuffer.InternalReset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::EncoderFallbackBuffer::*)()>(&::System::Text::EncoderFallbackBuffer::InternalReset)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5ad4370;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::EncoderFallbackBuffer*>(), { "InternalReset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::EncoderFallbackBuffer.InternalInitialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::EncoderFallbackBuffer::*)(char16_t*, char16_t*, ::System::Text::EncoderNLS*, bool)>(
    &::System::Text::EncoderFallbackBuffer::InternalInitialize)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5ad4388;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Text::EncoderFallbackBuffer*>(),
                            { "InternalInitialize", {}, { ::i2c::type_of<char16_t*>(), ::i2c::type_of<char16_t*>(), ::i2c::type_of<::System::Text::EncoderNLS*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::EncoderFallbackBuffer.InternalGetNextChar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (::System::Text::EncoderFallbackBuffer::*)()>(&::System::Text::EncoderFallbackBuffer::InternalGetNextChar)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5ad43a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::EncoderFallbackBuffer*>(), { "InternalGetNextChar", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::EncoderFallbackBuffer.InternalFallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Text::EncoderFallbackBuffer::*)(char16_t, ::by_ref<char16_t*>)>(&::System::Text::EncoderFallbackBuffer::InternalFallback)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x5ad43d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::EncoderFallbackBuffer*>(), { ::i2c::class_of<::System::Text::EncoderFallbackBuffer*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::EncoderFallbackBuffer.ThrowLastCharRecursive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::EncoderFallbackBuffer::*)(int32_t)>(&::System::Text::EncoderFallbackBuffer::ThrowLastCharRecursive)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5ad4554;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::EncoderFallbackBuffer*>(), { "ThrowLastCharRecursive", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::EncoderFallbackBuffer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::EncoderFallbackBuffer::*)()>(&::System::Text::EncoderFallbackBuffer::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5ad3968;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::EncoderFallbackBuffer*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr char16_t*& System::Text::EncoderFallbackBuffer::__cordl_internal_get_charStart() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___charStart;
}
constexpr char16_t* const& System::Text::EncoderFallbackBuffer::__cordl_internal_get_charStart() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___charStart;
}
constexpr void System::Text::EncoderFallbackBuffer::__cordl_internal_set_charStart(char16_t* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___charStart = value;
}
constexpr char16_t*& System::Text::EncoderFallbackBuffer::__cordl_internal_get_charEnd() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___charEnd;
}
constexpr char16_t* const& System::Text::EncoderFallbackBuffer::__cordl_internal_get_charEnd() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___charEnd;
}
constexpr void System::Text::EncoderFallbackBuffer::__cordl_internal_set_charEnd(char16_t* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___charEnd = value;
}
constexpr ::System::Text::EncoderNLS*& System::Text::EncoderFallbackBuffer::__cordl_internal_get_encoder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___encoder;
}
constexpr ::System::Text::EncoderNLS* const& System::Text::EncoderFallbackBuffer::__cordl_internal_get_encoder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___encoder;
}
constexpr void System::Text::EncoderFallbackBuffer::__cordl_internal_set_encoder(::System::Text::EncoderNLS* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___encoder = value;
}
constexpr bool& System::Text::EncoderFallbackBuffer::__cordl_internal_get_setEncoder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___setEncoder;
}
constexpr bool const& System::Text::EncoderFallbackBuffer::__cordl_internal_get_setEncoder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___setEncoder;
}
constexpr void System::Text::EncoderFallbackBuffer::__cordl_internal_set_setEncoder(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___setEncoder = value;
}
constexpr bool& System::Text::EncoderFallbackBuffer::__cordl_internal_get_bUsedEncoder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bUsedEncoder;
}
constexpr bool const& System::Text::EncoderFallbackBuffer::__cordl_internal_get_bUsedEncoder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bUsedEncoder;
}
constexpr void System::Text::EncoderFallbackBuffer::__cordl_internal_set_bUsedEncoder(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bUsedEncoder = value;
}
constexpr bool& System::Text::EncoderFallbackBuffer::__cordl_internal_get_bFallingBack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bFallingBack;
}
constexpr bool const& System::Text::EncoderFallbackBuffer::__cordl_internal_get_bFallingBack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bFallingBack;
}
constexpr void System::Text::EncoderFallbackBuffer::__cordl_internal_set_bFallingBack(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bFallingBack = value;
}
constexpr int32_t& System::Text::EncoderFallbackBuffer::__cordl_internal_get_iRecursionCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___iRecursionCount;
}
constexpr int32_t const& System::Text::EncoderFallbackBuffer::__cordl_internal_get_iRecursionCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___iRecursionCount;
}
constexpr void System::Text::EncoderFallbackBuffer::__cordl_internal_set_iRecursionCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___iRecursionCount = value;
}
inline bool System::Text::EncoderFallbackBuffer::Fallback(char16_t charUnknown, int32_t index) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::EncoderFallbackBuffer*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, charUnknown, index);
}
inline bool System::Text::EncoderFallbackBuffer::Fallback(char16_t charUnknownHigh, char16_t charUnknownLow, int32_t index) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::EncoderFallbackBuffer*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, charUnknownHigh, charUnknownLow, index);
}
inline char16_t System::Text::EncoderFallbackBuffer::GetNextChar() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::EncoderFallbackBuffer*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<char16_t>(this, ___internal_method);
}
inline bool System::Text::EncoderFallbackBuffer::MovePrevious() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::EncoderFallbackBuffer*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t System::Text::EncoderFallbackBuffer::get_Remaining() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::EncoderFallbackBuffer*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Text::EncoderFallbackBuffer::Reset() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::EncoderFallbackBuffer*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Text::EncoderFallbackBuffer::InternalReset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::EncoderFallbackBuffer*>(), { "InternalReset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Text::EncoderFallbackBuffer::InternalInitialize(char16_t* charStart, char16_t* charEnd, ::System::Text::EncoderNLS* encoder, bool setEncoder) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Text::EncoderFallbackBuffer*>(),
                          { "InternalInitialize", {}, { ::i2c::type_of<char16_t*>(), ::i2c::type_of<char16_t*>(), ::i2c::type_of<::System::Text::EncoderNLS*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, charStart, charEnd, encoder, setEncoder);
}
inline char16_t System::Text::EncoderFallbackBuffer::InternalGetNextChar() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::EncoderFallbackBuffer*>(), { "InternalGetNextChar", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<char16_t>(this, ___internal_method);
}
inline bool System::Text::EncoderFallbackBuffer::InternalFallback(char16_t ch, ::by_ref<char16_t*> chars) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::EncoderFallbackBuffer*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, ch, chars);
}
inline void System::Text::EncoderFallbackBuffer::ThrowLastCharRecursive(int32_t charRecursive) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::EncoderFallbackBuffer*>(), { "ThrowLastCharRecursive", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, charRecursive);
}
inline void System::Text::EncoderFallbackBuffer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::EncoderFallbackBuffer*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Text::EncoderFallbackBuffer* System::Text::EncoderFallbackBuffer::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Text::EncoderFallbackBuffer*>());
}
// Ctor Parameters []
constexpr ::System::Text::EncoderFallbackBuffer::EncoderFallbackBuffer() {}
