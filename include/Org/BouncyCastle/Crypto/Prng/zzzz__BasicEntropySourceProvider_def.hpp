#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Prng/BasicEntropySourceProvider.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/zzzz__IEntropySourceProvider_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IEntropySource_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BasicEntropySourceProvider)
namespace Org::BouncyCastle::Crypto::Prng {
class BasicEntropySourceProvider_BasicEntropySource;
}
namespace Org::BouncyCastle::Crypto {
class IEntropySource;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Prng {
class BasicEntropySourceProvider;
}
namespace Org::BouncyCastle::Crypto::Prng {
class BasicEntropySourceProvider_BasicEntropySource;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Prng::BasicEntropySourceProvider);
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Prng::BasicEntropySourceProvider_BasicEntropySource);
// Dependencies Org.BouncyCastle.Crypto.IEntropySource, System.Object
namespace Org::BouncyCastle::Crypto::Prng {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Prng.BasicEntropySourceProvider/BasicEntropySource
class CORDL_TYPE BasicEntropySourceProvider_BasicEntropySource : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = Org_BouncyCastle_Crypto_IEntropySource_get_EntropySize)) int32_t Org_BouncyCastle_Crypto_IEntropySource_EntropySize;

  __declspec(property(get = Org_BouncyCastle_Crypto_IEntropySource_get_IsPredictionResistant)) bool Org_BouncyCastle_Crypto_IEntropySource_IsPredictionResistant;

  /// @brief Field mEntropySize, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_mEntropySize, put = __cordl_internal_set_mEntropySize)) int32_t mEntropySize;

  /// @brief Field mPredictionResistant, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_mPredictionResistant, put = __cordl_internal_set_mPredictionResistant)) bool mPredictionResistant;

  /// @brief Field mSecureRandom, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_mSecureRandom, put = __cordl_internal_set_mSecureRandom)) ::Org::BouncyCastle::Security::SecureRandom* mSecureRandom;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IEntropySource"
  constexpr operator ::Org::BouncyCastle::Crypto::IEntropySource*() noexcept;

  static inline ::Org::BouncyCastle::Crypto::Prng::BasicEntropySourceProvider_BasicEntropySource* New_ctor(::Org::BouncyCastle::Security::SecureRandom* secureRandom, bool predictionResistant,
                                                                                                           int32_t entropySize);

  /// @brief Method Org.BouncyCastle.Crypto.IEntropySource.GetEntropy, addr 0x23c951c, size 0x70, virtual true, abstract: false, final true
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org_BouncyCastle_Crypto_IEntropySource_GetEntropy();

  /// @brief Method Org.BouncyCastle.Crypto.IEntropySource.get_EntropySize, addr 0x23c9608, size 0x8, virtual true, abstract: false, final true
  inline int32_t Org_BouncyCastle_Crypto_IEntropySource_get_EntropySize();

  /// @brief Method Org.BouncyCastle.Crypto.IEntropySource.get_IsPredictionResistant, addr 0x23c9514, size 0x8, virtual true, abstract: false, final true
  inline bool Org_BouncyCastle_Crypto_IEntropySource_get_IsPredictionResistant();

  constexpr int32_t const& __cordl_internal_get_mEntropySize() const;

  constexpr int32_t& __cordl_internal_get_mEntropySize();

  constexpr bool const& __cordl_internal_get_mPredictionResistant() const;

  constexpr bool& __cordl_internal_get_mPredictionResistant();

  constexpr ::Org::BouncyCastle::Security::SecureRandom* const& __cordl_internal_get_mSecureRandom() const;

  constexpr ::Org::BouncyCastle::Security::SecureRandom*& __cordl_internal_get_mSecureRandom();

  constexpr void __cordl_internal_set_mEntropySize(int32_t value);

  constexpr void __cordl_internal_set_mPredictionResistant(bool value);

  constexpr void __cordl_internal_set_mSecureRandom(::Org::BouncyCastle::Security::SecureRandom* value);

  /// @brief Method .ctor, addr 0x23c94d4, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Security::SecureRandom* secureRandom, bool predictionResistant, int32_t entropySize);

  /// @brief Convert to "::Org::BouncyCastle::Crypto::IEntropySource"
  constexpr ::Org::BouncyCastle::Crypto::IEntropySource* i___Org__BouncyCastle__Crypto__IEntropySource() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BasicEntropySourceProvider_BasicEntropySource();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BasicEntropySourceProvider_BasicEntropySource", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BasicEntropySourceProvider_BasicEntropySource(BasicEntropySourceProvider_BasicEntropySource&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BasicEntropySourceProvider_BasicEntropySource", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BasicEntropySourceProvider_BasicEntropySource(BasicEntropySourceProvider_BasicEntropySource const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1100 };

  /// @brief Field mSecureRandom, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Security::SecureRandom* ___mSecureRandom;

  /// @brief Field mPredictionResistant, offset: 0x18, size: 0x1, def value: None
  bool ___mPredictionResistant;

  /// @brief Field mEntropySize, offset: 0x1c, size: 0x4, def value: None
  int32_t ___mEntropySize;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::Prng::BasicEntropySourceProvider_BasicEntropySource, ___mSecureRandom) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Prng::BasicEntropySourceProvider_BasicEntropySource, ___mPredictionResistant) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Prng::BasicEntropySourceProvider_BasicEntropySource, ___mEntropySize) == 0x1c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Prng::BasicEntropySourceProvider_BasicEntropySource, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Prng
