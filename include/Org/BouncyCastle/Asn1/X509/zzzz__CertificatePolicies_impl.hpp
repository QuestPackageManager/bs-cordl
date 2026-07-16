#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/X509/CertificatePolicies.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__PolicyInformation_impl.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__CertificatePolicies_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__PolicyInformation_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__X509Extensions_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1TaggedObject_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::CertificatePolicies.Copy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Org::BouncyCastle::Asn1::X509::PolicyInformation*> (*)(::ArrayW<::Org::BouncyCastle::Asn1::X509::PolicyInformation*>)>(
    &::Org::BouncyCastle::Asn1::X509::CertificatePolicies::Copy)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x355c8ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::CertificatePolicies*>(),
                                                                                           { "Copy", {}, { ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Asn1::X509::PolicyInformation*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::CertificatePolicies.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::CertificatePolicies* (*)(::System::Object*)>(
    &::Org::BouncyCastle::Asn1::X509::CertificatePolicies::GetInstance)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x355c924;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::CertificatePolicies*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::CertificatePolicies.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::CertificatePolicies* (*)(::Org::BouncyCastle::Asn1::Asn1TaggedObject*, bool)>(
    &::Org::BouncyCastle::Asn1::X509::CertificatePolicies::GetInstance)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x355cae8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::CertificatePolicies*>(),
                                                             { "GetInstance", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1TaggedObject*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::CertificatePolicies.FromExtensions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::CertificatePolicies* (*)(::Org::BouncyCastle::Asn1::X509::X509Extensions*)>(
    &::Org::BouncyCastle::Asn1::X509::CertificatePolicies::FromExtensions)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x355cafc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::CertificatePolicies*>(),
                                                                                           { "FromExtensions", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::X509Extensions*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::CertificatePolicies._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X509::CertificatePolicies::*)(::Org::BouncyCastle::Asn1::X509::PolicyInformation*)>(
    &::Org::BouncyCastle::Asn1::X509::CertificatePolicies::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x355cb74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::CertificatePolicies*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::PolicyInformation*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::CertificatePolicies._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X509::CertificatePolicies::*)(::ArrayW<::Org::BouncyCastle::Asn1::X509::PolicyInformation*>)>(
    &::Org::BouncyCastle::Asn1::X509::CertificatePolicies::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x355cc14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::CertificatePolicies*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Asn1::X509::PolicyInformation*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::CertificatePolicies._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X509::CertificatePolicies::*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(
    &::Org::BouncyCastle::Asn1::X509::CertificatePolicies::_ctor)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x355c9c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::CertificatePolicies*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::CertificatePolicies.GetPolicyInformation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Org::BouncyCastle::Asn1::X509::PolicyInformation*> (::Org::BouncyCastle::Asn1::X509::CertificatePolicies::*)()>(
    &::Org::BouncyCastle::Asn1::X509::CertificatePolicies::GetPolicyInformation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x355cc30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::CertificatePolicies*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::X509::CertificatePolicies*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::CertificatePolicies.GetPolicyInformation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::PolicyInformation* (
    ::Org::BouncyCastle::Asn1::X509::CertificatePolicies::*)(::Org::BouncyCastle::Asn1::DerObjectIdentifier*)>(&::Org::BouncyCastle::Asn1::X509::CertificatePolicies::GetPolicyInformation)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x355cc38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::CertificatePolicies*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::X509::CertificatePolicies*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::CertificatePolicies.ToAsn1Object
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::X509::CertificatePolicies::*)()>(
    &::Org::BouncyCastle::Asn1::X509::CertificatePolicies::ToAsn1Object)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x355ccdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::CertificatePolicies*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::X509::CertificatePolicies*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::CertificatePolicies.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::Asn1::X509::CertificatePolicies::*)()>(&::Org::BouncyCastle::Asn1::X509::CertificatePolicies::ToString)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x355cd3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::CertificatePolicies*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::X509::CertificatePolicies*>(), 3 }));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::Org::BouncyCastle::Asn1::X509::PolicyInformation*>& Org::BouncyCastle::Asn1::X509::CertificatePolicies::__cordl_internal_get_policyInformation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___policyInformation;
}
constexpr ::ArrayW<::Org::BouncyCastle::Asn1::X509::PolicyInformation*> const& Org::BouncyCastle::Asn1::X509::CertificatePolicies::__cordl_internal_get_policyInformation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___policyInformation;
}
constexpr void Org::BouncyCastle::Asn1::X509::CertificatePolicies::__cordl_internal_set_policyInformation(::ArrayW<::Org::BouncyCastle::Asn1::X509::PolicyInformation*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___policyInformation = value;
}
inline ::ArrayW<::Org::BouncyCastle::Asn1::X509::PolicyInformation*>
Org::BouncyCastle::Asn1::X509::CertificatePolicies::Copy(::ArrayW<::Org::BouncyCastle::Asn1::X509::PolicyInformation*> policyInfo) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::CertificatePolicies*>(),
                                                                                         { "Copy", {}, { ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Asn1::X509::PolicyInformation*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::Org::BouncyCastle::Asn1::X509::PolicyInformation*>>(nullptr, ___internal_method, policyInfo);
}
inline ::Org::BouncyCastle::Asn1::X509::CertificatePolicies* Org::BouncyCastle::Asn1::X509::CertificatePolicies::GetInstance(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::CertificatePolicies*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::CertificatePolicies*>(nullptr, ___internal_method, obj);
}
inline ::Org::BouncyCastle::Asn1::X509::CertificatePolicies* Org::BouncyCastle::Asn1::X509::CertificatePolicies::GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool isExplicit) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::CertificatePolicies*>(),
                                                           { "GetInstance", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1TaggedObject*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::CertificatePolicies*>(nullptr, ___internal_method, obj, isExplicit);
}
inline ::Org::BouncyCastle::Asn1::X509::CertificatePolicies* Org::BouncyCastle::Asn1::X509::CertificatePolicies::FromExtensions(::Org::BouncyCastle::Asn1::X509::X509Extensions* extensions) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::CertificatePolicies*>(),
                                                                                         { "FromExtensions", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::X509Extensions*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::CertificatePolicies*>(nullptr, ___internal_method, extensions);
}
inline void Org::BouncyCastle::Asn1::X509::CertificatePolicies::_ctor(::Org::BouncyCastle::Asn1::X509::PolicyInformation* name) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::CertificatePolicies*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::PolicyInformation*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline void Org::BouncyCastle::Asn1::X509::CertificatePolicies::_ctor(::ArrayW<::Org::BouncyCastle::Asn1::X509::PolicyInformation*> policyInformation) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::CertificatePolicies*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Asn1::X509::PolicyInformation*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, policyInformation);
}
inline void Org::BouncyCastle::Asn1::X509::CertificatePolicies::_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::CertificatePolicies*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seq);
}
inline ::ArrayW<::Org::BouncyCastle::Asn1::X509::PolicyInformation*> Org::BouncyCastle::Asn1::X509::CertificatePolicies::GetPolicyInformation() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::X509::CertificatePolicies*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::Org::BouncyCastle::Asn1::X509::PolicyInformation*>>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::PolicyInformation* Org::BouncyCastle::Asn1::X509::CertificatePolicies::GetPolicyInformation(::Org::BouncyCastle::Asn1::DerObjectIdentifier* policyIdentifier) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::X509::CertificatePolicies*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::PolicyInformation*>(this, ___internal_method, policyIdentifier);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::X509::CertificatePolicies::ToAsn1Object() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::X509::CertificatePolicies*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline ::StringW Org::BouncyCastle::Asn1::X509::CertificatePolicies::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::X509::CertificatePolicies*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::CertificatePolicies* Org::BouncyCastle::Asn1::X509::CertificatePolicies::New_ctor(::Org::BouncyCastle::Asn1::X509::PolicyInformation* name) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X509::CertificatePolicies*>(name));
}
inline ::Org::BouncyCastle::Asn1::X509::CertificatePolicies*
Org::BouncyCastle::Asn1::X509::CertificatePolicies::New_ctor(::ArrayW<::Org::BouncyCastle::Asn1::X509::PolicyInformation*> policyInformation) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X509::CertificatePolicies*>(policyInformation));
}
inline ::Org::BouncyCastle::Asn1::X509::CertificatePolicies* Org::BouncyCastle::Asn1::X509::CertificatePolicies::New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X509::CertificatePolicies*>(seq));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::X509::CertificatePolicies::CertificatePolicies() {}
