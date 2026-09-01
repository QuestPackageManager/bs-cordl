#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Asn1\Esf\SignaturePolicyIdentifier.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/Esf/zzzz__SignaturePolicyIdentifier_def.hpp"
#include "Org/BouncyCastle/Asn1/Esf/zzzz__SignaturePolicyId_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__IAsn1Choice_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Esf::SignaturePolicyIdentifier.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Esf::SignaturePolicyIdentifier* (*)(::System::Object*)>(
    &::Org::BouncyCastle::Asn1::Esf::SignaturePolicyIdentifier::GetInstance)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x3378cc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::SignaturePolicyIdentifier*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Esf::SignaturePolicyIdentifier._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Esf::SignaturePolicyIdentifier::*)()>(&::Org::BouncyCastle::Asn1::Esf::SignaturePolicyIdentifier::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3378ee0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::SignaturePolicyIdentifier*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Esf::SignaturePolicyIdentifier._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Esf::SignaturePolicyIdentifier::*)(::Org::BouncyCastle::Asn1::Esf::SignaturePolicyId*)>(
    &::Org::BouncyCastle::Asn1::Esf::SignaturePolicyIdentifier::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3378e88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::SignaturePolicyIdentifier*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Esf::SignaturePolicyId*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Esf::SignaturePolicyIdentifier.get_SignaturePolicyId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Esf::SignaturePolicyId* (::Org::BouncyCastle::Asn1::Esf::SignaturePolicyIdentifier::*)()>(
    &::Org::BouncyCastle::Asn1::Esf::SignaturePolicyIdentifier::get_SignaturePolicyId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3378ee8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::SignaturePolicyIdentifier*>(), { "get_SignaturePolicyId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Esf::SignaturePolicyIdentifier.ToAsn1Object
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::Esf::SignaturePolicyIdentifier::*)()>(
    &::Org::BouncyCastle::Asn1::Esf::SignaturePolicyIdentifier::ToAsn1Object)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x3378ef0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::SignaturePolicyIdentifier*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::SignaturePolicyIdentifier*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::Esf::SignaturePolicyId*& Org::BouncyCastle::Asn1::Esf::SignaturePolicyIdentifier::__cordl_internal_get_sigPolicy() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sigPolicy;
}
constexpr ::Org::BouncyCastle::Asn1::Esf::SignaturePolicyId* const& Org::BouncyCastle::Asn1::Esf::SignaturePolicyIdentifier::__cordl_internal_get_sigPolicy() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sigPolicy;
}
constexpr void Org::BouncyCastle::Asn1::Esf::SignaturePolicyIdentifier::__cordl_internal_set_sigPolicy(::Org::BouncyCastle::Asn1::Esf::SignaturePolicyId* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sigPolicy = value;
}
inline ::Org::BouncyCastle::Asn1::Esf::SignaturePolicyIdentifier* Org::BouncyCastle::Asn1::Esf::SignaturePolicyIdentifier::GetInstance(::System::Object* obj) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::SignaturePolicyIdentifier*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Esf::SignaturePolicyIdentifier*>(nullptr, ___internal_method, obj);
}
inline void Org::BouncyCastle::Asn1::Esf::SignaturePolicyIdentifier::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::SignaturePolicyIdentifier*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Asn1::Esf::SignaturePolicyIdentifier::_ctor(::Org::BouncyCastle::Asn1::Esf::SignaturePolicyId* signaturePolicyId) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::SignaturePolicyIdentifier*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Esf::SignaturePolicyId*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, signaturePolicyId);
}
inline ::Org::BouncyCastle::Asn1::Esf::SignaturePolicyId* Org::BouncyCastle::Asn1::Esf::SignaturePolicyIdentifier::get_SignaturePolicyId() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::SignaturePolicyIdentifier*>(), { "get_SignaturePolicyId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Esf::SignaturePolicyId*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::Esf::SignaturePolicyIdentifier::ToAsn1Object() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::SignaturePolicyIdentifier*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Esf::SignaturePolicyIdentifier* Org::BouncyCastle::Asn1::Esf::SignaturePolicyIdentifier::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Esf::SignaturePolicyIdentifier*>());
}
inline ::Org::BouncyCastle::Asn1::Esf::SignaturePolicyIdentifier*
Org::BouncyCastle::Asn1::Esf::SignaturePolicyIdentifier::New_ctor(::Org::BouncyCastle::Asn1::Esf::SignaturePolicyId* signaturePolicyId) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Esf::SignaturePolicyIdentifier*>(signaturePolicyId));
}
/// @brief Convert operator to "::Org::BouncyCastle::Asn1::IAsn1Choice"
constexpr Org::BouncyCastle::Asn1::Esf::SignaturePolicyIdentifier::operator ::Org::BouncyCastle::Asn1::IAsn1Choice*() noexcept {
  return static_cast<::Org::BouncyCastle::Asn1::IAsn1Choice*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Asn1::IAsn1Choice"
constexpr ::Org::BouncyCastle::Asn1::IAsn1Choice* Org::BouncyCastle::Asn1::Esf::SignaturePolicyIdentifier::i___Org__BouncyCastle__Asn1__IAsn1Choice() noexcept {
  return static_cast<::Org::BouncyCastle::Asn1::IAsn1Choice*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Esf::SignaturePolicyIdentifier::SignaturePolicyIdentifier() {}
