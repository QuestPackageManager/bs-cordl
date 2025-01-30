#pragma once
// IWYU pragma private; include "GlobalNamespace/X509CertificateUtility.hpp"
#include "GlobalNamespace/zzzz__ICertificateEncryptionProvider_impl.hpp"
#include "Org/BouncyCastle/OpenSsl/zzzz__IPasswordFinder_impl.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_impl.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_impl.hpp"
#include "System/Collections/zzzz__IEnumerable_impl.hpp"
#include "System/Collections/zzzz__IEnumerator_impl.hpp"
#include "System/zzzz__IDisposable_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__X509CertificateUtility_def.hpp"
#include "GlobalNamespace/zzzz__ICertificateEncryptionProvider_def.hpp"
#include "GlobalNamespace/zzzz__X509CertificateUtility_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__RsaPrivateCrtKeyParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ISigner_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509CertificateParser_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate2_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509ChainStatus_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::X509CertificateUtility_PasswordFinder._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::X509CertificateUtility_PasswordFinder::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::GlobalNamespace::X509CertificateUtility_PasswordFinder::_ctor)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x22eb31c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::X509CertificateUtility_PasswordFinder*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::X509CertificateUtility_PasswordFinder._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::X509CertificateUtility_PasswordFinder::*)(::StringW)>(
    &::GlobalNamespace::X509CertificateUtility_PasswordFinder::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x22eb3d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::X509CertificateUtility_PasswordFinder*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::X509CertificateUtility_PasswordFinder.GetPassword
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<char16_t, ::Array<char16_t>*> (::GlobalNamespace::X509CertificateUtility_PasswordFinder::*)()>(
    &::GlobalNamespace::X509CertificateUtility_PasswordFinder::GetPassword)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22eb410;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::X509CertificateUtility_PasswordFinder*>::get(),
                                                                               "GetPassword", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::ArrayW<char16_t, ::Array<char16_t>*>& GlobalNamespace::X509CertificateUtility_PasswordFinder::__cordl_internal_get__password() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____password;
}
constexpr ::ArrayW<char16_t, ::Array<char16_t>*> const& GlobalNamespace::X509CertificateUtility_PasswordFinder::__cordl_internal_get__password() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____password;
}
constexpr void GlobalNamespace::X509CertificateUtility_PasswordFinder::__cordl_internal_set__password(::ArrayW<char16_t, ::Array<char16_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____password)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::X509CertificateUtility_PasswordFinder::_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> password) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::X509CertificateUtility_PasswordFinder*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, password);
}
inline void GlobalNamespace::X509CertificateUtility_PasswordFinder::_ctor(::StringW password) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::X509CertificateUtility_PasswordFinder*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, password);
}
inline ::ArrayW<char16_t, ::Array<char16_t>*> GlobalNamespace::X509CertificateUtility_PasswordFinder::GetPassword() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::X509CertificateUtility_PasswordFinder*>::get(),
                                                                             "GetPassword", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<char16_t, ::Array<char16_t>*>, false>(this, ___internal_method);
}
inline ::GlobalNamespace::X509CertificateUtility_PasswordFinder* GlobalNamespace::X509CertificateUtility_PasswordFinder::New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> password) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::X509CertificateUtility_PasswordFinder*>(password));
}
inline ::GlobalNamespace::X509CertificateUtility_PasswordFinder* GlobalNamespace::X509CertificateUtility_PasswordFinder::New_ctor(::StringW password) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::X509CertificateUtility_PasswordFinder*>(password));
}
/// @brief Convert operator to "::Org::BouncyCastle::OpenSsl::IPasswordFinder"
constexpr GlobalNamespace::X509CertificateUtility_PasswordFinder::operator ::Org::BouncyCastle::OpenSsl::IPasswordFinder*() noexcept {
  return static_cast<::Org::BouncyCastle::OpenSsl::IPasswordFinder*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::OpenSsl::IPasswordFinder"
constexpr ::Org::BouncyCastle::OpenSsl::IPasswordFinder* GlobalNamespace::X509CertificateUtility_PasswordFinder::i___Org__BouncyCastle__OpenSsl__IPasswordFinder() noexcept {
  return static_cast<::Org::BouncyCastle::OpenSsl::IPasswordFinder*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::X509CertificateUtility_PasswordFinder::X509CertificateUtility_PasswordFinder() {}
//  Writing Method size for method: ::GlobalNamespace::X509CertificateUtility_RSACertificateEncryptionProvider._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::X509CertificateUtility_RSACertificateEncryptionProvider::*)(
    ::Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters*)>(&::GlobalNamespace::X509CertificateUtility_RSACertificateEncryptionProvider::_ctor)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x22eb418;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::X509CertificateUtility_RSACertificateEncryptionProvider*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::X509CertificateUtility_RSACertificateEncryptionProvider.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::X509CertificateUtility_RSACertificateEncryptionProvider::*)()>(
    &::GlobalNamespace::X509CertificateUtility_RSACertificateEncryptionProvider::Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x22eb524;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::X509CertificateUtility_RSACertificateEncryptionProvider*>::get(), "Dispose",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::X509CertificateUtility_RSACertificateEncryptionProvider.SignData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::GlobalNamespace::X509CertificateUtility_RSACertificateEncryptionProvider::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(&::GlobalNamespace::X509CertificateUtility_RSACertificateEncryptionProvider::SignData)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x22eb528;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::X509CertificateUtility_RSACertificateEncryptionProvider*>::get(), "SignData",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Crypto::ISigner*& GlobalNamespace::X509CertificateUtility_RSACertificateEncryptionProvider::__cordl_internal_get__signer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____signer;
}
constexpr ::Org::BouncyCastle::Crypto::ISigner* const& GlobalNamespace::X509CertificateUtility_RSACertificateEncryptionProvider::__cordl_internal_get__signer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____signer;
}
constexpr void GlobalNamespace::X509CertificateUtility_RSACertificateEncryptionProvider::__cordl_internal_set__signer(::Org::BouncyCastle::Crypto::ISigner* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____signer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::X509CertificateUtility_RSACertificateEncryptionProvider::_ctor(::Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters* privateKey) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::X509CertificateUtility_RSACertificateEncryptionProvider*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, privateKey);
}
inline void GlobalNamespace::X509CertificateUtility_RSACertificateEncryptionProvider::Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::X509CertificateUtility_RSACertificateEncryptionProvider*>::get(), "Dispose",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GlobalNamespace::X509CertificateUtility_RSACertificateEncryptionProvider::SignData(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t offset,
                                                                                                                               int32_t length) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::X509CertificateUtility_RSACertificateEncryptionProvider*>::get(), "SignData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method, data, offset, length);
}
inline ::GlobalNamespace::X509CertificateUtility_RSACertificateEncryptionProvider*
GlobalNamespace::X509CertificateUtility_RSACertificateEncryptionProvider::New_ctor(::Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters* privateKey) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::X509CertificateUtility_RSACertificateEncryptionProvider*>(privateKey));
}
/// @brief Convert operator to "::GlobalNamespace::ICertificateEncryptionProvider"
constexpr GlobalNamespace::X509CertificateUtility_RSACertificateEncryptionProvider::operator ::GlobalNamespace::ICertificateEncryptionProvider*() noexcept {
  return static_cast<::GlobalNamespace::ICertificateEncryptionProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ICertificateEncryptionProvider"
constexpr ::GlobalNamespace::ICertificateEncryptionProvider* GlobalNamespace::X509CertificateUtility_RSACertificateEncryptionProvider::i___GlobalNamespace__ICertificateEncryptionProvider() noexcept {
  return static_cast<::GlobalNamespace::ICertificateEncryptionProvider*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::X509CertificateUtility_RSACertificateEncryptionProvider::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::X509CertificateUtility_RSACertificateEncryptionProvider::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::X509CertificateUtility_RSACertificateEncryptionProvider::X509CertificateUtility_RSACertificateEncryptionProvider() {}
//  Writing Method size for method: ::GlobalNamespace::X509CertificateUtility___c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::X509CertificateUtility___c::*)()>(&::GlobalNamespace::X509CertificateUtility___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22eb718;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::X509CertificateUtility___c*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::X509CertificateUtility___c._ValidateCertificateChainUnity_b__11_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::X509CertificateUtility___c::*)(
    ::System::Security::Cryptography::X509Certificates::X509ChainStatus)>(&::GlobalNamespace::X509CertificateUtility___c::_ValidateCertificateChainUnity_b__11_0)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x22eb720;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::X509CertificateUtility___c*>::get(), "<ValidateCertificateChainUnity>b__11_0",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509ChainStatus>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::X509CertificateUtility___c._ValidateCertificateChainDotNet_b__12_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::X509CertificateUtility___c::*)(
    ::System::Security::Cryptography::X509Certificates::X509ChainStatus)>(&::GlobalNamespace::X509CertificateUtility___c::_ValidateCertificateChainDotNet_b__12_0)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x22eb784;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::X509CertificateUtility___c*>::get(), "<ValidateCertificateChainDotNet>b__12_0",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509ChainStatus>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::X509CertificateUtility___c::setStaticF___9(::GlobalNamespace::X509CertificateUtility___c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::X509CertificateUtility___c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::X509CertificateUtility___c*>::get>(
      std::forward<::GlobalNamespace::X509CertificateUtility___c*>(value));
}
inline ::GlobalNamespace::X509CertificateUtility___c* GlobalNamespace::X509CertificateUtility___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::X509CertificateUtility___c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::X509CertificateUtility___c*>::get>();
}
inline void GlobalNamespace::X509CertificateUtility___c::setStaticF___9__11_0(::System::Func_2<::System::Security::Cryptography::X509Certificates::X509ChainStatus, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::System::Security::Cryptography::X509Certificates::X509ChainStatus, ::StringW>*, "<>9__11_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::X509CertificateUtility___c*>::get>(
      std::forward<::System::Func_2<::System::Security::Cryptography::X509Certificates::X509ChainStatus, ::StringW>*>(value));
}
inline ::System::Func_2<::System::Security::Cryptography::X509Certificates::X509ChainStatus, ::StringW>* GlobalNamespace::X509CertificateUtility___c::getStaticF___9__11_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::System::Security::Cryptography::X509Certificates::X509ChainStatus, ::StringW>*, "<>9__11_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::X509CertificateUtility___c*>::get>();
}
inline void GlobalNamespace::X509CertificateUtility___c::setStaticF___9__12_0(::System::Func_2<::System::Security::Cryptography::X509Certificates::X509ChainStatus, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::System::Security::Cryptography::X509Certificates::X509ChainStatus, ::StringW>*, "<>9__12_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::X509CertificateUtility___c*>::get>(
      std::forward<::System::Func_2<::System::Security::Cryptography::X509Certificates::X509ChainStatus, ::StringW>*>(value));
}
inline ::System::Func_2<::System::Security::Cryptography::X509Certificates::X509ChainStatus, ::StringW>* GlobalNamespace::X509CertificateUtility___c::getStaticF___9__12_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::System::Security::Cryptography::X509Certificates::X509ChainStatus, ::StringW>*, "<>9__12_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::X509CertificateUtility___c*>::get>();
}
inline void GlobalNamespace::X509CertificateUtility___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::X509CertificateUtility___c*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::X509CertificateUtility___c::_ValidateCertificateChainUnity_b__11_0(::System::Security::Cryptography::X509Certificates::X509ChainStatus s) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::X509CertificateUtility___c*>::get(), "<ValidateCertificateChainUnity>b__11_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509ChainStatus>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, s);
}
inline ::StringW GlobalNamespace::X509CertificateUtility___c::_ValidateCertificateChainDotNet_b__12_0(::System::Security::Cryptography::X509Certificates::X509ChainStatus s) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::X509CertificateUtility___c*>::get(), "<ValidateCertificateChainDotNet>b__12_0",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509ChainStatus>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, s);
}
inline ::GlobalNamespace::X509CertificateUtility___c* GlobalNamespace::X509CertificateUtility___c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::X509CertificateUtility___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::X509CertificateUtility___c::X509CertificateUtility___c() {}
//  Writing Method size for method: ::GlobalNamespace::X509CertificateUtility__GetCertificateList_d__9._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::X509CertificateUtility__GetCertificateList_d__9::*)(int32_t)>(
    &::GlobalNamespace::X509CertificateUtility__GetCertificateList_d__9::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x22eb7e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::X509CertificateUtility__GetCertificateList_d__9*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::X509CertificateUtility__GetCertificateList_d__9.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::X509CertificateUtility__GetCertificateList_d__9::*)()>(
    &::GlobalNamespace::X509CertificateUtility__GetCertificateList_d__9::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x22eb81c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::X509CertificateUtility__GetCertificateList_d__9*>::get(),
                                                 "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::X509CertificateUtility__GetCertificateList_d__9.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::X509CertificateUtility__GetCertificateList_d__9::*)()>(
    &::GlobalNamespace::X509CertificateUtility__GetCertificateList_d__9::MoveNext)> {
  constexpr static std::size_t size = 0x510;
  constexpr static std::size_t addrs = 0x22eb838;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::X509CertificateUtility__GetCertificateList_d__9*>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::X509CertificateUtility__GetCertificateList_d__9.__m__Finally1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::X509CertificateUtility__GetCertificateList_d__9::*)()>(
    &::GlobalNamespace::X509CertificateUtility__GetCertificateList_d__9::__m__Finally1)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x22ebd48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::X509CertificateUtility__GetCertificateList_d__9*>::get(), "<>m__Finally1",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::GlobalNamespace::X509CertificateUtility__GetCertificateList_d__9.System_Collections_Generic_IEnumerator_System_Security_Cryptography_X509Certificates_X509Certificate2__get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Security::Cryptography::X509Certificates::X509Certificate2* (::GlobalNamespace::X509CertificateUtility__GetCertificateList_d__9::*)()>(
        &::GlobalNamespace::X509CertificateUtility__GetCertificateList_d__9::System_Collections_Generic_IEnumerator_System_Security_Cryptography_X509Certificates_X509Certificate2__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22ebe04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::X509CertificateUtility__GetCertificateList_d__9*>::get(),
                                                 "System.Collections.Generic.IEnumerator<System.Security.Cryptography.X509Certificates.X509Certificate2>.get_Current",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::X509CertificateUtility__GetCertificateList_d__9.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::X509CertificateUtility__GetCertificateList_d__9::*)()>(
    &::GlobalNamespace::X509CertificateUtility__GetCertificateList_d__9::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x22ebe0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::X509CertificateUtility__GetCertificateList_d__9*>::get(),
                                                 "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::X509CertificateUtility__GetCertificateList_d__9.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::X509CertificateUtility__GetCertificateList_d__9::*)()>(
    &::GlobalNamespace::X509CertificateUtility__GetCertificateList_d__9::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22ebe44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::X509CertificateUtility__GetCertificateList_d__9*>::get(),
                                                 "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::GlobalNamespace::X509CertificateUtility__GetCertificateList_d__9.System_Collections_Generic_IEnumerable_System_Security_Cryptography_X509Certificates_X509Certificate2__GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::System::Collections::Generic::IEnumerator_1<::System::Security::Cryptography::X509Certificates::X509Certificate2*>* (::GlobalNamespace::X509CertificateUtility__GetCertificateList_d__9::*)()>(
    &::GlobalNamespace::X509CertificateUtility__GetCertificateList_d__9::System_Collections_Generic_IEnumerable_System_Security_Cryptography_X509Certificates_X509Certificate2__GetEnumerator)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x22ebe4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::X509CertificateUtility__GetCertificateList_d__9*>::get(),
                                                 "System.Collections.Generic.IEnumerable<System.Security.Cryptography.X509Certificates.X509Certificate2>.GetEnumerator",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::X509CertificateUtility__GetCertificateList_d__9.System_Collections_IEnumerable_GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::X509CertificateUtility__GetCertificateList_d__9::*)()>(
    &::GlobalNamespace::X509CertificateUtility__GetCertificateList_d__9::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x22ebef0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::X509CertificateUtility__GetCertificateList_d__9*>::get(),
                                                 "System.Collections.IEnumerable.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::X509CertificateUtility__GetCertificateList_d__9::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::X509CertificateUtility__GetCertificateList_d__9::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void GlobalNamespace::X509CertificateUtility__GetCertificateList_d__9::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::System::Security::Cryptography::X509Certificates::X509Certificate2*& GlobalNamespace::X509CertificateUtility__GetCertificateList_d__9::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::System::Security::Cryptography::X509Certificates::X509Certificate2* const& GlobalNamespace::X509CertificateUtility__GetCertificateList_d__9::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void GlobalNamespace::X509CertificateUtility__GetCertificateList_d__9::__cordl_internal_set___2__current(::System::Security::Cryptography::X509Certificates::X509Certificate2* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::X509CertificateUtility__GetCertificateList_d__9::__cordl_internal_get___l__initialThreadId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
constexpr int32_t const& GlobalNamespace::X509CertificateUtility__GetCertificateList_d__9::__cordl_internal_get___l__initialThreadId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
constexpr void GlobalNamespace::X509CertificateUtility__GetCertificateList_d__9::__cordl_internal_set___l__initialThreadId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____l__initialThreadId = value;
}
constexpr ::StringW& GlobalNamespace::X509CertificateUtility__GetCertificateList_d__9::__cordl_internal_get_certificatePem() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certificatePem;
}
constexpr ::StringW const& GlobalNamespace::X509CertificateUtility__GetCertificateList_d__9::__cordl_internal_get_certificatePem() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certificatePem;
}
constexpr void GlobalNamespace::X509CertificateUtility__GetCertificateList_d__9::__cordl_internal_set_certificatePem(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___certificatePem)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::X509CertificateUtility__GetCertificateList_d__9::__cordl_internal_get___3__certificatePem() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__certificatePem;
}
constexpr ::StringW const& GlobalNamespace::X509CertificateUtility__GetCertificateList_d__9::__cordl_internal_get___3__certificatePem() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__certificatePem;
}
constexpr void GlobalNamespace::X509CertificateUtility__GetCertificateList_d__9::__cordl_internal_set___3__certificatePem(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____3__certificatePem)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::X509CertificateUtility__GetCertificateList_d__9::__cordl_internal_get_certificateChainPem() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certificateChainPem;
}
constexpr ::StringW const& GlobalNamespace::X509CertificateUtility__GetCertificateList_d__9::__cordl_internal_get_certificateChainPem() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certificateChainPem;
}
constexpr void GlobalNamespace::X509CertificateUtility__GetCertificateList_d__9::__cordl_internal_set_certificateChainPem(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___certificateChainPem)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::X509CertificateUtility__GetCertificateList_d__9::__cordl_internal_get___3__certificateChainPem() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__certificateChainPem;
}
constexpr ::StringW const& GlobalNamespace::X509CertificateUtility__GetCertificateList_d__9::__cordl_internal_get___3__certificateChainPem() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__certificateChainPem;
}
constexpr void GlobalNamespace::X509CertificateUtility__GetCertificateList_d__9::__cordl_internal_set___3__certificateChainPem(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____3__certificateChainPem)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::X509::X509CertificateParser*& GlobalNamespace::X509CertificateUtility__GetCertificateList_d__9::__cordl_internal_get__x509CertificateParser_5__2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____x509CertificateParser_5__2;
}
constexpr ::Org::BouncyCastle::X509::X509CertificateParser* const& GlobalNamespace::X509CertificateUtility__GetCertificateList_d__9::__cordl_internal_get__x509CertificateParser_5__2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____x509CertificateParser_5__2;
}
constexpr void GlobalNamespace::X509CertificateUtility__GetCertificateList_d__9::__cordl_internal_set__x509CertificateParser_5__2(::Org::BouncyCastle::X509::X509CertificateParser* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____x509CertificateParser_5__2)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::IEnumerator*& GlobalNamespace::X509CertificateUtility__GetCertificateList_d__9::__cordl_internal_get___7__wrap2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap2;
}
constexpr ::System::Collections::IEnumerator* const& GlobalNamespace::X509CertificateUtility__GetCertificateList_d__9::__cordl_internal_get___7__wrap2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap2;
}
constexpr void GlobalNamespace::X509CertificateUtility__GetCertificateList_d__9::__cordl_internal_set___7__wrap2(::System::Collections::IEnumerator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____7__wrap2)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::X509CertificateUtility__GetCertificateList_d__9::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::X509CertificateUtility__GetCertificateList_d__9*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::X509CertificateUtility__GetCertificateList_d__9::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::X509CertificateUtility__GetCertificateList_d__9*>::get(),
                                               "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::X509CertificateUtility__GetCertificateList_d__9::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::X509CertificateUtility__GetCertificateList_d__9*>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::X509CertificateUtility__GetCertificateList_d__9::__m__Finally1() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::X509CertificateUtility__GetCertificateList_d__9*>::get(), "<>m__Finally1",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Security::Cryptography::X509Certificates::X509Certificate2*
