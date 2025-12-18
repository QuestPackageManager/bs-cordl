#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Prng/SP800SecureRandomBuilder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SP800SecureRandomBuilder)
namespace Org::BouncyCastle::Crypto::Prng::Drbg {
class ISP80090Drbg;
}
namespace Org::BouncyCastle::Crypto::Prng {
class IDrbgProvider;
}
namespace Org::BouncyCastle::Crypto::Prng {
class SP800SecureRandomBuilder_CtrDrbgProvider;
}
namespace Org::BouncyCastle::Crypto::Prng {
class SP800SecureRandomBuilder_HMacDrbgProvider;
}
namespace Org::BouncyCastle::Crypto::Prng {
class SP800SecureRandomBuilder_HashDrbgProvider;
}
namespace Org::BouncyCastle::Crypto::Prng {
class SP800SecureRandom;
}
namespace Org::BouncyCastle::Crypto {
class IBlockCipher;
}
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
namespace Org::BouncyCastle::Crypto {
class IEntropySourceProvider;
}
namespace Org::BouncyCastle::Crypto {
class IEntropySource;
}
namespace Org::BouncyCastle::Crypto {
class IMac;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Prng {
class SP800SecureRandomBuilder;
}
namespace Org::BouncyCastle::Crypto::Prng {
class SP800SecureRandomBuilder_CtrDrbgProvider;
}
namespace Org::BouncyCastle::Crypto::Prng {
class SP800SecureRandomBuilder_HMacDrbgProvider;
}
namespace Org::BouncyCastle::Crypto::Prng {
class SP800SecureRandomBuilder_HashDrbgProvider;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder);
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder_CtrDrbgProvider);
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder_HMacDrbgProvider);
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder_HashDrbgProvider);
// Dependencies System.Object
namespace Org::BouncyCastle::Crypto::Prng {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Prng.SP800SecureRandomBuilder/HashDrbgProvider
class CORDL_TYPE SP800SecureRandomBuilder_HashDrbgProvider : public ::System::Object {
public:
  // Declarations
  /// @brief Field mDigest, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_mDigest, put = __cordl_internal_set_mDigest)) ::Org::BouncyCastle::Crypto::IDigest* mDigest;

  /// @brief Field mNonce, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_mNonce, put = __cordl_internal_set_mNonce)) ::ArrayW<uint8_t, ::Array<uint8_t>*> mNonce;

  /// @brief Field mPersonalizationString, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_mPersonalizationString, put = __cordl_internal_set_mPersonalizationString)) ::ArrayW<uint8_t, ::Array<uint8_t>*> mPersonalizationString;

  /// @brief Field mSecurityStrength, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_mSecurityStrength, put = __cordl_internal_set_mSecurityStrength)) int32_t mSecurityStrength;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::Prng::IDrbgProvider"
  constexpr operator ::Org::BouncyCastle::Crypto::Prng::IDrbgProvider*() noexcept;

  /// @brief Method Get, addr 0x3324b14, size 0x8c, virtual true, abstract: false, final true
  inline ::Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg* Get(::Org::BouncyCastle::Crypto::IEntropySource* entropySource);

  static inline ::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder_HashDrbgProvider* New_ctor(::Org::BouncyCastle::Crypto::IDigest* digest, ::ArrayW<uint8_t, ::Array<uint8_t>*> nonce,
                                                                                                       ::ArrayW<uint8_t, ::Array<uint8_t>*> personalizationString, int32_t securityStrength);

  constexpr ::Org::BouncyCastle::Crypto::IDigest* const& __cordl_internal_get_mDigest() const;

  constexpr ::Org::BouncyCastle::Crypto::IDigest*& __cordl_internal_get_mDigest();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_mNonce() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_mNonce();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_mPersonalizationString() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_mPersonalizationString();

  constexpr int32_t const& __cordl_internal_get_mSecurityStrength() const;

  constexpr int32_t& __cordl_internal_get_mSecurityStrength();

  constexpr void __cordl_internal_set_mDigest(::Org::BouncyCastle::Crypto::IDigest* value);

