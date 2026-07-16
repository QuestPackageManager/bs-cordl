#pragma once
// IWYU pragma private; include "System/Net/Http/HttpResponseMessage.hpp"
#include "System/Net/zzzz__HttpStatusCode_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/Http/zzzz__HttpResponseMessage_def.hpp"
#include "System/Net/Http/Headers/zzzz__HttpResponseHeaders_def.hpp"
#include "System/Net/Http/zzzz__HttpContent_def.hpp"
#include "System/Net/Http/zzzz__HttpRequestMessage_def.hpp"
#include "System/Net/zzzz__HttpStatusCode_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Version_def.hpp"
//  Writing Method size for method: ::System::Net::Http::HttpResponseMessage._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::HttpResponseMessage::*)(::System::Net::HttpStatusCode)>(&::System::Net::Http::HttpResponseMessage::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x60d2ac0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::HttpResponseMessage*>(), { ".ctor", {}, { ::i2c::type_of<::System::Net::HttpStatusCode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpResponseMessage.get_Content
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::Http::HttpContent* (::System::Net::Http::HttpResponseMessage::*)()>(&::System::Net::Http::HttpResponseMessage::get_Content)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60da084;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::HttpResponseMessage*>(), { "get_Content", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpResponseMessage.set_Content
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::HttpResponseMessage::*)(::System::Net::Http::HttpContent*)>(&::System::Net::Http::HttpResponseMessage::set_Content)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60da08c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::HttpResponseMessage*>(), { "set_Content", {}, { ::i2c::type_of<::System::Net::Http::HttpContent*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpResponseMessage.get_Headers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::Http::Headers::HttpResponseHeaders* (::System::Net::Http::HttpResponseMessage::*)()>(
    &::System::Net::Http::HttpResponseMessage::get_Headers)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x60d2c00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::HttpResponseMessage*>(), { "get_Headers", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpResponseMessage.get_IsSuccessStatusCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::Http::HttpResponseMessage::*)()>(&::System::Net::Http::HttpResponseMessage::get_IsSuccessStatusCode)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x60da0f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::HttpResponseMessage*>(), { "get_IsSuccessStatusCode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpResponseMessage.get_ReasonPhrase
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::Http::HttpResponseMessage::*)()>(&::System::Net::Http::HttpResponseMessage::get_ReasonPhrase)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x60da10c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::HttpResponseMessage*>(), { "get_ReasonPhrase", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpResponseMessage.set_ReasonPhrase
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::HttpResponseMessage::*)(::StringW)>(&::System::Net::Http::HttpResponseMessage::set_ReasonPhrase)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60da124;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::HttpResponseMessage*>(), { "set_ReasonPhrase", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpResponseMessage.set_RequestMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::HttpResponseMessage::*)(::System::Net::Http::HttpRequestMessage*)>(
    &::System::Net::Http::HttpResponseMessage::set_RequestMessage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60da12c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Net::Http::HttpResponseMessage*>(), { "set_RequestMessage", {}, { ::i2c::type_of<::System::Net::Http::HttpRequestMessage*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpResponseMessage.get_StatusCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::HttpStatusCode (::System::Net::Http::HttpResponseMessage::*)()>(&::System::Net::Http::HttpResponseMessage::get_StatusCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60da134;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::HttpResponseMessage*>(), { "get_StatusCode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpResponseMessage.set_StatusCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::HttpResponseMessage::*)(::System::Net::HttpStatusCode)>(&::System::Net::Http::HttpResponseMessage::set_StatusCode)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x60da040;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::HttpResponseMessage*>(), { "set_StatusCode", {}, { ::i2c::type_of<::System::Net::HttpStatusCode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpResponseMessage.get_Version
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Version* (::System::Net::Http::HttpResponseMessage::*)()>(&::System::Net::Http::HttpResponseMessage::get_Version)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x60da13c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::HttpResponseMessage*>(), { "get_Version", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpResponseMessage.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::HttpResponseMessage::*)()>(&::System::Net::Http::HttpResponseMessage::Dispose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x60da1a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::HttpResponseMessage*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpResponseMessage.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::HttpResponseMessage::*)(bool)>(&::System::Net::Http::HttpResponseMessage::Dispose)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x60da1b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::Http::HttpResponseMessage*>(), { ::i2c::class_of<::System::Net::Http::HttpResponseMessage*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpResponseMessage.EnsureSuccessStatusCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::Http::HttpResponseMessage* (::System::Net::Http::HttpResponseMessage::*)()>(
    &::System::Net::Http::HttpResponseMessage::EnsureSuccessStatusCode)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x60d77b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::HttpResponseMessage*>(), { "EnsureSuccessStatusCode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpResponseMessage.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::Http::HttpResponseMessage::*)()>(&::System::Net::Http::HttpResponseMessage::ToString)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x60da1e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::Http::HttpResponseMessage*>(), { ::i2c::class_of<::System::Net::Http::HttpResponseMessage*>(), 3 }));
    return ___internal_method;
  }
};
constexpr ::System::Net::Http::Headers::HttpResponseHeaders*& System::Net::Http::HttpResponseMessage::__cordl_internal_get_headers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headers;
}
constexpr ::System::Net::Http::Headers::HttpResponseHeaders* const& System::Net::Http::HttpResponseMessage::__cordl_internal_get_headers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headers;
}
constexpr void System::Net::Http::HttpResponseMessage::__cordl_internal_set_headers(::System::Net::Http::Headers::HttpResponseHeaders* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___headers = value;
}
constexpr ::StringW& System::Net::Http::HttpResponseMessage::__cordl_internal_get_reasonPhrase() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reasonPhrase;
}
constexpr ::StringW const& System::Net::Http::HttpResponseMessage::__cordl_internal_get_reasonPhrase() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reasonPhrase;
}
constexpr void System::Net::Http::HttpResponseMessage::__cordl_internal_set_reasonPhrase(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___reasonPhrase = value;
}
constexpr ::System::Net::HttpStatusCode& System::Net::Http::HttpResponseMessage::__cordl_internal_get_statusCode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___statusCode;
}
constexpr ::System::Net::HttpStatusCode const& System::Net::Http::HttpResponseMessage::__cordl_internal_get_statusCode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___statusCode;
}
constexpr void System::Net::Http::HttpResponseMessage::__cordl_internal_set_statusCode(::System::Net::HttpStatusCode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___statusCode = value;
}
constexpr ::System::Version*& System::Net::Http::HttpResponseMessage::__cordl_internal_get_version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr ::System::Version* const& System::Net::Http::HttpResponseMessage::__cordl_internal_get_version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr void System::Net::Http::HttpResponseMessage::__cordl_internal_set_version(::System::Version* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___version = value;
}
constexpr bool& System::Net::Http::HttpResponseMessage::__cordl_internal_get_disposed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disposed;
}
constexpr bool const& System::Net::Http::HttpResponseMessage::__cordl_internal_get_disposed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disposed;
}
constexpr void System::Net::Http::HttpResponseMessage::__cordl_internal_set_disposed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___disposed = value;
}
constexpr ::System::Net::Http::HttpContent*& System::Net::Http::HttpResponseMessage::__cordl_internal_get__Content_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Content_k__BackingField;
}
constexpr ::System::Net::Http::HttpContent* const& System::Net::Http::HttpResponseMessage::__cordl_internal_get__Content_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Content_k__BackingField;
}
constexpr void System::Net::Http::HttpResponseMessage::__cordl_internal_set__Content_k__BackingField(::System::Net::Http::HttpContent* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Content_k__BackingField = value;
}
constexpr ::System::Net::Http::HttpRequestMessage*& System::Net::Http::HttpResponseMessage::__cordl_internal_get__RequestMessage_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____RequestMessage_k__BackingField;
}
constexpr ::System::Net::Http::HttpRequestMessage* const& System::Net::Http::HttpResponseMessage::__cordl_internal_get__RequestMessage_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____RequestMessage_k__BackingField;
}
constexpr void System::Net::Http::HttpResponseMessage::__cordl_internal_set__RequestMessage_k__BackingField(::System::Net::Http::HttpRequestMessage* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____RequestMessage_k__BackingField = value;
}
inline void System::Net::Http::HttpResponseMessage::_ctor(::System::Net::HttpStatusCode statusCode) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::HttpResponseMessage*>(), { ".ctor", {}, { ::i2c::type_of<::System::Net::HttpStatusCode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, statusCode);
}
inline ::System::Net::Http::HttpContent* System::Net::Http::HttpResponseMessage::get_Content() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::HttpResponseMessage*>(), { "get_Content", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Http::HttpContent*>(this, ___internal_method);
}
inline void System::Net::Http::HttpResponseMessage::set_Content(::System::Net::Http::HttpContent* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::HttpResponseMessage*>(), { "set_Content", {}, { ::i2c::type_of<::System::Net::Http::HttpContent*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Net::Http::Headers::HttpResponseHeaders* System::Net::Http::HttpResponseMessage::get_Headers() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::HttpResponseMessage*>(), { "get_Headers", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Http::Headers::HttpResponseHeaders*>(this, ___internal_method);
}
inline bool System::Net::Http::HttpResponseMessage::get_IsSuccessStatusCode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::HttpResponseMessage*>(), { "get_IsSuccessStatusCode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::StringW System::Net::Http::HttpResponseMessage::get_ReasonPhrase() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::HttpResponseMessage*>(), { "get_ReasonPhrase", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Net::Http::HttpResponseMessage::set_ReasonPhrase(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::HttpResponseMessage*>(), { "set_ReasonPhrase", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Net::Http::HttpResponseMessage::set_RequestMessage(::System::Net::Http::HttpRequestMessage* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Net::Http::HttpResponseMessage*>(), { "set_RequestMessage", {}, { ::i2c::type_of<::System::Net::Http::HttpRequestMessage*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Net::HttpStatusCode System::Net::Http::HttpResponseMessage::get_StatusCode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::HttpResponseMessage*>(), { "get_StatusCode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::HttpStatusCode>(this, ___internal_method);
}
inline void System::Net::Http::HttpResponseMessage::set_StatusCode(::System::Net::HttpStatusCode value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::HttpResponseMessage*>(), { "set_StatusCode", {}, { ::i2c::type_of<::System::Net::HttpStatusCode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Version* System::Net::Http::HttpResponseMessage::get_Version() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::HttpResponseMessage*>(), { "get_Version", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Version*>(this, ___internal_method);
}
inline void System::Net::Http::HttpResponseMessage::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::HttpResponseMessage*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Net::Http::HttpResponseMessage::Dispose(bool disposing) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::Http::HttpResponseMessage*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline ::System::Net::Http::HttpResponseMessage* System::Net::Http::HttpResponseMessage::EnsureSuccessStatusCode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::HttpResponseMessage*>(), { "EnsureSuccessStatusCode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Http::HttpResponseMessage*>(this, ___internal_method);
}
inline ::StringW System::Net::Http::HttpResponseMessage::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::Http::HttpResponseMessage*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Net::Http::HttpResponseMessage* System::Net::Http::HttpResponseMessage::New_ctor(::System::Net::HttpStatusCode statusCode) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Http::HttpResponseMessage*>(statusCode));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr System::Net::Http::HttpResponseMessage::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* System::Net::Http::HttpResponseMessage::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Net::Http::HttpResponseMessage::HttpResponseMessage() {}
