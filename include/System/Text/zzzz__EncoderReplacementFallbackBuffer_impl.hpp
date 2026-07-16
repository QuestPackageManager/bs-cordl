#pragma once
// IWYU pragma private; include "System/Text/EncoderReplacementFallbackBuffer.hpp"
#include "System/Text/zzzz__EncoderFallbackBuffer_impl.hpp"
#include "System/Text/zzzz__EncoderReplacementFallbackBuffer_def.hpp"
#include "System/Text/zzzz__EncoderReplacementFallback_def.hpp"
//  Writing Method size for method: ::System::Text::EncoderReplacementFallbackBuffer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::EncoderReplacementFallbackBuffer::*)(::System::Text::EncoderReplacementFallback*)>(
    &::System::Text::EncoderReplacementFallbackBuffer::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5ad3168;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Text::EncoderReplacementFallbackBuffer*>(), { ".ctor", {}, { ::i2c::type_of<::System::Text::EncoderReplacementFallback*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::EncoderReplacementFallbackBuffer.Fallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Text::EncoderReplacementFallbackBuffer::*)(char16_t, int32_t)>(&::System::Text::EncoderReplacementFallbackBuffer::Fallback)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x5ad3250;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::EncoderReplacementFallbackBuffer*>(), { ::i2c::class_of<::System::Text::EncoderReplacementFallbackBuffer*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::EncoderReplacementFallbackBuffer.Fallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Text::EncoderReplacementFallbackBuffer::*)(char16_t, char16_t, int32_t)>(
    &::System::Text::EncoderReplacementFallbackBuffer::Fallback)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x5ad3380;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::EncoderReplacementFallbackBuffer*>(), { ::i2c::class_of<::System::Text::EncoderReplacementFallbackBuffer*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::EncoderReplacementFallbackBuffer.GetNextChar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (::System::Text::EncoderReplacementFallbackBuffer::*)()>(&::System::Text::EncoderReplacementFallbackBuffer::GetNextChar)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5ad3550;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::EncoderReplacementFallbackBuffer*>(), { ::i2c::class_of<::System::Text::EncoderReplacementFallbackBuffer*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::EncoderReplacementFallbackBuffer.MovePrevious
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Text::EncoderReplacementFallbackBuffer::*)()>(&::System::Text::EncoderReplacementFallbackBuffer::MovePrevious)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5ad35cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::EncoderReplacementFallbackBuffer*>(), { ::i2c::class_of<::System::Text::EncoderReplacementFallbackBuffer*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::EncoderReplacementFallbackBuffer.get_Remaining
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::EncoderReplacementFallbackBuffer::*)()>(&::System::Text::EncoderReplacementFallbackBuffer::get_Remaining)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5ad35fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::EncoderReplacementFallbackBuffer*>(), { ::i2c::class_of<::System::Text::EncoderReplacementFallbackBuffer*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::EncoderReplacementFallbackBuffer.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::EncoderReplacementFallbackBuffer::*)()>(&::System::Text::EncoderReplacementFallbackBuffer::Reset)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5ad3608;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::EncoderReplacementFallbackBuffer*>(), { ::i2c::class_of<::System::Text::EncoderReplacementFallbackBuffer*>(), 9 }));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Text::EncoderReplacementFallbackBuffer::__cordl_internal_get__strDefault() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____strDefault;
}
constexpr ::StringW const& System::Text::EncoderReplacementFallbackBuffer::__cordl_internal_get__strDefault() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____strDefault;
}
constexpr void System::Text::EncoderReplacementFallbackBuffer::__cordl_internal_set__strDefault(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____strDefault = value;
}
constexpr int32_t& System::Text::EncoderReplacementFallbackBuffer::__cordl_internal_get__fallbackCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fallbackCount;
}
constexpr int32_t const& System::Text::EncoderReplacementFallbackBuffer::__cordl_internal_get__fallbackCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fallbackCount;
}
constexpr void System::Text::EncoderReplacementFallbackBuffer::__cordl_internal_set__fallbackCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fallbackCount = value;
}
constexpr int32_t& System::Text::EncoderReplacementFallbackBuffer::__cordl_internal_get__fallbackIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fallbackIndex;
}
constexpr int32_t const& System::Text::EncoderReplacementFallbackBuffer::__cordl_internal_get__fallbackIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fallbackIndex;
}
constexpr void System::Text::EncoderReplacementFallbackBuffer::__cordl_internal_set__fallbackIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fallbackIndex = value;
}
inline void System::Text::EncoderReplacementFallbackBuffer::_ctor(::System::Text::EncoderReplacementFallback* fallback) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Text::EncoderReplacementFallbackBuffer*>(), { ".ctor", {}, { ::i2c::type_of<::System::Text::EncoderReplacementFallback*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fallback);
}
inline bool System::Text::EncoderReplacementFallbackBuffer::Fallback(char16_t charUnknown, int32_t index) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::EncoderReplacementFallbackBuffer*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, charUnknown, index);
}
inline bool System::Text::EncoderReplacementFallbackBuffer::Fallback(char16_t charUnknownHigh, char16_t charUnknownLow, int32_t index) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::EncoderReplacementFallbackBuffer*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, charUnknownHigh, charUnknownLow, index);
}
inline char16_t System::Text::EncoderReplacementFallbackBuffer::GetNextChar() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::EncoderReplacementFallbackBuffer*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<char16_t>(this, ___internal_method);
}
inline bool System::Text::EncoderReplacementFallbackBuffer::MovePrevious() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::EncoderReplacementFallbackBuffer*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t System::Text::EncoderReplacementFallbackBuffer::get_Remaining() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::EncoderReplacementFallbackBuffer*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Text::EncoderReplacementFallbackBuffer::Reset() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::EncoderReplacementFallbackBuffer*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Text::EncoderReplacementFallbackBuffer* System::Text::EncoderReplacementFallbackBuffer::New_ctor(::System::Text::EncoderReplacementFallback* fallback) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Text::EncoderReplacementFallbackBuffer*>(fallback));
}
// Ctor Parameters []
constexpr ::System::Text::EncoderReplacementFallbackBuffer::EncoderReplacementFallbackBuffer() {}
