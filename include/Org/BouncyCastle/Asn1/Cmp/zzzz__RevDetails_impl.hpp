#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Asn1\Cmp\RevDetails.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/Cmp/zzzz__RevDetails_def.hpp"
#include "Org/BouncyCastle/Asn1/Crmf/zzzz__CertTemplate_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__X509Extensions_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::RevDetails._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Cmp::RevDetails::*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(
    &::Org::BouncyCastle::Asn1::Cmp::RevDetails::_ctor)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x33511d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::RevDetails*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::RevDetails.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Cmp::RevDetails* (*)(::System::Object*)>(&::Org::BouncyCastle::Asn1::Cmp::RevDetails::GetInstance)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x33512ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::RevDetails*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::RevDetails._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Cmp::RevDetails::*)(::Org::BouncyCastle::Asn1::Crmf::CertTemplate*)>(
    &::Org::BouncyCastle::Asn1::Cmp::RevDetails::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3351430;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::RevDetails*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Crmf::CertTemplate*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::RevDetails._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Cmp::RevDetails::*)(
    ::Org::BouncyCastle::Asn1::Crmf::CertTemplate*, ::Org::BouncyCastle::Asn1::X509::X509Extensions*)>(&::Org::BouncyCastle::Asn1::Cmp::RevDetails::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3351438;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::RevDetails*>(),
                                         { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Crmf::CertTemplate*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::X509Extensions*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::RevDetails.get_CertDetails
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Crmf::CertTemplate* (::Org::BouncyCastle::Asn1::Cmp::RevDetails::*)()>(
    &::Org::BouncyCastle::Asn1::Cmp::RevDetails::get_CertDetails)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3351440;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::RevDetails*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::RevDetails*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::RevDetails.get_CrlEntryDetails
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::X509Extensions* (::Org::BouncyCastle::Asn1::Cmp::RevDetails::*)()>(
    &::Org::BouncyCastle::Asn1::Cmp::RevDetails::get_CrlEntryDetails)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3351448;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::RevDetails*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::RevDetails*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::RevDetails.ToAsn1Object
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::Cmp::RevDetails::*)()>(
    &::Org::BouncyCastle::Asn1::Cmp::RevDetails::ToAsn1Object)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x3351450;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::RevDetails*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::RevDetails*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::Crmf::CertTemplate*& Org::BouncyCastle::Asn1::Cmp::RevDetails::__cordl_internal_get_certDetails() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certDetails;
}
constexpr ::Org::BouncyCastle::Asn1::Crmf::CertTemplate* const& Org::BouncyCastle::Asn1::Cmp::RevDetails::__cordl_internal_get_certDetails() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certDetails;
}
constexpr void Org::BouncyCastle::Asn1::Cmp::RevDetails::__cordl_internal_set_certDetails(::Org::BouncyCastle::Asn1::Crmf::CertTemplate* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___certDetails = value;
}
constexpr ::Org::BouncyCastle::Asn1::X509::X509Extensions*& Org::BouncyCastle::Asn1::Cmp::RevDetails::__cordl_internal_get_crlEntryDetails() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___crlEntryDetails;
}
constexpr ::Org::BouncyCastle::Asn1::X509::X509Extensions* const& Org::BouncyCastle::Asn1::Cmp::RevDetails::__cordl_internal_get_crlEntryDetails() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___crlEntryDetails;
}
constexpr void Org::BouncyCastle::Asn1::Cmp::RevDetails::__cordl_internal_set_crlEntryDetails(::Org::BouncyCastle::Asn1::X509::X509Extensions* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___crlEntryDetails = value;
}
inline void Org::BouncyCastle::Asn1::Cmp::RevDetails::_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::RevDetails*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seq);
}
inline ::Org::BouncyCastle::Asn1::Cmp::RevDetails* Org::BouncyCastle::Asn1::Cmp::RevDetails::GetInstance(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::RevDetails*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cmp::RevDetails*>(nullptr, ___internal_method, obj);
}
inline void Org::BouncyCastle::Asn1::Cmp::RevDetails::_ctor(::Org::BouncyCastle::Asn1::Crmf::CertTemplate* certDetails) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::RevDetails*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Crmf::CertTemplate*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, certDetails);
}
inline void Org::BouncyCastle::Asn1::Cmp::RevDetails::_ctor(::Org::BouncyCastle::Asn1::Crmf::CertTemplate* certDetails, ::Org::BouncyCastle::Asn1::X509::X509Extensions* crlEntryDetails) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::RevDetails*>(),
                                       { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Crmf::CertTemplate*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::X509Extensions*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, certDetails, crlEntryDetails);
}
inline ::Org::BouncyCastle::Asn1::Crmf::CertTemplate* Org::BouncyCastle::Asn1::Cmp::RevDetails::get_CertDetails() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::RevDetails*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Crmf::CertTemplate*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::X509Extensions* Org::BouncyCastle::Asn1::Cmp::RevDetails::get_CrlEntryDetails() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::RevDetails*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::X509Extensions*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::Cmp::RevDetails::ToAsn1Object() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::RevDetails*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Cmp::RevDetails* Org::BouncyCastle::Asn1::Cmp::RevDetails::New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Cmp::RevDetails*>(seq));
}
inline ::Org::BouncyCastle::Asn1::Cmp::RevDetails* Org::BouncyCastle::Asn1::Cmp::RevDetails::New_ctor(::Org::BouncyCastle::Asn1::Crmf::CertTemplate* certDetails) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Cmp::RevDetails*>(certDetails));
}
inline ::Org::BouncyCastle::Asn1::Cmp::RevDetails* Org::BouncyCastle::Asn1::Cmp::RevDetails::New_ctor(::Org::BouncyCastle::Asn1::Crmf::CertTemplate* certDetails,
                                                                                                      ::Org::BouncyCastle::Asn1::X509::X509Extensions* crlEntryDetails) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Cmp::RevDetails*>(certDetails, crlEntryDetails));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Cmp::RevDetails::RevDetails() {}
