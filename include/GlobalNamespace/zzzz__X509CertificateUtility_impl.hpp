#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__X509CertificateUtility_def.hpp"
#include "GlobalNamespace/zzzz__ICertificateEncryptionProvider_def.hpp"
#include "GlobalNamespace/zzzz__X509CertificateUtility_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__RsaPrivateCrtKeyParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ISigner_def.hpp"
#include "Org/BouncyCastle/OpenSsl/zzzz__IPasswordFinder_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509CertificateParser_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate2_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509ChainStatus_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__X509CertificateUtility__PasswordFinder._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__X509CertificateUtility__PasswordFinder::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::GlobalNamespace::__X509CertificateUtility__PasswordFinder::_ctor)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xecf10c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__X509CertificateUtility__PasswordFinder*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__X509CertificateUtility__PasswordFinder._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__X509CertificateUtility__PasswordFinder::*)(::StringW)>(
    &::GlobalNamespace::__X509CertificateUtility__PasswordFinder::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xecf1c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__X509CertificateUtility__PasswordFinder*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__X509CertificateUtility__PasswordFinder.GetPassword
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<char16_t, ::Array<char16_t>*> (::GlobalNamespace::__X509CertificateUtility__PasswordFinder::*)()>(
    &::GlobalNamespace::__X509CertificateUtility__PasswordFinder::GetPassword)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xecf200;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__X509CertificateUtility__PasswordFinder*>::get(), "GetPassword",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Org::BouncyCastle::OpenSsl::IPasswordFinder"
constexpr GlobalNamespace::__X509CertificateUtility__PasswordFinder::operator ::Org::BouncyCastle::OpenSsl::IPasswordFinder*() noexcept {
  return static_cast<::Org::BouncyCastle::OpenSsl::IPasswordFinder*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::OpenSsl::IPasswordFinder"
constexpr ::Org::BouncyCastle::OpenSsl::IPasswordFinder* GlobalNamespace::__X509CertificateUtility__PasswordFinder::i___Org__BouncyCastle__OpenSsl__IPasswordFinder() noexcept {
  return static_cast<::Org::BouncyCastle::OpenSsl::IPasswordFinder*>(static_cast<void*>(this));
}
constexpr ::ArrayW<char16_t, ::Array<char16_t>*>& GlobalNamespace::__X509CertificateUtility__PasswordFinder::__cordl_internal_get__password() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____password;
}
constexpr ::ArrayW<char16_t, ::Array<char16_t>*> const& GlobalNamespace::__X509CertificateUtility__PasswordFinder::__cordl_internal_get__password() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____password;
}
constexpr void GlobalNamespace::__X509CertificateUtility__PasswordFinder::__cordl_internal_set__password(::ArrayW<char16_t, ::Array<char16_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____password)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__X509CertificateUtility__PasswordFinder* GlobalNamespace::__X509CertificateUtility__PasswordFinder::New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> password) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__X509CertificateUtility__PasswordFinder*>(password));
}
inline void GlobalNamespace::__X509CertificateUtility__PasswordFinder::_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> password) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__X509CertificateUtility__PasswordFinder*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, password);
}
inline ::GlobalNamespace::__X509CertificateUtility__PasswordFinder* GlobalNamespace::__X509CertificateUtility__PasswordFinder::New_ctor(::StringW password) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__X509CertificateUtility__PasswordFinder*>(password));
}
inline void GlobalNamespace::__X509CertificateUtility__PasswordFinder::_ctor(::StringW password) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__X509CertificateUtility__PasswordFinder*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, password);
}
inline ::ArrayW<char16_t, ::Array<char16_t>*> GlobalNamespace::__X509CertificateUtility__PasswordFinder::GetPassword() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__X509CertificateUtility__PasswordFinder*>::get(), "GetPassword",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<char16_t, ::Array<char16_t>*>, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__X509CertificateUtility__PasswordFinder::__X509CertificateUtility__PasswordFinder() {}
//  Writing Method size for method: ::GlobalNamespace::__X509CertificateUtility__RSACertificateEncryptionProvider._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__X509CertificateUtility__RSACertificateEncryptionProvider::*)(
    ::Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters*)>(&::GlobalNamespace::__X509CertificateUtility__RSACertificateEncryptionProvider::_ctor)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0xecf208;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__X509CertificateUtility__RSACertificateEncryptionProvider*>::get(), ".ctor",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__X509CertificateUtility__RSACertificateEncryptionProvider.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__X509CertificateUtility__RSACertificateEncryptionProvider::*)()>(
    &::GlobalNamespace::__X509CertificateUtility__RSACertificateEncryptionProvider::Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xecf314;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__X509CertificateUtility__RSACertificateEncryptionProvider*>::get(),
                                                 "Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__X509CertificateUtility__RSACertificateEncryptionProvider.SignData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::GlobalNamespace::__X509CertificateUtility__RSACertificateEncryptionProvider::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(
        &::GlobalNamespace::__X509CertificateUtility__RSACertificateEncryptionProvider::SignData)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0xecf318;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__X509CertificateUtility__RSACertificateEncryptionProvider*>::get(), "SignData",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::ICertificateEncryptionProvider"
