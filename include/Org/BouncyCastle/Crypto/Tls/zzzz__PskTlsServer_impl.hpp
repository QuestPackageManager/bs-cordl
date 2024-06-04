#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/PskTlsServer.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__AbstractTlsServer_impl.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__PskTlsServer_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__DHParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsCipherFactory_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsCredentials_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsEncryptionCredentials_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsKeyExchange_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsPskIdentityManager_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::PskTlsServer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::PskTlsServer::*)(::Org::BouncyCastle::Crypto::Tls::TlsPskIdentityManager*)>(
    &::Org::BouncyCastle::Crypto::Tls::PskTlsServer::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x11f8318;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::PskTlsServer*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::TlsPskIdentityManager*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::PskTlsServer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::PskTlsServer::*)(
    ::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory*, ::Org::BouncyCastle::Crypto::Tls::TlsPskIdentityManager*)>(&::Org::BouncyCastle::Crypto::Tls::PskTlsServer::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x11f8394;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::PskTlsServer*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::TlsPskIdentityManager*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::PskTlsServer.GetRsaEncryptionCredentials
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::Tls::TlsEncryptionCredentials* (::Org::BouncyCastle::Crypto::Tls::PskTlsServer::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::PskTlsServer::GetRsaEncryptionCredentials)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x11f83bc;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::PskTlsServer*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::PskTlsServer*>::get(), 69));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::PskTlsServer.GetDHParameters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::Parameters::DHParameters* (::Org::BouncyCastle::Crypto::Tls::PskTlsServer::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::PskTlsServer::GetDHParameters)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x11f8400;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::PskTlsServer*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::PskTlsServer*>::get(), 70));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::PskTlsServer.GetCipherSuites
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<int32_t, ::Array<int32_t>*> (::Org::BouncyCastle::Crypto::Tls::PskTlsServer::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::PskTlsServer::GetCipherSuites)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x11f8458;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::PskTlsServer*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::PskTlsServer*>::get(), 47));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::PskTlsServer.GetCredentials
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::Tls::TlsCredentials* (::Org::BouncyCastle::Crypto::Tls::PskTlsServer::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::PskTlsServer::GetCredentials)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x11f84c8;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::PskTlsServer*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::PskTlsServer*>::get(), 62));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::PskTlsServer.GetKeyExchange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange* (::Org::BouncyCastle::Crypto::Tls::PskTlsServer::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::PskTlsServer::GetKeyExchange)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x11f85a4;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::PskTlsServer*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::PskTlsServer*>::get(), 64));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::PskTlsServer.CreatePskKeyExchange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange* (::Org::BouncyCastle::Crypto::Tls::PskTlsServer::*)(int32_t)>(
    &::Org::BouncyCastle::Crypto::Tls::PskTlsServer::CreatePskKeyExchange)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x11f866c;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::PskTlsServer*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::PskTlsServer*>::get(), 71));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsPskIdentityManager*& Org::BouncyCastle::Crypto::Tls::PskTlsServer::__cordl_internal_get_mPskIdentityManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mPskIdentityManager;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsPskIdentityManager*> const&
Org::BouncyCastle::Crypto::Tls::PskTlsServer::__cordl_internal_get_mPskIdentityManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mPskIdentityManager;
}
constexpr void Org::BouncyCastle::Crypto::Tls::PskTlsServer::__cordl_internal_set_mPskIdentityManager(::Org::BouncyCastle::Crypto::Tls::TlsPskIdentityManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mPskIdentityManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Org::BouncyCastle::Crypto::Tls::PskTlsServer* Org::BouncyCastle::Crypto::Tls::PskTlsServer::New_ctor(::Org::BouncyCastle::Crypto::Tls::TlsPskIdentityManager* pskIdentityManager) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::Tls::PskTlsServer*>(pskIdentityManager));
}
inline void Org::BouncyCastle::Crypto::Tls::PskTlsServer::_ctor(::Org::BouncyCastle::Crypto::Tls::TlsPskIdentityManager* pskIdentityManager) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::PskTlsServer*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::TlsPskIdentityManager*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pskIdentityManager);
}
inline ::Org::BouncyCastle::Crypto::Tls::PskTlsServer* Org::BouncyCastle::Crypto::Tls::PskTlsServer::New_ctor(::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory* cipherFactory,
                                                                                                              ::Org::BouncyCastle::Crypto::Tls::TlsPskIdentityManager* pskIdentityManager) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::Tls::PskTlsServer*>(cipherFactory, pskIdentityManager));
}
inline void Org::BouncyCastle::Crypto::Tls::PskTlsServer::_ctor(::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory* cipherFactory,
                                                                ::Org::BouncyCastle::Crypto::Tls::TlsPskIdentityManager* pskIdentityManager) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::PskTlsServer*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::TlsPskIdentityManager*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cipherFactory, pskIdentityManager);
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsEncryptionCredentials* Org::BouncyCastle::Crypto::Tls::PskTlsServer::GetRsaEncryptionCredentials() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::PskTlsServer*>::get(), 69)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::TlsEncryptionCredentials*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Parameters::DHParameters* Org::BouncyCastle::Crypto::Tls::PskTlsServer::GetDHParameters() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::PskTlsServer*>::get(), 70)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Parameters::DHParameters*, false>(this, ___internal_method);
}
inline ::ArrayW<int32_t, ::Array<int32_t>*> Org::BouncyCastle::Crypto::Tls::PskTlsServer::GetCipherSuites() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::PskTlsServer*>::get(), 47)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t, ::Array<int32_t>*>, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsCredentials* Org::BouncyCastle::Crypto::Tls::PskTlsServer::GetCredentials() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::PskTlsServer*>::get(), 62)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::TlsCredentials*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange* Org::BouncyCastle::Crypto::Tls::PskTlsServer::GetKeyExchange() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::PskTlsServer*>::get(), 64)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange* Org::BouncyCastle::Crypto::Tls::PskTlsServer::CreatePskKeyExchange(int32_t keyExchange) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::PskTlsServer*>::get(), 71)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange*, false>(this, ___internal_method, keyExchange);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Tls::PskTlsServer::PskTlsServer() {}
