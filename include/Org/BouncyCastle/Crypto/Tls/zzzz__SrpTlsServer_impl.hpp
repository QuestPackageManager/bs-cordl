#pragma once
#include "Org/BouncyCastle/Crypto/Tls/zzzz__AbstractTlsServer_impl.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__SrpTlsServer_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsSrpLoginParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsKeyExchange_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsCipherFactory_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsCredentials_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsSrpIdentityManager_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsSignerCredentials_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::SrpTlsServer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::SrpTlsServer::*)(::Org::BouncyCastle::Crypto::Tls::TlsSrpIdentityManager*)>(
    &::Org::BouncyCastle::Crypto::Tls::SrpTlsServer::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xf97830;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::SrpTlsServer*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::TlsSrpIdentityManager*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::SrpTlsServer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::SrpTlsServer::*)(
    ::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory*, ::Org::BouncyCastle::Crypto::Tls::TlsSrpIdentityManager*)>(&::Org::BouncyCastle::Crypto::Tls::SrpTlsServer::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xf978b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::SrpTlsServer*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::TlsSrpIdentityManager*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::SrpTlsServer.GetDsaSignerCredentials
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::Tls::TlsSignerCredentials* (::Org::BouncyCastle::Crypto::Tls::SrpTlsServer::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::SrpTlsServer::GetDsaSignerCredentials)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xf978dc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::SrpTlsServer*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::SrpTlsServer*>::get(), 69));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::SrpTlsServer.GetRsaSignerCredentials
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::Tls::TlsSignerCredentials* (::Org::BouncyCastle::Crypto::Tls::SrpTlsServer::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::SrpTlsServer::GetRsaSignerCredentials)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xf97920;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::SrpTlsServer*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::SrpTlsServer*>::get(), 70));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::SrpTlsServer.GetCipherSuites
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<int32_t, ::Array<int32_t>*> (::Org::BouncyCastle::Crypto::Tls::SrpTlsServer::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::SrpTlsServer::GetCipherSuites)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xf97964;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::SrpTlsServer*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::SrpTlsServer*>::get(), 47));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::SrpTlsServer.ProcessClientExtensions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::SrpTlsServer::*)(::System::Collections::IDictionary*)>(
    &::Org::BouncyCastle::Crypto::Tls::SrpTlsServer::ProcessClientExtensions)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xf979d4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::SrpTlsServer*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::SrpTlsServer*>::get(), 56));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::SrpTlsServer.GetSelectedCipherSuite
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Tls::SrpTlsServer::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::SrpTlsServer::GetSelectedCipherSuite)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0xf97a08;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::SrpTlsServer*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::SrpTlsServer*>::get(), 58));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::SrpTlsServer.GetCredentials
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::Tls::TlsCredentials* (::Org::BouncyCastle::Crypto::Tls::SrpTlsServer::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::SrpTlsServer::GetCredentials)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xf97b34;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::SrpTlsServer*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::SrpTlsServer*>::get(), 62));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::SrpTlsServer.GetKeyExchange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange* (::Org::BouncyCastle::Crypto::Tls::SrpTlsServer::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::SrpTlsServer::GetKeyExchange)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xf97c1c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::SrpTlsServer*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::SrpTlsServer*>::get(), 64));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::SrpTlsServer.CreateSrpKeyExchange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange* (::Org::BouncyCastle::Crypto::Tls::SrpTlsServer::*)(int32_t)>(
    &::Org::BouncyCastle::Crypto::Tls::SrpTlsServer::CreateSrpKeyExchange)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xf97cdc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::SrpTlsServer*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::SrpTlsServer*>::get(), 71));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsSrpIdentityManager*& Org::BouncyCastle::Crypto::Tls::SrpTlsServer::__get_mSrpIdentityManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mSrpIdentityManager;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsSrpIdentityManager*> const& Org::BouncyCastle::Crypto::Tls::SrpTlsServer::__get_mSrpIdentityManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mSrpIdentityManager;
}
constexpr void Org::BouncyCastle::Crypto::Tls::SrpTlsServer::__set_mSrpIdentityManager(::Org::BouncyCastle::Crypto::Tls::TlsSrpIdentityManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mSrpIdentityManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Org::BouncyCastle::Crypto::Tls::SrpTlsServer::__get_mSrpIdentity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mSrpIdentity;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Org::BouncyCastle::Crypto::Tls::SrpTlsServer::__get_mSrpIdentity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mSrpIdentity;
}
constexpr void Org::BouncyCastle::Crypto::Tls::SrpTlsServer::__set_mSrpIdentity(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mSrpIdentity)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters*& Org::BouncyCastle::Crypto::Tls::SrpTlsServer::__get_mLoginParameters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mLoginParameters;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters*> const& Org::BouncyCastle::Crypto::Tls::SrpTlsServer::__get_mLoginParameters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mLoginParameters;
}
constexpr void Org::BouncyCastle::Crypto::Tls::SrpTlsServer::__set_mLoginParameters(::Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mLoginParameters)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Org::BouncyCastle::Crypto::Tls::SrpTlsServer* Org::BouncyCastle::Crypto::Tls::SrpTlsServer::New_ctor(::Org::BouncyCastle::Crypto::Tls::TlsSrpIdentityManager* srpIdentityManager) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Crypto::Tls::SrpTlsServer*>(srpIdentityManager));
}
inline void Org::BouncyCastle::Crypto::Tls::SrpTlsServer::_ctor(::Org::BouncyCastle::Crypto::Tls::TlsSrpIdentityManager* srpIdentityManager) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::SrpTlsServer*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::TlsSrpIdentityManager*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, srpIdentityManager);
}
inline ::Org::BouncyCastle::Crypto::Tls::SrpTlsServer* Org::BouncyCastle::Crypto::Tls::SrpTlsServer::New_ctor(::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory* cipherFactory,
                                                                                                              ::Org::BouncyCastle::Crypto::Tls::TlsSrpIdentityManager* srpIdentityManager) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Crypto::Tls::SrpTlsServer*>(cipherFactory, srpIdentityManager));
}
inline void Org::BouncyCastle::Crypto::Tls::SrpTlsServer::_ctor(::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory* cipherFactory,
                                                                ::Org::BouncyCastle::Crypto::Tls::TlsSrpIdentityManager* srpIdentityManager) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::SrpTlsServer*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::TlsSrpIdentityManager*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cipherFactory, srpIdentityManager);
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsSignerCredentials* Org::BouncyCastle::Crypto::Tls::SrpTlsServer::GetDsaSignerCredentials() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::SrpTlsServer*>::get(),
                                                                             "GetDsaSignerCredentials", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::TlsSignerCredentials*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsSignerCredentials* Org::BouncyCastle::Crypto::Tls::SrpTlsServer::GetRsaSignerCredentials() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::SrpTlsServer*>::get(),
                                                                             "GetRsaSignerCredentials", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::TlsSignerCredentials*, false>(this, ___internal_method);
}
inline ::ArrayW<int32_t, ::Array<int32_t>*> Org::BouncyCastle::Crypto::Tls::SrpTlsServer::GetCipherSuites() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::SrpTlsServer*>::get(),
                                                                             "GetCipherSuites", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t, ::Array<int32_t>*>, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Tls::SrpTlsServer::ProcessClientExtensions(::System::Collections::IDictionary* clientExtensions) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::SrpTlsServer*>::get(), "ProcessClientExtensions",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IDictionary*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, clientExtensions);
}
inline int32_t Org::BouncyCastle::Crypto::Tls::SrpTlsServer::GetSelectedCipherSuite() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::SrpTlsServer*>::get(),
                                                                             "GetSelectedCipherSuite", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsCredentials* Org::BouncyCastle::Crypto::Tls::SrpTlsServer::GetCredentials() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::SrpTlsServer*>::get(),
                                                                             "GetCredentials", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::TlsCredentials*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange* Org::BouncyCastle::Crypto::Tls::SrpTlsServer::GetKeyExchange() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::SrpTlsServer*>::get(),
                                                                             "GetKeyExchange", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange* Org::BouncyCastle::Crypto::Tls::SrpTlsServer::CreateSrpKeyExchange(int32_t keyExchange) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::SrpTlsServer*>::get(), "CreateSrpKeyExchange",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange*, false>(this, ___internal_method, keyExchange);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Tls::SrpTlsServer::SrpTlsServer() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