constexpr GlobalNamespace::__X509CertificateUtility__RSACertificateEncryptionProvider::operator ::GlobalNamespace::ICertificateEncryptionProvider*() noexcept {
  return static_cast<::GlobalNamespace::ICertificateEncryptionProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ICertificateEncryptionProvider"
constexpr ::GlobalNamespace::ICertificateEncryptionProvider*
GlobalNamespace::__X509CertificateUtility__RSACertificateEncryptionProvider::i___GlobalNamespace__ICertificateEncryptionProvider() noexcept {
  return static_cast<::GlobalNamespace::ICertificateEncryptionProvider*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::__X509CertificateUtility__RSACertificateEncryptionProvider::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::__X509CertificateUtility__RSACertificateEncryptionProvider::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr ::Org::BouncyCastle::Crypto::ISigner*& GlobalNamespace::__X509CertificateUtility__RSACertificateEncryptionProvider::__cordl_internal_get__signer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____signer;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::ISigner*> const&
GlobalNamespace::__X509CertificateUtility__RSACertificateEncryptionProvider::__cordl_internal_get__signer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____signer;
}
constexpr void GlobalNamespace::__X509CertificateUtility__RSACertificateEncryptionProvider::__cordl_internal_set__signer(::Org::BouncyCastle::Crypto::ISigner* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____signer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__X509CertificateUtility__RSACertificateEncryptionProvider*
GlobalNamespace::__X509CertificateUtility__RSACertificateEncryptionProvider::New_ctor(::Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters* privateKey) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__X509CertificateUtility__RSACertificateEncryptionProvider*>(privateKey));
}
inline void GlobalNamespace::__X509CertificateUtility__RSACertificateEncryptionProvider::_ctor(::Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters* privateKey) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__X509CertificateUtility__RSACertificateEncryptionProvider*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, privateKey);
}
inline void GlobalNamespace::__X509CertificateUtility__RSACertificateEncryptionProvider::Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__X509CertificateUtility__RSACertificateEncryptionProvider*>::get(), "Dispose",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GlobalNamespace::__X509CertificateUtility__RSACertificateEncryptionProvider::SignData(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t offset,
                                                                                                                                  int32_t length) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__X509CertificateUtility__RSACertificateEncryptionProvider*>::get(), "SignData",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method, data, offset, length);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__X509CertificateUtility__RSACertificateEncryptionProvider::__X509CertificateUtility__RSACertificateEncryptionProvider() {}
