#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Ocsp/zzzz__CertificateID_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Org/BouncyCastle/Asn1/Ocsp/zzzz__CertID_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerInteger_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AlgorithmIdentifier_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509Certificate_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::CertificateID._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Ocsp::CertificateID::*)(::Org::BouncyCastle::Asn1::Ocsp::CertID*)>(
    &::Org::BouncyCastle::Ocsp::CertificateID::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x109ede8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::CertificateID*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Ocsp::CertID*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::CertificateID._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Ocsp::CertificateID::*)(
    ::StringW, ::Org::BouncyCastle::X509::X509Certificate*, ::Org::BouncyCastle::Math::BigInteger*)>(&::Org::BouncyCastle::Ocsp::CertificateID::_ctor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x109ee60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::CertificateID*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Certificate*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::CertificateID.get_HashAlgOid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Org::BouncyCastle::Ocsp::CertificateID::*)()>(
    &::Org::BouncyCastle::Ocsp::CertificateID::get_HashAlgOid)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x109f254;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::CertificateID*>::get(),
                                                                               "get_HashAlgOid", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::CertificateID.GetIssuerNameHash
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Org::BouncyCastle::Ocsp::CertificateID::*)()>(
    &::Org::BouncyCastle::Ocsp::CertificateID::GetIssuerNameHash)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x109f288;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::CertificateID*>::get(),
                                                                               "GetIssuerNameHash", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::CertificateID.GetIssuerKeyHash
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Org::BouncyCastle::Ocsp::CertificateID::*)()>(
    &::Org::BouncyCastle::Ocsp::CertificateID::GetIssuerKeyHash)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x109f2b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::CertificateID*>::get(),
                                                                               "GetIssuerKeyHash", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::CertificateID.get_SerialNumber
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::Ocsp::CertificateID::*)()>(
    &::Org::BouncyCastle::Ocsp::CertificateID::get_SerialNumber)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x109f2d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::CertificateID*>::get(),
                                                                               "get_SerialNumber", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::CertificateID.MatchesIssuer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Ocsp::CertificateID::*)(::Org::BouncyCastle::X509::X509Certificate*)>(
    &::Org::BouncyCastle::Ocsp::CertificateID::MatchesIssuer)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x109f2fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::CertificateID*>::get(), "MatchesIssuer", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Certificate*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::CertificateID.ToAsn1Object
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Ocsp::CertID* (::Org::BouncyCastle::Ocsp::CertificateID::*)()>(
    &::Org::BouncyCastle::Ocsp::CertificateID::ToAsn1Object)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x109f330;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::CertificateID*>::get(), "ToAsn1Object",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::CertificateID.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Ocsp::CertificateID::*)(::System::Object*)>(
    &::Org::BouncyCastle::Ocsp::CertificateID::Equals)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x109f338;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::CertificateID*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::CertificateID*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::CertificateID.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Ocsp::CertificateID::*)()>(&::Org::BouncyCastle::Ocsp::CertificateID::GetHashCode)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x109f414;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::CertificateID*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::CertificateID*>::get(), 2));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::CertificateID.DeriveCertificateID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::Org::BouncyCastle::Ocsp::CertificateID* (*)(::Org::BouncyCastle::Ocsp::CertificateID*, ::Org::BouncyCastle::Math::BigInteger*)>(&::Org::BouncyCastle::Ocsp::CertificateID::DeriveCertificateID)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x109f440;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::CertificateID*>::get(), "DeriveCertificateID", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Ocsp::CertificateID*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::CertificateID.CreateCertID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Org::BouncyCastle::Asn1::Ocsp::CertID* (*)(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, ::Org::BouncyCastle::X509::X509Certificate*,
                                                             ::Org::BouncyCastle::Asn1::DerInteger*)>(&::Org::BouncyCastle::Ocsp::CertificateID::CreateCertID)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x109ef90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::CertificateID*>::get(), "CreateCertID", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Certificate*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerInteger*>::get() })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::Ocsp::CertID*& Org::BouncyCastle::Ocsp::CertificateID::__get_id() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___id;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Ocsp::CertID*> const& Org::BouncyCastle::Ocsp::CertificateID::__get_id() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___id;
}
constexpr void Org::BouncyCastle::Ocsp::CertificateID::__set_id(::Org::BouncyCastle::Asn1::Ocsp::CertID* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___id)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Org::BouncyCastle::Ocsp::CertificateID* Org::BouncyCastle::Ocsp::CertificateID::New_ctor(::Org::BouncyCastle::Asn1::Ocsp::CertID* id) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Ocsp::CertificateID*>(id));
}
inline void Org::BouncyCastle::Ocsp::CertificateID::_ctor(::Org::BouncyCastle::Asn1::Ocsp::CertID* id) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::CertificateID*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Ocsp::CertID*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, id);
}
inline ::Org::BouncyCastle::Ocsp::CertificateID* Org::BouncyCastle::Ocsp::CertificateID::New_ctor(::StringW hashAlgorithm, ::Org::BouncyCastle::X509::X509Certificate* issuerCert,
                                                                                                  ::Org::BouncyCastle::Math::BigInteger* serialNumber) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Ocsp::CertificateID*>(hashAlgorithm, issuerCert, serialNumber));
}
inline void Org::BouncyCastle::Ocsp::CertificateID::_ctor(::StringW hashAlgorithm, ::Org::BouncyCastle::X509::X509Certificate* issuerCert, ::Org::BouncyCastle::Math::BigInteger* serialNumber) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::CertificateID*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Certificate*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, hashAlgorithm, issuerCert, serialNumber);
}
inline ::StringW Org::BouncyCastle::Ocsp::CertificateID::get_HashAlgOid() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::CertificateID*>::get(), "get_HashAlgOid",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Ocsp::CertificateID::GetIssuerNameHash() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::CertificateID*>::get(),
                                                                             "GetIssuerNameHash", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Ocsp::CertificateID::GetIssuerKeyHash() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::CertificateID*>::get(),
                                                                             "GetIssuerKeyHash", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Ocsp::CertificateID::get_SerialNumber() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::CertificateID*>::get(),
                                                                             "get_SerialNumber", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*, false>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Ocsp::CertificateID::MatchesIssuer(::Org::BouncyCastle::X509::X509Certificate* issuerCert) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::CertificateID*>::get(), "MatchesIssuer", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Certificate*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, issuerCert);
}
inline ::Org::BouncyCastle::Asn1::Ocsp::CertID* Org::BouncyCastle::Ocsp::CertificateID::ToAsn1Object() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::CertificateID*>::get(), "ToAsn1Object",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Ocsp::CertID*, false>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Ocsp::CertificateID::Equals(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::CertificateID*>::get(), "Equals", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
inline int32_t Org::BouncyCastle::Ocsp::CertificateID::GetHashCode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::CertificateID*>::get(), "GetHashCode",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Ocsp::CertificateID* Org::BouncyCastle::Ocsp::CertificateID::DeriveCertificateID(::Org::BouncyCastle::Ocsp::CertificateID* original,
                                                                                                             ::Org::BouncyCastle::Math::BigInteger* newSerialNumber) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::CertificateID*>::get(), "DeriveCertificateID", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Ocsp::CertificateID*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Ocsp::CertificateID*, false>(nullptr, ___internal_method, original, newSerialNumber);
}
inline ::Org::BouncyCastle::Asn1::Ocsp::CertID* Org::BouncyCastle::Ocsp::CertificateID::CreateCertID(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* hashAlg,
                                                                                                     ::Org::BouncyCastle::X509::X509Certificate* issuerCert,
                                                                                                     ::Org::BouncyCastle::Asn1::DerInteger* serialNumber) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::CertificateID*>::get(), "CreateCertID", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Certificate*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerInteger*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Ocsp::CertID*, false>(nullptr, ___internal_method, hashAlg, issuerCert, serialNumber);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Ocsp::CertificateID::CertificateID() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
