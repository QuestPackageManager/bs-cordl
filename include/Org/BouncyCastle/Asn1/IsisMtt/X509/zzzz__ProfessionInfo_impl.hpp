#pragma once
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/IsisMtt/X509/zzzz__ProfessionInfo_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1OctetString_def.hpp"
#include "Org/BouncyCastle/Asn1/IsisMtt/X509/zzzz__NamingAuthority_def.hpp"
#include "Org/BouncyCastle/Asn1/X500/zzzz__DirectoryString_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo.GetInstance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo* (*)(::System::Object*)>(
    &::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::GetInstance)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0xf014d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*>::get(), "GetInstance",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(
    &::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::_ctor)> {
  constexpr static std::size_t size = 0x8b0;
  constexpr static std::size_t addrs = 0xf03a30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Sequence*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::*)(
    ::Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority*, ::ArrayW<::Org::BouncyCastle::Asn1::X500::DirectoryString*, ::Array<::Org::BouncyCastle::Asn1::X500::DirectoryString*>*>,
    ::ArrayW<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::Array<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>*>, ::StringW, ::Org::BouncyCastle::Asn1::Asn1OctetString*)>(
    &::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::_ctor)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xf042e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::Org::BouncyCastle::Asn1::X500::DirectoryString*, ::Array<::Org::BouncyCastle::Asn1::X500::DirectoryString*>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::Array<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1OctetString*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo.ToAsn1Object
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::*)()>(
    &::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::ToAsn1Object)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0xf043a8;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo.get_AddProfessionInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Asn1OctetString* (::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::*)()>(
    &::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::get_AddProfessionInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf04570;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo.get_NamingAuthority
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority* (
    ::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::*)()>(&::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::get_NamingAuthority)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf04578;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo.GetProfessionItems
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::ArrayW<::Org::BouncyCastle::Asn1::X500::DirectoryString*, ::Array<::Org::BouncyCastle::Asn1::X500::DirectoryString*>*> (::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::*)()>(
    &::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::GetProfessionItems)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0xf04580;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo.GetProfessionOids
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::Array<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>*> (
    ::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::*)()>(&::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::GetProfessionOids)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0xf04694;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo.get_RegistrationNumber
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::*)()>(
    &::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::get_RegistrationNumber)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf047fc;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*>::get(), 10));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority*& Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::__get_namingAuthority() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___namingAuthority;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority*> const& Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::__get_namingAuthority() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___namingAuthority;
}
constexpr void Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::__set_namingAuthority(::Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___namingAuthority)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::__get_professionItems() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___professionItems;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Sequence*> const& Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::__get_professionItems() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___professionItems;
}
constexpr void Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::__set_professionItems(::Org::BouncyCastle::Asn1::Asn1Sequence* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___professionItems)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::__get_professionOids() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___professionOids;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Sequence*> const& Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::__get_professionOids() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___professionOids;
}
constexpr void Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::__set_professionOids(::Org::BouncyCastle::Asn1::Asn1Sequence* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___professionOids)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::__get_registrationNumber() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___registrationNumber;
}
constexpr ::StringW const& Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::__get_registrationNumber() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___registrationNumber;
}
constexpr void Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::__set_registrationNumber(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___registrationNumber)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString*& Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::__get_addProfessionInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___addProfessionInfo;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1OctetString*> const& Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::__get_addProfessionInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___addProfessionInfo;
}
constexpr void Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::__set_addProfessionInfo(::Org::BouncyCastle::Asn1::Asn1OctetString* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___addProfessionInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::setStaticF_Rechtsanwltin(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "Rechtsanwltin",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*>::get>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::getStaticF_Rechtsanwltin() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "Rechtsanwltin",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*>::get>();
}
inline void Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::setStaticF_Rechtsanwalt(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "Rechtsanwalt",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*>::get>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::getStaticF_Rechtsanwalt() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "Rechtsanwalt",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*>::get>();
}
inline void Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::setStaticF_Rechtsbeistand(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "Rechtsbeistand",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*>::get>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::getStaticF_Rechtsbeistand() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "Rechtsbeistand",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*>::get>();
}
inline void Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::setStaticF_Steuerberaterin(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "Steuerberaterin",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*>::get>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::getStaticF_Steuerberaterin() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "Steuerberaterin",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*>::get>();
}
inline void Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::setStaticF_Steuerberater(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "Steuerberater",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*>::get>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::getStaticF_Steuerberater() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "Steuerberater",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*>::get>();
}
inline void Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::setStaticF_Steuerbevollmchtigte(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "Steuerbevollmchtigte",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*>::get>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::getStaticF_Steuerbevollmchtigte() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "Steuerbevollmchtigte",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*>::get>();
}
inline void Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::setStaticF_Steuerbevollmchtigter(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "Steuerbevollmchtigter",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*>::get>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::getStaticF_Steuerbevollmchtigter() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "Steuerbevollmchtigter",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*>::get>();
}
inline void Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::setStaticF_Notarin(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "Notarin",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*>::get>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::getStaticF_Notarin() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "Notarin",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*>::get>();
}
inline void Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::setStaticF_Notar(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "Notar",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*>::get>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::getStaticF_Notar() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "Notar",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*>::get>();
}
inline void Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::setStaticF_Notarvertreterin(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "Notarvertreterin",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*>::get>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::getStaticF_Notarvertreterin() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "Notarvertreterin",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*>::get>();
}
inline void Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::setStaticF_Notarvertreter(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "Notarvertreter",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*>::get>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::getStaticF_Notarvertreter() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "Notarvertreter",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*>::get>();
}
inline void Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::setStaticF_Notariatsverwalterin(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "Notariatsverwalterin",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*>::get>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::getStaticF_Notariatsverwalterin() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "Notariatsverwalterin",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*>::get>();
}
inline void Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::setStaticF_Notariatsverwalter(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "Notariatsverwalter",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*>::get>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::getStaticF_Notariatsverwalter() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "Notariatsverwalter",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*>::get>();
}
inline void Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::setStaticF_Wirtschaftsprferin(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "Wirtschaftsprferin",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*>::get>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::getStaticF_Wirtschaftsprferin() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "Wirtschaftsprferin",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*>::get>();
}
inline void Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::setStaticF_Wirtschaftsprfer(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "Wirtschaftsprfer",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*>::get>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::getStaticF_Wirtschaftsprfer() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "Wirtschaftsprfer",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*>::get>();
}
inline void Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::setStaticF_VereidigteBuchprferin(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "VereidigteBuchprferin",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*>::get>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::getStaticF_VereidigteBuchprferin() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "VereidigteBuchprferin",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*>::get>();
}
inline void Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::setStaticF_VereidigterBuchprfer(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "VereidigterBuchprfer",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*>::get>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::getStaticF_VereidigterBuchprfer() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "VereidigterBuchprfer",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*>::get>();
}
inline void Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::setStaticF_Patentanwltin(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "Patentanwltin",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*>::get>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::getStaticF_Patentanwltin() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "Patentanwltin",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*>::get>();
}
inline void Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::setStaticF_Patentanwalt(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "Patentanwalt",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*>::get>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::getStaticF_Patentanwalt() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "Patentanwalt",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*>::get>();
}
inline ::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo* Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::GetInstance(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*>::get(), "GetInstance",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*, false>(nullptr, ___internal_method, obj);
}
inline ::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo* Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*>(seq));
}
inline void Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Sequence*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, seq);
}
inline ::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo* Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::New_ctor(
    ::Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority* namingAuthority,
    ::ArrayW<::Org::BouncyCastle::Asn1::X500::DirectoryString*, ::Array<::Org::BouncyCastle::Asn1::X500::DirectoryString*>*> professionItems,
    ::ArrayW<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::Array<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>*> professionOids, ::StringW registrationNumber,
    ::Org::BouncyCastle::Asn1::Asn1OctetString* addProfessionInfo) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*>(namingAuthority, professionItems, professionOids, registrationNumber, addProfessionInfo));
}
inline void
Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::_ctor(::Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority* namingAuthority,
                                                              ::ArrayW<::Org::BouncyCastle::Asn1::X500::DirectoryString*, ::Array<::Org::BouncyCastle::Asn1::X500::DirectoryString*>*> professionItems,
                                                              ::ArrayW<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::Array<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>*> professionOids,
                                                              ::StringW registrationNumber, ::Org::BouncyCastle::Asn1::Asn1OctetString* addProfessionInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::Org::BouncyCastle::Asn1::X500::DirectoryString*, ::Array<::Org::BouncyCastle::Asn1::X500::DirectoryString*>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::Array<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1OctetString*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, namingAuthority, professionItems, professionOids, registrationNumber, addProfessionInfo);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::ToAsn1Object() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*>::get(),
                                                                             "ToAsn1Object", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1OctetString* Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::get_AddProfessionInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*>::get(),
                                                                             "get_AddProfessionInfo", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1OctetString*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority* Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::get_NamingAuthority() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*>::get(),
                                                                             "get_NamingAuthority", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority*, false>(this, ___internal_method);
}
inline ::ArrayW<::Org::BouncyCastle::Asn1::X500::DirectoryString*, ::Array<::Org::BouncyCastle::Asn1::X500::DirectoryString*>*>
Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::GetProfessionItems() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*>::get(),
                                                                             "GetProfessionItems", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::Org::BouncyCastle::Asn1::X500::DirectoryString*, ::Array<::Org::BouncyCastle::Asn1::X500::DirectoryString*>*>, false>(this, ___internal_method);
}
inline ::ArrayW<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::Array<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>*>
Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::GetProfessionOids() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*>::get(),
                                                                             "GetProfessionOids", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::Array<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>*>, false>(this, ___internal_method);
}
inline ::StringW Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::get_RegistrationNumber() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*>::get(),
                                                                             "get_RegistrationNumber", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo::ProfessionInfo() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
