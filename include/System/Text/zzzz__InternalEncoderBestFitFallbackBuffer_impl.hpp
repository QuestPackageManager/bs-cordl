#pragma once
// IWYU pragma private; include "System/Text/InternalEncoderBestFitFallbackBuffer.hpp"
#include "System/Text/zzzz__EncoderFallbackBuffer_impl.hpp"
#include "System/Text/zzzz__InternalEncoderBestFitFallbackBuffer_def.hpp"
#include "System/Text/zzzz__InternalEncoderBestFitFallback_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Text::InternalEncoderBestFitFallbackBuffer.get_InternalSyncObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)()>(&::System::Text::InternalEncoderBestFitFallbackBuffer::get_InternalSyncObject)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5ad15d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::InternalEncoderBestFitFallbackBuffer*>(), { "get_InternalSyncObject", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::InternalEncoderBestFitFallbackBuffer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::InternalEncoderBestFitFallbackBuffer::*)(::System::Text::InternalEncoderBestFitFallback*)>(
    &::System::Text::InternalEncoderBestFitFallbackBuffer::_ctor)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x5ad13c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::InternalEncoderBestFitFallbackBuffer*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Text::InternalEncoderBestFitFallback*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::InternalEncoderBestFitFallbackBuffer.Fallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Text::InternalEncoderBestFitFallbackBuffer::*)(char16_t, int32_t)>(
    &::System::Text::InternalEncoderBestFitFallbackBuffer::Fallback)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5ad166c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::InternalEncoderBestFitFallbackBuffer*>(),
                                                                                          { ::i2c::class_of<::System::Text::InternalEncoderBestFitFallbackBuffer*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::InternalEncoderBestFitFallbackBuffer.Fallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Text::InternalEncoderBestFitFallbackBuffer::*)(char16_t, char16_t, int32_t)>(
    &::System::Text::InternalEncoderBestFitFallbackBuffer::Fallback)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x5ad1770;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::InternalEncoderBestFitFallbackBuffer*>(),
                                                                                          { ::i2c::class_of<::System::Text::InternalEncoderBestFitFallbackBuffer*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::InternalEncoderBestFitFallbackBuffer.GetNextChar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (::System::Text::InternalEncoderBestFitFallbackBuffer::*)()>(&::System::Text::InternalEncoderBestFitFallbackBuffer::GetNextChar)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5ad1900;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::InternalEncoderBestFitFallbackBuffer*>(),
                                                                                          { ::i2c::class_of<::System::Text::InternalEncoderBestFitFallbackBuffer*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::InternalEncoderBestFitFallbackBuffer.MovePrevious
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Text::InternalEncoderBestFitFallbackBuffer::*)()>(&::System::Text::InternalEncoderBestFitFallbackBuffer::MovePrevious)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5ad1940;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::InternalEncoderBestFitFallbackBuffer*>(),
                                                                                          { ::i2c::class_of<::System::Text::InternalEncoderBestFitFallbackBuffer*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::InternalEncoderBestFitFallbackBuffer.get_Remaining
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::InternalEncoderBestFitFallbackBuffer::*)()>(&::System::Text::InternalEncoderBestFitFallbackBuffer::get_Remaining)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5ad196c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::InternalEncoderBestFitFallbackBuffer*>(),
                                                                                          { ::i2c::class_of<::System::Text::InternalEncoderBestFitFallbackBuffer*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::InternalEncoderBestFitFallbackBuffer.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::InternalEncoderBestFitFallbackBuffer::*)()>(&::System::Text::InternalEncoderBestFitFallbackBuffer::Reset)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5ad1978;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::InternalEncoderBestFitFallbackBuffer*>(),
                                                                                          { ::i2c::class_of<::System::Text::InternalEncoderBestFitFallbackBuffer*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::InternalEncoderBestFitFallbackBuffer.TryBestFit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (::System::Text::InternalEncoderBestFitFallbackBuffer::*)(char16_t)>(
    &::System::Text::InternalEncoderBestFitFallbackBuffer::TryBestFit)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5ad169c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::InternalEncoderBestFitFallbackBuffer*>(), { "TryBestFit", {}, { ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
constexpr char16_t& System::Text::InternalEncoderBestFitFallbackBuffer::__cordl_internal_get__cBestFit() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cBestFit;
}
constexpr char16_t const& System::Text::InternalEncoderBestFitFallbackBuffer::__cordl_internal_get__cBestFit() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cBestFit;
}
constexpr void System::Text::InternalEncoderBestFitFallbackBuffer::__cordl_internal_set__cBestFit(char16_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cBestFit = value;
}
constexpr ::System::Text::InternalEncoderBestFitFallback*& System::Text::InternalEncoderBestFitFallbackBuffer::__cordl_internal_get__oFallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____oFallback;
}
constexpr ::System::Text::InternalEncoderBestFitFallback* const& System::Text::InternalEncoderBestFitFallbackBuffer::__cordl_internal_get__oFallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____oFallback;
}
constexpr void System::Text::InternalEncoderBestFitFallbackBuffer::__cordl_internal_set__oFallback(::System::Text::InternalEncoderBestFitFallback* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____oFallback = value;
}
constexpr int32_t& System::Text::InternalEncoderBestFitFallbackBuffer::__cordl_internal_get__iCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____iCount;
}
constexpr int32_t const& System::Text::InternalEncoderBestFitFallbackBuffer::__cordl_internal_get__iCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____iCount;
}
constexpr void System::Text::InternalEncoderBestFitFallbackBuffer::__cordl_internal_set__iCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____iCount = value;
}
constexpr int32_t& System::Text::InternalEncoderBestFitFallbackBuffer::__cordl_internal_get__iSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____iSize;
}
constexpr int32_t const& System::Text::InternalEncoderBestFitFallbackBuffer::__cordl_internal_get__iSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____iSize;
}
constexpr void System::Text::InternalEncoderBestFitFallbackBuffer::__cordl_internal_set__iSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____iSize = value;
}
inline void System::Text::InternalEncoderBestFitFallbackBuffer::setStaticF_s_InternalSyncObject(::System::Object* value) {
  ::cordl_internals::setStaticField<::System::Object*, "s_InternalSyncObject", ::System::Text::InternalEncoderBestFitFallbackBuffer*>(std::forward<::System::Object*>(value));
}
inline ::System::Object* System::Text::InternalEncoderBestFitFallbackBuffer::getStaticF_s_InternalSyncObject() {
  return ::cordl_internals::getStaticField<::System::Object*, "s_InternalSyncObject", ::System::Text::InternalEncoderBestFitFallbackBuffer*>();
}
inline ::System::Object* System::Text::InternalEncoderBestFitFallbackBuffer::get_InternalSyncObject() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::InternalEncoderBestFitFallbackBuffer*>(), { "get_InternalSyncObject", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method);
}
inline void System::Text::InternalEncoderBestFitFallbackBuffer::_ctor(::System::Text::InternalEncoderBestFitFallback* fallback) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::InternalEncoderBestFitFallbackBuffer*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Text::InternalEncoderBestFitFallback*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fallback);
}
inline bool System::Text::InternalEncoderBestFitFallbackBuffer::Fallback(char16_t charUnknown, int32_t index) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::InternalEncoderBestFitFallbackBuffer*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, charUnknown, index);
}
inline bool System::Text::InternalEncoderBestFitFallbackBuffer::Fallback(char16_t charUnknownHigh, char16_t charUnknownLow, int32_t index) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::InternalEncoderBestFitFallbackBuffer*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, charUnknownHigh, charUnknownLow, index);
}
inline char16_t System::Text::InternalEncoderBestFitFallbackBuffer::GetNextChar() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::InternalEncoderBestFitFallbackBuffer*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<char16_t>(this, ___internal_method);
}
inline bool System::Text::InternalEncoderBestFitFallbackBuffer::MovePrevious() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::InternalEncoderBestFitFallbackBuffer*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t System::Text::InternalEncoderBestFitFallbackBuffer::get_Remaining() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::InternalEncoderBestFitFallbackBuffer*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Text::InternalEncoderBestFitFallbackBuffer::Reset() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::InternalEncoderBestFitFallbackBuffer*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline char16_t System::Text::InternalEncoderBestFitFallbackBuffer::TryBestFit(char16_t cUnknown) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::InternalEncoderBestFitFallbackBuffer*>(), { "TryBestFit", {}, { ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<char16_t>(this, ___internal_method, cUnknown);
}
inline ::System::Text::InternalEncoderBestFitFallbackBuffer* System::Text::InternalEncoderBestFitFallbackBuffer::New_ctor(::System::Text::InternalEncoderBestFitFallback* fallback) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Text::InternalEncoderBestFitFallbackBuffer*>(fallback));
}
// Ctor Parameters []
constexpr ::System::Text::InternalEncoderBestFitFallbackBuffer::InternalEncoderBestFitFallbackBuffer() {}