//  Writing Method size for method: ::GlobalNamespace::__X509CertificateUtility___GetCertificateList_d__9._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__X509CertificateUtility___GetCertificateList_d__9::*)(int32_t)>(
    &::GlobalNamespace::__X509CertificateUtility___GetCertificateList_d__9::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xecf4ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__X509CertificateUtility___GetCertificateList_d__9*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__X509CertificateUtility___GetCertificateList_d__9.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__X509CertificateUtility___GetCertificateList_d__9::*)()>(
    &::GlobalNamespace::__X509CertificateUtility___GetCertificateList_d__9::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xecf4e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__X509CertificateUtility___GetCertificateList_d__9*>::get(),
                                                 "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__X509CertificateUtility___GetCertificateList_d__9.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__X509CertificateUtility___GetCertificateList_d__9::*)()>(
    &::GlobalNamespace::__X509CertificateUtility___GetCertificateList_d__9::MoveNext)> {
  constexpr static std::size_t size = 0x540;
  constexpr static std::size_t addrs = 0xecf4fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__X509CertificateUtility___GetCertificateList_d__9*>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__X509CertificateUtility___GetCertificateList_d__9.__m__Finally1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__X509CertificateUtility___GetCertificateList_d__9::*)()>(
    &::GlobalNamespace::__X509CertificateUtility___GetCertificateList_d__9::__m__Finally1)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xecfa3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__X509CertificateUtility___GetCertificateList_d__9*>::get(), "<>m__Finally1",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::GlobalNamespace::__X509CertificateUtility___GetCertificateList_d__9.System_Collections_Generic_IEnumerator_System_Security_Cryptography_X509Certificates_X509Certificate2__get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Security::Cryptography::X509Certificates::X509Certificate2* (::GlobalNamespace::__X509CertificateUtility___GetCertificateList_d__9::*)()>(
        &::GlobalNamespace::__X509CertificateUtility___GetCertificateList_d__9::System_Collections_Generic_IEnumerator_System_Security_Cryptography_X509Certificates_X509Certificate2__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xecfaf8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__X509CertificateUtility___GetCertificateList_d__9*>::get(),
                                                 "System.Collections.Generic.IEnumerator<System.Security.Cryptography.X509Certificates.X509Certificate2>.get_Current",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__X509CertificateUtility___GetCertificateList_d__9.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__X509CertificateUtility___GetCertificateList_d__9::*)()>(
    &::GlobalNamespace::__X509CertificateUtility___GetCertificateList_d__9::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xecfb00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__X509CertificateUtility___GetCertificateList_d__9*>::get(),
                                                 "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__X509CertificateUtility___GetCertificateList_d__9.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::__X509CertificateUtility___GetCertificateList_d__9::*)()>(
    &::GlobalNamespace::__X509CertificateUtility___GetCertificateList_d__9::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xecfb40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__X509CertificateUtility___GetCertificateList_d__9*>::get(),
                                                 "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::GlobalNamespace::__X509CertificateUtility___GetCertificateList_d__9.System_Collections_Generic_IEnumerable_System_Security_Cryptography_X509Certificates_X509Certificate2__GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::System::Collections::Generic::IEnumerator_1<::System::Security::Cryptography::X509Certificates::X509Certificate2*>* (::GlobalNamespace::__X509CertificateUtility___GetCertificateList_d__9::*)()>(
    &::GlobalNamespace::__X509CertificateUtility___GetCertificateList_d__9::System_Collections_Generic_IEnumerable_System_Security_Cryptography_X509Certificates_X509Certificate2__GetEnumerator)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xecfb48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__X509CertificateUtility___GetCertificateList_d__9*>::get(),
                                                 "System.Collections.Generic.IEnumerable<System.Security.Cryptography.X509Certificates.X509Certificate2>.GetEnumerator",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__X509CertificateUtility___GetCertificateList_d__9.System_Collections_IEnumerable_GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::__X509CertificateUtility___GetCertificateList_d__9::*)()>(
    &::GlobalNamespace::__X509CertificateUtility___GetCertificateList_d__9::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xecfbf4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__X509CertificateUtility___GetCertificateList_d__9*>::get(),
                                                 "System.Collections.IEnumerable.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Security::Cryptography::X509Certificates::X509Certificate2*>"
constexpr GlobalNamespace::__X509CertificateUtility___GetCertificateList_d__9::operator ::System::Collections::Generic::IEnumerable_1<
    ::System::Security::Cryptography::X509Certificates::X509Certificate2*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::System::Security::Cryptography::X509Certificates::X509Certificate2*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Security::Cryptography::X509Certificates::X509Certificate2*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::System::Security::Cryptography::X509Certificates::X509Certificate2*>*
GlobalNamespace::__X509CertificateUtility___GetCertificateList_d__9::i___System__Collections__Generic__IEnumerable_1___System__Security__Cryptography__X509Certificates__X509Certificate2__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::System::Security::Cryptography::X509Certificates::X509Certificate2*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr GlobalNamespace::__X509CertificateUtility___GetCertificateList_d__9::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* GlobalNamespace::__X509CertificateUtility___GetCertificateList_d__9::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Security::Cryptography::X509Certificates::X509Certificate2*>"
constexpr GlobalNamespace::__X509CertificateUtility___GetCertificateList_d__9::operator ::System::Collections::Generic::IEnumerator_1<
    ::System::Security::Cryptography::X509Certificates::X509Certificate2*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Security::Cryptography::X509Certificates::X509Certificate2*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Security::Cryptography::X509Certificates::X509Certificate2*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Security::Cryptography::X509Certificates::X509Certificate2*>*
GlobalNamespace::__X509CertificateUtility___GetCertificateList_d__9::i___System__Collections__Generic__IEnumerator_1___System__Security__Cryptography__X509Certificates__X509Certificate2__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Security::Cryptography::X509Certificates::X509Certificate2*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr GlobalNamespace::__X509CertificateUtility___GetCertificateList_d__9::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::__X509CertificateUtility___GetCertificateList_d__9::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::__X509CertificateUtility___GetCertificateList_d__9::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::__X509CertificateUtility___GetCertificateList_d__9::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr int32_t& GlobalNamespace::__X509CertificateUtility___GetCertificateList_d__9::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::__X509CertificateUtility___GetCertificateList_d__9::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void GlobalNamespace::__X509CertificateUtility___GetCertificateList_d__9::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::System::Security::Cryptography::X509Certificates::X509Certificate2*& GlobalNamespace::__X509CertificateUtility___GetCertificateList_d__9::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::X509Certificates::X509Certificate2*> const&
GlobalNamespace::__X509CertificateUtility___GetCertificateList_d__9::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void GlobalNamespace::__X509CertificateUtility___GetCertificateList_d__9::__cordl_internal_set___2__current(::System::Security::Cryptography::X509Certificates::X509Certificate2* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::__X509CertificateUtility___GetCertificateList_d__9::__cordl_internal_get___l__initialThreadId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
constexpr int32_t const& GlobalNamespace::__X509CertificateUtility___GetCertificateList_d__9::__cordl_internal_get___l__initialThreadId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
constexpr void GlobalNamespace::__X509CertificateUtility___GetCertificateList_d__9::__cordl_internal_set___l__initialThreadId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____l__initialThreadId = value;
}
constexpr ::StringW& GlobalNamespace::__X509CertificateUtility___GetCertificateList_d__9::__cordl_internal_get_certificatePem() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certificatePem;
}
constexpr ::StringW const& GlobalNamespace::__X509CertificateUtility___GetCertificateList_d__9::__cordl_internal_get_certificatePem() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certificatePem;
}
constexpr void GlobalNamespace::__X509CertificateUtility___GetCertificateList_d__9::__cordl_internal_set_certificatePem(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___certificatePem)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::__X509CertificateUtility___GetCertificateList_d__9::__cordl_internal_get___3__certificatePem() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__certificatePem;
}
constexpr ::StringW const& GlobalNamespace::__X509CertificateUtility___GetCertificateList_d__9::__cordl_internal_get___3__certificatePem() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__certificatePem;
}
constexpr void GlobalNamespace::__X509CertificateUtility___GetCertificateList_d__9::__cordl_internal_set___3__certificatePem(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____3__certificatePem)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::__X509CertificateUtility___GetCertificateList_d__9::__cordl_internal_get_certificateChainPem() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certificateChainPem;
}
constexpr ::StringW const& GlobalNamespace::__X509CertificateUtility___GetCertificateList_d__9::__cordl_internal_get_certificateChainPem() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certificateChainPem;
}
constexpr void GlobalNamespace::__X509CertificateUtility___GetCertificateList_d__9::__cordl_internal_set_certificateChainPem(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___certificateChainPem)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::__X509CertificateUtility___GetCertificateList_d__9::__cordl_internal_get___3__certificateChainPem() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__certificateChainPem;
}
constexpr ::StringW const& GlobalNamespace::__X509CertificateUtility___GetCertificateList_d__9::__cordl_internal_get___3__certificateChainPem() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__certificateChainPem;
}
constexpr void GlobalNamespace::__X509CertificateUtility___GetCertificateList_d__9::__cordl_internal_set___3__certificateChainPem(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____3__certificateChainPem)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::X509::X509CertificateParser*& GlobalNamespace::__X509CertificateUtility___GetCertificateList_d__9::__cordl_internal_get__x509CertificateParser_5__2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____x509CertificateParser_5__2;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::X509::X509CertificateParser*> const&
GlobalNamespace::__X509CertificateUtility___GetCertificateList_d__9::__cordl_internal_get__x509CertificateParser_5__2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____x509CertificateParser_5__2;
}
constexpr void GlobalNamespace::__X509CertificateUtility___GetCertificateList_d__9::__cordl_internal_set__x509CertificateParser_5__2(::Org::BouncyCastle::X509::X509CertificateParser* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____x509CertificateParser_5__2)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::IEnumerator*& GlobalNamespace::__X509CertificateUtility___GetCertificateList_d__9::__cordl_internal_get___7__wrap2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap2;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::IEnumerator*> const& GlobalNamespace::__X509CertificateUtility___GetCertificateList_d__9::__cordl_internal_get___7__wrap2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap2;
}
constexpr void GlobalNamespace::__X509CertificateUtility___GetCertificateList_d__9::__cordl_internal_set___7__wrap2(::System::Collections::IEnumerator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____7__wrap2)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__X509CertificateUtility___GetCertificateList_d__9* GlobalNamespace::__X509CertificateUtility___GetCertificateList_d__9::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__X509CertificateUtility___GetCertificateList_d__9*>(__1__state));
}
inline void GlobalNamespace::__X509CertificateUtility___GetCertificateList_d__9::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__X509CertificateUtility___GetCertificateList_d__9*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::__X509CertificateUtility___GetCertificateList_d__9::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__X509CertificateUtility___GetCertificateList_d__9*>::get(),
                                               "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::__X509CertificateUtility___GetCertificateList_d__9::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__X509CertificateUtility___GetCertificateList_d__9*>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::__X509CertificateUtility___GetCertificateList_d__9::__m__Finally1() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__X509CertificateUtility___GetCertificateList_d__9*>::get(), "<>m__Finally1",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Security::Cryptography::X509Certificates::X509Certificate2*