  constexpr void __cordl_internal_set_mNonce(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_mPersonalizationString(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_mSecurityStrength(int32_t value);

  /// @brief Method .ctor, addr 0x3324830, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IDigest* digest, ::ArrayW<uint8_t, ::Array<uint8_t>*> nonce, ::ArrayW<uint8_t, ::Array<uint8_t>*> personalizationString, int32_t securityStrength);

  /// @brief Convert to "::Org::BouncyCastle::Crypto::Prng::IDrbgProvider"
  constexpr ::Org::BouncyCastle::Crypto::Prng::IDrbgProvider* i___Org__BouncyCastle__Crypto__Prng__IDrbgProvider() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SP800SecureRandomBuilder_HashDrbgProvider();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SP800SecureRandomBuilder_HashDrbgProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SP800SecureRandomBuilder_HashDrbgProvider(SP800SecureRandomBuilder_HashDrbgProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SP800SecureRandomBuilder_HashDrbgProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SP800SecureRandomBuilder_HashDrbgProvider(SP800SecureRandomBuilder_HashDrbgProvider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1113 };

  /// @brief Field mDigest, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::IDigest* ___mDigest;

  /// @brief Field mNonce, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___mNonce;

  /// @brief Field mPersonalizationString, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___mPersonalizationString;

  /// @brief Field mSecurityStrength, offset: 0x28, size: 0x4, def value: None
  int32_t ___mSecurityStrength;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder_HashDrbgProvider, ___mDigest) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder_HashDrbgProvider, ___mNonce) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder_HashDrbgProvider, ___mPersonalizationString) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder_HashDrbgProvider, ___mSecurityStrength) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder_HashDrbgProvider, 0x30>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Prng
// Dependencies System.Object
namespace Org::BouncyCastle::Crypto::Prng {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Prng.SP800SecureRandomBuilder/HMacDrbgProvider
class CORDL_TYPE SP800SecureRandomBuilder_HMacDrbgProvider : public ::System::Object {
public:
  // Declarations
  /// @brief Field mHMac, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_mHMac, put = __cordl_internal_set_mHMac)) ::Org::BouncyCastle::Crypto::IMac* mHMac;

  /// @brief Field mNonce, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_mNonce, put = __cordl_internal_set_mNonce)) ::ArrayW<uint8_t, ::Array<uint8_t>*> mNonce;

  /// @brief Field mPersonalizationString, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_mPersonalizationString, put = __cordl_internal_set_mPersonalizationString)) ::ArrayW<uint8_t, ::Array<uint8_t>*> mPersonalizationString;

  /// @brief Field mSecurityStrength, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_mSecurityStrength, put = __cordl_internal_set_mSecurityStrength)) int32_t mSecurityStrength;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::Prng::IDrbgProvider"
  constexpr operator ::Org::BouncyCastle::Crypto::Prng::IDrbgProvider*() noexcept;

  /// @brief Method Get, addr 0x3324ba0, size 0x8c, virtual true, abstract: false, final true
  inline ::Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg* Get(::Org::BouncyCastle::Crypto::IEntropySource* entropySource);

  static inline ::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder_HMacDrbgProvider* New_ctor(::Org::BouncyCastle::Crypto::IMac* hMac, ::ArrayW<uint8_t, ::Array<uint8_t>*> nonce,
                                                                                                       ::ArrayW<uint8_t, ::Array<uint8_t>*> personalizationString, int32_t securityStrength);

  constexpr ::Org::BouncyCastle::Crypto::IMac* const& __cordl_internal_get_mHMac() const;

  constexpr ::Org::BouncyCastle::Crypto::IMac*& __cordl_internal_get_mHMac();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_mNonce() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_mNonce();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_mPersonalizationString() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_mPersonalizationString();

  constexpr int32_t const& __cordl_internal_get_mSecurityStrength() const;

  constexpr int32_t& __cordl_internal_get_mSecurityStrength();

  constexpr void __cordl_internal_set_mHMac(::Org::BouncyCastle::Crypto::IMac* value);

