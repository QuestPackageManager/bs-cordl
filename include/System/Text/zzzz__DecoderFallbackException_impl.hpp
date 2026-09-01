#pragma once
// IWYU pragma private; include "System\Text\DecoderFallbackException.hpp"
#include "System/zzzz__ArgumentException_impl.hpp"
#include "System/Text/zzzz__DecoderFallbackException_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
//  Writing Method size for method: ::System::Text::DecoderFallbackException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::DecoderFallbackException::*)()>(&::System::Text::DecoderFallbackException::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5ccbf54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::DecoderFallbackException*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::DecoderFallbackException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::DecoderFallbackException::*)(::StringW, ::ArrayW<uint8_t>, int32_t)>(&::System::Text::DecoderFallbackException::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5ccbf18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::DecoderFallbackException*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::DecoderFallbackException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::DecoderFallbackException::*)(
    ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Text::DecoderFallbackException::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ccbfb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Text::DecoderFallbackException*>(),
                            { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint8_t>& System::Text::DecoderFallbackException::__cordl_internal_get__bytesUnknown() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bytesUnknown;
}
constexpr ::ArrayW<uint8_t> const& System::Text::DecoderFallbackException::__cordl_internal_get__bytesUnknown() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bytesUnknown;
}
constexpr void System::Text::DecoderFallbackException::__cordl_internal_set__bytesUnknown(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bytesUnknown = value;
}
constexpr int32_t& System::Text::DecoderFallbackException::__cordl_internal_get__index() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____index;
}
constexpr int32_t const& System::Text::DecoderFallbackException::__cordl_internal_get__index() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____index;
}
constexpr void System::Text::DecoderFallbackException::__cordl_internal_set__index(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____index = value;
}
inline void System::Text::DecoderFallbackException::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::DecoderFallbackException*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Text::DecoderFallbackException::_ctor(::StringW message, ::ArrayW<uint8_t> bytesUnknown, int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::DecoderFallbackException*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message, bytesUnknown, index);
}
inline void System::Text::DecoderFallbackException::_ctor(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Text::DecoderFallbackException*>(),
                          { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, serializationInfo, streamingContext);
}
inline ::System::Text::DecoderFallbackException* System::Text::DecoderFallbackException::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Text::DecoderFallbackException*>());
}
inline ::System::Text::DecoderFallbackException* System::Text::DecoderFallbackException::New_ctor(::StringW message, ::ArrayW<uint8_t> bytesUnknown, int32_t index) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Text::DecoderFallbackException*>(message, bytesUnknown, index));
}
inline ::System::Text::DecoderFallbackException* System::Text::DecoderFallbackException::New_ctor(::System::Runtime::Serialization::SerializationInfo* serializationInfo,
                                                                                                  ::System::Runtime::Serialization::StreamingContext streamingContext) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Text::DecoderFallbackException*>(serializationInfo, streamingContext));
}
// Ctor Parameters []
constexpr ::System::Text::DecoderFallbackException::DecoderFallbackException() {}
