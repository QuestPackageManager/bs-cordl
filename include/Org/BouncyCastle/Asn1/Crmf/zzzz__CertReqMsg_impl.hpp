#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Asn1\Crmf\CertReqMsg.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/Crmf/zzzz__CertReqMsg_def.hpp"
#include "Org/BouncyCastle/Asn1/Crmf/zzzz__AttributeTypeAndValue_def.hpp"
#include "Org/BouncyCastle/Asn1/Crmf/zzzz__CertRequest_def.hpp"
#include "Org/BouncyCastle/Asn1/Crmf/zzzz__ProofOfPossession_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1TaggedObject_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Crmf::CertReqMsg._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Crmf::CertReqMsg::*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(
    &::Org::BouncyCastle::Asn1::Crmf::CertReqMsg::_ctor)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x336525c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::CertReqMsg*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Crmf::CertReqMsg.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Crmf::CertReqMsg* (*)(::System::Object*)>(&::Org::BouncyCastle::Asn1::Crmf::CertReqMsg::GetInstance)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x33651b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::CertReqMsg*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Crmf::CertReqMsg.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Crmf::CertReqMsg* (*)(::Org::BouncyCastle::Asn1::Asn1TaggedObject*, bool)>(
    &::Org::BouncyCastle::Asn1::Crmf::CertReqMsg::GetInstance)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x33655cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::CertReqMsg*>(),
                                                             { "GetInstance", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1TaggedObject*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Crmf::CertReqMsg._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Crmf::CertReqMsg::*)(
    ::Org::BouncyCastle::Asn1::Crmf::CertRequest*, ::Org::BouncyCastle::Asn1::Crmf::ProofOfPossession*, ::ArrayW<::Org::BouncyCastle::Asn1::Crmf::AttributeTypeAndValue*>)>(
    &::Org::BouncyCastle::Asn1::Crmf::CertReqMsg::_ctor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x33655e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::CertReqMsg*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::Org::BouncyCastle::Asn1::Crmf::CertRequest*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Crmf::ProofOfPossession*>(),
                                                                 ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Asn1::Crmf::AttributeTypeAndValue*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Crmf::CertReqMsg.get_CertReq
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Crmf::CertRequest* (::Org::BouncyCastle::Asn1::Crmf::CertReqMsg::*)()>(
    &::Org::BouncyCastle::Asn1::Crmf::CertReqMsg::get_CertReq)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x33656ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::CertReqMsg*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::CertReqMsg*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Crmf::CertReqMsg.get_Popo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Crmf::ProofOfPossession* (::Org::BouncyCastle::Asn1::Crmf::CertReqMsg::*)()>(
    &::Org::BouncyCastle::Asn1::Crmf::CertReqMsg::get_Popo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x33656b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::CertReqMsg*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::CertReqMsg*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Crmf::CertReqMsg.GetRegInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Org::BouncyCastle::Asn1::Crmf::AttributeTypeAndValue*> (::Org::BouncyCastle::Asn1::Crmf::CertReqMsg::*)()>(
    &::Org::BouncyCastle::Asn1::Crmf::CertReqMsg::GetRegInfo)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x33656bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::CertReqMsg*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::CertReqMsg*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Crmf::CertReqMsg.ToAsn1Object
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::Crmf::CertReqMsg::*)()>(
    &::Org::BouncyCastle::Asn1::Crmf::CertReqMsg::ToAsn1Object)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x33657bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::CertReqMsg*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::CertReqMsg*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::Crmf::CertRequest*& Org::BouncyCastle::Asn1::Crmf::CertReqMsg::__cordl_internal_get_certReq() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certReq;
}
constexpr ::Org::BouncyCastle::Asn1::Crmf::CertRequest* const& Org::BouncyCastle::Asn1::Crmf::CertReqMsg::__cordl_internal_get_certReq() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certReq;
}
constexpr void Org::BouncyCastle::Asn1::Crmf::CertReqMsg::__cordl_internal_set_certReq(::Org::BouncyCastle::Asn1::Crmf::CertRequest* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___certReq = value;
}
constexpr ::Org::BouncyCastle::Asn1::Crmf::ProofOfPossession*& Org::BouncyCastle::Asn1::Crmf::CertReqMsg::__cordl_internal_get_popo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___popo;
}
constexpr ::Org::BouncyCastle::Asn1::Crmf::ProofOfPossession* const& Org::BouncyCastle::Asn1::Crmf::CertReqMsg::__cordl_internal_get_popo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___popo;
}
constexpr void Org::BouncyCastle::Asn1::Crmf::CertReqMsg::__cordl_internal_set_popo(::Org::BouncyCastle::Asn1::Crmf::ProofOfPossession* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___popo = value;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& Org::BouncyCastle::Asn1::Crmf::CertReqMsg::__cordl_internal_get_regInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___regInfo;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence* const& Org::BouncyCastle::Asn1::Crmf::CertReqMsg::__cordl_internal_get_regInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___regInfo;
}
constexpr void Org::BouncyCastle::Asn1::Crmf::CertReqMsg::__cordl_internal_set_regInfo(::Org::BouncyCastle::Asn1::Asn1Sequence* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___regInfo = value;
}
inline void Org::BouncyCastle::Asn1::Crmf::CertReqMsg::_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::CertReqMsg*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seq);
}
inline ::Org::BouncyCastle::Asn1::Crmf::CertReqMsg* Org::BouncyCastle::Asn1::Crmf::CertReqMsg::GetInstance(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::CertReqMsg*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Crmf::CertReqMsg*>(nullptr, ___internal_method, obj);
}
inline ::Org::BouncyCastle::Asn1::Crmf::CertReqMsg* Org::BouncyCastle::Asn1::Crmf::CertReqMsg::GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool isExplicit) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::CertReqMsg*>(),
                                                           { "GetInstance", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1TaggedObject*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Crmf::CertReqMsg*>(nullptr, ___internal_method, obj, isExplicit);
}
inline void Org::BouncyCastle::Asn1::Crmf::CertReqMsg::_ctor(::Org::BouncyCastle::Asn1::Crmf::CertRequest* certReq, ::Org::BouncyCastle::Asn1::Crmf::ProofOfPossession* popo,
                                                             ::ArrayW<::Org::BouncyCastle::Asn1::Crmf::AttributeTypeAndValue*> regInfo) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::CertReqMsg*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::Org::BouncyCastle::Asn1::Crmf::CertRequest*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Crmf::ProofOfPossession*>(),
                                                               ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Asn1::Crmf::AttributeTypeAndValue*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, certReq, popo, regInfo);
}
inline ::Org::BouncyCastle::Asn1::Crmf::CertRequest* Org::BouncyCastle::Asn1::Crmf::CertReqMsg::get_CertReq() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::CertReqMsg*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Crmf::CertRequest*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Crmf::ProofOfPossession* Org::BouncyCastle::Asn1::Crmf::CertReqMsg::get_Popo() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::CertReqMsg*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Crmf::ProofOfPossession*>(this, ___internal_method);
}
inline ::ArrayW<::Org::BouncyCastle::Asn1::Crmf::AttributeTypeAndValue*> Org::BouncyCastle::Asn1::Crmf::CertReqMsg::GetRegInfo() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::CertReqMsg*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::Org::BouncyCastle::Asn1::Crmf::AttributeTypeAndValue*>>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::Crmf::CertReqMsg::ToAsn1Object() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::CertReqMsg*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Crmf::CertReqMsg* Org::BouncyCastle::Asn1::Crmf::CertReqMsg::New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Crmf::CertReqMsg*>(seq));
}
inline ::Org::BouncyCastle::Asn1::Crmf::CertReqMsg* Org::BouncyCastle::Asn1::Crmf::CertReqMsg::New_ctor(::Org::BouncyCastle::Asn1::Crmf::CertRequest* certReq,
                                                                                                        ::Org::BouncyCastle::Asn1::Crmf::ProofOfPossession* popo,
                                                                                                        ::ArrayW<::Org::BouncyCastle::Asn1::Crmf::AttributeTypeAndValue*> regInfo) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Crmf::CertReqMsg*>(certReq, popo, regInfo));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Crmf::CertReqMsg::CertReqMsg() {}