GlobalNamespace::__X509CertificateUtility___GetCertificateList_d__9::System_Collections_Generic_IEnumerator_System_Security_Cryptography_X509Certificates_X509Certificate2__get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__X509CertificateUtility___GetCertificateList_d__9*>::get(),
                                               "System.Collections.Generic.IEnumerator<System.Security.Cryptography.X509Certificates.X509Certificate2>.get_Current",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509Certificate2*, false>(this, ___internal_method);
}
inline void GlobalNamespace::__X509CertificateUtility___GetCertificateList_d__9::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__X509CertificateUtility___GetCertificateList_d__9*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__X509CertificateUtility___GetCertificateList_d__9::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__X509CertificateUtility___GetCertificateList_d__9*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::System::Security::Cryptography::X509Certificates::X509Certificate2*>*
GlobalNamespace::__X509CertificateUtility___GetCertificateList_d__9::System_Collections_Generic_IEnumerable_System_Security_Cryptography_X509Certificates_X509Certificate2__GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__X509CertificateUtility___GetCertificateList_d__9*>::get(),
                                               "System.Collections.Generic.IEnumerable<System.Security.Cryptography.X509Certificates.X509Certificate2>.GetEnumerator",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::System::Security::Cryptography::X509Certificates::X509Certificate2*>*, false>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::__X509CertificateUtility___GetCertificateList_d__9::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__X509CertificateUtility___GetCertificateList_d__9*>::get(),
                                               "System.Collections.IEnumerable.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__X509CertificateUtility___GetCertificateList_d__9::__X509CertificateUtility___GetCertificateList_d__9() {}
