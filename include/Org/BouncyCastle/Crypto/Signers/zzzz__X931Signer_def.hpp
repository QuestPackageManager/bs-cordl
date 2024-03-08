#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(X931Signer)
namespace Org::BouncyCastle::Crypto::Parameters {
class RsaKeyParameters;
}
namespace Org::BouncyCastle::Crypto {
class IAsymmetricBlockCipher;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
namespace Org::BouncyCastle::Crypto {
class ISigner;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Signers {
class X931Signer;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Signers::X931Signer);
// Type: Org.BouncyCastle.Crypto.Signers::X931Signer
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Signers {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto.Signers::X931Signer*
class CORDL_TYPE X931Signer : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AlgorithmName))::StringW AlgorithmName;

  /// @brief Field block, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_block, put = __cordl_internal_set_block))::ArrayW<uint8_t, ::Array<uint8_t>*> block;

  /// @brief Field cipher, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_cipher, put = __cordl_internal_set_cipher))::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* cipher;

  /// @brief Field digest, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_digest, put = __cordl_internal_set_digest))::Org::BouncyCastle::Crypto::IDigest* digest;

  /// @brief Field kParam, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_kParam, put = __cordl_internal_set_kParam))::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters* kParam;

  /// @brief Field keyBits, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_keyBits, put = __cordl_internal_set_keyBits)) int32_t keyBits;

  /// @brief Field trailer, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_trailer, put = __cordl_internal_set_trailer)) int32_t trailer;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::ISigner"
  constexpr operator ::Org::BouncyCastle::Crypto::ISigner*() noexcept;

  /// @brief Method BlockUpdate, addr 0xfeb0d0, size 0xc4, virtual true, abstract: false, final false
  inline void BlockUpdate(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t off, int32_t len);

