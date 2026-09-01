#pragma once
// IWYU pragma private; include "System\Net\TlsStream.hpp"
#include "System/Net/Sockets/zzzz__NetworkStream_impl.hpp"
#include "System/Net/zzzz__TlsStream_def.hpp"
#include "System/Net/Security/zzzz__SslStream_def.hpp"
#include "System/Net/Sockets/zzzz__NetworkStream_def.hpp"
#include "System/Net/Sockets/zzzz__Socket_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509CertificateCollection_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Net::TlsStream._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::TlsStream::*)(::System::Net::Sockets::NetworkStream*, ::System::Net::Sockets::Socket*, ::StringW,
                                                                                          ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*)>(
    &::System::Net::TlsStream::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x63f9888;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::TlsStream*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::System::Net::Sockets::NetworkStream*>(), ::i2c::type_of<::System::Net::Sockets::Socket*>(),
                                                                 ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509CertificateCollection*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::TlsStream.AuthenticateAsClient
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::TlsStream::*)()>(&::System::Net::TlsStream::AuthenticateAsClient)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x63f9960;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::TlsStream*>(), { "AuthenticateAsClient", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::TlsStream.BeginAuthenticateAsClient
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::System::Net::TlsStream::*)(::System::AsyncCallback*, ::System::Object*)>(
    &::System::Net::TlsStream::BeginAuthenticateAsClient)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x63f9a84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Net::TlsStream*>(), { "BeginAuthenticateAsClient", {}, { ::i2c::type_of<::System::AsyncCallback*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::TlsStream.EndAuthenticateAsClient
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::TlsStream::*)(::System::IAsyncResult*)>(&::System::Net::TlsStream::EndAuthenticateAsClient)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x63f9bc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::TlsStream*>(), { "EndAuthenticateAsClient", {}, { ::i2c::type_of<::System::IAsyncResult*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::TlsStream.BeginWrite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::System::Net::TlsStream::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::System::AsyncCallback*, ::System::Object*)>(
    &::System::Net::TlsStream::BeginWrite)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x63f9be0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::TlsStream*>(), { ::i2c::class_of<::System::Net::TlsStream*>(), 29 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::TlsStream.EndWrite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::TlsStream::*)(::System::IAsyncResult*)>(&::System::Net::TlsStream::EndWrite)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x63f9c00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::TlsStream*>(), { ::i2c::class_of<::System::Net::TlsStream*>(), 30 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::TlsStream.Write
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::TlsStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::Net::TlsStream::Write)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x63f9c20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::TlsStream*>(), { ::i2c::class_of<::System::Net::TlsStream*>(), 38 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::TlsStream.Read
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Net::TlsStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::Net::TlsStream::Read)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x63f9c40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::TlsStream*>(), { ::i2c::class_of<::System::Net::TlsStream*>(), 35 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::TlsStream.BeginRead
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::System::Net::TlsStream::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::System::AsyncCallback*, ::System::Object*)>(
    &::System::Net::TlsStream::BeginRead)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x63f9c60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::TlsStream*>(), { ::i2c::class_of<::System::Net::TlsStream*>(), 25 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::TlsStream.EndRead
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Net::TlsStream::*)(::System::IAsyncResult*)>(&::System::Net::TlsStream::EndRead)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x63f9c80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::TlsStream*>(), { ::i2c::class_of<::System::Net::TlsStream*>(), 26 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::TlsStream.Close
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::TlsStream::*)()>(&::System::Net::TlsStream::Close)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x63f9ca0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::TlsStream*>(), { ::i2c::class_of<::System::Net::TlsStream*>(), 21 }));
    return ___internal_method;
  }
};
constexpr ::System::Net::Security::SslStream*& System::Net::TlsStream::__cordl_internal_get__sslStream() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sslStream;
}
constexpr ::System::Net::Security::SslStream* const& System::Net::TlsStream::__cordl_internal_get__sslStream() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sslStream;
}
constexpr void System::Net::TlsStream::__cordl_internal_set__sslStream(::System::Net::Security::SslStream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sslStream = value;
}
constexpr ::StringW& System::Net::TlsStream::__cordl_internal_get__host() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____host;
}
constexpr ::StringW const& System::Net::TlsStream::__cordl_internal_get__host() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____host;
}
constexpr void System::Net::TlsStream::__cordl_internal_set__host(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____host = value;
}
constexpr ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*& System::Net::TlsStream::__cordl_internal_get__clientCertificates() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clientCertificates;
}
constexpr ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* const& System::Net::TlsStream::__cordl_internal_get__clientCertificates() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clientCertificates;
}
constexpr void System::Net::TlsStream::__cordl_internal_set__clientCertificates(::System::Security::Cryptography::X509Certificates::X509CertificateCollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____clientCertificates = value;
}
inline void System::Net::TlsStream::_ctor(::System::Net::Sockets::NetworkStream* stream, ::System::Net::Sockets::Socket* socket, ::StringW host,
                                          ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* clientCertificates) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::TlsStream*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::System::Net::Sockets::NetworkStream*>(), ::i2c::type_of<::System::Net::Sockets::Socket*>(), ::i2c::type_of<::StringW>(),
                                                               ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509CertificateCollection*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, socket, host, clientCertificates);
}
inline void System::Net::TlsStream::AuthenticateAsClient() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::TlsStream*>(), { "AuthenticateAsClient", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::IAsyncResult* System::Net::TlsStream::BeginAuthenticateAsClient(::System::AsyncCallback* asyncCallback, ::System::Object* state) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Net::TlsStream*>(), { "BeginAuthenticateAsClient", {}, { ::i2c::type_of<::System::AsyncCallback*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, asyncCallback, state);
}
inline void System::Net::TlsStream::EndAuthenticateAsClient(::System::IAsyncResult* asyncResult) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::TlsStream*>(), { "EndAuthenticateAsClient", {}, { ::i2c::type_of<::System::IAsyncResult*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, asyncResult);
}
inline ::System::IAsyncResult* System::Net::TlsStream::BeginWrite(::ArrayW<uint8_t> buffer, int32_t offset, int32_t size, ::System::AsyncCallback* callback, ::System::Object* state) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::TlsStream*>(), 29 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, buffer, offset, size, callback, state);
}
inline void System::Net::TlsStream::EndWrite(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::TlsStream*>(), 30 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline void System::Net::TlsStream::Write(::ArrayW<uint8_t> buffer, int32_t offset, int32_t size) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::TlsStream*>(), 38 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, offset, size);
}
inline int32_t System::Net::TlsStream::Read(::ArrayW<uint8_t> buffer, int32_t offset, int32_t size) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::TlsStream*>(), 35 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, offset, size);
}
inline ::System::IAsyncResult* System::Net::TlsStream::BeginRead(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count, ::System::AsyncCallback* callback, ::System::Object* state) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::TlsStream*>(), 25 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, buffer, offset, count, callback, state);
}
inline int32_t System::Net::TlsStream::EndRead(::System::IAsyncResult* asyncResult) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::TlsStream*>(), 26 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, asyncResult);
}
inline void System::Net::TlsStream::Close() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::TlsStream*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Net::TlsStream* System::Net::TlsStream::New_ctor(::System::Net::Sockets::NetworkStream* stream, ::System::Net::Sockets::Socket* socket, ::StringW host,
                                                                  ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* clientCertificates) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::TlsStream*>(stream, socket, host, clientCertificates));
}
// Ctor Parameters []
constexpr ::System::Net::TlsStream::TlsStream() {}
