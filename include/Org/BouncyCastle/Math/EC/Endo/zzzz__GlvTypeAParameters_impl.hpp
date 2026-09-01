#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Math\EC\Endo\GlvTypeAParameters.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Math/EC/Endo/zzzz__GlvTypeAParameters_def.hpp"
#include "Org/BouncyCastle/Math/EC/Endo/zzzz__ScalarSplitParameters_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Endo::GlvTypeAParameters._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Math::EC::Endo::GlvTypeAParameters::*)(::Org::BouncyCastle::Math::BigInteger*, ::Org::BouncyCastle::Math::BigInteger*,
                                                                                                                         ::Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters*)>(
    &::Org::BouncyCastle::Math::EC::Endo::GlvTypeAParameters::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x350ccb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Endo::GlvTypeAParameters*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Endo::GlvTypeAParameters.get_I
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::Math::EC::Endo::GlvTypeAParameters::*)()>(
    &::Org::BouncyCastle::Math::EC::Endo::GlvTypeAParameters::get_I)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x350ccc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Endo::GlvTypeAParameters*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Math::EC::Endo::GlvTypeAParameters*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Endo::GlvTypeAParameters.get_Lambda
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::Math::EC::Endo::GlvTypeAParameters::*)()>(
    &::Org::BouncyCastle::Math::EC::Endo::GlvTypeAParameters::get_Lambda)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x350ccc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Endo::GlvTypeAParameters*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Math::EC::Endo::GlvTypeAParameters*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Endo::GlvTypeAParameters.get_SplitParams
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters* (::Org::BouncyCastle::Math::EC::Endo::GlvTypeAParameters::*)()>(
    &::Org::BouncyCastle::Math::EC::Endo::GlvTypeAParameters::get_SplitParams)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x350ccd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Endo::GlvTypeAParameters*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Math::EC::Endo::GlvTypeAParameters*>(), 6 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Math::BigInteger*& Org::BouncyCastle::Math::EC::Endo::GlvTypeAParameters::__cordl_internal_get_m_i() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_i;
}
constexpr ::Org::BouncyCastle::Math::BigInteger* const& Org::BouncyCastle::Math::EC::Endo::GlvTypeAParameters::__cordl_internal_get_m_i() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_i;
}
constexpr void Org::BouncyCastle::Math::EC::Endo::GlvTypeAParameters::__cordl_internal_set_m_i(::Org::BouncyCastle::Math::BigInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_i = value;
}
constexpr ::Org::BouncyCastle::Math::BigInteger*& Org::BouncyCastle::Math::EC::Endo::GlvTypeAParameters::__cordl_internal_get_m_lambda() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_lambda;
}
constexpr ::Org::BouncyCastle::Math::BigInteger* const& Org::BouncyCastle::Math::EC::Endo::GlvTypeAParameters::__cordl_internal_get_m_lambda() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_lambda;
}
constexpr void Org::BouncyCastle::Math::EC::Endo::GlvTypeAParameters::__cordl_internal_set_m_lambda(::Org::BouncyCastle::Math::BigInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_lambda = value;
}
constexpr ::Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters*& Org::BouncyCastle::Math::EC::Endo::GlvTypeAParameters::__cordl_internal_get_m_splitParams() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_splitParams;
}
constexpr ::Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters* const& Org::BouncyCastle::Math::EC::Endo::GlvTypeAParameters::__cordl_internal_get_m_splitParams() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_splitParams;
}
constexpr void Org::BouncyCastle::Math::EC::Endo::GlvTypeAParameters::__cordl_internal_set_m_splitParams(::Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_splitParams = value;
}
inline void Org::BouncyCastle::Math::EC::Endo::GlvTypeAParameters::_ctor(::Org::BouncyCastle::Math::BigInteger* i, ::Org::BouncyCastle::Math::BigInteger* lambda,
                                                                         ::Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters* splitParams) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Endo::GlvTypeAParameters*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(),
                                                               ::i2c::type_of<::Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, i, lambda, splitParams);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Math::EC::Endo::GlvTypeAParameters::get_I() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::EC::Endo::GlvTypeAParameters*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Math::EC::Endo::GlvTypeAParameters::get_Lambda() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::EC::Endo::GlvTypeAParameters*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters* Org::BouncyCastle::Math::EC::Endo::GlvTypeAParameters::get_SplitParams() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::EC::Endo::GlvTypeAParameters*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::EC::Endo::GlvTypeAParameters*
Org::BouncyCastle::Math::EC::Endo::GlvTypeAParameters::New_ctor(::Org::BouncyCastle::Math::BigInteger* i, ::Org::BouncyCastle::Math::BigInteger* lambda,
                                                                ::Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters* splitParams) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Math::EC::Endo::GlvTypeAParameters*>(i, lambda, splitParams));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Math::EC::Endo::GlvTypeAParameters::GlvTypeAParameters() {}
