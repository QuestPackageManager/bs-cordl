#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Prng/Drbg/HMacSP800Drbg.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Prng/Drbg/zzzz__ISP80090Drbg_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HMacSP800Drbg)
namespace Org::BouncyCastle::Crypto {
class IEntropySource;
}
namespace Org::BouncyCastle::Crypto {
class IMac;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Prng::Drbg {
class HMacSP800Drbg;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Prng::Drbg::HMacSP800Drbg);
// Dependencies Org.BouncyCastle.Crypto.Prng.Drbg.ISP80090Drbg, System.Object
namespace Org::BouncyCastle::Crypto::Prng::Drbg {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Prng.Drbg.HMacSP800Drbg
class CORDL_TYPE HMacSP800Drbg : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_BlockSize)) int32_t BlockSize;

  /// @brief Field MAX_BITS_REQUEST, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_MAX_BITS_REQUEST, put = setStaticF_MAX_BITS_REQUEST)) int32_t MAX_BITS_REQUEST;

  /// @brief Field RESEED_MAX, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_RESEED_MAX, put = setStaticF_RESEED_MAX)) int64_t RESEED_MAX;

  /// @brief Field mEntropySource, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_mEntropySource, put = __cordl_internal_set_mEntropySource)) ::Org::BouncyCastle::Crypto::IEntropySource* mEntropySource;

  /// @brief Field mHMac, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_mHMac, put = __cordl_internal_set_mHMac)) ::Org::BouncyCastle::Crypto::IMac* mHMac;

  /// @brief Field mK, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_mK, put = __cordl_internal_set_mK)) ::ArrayW<uint8_t, ::Array<uint8_t>*> mK;

  /// @brief Field mReseedCounter, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_mReseedCounter, put = __cordl_internal_set_mReseedCounter)) int64_t mReseedCounter;

  /// @brief Field mSecurityStrength, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_mSecurityStrength, put = __cordl_internal_set_mSecurityStrength)) int32_t mSecurityStrength;

  /// @brief Field mV, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_mV, put = __cordl_internal_set_mV)) ::ArrayW<uint8_t, ::Array<uint8_t>*> mV;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg"
  constexpr operator ::Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg*() noexcept;

  /// @brief Method Generate, addr 0x23c8e00, size 0x508, virtual true, abstract: false, final true
  inline int32_t Generate(::ArrayW<uint8_t, ::Array<uint8_t>*> output, ::ArrayW<uint8_t, ::Array<uint8_t>*> additionalInput, bool predictionResistant);

  /// @brief Method GetEntropy, addr 0x23c8860, size 0x114, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetEntropy();

  static inline ::Org::BouncyCastle::Crypto::Prng::Drbg::HMacSP800Drbg* New_ctor(::Org::BouncyCastle::Crypto::IMac* hMac, int32_t securityStrength,
                                                                                 ::Org::BouncyCastle::Crypto::IEntropySource* entropySource, ::ArrayW<uint8_t, ::Array<uint8_t>*> personalizationString,
                                                                                 ::ArrayW<uint8_t, ::Array<uint8_t>*> nonce);

  /// @brief Method Reseed, addr 0x23c9308, size 0x90, virtual true, abstract: false, final true
  inline void Reseed(::ArrayW<uint8_t, ::Array<uint8_t>*> additionalInput);

  constexpr ::Org::BouncyCastle::Crypto::IEntropySource* const& __cordl_internal_get_mEntropySource() const;

  constexpr ::Org::BouncyCastle::Crypto::IEntropySource*& __cordl_internal_get_mEntropySource();

  constexpr ::Org::BouncyCastle::Crypto::IMac* const& __cordl_internal_get_mHMac() const;

  constexpr ::Org::BouncyCastle::Crypto::IMac*& __cordl_internal_get_mHMac();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_mK() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_mK();

  constexpr int64_t const& __cordl_internal_get_mReseedCounter() const;

  constexpr int64_t& __cordl_internal_get_mReseedCounter();

  constexpr int32_t const& __cordl_internal_get_mSecurityStrength() const;

  constexpr int32_t& __cordl_internal_get_mSecurityStrength();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_mV() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_mV();

  constexpr void __cordl_internal_set_mEntropySource(::Org::BouncyCastle::Crypto::IEntropySource* value);

  constexpr void __cordl_internal_set_mHMac(::Org::BouncyCastle::Crypto::IMac* value);

  constexpr void __cordl_internal_set_mK(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_mReseedCounter(int64_t value);

  constexpr void __cordl_internal_set_mSecurityStrength(int32_t value);

  constexpr void __cordl_internal_set_mV(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method .ctor, addr 0x23c8570, size 0x2f0, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IMac* hMac, int32_t securityStrength, ::Org::BouncyCastle::Crypto::IEntropySource* entropySource,
                    ::ArrayW<uint8_t, ::Array<uint8_t>*> personalizationString, ::ArrayW<uint8_t, ::Array<uint8_t>*> nonce);

  static inline int32_t getStaticF_MAX_BITS_REQUEST();

  static inline int64_t getStaticF_RESEED_MAX();

  /// @brief Method get_BlockSize, addr 0x23c8de0, size 0x20, virtual true, abstract: false, final true
  inline int32_t get_BlockSize();

  /// @brief Method hmac_DRBG_Update, addr 0x23c8974, size 0x40, virtual false, abstract: false, final false
  inline void hmac_DRBG_Update(::ArrayW<uint8_t, ::Array<uint8_t>*> seedMaterial);

  /// @brief Method hmac_DRBG_Update_Func, addr 0x23c89b4, size 0x42c, virtual false, abstract: false, final false
  inline void hmac_DRBG_Update_Func(::ArrayW<uint8_t, ::Array<uint8_t>*> seedMaterial, uint8_t vValue);

  /// @brief Convert to "::Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg"
  constexpr ::Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg* i___Org__BouncyCastle__Crypto__Prng__Drbg__ISP80090Drbg() noexcept;

  static inline void setStaticF_MAX_BITS_REQUEST(int32_t value);

  static inline void setStaticF_RESEED_MAX(int64_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HMacSP800Drbg();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HMacSP800Drbg", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HMacSP800Drbg(HMacSP800Drbg&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HMacSP800Drbg", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HMacSP800Drbg(HMacSP800Drbg const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1098 };

  /// @brief Field mK, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___mK;

  /// @brief Field mV, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___mV;

  /// @brief Field mEntropySource, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::IEntropySource* ___mEntropySource;

  /// @brief Field mHMac, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::IMac* ___mHMac;

  /// @brief Field mSecurityStrength, offset: 0x30, size: 0x4, def value: None
  int32_t ___mSecurityStrength;

  /// @brief Field mReseedCounter, offset: 0x38, size: 0x8, def value: None
  int64_t ___mReseedCounter;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::Prng::Drbg::HMacSP800Drbg, ___mK) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Prng::Drbg::HMacSP800Drbg, ___mV) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Prng::Drbg::HMacSP800Drbg, ___mEntropySource) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Prng::Drbg::HMacSP800Drbg, ___mHMac) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Prng::Drbg::HMacSP800Drbg, ___mSecurityStrength) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Prng::Drbg::HMacSP800Drbg, ___mReseedCounter) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Prng::Drbg::HMacSP800Drbg, 0x40>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Prng::Drbg
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Prng::Drbg::HMacSP800Drbg);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Prng::Drbg::HMacSP800Drbg*, "Org.BouncyCastle.Crypto.Prng.Drbg", "HMacSP800Drbg");
