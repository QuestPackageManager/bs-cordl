#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SP800SecureRandomBuilder)
namespace Org::BouncyCastle::Crypto {
class IEntropySourceProvider;
}
namespace Org::BouncyCastle::Crypto::Prng {
class __SP800SecureRandomBuilder__HMacDrbgProvider;
}
namespace Org::BouncyCastle::Crypto::Prng {
class SP800SecureRandom;
}
namespace Org::BouncyCastle::Crypto {
class IBlockCipher;
}
namespace Org::BouncyCastle::Crypto {
class IMac;
}
namespace Org::BouncyCastle::Crypto::Prng {
class __SP800SecureRandomBuilder__HashDrbgProvider;
}
namespace Org::BouncyCastle::Crypto::Prng {
class __SP800SecureRandomBuilder__CtrDrbgProvider;
}
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace Org::BouncyCastle::Crypto::Prng::Drbg {
class ISP80090Drbg;
}
namespace Org::BouncyCastle::Crypto {
class IEntropySource;
}
namespace Org::BouncyCastle::Crypto::Prng {
class IDrbgProvider;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Prng {
class SP800SecureRandomBuilder;
}
namespace Org::BouncyCastle::Crypto::Prng {
class __SP800SecureRandomBuilder__CtrDrbgProvider;
}
namespace Org::BouncyCastle::Crypto::Prng {
class __SP800SecureRandomBuilder__HMacDrbgProvider;
}
namespace Org::BouncyCastle::Crypto::Prng {
class __SP800SecureRandomBuilder__HashDrbgProvider;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder);
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Prng::__SP800SecureRandomBuilder__CtrDrbgProvider);
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Prng::__SP800SecureRandomBuilder__HMacDrbgProvider);
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Prng::__SP800SecureRandomBuilder__HashDrbgProvider);
// Type: ::HashDrbgProvider
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 44, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Prng {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1113))
// CS Name: ::SP800SecureRandomBuilder::HashDrbgProvider*
class CORDL_TYPE __SP800SecureRandomBuilder__HashDrbgProvider : public ::System::Object {
public:
  // Declarations
  /// @brief Field mDigest, offset 0x10, size 0x8
  __declspec(property(get = __get_mDigest, put = __set_mDigest))::Org::BouncyCastle::Crypto::IDigest* mDigest;

  /// @brief Field mNonce, offset 0x18, size 0x8
  __declspec(property(get = __get_mNonce, put = __set_mNonce))::ArrayW<uint8_t, ::Array<uint8_t>*> mNonce;

  /// @brief Field mPersonalizationString, offset 0x20, size 0x8
  __declspec(property(get = __get_mPersonalizationString, put = __set_mPersonalizationString))::ArrayW<uint8_t, ::Array<uint8_t>*> mPersonalizationString;

  /// @brief Field mSecurityStrength, offset 0x28, size 0x4
  __declspec(property(get = __get_mSecurityStrength, put = __set_mSecurityStrength)) int32_t mSecurityStrength;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::Prng::IDrbgProvider"
  constexpr operator ::Org::BouncyCastle::Crypto::Prng::IDrbgProvider*() noexcept;

  constexpr ::Org::BouncyCastle::Crypto::IDigest*& __get_mDigest();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IDigest*> const& __get_mDigest() const;

