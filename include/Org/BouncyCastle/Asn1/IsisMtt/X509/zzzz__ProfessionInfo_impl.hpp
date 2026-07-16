#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/IsisMtt/X509/ProfessionInfo.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/IsisMtt/X509/zzzz__ProfessionInfo_def.hpp"
#include "Org/BouncyCastle/Asn1/IsisMtt/X509/zzzz__NamingAuthority_def.hpp"
#include "Org/BouncyCastle/Asn1/X500/zzzz__DirectoryString_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1OctetString_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo* (*)(::System::Object*)>(
    &::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::GetInstance)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x344fa1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(
    &::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::_ctor)> {
  constexpr static std::size_t size = 0x8ac;
  constexpr static std::size_t addrs = 0x3451e64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::*)(
    ::Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority*, ::ArrayW<::Org::BouncyCastle::Asn1::X500::DirectoryString*>, ::ArrayW<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>, ::StringW,
    ::Org::BouncyCastle::Asn1::Asn1OctetString*)>(&::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::_ctor)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x3452710;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*>(),
                                         { ".ctor",
                                           {},
                                           { ::i2c::type_of<::Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority*>(),
                                             ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Asn1::X500::DirectoryString*>>(), ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>>(),
                                             ::i2c::type_of<::StringW>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1OctetString*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo.ToAsn1Object
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::*)()>(
    &::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::ToAsn1Object)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x34527bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo.get_AddProfessionInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1OctetString* (::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::*)()>(
    &::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::get_AddProfessionInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3452988;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo.get_NamingAuthority
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority* (::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::*)()>(
    &::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::get_NamingAuthority)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3452990;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo.GetProfessionItems
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Org::BouncyCastle::Asn1::X500::DirectoryString*> (::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::*)()>(
    &::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::GetProfessionItems)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x3452998;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo.GetProfessionOids
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Org::BouncyCastle::Asn1::DerObjectIdentifier*> (::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::*)()>(
    &::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::GetProfessionOids)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x3452ab0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo.get_RegistrationNumber
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::*)()>(
    &::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::get_RegistrationNumber)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3452c18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*>(), 10 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority*& Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::__cordl_internal_get_namingAuthority() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___namingAuthority;
}
constexpr ::Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority* const& Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::__cordl_internal_get_namingAuthority() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___namingAuthority;
}
constexpr void Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::__cordl_internal_set_namingAuthority(::Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___namingAuthority = value;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::__cordl_internal_get_professionItems() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___professionItems;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence* const& Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::__cordl_internal_get_professionItems() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___professionItems;
}
constexpr void Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::__cordl_internal_set_professionItems(::Org::BouncyCastle::Asn1::Asn1Sequence* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___professionItems = value;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::__cordl_internal_get_professionOids() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___professionOids;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence* const& Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::__cordl_internal_get_professionOids() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___professionOids;
}
constexpr void Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::__cordl_internal_set_professionOids(::Org::BouncyCastle::Asn1::Asn1Sequence* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___professionOids = value;
}
constexpr ::StringW& Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::__cordl_internal_get_registrationNumber() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___registrationNumber;
}
constexpr ::StringW const& Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::__cordl_internal_get_registrationNumber() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___registrationNumber;
}
constexpr void Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::__cordl_internal_set_registrationNumber(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___registrationNumber = value;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString*& Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::__cordl_internal_get_addProfessionInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___addProfessionInfo;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString* const& Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::__cordl_internal_get_addProfessionInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___addProfessionInfo;
}
constexpr void Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::__cordl_internal_set_addProfessionInfo(::Org::BouncyCastle::Asn1::Asn1OctetString* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___addProfessionInfo = value;
}
inline void Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::setStaticF_Rechtsanwltin(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "Rechtsanwltin", ::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::getStaticF_Rechtsanwltin() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "Rechtsanwltin", ::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*>();
}
inline void Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::setStaticF_Rechtsanwalt(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "Rechtsanwalt", ::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::getStaticF_Rechtsanwalt() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "Rechtsanwalt", ::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*>();
}
inline void Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::setStaticF_Rechtsbeistand(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "Rechtsbeistand", ::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::getStaticF_Rechtsbeistand() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "Rechtsbeistand", ::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*>();
}
inline void Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::setStaticF_Steuerberaterin(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "Steuerberaterin", ::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::getStaticF_Steuerberaterin() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "Steuerberaterin", ::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*>();
}
inline void Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::setStaticF_Steuerberater(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "Steuerberater", ::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::getStaticF_Steuerberater() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "Steuerberater", ::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*>();
}
inline void Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::setStaticF_Steuerbevollmchtigte(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "Steuerbevollmchtigte", ::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::getStaticF_Steuerbevollmchtigte() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "Steuerbevollmchtigte", ::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*>();
}
inline void Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::setStaticF_Steuerbevollmchtigter(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "Steuerbevollmchtigter", ::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::getStaticF_Steuerbevollmchtigter() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "Steuerbevollmchtigter", ::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*>();
}
inline void Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::setStaticF_Notarin(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "Notarin", ::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::getStaticF_Notarin() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "Notarin", ::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*>();
}
inline void Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::setStaticF_Notar(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "Notar", ::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::getStaticF_Notar() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "Notar", ::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*>();
}
inline void Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::setStaticF_Notarvertreterin(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "Notarvertreterin", ::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::getStaticF_Notarvertreterin() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "Notarvertreterin", ::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*>();
}
inline void Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::setStaticF_Notarvertreter(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "Notarvertreter", ::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::getStaticF_Notarvertreter() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "Notarvertreter", ::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*>();
}
inline void Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::setStaticF_Notariatsverwalterin(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "Notariatsverwalterin", ::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::getStaticF_Notariatsverwalterin() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "Notariatsverwalterin", ::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*>();
}
inline void Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::setStaticF_Notariatsverwalter(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "Notariatsverwalter", ::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::getStaticF_Notariatsverwalter() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "Notariatsverwalter", ::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*>();
}
inline void Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::setStaticF_Wirtschaftsprferin(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "Wirtschaftsprferin", ::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::getStaticF_Wirtschaftsprferin() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "Wirtschaftsprferin", ::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*>();
}
inline void Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::setStaticF_Wirtschaftsprfer(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "Wirtschaftsprfer", ::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::getStaticF_Wirtschaftsprfer() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "Wirtschaftsprfer", ::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*>();
}
inline void Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::setStaticF_VereidigteBuchprferin(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "VereidigteBuchprferin", ::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::getStaticF_VereidigteBuchprferin() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "VereidigteBuchprferin", ::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*>();
}
inline void Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::setStaticF_VereidigterBuchprfer(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "VereidigterBuchprfer", ::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::getStaticF_VereidigterBuchprfer() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "VereidigterBuchprfer", ::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*>();
}
inline void Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::setStaticF_Patentanwltin(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "Patentanwltin", ::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::getStaticF_Patentanwltin() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "Patentanwltin", ::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*>();
}
inline void Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::setStaticF_Patentanwalt(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "Patentanwalt", ::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::getStaticF_Patentanwalt() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "Patentanwalt", ::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*>();
}
inline ::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo* Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::GetInstance(::System::Object* obj) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*>(nullptr, ___internal_method, obj);
}
inline void Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seq);
}
inline void Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::_ctor(::Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority* namingAuthority,
                                                                          ::ArrayW<::Org::BouncyCastle::Asn1::X500::DirectoryString*> professionItems,
                                                                          ::ArrayW<::Org::BouncyCastle::Asn1::DerObjectIdentifier*> professionOids, ::StringW registrationNumber,
                                                                          ::Org::BouncyCastle::Asn1::Asn1OctetString* addProfessionInfo) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*>(),
                                       { ".ctor",
                                         {},
                                         { ::i2c::type_of<::Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority*>(), ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Asn1::X500::DirectoryString*>>(),
                                           ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>>(), ::i2c::type_of<::StringW>(),
                                           ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1OctetString*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, namingAuthority, professionItems, professionOids, registrationNumber, addProfessionInfo);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::ToAsn1Object() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1OctetString* Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::get_AddProfessionInfo() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1OctetString*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority* Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::get_NamingAuthority() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority*>(this, ___internal_method);
}
inline ::ArrayW<::Org::BouncyCastle::Asn1::X500::DirectoryString*> Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::GetProfessionItems() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::Org::BouncyCastle::Asn1::X500::DirectoryString*>>(this, ___internal_method);
}
inline ::ArrayW<::Org::BouncyCastle::Asn1::DerObjectIdentifier*> Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::GetProfessionOids() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>>(this, ___internal_method);
}
inline ::StringW Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::get_RegistrationNumber() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo* Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*>(seq));
}
inline ::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo* Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::New_ctor(
    ::Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority* namingAuthority, ::ArrayW<::Org::BouncyCastle::Asn1::X500::DirectoryString*> professionItems,
    ::ArrayW<::Org::BouncyCastle::Asn1::DerObjectIdentifier*> professionOids, ::StringW registrationNumber, ::Org::BouncyCastle::Asn1::Asn1OctetString* addProfessionInfo) {
  return THROW_UNLESS(::i2c::no_logger{},
                      ::i2c::new_ctor<::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*>(namingAuthority, professionItems, professionOids, registrationNumber, addProfessionInfo));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::ProfessionInfo() {}
