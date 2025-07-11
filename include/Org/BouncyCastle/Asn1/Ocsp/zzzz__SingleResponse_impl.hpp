#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Ocsp/SingleResponse.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/Ocsp/zzzz__SingleResponse_def.hpp"
#include "Org/BouncyCastle/Asn1/Ocsp/zzzz__CertID_def.hpp"
#include "Org/BouncyCastle/Asn1/Ocsp/zzzz__CertStatus_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__X509Extensions_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1TaggedObject_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerGeneralizedTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Ocsp::SingleResponse._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::Ocsp::SingleResponse::*)(
    ::Org::BouncyCastle::Asn1::Ocsp::CertID*, ::Org::BouncyCastle::Asn1::Ocsp::CertStatus*, ::Org::BouncyCastle::Asn1::DerGeneralizedTime*, ::Org::BouncyCastle::Asn1::DerGeneralizedTime*,
    ::Org::BouncyCastle::Asn1::X509::X509Extensions*)>(&::Org::BouncyCastle::Asn1::Ocsp::SingleResponse::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2409ffc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Ocsp::SingleResponse*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Ocsp::CertID*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Ocsp::CertStatus*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerGeneralizedTime*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerGeneralizedTime*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::X509Extensions*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Ocsp::SingleResponse._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::Ocsp::SingleResponse::*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(
    &::Org::BouncyCastle::Asn1::Ocsp::SingleResponse::_ctor)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x240a04c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Ocsp::SingleResponse*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Sequence*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Ocsp::SingleResponse.GetInstance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Ocsp::SingleResponse* (*)(::Org::BouncyCastle::Asn1::Asn1TaggedObject*, bool)>(
    &::Org::BouncyCastle::Asn1::Ocsp::SingleResponse::GetInstance)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x240a30c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Ocsp::SingleResponse*>::get(), "GetInstance", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1TaggedObject*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Ocsp::SingleResponse.GetInstance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Ocsp::SingleResponse* (*)(::System::Object*)>(
    &::Org::BouncyCastle::Asn1::Ocsp::SingleResponse::GetInstance)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x240a324;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Ocsp::SingleResponse*>::get(), "GetInstance",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Ocsp::SingleResponse.get_CertId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Ocsp::CertID* (::Org::BouncyCastle::Asn1::Ocsp::SingleResponse::*)()>(
    &::Org::BouncyCastle::Asn1::Ocsp::SingleResponse::get_CertId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x240a4a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Ocsp::SingleResponse*>::get(),
                                                                               "get_CertId", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Ocsp::SingleResponse.get_CertStatus
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Ocsp::CertStatus* (::Org::BouncyCastle::Asn1::Ocsp::SingleResponse::*)()>(
    &::Org::BouncyCastle::Asn1::Ocsp::SingleResponse::get_CertStatus)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x240a4a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Ocsp::SingleResponse*>::get(),
                                                                               "get_CertStatus", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Ocsp::SingleResponse.get_ThisUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::DerGeneralizedTime* (::Org::BouncyCastle::Asn1::Ocsp::SingleResponse::*)()>(
    &::Org::BouncyCastle::Asn1::Ocsp::SingleResponse::get_ThisUpdate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x240a4b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Ocsp::SingleResponse*>::get(),
                                                                               "get_ThisUpdate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Ocsp::SingleResponse.get_NextUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::DerGeneralizedTime* (::Org::BouncyCastle::Asn1::Ocsp::SingleResponse::*)()>(
    &::Org::BouncyCastle::Asn1::Ocsp::SingleResponse::get_NextUpdate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x240a4b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Ocsp::SingleResponse*>::get(),
                                                                               "get_NextUpdate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Ocsp::SingleResponse.get_SingleExtensions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X509::X509Extensions* (::Org::BouncyCastle::Asn1::Ocsp::SingleResponse::*)()>(
    &::Org::BouncyCastle::Asn1::Ocsp::SingleResponse::get_SingleExtensions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x240a4c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Ocsp::SingleResponse*>::get(),
                                                                               "get_SingleExtensions", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Ocsp::SingleResponse.ToAsn1Object
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::Ocsp::SingleResponse::*)()>(
    &::Org::BouncyCastle::Asn1::Ocsp::SingleResponse::ToAsn1Object)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x240a4c8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Ocsp::SingleResponse*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Ocsp::SingleResponse*>::get(), 5));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::Ocsp::CertID*& Org::BouncyCastle::Asn1::Ocsp::SingleResponse::__cordl_internal_get_certID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certID;
}
constexpr ::Org::BouncyCastle::Asn1::Ocsp::CertID* const& Org::BouncyCastle::Asn1::Ocsp::SingleResponse::__cordl_internal_get_certID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certID;
}
constexpr void Org::BouncyCastle::Asn1::Ocsp::SingleResponse::__cordl_internal_set_certID(::Org::BouncyCastle::Asn1::Ocsp::CertID* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___certID)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Asn1::Ocsp::CertStatus*& Org::BouncyCastle::Asn1::Ocsp::SingleResponse::__cordl_internal_get_certStatus() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certStatus;
}
constexpr ::Org::BouncyCastle::Asn1::Ocsp::CertStatus* const& Org::BouncyCastle::Asn1::Ocsp::SingleResponse::__cordl_internal_get_certStatus() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certStatus;
}
constexpr void Org::BouncyCastle::Asn1::Ocsp::SingleResponse::__cordl_internal_set_certStatus(::Org::BouncyCastle::Asn1::Ocsp::CertStatus* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___certStatus)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Asn1::DerGeneralizedTime*& Org::BouncyCastle::Asn1::Ocsp::SingleResponse::__cordl_internal_get_thisUpdate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___thisUpdate;
}
constexpr ::Org::BouncyCastle::Asn1::DerGeneralizedTime* const& Org::BouncyCastle::Asn1::Ocsp::SingleResponse::__cordl_internal_get_thisUpdate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___thisUpdate;
}
constexpr void Org::BouncyCastle::Asn1::Ocsp::SingleResponse::__cordl_internal_set_thisUpdate(::Org::BouncyCastle::Asn1::DerGeneralizedTime* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___thisUpdate)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Asn1::DerGeneralizedTime*& Org::BouncyCastle::Asn1::Ocsp::SingleResponse::__cordl_internal_get_nextUpdate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nextUpdate;
}
constexpr ::Org::BouncyCastle::Asn1::DerGeneralizedTime* const& Org::BouncyCastle::Asn1::Ocsp::SingleResponse::__cordl_internal_get_nextUpdate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nextUpdate;
}
constexpr void Org::BouncyCastle::Asn1::Ocsp::SingleResponse::__cordl_internal_set_nextUpdate(::Org::BouncyCastle::Asn1::DerGeneralizedTime* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___nextUpdate)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Asn1::X509::X509Extensions*& Org::BouncyCastle::Asn1::Ocsp::SingleResponse::__cordl_internal_get_singleExtensions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___singleExtensions;
}
constexpr ::Org::BouncyCastle::Asn1::X509::X509Extensions* const& Org::BouncyCastle::Asn1::Ocsp::SingleResponse::__cordl_internal_get_singleExtensions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___singleExtensions;
}
constexpr void Org::BouncyCastle::Asn1::Ocsp::SingleResponse::__cordl_internal_set_singleExtensions(::Org::BouncyCastle::Asn1::X509::X509Extensions* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___singleExtensions)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Org::BouncyCastle::Asn1::Ocsp::SingleResponse::_ctor(::Org::BouncyCastle::Asn1::Ocsp::CertID* certID, ::Org::BouncyCastle::Asn1::Ocsp::CertStatus* certStatus,
                                                                 ::Org::BouncyCastle::Asn1::DerGeneralizedTime* thisUpdate, ::Org::BouncyCastle::Asn1::DerGeneralizedTime* nextUpdate,
                                                                 ::Org::BouncyCastle::Asn1::X509::X509Extensions* singleExtensions) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Ocsp::SingleResponse*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Ocsp::CertID*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Ocsp::CertStatus*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerGeneralizedTime*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerGeneralizedTime*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::X509Extensions*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, certID, certStatus, thisUpdate, nextUpdate, singleExtensions);
}
inline void Org::BouncyCastle::Asn1::Ocsp::SingleResponse::_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Ocsp::SingleResponse*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Sequence*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, seq);
}
inline ::Org::BouncyCastle::Asn1::Ocsp::SingleResponse* Org::BouncyCastle::Asn1::Ocsp::SingleResponse::GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool explicitly) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Ocsp::SingleResponse*>::get(), "GetInstance", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1TaggedObject*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Ocsp::SingleResponse*, false>(nullptr, ___internal_method, obj, explicitly);
}
inline ::Org::BouncyCastle::Asn1::Ocsp::SingleResponse* Org::BouncyCastle::Asn1::Ocsp::SingleResponse::GetInstance(::System::Object* obj) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Ocsp::SingleResponse*>::get(), "GetInstance",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Ocsp::SingleResponse*, false>(nullptr, ___internal_method, obj);
}
inline ::Org::BouncyCastle::Asn1::Ocsp::CertID* Org::BouncyCastle::Asn1::Ocsp::SingleResponse::get_CertId() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Ocsp::SingleResponse*>::get(),
                                                                             "get_CertId", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Ocsp::CertID*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Ocsp::CertStatus* Org::BouncyCastle::Asn1::Ocsp::SingleResponse::get_CertStatus() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Ocsp::SingleResponse*>::get(),
                                                                             "get_CertStatus", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Ocsp::CertStatus*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::DerGeneralizedTime* Org::BouncyCastle::Asn1::Ocsp::SingleResponse::get_ThisUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Ocsp::SingleResponse*>::get(),
                                                                             "get_ThisUpdate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerGeneralizedTime*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::DerGeneralizedTime* Org::BouncyCastle::Asn1::Ocsp::SingleResponse::get_NextUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Ocsp::SingleResponse*>::get(),
                                                                             "get_NextUpdate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerGeneralizedTime*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::X509Extensions* Org::BouncyCastle::Asn1::Ocsp::SingleResponse::get_SingleExtensions() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Ocsp::SingleResponse*>::get(),
                                                                             "get_SingleExtensions", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::X509Extensions*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::Ocsp::SingleResponse::ToAsn1Object() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Ocsp::SingleResponse*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Ocsp::SingleResponse* Org::BouncyCastle::Asn1::Ocsp::SingleResponse::New_ctor(::Org::BouncyCastle::Asn1::Ocsp::CertID* certID,
                                                                                                                ::Org::BouncyCastle::Asn1::Ocsp::CertStatus* certStatus,
                                                                                                                ::Org::BouncyCastle::Asn1::DerGeneralizedTime* thisUpdate,
                                                                                                                ::Org::BouncyCastle::Asn1::DerGeneralizedTime* nextUpdate,
                                                                                                                ::Org::BouncyCastle::Asn1::X509::X509Extensions* singleExtensions) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Asn1::Ocsp::SingleResponse*>(certID, certStatus, thisUpdate, nextUpdate, singleExtensions));
}
inline ::Org::BouncyCastle::Asn1::Ocsp::SingleResponse* Org::BouncyCastle::Asn1::Ocsp::SingleResponse::New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Asn1::Ocsp::SingleResponse*>(seq));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Ocsp::SingleResponse::SingleResponse() {}