  constexpr void __set_mDigest(::Org::BouncyCastle::Crypto::IDigest* value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_mNonce();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_mNonce() const;

  constexpr void __set_mNonce(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_mPersonalizationString();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_mPersonalizationString() const;

  constexpr void __set_mPersonalizationString(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr int32_t& __get_mSecurityStrength();

  constexpr int32_t const& __get_mSecurityStrength() const;

  constexpr void __set_mSecurityStrength(int32_t value);

  static inline ::Org::BouncyCastle::Crypto::Prng::__SP800SecureRandomBuilder__HashDrbgProvider* New_ctor(::Org::BouncyCastle::Crypto::IDigest* digest, ::ArrayW<uint8_t, ::Array<uint8_t>*> nonce,
                                                                                                          ::ArrayW<uint8_t, ::Array<uint8_t>*> personalizationString, int32_t securityStrength);

  /// @brief Method .ctor addr 0xece488 size 0x44 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IDigest* digest, ::ArrayW<uint8_t, ::Array<uint8_t>*> nonce, ::ArrayW<uint8_t, ::Array<uint8_t>*> personalizationString, int32_t securityStrength);

  /// @brief Method Get addr 0xece824 size 0x90 virtual true final true
  inline ::Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg* Get(::Org::BouncyCastle::Crypto::IEntropySource* entropySource);

  // Ctor Parameters [CppParam { name: "", ty: "__SP800SecureRandomBuilder__HashDrbgProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SP800SecureRandomBuilder__HashDrbgProvider(__SP800SecureRandomBuilder__HashDrbgProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SP800SecureRandomBuilder__HashDrbgProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SP800SecureRandomBuilder__HashDrbgProvider(__SP800SecureRandomBuilder__HashDrbgProvider const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SP800SecureRandomBuilder__HashDrbgProvider();

public:
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
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Prng::__SP800SecureRandomBuilder__HashDrbgProvider, 0x30>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Prng::__SP800SecureRandomBuilder__HashDrbgProvider, ___mDigest) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Prng::__SP800SecureRandomBuilder__HashDrbgProvider, ___mNonce) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Prng::__SP800SecureRandomBuilder__HashDrbgProvider, ___mPersonalizationString) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Prng::__SP800SecureRandomBuilder__HashDrbgProvider, ___mSecurityStrength) == 0x28, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Prng
// Type: ::HMacDrbgProvider
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 44, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Prng {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1114))
// CS Name: ::SP800SecureRandomBuilder::HMacDrbgProvider*
class CORDL_TYPE __SP800SecureRandomBuilder__HMacDrbgProvider : public ::System::Object {
public:
  // Declarations
  /// @brief Field mHMac, offset 0x10, size 0x8
  __declspec(property(get = __get_mHMac, put = __set_mHMac))::Org::BouncyCastle::Crypto::IMac* mHMac;

  /// @brief Field mNonce, offset 0x18, size 0x8
  __declspec(property(get = __get_mNonce, put = __set_mNonce))::ArrayW<uint8_t, ::Array<uint8_t>*> mNonce;

  /// @brief Field mPersonalizationString, offset 0x20, size 0x8
  __declspec(property(get = __get_mPersonalizationString, put = __set_mPersonalizationString))::ArrayW<uint8_t, ::Array<uint8_t>*> mPersonalizationString;

  /// @brief Field mSecurityStrength, offset 0x28, size 0x4
  __declspec(property(get = __get_mSecurityStrength, put = __set_mSecurityStrength)) int32_t mSecurityStrength;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::Prng::IDrbgProvider"
  constexpr operator ::Org::BouncyCastle::Crypto::Prng::IDrbgProvider*() noexcept;

  constexpr ::Org::BouncyCastle::Crypto::IMac*& __get_mHMac();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IMac*> const& __get_mHMac() const;