GlobalNamespace::X509CertificateUtility__GetCertificateList_d__9::System_Collections_Generic_IEnumerator_System_Security_Cryptography_X509Certificates_X509Certificate2__get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::X509CertificateUtility__GetCertificateList_d__9*>::get(),
                                               "System.Collections.Generic.IEnumerator<System.Security.Cryptography.X509Certificates.X509Certificate2>.get_Current",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509Certificate2*, false>(this, ___internal_method);
}
inline void GlobalNamespace::X509CertificateUtility__GetCertificateList_d__9::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::X509CertificateUtility__GetCertificateList_d__9*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::X509CertificateUtility__GetCertificateList_d__9::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::X509CertificateUtility__GetCertificateList_d__9*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::System::Security::Cryptography::X509Certificates::X509Certificate2*>*
GlobalNamespace::X509CertificateUtility__GetCertificateList_d__9::System_Collections_Generic_IEnumerable_System_Security_Cryptography_X509Certificates_X509Certificate2__GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::X509CertificateUtility__GetCertificateList_d__9*>::get(),
                                               "System.Collections.Generic.IEnumerable<System.Security.Cryptography.X509Certificates.X509Certificate2>.GetEnumerator",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::System::Security::Cryptography::X509Certificates::X509Certificate2*>*, false>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::X509CertificateUtility__GetCertificateList_d__9::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::X509CertificateUtility__GetCertificateList_d__9*>::get(),
                                               "System.Collections.IEnumerable.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::X509CertificateUtility__GetCertificateList_d__9* GlobalNamespace::X509CertificateUtility__GetCertificateList_d__9::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::X509CertificateUtility__GetCertificateList_d__9*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Security::Cryptography::X509Certificates::X509Certificate2*>"
