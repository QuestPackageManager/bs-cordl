#pragma once
// IWYU pragma private; include "System/Text/EncoderFallbackException.hpp"
#include "System/zzzz__ArgumentException_impl.hpp"
#include "System/Text/zzzz__EncoderFallbackException_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
//  Writing Method size for method: ::System::Text::EncoderFallbackException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::EncoderFallbackException::*)()>(&::System::Text::EncoderFallbackException::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5ad1efc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::EncoderFallbackException*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::EncoderFallbackException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::EncoderFallbackException::*)(::StringW, char16_t, int32_t)>(&::System::Text::EncoderFallbackException::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5ad1ae8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::EncoderFallbackException*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::EncoderFallbackException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::EncoderFallbackException::*)(::StringW, char16_t, char16_t, int32_t)>(&::System::Text::EncoderFallbackException::_ctor)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x5ad1d3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::EncoderFallbackException*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::EncoderFallbackException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::EncoderFallbackException::*)(
    ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Text::EncoderFallbackException::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ad1f5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Text::EncoderFallbackException*>(),
                            { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
    return ___internal_method;
  }
};
constexpr char16_t& System::Text::EncoderFallbackException::__cordl_internal_get__charUnknown() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____charUnknown;
}
constexpr char16_t const& System::Text::EncoderFallbackException::__cordl_internal_get__charUnknown() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____charUnknown;
}
constexpr void System::Text::EncoderFallbackException::__cordl_internal_set__charUnknown(char16_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____charUnknown = value;
}
constexpr char16_t& System::Text::EncoderFallbackException::__cordl_internal_get__charUnknownHigh() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____charUnknownHigh;
}
constexpr char16_t const& System::Text::EncoderFallbackException::__cordl_internal_get__charUnknownHigh() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____charUnknownHigh;
}
constexpr void System::Text::EncoderFallbackException::__cordl_internal_set__charUnknownHigh(char16_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____charUnknownHigh = value;
}
constexpr char16_t& System::Text::EncoderFallbackException::__cordl_internal_get__charUnknownLow() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____charUnknownLow;
}
constexpr char16_t const& System::Text::EncoderFallbackException::__cordl_internal_get__charUnknownLow() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____charUnknownLow;
}
constexpr void System::Text::EncoderFallbackException::__cordl_internal_set__charUnknownLow(char16_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____charUnknownLow = value;
}
constexpr int32_t& System::Text::EncoderFallbackException::__cordl_internal_get__index() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____index;
}
constexpr int32_t const& System::Text::EncoderFallbackException::__cordl_internal_get__index() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____index;
}
constexpr void System::Text::EncoderFallbackException::__cordl_internal_set__index(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____index = value;
}
inline void System::Text::EncoderFallbackException::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::EncoderFallbackException*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Text::EncoderFallbackException::_ctor(::StringW message, char16_t charUnknown, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::EncoderFallbackException*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message, charUnknown, index);
}
inline void System::Text::EncoderFallbackException::_ctor(::StringW message, char16_t charUnknownHigh, char16_t charUnknownLow, int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::EncoderFallbackException*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message, charUnknownHigh, charUnknownLow, index);
}
inline void System::Text::EncoderFallbackException::_ctor(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Text::EncoderFallbackException*>(),
                          { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, serializationInfo, streamingContext);
}
inline ::System::Text::EncoderFallbackException* System::Text::EncoderFallbackException::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Text::EncoderFallbackException*>());
}
inline ::System::Text::EncoderFallbackException* System::Text::EncoderFallbackException::New_ctor(::StringW message, char16_t charUnknown, int32_t index) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Text::EncoderFallbackException*>(message, charUnknown, index));
}
inline ::System::Text::EncoderFallbackException* System::Text::EncoderFallbackException::New_ctor(::StringW message, char16_t charUnknownHigh, char16_t charUnknownLow, int32_t index) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Text::EncoderFallbackException*>(message, charUnknownHigh, charUnknownLow, index));
}
inline ::System::Text::EncoderFallbackException* System::Text::EncoderFallbackException::New_ctor(::System::Runtime::Serialization::SerializationInfo* serializationInfo,
                                                                                                  ::System::Runtime::Serialization::StreamingContext streamingContext) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Text::EncoderFallbackException*>(serializationInfo, streamingContext));
}
// Ctor Parameters []
constexpr ::System::Text::EncoderFallbackException::EncoderFallbackException() {}