  constexpr void __set_mHMac(::Org::BouncyCastle::Crypto::IMac* value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_mNonce();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_mNonce() const;

  constexpr void __set_mNonce(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_mPersonalizationString();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_mPersonalizationString() const;

  constexpr void __set_mPersonalizationString(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr int32_t& __get_mSecurityStrength();

  constexpr int32_t const& __get_mSecurityStrength() const;

  constexpr void __set_mSecurityStrength(int32_t value);

  static inline ::Org::BouncyCastle::Crypto::Prng::__SP800SecureRandomBuilder__HMacDrbgProvider* New_ctor(::Org::BouncyCastle::Crypto::IMac* hMac, ::ArrayW<uint8_t, ::Array<uint8_t>*> nonce,
                                                                                                          ::ArrayW<uint8_t, ::Array<uint8_t>*> personalizationString, int32_t securityStrength);

  /// @brief Method .ctor addr 0xece7e0 size 0x44 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IMac* hMac, ::ArrayW<uint8_t, ::Array<uint8_t>*> nonce, ::ArrayW<uint8_t, ::Array<uint8_t>*> personalizationString, int32_t securityStrength);

  /// @brief Method Get addr 0xece8b4 size 0x90 virtual true final true
  inline ::Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg* Get(::Org::BouncyCastle::Crypto::IEntropySource* entropySource);

  // Ctor Parameters [CppParam { name: "", ty: "__SP800SecureRandomBuilder__HMacDrbgProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SP800SecureRandomBuilder__HMacDrbgProvider(__SP800SecureRandomBuilder__HMacDrbgProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SP800SecureRandomBuilder__HMacDrbgProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SP800SecureRandomBuilder__HMacDrbgProvider(__SP800SecureRandomBuilder__HMacDrbgProvider const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SP800SecureRandomBuilder__HMacDrbgProvider();

public:
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
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Prng::__SP800SecureRandomBuilder__HMacDrbgProvider, 0x30>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Prng::__SP800SecureRandomBuilder__HMacDrbgProvider, ___mHMac) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Prng::__SP800SecureRandomBuilder__HMacDrbgProvider, ___mNonce) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Prng::__SP800SecureRandomBuilder__HMacDrbgProvider, ___mPersonalizationString) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Prng::__SP800SecureRandomBuilder__HMacDrbgProvider, ___mSecurityStrength) == 0x28, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Prng
// Type: ::CtrDrbgProvider
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 52, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Prng {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1115))
// CS Name: ::SP800SecureRandomBuilder::CtrDrbgProvider*
class CORDL_TYPE __SP800SecureRandomBuilder__CtrDrbgProvider : public ::System::Object {
public:
  // Declarations
  /// @brief Field mBlockCipher, offset 0x10, size 0x8
  __declspec(property(get = __get_mBlockCipher, put = __set_mBlockCipher))::Org::BouncyCastle::Crypto::IBlockCipher* mBlockCipher;

  /// @brief Field mKeySizeInBits, offset 0x18, size 0x4
  __declspec(property(get = __get_mKeySizeInBits, put = __set_mKeySizeInBits)) int32_t mKeySizeInBits;

  /// @brief Field mNonce, offset 0x20, size 0x8
  __declspec(property(get = __get_mNonce, put = __set_mNonce))::ArrayW<uint8_t, ::Array<uint8_t>*> mNonce;

  /// @brief Field mPersonalizationString, offset 0x28, size 0x8
  __declspec(property(get = __get_mPersonalizationString, put = __set_mPersonalizationString))::ArrayW<uint8_t, ::Array<uint8_t>*> mPersonalizationString;

  /// @brief Field mSecurityStrength, offset 0x30, size 0x4
  __declspec(property(get = __get_mSecurityStrength, put = __set_mSecurityStrength)) int32_t mSecurityStrength;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::Prng::IDrbgProvider"
  constexpr operator ::Org::BouncyCastle::Crypto::Prng::IDrbgProvider*() noexcept;

  constexpr ::Org::BouncyCastle::Crypto::IBlockCipher*& __get_mBlockCipher();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IBlockCipher*> const& __get_mBlockCipher() const;

  constexpr void __set_mBlockCipher(::Org::BouncyCastle::Crypto::IBlockCipher* value);

  constexpr int32_t& __get_mKeySizeInBits();

  constexpr int32_t const& __get_mKeySizeInBits() const;

