#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Tsp\TspValidationException.hpp"
#include "Org/BouncyCastle/Tsp/zzzz__TspException_impl.hpp"
#include "Org/BouncyCastle/Tsp/zzzz__TspValidationException_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TspValidationException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Tsp::TspValidationException::*)(::StringW)>(&::Org::BouncyCastle::Tsp::TspValidationException::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3621254;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TspValidationException*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TspValidationException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Tsp::TspValidationException::*)(::StringW, int32_t)>(&::Org::BouncyCastle::Tsp::TspValidationException::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x361fe08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TspValidationException*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Tsp::TspValidationException.get_FailureCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Tsp::TspValidationException::*)()>(&::Org::BouncyCastle::Tsp::TspValidationException::get_FailureCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3626dec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TspValidationException*>(), { "get_FailureCode", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& Org::BouncyCastle::Tsp::TspValidationException::__cordl_internal_get_failureCode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___failureCode;
}
constexpr int32_t const& Org::BouncyCastle::Tsp::TspValidationException::__cordl_internal_get_failureCode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___failureCode;
}
constexpr void Org::BouncyCastle::Tsp::TspValidationException::__cordl_internal_set_failureCode(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___failureCode = value;
}
inline void Org::BouncyCastle::Tsp::TspValidationException::_ctor(::StringW message) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TspValidationException*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline void Org::BouncyCastle::Tsp::TspValidationException::_ctor(::StringW message, int32_t failureCode) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TspValidationException*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message, failureCode);
}
inline int32_t Org::BouncyCastle::Tsp::TspValidationException::get_FailureCode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Tsp::TspValidationException*>(), { "get_FailureCode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Tsp::TspValidationException* Org::BouncyCastle::Tsp::TspValidationException::New_ctor(::StringW message) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Tsp::TspValidationException*>(message));
}
inline ::Org::BouncyCastle::Tsp::TspValidationException* Org::BouncyCastle::Tsp::TspValidationException::New_ctor(::StringW message, int32_t failureCode) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Tsp::TspValidationException*>(message, failureCode));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Tsp::TspValidationException::TspValidationException() {}
