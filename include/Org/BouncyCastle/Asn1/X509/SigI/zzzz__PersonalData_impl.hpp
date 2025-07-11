#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/X509/SigI/PersonalData.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/X509/SigI/zzzz__PersonalData_def.hpp"
#include "Org/BouncyCastle/Asn1/X500/zzzz__DirectoryString_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/SigI/zzzz__NameOrPseudonym_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerGeneralizedTime_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::SigI::PersonalData.GetInstance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X509::SigI::PersonalData* (*)(::System::Object*)>(
    &::Org::BouncyCastle::Asn1::X509::SigI::PersonalData::GetInstance)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x2504350;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::SigI::PersonalData*>::get(), "GetInstance",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::SigI::PersonalData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::X509::SigI::PersonalData::*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(
    &::Org::BouncyCastle::Asn1::X509::SigI::PersonalData::_ctor)> {
  constexpr static std::size_t size = 0x364;
  constexpr static std::size_t addrs = 0x25044cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::SigI::PersonalData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Sequence*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::SigI::PersonalData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::X509::SigI::PersonalData::*)(
    ::Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym*, ::Org::BouncyCastle::Math::BigInteger*, ::Org::BouncyCastle::Asn1::DerGeneralizedTime*, ::Org::BouncyCastle::Asn1::X500::DirectoryString*,
    ::StringW, ::Org::BouncyCastle::Asn1::X500::DirectoryString*)>(&::Org::BouncyCastle::Asn1::X509::SigI::PersonalData::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2504830;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::SigI::PersonalData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerGeneralizedTime*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X500::DirectoryString*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X500::DirectoryString*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::SigI::PersonalData.get_NameOrPseudonym
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym* (::Org::BouncyCastle::Asn1::X509::SigI::PersonalData::*)()>(
    &::Org::BouncyCastle::Asn1::X509::SigI::PersonalData::get_NameOrPseudonym)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2504884;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::SigI::PersonalData*>::get(),
                                                                               "get_NameOrPseudonym", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::SigI::PersonalData.get_NameDistinguisher
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::Asn1::X509::SigI::PersonalData::*)()>(
    &::Org::BouncyCastle::Asn1::X509::SigI::PersonalData::get_NameDistinguisher)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x250488c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::SigI::PersonalData*>::get(),
                                                                               "get_NameDistinguisher", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::SigI::PersonalData.get_DateOfBirth
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::DerGeneralizedTime* (::Org::BouncyCastle::Asn1::X509::SigI::PersonalData::*)()>(
    &::Org::BouncyCastle::Asn1::X509::SigI::PersonalData::get_DateOfBirth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2504894;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::SigI::PersonalData*>::get(),
                                                                               "get_DateOfBirth", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::SigI::PersonalData.get_PlaceOfBirth
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X500::DirectoryString* (::Org::BouncyCastle::Asn1::X509::SigI::PersonalData::*)()>(
    &::Org::BouncyCastle::Asn1::X509::SigI::PersonalData::get_PlaceOfBirth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x250489c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::SigI::PersonalData*>::get(),
                                                                               "get_PlaceOfBirth", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::SigI::PersonalData.get_Gender
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Org::BouncyCastle::Asn1::X509::SigI::PersonalData::*)()>(
    &::Org::BouncyCastle::Asn1::X509::SigI::PersonalData::get_Gender)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25048a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::SigI::PersonalData*>::get(),
                                                                               "get_Gender", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::SigI::PersonalData.get_PostalAddress
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X500::DirectoryString* (::Org::BouncyCastle::Asn1::X509::SigI::PersonalData::*)()>(
    &::Org::BouncyCastle::Asn1::X509::SigI::PersonalData::get_PostalAddress)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25048ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::SigI::PersonalData*>::get(),
                                                                               "get_PostalAddress", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::SigI::PersonalData.ToAsn1Object
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::X509::SigI::PersonalData::*)()>(
    &::Org::BouncyCastle::Asn1::X509::SigI::PersonalData::ToAsn1Object)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x25048b4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::SigI::PersonalData*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::SigI::PersonalData*>::get(), 5));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym*& Org::BouncyCastle::Asn1::X509::SigI::PersonalData::__cordl_internal_get_nameOrPseudonym() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nameOrPseudonym;
}
constexpr ::Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym* const& Org::BouncyCastle::Asn1::X509::SigI::PersonalData::__cordl_internal_get_nameOrPseudonym() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nameOrPseudonym;
}
constexpr void Org::BouncyCastle::Asn1::X509::SigI::PersonalData::__cordl_internal_set_nameOrPseudonym(::Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___nameOrPseudonym)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Math::BigInteger*& Org::BouncyCastle::Asn1::X509::SigI::PersonalData::__cordl_internal_get_nameDistinguisher() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nameDistinguisher;
}
constexpr ::Org::BouncyCastle::Math::BigInteger* const& Org::BouncyCastle::Asn1::X509::SigI::PersonalData::__cordl_internal_get_nameDistinguisher() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nameDistinguisher;
}
constexpr void Org::BouncyCastle::Asn1::X509::SigI::PersonalData::__cordl_internal_set_nameDistinguisher(::Org::BouncyCastle::Math::BigInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___nameDistinguisher)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Asn1::DerGeneralizedTime*& Org::BouncyCastle::Asn1::X509::SigI::PersonalData::__cordl_internal_get_dateOfBirth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dateOfBirth;
}
constexpr ::Org::BouncyCastle::Asn1::DerGeneralizedTime* const& Org::BouncyCastle::Asn1::X509::SigI::PersonalData::__cordl_internal_get_dateOfBirth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dateOfBirth;
}
constexpr void Org::BouncyCastle::Asn1::X509::SigI::PersonalData::__cordl_internal_set_dateOfBirth(::Org::BouncyCastle::Asn1::DerGeneralizedTime* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___dateOfBirth)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Asn1::X500::DirectoryString*& Org::BouncyCastle::Asn1::X509::SigI::PersonalData::__cordl_internal_get_placeOfBirth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___placeOfBirth;
}
constexpr ::Org::BouncyCastle::Asn1::X500::DirectoryString* const& Org::BouncyCastle::Asn1::X509::SigI::PersonalData::__cordl_internal_get_placeOfBirth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___placeOfBirth;
}
constexpr void Org::BouncyCastle::Asn1::X509::SigI::PersonalData::__cordl_internal_set_placeOfBirth(::Org::BouncyCastle::Asn1::X500::DirectoryString* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___placeOfBirth)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Org::BouncyCastle::Asn1::X509::SigI::PersonalData::__cordl_internal_get_gender() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gender;
}
constexpr ::StringW const& Org::BouncyCastle::Asn1::X509::SigI::PersonalData::__cordl_internal_get_gender() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gender;
}
constexpr void Org::BouncyCastle::Asn1::X509::SigI::PersonalData::__cordl_internal_set_gender(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___gender)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Asn1::X500::DirectoryString*& Org::BouncyCastle::Asn1::X509::SigI::PersonalData::__cordl_internal_get_postalAddress() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___postalAddress;
}
constexpr ::Org::BouncyCastle::Asn1::X500::DirectoryString* const& Org::BouncyCastle::Asn1::X509::SigI::PersonalData::__cordl_internal_get_postalAddress() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___postalAddress;
}
constexpr void Org::BouncyCastle::Asn1::X509::SigI::PersonalData::__cordl_internal_set_postalAddress(::Org::BouncyCastle::Asn1::X500::DirectoryString* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___postalAddress)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Org::BouncyCastle::Asn1::X509::SigI::PersonalData* Org::BouncyCastle::Asn1::X509::SigI::PersonalData::GetInstance(::System::Object* obj) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::SigI::PersonalData*>::get(), "GetInstance",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::SigI::PersonalData*, false>(nullptr, ___internal_method, obj);
}
inline void Org::BouncyCastle::Asn1::X509::SigI::PersonalData::_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::SigI::PersonalData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Sequence*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, seq);
}
inline void Org::BouncyCastle::Asn1::X509::SigI::PersonalData::_ctor(::Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym* nameOrPseudonym, ::Org::BouncyCastle::Math::BigInteger* nameDistinguisher,
                                                                     ::Org::BouncyCastle::Asn1::DerGeneralizedTime* dateOfBirth, ::Org::BouncyCastle::Asn1::X500::DirectoryString* placeOfBirth,
                                                                     ::StringW gender, ::Org::BouncyCastle::Asn1::X500::DirectoryString* postalAddress) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::SigI::PersonalData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym*>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerGeneralizedTime*>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X500::DirectoryString*>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X500::DirectoryString*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, nameOrPseudonym, nameDistinguisher, dateOfBirth, placeOfBirth, gender, postalAddress);
}
inline ::Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym* Org::BouncyCastle::Asn1::X509::SigI::PersonalData::get_NameOrPseudonym() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::SigI::PersonalData*>::get(),
                                                                             "get_NameOrPseudonym", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Asn1::X509::SigI::PersonalData::get_NameDistinguisher() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::SigI::PersonalData*>::get(),
                                                                             "get_NameDistinguisher", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::DerGeneralizedTime* Org::BouncyCastle::Asn1::X509::SigI::PersonalData::get_DateOfBirth() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::SigI::PersonalData*>::get(),
                                                                             "get_DateOfBirth", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerGeneralizedTime*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X500::DirectoryString* Org::BouncyCastle::Asn1::X509::SigI::PersonalData::get_PlaceOfBirth() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::SigI::PersonalData*>::get(),
                                                                             "get_PlaceOfBirth", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X500::DirectoryString*, false>(this, ___internal_method);
}
inline ::StringW Org::BouncyCastle::Asn1::X509::SigI::PersonalData::get_Gender() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::SigI::PersonalData*>::get(),
                                                                             "get_Gender", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X500::DirectoryString* Org::BouncyCastle::Asn1::X509::SigI::PersonalData::get_PostalAddress() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::SigI::PersonalData*>::get(),
                                                                             "get_PostalAddress", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X500::DirectoryString*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::X509::SigI::PersonalData::ToAsn1Object() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::SigI::PersonalData*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::SigI::PersonalData* Org::BouncyCastle::Asn1::X509::SigI::PersonalData::New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Asn1::X509::SigI::PersonalData*>(seq));
}
inline ::Org::BouncyCastle::Asn1::X509::SigI::PersonalData*
Org::BouncyCastle::Asn1::X509::SigI::PersonalData::New_ctor(::Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym* nameOrPseudonym, ::Org::BouncyCastle::Math::BigInteger* nameDistinguisher,
                                                            ::Org::BouncyCastle::Asn1::DerGeneralizedTime* dateOfBirth, ::Org::BouncyCastle::Asn1::X500::DirectoryString* placeOfBirth,
                                                            ::StringW gender, ::Org::BouncyCastle::Asn1::X500::DirectoryString* postalAddress) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Asn1::X509::SigI::PersonalData*>(nameOrPseudonym, nameDistinguisher, dateOfBirth, placeOfBirth, gender, postalAddress));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::X509::SigI::PersonalData::PersonalData() {}
