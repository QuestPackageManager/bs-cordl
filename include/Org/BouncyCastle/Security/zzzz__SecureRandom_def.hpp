#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Security/SecureRandom.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Random_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SecureRandom)
namespace Org::BouncyCastle::Crypto::Prng {
class DigestRandomGenerator;
}
namespace Org::BouncyCastle::Crypto::Prng {
class IRandomGenerator;
}
// Forward declare root types
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Security::SecureRandom);
// Dependencies System.Random
namespace Org::BouncyCastle::Security {
// Is value type: false
// CS Name: Org.BouncyCastle.Security.SecureRandom
class CORDL_TYPE SecureRandom : public ::System::Random {
public:
  // Declarations
  /// @brief Field DoubleScale, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_DoubleScale, put = setStaticF_DoubleScale)) double_t DoubleScale;

  /// @brief Field counter, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_counter, put = setStaticF_counter)) int64_t counter;

  /// @brief Field generator, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_generator, put = __cordl_internal_set_generator)) ::Org::BouncyCastle::Crypto::Prng::IRandomGenerator* generator;

  /// @brief Field master, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_master, put = setStaticF_master)) ::Org::BouncyCastle::Security::SecureRandom* master;

  /// @brief Method CreatePrng, addr 0x23c95d4, size 0x1a8, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator* CreatePrng(::StringW digestName, bool autoSeed);

  /// @brief Method GenerateSeed, addr 0x23c9ae8, size 0x90, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GenerateSeed(int32_t length);

  /// @brief Method GetInstance, addr 0x23c977c, size 0x58, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Security::SecureRandom* GetInstance(::StringW algorithm);

  /// @brief Method GetInstance, addr 0x23c97d4, size 0x17c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Security::SecureRandom* GetInstance(::StringW algorithm, bool autoSeed);

  /// @brief Method GetNextBytes, addr 0x23c8218, size 0x7c, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetNextBytes(::Org::BouncyCastle::Security::SecureRandom* secureRandom, int32_t length);

  /// @brief Method GetSeed, addr 0x23c99c0, size 0x90, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetSeed(int32_t length);

  static inline ::Org::BouncyCastle::Security::SecureRandom* New_ctor();

  static inline ::Org::BouncyCastle::Security::SecureRandom* New_ctor(::Org::BouncyCastle::Crypto::Prng::IRandomGenerator* generator);

  static inline ::Org::BouncyCastle::Security::SecureRandom* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> seed);

  /// @brief Method Next, addr 0x23c9ccc, size 0x20, virtual true, abstract: false, final false
  inline int32_t Next();

  /// @brief Method Next, addr 0x23c9cec, size 0xe8, virtual true, abstract: false, final false
  inline int32_t Next(int32_t maxValue);

  /// @brief Method Next, addr 0x23c9dd4, size 0xc4, virtual true, abstract: false, final false
  inline int32_t Next(int32_t minValue, int32_t maxValue);

  /// @brief Method NextBytes, addr 0x23c9e98, size 0xac, virtual true, abstract: false, final false
  inline void NextBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> buf);

  /// @brief Method NextBytes, addr 0x23c9f44, size 0xc4, virtual true, abstract: false, final false
  inline void NextBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t off, int32_t len);

  /// @brief Method NextCounterValue, addr 0x23c9524, size 0x58, virtual false, abstract: false, final false
  static inline int64_t NextCounterValue();

  /// @brief Method NextDouble, addr 0x23ca008, size 0xb8, virtual true, abstract: false, final false
  inline double_t NextDouble();

  /// @brief Method NextInt, addr 0x23ca0c0, size 0x6c, virtual true, abstract: false, final false
  inline int32_t NextInt();

  /// @brief Method NextLong, addr 0x23ca12c, size 0x6c, virtual true, abstract: false, final false
  inline int64_t NextLong();

  /// @brief Method SetSeed, addr 0x23c9b78, size 0xa8, virtual true, abstract: false, final false
  inline void SetSeed(::ArrayW<uint8_t, ::Array<uint8_t>*> seed);

  /// @brief Method SetSeed, addr 0x23c9c20, size 0xac, virtual true, abstract: false, final false
  inline void SetSeed(int64_t seed);

  constexpr ::Org::BouncyCastle::Crypto::Prng::IRandomGenerator* const& __cordl_internal_get_generator() const;

  constexpr ::Org::BouncyCastle::Crypto::Prng::IRandomGenerator*& __cordl_internal_get_generator();

  constexpr void __cordl_internal_set_generator(::Org::BouncyCastle::Crypto::Prng::IRandomGenerator* value);

  /// @brief Method .ctor, addr 0x23bfa9c, size 0x78, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x23c9950, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::Prng::IRandomGenerator* generator);

  /// @brief Method .ctor, addr 0x23c9a50, size 0x98, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> seed);

  static inline double_t getStaticF_DoubleScale();

  static inline int64_t getStaticF_counter();

  static inline ::Org::BouncyCastle::Security::SecureRandom* getStaticF_master();

  /// @brief Method get_Master, addr 0x23c957c, size 0x58, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Security::SecureRandom* get_Master();

  static inline void setStaticF_DoubleScale(double_t value);

  static inline void setStaticF_counter(int64_t value);

  static inline void setStaticF_master(::Org::BouncyCastle::Security::SecureRandom* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SecureRandom();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SecureRandom", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SecureRandom(SecureRandom&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SecureRandom", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SecureRandom(SecureRandom const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1111 };

  /// @brief Field generator, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Prng::IRandomGenerator* ___generator;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Security::SecureRandom, ___generator) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Security::SecureRandom, 0x28>, "Size mismatch!");

} // namespace Org::BouncyCastle::Security
NEED_NO_BOX(::Org::BouncyCastle::Security::SecureRandom);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Security::SecureRandom*, "Org.BouncyCastle.Security", "SecureRandom");
