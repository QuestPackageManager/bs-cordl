#pragma once
// IWYU pragma private; include "Mono/Math/Prime/PrimalityTests.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mono/Math/Prime/zzzz__PrimalityTests_def.hpp"
#include "Mono/Math/Prime/zzzz__ConfidenceFactor_def.hpp"
#include "Mono/Math/zzzz__BigInteger_def.hpp"
//  Writing Method size for method: ::Mono::Math::Prime::PrimalityTests.GetSPPRounds
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Mono::Math::BigInteger*, ::Mono::Math::Prime::ConfidenceFactor)>(&::Mono::Math::Prime::PrimalityTests::GetSPPRounds)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x5aab3cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Math::Prime::PrimalityTests*>(),
                                                             { "GetSPPRounds", {}, { ::i2c::type_of<::Mono::Math::BigInteger*>(), ::i2c::type_of<::Mono::Math::Prime::ConfidenceFactor>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Math::Prime::PrimalityTests.RabinMillerTest
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Mono::Math::BigInteger*, ::Mono::Math::Prime::ConfidenceFactor)>(&::Mono::Math::Prime::PrimalityTests::RabinMillerTest)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x5aab574;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Math::Prime::PrimalityTests*>(),
                                                             { "RabinMillerTest", {}, { ::i2c::type_of<::Mono::Math::BigInteger*>(), ::i2c::type_of<::Mono::Math::Prime::ConfidenceFactor>() } })));
    return ___internal_method;
  }
};
inline int32_t Mono::Math::Prime::PrimalityTests::GetSPPRounds(::Mono::Math::BigInteger* bi, ::Mono::Math::Prime::ConfidenceFactor confidence) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Math::Prime::PrimalityTests*>(),
                                                           { "GetSPPRounds", {}, { ::i2c::type_of<::Mono::Math::BigInteger*>(), ::i2c::type_of<::Mono::Math::Prime::ConfidenceFactor>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, bi, confidence);
}
inline bool Mono::Math::Prime::PrimalityTests::RabinMillerTest(::Mono::Math::BigInteger* n, ::Mono::Math::Prime::ConfidenceFactor confidence) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Math::Prime::PrimalityTests*>(),
                                                           { "RabinMillerTest", {}, { ::i2c::type_of<::Mono::Math::BigInteger*>(), ::i2c::type_of<::Mono::Math::Prime::ConfidenceFactor>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, n, confidence);
}
// Ctor Parameters []
constexpr ::Mono::Math::Prime::PrimalityTests::PrimalityTests() {}
