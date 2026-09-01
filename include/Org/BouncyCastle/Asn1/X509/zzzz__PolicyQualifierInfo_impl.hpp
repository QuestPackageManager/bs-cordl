#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Asn1\X509\PolicyQualifierInfo.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__PolicyQualifierInfo_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::PolicyQualifierInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X509::PolicyQualifierInfo::*)(
    ::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::Org::BouncyCastle::Asn1::Asn1Encodable*)>(&::Org::BouncyCastle::Asn1::X509::PolicyQualifierInfo::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3663a08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::PolicyQualifierInfo*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Encodable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::PolicyQualifierInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X509::PolicyQualifierInfo::*)(::StringW)>(&::Org::BouncyCastle::Asn1::X509::PolicyQualifierInfo::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x3663a10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::PolicyQualifierInfo*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::PolicyQualifierInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X509::PolicyQualifierInfo::*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(
    &::Org::BouncyCastle::Asn1::X509::PolicyQualifierInfo::_ctor)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x3663ab4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::PolicyQualifierInfo*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::PolicyQualifierInfo.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::PolicyQualifierInfo* (*)(::System::Object*)>(
    &::Org::BouncyCastle::Asn1::X509::PolicyQualifierInfo::GetInstance)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x3663c10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::PolicyQualifierInfo*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::PolicyQualifierInfo.get_PolicyQualifierId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::DerObjectIdentifier* (::Org::BouncyCastle::Asn1::X509::PolicyQualifierInfo::*)()>(
    &::Org::BouncyCastle::Asn1::X509::PolicyQualifierInfo::get_PolicyQualifierId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3663cb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::PolicyQualifierInfo*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::X509::PolicyQualifierInfo*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::PolicyQualifierInfo.get_Qualifier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Encodable* (::Org::BouncyCastle::Asn1::X509::PolicyQualifierInfo::*)()>(
    &::Org::BouncyCastle::Asn1::X509::PolicyQualifierInfo::get_Qualifier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3663cb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::PolicyQualifierInfo*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::X509::PolicyQualifierInfo*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::PolicyQualifierInfo.ToAsn1Object
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::X509::PolicyQualifierInfo::*)()>(
    &::Org::BouncyCastle::Asn1::X509::PolicyQualifierInfo::ToAsn1Object)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x3663cc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::PolicyQualifierInfo*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::X509::PolicyQualifierInfo*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& Org::BouncyCastle::Asn1::X509::PolicyQualifierInfo::__cordl_internal_get_policyQualifierId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___policyQualifierId;
}
constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier* const& Org::BouncyCastle::Asn1::X509::PolicyQualifierInfo::__cordl_internal_get_policyQualifierId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___policyQualifierId;
}
constexpr void Org::BouncyCastle::Asn1::X509::PolicyQualifierInfo::__cordl_internal_set_policyQualifierId(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___policyQualifierId = value;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Encodable*& Org::BouncyCastle::Asn1::X509::PolicyQualifierInfo::__cordl_internal_get_qualifier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___qualifier;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Encodable* const& Org::BouncyCastle::Asn1::X509::PolicyQualifierInfo::__cordl_internal_get_qualifier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___qualifier;
}
constexpr void Org::BouncyCastle::Asn1::X509::PolicyQualifierInfo::__cordl_internal_set_qualifier(::Org::BouncyCastle::Asn1::Asn1Encodable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___qualifier = value;
}
inline void Org::BouncyCastle::Asn1::X509::PolicyQualifierInfo::_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* policyQualifierId, ::Org::BouncyCastle::Asn1::Asn1Encodable* qualifier) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::PolicyQualifierInfo*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Encodable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, policyQualifierId, qualifier);
}
inline void Org::BouncyCastle::Asn1::X509::PolicyQualifierInfo::_ctor(::StringW cps) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::PolicyQualifierInfo*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cps);
}
inline void Org::BouncyCastle::Asn1::X509::PolicyQualifierInfo::_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::PolicyQualifierInfo*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seq);
}
inline ::Org::BouncyCastle::Asn1::X509::PolicyQualifierInfo* Org::BouncyCastle::Asn1::X509::PolicyQualifierInfo::GetInstance(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::PolicyQualifierInfo*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::PolicyQualifierInfo*>(nullptr, ___internal_method, obj);
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::X509::PolicyQualifierInfo::get_PolicyQualifierId() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::X509::PolicyQualifierInfo*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Encodable* Org::BouncyCastle::Asn1::X509::PolicyQualifierInfo::get_Qualifier() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::X509::PolicyQualifierInfo*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Encodable*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::X509::PolicyQualifierInfo::ToAsn1Object() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::X509::PolicyQualifierInfo*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::PolicyQualifierInfo* Org::BouncyCastle::Asn1::X509::PolicyQualifierInfo::New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* policyQualifierId,
                                                                                                                          ::Org::BouncyCastle::Asn1::Asn1Encodable* qualifier) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X509::PolicyQualifierInfo*>(policyQualifierId, qualifier));
}
inline ::Org::BouncyCastle::Asn1::X509::PolicyQualifierInfo* Org::BouncyCastle::Asn1::X509::PolicyQualifierInfo::New_ctor(::StringW cps) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X509::PolicyQualifierInfo*>(cps));
}
inline ::Org::BouncyCastle::Asn1::X509::PolicyQualifierInfo* Org::BouncyCastle::Asn1::X509::PolicyQualifierInfo::New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X509::PolicyQualifierInfo*>(seq));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::X509::PolicyQualifierInfo::PolicyQualifierInfo() {}