constexpr GlobalNamespace::X509CertificateUtility__GetCertificateList_d__9::operator ::System::Collections::Generic::IEnumerable_1<
    ::System::Security::Cryptography::X509Certificates::X509Certificate2*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::System::Security::Cryptography::X509Certificates::X509Certificate2*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Security::Cryptography::X509Certificates::X509Certificate2*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::System::Security::Cryptography::X509Certificates::X509Certificate2*>*
GlobalNamespace::X509CertificateUtility__GetCertificateList_d__9::i___System__Collections__Generic__IEnumerable_1___System__Security__Cryptography__X509Certificates__X509Certificate2__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::System::Security::Cryptography::X509Certificates::X509Certificate2*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr GlobalNamespace::X509CertificateUtility__GetCertificateList_d__9::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* GlobalNamespace::X509CertificateUtility__GetCertificateList_d__9::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Security::Cryptography::X509Certificates::X509Certificate2*>"
constexpr GlobalNamespace::X509CertificateUtility__GetCertificateList_d__9::operator ::System::Collections::Generic::IEnumerator_1<
    ::System::Security::Cryptography::X509Certificates::X509Certificate2*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Security::Cryptography::X509Certificates::X509Certificate2*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Security::Cryptography::X509Certificates::X509Certificate2*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Security::Cryptography::X509Certificates::X509Certificate2*>*
