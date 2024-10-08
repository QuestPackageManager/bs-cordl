#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Prng/Drbg/HashSP800Drbg.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HashSP800Drbg)
namespace Org::BouncyCastle::Crypto::Prng::Drbg {
class ISP80090Drbg;
}
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
namespace Org::BouncyCastle::Crypto {
class IEntropySource;
}
namespace System::Collections {
class IDictionary;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Prng::Drbg {
class HashSP800Drbg;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg);
// Type: Org.BouncyCastle.Crypto.Prng.Drbg::HashSP800Drbg
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Prng::Drbg {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto.Prng.Drbg::HashSP800Drbg*
class CORDL_TYPE HashSP800Drbg : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_BlockSize)) int32_t BlockSize;

  /// @brief Field MAX_BITS_REQUEST, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_MAX_BITS_REQUEST, put = setStaticF_MAX_BITS_REQUEST)) int32_t MAX_BITS_REQUEST;

  /// @brief Field ONE, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ONE, put = setStaticF_ONE)) ::ArrayW<uint8_t, ::Array<uint8_t>*> ONE;

  /// @brief Field RESEED_MAX, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_RESEED_MAX, put = setStaticF_RESEED_MAX)) int64_t RESEED_MAX;

  /// @brief Field mC, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_mC, put = __cordl_internal_set_mC)) ::ArrayW<uint8_t, ::Array<uint8_t>*> mC;

  /// @brief Field mDigest, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_mDigest, put = __cordl_internal_set_mDigest)) ::Org::BouncyCastle::Crypto::IDigest* mDigest;

  /// @brief Field mEntropySource, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_mEntropySource, put = __cordl_internal_set_mEntropySource)) ::Org::BouncyCastle::Crypto::IEntropySource* mEntropySource;

  /// @brief Field mReseedCounter, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_mReseedCounter, put = __cordl_internal_set_mReseedCounter)) int64_t mReseedCounter;

  /// @brief Field mSecurityStrength, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_mSecurityStrength, put = __cordl_internal_set_mSecurityStrength)) int32_t mSecurityStrength;

  /// @brief Field mSeedLength, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_mSeedLength, put = __cordl_internal_set_mSeedLength)) int32_t mSeedLength;

  /// @brief Field mV, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_mV, put = __cordl_internal_set_mV)) ::ArrayW<uint8_t, ::Array<uint8_t>*> mV;

  /// @brief Field seedlens, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_seedlens, put = setStaticF_seedlens)) ::System::Collections::IDictionary* seedlens;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg"
  constexpr operator ::Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg*() noexcept;

  /// @brief Method AddTo, addr 0x2387a48, size 0xc8, virtual false, abstract: false, final false
  inline void AddTo(::ArrayW<uint8_t, ::Array<uint8_t>*> longer, ::ArrayW<uint8_t, ::Array<uint8_t>*> shorter);

  /// @brief Method DoHash, addr 0x2387d50, size 0x13c, virtual false, abstract: false, final false
  inline void DoHash(::ArrayW<uint8_t, ::Array<uint8_t>*> input, ::ArrayW<uint8_t, ::Array<uint8_t>*> output);

  /// @brief Method Generate, addr 0x2387434, size 0x358, virtual true, abstract: false, final true
  inline int32_t Generate(::ArrayW<uint8_t, ::Array<uint8_t>*> output, ::ArrayW<uint8_t, ::Array<uint8_t>*> additionalInput, bool predictionResistant);

  /// @brief Method GetEntropy, addr 0x2387274, size 0x114, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetEntropy();

  /// @brief Method Hash, addr 0x2387958, size 0xf0, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Hash(::ArrayW<uint8_t, ::Array<uint8_t>*> input);

  static inline ::Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg* New_ctor(::Org::BouncyCastle::Crypto::IDigest* digest, int32_t securityStrength,
                                                                                 ::Org::BouncyCastle::Crypto::IEntropySource* entropySource, ::ArrayW<uint8_t, ::Array<uint8_t>*> personalizationString,
                                                                                 ::ArrayW<uint8_t, ::Array<uint8_t>*> nonce);

  /// @brief Method Reseed, addr 0x238778c, size 0x1cc, virtual true, abstract: false, final true
  inline void Reseed(::ArrayW<uint8_t, ::Array<uint8_t>*> additionalInput);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_mC() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_mC();

  constexpr ::Org::BouncyCastle::Crypto::IDigest*& __cordl_internal_get_mDigest();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IDigest*> const& __cordl_internal_get_mDigest() const;

  constexpr ::Org::BouncyCastle::Crypto::IEntropySource*& __cordl_internal_get_mEntropySource();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IEntropySource*> const& __cordl_internal_get_mEntropySource() const;

  constexpr int64_t const& __cordl_internal_get_mReseedCounter() const;

  constexpr int64_t& __cordl_internal_get_mReseedCounter();

  constexpr int32_t const& __cordl_internal_get_mSecurityStrength() const;

  constexpr int32_t& __cordl_internal_get_mSecurityStrength();

  constexpr int32_t const& __cordl_internal_get_mSeedLength() const;

  constexpr int32_t& __cordl_internal_get_mSeedLength();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_mV() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_mV();

  constexpr void __cordl_internal_set_mC(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_mDigest(::Org::BouncyCastle::Crypto::IDigest* value);

  constexpr void __cordl_internal_set_mEntropySource(::Org::BouncyCastle::Crypto::IEntropySource* value);

  constexpr void __cordl_internal_set_mReseedCounter(int64_t value);

  constexpr void __cordl_internal_set_mSecurityStrength(int32_t value);

  constexpr void __cordl_internal_set_mSeedLength(int32_t value);

  constexpr void __cordl_internal_set_mV(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method .ctor, addr 0x2386e68, size 0x40c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IDigest* digest, int32_t securityStrength, ::Org::BouncyCastle::Crypto::IEntropySource* entropySource,
                    ::ArrayW<uint8_t, ::Array<uint8_t>*> personalizationString, ::ArrayW<uint8_t, ::Array<uint8_t>*> nonce);

  static inline int32_t getStaticF_MAX_BITS_REQUEST();

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_ONE();

  static inline int64_t getStaticF_RESEED_MAX();

  static inline ::System::Collections::IDictionary* getStaticF_seedlens();

  /// @brief Method get_BlockSize, addr 0x2387388, size 0xac, virtual true, abstract: false, final true
  inline int32_t get_BlockSize();

  /// @brief Method hashgen, addr 0x2387b10, size 0x240, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> hashgen(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t lengthInBits);

  /// @brief Convert to "::Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg"
  constexpr ::Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg* i___Org__BouncyCastle__Crypto__Prng__Drbg__ISP80090Drbg() noexcept;

  static inline void setStaticF_MAX_BITS_REQUEST(int32_t value);

  static inline void setStaticF_ONE(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline void setStaticF_RESEED_MAX(int64_t value);

  static inline void setStaticF_seedlens(::System::Collections::IDictionary* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HashSP800Drbg();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HashSP800Drbg", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HashSP800Drbg(HashSP800Drbg&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HashSP800Drbg", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HashSP800Drbg(HashSP800Drbg const&) = delete;

  /// @brief Field mDigest, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::IDigest* ___mDigest;

  /// @brief Field mEntropySource, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::IEntropySource* ___mEntropySource;

  /// @brief Field mSecurityStrength, offset: 0x20, size: 0x4, def value: None
  int32_t ___mSecurityStrength;

  /// @brief Field mSeedLength, offset: 0x24, size: 0x4, def value: None
  int32_t ___mSeedLength;

  /// @brief Field mV, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___mV;

  /// @brief Field mC, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___mC;

  /// @brief Field mReseedCounter, offset: 0x38, size: 0x8, def value: None
  int64_t ___mReseedCounter;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1097 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg, 0x40>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg, ___mDigest) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg, ___mEntropySource) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg, ___mSecurityStrength) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg, ___mSeedLength) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg, ___mV) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg, ___mC) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg, ___mReseedCounter) == 0x38, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Prng::Drbg
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg*, "Org.BouncyCastle.Crypto.Prng.Drbg", "HashSP800Drbg");
