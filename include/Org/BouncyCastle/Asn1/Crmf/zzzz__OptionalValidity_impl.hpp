#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Asn1\Crmf\OptionalValidity.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/Crmf/zzzz__OptionalValidity_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__Time_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Crmf::OptionalValidity._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Crmf::OptionalValidity::*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(
    &::Org::BouncyCastle::Asn1::Crmf::OptionalValidity::_ctor)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x3367730;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::OptionalValidity*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Crmf::OptionalValidity.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Crmf::OptionalValidity* (*)(::System::Object*)>(&::Org::BouncyCastle::Asn1::Crmf::OptionalValidity::GetInstance)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x33664e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::OptionalValidity*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Crmf::OptionalValidity._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Crmf::OptionalValidity::*)(::Org::BouncyCastle::Asn1::X509::Time*, ::Org::BouncyCastle::Asn1::X509::Time*)>(
    &::Org::BouncyCastle::Asn1::Crmf::OptionalValidity::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3367a20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::OptionalValidity*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::Time*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::Time*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Crmf::OptionalValidity.get_NotBefore
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::Time* (::Org::BouncyCastle::Asn1::Crmf::OptionalValidity::*)()>(
    &::Org::BouncyCastle::Asn1::Crmf::OptionalValidity::get_NotBefore)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3367a28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::OptionalValidity*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::OptionalValidity*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Crmf::OptionalValidity.get_NotAfter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::Time* (::Org::BouncyCastle::Asn1::Crmf::OptionalValidity::*)()>(
    &::Org::BouncyCastle::Asn1::Crmf::OptionalValidity::get_NotAfter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3367a30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::OptionalValidity*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::OptionalValidity*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Crmf::OptionalValidity.ToAsn1Object
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::Crmf::OptionalValidity::*)()>(
    &::Org::BouncyCastle::Asn1::Crmf::OptionalValidity::ToAsn1Object)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x3367a38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::OptionalValidity*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::OptionalValidity*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::X509::Time*& Org::BouncyCastle::Asn1::Crmf::OptionalValidity::__cordl_internal_get_notBefore() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___notBefore;
}
constexpr ::Org::BouncyCastle::Asn1::X509::Time* const& Org::BouncyCastle::Asn1::Crmf::OptionalValidity::__cordl_internal_get_notBefore() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___notBefore;
}
constexpr void Org::BouncyCastle::Asn1::Crmf::OptionalValidity::__cordl_internal_set_notBefore(::Org::BouncyCastle::Asn1::X509::Time* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___notBefore = value;
}
constexpr ::Org::BouncyCastle::Asn1::X509::Time*& Org::BouncyCastle::Asn1::Crmf::OptionalValidity::__cordl_internal_get_notAfter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___notAfter;
}
constexpr ::Org::BouncyCastle::Asn1::X509::Time* const& Org::BouncyCastle::Asn1::Crmf::OptionalValidity::__cordl_internal_get_notAfter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___notAfter;
}
constexpr void Org::BouncyCastle::Asn1::Crmf::OptionalValidity::__cordl_internal_set_notAfter(::Org::BouncyCastle::Asn1::X509::Time* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___notAfter = value;
}
inline void Org::BouncyCastle::Asn1::Crmf::OptionalValidity::_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::OptionalValidity*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seq);
}
inline ::Org::BouncyCastle::Asn1::Crmf::OptionalValidity* Org::BouncyCastle::Asn1::Crmf::OptionalValidity::GetInstance(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::OptionalValidity*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Crmf::OptionalValidity*>(nullptr, ___internal_method, obj);
}
inline void Org::BouncyCastle::Asn1::Crmf::OptionalValidity::_ctor(::Org::BouncyCastle::Asn1::X509::Time* notBefore, ::Org::BouncyCastle::Asn1::X509::Time* notAfter) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::OptionalValidity*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::Time*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::Time*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, notBefore, notAfter);
}
inline ::Org::BouncyCastle::Asn1::X509::Time* Org::BouncyCastle::Asn1::Crmf::OptionalValidity::get_NotBefore() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::OptionalValidity*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::Time*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::Time* Org::BouncyCastle::Asn1::Crmf::OptionalValidity::get_NotAfter() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::OptionalValidity*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::Time*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::Crmf::OptionalValidity::ToAsn1Object() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::OptionalValidity*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Crmf::OptionalValidity* Org::BouncyCastle::Asn1::Crmf::OptionalValidity::New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Crmf::OptionalValidity*>(seq));
}
inline ::Org::BouncyCastle::Asn1::Crmf::OptionalValidity* Org::BouncyCastle::Asn1::Crmf::OptionalValidity::New_ctor(::Org::BouncyCastle::Asn1::X509::Time* notBefore,
                                                                                                                    ::Org::BouncyCastle::Asn1::X509::Time* notAfter) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Crmf::OptionalValidity*>(notBefore, notAfter));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Crmf::OptionalValidity::OptionalValidity() {}
