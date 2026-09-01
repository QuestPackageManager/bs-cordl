#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Asn1\X509\CertificateList.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__CertificateList_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AlgorithmIdentifier_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__CrlEntry_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__TbsCertificateList_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__Time_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__X509Name_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1TaggedObject_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerBitString_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::CertificateList.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::CertificateList* (*)(::Org::BouncyCastle::Asn1::Asn1TaggedObject*, bool)>(
    &::Org::BouncyCastle::Asn1::X509::CertificateList::GetInstance)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x355e1ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::CertificateList*>(),
                                                             { "GetInstance", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1TaggedObject*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::CertificateList.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::CertificateList* (*)(::System::Object*)>(&::Org::BouncyCastle::Asn1::X509::CertificateList::GetInstance)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x355e200;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::CertificateList*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::CertificateList._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X509::CertificateList::*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(
    &::Org::BouncyCastle::Asn1::X509::CertificateList::_ctor)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x355e2a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::CertificateList*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::CertificateList.get_TbsCertList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::TbsCertificateList* (::Org::BouncyCastle::Asn1::X509::CertificateList::*)()>(
    &::Org::BouncyCastle::Asn1::X509::CertificateList::get_TbsCertList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x355e3ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::CertificateList*>(), { "get_TbsCertList", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::CertificateList.GetRevokedCertificates
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Org::BouncyCastle::Asn1::X509::CrlEntry*> (::Org::BouncyCastle::Asn1::X509::CertificateList::*)()>(
    &::Org::BouncyCastle::Asn1::X509::CertificateList::GetRevokedCertificates)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x355e3f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::CertificateList*>(), { "GetRevokedCertificates", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::CertificateList.GetRevokedCertificateEnumeration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerable* (::Org::BouncyCastle::Asn1::X509::CertificateList::*)()>(
    &::Org::BouncyCastle::Asn1::X509::CertificateList::GetRevokedCertificateEnumeration)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x355e40c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::CertificateList*>(), { "GetRevokedCertificateEnumeration", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::CertificateList.get_SignatureAlgorithm
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* (::Org::BouncyCastle::Asn1::X509::CertificateList::*)()>(
    &::Org::BouncyCastle::Asn1::X509::CertificateList::get_SignatureAlgorithm)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x355e424;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::CertificateList*>(), { "get_SignatureAlgorithm", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::CertificateList.get_Signature
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::DerBitString* (::Org::BouncyCastle::Asn1::X509::CertificateList::*)()>(
    &::Org::BouncyCastle::Asn1::X509::CertificateList::get_Signature)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x355e42c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::CertificateList*>(), { "get_Signature", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::CertificateList.GetSignatureOctets
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Asn1::X509::CertificateList::*)()>(
    &::Org::BouncyCastle::Asn1::X509::CertificateList::GetSignatureOctets)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x355e434;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::CertificateList*>(), { "GetSignatureOctets", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::CertificateList.get_Version
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Asn1::X509::CertificateList::*)()>(&::Org::BouncyCastle::Asn1::X509::CertificateList::get_Version)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x355e450;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::CertificateList*>(), { "get_Version", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::CertificateList.get_Issuer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::X509Name* (::Org::BouncyCastle::Asn1::X509::CertificateList::*)()>(
    &::Org::BouncyCastle::Asn1::X509::CertificateList::get_Issuer)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x355e468;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::CertificateList*>(), { "get_Issuer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::CertificateList.get_ThisUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::Time* (::Org::BouncyCastle::Asn1::X509::CertificateList::*)()>(
    &::Org::BouncyCastle::Asn1::X509::CertificateList::get_ThisUpdate)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x355e480;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::CertificateList*>(), { "get_ThisUpdate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::CertificateList.get_NextUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::Time* (::Org::BouncyCastle::Asn1::X509::CertificateList::*)()>(
    &::Org::BouncyCastle::Asn1::X509::CertificateList::get_NextUpdate)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x355e498;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::CertificateList*>(), { "get_NextUpdate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::CertificateList.ToAsn1Object
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::X509::CertificateList::*)()>(
    &::Org::BouncyCastle::Asn1::X509::CertificateList::ToAsn1Object)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x355e4b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::CertificateList*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::X509::CertificateList*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::X509::TbsCertificateList*& Org::BouncyCastle::Asn1::X509::CertificateList::__cordl_internal_get_tbsCertList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tbsCertList;
}
constexpr ::Org::BouncyCastle::Asn1::X509::TbsCertificateList* const& Org::BouncyCastle::Asn1::X509::CertificateList::__cordl_internal_get_tbsCertList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tbsCertList;
}
constexpr void Org::BouncyCastle::Asn1::X509::CertificateList::__cordl_internal_set_tbsCertList(::Org::BouncyCastle::Asn1::X509::TbsCertificateList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___tbsCertList = value;
}
constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& Org::BouncyCastle::Asn1::X509::CertificateList::__cordl_internal_get_sigAlgID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sigAlgID;
}
constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* const& Org::BouncyCastle::Asn1::X509::CertificateList::__cordl_internal_get_sigAlgID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sigAlgID;
}
constexpr void Org::BouncyCastle::Asn1::X509::CertificateList::__cordl_internal_set_sigAlgID(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sigAlgID = value;
}
constexpr ::Org::BouncyCastle::Asn1::DerBitString*& Org::BouncyCastle::Asn1::X509::CertificateList::__cordl_internal_get_sig() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sig;
}
constexpr ::Org::BouncyCastle::Asn1::DerBitString* const& Org::BouncyCastle::Asn1::X509::CertificateList::__cordl_internal_get_sig() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sig;
}
constexpr void Org::BouncyCastle::Asn1::X509::CertificateList::__cordl_internal_set_sig(::Org::BouncyCastle::Asn1::DerBitString* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sig = value;
}
inline ::Org::BouncyCastle::Asn1::X509::CertificateList* Org::BouncyCastle::Asn1::X509::CertificateList::GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool explicitly) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::CertificateList*>(),
                                                           { "GetInstance", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1TaggedObject*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::CertificateList*>(nullptr, ___internal_method, obj, explicitly);
}
inline ::Org::BouncyCastle::Asn1::X509::CertificateList* Org::BouncyCastle::Asn1::X509::CertificateList::GetInstance(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::CertificateList*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::CertificateList*>(nullptr, ___internal_method, obj);
}
inline void Org::BouncyCastle::Asn1::X509::CertificateList::_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::CertificateList*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seq);
}
inline ::Org::BouncyCastle::Asn1::X509::TbsCertificateList* Org::BouncyCastle::Asn1::X509::CertificateList::get_TbsCertList() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::CertificateList*>(), { "get_TbsCertList", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::TbsCertificateList*>(this, ___internal_method);
}
inline ::ArrayW<::Org::BouncyCastle::Asn1::X509::CrlEntry*> Org::BouncyCastle::Asn1::X509::CertificateList::GetRevokedCertificates() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::CertificateList*>(), { "GetRevokedCertificates", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::Org::BouncyCastle::Asn1::X509::CrlEntry*>>(this, ___internal_method);
}
inline ::System::Collections::IEnumerable* Org::BouncyCastle::Asn1::X509::CertificateList::GetRevokedCertificateEnumeration() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::CertificateList*>(), { "GetRevokedCertificateEnumeration", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerable*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* Org::BouncyCastle::Asn1::X509::CertificateList::get_SignatureAlgorithm() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::CertificateList*>(), { "get_SignatureAlgorithm", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::DerBitString* Org::BouncyCastle::Asn1::X509::CertificateList::get_Signature() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::CertificateList*>(), { "get_Signature", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerBitString*>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Asn1::X509::CertificateList::GetSignatureOctets() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::CertificateList*>(), { "GetSignatureOctets", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Asn1::X509::CertificateList::get_Version() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::CertificateList*>(), { "get_Version", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::X509Name* Org::BouncyCastle::Asn1::X509::CertificateList::get_Issuer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::CertificateList*>(), { "get_Issuer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::X509Name*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::Time* Org::BouncyCastle::Asn1::X509::CertificateList::get_ThisUpdate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::CertificateList*>(), { "get_ThisUpdate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::Time*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::Time* Org::BouncyCastle::Asn1::X509::CertificateList::get_NextUpdate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::CertificateList*>(), { "get_NextUpdate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::Time*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::X509::CertificateList::ToAsn1Object() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::X509::CertificateList*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::CertificateList* Org::BouncyCastle::Asn1::X509::CertificateList::New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X509::CertificateList*>(seq));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::X509::CertificateList::CertificateList() {}