// Dependencies Org.BouncyCastle.Crypto.IEntropySourceProvider, System.Object
namespace Org::BouncyCastle::Crypto::Prng {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Prng.BasicEntropySourceProvider
class CORDL_TYPE BasicEntropySourceProvider : public ::System::Object {
public:
  // Declarations
  using BasicEntropySource = ::Org::BouncyCastle::Crypto::Prng::BasicEntropySourceProvider_BasicEntropySource;

  /// @brief Field mPredictionResistant, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_mPredictionResistant, put = __cordl_internal_set_mPredictionResistant)) bool mPredictionResistant;

  /// @brief Field mSecureRandom, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_mSecureRandom, put = __cordl_internal_set_mSecureRandom)) ::Org::BouncyCastle::Security::SecureRandom* mSecureRandom;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IEntropySourceProvider"
  constexpr operator ::Org::BouncyCastle::Crypto::IEntropySourceProvider*() noexcept;

  /// @brief Method Get, addr 0x23c945c, size 0x78, virtual true, abstract: false, final true
  inline ::Org::BouncyCastle::Crypto::IEntropySource* Get(int32_t bitsRequired);

  static inline ::Org::BouncyCastle::Crypto::Prng::BasicEntropySourceProvider* New_ctor(::Org::BouncyCastle::Security::SecureRandom* secureRandom, bool isPredictionResistant);

  constexpr bool const& __cordl_internal_get_mPredictionResistant() const;

  constexpr bool& __cordl_internal_get_mPredictionResistant();

  constexpr ::Org::BouncyCastle::Security::SecureRandom* const& __cordl_internal_get_mSecureRandom() const;

  constexpr ::Org::BouncyCastle::Security::SecureRandom*& __cordl_internal_get_mSecureRandom();

  constexpr void __cordl_internal_set_mPredictionResistant(bool value);

  constexpr void __cordl_internal_set_mSecureRandom(::Org::BouncyCastle::Security::SecureRandom* value);

  /// @brief Method .ctor, addr 0x23c942c, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Security::SecureRandom* secureRandom, bool isPredictionResistant);

  /// @brief Convert to "::Org::BouncyCastle::Crypto::IEntropySourceProvider"
  constexpr ::Org::BouncyCastle::Crypto::IEntropySourceProvider* i___Org__BouncyCastle__Crypto__IEntropySourceProvider() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BasicEntropySourceProvider();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BasicEntropySourceProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BasicEntropySourceProvider(BasicEntropySourceProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BasicEntropySourceProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BasicEntropySourceProvider(BasicEntropySourceProvider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1101 };

  /// @brief Field mSecureRandom, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Security::SecureRandom* ___mSecureRandom;

  /// @brief Field mPredictionResistant, offset: 0x18, size: 0x1, def value: None
  bool ___mPredictionResistant;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::Prng::BasicEntropySourceProvider, ___mSecureRandom) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Prng::BasicEntropySourceProvider, ___mPredictionResistant) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Prng::BasicEntropySourceProvider, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Prng
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Prng::BasicEntropySourceProvider);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Prng::BasicEntropySourceProvider*, "Org.BouncyCastle.Crypto.Prng", "BasicEntropySourceProvider");
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Prng::BasicEntropySourceProvider_BasicEntropySource);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Prng::BasicEntropySourceProvider_BasicEntropySource*, "Org.BouncyCastle.Crypto.Prng", "BasicEntropySourceProvider/BasicEntropySource");
