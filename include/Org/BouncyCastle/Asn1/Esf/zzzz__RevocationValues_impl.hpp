#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Esf/RevocationValues.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/Esf/zzzz__RevocationValues_def.hpp"
#include "Org/BouncyCastle/Asn1/Esf/zzzz__OtherRevVals_def.hpp"
#include "Org/BouncyCastle/Asn1/Ocsp/zzzz__BasicOcspResponse_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__CertificateList_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Esf::RevocationValues.GetInstance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Esf::RevocationValues* (*)(::System::Object*)>(
    &::Org::BouncyCastle::Asn1::Esf::RevocationValues::GetInstance)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2322be8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Esf::RevocationValues*>::get(), "GetInstance",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Esf::RevocationValues._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::Esf::RevocationValues::*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(
    &::Org::BouncyCastle::Asn1::Esf::RevocationValues::_ctor)> {
  constexpr static std::size_t size = 0xa60;
  constexpr static std::size_t addrs = 0x2322c8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Esf::RevocationValues*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Sequence*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Esf::RevocationValues._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::Esf::RevocationValues::*)(
    ::ArrayW<::Org::BouncyCastle::Asn1::X509::CertificateList*, ::Array<::Org::BouncyCastle::Asn1::X509::CertificateList*>*>,
    ::ArrayW<::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse*, ::Array<::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse*>*>, ::Org::BouncyCastle::Asn1::Esf::OtherRevVals*)>(
    &::Org::BouncyCastle::Asn1::Esf::RevocationValues::_ctor)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x23236ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Esf::RevocationValues*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::Org::BouncyCastle::Asn1::X509::CertificateList*, ::Array<::Org::BouncyCastle::Asn1::X509::CertificateList*>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse*, ::Array<::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse*>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Esf::OtherRevVals*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Esf::RevocationValues._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::Esf::RevocationValues::*)(
    ::System::Collections::IEnumerable*, ::System::Collections::IEnumerable*, ::Org::BouncyCastle::Asn1::Esf::OtherRevVals*)>(&::Org::BouncyCastle::Asn1::Esf::RevocationValues::_ctor)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x2323798;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Esf::RevocationValues*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEnumerable*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEnumerable*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Esf::OtherRevVals*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Esf::RevocationValues.GetCrlVals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::Org::BouncyCastle::Asn1::X509::CertificateList*, ::Array<::Org::BouncyCastle::Asn1::X509::CertificateList*>*> (::Org::BouncyCastle::Asn1::Esf::RevocationValues::*)()>(
        &::Org::BouncyCastle::Asn1::Esf::RevocationValues::GetCrlVals)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x23239d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Esf::RevocationValues*>::get(),
                                                                               "GetCrlVals", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Esf::RevocationValues.GetOcspVals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse*, ::Array<::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse*>*> (::Org::BouncyCastle::Asn1::Esf::RevocationValues::*)()>(
        &::Org::BouncyCastle::Asn1::Esf::RevocationValues::GetOcspVals)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x2323afc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Esf::RevocationValues*>::get(),
                                                                               "GetOcspVals", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Esf::RevocationValues.get_OtherRevVals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Esf::OtherRevVals* (::Org::BouncyCastle::Asn1::Esf::RevocationValues::*)()>(
    &::Org::BouncyCastle::Asn1::Esf::RevocationValues::get_OtherRevVals)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2323c20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Esf::RevocationValues*>::get(),
                                                                               "get_OtherRevVals", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Esf::RevocationValues.ToAsn1Object
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::Esf::RevocationValues::*)()>(
    &::Org::BouncyCastle::Asn1::Esf::RevocationValues::ToAsn1Object)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x2323c28;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Esf::RevocationValues*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Esf::RevocationValues*>::get(), 5));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& Org::BouncyCastle::Asn1::Esf::RevocationValues::__cordl_internal_get_crlVals() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___crlVals;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence* const& Org::BouncyCastle::Asn1::Esf::RevocationValues::__cordl_internal_get_crlVals() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___crlVals;
}
constexpr void Org::BouncyCastle::Asn1::Esf::RevocationValues::__cordl_internal_set_crlVals(::Org::BouncyCastle::Asn1::Asn1Sequence* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___crlVals)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& Org::BouncyCastle::Asn1::Esf::RevocationValues::__cordl_internal_get_ocspVals() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ocspVals;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence* const& Org::BouncyCastle::Asn1::Esf::RevocationValues::__cordl_internal_get_ocspVals() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ocspVals;
}
constexpr void Org::BouncyCastle::Asn1::Esf::RevocationValues::__cordl_internal_set_ocspVals(::Org::BouncyCastle::Asn1::Asn1Sequence* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ocspVals)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Asn1::Esf::OtherRevVals*& Org::BouncyCastle::Asn1::Esf::RevocationValues::__cordl_internal_get_otherRevVals() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___otherRevVals;
}
constexpr ::Org::BouncyCastle::Asn1::Esf::OtherRevVals* const& Org::BouncyCastle::Asn1::Esf::RevocationValues::__cordl_internal_get_otherRevVals() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___otherRevVals;
}
constexpr void Org::BouncyCastle::Asn1::Esf::RevocationValues::__cordl_internal_set_otherRevVals(::Org::BouncyCastle::Asn1::Esf::OtherRevVals* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___otherRevVals)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Org::BouncyCastle::Asn1::Esf::RevocationValues* Org::BouncyCastle::Asn1::Esf::RevocationValues::GetInstance(::System::Object* obj) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Esf::RevocationValues*>::get(), "GetInstance",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Esf::RevocationValues*, false>(nullptr, ___internal_method, obj);
}
inline void Org::BouncyCastle::Asn1::Esf::RevocationValues::_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Esf::RevocationValues*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Sequence*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, seq);
}
inline void Org::BouncyCastle::Asn1::Esf::RevocationValues::_ctor(::ArrayW<::Org::BouncyCastle::Asn1::X509::CertificateList*, ::Array<::Org::BouncyCastle::Asn1::X509::CertificateList*>*> crlVals,
                                                                  ::ArrayW<::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse*, ::Array<::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse*>*> ocspVals,
                                                                  ::Org::BouncyCastle::Asn1::Esf::OtherRevVals* otherRevVals) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Esf::RevocationValues*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::Org::BouncyCastle::Asn1::X509::CertificateList*, ::Array<::Org::BouncyCastle::Asn1::X509::CertificateList*>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse*, ::Array<::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse*>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Esf::OtherRevVals*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, crlVals, ocspVals, otherRevVals);
}
inline void Org::BouncyCastle::Asn1::Esf::RevocationValues::_ctor(::System::Collections::IEnumerable* crlVals, ::System::Collections::IEnumerable* ocspVals,
                                                                  ::Org::BouncyCastle::Asn1::Esf::OtherRevVals* otherRevVals) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Esf::RevocationValues*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEnumerable*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEnumerable*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Esf::OtherRevVals*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, crlVals, ocspVals, otherRevVals);
}
inline ::ArrayW<::Org::BouncyCastle::Asn1::X509::CertificateList*, ::Array<::Org::BouncyCastle::Asn1::X509::CertificateList*>*> Org::BouncyCastle::Asn1::Esf::RevocationValues::GetCrlVals() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Esf::RevocationValues*>::get(),
                                                                             "GetCrlVals", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::Org::BouncyCastle::Asn1::X509::CertificateList*, ::Array<::Org::BouncyCastle::Asn1::X509::CertificateList*>*>, false>(this, ___internal_method);
}
inline ::ArrayW<::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse*, ::Array<::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse*>*> Org::BouncyCastle::Asn1::Esf::RevocationValues::GetOcspVals() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Esf::RevocationValues*>::get(),
                                                                             "GetOcspVals", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse*, ::Array<::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse*>*>, false>(this,
                                                                                                                                                                                  ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Esf::OtherRevVals* Org::BouncyCastle::Asn1::Esf::RevocationValues::get_OtherRevVals() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Esf::RevocationValues*>::get(),
                                                                             "get_OtherRevVals", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Esf::OtherRevVals*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::Esf::RevocationValues::ToAsn1Object() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Esf::RevocationValues*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Esf::RevocationValues* Org::BouncyCastle::Asn1::Esf::RevocationValues::New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Asn1::Esf::RevocationValues*>(seq));
}
inline ::Org::BouncyCastle::Asn1::Esf::RevocationValues*
Org::BouncyCastle::Asn1::Esf::RevocationValues::New_ctor(::ArrayW<::Org::BouncyCastle::Asn1::X509::CertificateList*, ::Array<::Org::BouncyCastle::Asn1::X509::CertificateList*>*> crlVals,
                                                         ::ArrayW<::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse*, ::Array<::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse*>*> ocspVals,
                                                         ::Org::BouncyCastle::Asn1::Esf::OtherRevVals* otherRevVals) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Asn1::Esf::RevocationValues*>(crlVals, ocspVals, otherRevVals));
}
inline ::Org::BouncyCastle::Asn1::Esf::RevocationValues* Org::BouncyCastle::Asn1::Esf::RevocationValues::New_ctor(::System::Collections::IEnumerable* crlVals,
                                                                                                                  ::System::Collections::IEnumerable* ocspVals,
                                                                                                                  ::Org::BouncyCastle::Asn1::Esf::OtherRevVals* otherRevVals) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Asn1::Esf::RevocationValues*>(crlVals, ocspVals, otherRevVals));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Esf::RevocationValues::RevocationValues() {}
