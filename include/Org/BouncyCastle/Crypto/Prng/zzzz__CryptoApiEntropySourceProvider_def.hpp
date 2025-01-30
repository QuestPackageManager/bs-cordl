#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Prng/CryptoApiEntropySourceProvider.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/zzzz__IEntropySourceProvider_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IEntropySource_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CryptoApiEntropySourceProvider)
namespace Org::BouncyCastle::Crypto::Prng {
class CryptoApiEntropySourceProvider_CryptoApiEntropySource;
}
namespace Org::BouncyCastle::Crypto {
class IEntropySource;
}
namespace System::Security::Cryptography {
class RandomNumberGenerator;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Prng {
class CryptoApiEntropySourceProvider;
}
namespace Org::BouncyCastle::Crypto::Prng {
class CryptoApiEntropySourceProvider_CryptoApiEntropySource;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Prng::CryptoApiEntropySourceProvider);
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Prng::CryptoApiEntropySourceProvider_CryptoApiEntropySource);
// Dependencies Org.BouncyCastle.Crypto.IEntropySource, System.Object
namespace Org::BouncyCastle::Crypto::Prng {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Prng.CryptoApiEntropySourceProvider/CryptoApiEntropySource
class CORDL_TYPE CryptoApiEntropySourceProvider_CryptoApiEntropySource : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = Org_BouncyCastle_Crypto_IEntropySource_get_EntropySize)) int32_t Org_BouncyCastle_Crypto_IEntropySource_EntropySize;

  __declspec(property(get = Org_BouncyCastle_Crypto_IEntropySource_get_IsPredictionResistant)) bool Org_BouncyCastle_Crypto_IEntropySource_IsPredictionResistant;

  /// @brief Field mEntropySize, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_mEntropySize, put = __cordl_internal_set_mEntropySize)) int32_t mEntropySize;

  /// @brief Field mPredictionResistant, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_mPredictionResistant, put = __cordl_internal_set_mPredictionResistant)) bool mPredictionResistant;

  /// @brief Field mRng, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_mRng, put = __cordl_internal_set_mRng)) ::System::Security::Cryptography::RandomNumberGenerator* mRng;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IEntropySource"
  constexpr operator ::Org::BouncyCastle::Crypto::IEntropySource*() noexcept;

  static inline ::Org::BouncyCastle::Crypto::Prng::CryptoApiEntropySourceProvider_CryptoApiEntropySource* New_ctor(::System::Security::Cryptography::RandomNumberGenerator* rng,
                                                                                                                   bool predictionResistant, int32_t entropySize);

  /// @brief Method Org.BouncyCastle.Crypto.IEntropySource.GetEntropy, addr 0x23c8400, size 0x88, virtual true, abstract: false, final true
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org_BouncyCastle_Crypto_IEntropySource_GetEntropy();

  /// @brief Method Org.BouncyCastle.Crypto.IEntropySource.get_EntropySize, addr 0x23c8488, size 0x8, virtual true, abstract: false, final true
  inline int32_t Org_BouncyCastle_Crypto_IEntropySource_get_EntropySize();

  /// @brief Method Org.BouncyCastle.Crypto.IEntropySource.get_IsPredictionResistant, addr 0x23c83f8, size 0x8, virtual true, abstract: false, final true
  inline bool Org_BouncyCastle_Crypto_IEntropySource_get_IsPredictionResistant();

  constexpr int32_t const& __cordl_internal_get_mEntropySize() const;

  constexpr int32_t& __cordl_internal_get_mEntropySize();

  constexpr bool const& __cordl_internal_get_mPredictionResistant() const;

  constexpr bool& __cordl_internal_get_mPredictionResistant();

  constexpr ::System::Security::Cryptography::RandomNumberGenerator* const& __cordl_internal_get_mRng() const;

  constexpr ::System::Security::Cryptography::RandomNumberGenerator*& __cordl_internal_get_mRng();

  constexpr void __cordl_internal_set_mEntropySize(int32_t value);

  constexpr void __cordl_internal_set_mPredictionResistant(bool value);

  constexpr void __cordl_internal_set_mRng(::System::Security::Cryptography::RandomNumberGenerator* value);

  /// @brief Method .ctor, addr 0x23c83b8, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(::System::Security::Cryptography::RandomNumberGenerator* rng, bool predictionResistant, int32_t entropySize);

  /// @brief Convert to "::Org::BouncyCastle::Crypto::IEntropySource"
  constexpr ::Org::BouncyCastle::Crypto::IEntropySource* i___Org__BouncyCastle__Crypto__IEntropySource() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CryptoApiEntropySourceProvider_CryptoApiEntropySource();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CryptoApiEntropySourceProvider_CryptoApiEntropySource", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CryptoApiEntropySourceProvider_CryptoApiEntropySource(CryptoApiEntropySourceProvider_CryptoApiEntropySource&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CryptoApiEntropySourceProvider_CryptoApiEntropySource", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CryptoApiEntropySourceProvider_CryptoApiEntropySource(CryptoApiEntropySourceProvider_CryptoApiEntropySource const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1103 };

  /// @brief Field mRng, offset: 0x10, size: 0x8, def value: None
  ::System::Security::Cryptography::RandomNumberGenerator* ___mRng;

  /// @brief Field mPredictionResistant, offset: 0x18, size: 0x1, def value: None
  bool ___mPredictionResistant;

  /// @brief Field mEntropySize, offset: 0x1c, size: 0x4, def value: None
  int32_t ___mEntropySize;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::Prng::CryptoApiEntropySourceProvider_CryptoApiEntropySource, ___mRng) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Prng::CryptoApiEntropySourceProvider_CryptoApiEntropySource, ___mPredictionResistant) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Prng::CryptoApiEntropySourceProvider_CryptoApiEntropySource, ___mEntropySize) == 0x1c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Prng::CryptoApiEntropySourceProvider_CryptoApiEntropySource, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Prng
