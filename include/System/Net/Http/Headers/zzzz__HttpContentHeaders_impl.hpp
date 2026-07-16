#pragma once
// IWYU pragma private; include "System/Net/Http/Headers/HttpContentHeaders.hpp"
#include "System/Net/Http/Headers/zzzz__HttpHeaders_impl.hpp"
#include "System/Net/Http/Headers/zzzz__HttpContentHeaders_def.hpp"
#include "System/Net/Http/Headers/zzzz__ContentDispositionHeaderValue_def.hpp"
#include "System/Net/Http/Headers/zzzz__MediaTypeHeaderValue_def.hpp"
#include "System/Net/Http/zzzz__HttpContent_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
//  Writing Method size for method: ::System::Net::Http::Headers::HttpContentHeaders._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::Headers::HttpContentHeaders::*)(::System::Net::Http::HttpContent*)>(
    &::System::Net::Http::Headers::HttpContentHeaders::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x60d79b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::HttpContentHeaders*>(), { ".ctor", {}, { ::i2c::type_of<::System::Net::Http::HttpContent*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::HttpContentHeaders.get_ContentDisposition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::Http::Headers::ContentDispositionHeaderValue* (::System::Net::Http::Headers::HttpContentHeaders::*)()>(
    &::System::Net::Http::Headers::HttpContentHeaders::get_ContentDisposition)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x60dc3b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::HttpContentHeaders*>(), { "get_ContentDisposition", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::HttpContentHeaders.set_ContentDisposition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::Headers::HttpContentHeaders::*)(::System::Net::Http::Headers::ContentDispositionHeaderValue*)>(
    &::System::Net::Http::Headers::HttpContentHeaders::set_ContentDisposition)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x60dc590;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::HttpContentHeaders*>(),
                                                             { "set_ContentDisposition", {}, { ::i2c::type_of<::System::Net::Http::Headers::ContentDispositionHeaderValue*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::HttpContentHeaders.get_ContentLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<int64_t> (::System::Net::Http::Headers::HttpContentHeaders::*)()>(
    &::System::Net::Http::Headers::HttpContentHeaders::get_ContentLength)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x60d4bf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::HttpContentHeaders*>(), { "get_ContentLength", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::HttpContentHeaders.set_ContentLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::Headers::HttpContentHeaders::*)(::System::Nullable_1<int64_t>)>(
    &::System::Net::Http::Headers::HttpContentHeaders::set_ContentLength)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x60e1820;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::HttpContentHeaders*>(), { "set_ContentLength", {}, { ::i2c::type_of<::System::Nullable_1<int64_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::HttpContentHeaders.get_ContentType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::Http::Headers::MediaTypeHeaderValue* (::System::Net::Http::Headers::HttpContentHeaders::*)()>(
    &::System::Net::Http::Headers::HttpContentHeaders::get_ContentType)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x60d92d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::HttpContentHeaders*>(), { "get_ContentType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::HttpContentHeaders.set_ContentType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::Headers::HttpContentHeaders::*)(::System::Net::Http::Headers::MediaTypeHeaderValue*)>(
    &::System::Net::Http::Headers::HttpContentHeaders::set_ContentType)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x60d5b8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::HttpContentHeaders*>(),
                                                                                           { "set_ContentType", {}, { ::i2c::type_of<::System::Net::Http::Headers::MediaTypeHeaderValue*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Net::Http::HttpContent*& System::Net::Http::Headers::HttpContentHeaders::__cordl_internal_get_content() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___content;
}
constexpr ::System::Net::Http::HttpContent* const& System::Net::Http::Headers::HttpContentHeaders::__cordl_internal_get_content() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___content;
}
constexpr void System::Net::Http::Headers::HttpContentHeaders::__cordl_internal_set_content(::System::Net::Http::HttpContent* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___content = value;
}
inline void System::Net::Http::Headers::HttpContentHeaders::_ctor(::System::Net::Http::HttpContent* content) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::HttpContentHeaders*>(), { ".ctor", {}, { ::i2c::type_of<::System::Net::Http::HttpContent*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, content);
}
inline ::System::Net::Http::Headers::ContentDispositionHeaderValue* System::Net::Http::Headers::HttpContentHeaders::get_ContentDisposition() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::HttpContentHeaders*>(), { "get_ContentDisposition", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Http::Headers::ContentDispositionHeaderValue*>(this, ___internal_method);
}
inline void System::Net::Http::Headers::HttpContentHeaders::set_ContentDisposition(::System::Net::Http::Headers::ContentDispositionHeaderValue* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::HttpContentHeaders*>(),
                                                           { "set_ContentDisposition", {}, { ::i2c::type_of<::System::Net::Http::Headers::ContentDispositionHeaderValue*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Nullable_1<int64_t> System::Net::Http::Headers::HttpContentHeaders::get_ContentLength() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::HttpContentHeaders*>(), { "get_ContentLength", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<int64_t>>(this, ___internal_method);
}
inline void System::Net::Http::Headers::HttpContentHeaders::set_ContentLength(::System::Nullable_1<int64_t> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::HttpContentHeaders*>(), { "set_ContentLength", {}, { ::i2c::type_of<::System::Nullable_1<int64_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Net::Http::Headers::MediaTypeHeaderValue* System::Net::Http::Headers::HttpContentHeaders::get_ContentType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::HttpContentHeaders*>(), { "get_ContentType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Http::Headers::MediaTypeHeaderValue*>(this, ___internal_method);
}
inline void System::Net::Http::Headers::HttpContentHeaders::set_ContentType(::System::Net::Http::Headers::MediaTypeHeaderValue* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::HttpContentHeaders*>(),
                                                                                         { "set_ContentType", {}, { ::i2c::type_of<::System::Net::Http::Headers::MediaTypeHeaderValue*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Net::Http::Headers::HttpContentHeaders* System::Net::Http::Headers::HttpContentHeaders::New_ctor(::System::Net::Http::HttpContent* content) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Http::Headers::HttpContentHeaders*>(content));
}
// Ctor Parameters []
constexpr ::System::Net::Http::Headers::HttpContentHeaders::HttpContentHeaders() {}