  constexpr void __set_mKeySizeInBits(int32_t value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_mNonce();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_mNonce() const;

  constexpr void __set_mNonce(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_mPersonalizationString();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_mPersonalizationString() const;

  constexpr void __set_mPersonalizationString(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr int32_t& __get_mSecurityStrength();

  constexpr int32_t const& __get_mSecurityStrength() const;

  constexpr void __set_mSecurityStrength(int32_t value);

  static inline ::Org::BouncyCastle::Crypto::Prng::__SP800SecureRandomBuilder__CtrDrbgProvider* New_ctor(::Org::BouncyCastle::Crypto::IBlockCipher* blockCipher, int32_t keySizeInBits,
                                                                                                         ::ArrayW<uint8_t, ::Array<uint8_t>*> nonce,
                                                                                                         ::ArrayW<uint8_t, ::Array<uint8_t>*> personalizationString, int32_t securityStrength);

  /// @brief Method .ctor addr 0xece634 size 0x54 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IBlockCipher* blockCipher, int32_t keySizeInBits, ::ArrayW<uint8_t, ::Array<uint8_t>*> nonce,
                    ::ArrayW<uint8_t, ::Array<uint8_t>*> personalizationString, int32_t securityStrength);

  /// @brief Method Get addr 0xece944 size 0x98 virtual true final true
  inline ::Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg* Get(::Org::BouncyCastle::Crypto::IEntropySource* entropySource);

  // Ctor Parameters [CppParam { name: "", ty: "__SP800SecureRandomBuilder__CtrDrbgProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SP800SecureRandomBuilder__CtrDrbgProvider(__SP800SecureRandomBuilder__CtrDrbgProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SP800SecureRandomBuilder__CtrDrbgProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SP800SecureRandomBuilder__CtrDrbgProvider(__SP800SecureRandomBuilder__CtrDrbgProvider const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SP800SecureRandomBuilder__CtrDrbgProvider();

public:
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
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Prng::__SP800SecureRandomBuilder__CtrDrbgProvider, 0x38>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Prng::__SP800SecureRandomBuilder__CtrDrbgProvider, ___mBlockCipher) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Prng::__SP800SecureRandomBuilder__CtrDrbgProvider, ___mKeySizeInBits) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Prng::__SP800SecureRandomBuilder__CtrDrbgProvider, ___mNonce) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Prng::__SP800SecureRandomBuilder__CtrDrbgProvider, ___mPersonalizationString) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Prng::__SP800SecureRandomBuilder__CtrDrbgProvider, ___mSecurityStrength) == 0x30, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Prng
// Type: Org.BouncyCastle.Crypto.Prng::SP800SecureRandomBuilder
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Prng {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1116))
// CS Name: ::Org.BouncyCastle.Crypto.Prng::SP800SecureRandomBuilder*
class CORDL_TYPE SP800SecureRandomBuilder : public ::System::Object {
public:
  // Declarations
  using CtrDrbgProvider = ::Org::BouncyCastle::Crypto::Prng::__SP800SecureRandomBuilder__CtrDrbgProvider;

  using HMacDrbgProvider = ::Org::BouncyCastle::Crypto::Prng::__SP800SecureRandomBuilder__HMacDrbgProvider;

  using HashDrbgProvider = ::Org::BouncyCastle::Crypto::Prng::__SP800SecureRandomBuilder__HashDrbgProvider;

  /// @brief Field mRandom, offset 0x10, size 0x8
  __declspec(property(get = __get_mRandom, put = __set_mRandom))::Org::BouncyCastle::Security::SecureRandom* mRandom;

  /// @brief Field mEntropySourceProvider, offset 0x18, size 0x8
  __declspec(property(get = __get_mEntropySourceProvider, put = __set_mEntropySourceProvider))::Org::BouncyCastle::Crypto::IEntropySourceProvider* mEntropySourceProvider;

  /// @brief Field mPersonalizationString, offset 0x20, size 0x8
  __declspec(property(get = __get_mPersonalizationString, put = __set_mPersonalizationString))::ArrayW<uint8_t, ::Array<uint8_t>*> mPersonalizationString;

  /// @brief Field mSecurityStrength, offset 0x28, size 0x4
  __declspec(property(get = __get_mSecurityStrength, put = __set_mSecurityStrength)) int32_t mSecurityStrength;

  /// @brief Field mEntropyBitsRequired, offset 0x2c, size 0x4
  __declspec(property(get = __get_mEntropyBitsRequired, put = __set_mEntropyBitsRequired)) int32_t mEntropyBitsRequired;

  constexpr ::Org::BouncyCastle::Security::SecureRandom*& __get_mRandom();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Security::SecureRandom*> const& __get_mRandom() const;

  constexpr void __set_mRandom(::Org::BouncyCastle::Security::SecureRandom* value);

  constexpr ::Org::BouncyCastle::Crypto::IEntropySourceProvider*& __get_mEntropySourceProvider();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IEntropySourceProvider*> const& __get_mEntropySourceProvider() const;

