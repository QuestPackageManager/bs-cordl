#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/X509/IssuerSerial.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__IssuerSerial_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__GeneralNames_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1TaggedObject_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerBitString_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerInteger_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::IssuerSerial.GetInstance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X509::IssuerSerial* (*)(::System::Object*)>(
    &::Org::BouncyCastle::Asn1::X509::IssuerSerial::GetInstance)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x35641f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::IssuerSerial*>::get(), "GetInstance",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::IssuerSerial.GetInstance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X509::IssuerSerial* (*)(::Org::BouncyCastle::Asn1::Asn1TaggedObject*, bool)>(
    &::Org::BouncyCastle::Asn1::X509::IssuerSerial::GetInstance)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3563560;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::IssuerSerial*>::get(), "GetInstance", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1TaggedObject*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::IssuerSerial._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::X509::IssuerSerial::*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(
    &::Org::BouncyCastle::Asn1::X509::IssuerSerial::_ctor)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x356437c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::IssuerSerial*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Sequence*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::IssuerSerial._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::X509::IssuerSerial::*)(
    ::Org::BouncyCastle::Asn1::X509::GeneralNames*, ::Org::BouncyCastle::Asn1::DerInteger*)>(&::Org::BouncyCastle::Asn1::X509::IssuerSerial::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3564524;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::IssuerSerial*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::GeneralNames*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerInteger*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::IssuerSerial.get_Issuer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X509::GeneralNames* (::Org::BouncyCastle::Asn1::X509::IssuerSerial::*)()>(
    &::Org::BouncyCastle::Asn1::X509::IssuerSerial::get_Issuer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x356452c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::IssuerSerial*>::get(),
                                                                               "get_Issuer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::IssuerSerial.get_Serial
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::DerInteger* (::Org::BouncyCastle::Asn1::X509::IssuerSerial::*)()>(
    &::Org::BouncyCastle::Asn1::X509::IssuerSerial::get_Serial)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3564534;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::IssuerSerial*>::get(),
                                                                               "get_Serial", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::IssuerSerial.get_IssuerUid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::DerBitString* (::Org::BouncyCastle::Asn1::X509::IssuerSerial::*)()>(
    &::Org::BouncyCastle::Asn1::X509::IssuerSerial::get_IssuerUid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x356453c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::IssuerSerial*>::get(),
                                                                               "get_IssuerUid", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::IssuerSerial.ToAsn1Object
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::X509::IssuerSerial::*)()>(
    &::Org::BouncyCastle::Asn1::X509::IssuerSerial::ToAsn1Object)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x3564544;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::IssuerSerial*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::IssuerSerial*>::get(), 5));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::X509::GeneralNames*& Org::BouncyCastle::Asn1::X509::IssuerSerial::__cordl_internal_get_issuer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___issuer;
}
constexpr ::Org::BouncyCastle::Asn1::X509::GeneralNames* const& Org::BouncyCastle::Asn1::X509::IssuerSerial::__cordl_internal_get_issuer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___issuer;
}
constexpr void Org::BouncyCastle::Asn1::X509::IssuerSerial::__cordl_internal_set_issuer(::Org::BouncyCastle::Asn1::X509::GeneralNames* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___issuer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Asn1::DerInteger*& Org::BouncyCastle::Asn1::X509::IssuerSerial::__cordl_internal_get_serial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serial;
}
constexpr ::Org::BouncyCastle::Asn1::DerInteger* const& Org::BouncyCastle::Asn1::X509::IssuerSerial::__cordl_internal_get_serial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serial;
}
constexpr void Org::BouncyCastle::Asn1::X509::IssuerSerial::__cordl_internal_set_serial(::Org::BouncyCastle::Asn1::DerInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___serial)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Asn1::DerBitString*& Org::BouncyCastle::Asn1::X509::IssuerSerial::__cordl_internal_get_issuerUid() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___issuerUid;
}
constexpr ::Org::BouncyCastle::Asn1::DerBitString* const& Org::BouncyCastle::Asn1::X509::IssuerSerial::__cordl_internal_get_issuerUid() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___issuerUid;
}
constexpr void Org::BouncyCastle::Asn1::X509::IssuerSerial::__cordl_internal_set_issuerUid(::Org::BouncyCastle::Asn1::DerBitString* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___issuerUid)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Org::BouncyCastle::Asn1::X509::IssuerSerial* Org::BouncyCastle::Asn1::X509::IssuerSerial::GetInstance(::System::Object* obj) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::IssuerSerial*>::get(), "GetInstance",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::IssuerSerial*, false>(nullptr, ___internal_method, obj);
}
inline ::Org::BouncyCastle::Asn1::X509::IssuerSerial* Org::BouncyCastle::Asn1::X509::IssuerSerial::GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool explicitly) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::IssuerSerial*>::get(), "GetInstance", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1TaggedObject*>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::IssuerSerial*, false>(nullptr, ___internal_method, obj, explicitly);
}
inline void Org::BouncyCastle::Asn1::X509::IssuerSerial::_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::IssuerSerial*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Sequence*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, seq);
}
inline void Org::BouncyCastle::Asn1::X509::IssuerSerial::_ctor(::Org::BouncyCastle::Asn1::X509::GeneralNames* issuer, ::Org::BouncyCastle::Asn1::DerInteger* serial) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::IssuerSerial*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::GeneralNames*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerInteger*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, issuer, serial);
}
inline ::Org::BouncyCastle::Asn1::X509::GeneralNames* Org::BouncyCastle::Asn1::X509::IssuerSerial::get_Issuer() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::IssuerSerial*>::get(),
                                                                             "get_Issuer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::GeneralNames*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::DerInteger* Org::BouncyCastle::Asn1::X509::IssuerSerial::get_Serial() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::IssuerSerial*>::get(),
                                                                             "get_Serial", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerInteger*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::DerBitString* Org::BouncyCastle::Asn1::X509::IssuerSerial::get_IssuerUid() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::IssuerSerial*>::get(),
                                                                             "get_IssuerUid", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerBitString*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::X509::IssuerSerial::ToAsn1Object() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::IssuerSerial*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::IssuerSerial* Org::BouncyCastle::Asn1::X509::IssuerSerial::New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Asn1::X509::IssuerSerial*>(seq));
}
inline ::Org::BouncyCastle::Asn1::X509::IssuerSerial* Org::BouncyCastle::Asn1::X509::IssuerSerial::New_ctor(::Org::BouncyCastle::Asn1::X509::GeneralNames* issuer,
                                                                                                            ::Org::BouncyCastle::Asn1::DerInteger* serial) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Asn1::X509::IssuerSerial*>(issuer, serial));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::X509::IssuerSerial::IssuerSerial() {}
