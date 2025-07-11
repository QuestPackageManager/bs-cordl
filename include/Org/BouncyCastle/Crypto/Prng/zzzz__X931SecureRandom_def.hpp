#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Prng/X931SecureRandom.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(X931SecureRandom)
namespace Org::BouncyCastle::Crypto::Prng {
class X931Rng;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Prng {
class X931SecureRandom;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Prng::X931SecureRandom);
// Dependencies Org.BouncyCastle.Security.SecureRandom
namespace Org::BouncyCastle::Crypto::Prng {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Prng.X931SecureRandom
class CORDL_TYPE X931SecureRandom : public ::Org::BouncyCastle::Security::SecureRandom {
public:
  // Declarations
  /// @brief Field mDrbg, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_mDrbg, put = __cordl_internal_set_mDrbg)) ::Org::BouncyCastle::Crypto::Prng::X931Rng* mDrbg;

  /// @brief Field mPredictionResistant, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_mPredictionResistant, put = __cordl_internal_set_mPredictionResistant)) bool mPredictionResistant;

  /// @brief Field mRandomSource, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_mRandomSource, put = __cordl_internal_set_mRandomSource)) ::Org::BouncyCastle::Security::SecureRandom* mRandomSource;

  /// @brief Method GenerateSeed, addr 0x23cda58, size 0x1c, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GenerateSeed(int32_t numBytes);

  static inline ::Org::BouncyCastle::Crypto::Prng::X931SecureRandom* New_ctor(::Org::BouncyCastle::Security::SecureRandom* randomSource, ::Org::BouncyCastle::Crypto::Prng::X931Rng* drbg,
                                                                              bool predictionResistant);

  /// @brief Method NextBytes, addr 0x23cd9c0, size 0x98, virtual true, abstract: false, final false
  inline void NextBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t off, int32_t len);

  /// @brief Method NextBytes, addr 0x23cd8d0, size 0xf0, virtual true, abstract: false, final false
  inline void NextBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes);

  /// @brief Method SetSeed, addr 0x23cd768, size 0xb4, virtual true, abstract: false, final false
  inline void SetSeed(::ArrayW<uint8_t, ::Array<uint8_t>*> seed);

  /// @brief Method SetSeed, addr 0x23cd81c, size 0xb4, virtual true, abstract: false, final false
  inline void SetSeed(int64_t seed);

  constexpr ::Org::BouncyCastle::Crypto::Prng::X931Rng* const& __cordl_internal_get_mDrbg() const;

  constexpr ::Org::BouncyCastle::Crypto::Prng::X931Rng*& __cordl_internal_get_mDrbg();

  constexpr bool const& __cordl_internal_get_mPredictionResistant() const;

  constexpr bool& __cordl_internal_get_mPredictionResistant();

  constexpr ::Org::BouncyCastle::Security::SecureRandom* const& __cordl_internal_get_mRandomSource() const;

  constexpr ::Org::BouncyCastle::Security::SecureRandom*& __cordl_internal_get_mRandomSource();

  constexpr void __cordl_internal_set_mDrbg(::Org::BouncyCastle::Crypto::Prng::X931Rng* value);

  constexpr void __cordl_internal_set_mPredictionResistant(bool value);

  constexpr void __cordl_internal_set_mRandomSource(::Org::BouncyCastle::Security::SecureRandom* value);

  /// @brief Method .ctor, addr 0x23cd6e4, size 0x84, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Security::SecureRandom* randomSource, ::Org::BouncyCastle::Crypto::Prng::X931Rng* drbg, bool predictionResistant);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X931SecureRandom();

public:
  // Ctor Parameters [CppParam { name: "", ty: "X931SecureRandom", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X931SecureRandom(X931SecureRandom&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X931SecureRandom", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X931SecureRandom(X931SecureRandom const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1121 };

  /// @brief Field mPredictionResistant, offset: 0x28, size: 0x1, def value: None
  bool ___mPredictionResistant;

  /// @brief Field mRandomSource, offset: 0x30, size: 0x8, def value: None
  ::Org::BouncyCastle::Security::SecureRandom* ___mRandomSource;

  /// @brief Field mDrbg, offset: 0x38, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Prng::X931Rng* ___mDrbg;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::Prng::X931SecureRandom, ___mPredictionResistant) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Prng::X931SecureRandom, ___mRandomSource) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Prng::X931SecureRandom, ___mDrbg) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Prng::X931SecureRandom, 0x40>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Prng
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Prng::X931SecureRandom);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Prng::X931SecureRandom*, "Org.BouncyCastle.Crypto.Prng", "X931SecureRandom");