  /// @brief Method ClearBlock, addr 0xfeb000, size 0x24, virtual false, abstract: false, final false
  inline void ClearBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> block);

  /// @brief Method CreateSignatureBlock, addr 0xfeb398, size 0x280, virtual false, abstract: false, final false
  inline void CreateSignatureBlock();

  /// @brief Method GenerateSignature, addr 0xfeb238, size 0x160, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GenerateSignature();

  /// @brief Method Init, addr 0xfeae60, size 0x1a0, virtual true, abstract: false, final false
  inline void Init(bool forSigning, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters);

  static inline ::Org::BouncyCastle::Crypto::Signers::X931Signer* New_ctor(::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* cipher, ::Org::BouncyCastle::Crypto::IDigest* digest);

  static inline ::Org::BouncyCastle::Crypto::Signers::X931Signer* New_ctor(::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* cipher, ::Org::BouncyCastle::Crypto::IDigest* digest, bool isImplicit);

  /// @brief Method Reset, addr 0xfeb194, size 0xa4, virtual true, abstract: false, final false
  inline void Reset();

  /// @brief Method Update, addr 0xfeb024, size 0xac, virtual true, abstract: false, final false
  inline void Update(uint8_t b);

  /// @brief Method VerifySignature, addr 0xfeb618, size 0x24c, virtual true, abstract: false, final false
  inline bool VerifySignature(::ArrayW<uint8_t, ::Array<uint8_t>*> signature);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_block() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_block();

  constexpr ::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*& __cordl_internal_get_cipher();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*> const& __cordl_internal_get_cipher() const;

  constexpr ::Org::BouncyCastle::Crypto::IDigest*& __cordl_internal_get_digest();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IDigest*> const& __cordl_internal_get_digest() const;

  constexpr ::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters*& __cordl_internal_get_kParam();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters*> const& __cordl_internal_get_kParam() const;

  constexpr int32_t const& __cordl_internal_get_keyBits() const;

  constexpr int32_t& __cordl_internal_get_keyBits();

  constexpr int32_t const& __cordl_internal_get_trailer() const;

  constexpr int32_t& __cordl_internal_get_trailer();

  constexpr void __cordl_internal_set_block(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_cipher(::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* value);

  constexpr void __cordl_internal_set_digest(::Org::BouncyCastle::Crypto::IDigest* value);

  constexpr void __cordl_internal_set_kParam(::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters* value);

  constexpr void __cordl_internal_set_keyBits(int32_t value);

  constexpr void __cordl_internal_set_trailer(int32_t value);

  /// @brief Method .ctor, addr 0xfeae58, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* cipher, ::Org::BouncyCastle::Crypto::IDigest* digest);

  /// @brief Method .ctor, addr 0xfeabe8, size 0x110, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* cipher, ::Org::BouncyCastle::Crypto::IDigest* digest, bool isImplicit);

  /// @brief Method get_AlgorithmName, addr 0xfeacf8, size 0x160, virtual true, abstract: false, final false
  inline ::StringW get_AlgorithmName();

  /// @brief Convert to "::Org::BouncyCastle::Crypto::ISigner"
  constexpr ::Org::BouncyCastle::Crypto::ISigner* i___Org__BouncyCastle__Crypto__ISigner() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X931Signer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "X931Signer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X931Signer(X931Signer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X931Signer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X931Signer(X931Signer const&) = delete;

  /// @brief Field digest, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::IDigest* ___digest;

  /// @brief Field cipher, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* ___cipher;

  /// @brief Field kParam, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters* ___kParam;

  /// @brief Field trailer, offset: 0x28, size: 0x4, def value: None
  int32_t ___trailer;

  /// @brief Field keyBits, offset: 0x2c, size: 0x4, def value: None
  int32_t ___keyBits;

  /// @brief Field block, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___block;

  /// @brief Field TRAILER_IMPLICIT offset 0xffffffff size 0x4
  static constexpr int32_t TRAILER_IMPLICIT{ static_cast<int32_t>(0xbc) };

  /// @brief Field TRAILER_RIPEMD128 offset 0xffffffff size 0x4
  static constexpr int32_t TRAILER_RIPEMD128{ static_cast<int32_t>(0x32cc) };

  /// @brief Field TRAILER_RIPEMD160 offset 0xffffffff size 0x4
  static constexpr int32_t TRAILER_RIPEMD160{ static_cast<int32_t>(0x31cc) };

  /// @brief Field TRAILER_SHA1 offset 0xffffffff size 0x4
  static constexpr int32_t TRAILER_SHA1{ static_cast<int32_t>(0x33cc) };

  /// @brief Field TRAILER_SHA224 offset 0xffffffff size 0x4
  static constexpr int32_t TRAILER_SHA224{ static_cast<int32_t>(0x38cc) };

  /// @brief Field TRAILER_SHA256 offset 0xffffffff size 0x4
  static constexpr int32_t TRAILER_SHA256{ static_cast<int32_t>(0x34cc) };

  /// @brief Field TRAILER_SHA384 offset 0xffffffff size 0x4
  static constexpr int32_t TRAILER_SHA384{ static_cast<int32_t>(0x36cc) };

  /// @brief Field TRAILER_SHA512 offset 0xffffffff size 0x4
  static constexpr int32_t TRAILER_SHA512{ static_cast<int32_t>(0x35cc) };

  /// @brief Field TRAILER_WHIRLPOOL offset 0xffffffff size 0x4
  static constexpr int32_t TRAILER_WHIRLPOOL{ static_cast<int32_t>(0x37cc) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Signers::X931Signer, 0x38>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Signers::X931Signer, ___digest) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Signers::X931Signer, ___cipher) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Signers::X931Signer, ___kParam) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Signers::X931Signer, ___trailer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Signers::X931Signer, ___keyBits) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Signers::X931Signer, ___block) == 0x30, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Signers
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Signers::X931Signer);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Signers::X931Signer*, "Org.BouncyCastle.Crypto.Signers", "X931Signer");
