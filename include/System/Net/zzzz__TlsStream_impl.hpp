#pragma once
#include "System/Net/Sockets/zzzz__NetworkStream_impl.hpp"
#include "System/Net/zzzz__TlsStream_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509CertificateCollection_def.hpp"
#include "System/Net/Security/zzzz__SslStream_def.hpp"
#include "System/Net/Sockets/zzzz__Socket_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/Net/Sockets/zzzz__NetworkStream_def.hpp"
//  Writing Method size for method: ::System::Net::TlsStream._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::TlsStream::*)(::System::Net::Sockets::NetworkStream*, ::System::Net::Sockets::Socket*, ::StringW,
                                                                                                                     ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*)>(
    &::System::Net::TlsStream::_ctor)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x298a260;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TlsStream*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::NetworkStream*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::Socket*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509CertificateCollection*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::TlsStream.AuthenticateAsClient
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::TlsStream::*)()>(&::System::Net::TlsStream::AuthenticateAsClient)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x298a334;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TlsStream*>::get(), "AuthenticateAsClient",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::TlsStream.BeginAuthenticateAsClient
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::System::Net::TlsStream::*)(::System::AsyncCallback*, ::System::Object*)>(
    &::System::Net::TlsStream::BeginAuthenticateAsClient)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x298a434;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TlsStream*>::get(), "BeginAuthenticateAsClient", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::TlsStream.EndAuthenticateAsClient
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::TlsStream::*)(::System::IAsyncResult*)>(&::System::Net::TlsStream::EndAuthenticateAsClient)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x298a54c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TlsStream*>::get(), "EndAuthenticateAsClient", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::TlsStream.BeginWrite
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::System::Net::TlsStream::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t, ::System::AsyncCallback*, ::System::Object*)>(&::System::Net::TlsStream::BeginWrite)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x298a570;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TlsStream*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TlsStream*>::get(), 29));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::TlsStream.EndWrite
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::TlsStream::*)(::System::IAsyncResult*)>(&::System::Net::TlsStream::EndWrite)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x298a594;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TlsStream*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TlsStream*>::get(), 30));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::TlsStream.Write
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::TlsStream::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(
    &::System::Net::TlsStream::Write)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x298a5b8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TlsStream*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TlsStream*>::get(), 38));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::TlsStream.Read
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Net::TlsStream::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(
    &::System::Net::TlsStream::Read)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x298a5dc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TlsStream*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TlsStream*>::get(), 35));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::TlsStream.BeginRead
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::System::Net::TlsStream::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t, ::System::AsyncCallback*, ::System::Object*)>(&::System::Net::TlsStream::BeginRead)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x298a600;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TlsStream*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TlsStream*>::get(), 25));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::TlsStream.EndRead
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Net::TlsStream::*)(::System::IAsyncResult*)>(&::System::Net::TlsStream::EndRead)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x298a624;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TlsStream*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TlsStream*>::get(), 26));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::TlsStream.Close
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::TlsStream::*)()>(&::System::Net::TlsStream::Close)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x298a648;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TlsStream*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TlsStream*>::get(), 21));
    return ___internal_method;
  }
};
constexpr ::System::Net::Security::SslStream*& System::Net::TlsStream::__get__sslStream() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sslStream;
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::Security::SslStream*> const& System::Net::TlsStream::__get__sslStream() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sslStream;
}
constexpr void System::Net::TlsStream::__set__sslStream(::System::Net::Security::SslStream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____sslStream)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Net::TlsStream::__get__host() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____host;
}
constexpr ::StringW const& System::Net::TlsStream::__get__host() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____host;
}
constexpr void System::Net::TlsStream::__set__host(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____host)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*& System::Net::TlsStream::__get__clientCertificates() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clientCertificates;
}
constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::X509Certificates::X509CertificateCollection*> const& System::Net::TlsStream::__get__clientCertificates() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clientCertificates;
}
constexpr void System::Net::TlsStream::__set__clientCertificates(::System::Security::Cryptography::X509Certificates::X509CertificateCollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____clientCertificates)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Net::TlsStream* System::Net::TlsStream::New_ctor(::System::Net::Sockets::NetworkStream* stream, ::System::Net::Sockets::Socket* socket, ::StringW host,
                                                                  ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* clientCertificates) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Net::TlsStream*>(stream, socket, host, clientCertificates));
}
inline void System::Net::TlsStream::_ctor(::System::Net::Sockets::NetworkStream* stream, ::System::Net::Sockets::Socket* socket, ::StringW host,
                                          ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* clientCertificates) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TlsStream*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::NetworkStream*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::Socket*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509CertificateCollection*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stream, socket, host, clientCertificates);
}
inline void System::Net::TlsStream::AuthenticateAsClient() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TlsStream*>::get(), "AuthenticateAsClient",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::IAsyncResult* System::Net::TlsStream::BeginAuthenticateAsClient(::System::AsyncCallback* asyncCallback, ::System::Object* state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TlsStream*>::get(), "BeginAuthenticateAsClient", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, asyncCallback, state);
}
inline void System::Net::TlsStream::EndAuthenticateAsClient(::System::IAsyncResult* asyncResult) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TlsStream*>::get(), "EndAuthenticateAsClient", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, asyncResult);
}
inline ::System::IAsyncResult* System::Net::TlsStream::BeginWrite(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t size, ::System::AsyncCallback* callback,
                                                                  ::System::Object* state) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TlsStream*>::get(), "BeginWrite", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, buffer, offset, size, callback, state);
}
inline void System::Net::TlsStream::EndWrite(::System::IAsyncResult* result) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TlsStream*>::get(), "EndWrite", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
inline void System::Net::TlsStream::Write(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t size) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TlsStream*>::get(), "Write", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, buffer, offset, size);
}
inline int32_t System::Net::TlsStream::Read(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t size) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TlsStream*>::get(), "Read", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, buffer, offset, size);
}
inline ::System::IAsyncResult* System::Net::TlsStream::BeginRead(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count, ::System::AsyncCallback* callback,
                                                                 ::System::Object* state) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TlsStream*>::get(), "BeginRead", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, buffer, offset, count, callback, state);
}
inline int32_t System::Net::TlsStream::EndRead(::System::IAsyncResult* asyncResult) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TlsStream*>::get(), "EndRead", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, asyncResult);
}
inline void System::Net::TlsStream::Close() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TlsStream*>::get(), "Close", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Net::TlsStream::TlsStream() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