  constexpr void __cordl_internal_set_mNonce(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_mPersonalizationString(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_mSecurityStrength(int32_t value);

  /// @brief Method .ctor, addr 0x3324b04, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IMac* hMac, ::ArrayW<uint8_t, ::Array<uint8_t>*> nonce, ::ArrayW<uint8_t, ::Array<uint8_t>*> personalizationString, int32_t securityStrength);

  /// @brief Convert to "::Org::BouncyCastle::Crypto::Prng::IDrbgProvider"
  constexpr ::Org::BouncyCastle::Crypto::Prng::IDrbgProvider* i___Org__BouncyCastle__Crypto__Prng__IDrbgProvider() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SP800SecureRandomBuilder_HMacDrbgProvider();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SP800SecureRandomBuilder_HMacDrbgProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SP800SecureRandomBuilder_HMacDrbgProvider(SP800SecureRandomBuilder_HMacDrbgProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SP800SecureRandomBuilder_HMacDrbgProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SP800SecureRandomBuilder_HMacDrbgProvider(SP800SecureRandomBuilder_HMacDrbgProvider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1114 };

  /// @brief Field mHMac, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::IMac* ___mHMac;

  /// @brief Field mNonce, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___mNonce;

  /// @brief Field mPersonalizationString, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___mPersonalizationString;

  /// @brief Field mSecurityStrength, offset: 0x28, size: 0x4, def value: None
  int32_t ___mSecurityStrength;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder_HMacDrbgProvider, ___mHMac) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder_HMacDrbgProvider, ___mNonce) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder_HMacDrbgProvider, ___mPersonalizationString) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder_HMacDrbgProvider, ___mSecurityStrength) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder_HMacDrbgProvider, 0x30>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Prng
// Dependencies System.Object
namespace Org::BouncyCastle::Crypto::Prng {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Prng.SP800SecureRandomBuilder/CtrDrbgProvider
class CORDL_TYPE SP800SecureRandomBuilder_CtrDrbgProvider : public ::System::Object {
public:
  // Declarations
  /// @brief Field mBlockCipher, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_mBlockCipher, put = __cordl_internal_set_mBlockCipher)) ::Org::BouncyCastle::Crypto::IBlockCipher* mBlockCipher;

  /// @brief Field mKeySizeInBits, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_mKeySizeInBits, put = __cordl_internal_set_mKeySizeInBits)) int32_t mKeySizeInBits;

  /// @brief Field mNonce, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_mNonce, put = __cordl_internal_set_mNonce)) ::ArrayW<uint8_t, ::Array<uint8_t>*> mNonce;

  /// @brief Field mPersonalizationString, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_mPersonalizationString, put = __cordl_internal_set_mPersonalizationString)) ::ArrayW<uint8_t, ::Array<uint8_t>*> mPersonalizationString;

  /// @brief Field mSecurityStrength, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_mSecurityStrength, put = __cordl_internal_set_mSecurityStrength)) int32_t mSecurityStrength;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::Prng::IDrbgProvider"
  constexpr operator ::Org::BouncyCastle::Crypto::Prng::IDrbgProvider*() noexcept;

  /// @brief Method Get, addr 0x3324c2c, size 0x94, virtual true, abstract: false, final true
  inline ::Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg* Get(::Org::BouncyCastle::Crypto::IEntropySource* entropySource);

  static inline ::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder_CtrDrbgProvider* New_ctor(::Org::BouncyCastle::Crypto::IBlockCipher* blockCipher, int32_t keySizeInBits,
                                                                                                      ::ArrayW<uint8_t, ::Array<uint8_t>*> nonce,
                                                                                                      ::ArrayW<uint8_t, ::Array<uint8_t>*> personalizationString, int32_t securityStrength);

  constexpr ::Org::BouncyCastle::Crypto::IBlockCipher* const& __cordl_internal_get_mBlockCipher() const;

  constexpr ::Org::BouncyCastle::Crypto::IBlockCipher*& __cordl_internal_get_mBlockCipher();

  constexpr int32_t const& __cordl_internal_get_mKeySizeInBits() const;

  constexpr int32_t& __cordl_internal_get_mKeySizeInBits();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_mNonce() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_mNonce();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_mPersonalizationString() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_mPersonalizationString();

  constexpr int32_t const& __cordl_internal_get_mSecurityStrength() const;

  constexpr int32_t& __cordl_internal_get_mSecurityStrength();

  constexpr void __cordl_internal_set_mBlockCipher(::Org::BouncyCastle::Crypto::IBlockCipher* value);

  constexpr void __cordl_internal_set_mKeySizeInBits(int32_t value);

