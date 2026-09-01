#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\ISignerWithRecovery.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ISignerWithRecovery_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ISigner_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::ISignerWithRecovery.HasFullMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Crypto::ISignerWithRecovery::*)()>(&::Org::BouncyCastle::Crypto::ISignerWithRecovery::HasFullMessage)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::ISignerWithRecovery*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::ISignerWithRecovery*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::ISignerWithRecovery.GetRecoveredMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::ISignerWithRecovery::*)()>(
    &::Org::BouncyCastle::Crypto::ISignerWithRecovery::GetRecoveredMessage)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::ISignerWithRecovery*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::ISignerWithRecovery*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::ISignerWithRecovery.UpdateWithRecoveredMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::ISignerWithRecovery::*)(::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Crypto::ISignerWithRecovery::UpdateWithRecoveredMessage)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::ISignerWithRecovery*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::ISignerWithRecovery*>(), 2 }));
    return ___internal_method;
  }
};
inline bool Org::BouncyCastle::Crypto::ISignerWithRecovery::HasFullMessage() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::ISignerWithRecovery*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::ISignerWithRecovery::GetRecoveredMessage() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::ISignerWithRecovery*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::ISignerWithRecovery::UpdateWithRecoveredMessage(::ArrayW<uint8_t> signature) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::ISignerWithRecovery*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, signature);
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::ISigner"
constexpr Org::BouncyCastle::Crypto::ISignerWithRecovery::operator ::Org::BouncyCastle::Crypto::ISigner*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::ISigner*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::ISigner"
constexpr ::Org::BouncyCastle::Crypto::ISigner* Org::BouncyCastle::Crypto::ISignerWithRecovery::i___Org__BouncyCastle__Crypto__ISigner() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::ISigner*>(static_cast<void*>(this));
}
