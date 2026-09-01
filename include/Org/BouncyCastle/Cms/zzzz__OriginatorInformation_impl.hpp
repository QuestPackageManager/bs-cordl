#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Cms\OriginatorInformation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Cms/zzzz__OriginatorInformation_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__OriginatorInfo_def.hpp"
#include "Org/BouncyCastle/X509/Store/zzzz__IX509Store_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Cms::OriginatorInformation._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::OriginatorInformation::*)(::Org::BouncyCastle::Asn1::Cms::OriginatorInfo*)>(
    &::Org::BouncyCastle::Cms::OriginatorInformation::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36d1a64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::OriginatorInformation*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Cms::OriginatorInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::OriginatorInformation.GetCertificates
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::X509::Store::IX509Store* (::Org::BouncyCastle::Cms::OriginatorInformation::*)()>(
    &::Org::BouncyCastle::Cms::OriginatorInformation::GetCertificates)> {
  constexpr static std::size_t size = 0x508;
  constexpr static std::size_t addrs = 0x36d1a6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::OriginatorInformation*>(), { ::i2c::class_of<::Org::BouncyCastle::Cms::OriginatorInformation*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::OriginatorInformation.GetCrls
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::X509::Store::IX509Store* (::Org::BouncyCastle::Cms::OriginatorInformation::*)()>(
    &::Org::BouncyCastle::Cms::OriginatorInformation::GetCrls)> {
  constexpr static std::size_t size = 0x508;
  constexpr static std::size_t addrs = 0x36d1f74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::OriginatorInformation*>(), { ::i2c::class_of<::Org::BouncyCastle::Cms::OriginatorInformation*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::OriginatorInformation.ToAsn1Structure
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Cms::OriginatorInfo* (::Org::BouncyCastle::Cms::OriginatorInformation::*)()>(
    &::Org::BouncyCastle::Cms::OriginatorInformation::ToAsn1Structure)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36d247c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::OriginatorInformation*>(), { ::i2c::class_of<::Org::BouncyCastle::Cms::OriginatorInformation*>(), 6 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::Cms::OriginatorInfo*& Org::BouncyCastle::Cms::OriginatorInformation::__cordl_internal_get_originatorInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___originatorInfo;
}
constexpr ::Org::BouncyCastle::Asn1::Cms::OriginatorInfo* const& Org::BouncyCastle::Cms::OriginatorInformation::__cordl_internal_get_originatorInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___originatorInfo;
}
constexpr void Org::BouncyCastle::Cms::OriginatorInformation::__cordl_internal_set_originatorInfo(::Org::BouncyCastle::Asn1::Cms::OriginatorInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___originatorInfo = value;
}
inline void Org::BouncyCastle::Cms::OriginatorInformation::_ctor(::Org::BouncyCastle::Asn1::Cms::OriginatorInfo* originatorInfo) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::OriginatorInformation*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Cms::OriginatorInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, originatorInfo);
}
inline ::Org::BouncyCastle::X509::Store::IX509Store* Org::BouncyCastle::Cms::OriginatorInformation::GetCertificates() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Cms::OriginatorInformation*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::X509::Store::IX509Store*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::X509::Store::IX509Store* Org::BouncyCastle::Cms::OriginatorInformation::GetCrls() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Cms::OriginatorInformation*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::X509::Store::IX509Store*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Cms::OriginatorInfo* Org::BouncyCastle::Cms::OriginatorInformation::ToAsn1Structure() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Cms::OriginatorInformation*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cms::OriginatorInfo*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Cms::OriginatorInformation* Org::BouncyCastle::Cms::OriginatorInformation::New_ctor(::Org::BouncyCastle::Asn1::Cms::OriginatorInfo* originatorInfo) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Cms::OriginatorInformation*>(originatorInfo));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Cms::OriginatorInformation::OriginatorInformation() {}
