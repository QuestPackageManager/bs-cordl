#pragma once
// IWYU pragma private; include "Org\BouncyCastle\X509\X509Crl.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509ExtensionBase_impl.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509Crl_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__CertificateList_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__X509Extensions_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__X509Name_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricKeyParameter_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IVerifierFactoryProvider_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IVerifierFactory_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
#include "Org/BouncyCastle/Utilities/Collections/zzzz__ISet_def.hpp"
#include "Org/BouncyCastle/Utilities/Date/zzzz__DateTimeObject_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509Certificate_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509CrlEntry_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509Crl._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::X509::X509Crl::*)(::Org::BouncyCastle::Asn1::X509::CertificateList*)>(&::Org::BouncyCastle::X509::X509Crl::_ctor)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x364b2d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509Crl*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::CertificateList*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509Crl.GetX509Extensions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::X509Extensions* (::Org::BouncyCastle::X509::X509Crl::*)()>(
    &::Org::BouncyCastle::X509::X509Crl::GetX509Extensions)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x364b490;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509Crl*>(), { ::i2c::class_of<::Org::BouncyCastle::X509::X509Crl*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509Crl.GetEncoded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::X509::X509Crl::*)()>(&::Org::BouncyCastle::X509::X509Crl::GetEncoded)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x364b4dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509Crl*>(), { ::i2c::class_of<::Org::BouncyCastle::X509::X509Crl*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509Crl.Verify
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::X509::X509Crl::*)(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*)>(
    &::Org::BouncyCastle::X509::X509Crl::Verify)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x364b5d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509Crl*>(), { ::i2c::class_of<::Org::BouncyCastle::X509::X509Crl*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509Crl.Verify
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::X509::X509Crl::*)(::Org::BouncyCastle::Crypto::IVerifierFactoryProvider*)>(
    &::Org::BouncyCastle::X509::X509Crl::Verify)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x364b640;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509Crl*>(), { ::i2c::class_of<::Org::BouncyCastle::X509::X509Crl*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509Crl.CheckSignature
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::X509::X509Crl::*)(::Org::BouncyCastle::Crypto::IVerifierFactory*)>(
    &::Org::BouncyCastle::X509::X509Crl::CheckSignature)> {
  constexpr static std::size_t size = 0x400;
  constexpr static std::size_t addrs = 0x364b714;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509Crl*>(), { ::i2c::class_of<::Org::BouncyCastle::X509::X509Crl*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509Crl.get_Version
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::X509::X509Crl::*)()>(&::Org::BouncyCastle::X509::X509Crl::get_Version)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x364bb14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509Crl*>(), { ::i2c::class_of<::Org::BouncyCastle::X509::X509Crl*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509Crl.get_IssuerDN
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::X509Name* (::Org::BouncyCastle::X509::X509Crl::*)()>(&::Org::BouncyCastle::X509::X509Crl::get_IssuerDN)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x364bb38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509Crl*>(), { ::i2c::class_of<::Org::BouncyCastle::X509::X509Crl*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509Crl.get_ThisUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::Org::BouncyCastle::X509::X509Crl::*)()>(&::Org::BouncyCastle::X509::X509Crl::get_ThisUpdate)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x364bb5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509Crl*>(), { ::i2c::class_of<::Org::BouncyCastle::X509::X509Crl*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509Crl.get_NextUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Utilities::Date::DateTimeObject* (::Org::BouncyCastle::X509::X509Crl::*)()>(
    &::Org::BouncyCastle::X509::X509Crl::get_NextUpdate)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x364bb88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509Crl*>(), { ::i2c::class_of<::Org::BouncyCastle::X509::X509Crl*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509Crl.LoadCrlEntries
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Utilities::Collections::ISet* (::Org::BouncyCastle::X509::X509Crl::*)()>(
    &::Org::BouncyCastle::X509::X509Crl::LoadCrlEntries)> {
  constexpr static std::size_t size = 0x454;
  constexpr static std::size_t addrs = 0x364bc04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509Crl*>(), { "LoadCrlEntries", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509Crl.GetRevokedCertificate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::X509::X509CrlEntry* (::Org::BouncyCastle::X509::X509Crl::*)(::Org::BouncyCastle::Math::BigInteger*)>(
    &::Org::BouncyCastle::X509::X509Crl::GetRevokedCertificate)> {
  constexpr static std::size_t size = 0x3f0;
  constexpr static std::size_t addrs = 0x364c07c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509Crl*>(), { ::i2c::class_of<::Org::BouncyCastle::X509::X509Crl*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509Crl.GetRevokedCertificates
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Utilities::Collections::ISet* (::Org::BouncyCastle::X509::X509Crl::*)()>(
    &::Org::BouncyCastle::X509::X509Crl::GetRevokedCertificates)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x364c46c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509Crl*>(), { ::i2c::class_of<::Org::BouncyCastle::X509::X509Crl*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509Crl.GetTbsCertList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::X509::X509Crl::*)()>(&::Org::BouncyCastle::X509::X509Crl::GetTbsCertList)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x364c528;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509Crl*>(), { ::i2c::class_of<::Org::BouncyCastle::X509::X509Crl*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509Crl.GetSignature
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::X509::X509Crl::*)()>(&::Org::BouncyCastle::X509::X509Crl::GetSignature)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x364c62c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509Crl*>(), { ::i2c::class_of<::Org::BouncyCastle::X509::X509Crl*>(), 24 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509Crl.get_SigAlgName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::X509::X509Crl::*)()>(&::Org::BouncyCastle::X509::X509Crl::get_SigAlgName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x364c654;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509Crl*>(), { ::i2c::class_of<::Org::BouncyCastle::X509::X509Crl*>(), 25 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509Crl.get_SigAlgOid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::X509::X509Crl::*)()>(&::Org::BouncyCastle::X509::X509Crl::get_SigAlgOid)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x364c65c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509Crl*>(), { ::i2c::class_of<::Org::BouncyCastle::X509::X509Crl*>(), 26 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509Crl.GetSigAlgParams
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::X509::X509Crl::*)()>(&::Org::BouncyCastle::X509::X509Crl::GetSigAlgParams)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x364c690;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509Crl*>(), { ::i2c::class_of<::Org::BouncyCastle::X509::X509Crl*>(), 27 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509Crl.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::X509::X509Crl::*)(::System::Object*)>(&::Org::BouncyCastle::X509::X509Crl::Equals)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x364c6f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509Crl*>(), { ::i2c::class_of<::Org::BouncyCastle::X509::X509Crl*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509Crl.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::X509::X509Crl::*)()>(&::Org::BouncyCastle::X509::X509Crl::GetHashCode)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x364c804;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509Crl*>(), { ::i2c::class_of<::Org::BouncyCastle::X509::X509Crl*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509Crl.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::X509::X509Crl::*)()>(&::Org::BouncyCastle::X509::X509Crl::ToString)> {
  constexpr static std::size_t size = 0xf98;
  constexpr static std::size_t addrs = 0x364c850;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509Crl*>(), { ::i2c::class_of<::Org::BouncyCastle::X509::X509Crl*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509Crl.IsRevoked
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::X509::X509Crl::*)(::Org::BouncyCastle::X509::X509Certificate*)>(&::Org::BouncyCastle::X509::X509Crl::IsRevoked)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x364d7e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509Crl*>(), { ::i2c::class_of<::Org::BouncyCastle::X509::X509Crl*>(), 28 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509Crl.get_IsIndirectCrl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::X509::X509Crl::*)()>(&::Org::BouncyCastle::X509::X509Crl::get_IsIndirectCrl)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x364d8b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509Crl*>(), { ::i2c::class_of<::Org::BouncyCastle::X509::X509Crl*>(), 29 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::X509::CertificateList*& Org::BouncyCastle::X509::X509Crl::__cordl_internal_get_c() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___c;
}
constexpr ::Org::BouncyCastle::Asn1::X509::CertificateList* const& Org::BouncyCastle::X509::X509Crl::__cordl_internal_get_c() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___c;
}
constexpr void Org::BouncyCastle::X509::X509Crl::__cordl_internal_set_c(::Org::BouncyCastle::Asn1::X509::CertificateList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___c = value;
}
constexpr ::StringW& Org::BouncyCastle::X509::X509Crl::__cordl_internal_get_sigAlgName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sigAlgName;
}
constexpr ::StringW const& Org::BouncyCastle::X509::X509Crl::__cordl_internal_get_sigAlgName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sigAlgName;
}
constexpr void Org::BouncyCastle::X509::X509Crl::__cordl_internal_set_sigAlgName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sigAlgName = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::X509::X509Crl::__cordl_internal_get_sigAlgParams() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sigAlgParams;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::X509::X509Crl::__cordl_internal_get_sigAlgParams() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sigAlgParams;
}
constexpr void Org::BouncyCastle::X509::X509Crl::__cordl_internal_set_sigAlgParams(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sigAlgParams = value;
}
constexpr bool& Org::BouncyCastle::X509::X509Crl::__cordl_internal_get_isIndirect() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isIndirect;
}
constexpr bool const& Org::BouncyCastle::X509::X509Crl::__cordl_internal_get_isIndirect() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isIndirect;
}
constexpr void Org::BouncyCastle::X509::X509Crl::__cordl_internal_set_isIndirect(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isIndirect = value;
}
constexpr bool& Org::BouncyCastle::X509::X509Crl::__cordl_internal_get_hashValueSet() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hashValueSet;
}
constexpr bool const& Org::BouncyCastle::X509::X509Crl::__cordl_internal_get_hashValueSet() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hashValueSet;
}
constexpr void Org::BouncyCastle::X509::X509Crl::__cordl_internal_set_hashValueSet(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hashValueSet = value;
}
constexpr int32_t& Org::BouncyCastle::X509::X509Crl::__cordl_internal_get_hashValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hashValue;
}
constexpr int32_t const& Org::BouncyCastle::X509::X509Crl::__cordl_internal_get_hashValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hashValue;
}
constexpr void Org::BouncyCastle::X509::X509Crl::__cordl_internal_set_hashValue(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hashValue = value;
}
inline void Org::BouncyCastle::X509::X509Crl::_ctor(::Org::BouncyCastle::Asn1::X509::CertificateList* c) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509Crl*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::CertificateList*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, c);
}
inline ::Org::BouncyCastle::Asn1::X509::X509Extensions* Org::BouncyCastle::X509::X509Crl::GetX509Extensions() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::X509::X509Crl*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::X509Extensions*>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::X509::X509Crl::GetEncoded() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::X509::X509Crl*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline void Org::BouncyCastle::X509::X509Crl::Verify(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* publicKey) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::X509::X509Crl*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, publicKey);
}
inline void Org::BouncyCastle::X509::X509Crl::Verify(::Org::BouncyCastle::Crypto::IVerifierFactoryProvider* verifierProvider) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::X509::X509Crl*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, verifierProvider);
}
inline void Org::BouncyCastle::X509::X509Crl::CheckSignature(::Org::BouncyCastle::Crypto::IVerifierFactory* verifier) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::X509::X509Crl*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, verifier);
}
inline int32_t Org::BouncyCastle::X509::X509Crl::get_Version() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::X509::X509Crl*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::X509Name* Org::BouncyCastle::X509::X509Crl::get_IssuerDN() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::X509::X509Crl*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::X509Name*>(this, ___internal_method);
}
inline ::System::DateTime Org::BouncyCastle::X509::X509Crl::get_ThisUpdate() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::X509::X509Crl*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Utilities::Date::DateTimeObject* Org::BouncyCastle::X509::X509Crl::get_NextUpdate() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::X509::X509Crl*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Utilities::Date::DateTimeObject*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Utilities::Collections::ISet* Org::BouncyCastle::X509::X509Crl::LoadCrlEntries() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509Crl*>(), { "LoadCrlEntries", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Utilities::Collections::ISet*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::X509::X509CrlEntry* Org::BouncyCastle::X509::X509Crl::GetRevokedCertificate(::Org::BouncyCastle::Math::BigInteger* serialNumber) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::X509::X509Crl*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::X509::X509CrlEntry*>(this, ___internal_method, serialNumber);
}
inline ::Org::BouncyCastle::Utilities::Collections::ISet* Org::BouncyCastle::X509::X509Crl::GetRevokedCertificates() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::X509::X509Crl*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Utilities::Collections::ISet*>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::X509::X509Crl::GetTbsCertList() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::X509::X509Crl*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::X509::X509Crl::GetSignature() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::X509::X509Crl*>(), 24 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::StringW Org::BouncyCastle::X509::X509Crl::get_SigAlgName() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::X509::X509Crl*>(), 25 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Org::BouncyCastle::X509::X509Crl::get_SigAlgOid() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::X509::X509Crl*>(), 26 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::X509::X509Crl::GetSigAlgParams() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::X509::X509Crl*>(), 27 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline bool Org::BouncyCastle::X509::X509Crl::Equals(::System::Object* other) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::X509::X509Crl*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other);
}
inline int32_t Org::BouncyCastle::X509::X509Crl::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::X509::X509Crl*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW Org::BouncyCastle::X509::X509Crl::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::X509::X509Crl*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool Org::BouncyCastle::X509::X509Crl::IsRevoked(::Org::BouncyCastle::X509::X509Certificate* cert) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::X509::X509Crl*>(), 28 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, cert);
}
inline bool Org::BouncyCastle::X509::X509Crl::get_IsIndirectCrl() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::X509::X509Crl*>(), 29 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Org::BouncyCastle::X509::X509Crl* Org::BouncyCastle::X509::X509Crl::New_ctor(::Org::BouncyCastle::Asn1::X509::CertificateList* c) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::X509::X509Crl*>(c));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::X509::X509Crl::X509Crl() {}
