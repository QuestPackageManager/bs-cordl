#pragma once
// IWYU pragma private; include "System\Text\InternalDecoderBestFitFallbackBuffer.hpp"
#include "System/Text/zzzz__DecoderFallbackBuffer_impl.hpp"
#include "System/Text/zzzz__InternalDecoderBestFitFallbackBuffer_def.hpp"
#include "System/Text/zzzz__InternalDecoderBestFitFallback_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Text::InternalDecoderBestFitFallbackBuffer.get_InternalSyncObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)()>(&::System::Text::InternalDecoderBestFitFallbackBuffer::get_InternalSyncObject)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5ccb9e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::InternalDecoderBestFitFallbackBuffer*>(), { "get_InternalSyncObject", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::InternalDecoderBestFitFallbackBuffer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::InternalDecoderBestFitFallbackBuffer::*)(::System::Text::InternalDecoderBestFitFallback*)>(
    &::System::Text::InternalDecoderBestFitFallbackBuffer::_ctor)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x5ccb7f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::InternalDecoderBestFitFallbackBuffer*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Text::InternalDecoderBestFitFallback*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::InternalDecoderBestFitFallbackBuffer.Fallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Text::InternalDecoderBestFitFallbackBuffer::*)(::ArrayW<uint8_t>, int32_t)>(
    &::System::Text::InternalDecoderBestFitFallbackBuffer::Fallback)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5ccba80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::InternalDecoderBestFitFallbackBuffer*>(),
                                                                                          { ::i2c::class_of<::System::Text::InternalDecoderBestFitFallbackBuffer*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::InternalDecoderBestFitFallbackBuffer.GetNextChar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (::System::Text::InternalDecoderBestFitFallbackBuffer::*)()>(&::System::Text::InternalDecoderBestFitFallbackBuffer::GetNextChar)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5ccbc0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::InternalDecoderBestFitFallbackBuffer*>(),
                                                                                          { ::i2c::class_of<::System::Text::InternalDecoderBestFitFallbackBuffer*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::InternalDecoderBestFitFallbackBuffer.get_Remaining
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::InternalDecoderBestFitFallbackBuffer::*)()>(&::System::Text::InternalDecoderBestFitFallbackBuffer::get_Remaining)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5ccbc4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::InternalDecoderBestFitFallbackBuffer*>(),
                                                                                          { ::i2c::class_of<::System::Text::InternalDecoderBestFitFallbackBuffer*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::InternalDecoderBestFitFallbackBuffer.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::InternalDecoderBestFitFallbackBuffer::*)()>(&::System::Text::InternalDecoderBestFitFallbackBuffer::Reset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5ccbc58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::InternalDecoderBestFitFallbackBuffer*>(),
                                                                                          { ::i2c::class_of<::System::Text::InternalDecoderBestFitFallbackBuffer*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::InternalDecoderBestFitFallbackBuffer.InternalFallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::InternalDecoderBestFitFallbackBuffer::*)(::ArrayW<uint8_t>, uint8_t*)>(
    &::System::Text::InternalDecoderBestFitFallbackBuffer::InternalFallback)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ccbc68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::InternalDecoderBestFitFallbackBuffer*>(),
                                                                                          { ::i2c::class_of<::System::Text::InternalDecoderBestFitFallbackBuffer*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::InternalDecoderBestFitFallbackBuffer.TryBestFit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (::System::Text::InternalDecoderBestFitFallbackBuffer::*)(::ArrayW<uint8_t>)>(
    &::System::Text::InternalDecoderBestFitFallbackBuffer::TryBestFit)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x5ccbac0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::InternalDecoderBestFitFallbackBuffer*>(), { "TryBestFit", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
constexpr char16_t& System::Text::InternalDecoderBestFitFallbackBuffer::__cordl_internal_get__cBestFit() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cBestFit;
}
constexpr char16_t const& System::Text::InternalDecoderBestFitFallbackBuffer::__cordl_internal_get__cBestFit() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cBestFit;
}
constexpr void System::Text::InternalDecoderBestFitFallbackBuffer::__cordl_internal_set__cBestFit(char16_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cBestFit = value;
}
constexpr int32_t& System::Text::InternalDecoderBestFitFallbackBuffer::__cordl_internal_get__iCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____iCount;
}
constexpr int32_t const& System::Text::InternalDecoderBestFitFallbackBuffer::__cordl_internal_get__iCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____iCount;
}
constexpr void System::Text::InternalDecoderBestFitFallbackBuffer::__cordl_internal_set__iCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____iCount = value;
}
constexpr int32_t& System::Text::InternalDecoderBestFitFallbackBuffer::__cordl_internal_get__iSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____iSize;
}
constexpr int32_t const& System::Text::InternalDecoderBestFitFallbackBuffer::__cordl_internal_get__iSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____iSize;
}
constexpr void System::Text::InternalDecoderBestFitFallbackBuffer::__cordl_internal_set__iSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____iSize = value;
}
constexpr ::System::Text::InternalDecoderBestFitFallback*& System::Text::InternalDecoderBestFitFallbackBuffer::__cordl_internal_get__oFallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____oFallback;
}
constexpr ::System::Text::InternalDecoderBestFitFallback* const& System::Text::InternalDecoderBestFitFallbackBuffer::__cordl_internal_get__oFallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____oFallback;
}
constexpr void System::Text::InternalDecoderBestFitFallbackBuffer::__cordl_internal_set__oFallback(::System::Text::InternalDecoderBestFitFallback* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____oFallback = value;
}
inline void System::Text::InternalDecoderBestFitFallbackBuffer::setStaticF_s_InternalSyncObject(::System::Object* value) {
  ::cordl_internals::setStaticField<::System::Object*, "s_InternalSyncObject", ::System::Text::InternalDecoderBestFitFallbackBuffer*>(std::forward<::System::Object*>(value));
}
inline ::System::Object* System::Text::InternalDecoderBestFitFallbackBuffer::getStaticF_s_InternalSyncObject() {
  return ::cordl_internals::getStaticField<::System::Object*, "s_InternalSyncObject", ::System::Text::InternalDecoderBestFitFallbackBuffer*>();
}
inline ::System::Object* System::Text::InternalDecoderBestFitFallbackBuffer::get_InternalSyncObject() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::InternalDecoderBestFitFallbackBuffer*>(), { "get_InternalSyncObject", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method);
}
inline void System::Text::InternalDecoderBestFitFallbackBuffer::_ctor(::System::Text::InternalDecoderBestFitFallback* fallback) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::InternalDecoderBestFitFallbackBuffer*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Text::InternalDecoderBestFitFallback*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fallback);
}
inline bool System::Text::InternalDecoderBestFitFallbackBuffer::Fallback(::ArrayW<uint8_t> bytesUnknown, int32_t index) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::InternalDecoderBestFitFallbackBuffer*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, bytesUnknown, index);
}
inline char16_t System::Text::InternalDecoderBestFitFallbackBuffer::GetNextChar() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::InternalDecoderBestFitFallbackBuffer*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<char16_t>(this, ___internal_method);
}
inline int32_t System::Text::InternalDecoderBestFitFallbackBuffer::get_Remaining() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::InternalDecoderBestFitFallbackBuffer*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Text::InternalDecoderBestFitFallbackBuffer::Reset() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::InternalDecoderBestFitFallbackBuffer*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t System::Text::InternalDecoderBestFitFallbackBuffer::InternalFallback(::ArrayW<uint8_t> bytes, uint8_t* pBytes) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::InternalDecoderBestFitFallbackBuffer*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, bytes, pBytes);
}
inline char16_t System::Text::InternalDecoderBestFitFallbackBuffer::TryBestFit(::ArrayW<uint8_t> bytesCheck) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::InternalDecoderBestFitFallbackBuffer*>(), { "TryBestFit", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<char16_t>(this, ___internal_method, bytesCheck);
}
inline ::System::Text::InternalDecoderBestFitFallbackBuffer* System::Text::InternalDecoderBestFitFallbackBuffer::New_ctor(::System::Text::InternalDecoderBestFitFallback* fallback) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Text::InternalDecoderBestFitFallbackBuffer*>(fallback));
}
// Ctor Parameters []
constexpr ::System::Text::InternalDecoderBestFitFallbackBuffer::InternalDecoderBestFitFallbackBuffer() {}