//  Writing Method size for method: ::GlobalNamespace::__X509CertificateUtility____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__X509CertificateUtility____c::*)()>(
    &::GlobalNamespace::__X509CertificateUtility____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xecfc5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__X509CertificateUtility____c*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__X509CertificateUtility____c._ValidateCertificateChainUnity_b__11_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::__X509CertificateUtility____c::*)(
    ::System::Security::Cryptography::X509Certificates::X509ChainStatus)>(&::GlobalNamespace::__X509CertificateUtility____c::_ValidateCertificateChainUnity_b__11_0)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xecfc64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__X509CertificateUtility____c*>::get(), "<ValidateCertificateChainUnity>b__11_0",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509ChainStatus>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__X509CertificateUtility____c._ValidateCertificateChainDotNet_b__12_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::__X509CertificateUtility____c::*)(
    ::System::Security::Cryptography::X509Certificates::X509ChainStatus)>(&::GlobalNamespace::__X509CertificateUtility____c::_ValidateCertificateChainDotNet_b__12_0)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xecfcc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__X509CertificateUtility____c*>::get(), "<ValidateCertificateChainDotNet>b__12_0",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509ChainStatus>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::__X509CertificateUtility____c::setStaticF___9(::GlobalNamespace::__X509CertificateUtility____c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::__X509CertificateUtility____c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__X509CertificateUtility____c*>::get>(
      std::forward<::GlobalNamespace::__X509CertificateUtility____c*>(value));
}
inline ::GlobalNamespace::__X509CertificateUtility____c* GlobalNamespace::__X509CertificateUtility____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::__X509CertificateUtility____c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__X509CertificateUtility____c*>::get>();
}
inline void GlobalNamespace::__X509CertificateUtility____c::setStaticF___9__11_0(::System::Func_2<::System::Security::Cryptography::X509Certificates::X509ChainStatus, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::System::Security::Cryptography::X509Certificates::X509ChainStatus, ::StringW>*, "<>9__11_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__X509CertificateUtility____c*>::get>(
      std::forward<::System::Func_2<::System::Security::Cryptography::X509Certificates::X509ChainStatus, ::StringW>*>(value));
}
inline ::System::Func_2<::System::Security::Cryptography::X509Certificates::X509ChainStatus, ::StringW>* GlobalNamespace::__X509CertificateUtility____c::getStaticF___9__11_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::System::Security::Cryptography::X509Certificates::X509ChainStatus, ::StringW>*, "<>9__11_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__X509CertificateUtility____c*>::get>();
}
inline void GlobalNamespace::__X509CertificateUtility____c::setStaticF___9__12_0(::System::Func_2<::System::Security::Cryptography::X509Certificates::X509ChainStatus, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::System::Security::Cryptography::X509Certificates::X509ChainStatus, ::StringW>*, "<>9__12_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__X509CertificateUtility____c*>::get>(
      std::forward<::System::Func_2<::System::Security::Cryptography::X509Certificates::X509ChainStatus, ::StringW>*>(value));
}
inline ::System::Func_2<::System::Security::Cryptography::X509Certificates::X509ChainStatus, ::StringW>* GlobalNamespace::__X509CertificateUtility____c::getStaticF___9__12_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::System::Security::Cryptography::X509Certificates::X509ChainStatus, ::StringW>*, "<>9__12_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__X509CertificateUtility____c*>::get>();
}
inline ::GlobalNamespace::__X509CertificateUtility____c* GlobalNamespace::__X509CertificateUtility____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__X509CertificateUtility____c*>());
}
inline void GlobalNamespace::__X509CertificateUtility____c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__X509CertificateUtility____c*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::__X509CertificateUtility____c::_ValidateCertificateChainUnity_b__11_0(::System::Security::Cryptography::X509Certificates::X509ChainStatus s) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__X509CertificateUtility____c*>::get(), "<ValidateCertificateChainUnity>b__11_0",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509ChainStatus>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, s);
}
inline ::StringW GlobalNamespace::__X509CertificateUtility____c::_ValidateCertificateChainDotNet_b__12_0(::System::Security::Cryptography::X509Certificates::X509ChainStatus s) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__X509CertificateUtility____c*>::get(), "<ValidateCertificateChainDotNet>b__12_0",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509ChainStatus>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, s);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__X509CertificateUtility____c::__X509CertificateUtility____c() {}
//  Writing Method size for method: ::GlobalNamespace::X509CertificateUtility.GetRootCertificates
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::System::Security::Cryptography::X509Certificates::X509Certificate2*, ::Array<::System::Security::Cryptography::X509Certificates::X509Certificate2*>*> (*)()>(
        &::GlobalNamespace::X509CertificateUtility::GetRootCertificates)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xeccc6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::X509CertificateUtility*>::get(),
                                                                               "GetRootCertificates", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::X509CertificateUtility.GetRootCertificatesRaw
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::GlobalNamespace::X509CertificateUtility::GetRootCertificatesRaw)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xeccda8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::X509CertificateUtility*>::get(),
                                                                               "GetRootCertificatesRaw", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::X509CertificateUtility.GetCertificateEncryptionProvider
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::ICertificateEncryptionProvider* (*)(::StringW, ::StringW)>(
    &::GlobalNamespace::X509CertificateUtility::GetCertificateEncryptionProvider)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xecce20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::X509CertificateUtility*>::get(), "GetCertificateEncryptionProvider", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::X509CertificateUtility.GetRSACertificateEncryptionProvider
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::GlobalNamespace::__X509CertificateUtility__RSACertificateEncryptionProvider* (*)(::StringW, ::GlobalNamespace::__X509CertificateUtility__PasswordFinder*)>(
        &::GlobalNamespace::X509CertificateUtility::GetRSACertificateEncryptionProvider)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0xeccec4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::X509CertificateUtility*>::get(), "GetRSACertificateEncryptionProvider", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__X509CertificateUtility__PasswordFinder*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::X509CertificateUtility.GetCertificateList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::IEnumerable_1<::System::Security::Cryptography::X509Certificates::X509Certificate2*>* (*)(::StringW, ::StringW)>(
        &::GlobalNamespace::X509CertificateUtility::GetCertificateList)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xeccd30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::X509CertificateUtility*>::get(), "GetCertificateList", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::X509CertificateUtility.ValidateCertificateChain
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::System::Security::Cryptography::X509Certificates::X509Certificate2*, ::ArrayW<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Array<::ArrayW<uint8_t, ::Array<uint8_t>*>>*>)>(
        &::GlobalNamespace::X509CertificateUtility::ValidateCertificateChain)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xecd0cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::X509CertificateUtility*>::get(), "ValidateCertificateChain", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509Certificate2*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Array<::ArrayW<uint8_t, ::Array<uint8_t>*>>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::X509CertificateUtility.ValidateCertificateChainUnity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::System::Security::Cryptography::X509Certificates::X509Certificate2*, ::ArrayW<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Array<::ArrayW<uint8_t, ::Array<uint8_t>*>>*>)>(
        &::GlobalNamespace::X509CertificateUtility::ValidateCertificateChainUnity)> {
  constexpr static std::size_t size = 0xa44;
  constexpr static std::size_t addrs = 0xecd130;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::X509CertificateUtility*>::get(), "ValidateCertificateChainUnity", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509Certificate2*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Array<::ArrayW<uint8_t, ::Array<uint8_t>*>>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::X509CertificateUtility.ValidateCertificateChainDotNet
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::System::Security::Cryptography::X509Certificates::X509Certificate2*, ::ArrayW<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Array<::ArrayW<uint8_t, ::Array<uint8_t>*>>*>)>(
        &::GlobalNamespace::X509CertificateUtility::ValidateCertificateChainDotNet)> {
  constexpr static std::size_t size = 0x50c;
  constexpr static std::size_t addrs = 0xecdb74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::X509CertificateUtility*>::get(), "ValidateCertificateChainDotNet", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509Certificate2*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Array<::ArrayW<uint8_t, ::Array<uint8_t>*>>*>>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::X509CertificateUtility::setStaticF_kBeatSaberDotComRootCertificate(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "kBeatSaberDotComRootCertificate", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::X509CertificateUtility*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::X509CertificateUtility::getStaticF_kBeatSaberDotComRootCertificate() {
  return ::cordl_internals::getStaticField<::StringW, "kBeatSaberDotComRootCertificate", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::X509CertificateUtility*>::get>();
}
inline void GlobalNamespace::X509CertificateUtility::setStaticF_kAwsRootCertificates(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "kAwsRootCertificates", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::X509CertificateUtility*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::X509CertificateUtility::getStaticF_kAwsRootCertificates() {
  return ::cordl_internals::getStaticField<::StringW, "kAwsRootCertificates", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::X509CertificateUtility*>::get>();
}
inline void GlobalNamespace::X509CertificateUtility::setStaticF__rootCertificates(
    ::ArrayW<::System::Security::Cryptography::X509Certificates::X509Certificate2*, ::Array<::System::Security::Cryptography::X509Certificates::X509Certificate2*>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Security::Cryptography::X509Certificates::X509Certificate2*, ::Array<::System::Security::Cryptography::X509Certificates::X509Certificate2*>*>,
                                    "_rootCertificates", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::X509CertificateUtility*>::get>(
      std::forward<::ArrayW<::System::Security::Cryptography::X509Certificates::X509Certificate2*, ::Array<::System::Security::Cryptography::X509Certificates::X509Certificate2*>*>>(value));
}
inline ::ArrayW<::System::Security::Cryptography::X509Certificates::X509Certificate2*, ::Array<::System::Security::Cryptography::X509Certificates::X509Certificate2*>*>
GlobalNamespace::X509CertificateUtility::getStaticF__rootCertificates() {
  return ::cordl_internals::getStaticField<
      ::ArrayW<::System::Security::Cryptography::X509Certificates::X509Certificate2*, ::Array<::System::Security::Cryptography::X509Certificates::X509Certificate2*>*>, "_rootCertificates",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::X509CertificateUtility*>::get>();
}
inline ::ArrayW<::System::Security::Cryptography::X509Certificates::X509Certificate2*, ::Array<::System::Security::Cryptography::X509Certificates::X509Certificate2*>*>
GlobalNamespace::X509CertificateUtility::GetRootCertificates() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::X509CertificateUtility*>::get(),
                                                                             "GetRootCertificates", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<
      ::ArrayW<::System::Security::Cryptography::X509Certificates::X509Certificate2*, ::Array<::System::Security::Cryptography::X509Certificates::X509Certificate2*>*>, false>(nullptr,
                                                                                                                                                                               ___internal_method);
}
inline ::StringW GlobalNamespace::X509CertificateUtility::GetRootCertificatesRaw() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::X509CertificateUtility*>::get(),
                                                                             "GetRootCertificatesRaw", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
/// @param password: ::StringW (default: nullptr)
inline ::GlobalNamespace::ICertificateEncryptionProvider* GlobalNamespace::X509CertificateUtility::GetCertificateEncryptionProvider(::StringW privateKeyPem, ::StringW password) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::X509CertificateUtility*>::get(), "GetCertificateEncryptionProvider", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ICertificateEncryptionProvider*, false>(nullptr, ___internal_method, privateKeyPem, password);
}
inline ::GlobalNamespace::__X509CertificateUtility__RSACertificateEncryptionProvider*
GlobalNamespace::X509CertificateUtility::GetRSACertificateEncryptionProvider(::StringW privateKeyPem, ::GlobalNamespace::__X509CertificateUtility__PasswordFinder* passwordFinder) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::X509CertificateUtility*>::get(), "GetRSACertificateEncryptionProvider", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__X509CertificateUtility__PasswordFinder*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__X509CertificateUtility__RSACertificateEncryptionProvider*, false>(nullptr, ___internal_method, privateKeyPem, passwordFinder);
}
/// @param certificateChainPem: ::StringW (default: nullptr)
inline ::System::Collections::Generic::IEnumerable_1<::System::Security::Cryptography::X509Certificates::X509Certificate2*>*
GlobalNamespace::X509CertificateUtility::GetCertificateList(::StringW certificatePem, ::StringW certificateChainPem) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::X509CertificateUtility*>::get(), "GetCertificateList", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::System::Security::Cryptography::X509Certificates::X509Certificate2*>*, false>(
      nullptr, ___internal_method, certificatePem, certificateChainPem);
}
inline void GlobalNamespace::X509CertificateUtility::ValidateCertificateChain(::System::Security::Cryptography::X509Certificates::X509Certificate2* certificate,
                                                                              ::ArrayW<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Array<::ArrayW<uint8_t, ::Array<uint8_t>*>>*> certificateChain) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::X509CertificateUtility*>::get(), "ValidateCertificateChain", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509Certificate2*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Array<::ArrayW<uint8_t, ::Array<uint8_t>*>>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, certificate, certificateChain);
}
inline void GlobalNamespace::X509CertificateUtility::ValidateCertificateChainUnity(::System::Security::Cryptography::X509Certificates::X509Certificate2* certificate,
                                                                                   ::ArrayW<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Array<::ArrayW<uint8_t, ::Array<uint8_t>*>>*> certificateChain) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::X509CertificateUtility*>::get(), "ValidateCertificateChainUnity", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509Certificate2*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Array<::ArrayW<uint8_t, ::Array<uint8_t>*>>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, certificate, certificateChain);
}
inline void GlobalNamespace::X509CertificateUtility::ValidateCertificateChainDotNet(::System::Security::Cryptography::X509Certificates::X509Certificate2* certificate,
                                                                                    ::ArrayW<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Array<::ArrayW<uint8_t, ::Array<uint8_t>*>>*> certificateChain) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::X509CertificateUtility*>::get(), "ValidateCertificateChainDotNet", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509Certificate2*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Array<::ArrayW<uint8_t, ::Array<uint8_t>*>>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, certificate, certificateChain);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::X509CertificateUtility::X509CertificateUtility() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
