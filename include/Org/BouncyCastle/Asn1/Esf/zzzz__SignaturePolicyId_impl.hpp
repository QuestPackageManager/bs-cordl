#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Asn1\Esf\SignaturePolicyId.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/Esf/zzzz__SignaturePolicyId_def.hpp"
#include "Org/BouncyCastle/Asn1/Esf/zzzz__OtherHashAlgAndValue_def.hpp"
#include "Org/BouncyCastle/Asn1/Esf/zzzz__SigPolicyQualifierInfo_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Esf::SignaturePolicyId.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Esf::SignaturePolicyId* (*)(::System::Object*)>(&::Org::BouncyCastle::Asn1::Esf::SignaturePolicyId::GetInstance)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x33781a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::SignaturePolicyId*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Esf::SignaturePolicyId._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Esf::SignaturePolicyId::*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(
    &::Org::BouncyCastle::Asn1::Esf::SignaturePolicyId::_ctor)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0x3378324;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::SignaturePolicyId*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Esf::SignaturePolicyId._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Esf::SignaturePolicyId::*)(
    ::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::Org::BouncyCastle::Asn1::Esf::OtherHashAlgAndValue*)>(&::Org::BouncyCastle::Asn1::Esf::SignaturePolicyId::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x33785fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::SignaturePolicyId*>(),
                            { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Esf::OtherHashAlgAndValue*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Esf::SignaturePolicyId._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Esf::SignaturePolicyId::*)(
    ::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::Org::BouncyCastle::Asn1::Esf::OtherHashAlgAndValue*, ::ArrayW<::Org::BouncyCastle::Asn1::Esf::SigPolicyQualifierInfo*>)>(
    &::Org::BouncyCastle::Asn1::Esf::SignaturePolicyId::_ctor)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x3378604;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::SignaturePolicyId*>(),
                                                { ".ctor",
                                                  {},
                                                  { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Esf::OtherHashAlgAndValue*>(),
                                                    ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Asn1::Esf::SigPolicyQualifierInfo*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Esf::SignaturePolicyId._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Esf::SignaturePolicyId::*)(
    ::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::Org::BouncyCastle::Asn1::Esf::OtherHashAlgAndValue*, ::System::Collections::IEnumerable*)>(
    &::Org::BouncyCastle::Asn1::Esf::SignaturePolicyId::_ctor)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x33786f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::SignaturePolicyId*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::Asn1::Esf::OtherHashAlgAndValue*>(), ::i2c::type_of<::System::Collections::IEnumerable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Esf::SignaturePolicyId.get_SigPolicyIdentifier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::DerObjectIdentifier* (::Org::BouncyCastle::Asn1::Esf::SignaturePolicyId::*)()>(
    &::Org::BouncyCastle::Asn1::Esf::SignaturePolicyId::get_SigPolicyIdentifier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x33788b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::SignaturePolicyId*>(), { "get_SigPolicyIdentifier", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Esf::SignaturePolicyId.get_SigPolicyHash
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Esf::OtherHashAlgAndValue* (::Org::BouncyCastle::Asn1::Esf::SignaturePolicyId::*)()>(
    &::Org::BouncyCastle::Asn1::Esf::SignaturePolicyId::get_SigPolicyHash)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x33788c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::SignaturePolicyId*>(), { "get_SigPolicyHash", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Esf::SignaturePolicyId.GetSigPolicyQualifiers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Org::BouncyCastle::Asn1::Esf::SigPolicyQualifierInfo*> (::Org::BouncyCastle::Asn1::Esf::SignaturePolicyId::*)()>(
    &::Org::BouncyCastle::Asn1::Esf::SignaturePolicyId::GetSigPolicyQualifiers)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x33788c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::SignaturePolicyId*>(), { "GetSigPolicyQualifiers", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Esf::SignaturePolicyId.ToAsn1Object
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::Esf::SignaturePolicyId::*)()>(
    &::Org::BouncyCastle::Asn1::Esf::SignaturePolicyId::ToAsn1Object)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x3378b64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::SignaturePolicyId*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::SignaturePolicyId*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& Org::BouncyCastle::Asn1::Esf::SignaturePolicyId::__cordl_internal_get_sigPolicyIdentifier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sigPolicyIdentifier;
}
constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier* const& Org::BouncyCastle::Asn1::Esf::SignaturePolicyId::__cordl_internal_get_sigPolicyIdentifier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sigPolicyIdentifier;
}
constexpr void Org::BouncyCastle::Asn1::Esf::SignaturePolicyId::__cordl_internal_set_sigPolicyIdentifier(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sigPolicyIdentifier = value;
}
constexpr ::Org::BouncyCastle::Asn1::Esf::OtherHashAlgAndValue*& Org::BouncyCastle::Asn1::Esf::SignaturePolicyId::__cordl_internal_get_sigPolicyHash() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sigPolicyHash;
}
constexpr ::Org::BouncyCastle::Asn1::Esf::OtherHashAlgAndValue* const& Org::BouncyCastle::Asn1::Esf::SignaturePolicyId::__cordl_internal_get_sigPolicyHash() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sigPolicyHash;
}
constexpr void Org::BouncyCastle::Asn1::Esf::SignaturePolicyId::__cordl_internal_set_sigPolicyHash(::Org::BouncyCastle::Asn1::Esf::OtherHashAlgAndValue* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sigPolicyHash = value;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& Org::BouncyCastle::Asn1::Esf::SignaturePolicyId::__cordl_internal_get_sigPolicyQualifiers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sigPolicyQualifiers;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence* const& Org::BouncyCastle::Asn1::Esf::SignaturePolicyId::__cordl_internal_get_sigPolicyQualifiers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sigPolicyQualifiers;
}
constexpr void Org::BouncyCastle::Asn1::Esf::SignaturePolicyId::__cordl_internal_set_sigPolicyQualifiers(::Org::BouncyCastle::Asn1::Asn1Sequence* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sigPolicyQualifiers = value;
}
inline ::Org::BouncyCastle::Asn1::Esf::SignaturePolicyId* Org::BouncyCastle::Asn1::Esf::SignaturePolicyId::GetInstance(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::SignaturePolicyId*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Esf::SignaturePolicyId*>(nullptr, ___internal_method, obj);
}
inline void Org::BouncyCastle::Asn1::Esf::SignaturePolicyId::_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::SignaturePolicyId*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seq);
}
inline void Org::BouncyCastle::Asn1::Esf::SignaturePolicyId::_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* sigPolicyIdentifier,
                                                                   ::Org::BouncyCastle::Asn1::Esf::OtherHashAlgAndValue* sigPolicyHash) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::SignaturePolicyId*>(),
                          { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Esf::OtherHashAlgAndValue*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sigPolicyIdentifier, sigPolicyHash);
}
inline void Org::BouncyCastle::Asn1::Esf::SignaturePolicyId::_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* sigPolicyIdentifier,
                                                                   ::Org::BouncyCastle::Asn1::Esf::OtherHashAlgAndValue* sigPolicyHash,
                                                                   ::ArrayW<::Org::BouncyCastle::Asn1::Esf::SigPolicyQualifierInfo*> sigPolicyQualifiers) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::SignaturePolicyId*>(),
                                              { ".ctor",
                                                {},
                                                { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Esf::OtherHashAlgAndValue*>(),
                                                  ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Asn1::Esf::SigPolicyQualifierInfo*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sigPolicyIdentifier, sigPolicyHash, sigPolicyQualifiers);
}
inline void Org::BouncyCastle::Asn1::Esf::SignaturePolicyId::_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* sigPolicyIdentifier,
                                                                   ::Org::BouncyCastle::Asn1::Esf::OtherHashAlgAndValue* sigPolicyHash, ::System::Collections::IEnumerable* sigPolicyQualifiers) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::SignaturePolicyId*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(),
                                                               ::i2c::type_of<::Org::BouncyCastle::Asn1::Esf::OtherHashAlgAndValue*>(), ::i2c::type_of<::System::Collections::IEnumerable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sigPolicyIdentifier, sigPolicyHash, sigPolicyQualifiers);
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Esf::SignaturePolicyId::get_SigPolicyIdentifier() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::SignaturePolicyId*>(), { "get_SigPolicyIdentifier", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Esf::OtherHashAlgAndValue* Org::BouncyCastle::Asn1::Esf::SignaturePolicyId::get_SigPolicyHash() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::SignaturePolicyId*>(), { "get_SigPolicyHash", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Esf::OtherHashAlgAndValue*>(this, ___internal_method);
}
inline ::ArrayW<::Org::BouncyCastle::Asn1::Esf::SigPolicyQualifierInfo*> Org::BouncyCastle::Asn1::Esf::SignaturePolicyId::GetSigPolicyQualifiers() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::SignaturePolicyId*>(), { "GetSigPolicyQualifiers", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::Org::BouncyCastle::Asn1::Esf::SigPolicyQualifierInfo*>>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::Esf::SignaturePolicyId::ToAsn1Object() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::SignaturePolicyId*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Esf::SignaturePolicyId* Org::BouncyCastle::Asn1::Esf::SignaturePolicyId::New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Esf::SignaturePolicyId*>(seq));
}
inline ::Org::BouncyCastle::Asn1::Esf::SignaturePolicyId* Org::BouncyCastle::Asn1::Esf::SignaturePolicyId::New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* sigPolicyIdentifier,
                                                                                                                    ::Org::BouncyCastle::Asn1::Esf::OtherHashAlgAndValue* sigPolicyHash) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Esf::SignaturePolicyId*>(sigPolicyIdentifier, sigPolicyHash));
}
inline ::Org::BouncyCastle::Asn1::Esf::SignaturePolicyId*
Org::BouncyCastle::Asn1::Esf::SignaturePolicyId::New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* sigPolicyIdentifier, ::Org::BouncyCastle::Asn1::Esf::OtherHashAlgAndValue* sigPolicyHash,
                                                          ::ArrayW<::Org::BouncyCastle::Asn1::Esf::SigPolicyQualifierInfo*> sigPolicyQualifiers) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Esf::SignaturePolicyId*>(sigPolicyIdentifier, sigPolicyHash, sigPolicyQualifiers));
}
inline ::Org::BouncyCastle::Asn1::Esf::SignaturePolicyId* Org::BouncyCastle::Asn1::Esf::SignaturePolicyId::New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* sigPolicyIdentifier,
                                                                                                                    ::Org::BouncyCastle::Asn1::Esf::OtherHashAlgAndValue* sigPolicyHash,
                                                                                                                    ::System::Collections::IEnumerable* sigPolicyQualifiers) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Esf::SignaturePolicyId*>(sigPolicyIdentifier, sigPolicyHash, sigPolicyQualifiers));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Esf::SignaturePolicyId::SignaturePolicyId() {}
