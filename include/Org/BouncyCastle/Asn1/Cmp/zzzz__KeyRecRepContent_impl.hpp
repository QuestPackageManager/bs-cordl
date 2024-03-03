#pragma once
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/Cmp/zzzz__KeyRecRepContent_def.hpp"
#include "Org/BouncyCastle/Asn1/Cmp/zzzz__CertifiedKeyPair_def.hpp"
#include "Org/BouncyCastle/Asn1/Cmp/zzzz__CmpCertificate_def.hpp"
#include "Org/BouncyCastle/Asn1/Cmp/zzzz__PkiStatusInfo_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::KeyRecRepContent._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::Cmp::KeyRecRepContent::*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(
    &::Org::BouncyCastle::Asn1::Cmp::KeyRecRepContent::_ctor)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0xed9e3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cmp::KeyRecRepContent*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Sequence*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::KeyRecRepContent.GetInstance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Cmp::KeyRecRepContent* (*)(::System::Object*)>(
    &::Org::BouncyCastle::Asn1::Cmp::KeyRecRepContent::GetInstance)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0xed9fd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cmp::KeyRecRepContent*>::get(), "GetInstance",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::KeyRecRepContent.get_Status
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo* (::Org::BouncyCastle::Asn1::Cmp::KeyRecRepContent::*)()>(
    &::Org::BouncyCastle::Asn1::Cmp::KeyRecRepContent::get_Status)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xeda160;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cmp::KeyRecRepContent*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cmp::KeyRecRepContent*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::KeyRecRepContent.get_NewSigCert
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Cmp::CmpCertificate* (::Org::BouncyCastle::Asn1::Cmp::KeyRecRepContent::*)()>(
    &::Org::BouncyCastle::Asn1::Cmp::KeyRecRepContent::get_NewSigCert)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xeda168;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cmp::KeyRecRepContent*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cmp::KeyRecRepContent*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::KeyRecRepContent.GetCACerts
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Org::BouncyCastle::Asn1::Cmp::CmpCertificate*, ::Array<::Org::BouncyCastle::Asn1::Cmp::CmpCertificate*>*> (
    ::Org::BouncyCastle::Asn1::Cmp::KeyRecRepContent::*)()>(&::Org::BouncyCastle::Asn1::Cmp::KeyRecRepContent::GetCACerts)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0xeda170;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cmp::KeyRecRepContent*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cmp::KeyRecRepContent*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::KeyRecRepContent.GetKeyPairHist
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair*, ::Array<::Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair*>*> (::Org::BouncyCastle::Asn1::Cmp::KeyRecRepContent::*)()>(
        &::Org::BouncyCastle::Asn1::Cmp::KeyRecRepContent::GetKeyPairHist)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0xeda26c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cmp::KeyRecRepContent*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cmp::KeyRecRepContent*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::KeyRecRepContent.ToAsn1Object
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::Cmp::KeyRecRepContent::*)()>(
    &::Org::BouncyCastle::Asn1::Cmp::KeyRecRepContent::ToAsn1Object)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0xeda368;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cmp::KeyRecRepContent*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cmp::KeyRecRepContent*>::get(), 5));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo*& Org::BouncyCastle::Asn1::Cmp::KeyRecRepContent::__cordl_internal_get_status() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___status;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo*> const& Org::BouncyCastle::Asn1::Cmp::KeyRecRepContent::__cordl_internal_get_status() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___status;
}
constexpr void Org::BouncyCastle::Asn1::Cmp::KeyRecRepContent::__cordl_internal_set_status(::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___status)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Asn1::Cmp::CmpCertificate*& Org::BouncyCastle::Asn1::Cmp::KeyRecRepContent::__cordl_internal_get_newSigCert() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___newSigCert;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cmp::CmpCertificate*> const& Org::BouncyCastle::Asn1::Cmp::KeyRecRepContent::__cordl_internal_get_newSigCert() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___newSigCert;
}
constexpr void Org::BouncyCastle::Asn1::Cmp::KeyRecRepContent::__cordl_internal_set_newSigCert(::Org::BouncyCastle::Asn1::Cmp::CmpCertificate* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___newSigCert)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& Org::BouncyCastle::Asn1::Cmp::KeyRecRepContent::__cordl_internal_get_caCerts() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___caCerts;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Sequence*> const& Org::BouncyCastle::Asn1::Cmp::KeyRecRepContent::__cordl_internal_get_caCerts() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___caCerts;
}
constexpr void Org::BouncyCastle::Asn1::Cmp::KeyRecRepContent::__cordl_internal_set_caCerts(::Org::BouncyCastle::Asn1::Asn1Sequence* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___caCerts)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& Org::BouncyCastle::Asn1::Cmp::KeyRecRepContent::__cordl_internal_get_keyPairHist() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyPairHist;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Sequence*> const& Org::BouncyCastle::Asn1::Cmp::KeyRecRepContent::__cordl_internal_get_keyPairHist() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyPairHist;
}
constexpr void Org::BouncyCastle::Asn1::Cmp::KeyRecRepContent::__cordl_internal_set_keyPairHist(::Org::BouncyCastle::Asn1::Asn1Sequence* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___keyPairHist)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Org::BouncyCastle::Asn1::Cmp::KeyRecRepContent* Org::BouncyCastle::Asn1::Cmp::KeyRecRepContent::New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Asn1::Cmp::KeyRecRepContent*>(seq));
}
inline void Org::BouncyCastle::Asn1::Cmp::KeyRecRepContent::_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cmp::KeyRecRepContent*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Sequence*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, seq);
}
inline ::Org::BouncyCastle::Asn1::Cmp::KeyRecRepContent* Org::BouncyCastle::Asn1::Cmp::KeyRecRepContent::GetInstance(::System::Object* obj) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cmp::KeyRecRepContent*>::get(), "GetInstance",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cmp::KeyRecRepContent*, false>(nullptr, ___internal_method, obj);
}
inline ::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo* Org::BouncyCastle::Asn1::Cmp::KeyRecRepContent::get_Status() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cmp::KeyRecRepContent*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Cmp::CmpCertificate* Org::BouncyCastle::Asn1::Cmp::KeyRecRepContent::get_NewSigCert() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cmp::KeyRecRepContent*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cmp::CmpCertificate*, false>(this, ___internal_method);
}
inline ::ArrayW<::Org::BouncyCastle::Asn1::Cmp::CmpCertificate*, ::Array<::Org::BouncyCastle::Asn1::Cmp::CmpCertificate*>*> Org::BouncyCastle::Asn1::Cmp::KeyRecRepContent::GetCACerts() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cmp::KeyRecRepContent*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::Org::BouncyCastle::Asn1::Cmp::CmpCertificate*, ::Array<::Org::BouncyCastle::Asn1::Cmp::CmpCertificate*>*>, false>(this, ___internal_method);
}
inline ::ArrayW<::Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair*, ::Array<::Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair*>*> Org::BouncyCastle::Asn1::Cmp::KeyRecRepContent::GetKeyPairHist() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cmp::KeyRecRepContent*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair*, ::Array<::Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair*>*>, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::Cmp::KeyRecRepContent::ToAsn1Object() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cmp::KeyRecRepContent*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Cmp::KeyRecRepContent::KeyRecRepContent() {}