  constexpr void __set_mEntropySourceProvider(::Org::BouncyCastle::Crypto::IEntropySourceProvider* value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_mPersonalizationString();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_mPersonalizationString() const;

  constexpr void __set_mPersonalizationString(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr int32_t& __get_mSecurityStrength();

  constexpr int32_t const& __get_mSecurityStrength() const;

  constexpr void __set_mSecurityStrength(int32_t value);

  constexpr int32_t& __get_mEntropyBitsRequired();

  constexpr int32_t const& __get_mEntropyBitsRequired() const;

  constexpr void __set_mEntropyBitsRequired(int32_t value);

  static inline ::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder* New_ctor();

  /// @brief Method .ctor addr 0xece1e8 size 0x64 virtual false final false
  inline void _ctor();

  static inline ::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder* New_ctor(::Org::BouncyCastle::Security::SecureRandom* entropySource, bool predictionResistant);

  /// @brief Method .ctor addr 0xece24c size 0x98 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Security::SecureRandom* entropySource, bool predictionResistant);

  static inline ::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder* New_ctor(::Org::BouncyCastle::Crypto::IEntropySourceProvider* entropySourceProvider);

  /// @brief Method .ctor addr 0xece2e4 size 0x34 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IEntropySourceProvider* entropySourceProvider);

  /// @brief Method SetPersonalizationString addr 0xece318 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder* SetPersonalizationString(::ArrayW<uint8_t, ::Array<uint8_t>*> personalizationString);

  /// @brief Method SetSecurityStrength addr 0xece320 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder* SetSecurityStrength(int32_t securityStrength);

  /// @brief Method SetEntropyBitsRequired addr 0xece328 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder* SetEntropyBitsRequired(int32_t entropyBitsRequired);

  /// @brief Method BuildHash addr 0xece330 size 0x158 virtual false final false
  inline ::Org::BouncyCastle::Crypto::Prng::SP800SecureRandom* BuildHash(::Org::BouncyCastle::Crypto::IDigest* digest, ::ArrayW<uint8_t, ::Array<uint8_t>*> nonce, bool predictionResistant);

  /// @brief Method BuildCtr addr 0xece4cc size 0x168 virtual false final false
  inline ::Org::BouncyCastle::Crypto::Prng::SP800SecureRandom* BuildCtr(::Org::BouncyCastle::Crypto::IBlockCipher* cipher, int32_t keySizeInBits, ::ArrayW<uint8_t, ::Array<uint8_t>*> nonce,
                                                                        bool predictionResistant);

  /// @brief Method BuildHMac addr 0xece688 size 0x158 virtual false final false
  inline ::Org::BouncyCastle::Crypto::Prng::SP800SecureRandom* BuildHMac(::Org::BouncyCastle::Crypto::IMac* hMac, ::ArrayW<uint8_t, ::Array<uint8_t>*> nonce, bool predictionResistant);

  // Ctor Parameters [CppParam { name: "", ty: "SP800SecureRandomBuilder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SP800SecureRandomBuilder(SP800SecureRandomBuilder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SP800SecureRandomBuilder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SP800SecureRandomBuilder(SP800SecureRandomBuilder const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SP800SecureRandomBuilder();

public:
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
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder, 0x30>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder, ___mRandom) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder, ___mEntropySourceProvider) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder, ___mPersonalizationString) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder, ___mSecurityStrength) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder, ___mEntropyBitsRequired) == 0x2c, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Prng
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder*, "Org.BouncyCastle.Crypto.Prng", "SP800SecureRandomBuilder");
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Prng::__SP800SecureRandomBuilder__CtrDrbgProvider);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Prng::__SP800SecureRandomBuilder__CtrDrbgProvider*, "Org.BouncyCastle.Crypto.Prng", "SP800SecureRandomBuilder/CtrDrbgProvider");
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Prng::__SP800SecureRandomBuilder__HMacDrbgProvider);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Prng::__SP800SecureRandomBuilder__HMacDrbgProvider*, "Org.BouncyCastle.Crypto.Prng", "SP800SecureRandomBuilder/HMacDrbgProvider");
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Prng::__SP800SecureRandomBuilder__HashDrbgProvider);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Prng::__SP800SecureRandomBuilder__HashDrbgProvider*, "Org.BouncyCastle.Crypto.Prng", "SP800SecureRandomBuilder/HashDrbgProvider");
