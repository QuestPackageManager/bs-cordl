#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Math/EC/Endo/GlvTypeBParameters.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Math/EC/Endo/zzzz__GlvTypeBParameters_def.hpp"
#include "Org/BouncyCastle/Math/EC/Endo/zzzz__ScalarSplitParameters_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters::*)(
    ::Org::BouncyCastle::Math::BigInteger*, ::Org::BouncyCastle::Math::BigInteger*, ::ArrayW<::Org::BouncyCastle::Math::BigInteger*>, ::ArrayW<::Org::BouncyCastle::Math::BigInteger*>,
    ::Org::BouncyCastle::Math::BigInteger*, ::Org::BouncyCastle::Math::BigInteger*, int32_t)>(&::Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters::_ctor)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x350aa88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters*>(),
                                         { ".ctor",
                                           {},
                                           { ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(),
                                             ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Math::BigInteger*>>(), ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Math::BigInteger*>>(),
                                             ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters::*)(::Org::BouncyCastle::Math::BigInteger*, ::Org::BouncyCastle::Math::BigInteger*,
                                                                                                                         ::Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters*)>(
    &::Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x350ac2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters.get_Beta
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters::*)()>(
    &::Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters::get_Beta)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x350ac38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters.get_Lambda
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters::*)()>(
    &::Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters::get_Lambda)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x350ac40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters.get_SplitParams
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters* (::Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters::*)()>(
    &::Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters::get_SplitParams)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x350ac48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters.get_V1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Org::BouncyCastle::Math::BigInteger*> (::Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters::*)()>(
    &::Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters::get_V1)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x350ac50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters.get_V2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Org::BouncyCastle::Math::BigInteger*> (::Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters::*)()>(
    &::Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters::get_V2)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x350ad40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters.get_G1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters::*)()>(
    &::Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters::get_G1)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x350ae30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters.get_G2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters::*)()>(
    &::Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters::get_G2)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x350ae4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters.get_Bits
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters::*)()>(&::Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters::get_Bits)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x350ae68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters*>(), 11 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Math::BigInteger*& Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters::__cordl_internal_get_m_beta() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_beta;
}
constexpr ::Org::BouncyCastle::Math::BigInteger* const& Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters::__cordl_internal_get_m_beta() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_beta;
}
constexpr void Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters::__cordl_internal_set_m_beta(::Org::BouncyCastle::Math::BigInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_beta = value;
}
constexpr ::Org::BouncyCastle::Math::BigInteger*& Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters::__cordl_internal_get_m_lambda() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_lambda;
}
constexpr ::Org::BouncyCastle::Math::BigInteger* const& Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters::__cordl_internal_get_m_lambda() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_lambda;
}
constexpr void Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters::__cordl_internal_set_m_lambda(::Org::BouncyCastle::Math::BigInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_lambda = value;
}
constexpr ::Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters*& Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters::__cordl_internal_get_m_splitParams() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_splitParams;
}
constexpr ::Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters* const& Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters::__cordl_internal_get_m_splitParams() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_splitParams;
}
constexpr void Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters::__cordl_internal_set_m_splitParams(::Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_splitParams = value;
}
inline void Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters::_ctor(::Org::BouncyCastle::Math::BigInteger* beta, ::Org::BouncyCastle::Math::BigInteger* lambda,
                                                                         ::ArrayW<::Org::BouncyCastle::Math::BigInteger*> v1, ::ArrayW<::Org::BouncyCastle::Math::BigInteger*> v2,
                                                                         ::Org::BouncyCastle::Math::BigInteger* g1, ::Org::BouncyCastle::Math::BigInteger* g2, int32_t bits) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters*>(),
                                              { ".ctor",
                                                {},
                                                { ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(),
                                                  ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Math::BigInteger*>>(), ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Math::BigInteger*>>(),
                                                  ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, beta, lambda, v1, v2, g1, g2, bits);
}
inline void Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters::_ctor(::Org::BouncyCastle::Math::BigInteger* beta, ::Org::BouncyCastle::Math::BigInteger* lambda,
                                                                         ::Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters* splitParams) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(),
                                                               ::i2c::type_of<::Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, beta, lambda, splitParams);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters::get_Beta() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters::get_Lambda() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters* Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters::get_SplitParams() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters*>(this, ___internal_method);
}
inline ::ArrayW<::Org::BouncyCastle::Math::BigInteger*> Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters::get_V1() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::Org::BouncyCastle::Math::BigInteger*>>(this, ___internal_method);
}
inline ::ArrayW<::Org::BouncyCastle::Math::BigInteger*> Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters::get_V2() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::Org::BouncyCastle::Math::BigInteger*>>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters::get_G1() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters::get_G2() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters::get_Bits() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters*
Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters::New_ctor(::Org::BouncyCastle::Math::BigInteger* beta, ::Org::BouncyCastle::Math::BigInteger* lambda,
                                                                ::ArrayW<::Org::BouncyCastle::Math::BigInteger*> v1, ::ArrayW<::Org::BouncyCastle::Math::BigInteger*> v2,
                                                                ::Org::BouncyCastle::Math::BigInteger* g1, ::Org::BouncyCastle::Math::BigInteger* g2, int32_t bits) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters*>(beta, lambda, v1, v2, g1, g2, bits));
}
inline ::Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters*
Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters::New_ctor(::Org::BouncyCastle::Math::BigInteger* beta, ::Org::BouncyCastle::Math::BigInteger* lambda,
                                                                ::Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters* splitParams) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters*>(beta, lambda, splitParams));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters::GlvTypeBParameters() {}