GlobalNamespace::X509CertificateUtility__GetCertificateList_d__9::i___System__Collections__Generic__IEnumerator_1___System__Security__Cryptography__X509Certificates__X509Certificate2__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Security::Cryptography::X509Certificates::X509Certificate2*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr GlobalNamespace::X509CertificateUtility__GetCertificateList_d__9::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::X509CertificateUtility__GetCertificateList_d__9::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::X509CertificateUtility__GetCertificateList_d__9::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::X509CertificateUtility__GetCertificateList_d__9::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::X509CertificateUtility__GetCertificateList_d__9::X509CertificateUtility__GetCertificateList_d__9() {}
//  Writing Method size for method: ::GlobalNamespace::X509CertificateUtility.GetRootCertificates
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::System::Security::Cryptography::X509Certificates::X509Certificate2*, ::Array<::System::Security::Cryptography::X509Certificates::X509Certificate2*>*> (*)()>(
        &::GlobalNamespace::X509CertificateUtility::GetRootCertificates)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x22e9ed0;

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
  constexpr static std::size_t addrs = 0x22ea00c;

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
  constexpr static std::size_t addrs = 0x22ea084;

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
    static_cast<::GlobalNamespace::X509CertificateUtility_RSACertificateEncryptionProvider* (*)(::StringW, ::GlobalNamespace::X509CertificateUtility_PasswordFinder*)>(
        &::GlobalNamespace::X509CertificateUtility::GetRSACertificateEncryptionProvider)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x22ea128;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::X509CertificateUtility*>::get(), "GetRSACertificateEncryptionProvider", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::X509CertificateUtility_PasswordFinder*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::X509CertificateUtility.GetCertificateList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::IEnumerable_1<::System::Security::Cryptography::X509Certificates::X509Certificate2*>* (*)(::StringW, ::StringW)>(
        &::GlobalNamespace::X509CertificateUtility::GetCertificateList)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x22e9f94;

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
  constexpr static std::size_t addrs = 0x22ea310;

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
  constexpr static std::size_t size = 0xa40;
  constexpr static std::size_t addrs = 0x22ea374;

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
  constexpr static std::size_t size = 0x4dc;
  constexpr static std::size_t addrs = 0x22eadb4;

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
inline ::GlobalNamespace::ICertificateEncryptionProvider* GlobalNamespace::X509CertificateUtility::GetCertificateEncryptionProvider(::StringW privateKeyPem, ::StringW password) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::X509CertificateUtility*>::get(), "GetCertificateEncryptionProvider", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ICertificateEncryptionProvider*, false>(nullptr, ___internal_method, privateKeyPem, password);
}
inline ::GlobalNamespace::X509CertificateUtility_RSACertificateEncryptionProvider*
GlobalNamespace::X509CertificateUtility::GetRSACertificateEncryptionProvider(::StringW privateKeyPem, ::GlobalNamespace::X509CertificateUtility_PasswordFinder* passwordFinder) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::X509CertificateUtility*>::get(), "GetRSACertificateEncryptionProvider", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::X509CertificateUtility_PasswordFinder*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::X509CertificateUtility_RSACertificateEncryptionProvider*, false>(nullptr, ___internal_method, privateKeyPem, passwordFinder);
}
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
