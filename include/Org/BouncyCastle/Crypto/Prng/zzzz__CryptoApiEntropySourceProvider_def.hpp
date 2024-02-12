#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CryptoApiEntropySourceProvider)
namespace Org::BouncyCastle::Crypto::Prng {
class __CryptoApiEntropySourceProvider__CryptoApiEntropySource;
}
namespace Org::BouncyCastle::Crypto {
class IEntropySourceProvider;
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
class __CryptoApiEntropySourceProvider__CryptoApiEntropySource;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Prng::CryptoApiEntropySourceProvider);
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Prng::__CryptoApiEntropySourceProvider__CryptoApiEntropySource);
// Type: ::CryptoApiEntropySource
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Prng {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1103))
// CS Name: ::CryptoApiEntropySourceProvider::CryptoApiEntropySource*
class CORDL_TYPE __CryptoApiEntropySourceProvider__CryptoApiEntropySource : public ::System::Object {
public:
  // Declarations
  /// @brief Field mRng, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_mRng, put = __cordl_internal_set_mRng))::System::Security::Cryptography::RandomNumberGenerator* mRng;

  /// @brief Field mPredictionResistant, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_mPredictionResistant, put = __cordl_internal_set_mPredictionResistant)) bool mPredictionResistant;

  /// @brief Field mEntropySize, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_mEntropySize, put = __cordl_internal_set_mEntropySize)) int32_t mEntropySize;

  __declspec(property(get = Org_BouncyCastle_Crypto_IEntropySource_get_IsPredictionResistant)) bool Org_BouncyCastle_Crypto_IEntropySource_IsPredictionResistant;

  __declspec(property(get = Org_BouncyCastle_Crypto_IEntropySource_get_EntropySize)) int32_t Org_BouncyCastle_Crypto_IEntropySource_EntropySize;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IEntropySource"
  constexpr operator ::Org::BouncyCastle::Crypto::IEntropySource*() noexcept;

  /// @brief Convert to "::Org::BouncyCastle::Crypto::IEntropySource"
  constexpr ::Org::BouncyCastle::Crypto::IEntropySource* i___Org__BouncyCastle__Crypto__IEntropySource() noexcept;

  constexpr ::System::Security::Cryptography::RandomNumberGenerator*& __cordl_internal_get_mRng();

  constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::RandomNumberGenerator*> const& __cordl_internal_get_mRng() const;

  constexpr void __cordl_internal_set_mRng(::System::Security::Cryptography::RandomNumberGenerator* value);

  constexpr bool& __cordl_internal_get_mPredictionResistant();

  constexpr bool const& __cordl_internal_get_mPredictionResistant() const;

  constexpr void __cordl_internal_set_mPredictionResistant(bool value);

  constexpr int32_t& __cordl_internal_get_mEntropySize();

  constexpr int32_t const& __cordl_internal_get_mEntropySize() const;

  constexpr void __cordl_internal_set_mEntropySize(int32_t value);

  static inline ::Org::BouncyCastle::Crypto::Prng::__CryptoApiEntropySourceProvider__CryptoApiEntropySource* New_ctor(::System::Security::Cryptography::RandomNumberGenerator* rng,
                                                                                                                      bool predictionResistant, int32_t entropySize);

  /// @brief Method .ctor, addr 0xf6cbf8, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(::System::Security::Cryptography::RandomNumberGenerator* rng, bool predictionResistant, int32_t entropySize);

  /// @brief Method Org.BouncyCastle.Crypto.IEntropySource.get_IsPredictionResistant, addr 0xf6cc38, size 0x8, virtual true, abstract: false, final true
  inline bool Org_BouncyCastle_Crypto_IEntropySource_get_IsPredictionResistant();

  /// @brief Method Org.BouncyCastle.Crypto.IEntropySource.GetEntropy, addr 0xf6cc40, size 0x88, virtual true, abstract: false, final true
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org_BouncyCastle_Crypto_IEntropySource_GetEntropy();

  /// @brief Method Org.BouncyCastle.Crypto.IEntropySource.get_EntropySize, addr 0xf6ccc8, size 0x8, virtual true, abstract: false, final true
  inline int32_t Org_BouncyCastle_Crypto_IEntropySource_get_EntropySize();

  // Ctor Parameters [CppParam { name: "", ty: "__CryptoApiEntropySourceProvider__CryptoApiEntropySource", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __CryptoApiEntropySourceProvider__CryptoApiEntropySource(__CryptoApiEntropySourceProvider__CryptoApiEntropySource&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__CryptoApiEntropySourceProvider__CryptoApiEntropySource", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __CryptoApiEntropySourceProvider__CryptoApiEntropySource(__CryptoApiEntropySourceProvider__CryptoApiEntropySource const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __CryptoApiEntropySourceProvider__CryptoApiEntropySource();

public:
  /// @brief Field mRng, offset: 0x10, size: 0x8, def value: None
  ::System::Security::Cryptography::RandomNumberGenerator* ___mRng;

