#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Pkix\CertStatus.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Pkix/zzzz__CertStatus_def.hpp"
#include "Org/BouncyCastle/Utilities/Date/zzzz__DateTimeObject_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::CertStatus.get_RevocationDate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Utilities::Date::DateTimeObject* (::Org::BouncyCastle::Pkix::CertStatus::*)()>(
    &::Org::BouncyCastle::Pkix::CertStatus::get_RevocationDate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x35bc734;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::CertStatus*>(), { "get_RevocationDate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::CertStatus.set_RevocationDate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Pkix::CertStatus::*)(::Org::BouncyCastle::Utilities::Date::DateTimeObject*)>(
    &::Org::BouncyCastle::Pkix::CertStatus::set_RevocationDate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x35bc73c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::CertStatus*>(),
                                                                                           { "set_RevocationDate", {}, { ::i2c::type_of<::Org::BouncyCastle::Utilities::Date::DateTimeObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::CertStatus.get_Status
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Pkix::CertStatus::*)()>(&::Org::BouncyCastle::Pkix::CertStatus::get_Status)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x35bc744;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::CertStatus*>(), { "get_Status", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::CertStatus.set_Status
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Pkix::CertStatus::*)(int32_t)>(&::Org::BouncyCastle::Pkix::CertStatus::set_Status)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x35bc74c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::CertStatus*>(), { "set_Status", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::CertStatus._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Pkix::CertStatus::*)()>(&::Org::BouncyCastle::Pkix::CertStatus::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x35bc754;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::CertStatus*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& Org::BouncyCastle::Pkix::CertStatus::__cordl_internal_get_status() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___status;
}
constexpr int32_t const& Org::BouncyCastle::Pkix::CertStatus::__cordl_internal_get_status() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___status;
}
constexpr void Org::BouncyCastle::Pkix::CertStatus::__cordl_internal_set_status(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___status = value;
}
constexpr ::Org::BouncyCastle::Utilities::Date::DateTimeObject*& Org::BouncyCastle::Pkix::CertStatus::__cordl_internal_get_revocationDate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___revocationDate;
}
constexpr ::Org::BouncyCastle::Utilities::Date::DateTimeObject* const& Org::BouncyCastle::Pkix::CertStatus::__cordl_internal_get_revocationDate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___revocationDate;
}
constexpr void Org::BouncyCastle::Pkix::CertStatus::__cordl_internal_set_revocationDate(::Org::BouncyCastle::Utilities::Date::DateTimeObject* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___revocationDate = value;
}
inline ::Org::BouncyCastle::Utilities::Date::DateTimeObject* Org::BouncyCastle::Pkix::CertStatus::get_RevocationDate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::CertStatus*>(), { "get_RevocationDate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Utilities::Date::DateTimeObject*>(this, ___internal_method);
}
inline void Org::BouncyCastle::Pkix::CertStatus::set_RevocationDate(::Org::BouncyCastle::Utilities::Date::DateTimeObject* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::CertStatus*>(),
                                                                                         { "set_RevocationDate", {}, { ::i2c::type_of<::Org::BouncyCastle::Utilities::Date::DateTimeObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Org::BouncyCastle::Pkix::CertStatus::get_Status() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::CertStatus*>(), { "get_Status", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Org::BouncyCastle::Pkix::CertStatus::set_Status(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::CertStatus*>(), { "set_Status", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Org::BouncyCastle::Pkix::CertStatus::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::CertStatus*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Pkix::CertStatus* Org::BouncyCastle::Pkix::CertStatus::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Pkix::CertStatus*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Pkix::CertStatus::CertStatus() {}