  constexpr void __cordl_internal_set_mNonce(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_mPersonalizationString(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_mSecurityStrength(int32_t value);

  /// @brief Method .ctor, addr 0x332499c, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IBlockCipher* blockCipher, int32_t keySizeInBits, ::ArrayW<uint8_t, ::Array<uint8_t>*> nonce,
                    ::ArrayW<uint8_t, ::Array<uint8_t>*> personalizationString, int32_t securityStrength);

  /// @brief Convert to "::Org::BouncyCastle::Crypto::Prng::IDrbgProvider"
  constexpr ::Org::BouncyCastle::Crypto::Prng::IDrbgProvider* i___Org__BouncyCastle__Crypto__Prng__IDrbgProvider() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SP800SecureRandomBuilder_CtrDrbgProvider();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SP800SecureRandomBuilder_CtrDrbgProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SP800SecureRandomBuilder_CtrDrbgProvider(SP800SecureRandomBuilder_CtrDrbgProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SP800SecureRandomBuilder_CtrDrbgProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SP800SecureRandomBuilder_CtrDrbgProvider(SP800SecureRandomBuilder_CtrDrbgProvider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1115 };

  /// @brief Field mBlockCipher, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::IBlockCipher* ___mBlockCipher;

  /// @brief Field mKeySizeInBits, offset: 0x18, size: 0x4, def value: None
  int32_t ___mKeySizeInBits;

  /// @brief Field mNonce, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___mNonce;

  /// @brief Field mPersonalizationString, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___mPersonalizationString;

  /// @brief Field mSecurityStrength, offset: 0x30, size: 0x4, def value: None
  int32_t ___mSecurityStrength;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder_CtrDrbgProvider, ___mBlockCipher) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder_CtrDrbgProvider, ___mKeySizeInBits) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder_CtrDrbgProvider, ___mNonce) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder_CtrDrbgProvider, ___mPersonalizationString) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder_CtrDrbgProvider, ___mSecurityStrength) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder_CtrDrbgProvider, 0x38>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Prng
// Dependencies System.Object
namespace Org::BouncyCastle::Crypto::Prng {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Prng.SP800SecureRandomBuilder
class CORDL_TYPE SP800SecureRandomBuilder : public ::System::Object {
public:
  // Declarations
  using CtrDrbgProvider = ::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder_CtrDrbgProvider;

  using HMacDrbgProvider = ::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder_HMacDrbgProvider;

  using HashDrbgProvider = ::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder_HashDrbgProvider;

  /// @brief Field mEntropyBitsRequired, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_mEntropyBitsRequired, put = __cordl_internal_set_mEntropyBitsRequired)) int32_t mEntropyBitsRequired;

  /// @brief Field mEntropySourceProvider, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_mEntropySourceProvider,
                      put = __cordl_internal_set_mEntropySourceProvider)) ::Org::BouncyCastle::Crypto::IEntropySourceProvider* mEntropySourceProvider;

  /// @brief Field mPersonalizationString, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_mPersonalizationString, put = __cordl_internal_set_mPersonalizationString)) ::ArrayW<uint8_t, ::Array<uint8_t>*> mPersonalizationString;

  /// @brief Field mRandom, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_mRandom, put = __cordl_internal_set_mRandom)) ::Org::BouncyCastle::Security::SecureRandom* mRandom;

  /// @brief Field mSecurityStrength, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_mSecurityStrength, put = __cordl_internal_set_mSecurityStrength)) int32_t mSecurityStrength;

