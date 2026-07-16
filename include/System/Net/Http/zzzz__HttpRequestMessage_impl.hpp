#pragma once
// IWYU pragma private; include "System/Net/Http/HttpRequestMessage.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/Http/zzzz__HttpRequestMessage_def.hpp"
#include "System/Net/Http/Headers/zzzz__HttpRequestHeaders_def.hpp"
#include "System/Net/Http/zzzz__HttpContent_def.hpp"
#include "System/Net/Http/zzzz__HttpMethod_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Uri_def.hpp"
#include "System/zzzz__Version_def.hpp"
//  Writing Method size for method: ::System::Net::Http::HttpRequestMessage._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::HttpRequestMessage::*)()>(&::System::Net::Http::HttpRequestMessage::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x60d9a44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::HttpRequestMessage*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpRequestMessage._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::HttpRequestMessage::*)(::System::Net::Http::HttpMethod*, ::System::Uri*)>(
    &::System::Net::Http::HttpRequestMessage::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x60d6180;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::HttpRequestMessage*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Net::Http::HttpMethod*>(), ::i2c::type_of<::System::Uri*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpRequestMessage.get_Content
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::Http::HttpContent* (::System::Net::Http::HttpRequestMessage::*)()>(&::System::Net::Http::HttpRequestMessage::get_Content)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60d9b98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::HttpRequestMessage*>(), { "get_Content", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpRequestMessage.set_Content
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::HttpRequestMessage::*)(::System::Net::Http::HttpContent*)>(&::System::Net::Http::HttpRequestMessage::set_Content)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60d9ba0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::HttpRequestMessage*>(), { "set_Content", {}, { ::i2c::type_of<::System::Net::Http::HttpContent*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpRequestMessage.get_Headers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::Http::Headers::HttpRequestHeaders* (::System::Net::Http::HttpRequestMessage::*)()>(
    &::System::Net::Http::HttpRequestMessage::get_Headers)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x60d2498;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::HttpRequestMessage*>(), { "get_Headers", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpRequestMessage.get_Method
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::Http::HttpMethod* (::System::Net::Http::HttpRequestMessage::*)()>(&::System::Net::Http::HttpRequestMessage::get_Method)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60d9c0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::HttpRequestMessage*>(), { "get_Method", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpRequestMessage.set_Method
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::HttpRequestMessage::*)(::System::Net::Http::HttpMethod*)>(&::System::Net::Http::HttpRequestMessage::set_Method)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x60d9ae8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::HttpRequestMessage*>(), { "set_Method", {}, { ::i2c::type_of<::System::Net::Http::HttpMethod*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpRequestMessage.get_RequestUri
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Uri* (::System::Net::Http::HttpRequestMessage::*)()>(&::System::Net::Http::HttpRequestMessage::get_RequestUri)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60d9c14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::HttpRequestMessage*>(), { "get_RequestUri", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpRequestMessage.set_RequestUri
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::HttpRequestMessage::*)(::System::Uri*)>(&::System::Net::Http::HttpRequestMessage::set_RequestUri)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x60d2d08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::HttpRequestMessage*>(), { "set_RequestUri", {}, { ::i2c::type_of<::System::Uri*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpRequestMessage.IsAllowedAbsoluteUri
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Uri*)>(&::System::Net::Http::HttpRequestMessage::IsAllowedAbsoluteUri)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x60d9c1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::HttpRequestMessage*>(), { "IsAllowedAbsoluteUri", {}, { ::i2c::type_of<::System::Uri*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpRequestMessage.get_Version
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Version* (::System::Net::Http::HttpRequestMessage::*)()>(&::System::Net::Http::HttpRequestMessage::get_Version)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x60d2430;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::HttpRequestMessage*>(), { "get_Version", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpRequestMessage.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::HttpRequestMessage::*)()>(&::System::Net::Http::HttpRequestMessage::Dispose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x60d9d74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::HttpRequestMessage*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpRequestMessage.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::HttpRequestMessage::*)(bool)>(&::System::Net::Http::HttpRequestMessage::Dispose)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x60d9d84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::Http::HttpRequestMessage*>(), { ::i2c::class_of<::System::Net::Http::HttpRequestMessage*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpRequestMessage.SetIsUsed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::Http::HttpRequestMessage::*)()>(&::System::Net::Http::HttpRequestMessage::SetIsUsed)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x60d658c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::HttpRequestMessage*>(), { "SetIsUsed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpRequestMessage.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::Http::HttpRequestMessage::*)()>(&::System::Net::Http::HttpRequestMessage::ToString)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x60d9db8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::Http::HttpRequestMessage*>(), { ::i2c::class_of<::System::Net::Http::HttpRequestMessage*>(), 3 }));
    return ___internal_method;
  }
};
constexpr ::System::Net::Http::Headers::HttpRequestHeaders*& System::Net::Http::HttpRequestMessage::__cordl_internal_get_headers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headers;
}
constexpr ::System::Net::Http::Headers::HttpRequestHeaders* const& System::Net::Http::HttpRequestMessage::__cordl_internal_get_headers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headers;
}
constexpr void System::Net::Http::HttpRequestMessage::__cordl_internal_set_headers(::System::Net::Http::Headers::HttpRequestHeaders* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___headers = value;
}
constexpr ::System::Net::Http::HttpMethod*& System::Net::Http::HttpRequestMessage::__cordl_internal_get_method() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___method;
}
constexpr ::System::Net::Http::HttpMethod* const& System::Net::Http::HttpRequestMessage::__cordl_internal_get_method() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___method;
}
constexpr void System::Net::Http::HttpRequestMessage::__cordl_internal_set_method(::System::Net::Http::HttpMethod* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___method = value;
}
constexpr ::System::Version*& System::Net::Http::HttpRequestMessage::__cordl_internal_get_version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr ::System::Version* const& System::Net::Http::HttpRequestMessage::__cordl_internal_get_version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr void System::Net::Http::HttpRequestMessage::__cordl_internal_set_version(::System::Version* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___version = value;
}
constexpr ::System::Uri*& System::Net::Http::HttpRequestMessage::__cordl_internal_get_uri() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___uri;
}
constexpr ::System::Uri* const& System::Net::Http::HttpRequestMessage::__cordl_internal_get_uri() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___uri;
}
constexpr void System::Net::Http::HttpRequestMessage::__cordl_internal_set_uri(::System::Uri* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___uri = value;
}
constexpr bool& System::Net::Http::HttpRequestMessage::__cordl_internal_get_is_used() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___is_used;
}
constexpr bool const& System::Net::Http::HttpRequestMessage::__cordl_internal_get_is_used() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___is_used;
}
constexpr void System::Net::Http::HttpRequestMessage::__cordl_internal_set_is_used(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___is_used = value;
}
constexpr bool& System::Net::Http::HttpRequestMessage::__cordl_internal_get_disposed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disposed;
}
constexpr bool const& System::Net::Http::HttpRequestMessage::__cordl_internal_get_disposed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disposed;
}
constexpr void System::Net::Http::HttpRequestMessage::__cordl_internal_set_disposed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___disposed = value;
}
constexpr ::System::Net::Http::HttpContent*& System::Net::Http::HttpRequestMessage::__cordl_internal_get__Content_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Content_k__BackingField;
}
constexpr ::System::Net::Http::HttpContent* const& System::Net::Http::HttpRequestMessage::__cordl_internal_get__Content_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Content_k__BackingField;
}
constexpr void System::Net::Http::HttpRequestMessage::__cordl_internal_set__Content_k__BackingField(::System::Net::Http::HttpContent* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Content_k__BackingField = value;
}
inline void System::Net::Http::HttpRequestMessage::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::HttpRequestMessage*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Net::Http::HttpRequestMessage::_ctor(::System::Net::Http::HttpMethod* method, ::System::Uri* requestUri) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::HttpRequestMessage*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Net::Http::HttpMethod*>(), ::i2c::type_of<::System::Uri*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, method, requestUri);
}
inline ::System::Net::Http::HttpContent* System::Net::Http::HttpRequestMessage::get_Content() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::HttpRequestMessage*>(), { "get_Content", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Http::HttpContent*>(this, ___internal_method);
}
inline void System::Net::Http::HttpRequestMessage::set_Content(::System::Net::Http::HttpContent* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::HttpRequestMessage*>(), { "set_Content", {}, { ::i2c::type_of<::System::Net::Http::HttpContent*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Net::Http::Headers::HttpRequestHeaders* System::Net::Http::HttpRequestMessage::get_Headers() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::HttpRequestMessage*>(), { "get_Headers", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Http::Headers::HttpRequestHeaders*>(this, ___internal_method);
}
inline ::System::Net::Http::HttpMethod* System::Net::Http::HttpRequestMessage::get_Method() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::HttpRequestMessage*>(), { "get_Method", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Http::HttpMethod*>(this, ___internal_method);
}
inline void System::Net::Http::HttpRequestMessage::set_Method(::System::Net::Http::HttpMethod* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::HttpRequestMessage*>(), { "set_Method", {}, { ::i2c::type_of<::System::Net::Http::HttpMethod*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Uri* System::Net::Http::HttpRequestMessage::get_RequestUri() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::HttpRequestMessage*>(), { "get_RequestUri", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Uri*>(this, ___internal_method);
}
inline void System::Net::Http::HttpRequestMessage::set_RequestUri(::System::Uri* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::HttpRequestMessage*>(), { "set_RequestUri", {}, { ::i2c::type_of<::System::Uri*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Net::Http::HttpRequestMessage::IsAllowedAbsoluteUri(::System::Uri* uri) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::HttpRequestMessage*>(), { "IsAllowedAbsoluteUri", {}, { ::i2c::type_of<::System::Uri*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, uri);
}
inline ::System::Version* System::Net::Http::HttpRequestMessage::get_Version() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::HttpRequestMessage*>(), { "get_Version", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Version*>(this, ___internal_method);
}
inline void System::Net::Http::HttpRequestMessage::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::HttpRequestMessage*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Net::Http::HttpRequestMessage::Dispose(bool disposing) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::Http::HttpRequestMessage*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline bool System::Net::Http::HttpRequestMessage::SetIsUsed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::HttpRequestMessage*>(), { "SetIsUsed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::StringW System::Net::Http::HttpRequestMessage::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::Http::HttpRequestMessage*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Net::Http::HttpRequestMessage* System::Net::Http::HttpRequestMessage::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Http::HttpRequestMessage*>());
}
inline ::System::Net::Http::HttpRequestMessage* System::Net::Http::HttpRequestMessage::New_ctor(::System::Net::Http::HttpMethod* method, ::System::Uri* requestUri) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Http::HttpRequestMessage*>(method, requestUri));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr System::Net::Http::HttpRequestMessage::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* System::Net::Http::HttpRequestMessage::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Net::Http::HttpRequestMessage::HttpRequestMessage() {}