  /// @brief Field mPredictionResistant, offset: 0x18, size: 0x1, def value: None
  bool ___mPredictionResistant;

  /// @brief Field mEntropySize, offset: 0x1c, size: 0x4, def value: None
  int32_t ___mEntropySize;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Prng::__CryptoApiEntropySourceProvider__CryptoApiEntropySource, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Prng::__CryptoApiEntropySourceProvider__CryptoApiEntropySource, ___mRng) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Prng::__CryptoApiEntropySourceProvider__CryptoApiEntropySource, ___mPredictionResistant) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Prng::__CryptoApiEntropySourceProvider__CryptoApiEntropySource, ___mEntropySize) == 0x1c, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Prng
// Type: Org.BouncyCastle.Crypto.Prng::CryptoApiEntropySourceProvider
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 25, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Prng {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1104))
// CS Name: ::Org.BouncyCastle.Crypto.Prng::CryptoApiEntropySourceProvider*
class CORDL_TYPE CryptoApiEntropySourceProvider : public ::System::Object {
public:
  // Declarations
  using CryptoApiEntropySource = ::Org::BouncyCastle::Crypto::Prng::__CryptoApiEntropySourceProvider__CryptoApiEntropySource;

  /// @brief Field mRng, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_mRng, put = __cordl_internal_set_mRng))::System::Security::Cryptography::RandomNumberGenerator* mRng;

  /// @brief Field mPredictionResistant, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_mPredictionResistant, put = __cordl_internal_set_mPredictionResistant)) bool mPredictionResistant;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IEntropySourceProvider"
  constexpr operator ::Org::BouncyCastle::Crypto::IEntropySourceProvider*() noexcept;

  /// @brief Convert to "::Org::BouncyCastle::Crypto::IEntropySourceProvider"
  constexpr ::Org::BouncyCastle::Crypto::IEntropySourceProvider* i___Org__BouncyCastle__Crypto__IEntropySourceProvider() noexcept;

  constexpr ::System::Security::Cryptography::RandomNumberGenerator*& __cordl_internal_get_mRng();

  constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::RandomNumberGenerator*> const& __cordl_internal_get_mRng() const;

  constexpr void __cordl_internal_set_mRng(::System::Security::Cryptography::RandomNumberGenerator* value);

  constexpr bool& __cordl_internal_get_mPredictionResistant();

  constexpr bool const& __cordl_internal_get_mPredictionResistant() const;

  constexpr void __cordl_internal_set_mPredictionResistant(bool value);

  static inline ::Org::BouncyCastle::Crypto::Prng::CryptoApiEntropySourceProvider* New_ctor();

  /// @brief Method .ctor, addr 0xf6cad0, size 0x24, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Org::BouncyCastle::Crypto::Prng::CryptoApiEntropySourceProvider* New_ctor(::System::Security::Cryptography::RandomNumberGenerator* rng, bool isPredictionResistant);

  /// @brief Method .ctor, addr 0xf6caf4, size 0x84, virtual false, abstract: false, final false
  inline void _ctor(::System::Security::Cryptography::RandomNumberGenerator* rng, bool isPredictionResistant);

  /// @brief Method Get, addr 0xf6cb78, size 0x80, virtual true, abstract: false, final true
  inline ::Org::BouncyCastle::Crypto::IEntropySource* Get(int32_t bitsRequired);

  // Ctor Parameters [CppParam { name: "", ty: "CryptoApiEntropySourceProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CryptoApiEntropySourceProvider(CryptoApiEntropySourceProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CryptoApiEntropySourceProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CryptoApiEntropySourceProvider(CryptoApiEntropySourceProvider const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CryptoApiEntropySourceProvider();

public:
  /// @brief Field mRng, offset: 0x10, size: 0x8, def value: None
  ::System::Security::Cryptography::RandomNumberGenerator* ___mRng;

  /// @brief Field mPredictionResistant, offset: 0x18, size: 0x1, def value: None
  bool ___mPredictionResistant;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Prng::CryptoApiEntropySourceProvider, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Prng::CryptoApiEntropySourceProvider, ___mRng) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Prng::CryptoApiEntropySourceProvider, ___mPredictionResistant) == 0x18, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Prng
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Prng::CryptoApiEntropySourceProvider);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Prng::CryptoApiEntropySourceProvider*, "Org.BouncyCastle.Crypto.Prng", "CryptoApiEntropySourceProvider");
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Prng::__CryptoApiEntropySourceProvider__CryptoApiEntropySource);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Prng::__CryptoApiEntropySourceProvider__CryptoApiEntropySource*, "Org.BouncyCastle.Crypto.Prng",
                       "CryptoApiEntropySourceProvider/CryptoApiEntropySource");