// Dependencies Org.BouncyCastle.Crypto.IEntropySourceProvider, System.Object
namespace Org::BouncyCastle::Crypto::Prng {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Prng.CryptoApiEntropySourceProvider
class CORDL_TYPE CryptoApiEntropySourceProvider : public ::System::Object {
public:
  // Declarations
  using CryptoApiEntropySource = ::Org::BouncyCastle::Crypto::Prng::CryptoApiEntropySourceProvider_CryptoApiEntropySource;

  /// @brief Field mPredictionResistant, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_mPredictionResistant, put = __cordl_internal_set_mPredictionResistant)) bool mPredictionResistant;

  /// @brief Field mRng, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_mRng, put = __cordl_internal_set_mRng)) ::System::Security::Cryptography::RandomNumberGenerator* mRng;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IEntropySourceProvider"
  constexpr operator ::Org::BouncyCastle::Crypto::IEntropySourceProvider*() noexcept;

  /// @brief Method Get, addr 0x23c8340, size 0x78, virtual true, abstract: false, final true
  inline ::Org::BouncyCastle::Crypto::IEntropySource* Get(int32_t bitsRequired);

  static inline ::Org::BouncyCastle::Crypto::Prng::CryptoApiEntropySourceProvider* New_ctor();

  static inline ::Org::BouncyCastle::Crypto::Prng::CryptoApiEntropySourceProvider* New_ctor(::System::Security::Cryptography::RandomNumberGenerator* rng, bool isPredictionResistant);

  constexpr bool const& __cordl_internal_get_mPredictionResistant() const;

  constexpr bool& __cordl_internal_get_mPredictionResistant();

  constexpr ::System::Security::Cryptography::RandomNumberGenerator* const& __cordl_internal_get_mRng() const;

  constexpr ::System::Security::Cryptography::RandomNumberGenerator*& __cordl_internal_get_mRng();

  constexpr void __cordl_internal_set_mPredictionResistant(bool value);

  constexpr void __cordl_internal_set_mRng(::System::Security::Cryptography::RandomNumberGenerator* value);

  /// @brief Method .ctor, addr 0x23c829c, size 0x24, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x23c82c0, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::System::Security::Cryptography::RandomNumberGenerator* rng, bool isPredictionResistant);

  /// @brief Convert to "::Org::BouncyCastle::Crypto::IEntropySourceProvider"
  constexpr ::Org::BouncyCastle::Crypto::IEntropySourceProvider* i___Org__BouncyCastle__Crypto__IEntropySourceProvider() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CryptoApiEntropySourceProvider();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CryptoApiEntropySourceProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CryptoApiEntropySourceProvider(CryptoApiEntropySourceProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CryptoApiEntropySourceProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CryptoApiEntropySourceProvider(CryptoApiEntropySourceProvider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1104 };

  /// @brief Field mRng, offset: 0x10, size: 0x8, def value: None
  ::System::Security::Cryptography::RandomNumberGenerator* ___mRng;

  /// @brief Field mPredictionResistant, offset: 0x18, size: 0x1, def value: None
  bool ___mPredictionResistant;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::Prng::CryptoApiEntropySourceProvider, ___mRng) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Prng::CryptoApiEntropySourceProvider, ___mPredictionResistant) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Prng::CryptoApiEntropySourceProvider, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Prng
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Prng::CryptoApiEntropySourceProvider);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Prng::CryptoApiEntropySourceProvider*, "Org.BouncyCastle.Crypto.Prng", "CryptoApiEntropySourceProvider");
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Prng::CryptoApiEntropySourceProvider_CryptoApiEntropySource);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Prng::CryptoApiEntropySourceProvider_CryptoApiEntropySource*, "Org.BouncyCastle.Crypto.Prng",
                       "CryptoApiEntropySourceProvider/CryptoApiEntropySource");