  /// @brief Method BuildCtr, addr 0x3324840, size 0x15c, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Prng::SP800SecureRandom* BuildCtr(::Org::BouncyCastle::Crypto::IBlockCipher* cipher, int32_t keySizeInBits, ::ArrayW<uint8_t, ::Array<uint8_t>*> nonce,
                                                                        bool predictionResistant);

  /// @brief Method BuildHMac, addr 0x33249b0, size 0x154, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Prng::SP800SecureRandom* BuildHMac(::Org::BouncyCastle::Crypto::IMac* hMac, ::ArrayW<uint8_t, ::Array<uint8_t>*> nonce, bool predictionResistant);

  /// @brief Method BuildHash, addr 0x33246dc, size 0x154, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Prng::SP800SecureRandom* BuildHash(::Org::BouncyCastle::Crypto::IDigest* digest, ::ArrayW<uint8_t, ::Array<uint8_t>*> nonce, bool predictionResistant);

  static inline ::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder* New_ctor();

  static inline ::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder* New_ctor(::Org::BouncyCastle::Security::SecureRandom* entropySource, bool predictionResistant);

  static inline ::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder* New_ctor(::Org::BouncyCastle::Crypto::IEntropySourceProvider* entropySourceProvider);

  /// @brief Method SetEntropyBitsRequired, addr 0x33246d4, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder* SetEntropyBitsRequired(int32_t entropyBitsRequired);

  /// @brief Method SetPersonalizationString, addr 0x33246c4, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder* SetPersonalizationString(::ArrayW<uint8_t, ::Array<uint8_t>*> personalizationString);

  /// @brief Method SetSecurityStrength, addr 0x33246cc, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder* SetSecurityStrength(int32_t securityStrength);

  constexpr int32_t const& __cordl_internal_get_mEntropyBitsRequired() const;

  constexpr int32_t& __cordl_internal_get_mEntropyBitsRequired();

  constexpr ::Org::BouncyCastle::Crypto::IEntropySourceProvider* const& __cordl_internal_get_mEntropySourceProvider() const;

  constexpr ::Org::BouncyCastle::Crypto::IEntropySourceProvider*& __cordl_internal_get_mEntropySourceProvider();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_mPersonalizationString() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_mPersonalizationString();

  constexpr ::Org::BouncyCastle::Security::SecureRandom* const& __cordl_internal_get_mRandom() const;

  constexpr ::Org::BouncyCastle::Security::SecureRandom*& __cordl_internal_get_mRandom();

  constexpr int32_t const& __cordl_internal_get_mSecurityStrength() const;

  constexpr int32_t& __cordl_internal_get_mSecurityStrength();

  constexpr void __cordl_internal_set_mEntropyBitsRequired(int32_t value);

  constexpr void __cordl_internal_set_mEntropySourceProvider(::Org::BouncyCastle::Crypto::IEntropySourceProvider* value);

  constexpr void __cordl_internal_set_mPersonalizationString(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_mRandom(::Org::BouncyCastle::Security::SecureRandom* value);

  constexpr void __cordl_internal_set_mSecurityStrength(int32_t value);

  /// @brief Method .ctor, addr 0x33245d4, size 0x60, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x3324634, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Security::SecureRandom* entropySource, bool predictionResistant);

  /// @brief Method .ctor, addr 0x33246b0, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IEntropySourceProvider* entropySourceProvider);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SP800SecureRandomBuilder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SP800SecureRandomBuilder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SP800SecureRandomBuilder(SP800SecureRandomBuilder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SP800SecureRandomBuilder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SP800SecureRandomBuilder(SP800SecureRandomBuilder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1116 };

  /// @brief Field mRandom, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Security::SecureRandom* ___mRandom;

  /// @brief Field mEntropySourceProvider, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::IEntropySourceProvider* ___mEntropySourceProvider;

  /// @brief Field mPersonalizationString, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___mPersonalizationString;

  /// @brief Field mSecurityStrength, offset: 0x28, size: 0x4, def value: None
  int32_t ___mSecurityStrength;

  /// @brief Field mEntropyBitsRequired, offset: 0x2c, size: 0x4, def value: None
  int32_t ___mEntropyBitsRequired;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder, ___mRandom) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder, ___mEntropySourceProvider) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder, ___mPersonalizationString) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder, ___mSecurityStrength) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder, ___mEntropyBitsRequired) == 0x2c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder, 0x30>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Prng
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder*, "Org.BouncyCastle.Crypto.Prng", "SP800SecureRandomBuilder");
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder_CtrDrbgProvider);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder_CtrDrbgProvider*, "Org.BouncyCastle.Crypto.Prng", "SP800SecureRandomBuilder/CtrDrbgProvider");
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder_HMacDrbgProvider);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder_HMacDrbgProvider*, "Org.BouncyCastle.Crypto.Prng", "SP800SecureRandomBuilder/HMacDrbgProvider");
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder_HashDrbgProvider);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder_HashDrbgProvider*, "Org.BouncyCastle.Crypto.Prng", "SP800SecureRandomBuilder/HashDrbgProvider");
