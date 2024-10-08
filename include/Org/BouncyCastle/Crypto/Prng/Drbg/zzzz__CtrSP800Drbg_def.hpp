#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Prng/Drbg/CtrSP800Drbg.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CtrSP800Drbg)
namespace Org::BouncyCastle::Crypto::Prng::Drbg {
class ISP80090Drbg;
}
namespace Org::BouncyCastle::Crypto {
class IBlockCipher;
}
namespace Org::BouncyCastle::Crypto {
class IEntropySource;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Prng::Drbg {
class CtrSP800Drbg;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Prng::Drbg::CtrSP800Drbg);
// Type: Org.BouncyCastle.Crypto.Prng.Drbg::CtrSP800Drbg
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 73, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Prng::Drbg {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto.Prng.Drbg::CtrSP800Drbg*
class CORDL_TYPE CtrSP800Drbg : public ::System::Object {
public:
  // Declarations
  /// @brief Field AES_MAX_BITS_REQUEST, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_AES_MAX_BITS_REQUEST, put = setStaticF_AES_MAX_BITS_REQUEST)) int32_t AES_MAX_BITS_REQUEST;

  /// @brief Field AES_RESEED_MAX, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_AES_RESEED_MAX, put = setStaticF_AES_RESEED_MAX)) int64_t AES_RESEED_MAX;

  __declspec(property(get = get_BlockSize)) int32_t BlockSize;

  /// @brief Field K_BITS, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_K_BITS, put = setStaticF_K_BITS)) ::ArrayW<uint8_t, ::Array<uint8_t>*> K_BITS;

  /// @brief Field TDEA_MAX_BITS_REQUEST, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_TDEA_MAX_BITS_REQUEST, put = setStaticF_TDEA_MAX_BITS_REQUEST)) int32_t TDEA_MAX_BITS_REQUEST;

  /// @brief Field TDEA_RESEED_MAX, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_TDEA_RESEED_MAX, put = setStaticF_TDEA_RESEED_MAX)) int64_t TDEA_RESEED_MAX;

  /// @brief Field mEngine, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_mEngine, put = __cordl_internal_set_mEngine)) ::Org::BouncyCastle::Crypto::IBlockCipher* mEngine;

  /// @brief Field mEntropySource, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_mEntropySource, put = __cordl_internal_set_mEntropySource)) ::Org::BouncyCastle::Crypto::IEntropySource* mEntropySource;

  /// @brief Field mIsTdea, offset 0x48, size 0x1
  __declspec(property(get = __cordl_internal_get_mIsTdea, put = __cordl_internal_set_mIsTdea)) bool mIsTdea;

  /// @brief Field mKey, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_mKey, put = __cordl_internal_set_mKey)) ::ArrayW<uint8_t, ::Array<uint8_t>*> mKey;

  /// @brief Field mKeySizeInBits, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_mKeySizeInBits, put = __cordl_internal_set_mKeySizeInBits)) int32_t mKeySizeInBits;

  /// @brief Field mReseedCounter, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_mReseedCounter, put = __cordl_internal_set_mReseedCounter)) int64_t mReseedCounter;

  /// @brief Field mSecurityStrength, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_mSecurityStrength, put = __cordl_internal_set_mSecurityStrength)) int32_t mSecurityStrength;

  /// @brief Field mSeedLength, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_mSeedLength, put = __cordl_internal_set_mSeedLength)) int32_t mSeedLength;

  /// @brief Field mV, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_mV, put = __cordl_internal_set_mV)) ::ArrayW<uint8_t, ::Array<uint8_t>*> mV;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg"
  constexpr operator ::Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg*() noexcept;

  /// @brief Method AddOneTo, addr 0x2384e1c, size 0x48, virtual false, abstract: false, final false
  inline void AddOneTo(::ArrayW<uint8_t, ::Array<uint8_t>*> longer);

  /// @brief Method BCC, addr 0x238501c, size 0x308, virtual false, abstract: false, final false
  inline void BCC(::ArrayW<uint8_t, ::Array<uint8_t>*> bccOut, ::ArrayW<uint8_t, ::Array<uint8_t>*> k, ::ArrayW<uint8_t, ::Array<uint8_t>*> iV, ::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Method Block_Cipher_df, addr 0x2384560, size 0x4d4, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Block_Cipher_df(::ArrayW<uint8_t, ::Array<uint8_t>*> inputString, int32_t bitLength);

  /// @brief Method CTR_DRBG_Instantiate_algorithm, addr 0x23843a0, size 0x1c0, virtual false, abstract: false, final false
  inline void CTR_DRBG_Instantiate_algorithm(::ArrayW<uint8_t, ::Array<uint8_t>*> entropy, ::ArrayW<uint8_t, ::Array<uint8_t>*> nonce, ::ArrayW<uint8_t, ::Array<uint8_t>*> personalisationString);

  /// @brief Method CTR_DRBG_Reseed_algorithm, addr 0x2384ef8, size 0xa4, virtual false, abstract: false, final false
  inline void CTR_DRBG_Reseed_algorithm(::ArrayW<uint8_t, ::Array<uint8_t>*> additionalInput);

  /// @brief Method CTR_DRBG_Update, addr 0x2384a34, size 0x344, virtual false, abstract: false, final false
  inline void CTR_DRBG_Update(::ArrayW<uint8_t, ::Array<uint8_t>*> seed, ::ArrayW<uint8_t, ::Array<uint8_t>*> key, ::ArrayW<uint8_t, ::Array<uint8_t>*> v);

  /// @brief Method ExpandKey, addr 0x2384d78, size 0xa4, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ExpandKey(::ArrayW<uint8_t, ::Array<uint8_t>*> key);

  /// @brief Method Generate, addr 0x2385344, size 0x4ac, virtual true, abstract: false, final true
  inline int32_t Generate(::ArrayW<uint8_t, ::Array<uint8_t>*> output, ::ArrayW<uint8_t, ::Array<uint8_t>*> additionalInput, bool predictionResistant);

  /// @brief Method GetEntropy, addr 0x238428c, size 0x114, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetEntropy();

  /// @brief Method GetMaxSecurityStrength, addr 0x2384050, size 0xec, virtual false, abstract: false, final false
  inline int32_t GetMaxSecurityStrength(::Org::BouncyCastle::Crypto::IBlockCipher* cipher, int32_t keySizeInBits);

  /// @brief Method IsTdea, addr 0x238413c, size 0x150, virtual false, abstract: false, final false
  inline bool IsTdea(::Org::BouncyCastle::Crypto::IBlockCipher* cipher);

  static inline ::Org::BouncyCastle::Crypto::Prng::Drbg::CtrSP800Drbg* New_ctor(::Org::BouncyCastle::Crypto::IBlockCipher* engine, int32_t keySizeInBits, int32_t securityStrength,
                                                                                ::Org::BouncyCastle::Crypto::IEntropySource* entropySource, ::ArrayW<uint8_t, ::Array<uint8_t>*> personalizationString,
                                                                                ::ArrayW<uint8_t, ::Array<uint8_t>*> nonce);

  /// @brief Method PadKey, addr 0x2385808, size 0x290, virtual false, abstract: false, final false
  inline void PadKey(::ArrayW<uint8_t, ::Array<uint8_t>*> keyMaster, int32_t keyOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> tmp, int32_t tmpOff);

  /// @brief Method Reseed, addr 0x2385804, size 0x4, virtual true, abstract: false, final true
  inline void Reseed(::ArrayW<uint8_t, ::Array<uint8_t>*> additionalInput);

  /// @brief Method XOR, addr 0x2384e64, size 0x94, virtual false, abstract: false, final false
  inline void XOR(::ArrayW<uint8_t, ::Array<uint8_t>*> output, ::ArrayW<uint8_t, ::Array<uint8_t>*> a, ::ArrayW<uint8_t, ::Array<uint8_t>*> b, int32_t bOff);

  constexpr ::Org::BouncyCastle::Crypto::IBlockCipher*& __cordl_internal_get_mEngine();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IBlockCipher*> const& __cordl_internal_get_mEngine() const;

  constexpr ::Org::BouncyCastle::Crypto::IEntropySource*& __cordl_internal_get_mEntropySource();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IEntropySource*> const& __cordl_internal_get_mEntropySource() const;

  constexpr bool const& __cordl_internal_get_mIsTdea() const;

  constexpr bool& __cordl_internal_get_mIsTdea();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_mKey() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_mKey();

  constexpr int32_t const& __cordl_internal_get_mKeySizeInBits() const;

  constexpr int32_t& __cordl_internal_get_mKeySizeInBits();

  constexpr int64_t const& __cordl_internal_get_mReseedCounter() const;

  constexpr int64_t& __cordl_internal_get_mReseedCounter();

  constexpr int32_t const& __cordl_internal_get_mSecurityStrength() const;

  constexpr int32_t& __cordl_internal_get_mSecurityStrength();

  constexpr int32_t const& __cordl_internal_get_mSeedLength() const;

  constexpr int32_t& __cordl_internal_get_mSeedLength();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_mV() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_mV();

  constexpr void __cordl_internal_set_mEngine(::Org::BouncyCastle::Crypto::IBlockCipher* value);

  constexpr void __cordl_internal_set_mEntropySource(::Org::BouncyCastle::Crypto::IEntropySource* value);

  constexpr void __cordl_internal_set_mIsTdea(bool value);

  constexpr void __cordl_internal_set_mKey(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_mKeySizeInBits(int32_t value);

  constexpr void __cordl_internal_set_mReseedCounter(int64_t value);

  constexpr void __cordl_internal_set_mSecurityStrength(int32_t value);

  constexpr void __cordl_internal_set_mSeedLength(int32_t value);

  constexpr void __cordl_internal_set_mV(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method .ctor, addr 0x2383e08, size 0x248, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IBlockCipher* engine, int32_t keySizeInBits, int32_t securityStrength, ::Org::BouncyCastle::Crypto::IEntropySource* entropySource,
                    ::ArrayW<uint8_t, ::Array<uint8_t>*> personalizationString, ::ArrayW<uint8_t, ::Array<uint8_t>*> nonce);

  /// @brief Method copyIntToByteArray, addr 0x2384f9c, size 0x80, virtual false, abstract: false, final false
  inline void copyIntToByteArray(::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t value, int32_t offSet);

  static inline int32_t getStaticF_AES_MAX_BITS_REQUEST();

  static inline int64_t getStaticF_AES_RESEED_MAX();

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_K_BITS();

  static inline int32_t getStaticF_TDEA_MAX_BITS_REQUEST();

  static inline int64_t getStaticF_TDEA_RESEED_MAX();

  /// @brief Method get_BlockSize, addr 0x2385324, size 0x20, virtual true, abstract: false, final true
  inline int32_t get_BlockSize();

  /// @brief Convert to "::Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg"
  constexpr ::Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg* i___Org__BouncyCastle__Crypto__Prng__Drbg__ISP80090Drbg() noexcept;

  static inline void setStaticF_AES_MAX_BITS_REQUEST(int32_t value);

  static inline void setStaticF_AES_RESEED_MAX(int64_t value);

  static inline void setStaticF_K_BITS(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline void setStaticF_TDEA_MAX_BITS_REQUEST(int32_t value);

  static inline void setStaticF_TDEA_RESEED_MAX(int64_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CtrSP800Drbg();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CtrSP800Drbg", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CtrSP800Drbg(CtrSP800Drbg&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CtrSP800Drbg", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CtrSP800Drbg(CtrSP800Drbg const&) = delete;

  /// @brief Field mEntropySource, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::IEntropySource* ___mEntropySource;

  /// @brief Field mEngine, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::IBlockCipher* ___mEngine;

  /// @brief Field mKeySizeInBits, offset: 0x20, size: 0x4, def value: None
  int32_t ___mKeySizeInBits;

  /// @brief Field mSeedLength, offset: 0x24, size: 0x4, def value: None
  int32_t ___mSeedLength;

  /// @brief Field mSecurityStrength, offset: 0x28, size: 0x4, def value: None
  int32_t ___mSecurityStrength;

  /// @brief Field mKey, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___mKey;

  /// @brief Field mV, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___mV;

  /// @brief Field mReseedCounter, offset: 0x40, size: 0x8, def value: None
  int64_t ___mReseedCounter;

  /// @brief Field mIsTdea, offset: 0x48, size: 0x1, def value: None
  bool ___mIsTdea;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1095 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Prng::Drbg::CtrSP800Drbg, 0x50>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Prng::Drbg::CtrSP800Drbg, ___mEntropySource) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Prng::Drbg::CtrSP800Drbg, ___mEngine) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Prng::Drbg::CtrSP800Drbg, ___mKeySizeInBits) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Prng::Drbg::CtrSP800Drbg, ___mSeedLength) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Prng::Drbg::CtrSP800Drbg, ___mSecurityStrength) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Prng::Drbg::CtrSP800Drbg, ___mKey) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Prng::Drbg::CtrSP800Drbg, ___mV) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Prng::Drbg::CtrSP800Drbg, ___mReseedCounter) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Prng::Drbg::CtrSP800Drbg, ___mIsTdea) == 0x48, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Prng::Drbg
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Prng::Drbg::CtrSP800Drbg);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Prng::Drbg::CtrSP800Drbg*, "Org.BouncyCastle.Crypto.Prng.Drbg", "CtrSP800Drbg");
