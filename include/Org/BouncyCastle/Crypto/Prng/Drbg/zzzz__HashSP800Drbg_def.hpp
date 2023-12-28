#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HashSP800Drbg)
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
namespace Org::BouncyCastle::Crypto::Prng::Drbg {
class ISP80090Drbg;
}
namespace System::Collections {
class IDictionary;
}
namespace Org::BouncyCastle::Crypto {
class IEntropySource;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Prng::Drbg {
class HashSP800Drbg;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg);
// Type: Org.BouncyCastle.Crypto.Prng.Drbg::HashSP800Drbg
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Prng::Drbg {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1097))
// CS Name: ::Org.BouncyCastle.Crypto.Prng.Drbg::HashSP800Drbg*
class CORDL_TYPE HashSP800Drbg : public ::System::Object {
public:
  // Declarations
  /// @brief Field mDigest, offset 0x10, size 0x8
  __declspec(property(get = __get_mDigest, put = __set_mDigest))::Org::BouncyCastle::Crypto::IDigest* mDigest;

  /// @brief Field mEntropySource, offset 0x18, size 0x8
  __declspec(property(get = __get_mEntropySource, put = __set_mEntropySource))::Org::BouncyCastle::Crypto::IEntropySource* mEntropySource;

  /// @brief Field mSecurityStrength, offset 0x20, size 0x4
  __declspec(property(get = __get_mSecurityStrength, put = __set_mSecurityStrength)) int32_t mSecurityStrength;

  /// @brief Field mSeedLength, offset 0x24, size 0x4
  __declspec(property(get = __get_mSeedLength, put = __set_mSeedLength)) int32_t mSeedLength;

  /// @brief Field mV, offset 0x28, size 0x8
  __declspec(property(get = __get_mV, put = __set_mV))::ArrayW<uint8_t, ::Array<uint8_t>*> mV;

  /// @brief Field mC, offset 0x30, size 0x8
  __declspec(property(get = __get_mC, put = __set_mC))::ArrayW<uint8_t, ::Array<uint8_t>*> mC;

  /// @brief Field mReseedCounter, offset 0x38, size 0x8
  __declspec(property(get = __get_mReseedCounter, put = __set_mReseedCounter)) int64_t mReseedCounter;

  /// @brief Field ONE, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ONE, put = setStaticF_ONE))::ArrayW<uint8_t, ::Array<uint8_t>*> ONE;

  /// @brief Field RESEED_MAX, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_RESEED_MAX, put = setStaticF_RESEED_MAX)) int64_t RESEED_MAX;

  /// @brief Field MAX_BITS_REQUEST, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_MAX_BITS_REQUEST, put = setStaticF_MAX_BITS_REQUEST)) int32_t MAX_BITS_REQUEST;

  /// @brief Field seedlens, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_seedlens, put = setStaticF_seedlens))::System::Collections::IDictionary* seedlens;

  __declspec(property(get = get_BlockSize)) int32_t BlockSize;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg"
  constexpr operator ::Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg*() noexcept;

  constexpr ::Org::BouncyCastle::Crypto::IDigest*& __get_mDigest();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IDigest*> const& __get_mDigest() const;

  constexpr void __set_mDigest(::Org::BouncyCastle::Crypto::IDigest* value);

  constexpr ::Org::BouncyCastle::Crypto::IEntropySource*& __get_mEntropySource();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IEntropySource*> const& __get_mEntropySource() const;

  constexpr void __set_mEntropySource(::Org::BouncyCastle::Crypto::IEntropySource* value);

  constexpr int32_t& __get_mSecurityStrength();

  constexpr int32_t const& __get_mSecurityStrength() const;

  constexpr void __set_mSecurityStrength(int32_t value);

  constexpr int32_t& __get_mSeedLength();

  constexpr int32_t const& __get_mSeedLength() const;

  constexpr void __set_mSeedLength(int32_t value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_mV();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_mV() const;

  constexpr void __set_mV(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_mC();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_mC() const;

  constexpr void __set_mC(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr int64_t& __get_mReseedCounter();

  constexpr int64_t const& __get_mReseedCounter() const;

  constexpr void __set_mReseedCounter(int64_t value);

  static inline void setStaticF_ONE(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_ONE();

  static inline void setStaticF_RESEED_MAX(int64_t value);

  static inline int64_t getStaticF_RESEED_MAX();

  static inline void setStaticF_MAX_BITS_REQUEST(int32_t value);

  static inline int32_t getStaticF_MAX_BITS_REQUEST();

  static inline void setStaticF_seedlens(::System::Collections::IDictionary* value);

  static inline ::System::Collections::IDictionary* getStaticF_seedlens();

  static inline ::Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg* New_ctor(::Org::BouncyCastle::Crypto::IDigest* digest, int32_t securityStrength,
                                                                                 ::Org::BouncyCastle::Crypto::IEntropySource* entropySource, ::ArrayW<uint8_t, ::Array<uint8_t>*> personalizationString,
                                                                                 ::ArrayW<uint8_t, ::Array<uint8_t>*> nonce);

  /// @brief Method .ctor addr 0xf3fa5c size 0x470 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IDigest* digest, int32_t securityStrength, ::Org::BouncyCastle::Crypto::IEntropySource* entropySource,
                    ::ArrayW<uint8_t, ::Array<uint8_t>*> personalizationString, ::ArrayW<uint8_t, ::Array<uint8_t>*> nonce);

  /// @brief Method get_BlockSize addr 0xf3ffe4 size 0xac virtual true final true
  inline int32_t get_BlockSize();

  /// @brief Method Generate addr 0xf40090 size 0x354 virtual true final true
  inline int32_t Generate(::ArrayW<uint8_t, ::Array<uint8_t>*> output, ::ArrayW<uint8_t, ::Array<uint8_t>*> additionalInput, bool predictionResistant);

  /// @brief Method GetEntropy addr 0xf3fecc size 0x118 virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetEntropy();

  /// @brief Method AddTo addr 0xf40718 size 0xcc virtual false final false
  inline void AddTo(::ArrayW<uint8_t, ::Array<uint8_t>*> longer, ::ArrayW<uint8_t, ::Array<uint8_t>*> shorter);

  /// @brief Method Reseed addr 0xf403e4 size 0x244 virtual true final true
  inline void Reseed(::ArrayW<uint8_t, ::Array<uint8_t>*> additionalInput);

  /// @brief Method Hash addr 0xf40628 size 0xf0 virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Hash(::ArrayW<uint8_t, ::Array<uint8_t>*> input);

  /// @brief Method DoHash addr 0xf40a24 size 0x13c virtual false final false
  inline void DoHash(::ArrayW<uint8_t, ::Array<uint8_t>*> input, ::ArrayW<uint8_t, ::Array<uint8_t>*> output);

  /// @brief Method hashgen addr 0xf407e4 size 0x240 virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> hashgen(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t lengthInBits);

  // Ctor Parameters [CppParam { name: "", ty: "HashSP800Drbg", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HashSP800Drbg(HashSP800Drbg&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HashSP800Drbg", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HashSP800Drbg(HashSP800Drbg const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HashSP800Drbg();

public:
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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg, 0x40>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Prng::Drbg
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg*, "Org.BouncyCastle.Crypto.Prng.Drbg", "HashSP800Drbg");
