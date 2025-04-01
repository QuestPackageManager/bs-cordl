#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Signers/Iso9796d2Signer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/zzzz__ISignerWithRecovery_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ISigner_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Iso9796d2Signer)
namespace Org::BouncyCastle::Crypto {
class IAsymmetricBlockCipher;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Signers {
class Iso9796d2Signer;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer);
// Dependencies Org.BouncyCastle.Crypto.ISigner, Org.BouncyCastle.Crypto.ISignerWithRecovery, System.Object
namespace Org::BouncyCastle::Crypto::Signers {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Signers.Iso9796d2Signer
class CORDL_TYPE Iso9796d2Signer : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AlgorithmName)) ::StringW AlgorithmName;

  /// @brief Field block, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_block, put = __cordl_internal_set_block)) ::ArrayW<uint8_t, ::Array<uint8_t>*> block;

  /// @brief Field cipher, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_cipher, put = __cordl_internal_set_cipher)) ::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* cipher;

  /// @brief Field digest, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_digest, put = __cordl_internal_set_digest)) ::Org::BouncyCastle::Crypto::IDigest* digest;

  /// @brief Field fullMessage, offset 0x3c, size 0x1
  __declspec(property(get = __cordl_internal_get_fullMessage, put = __cordl_internal_set_fullMessage)) bool fullMessage;

  /// @brief Field keyBits, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_keyBits, put = __cordl_internal_set_keyBits)) int32_t keyBits;

  /// @brief Field mBuf, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_mBuf, put = __cordl_internal_set_mBuf)) ::ArrayW<uint8_t, ::Array<uint8_t>*> mBuf;

  /// @brief Field messageLength, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_messageLength, put = __cordl_internal_set_messageLength)) int32_t messageLength;

  /// @brief Field preBlock, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_preBlock, put = __cordl_internal_set_preBlock)) ::ArrayW<uint8_t, ::Array<uint8_t>*> preBlock;

  /// @brief Field preSig, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_preSig, put = __cordl_internal_set_preSig)) ::ArrayW<uint8_t, ::Array<uint8_t>*> preSig;

  /// @brief Field recoveredMessage, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_recoveredMessage, put = __cordl_internal_set_recoveredMessage)) ::ArrayW<uint8_t, ::Array<uint8_t>*> recoveredMessage;

  /// @brief Field trailer, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_trailer, put = __cordl_internal_set_trailer)) int32_t trailer;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::ISigner"
  constexpr operator ::Org::BouncyCastle::Crypto::ISigner*() noexcept;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::ISignerWithRecovery"
  constexpr operator ::Org::BouncyCastle::Crypto::ISignerWithRecovery*() noexcept;

  /// @brief Method BlockUpdate, addr 0x23d585c, size 0x138, virtual true, abstract: false, final false
  inline void BlockUpdate(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, int32_t length);

  /// @brief Method ClearBlock, addr 0x23d52d4, size 0x24, virtual false, abstract: false, final false
  inline void ClearBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> block);

  /// @brief Method GenerateSignature, addr 0x23d5a74, size 0x3e0, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GenerateSignature();

  /// @brief Method GetRecoveredMessage, addr 0x23d4e38, size 0x8, virtual true, abstract: false, final true
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetRecoveredMessage();

  /// @brief Method HasFullMessage, addr 0x23d661c, size 0x8, virtual true, abstract: false, final false
  inline bool HasFullMessage();

  /// @brief Method Init, addr 0x23d500c, size 0x218, virtual true, abstract: false, final false
  inline void Init(bool forSigning, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters);

  /// @brief Method IsSameAs, addr 0x23d5224, size 0xb0, virtual false, abstract: false, final false
  inline bool IsSameAs(::ArrayW<uint8_t, ::Array<uint8_t>*> a, ::ArrayW<uint8_t, ::Array<uint8_t>*> b);

  static inline ::Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer* New_ctor(::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* cipher, ::Org::BouncyCastle::Crypto::IDigest* digest);

  static inline ::Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer* New_ctor(::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* cipher, ::Org::BouncyCastle::Crypto::IDigest* digest,
                                                                                bool isImplicit);

  /// @brief Method Reset, addr 0x23d5994, size 0xe0, virtual true, abstract: false, final false
  inline void Reset();

  /// @brief Method ReturnFalse, addr 0x23d65f4, size 0x28, virtual false, abstract: false, final false
  inline bool ReturnFalse(::ArrayW<uint8_t, ::Array<uint8_t>*> block);

  /// @brief Method Update, addr 0x23d5774, size 0xe8, virtual true, abstract: false, final false
  inline void Update(uint8_t input);

  /// @brief Method UpdateWithRecoveredMessage, addr 0x23d52f8, size 0x47c, virtual true, abstract: false, final false
  inline void UpdateWithRecoveredMessage(::ArrayW<uint8_t, ::Array<uint8_t>*> signature);

  /// @brief Method VerifySignature, addr 0x23d5e54, size 0x7a0, virtual true, abstract: false, final false
  inline bool VerifySignature(::ArrayW<uint8_t, ::Array<uint8_t>*> signature);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_block() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_block();

  constexpr ::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* const& __cordl_internal_get_cipher() const;

  constexpr ::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*& __cordl_internal_get_cipher();

  constexpr ::Org::BouncyCastle::Crypto::IDigest* const& __cordl_internal_get_digest() const;

  constexpr ::Org::BouncyCastle::Crypto::IDigest*& __cordl_internal_get_digest();

  constexpr bool const& __cordl_internal_get_fullMessage() const;

  constexpr bool& __cordl_internal_get_fullMessage();

  constexpr int32_t const& __cordl_internal_get_keyBits() const;

  constexpr int32_t& __cordl_internal_get_keyBits();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_mBuf() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_mBuf();

  constexpr int32_t const& __cordl_internal_get_messageLength() const;

  constexpr int32_t& __cordl_internal_get_messageLength();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_preBlock() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_preBlock();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_preSig() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_preSig();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_recoveredMessage() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_recoveredMessage();

  constexpr int32_t const& __cordl_internal_get_trailer() const;

  constexpr int32_t& __cordl_internal_get_trailer();

  constexpr void __cordl_internal_set_block(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_cipher(::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* value);

  constexpr void __cordl_internal_set_digest(::Org::BouncyCastle::Crypto::IDigest* value);

  constexpr void __cordl_internal_set_fullMessage(bool value);

  constexpr void __cordl_internal_set_keyBits(int32_t value);

  constexpr void __cordl_internal_set_mBuf(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_messageLength(int32_t value);

  constexpr void __cordl_internal_set_preBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_preSig(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_recoveredMessage(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_trailer(int32_t value);

  /// @brief Method .ctor, addr 0x23d4f44, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* cipher, ::Org::BouncyCastle::Crypto::IDigest* digest);

  /// @brief Method .ctor, addr 0x23d4e40, size 0x104, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* cipher, ::Org::BouncyCastle::Crypto::IDigest* digest, bool isImplicit);

  /// @brief Method get_AlgorithmName, addr 0x23d4f4c, size 0xc0, virtual true, abstract: false, final false
  inline ::StringW get_AlgorithmName();

  /// @brief Convert to "::Org::BouncyCastle::Crypto::ISigner"
  constexpr ::Org::BouncyCastle::Crypto::ISigner* i___Org__BouncyCastle__Crypto__ISigner() noexcept;

  /// @brief Convert to "::Org::BouncyCastle::Crypto::ISignerWithRecovery"
  constexpr ::Org::BouncyCastle::Crypto::ISignerWithRecovery* i___Org__BouncyCastle__Crypto__ISignerWithRecovery() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Iso9796d2Signer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Iso9796d2Signer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Iso9796d2Signer(Iso9796d2Signer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Iso9796d2Signer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Iso9796d2Signer(Iso9796d2Signer const&) = delete;

  /// @brief Field TrailerImplicit offset 0xffffffff size 0x4
  static constexpr int32_t TrailerImplicit{ static_cast<int32_t>(0xbc) };

  /// @brief Field TrailerRipeMD128 offset 0xffffffff size 0x4
  static constexpr int32_t TrailerRipeMD128{ static_cast<int32_t>(0x32cc) };

  /// @brief Field TrailerRipeMD160 offset 0xffffffff size 0x4
  static constexpr int32_t TrailerRipeMD160{ static_cast<int32_t>(0x31cc) };

  /// @brief Field TrailerSha1 offset 0xffffffff size 0x4
  static constexpr int32_t TrailerSha1{ static_cast<int32_t>(0x33cc) };

  /// @brief Field TrailerSha256 offset 0xffffffff size 0x4
  static constexpr int32_t TrailerSha256{ static_cast<int32_t>(0x34cc) };

  /// @brief Field TrailerSha384 offset 0xffffffff size 0x4
  static constexpr int32_t TrailerSha384{ static_cast<int32_t>(0x36cc) };

  /// @brief Field TrailerSha512 offset 0xffffffff size 0x4
  static constexpr int32_t TrailerSha512{ static_cast<int32_t>(0x35cc) };

  /// @brief Field TrailerWhirlpool offset 0xffffffff size 0x4
  static constexpr int32_t TrailerWhirlpool{ static_cast<int32_t>(0x37cc) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1147 };

  /// @brief Field digest, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::IDigest* ___digest;

  /// @brief Field cipher, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* ___cipher;

  /// @brief Field trailer, offset: 0x20, size: 0x4, def value: None
  int32_t ___trailer;

  /// @brief Field keyBits, offset: 0x24, size: 0x4, def value: None
  int32_t ___keyBits;

  /// @brief Field block, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___block;

  /// @brief Field mBuf, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___mBuf;

  /// @brief Field messageLength, offset: 0x38, size: 0x4, def value: None
  int32_t ___messageLength;

  /// @brief Field fullMessage, offset: 0x3c, size: 0x1, def value: None
  bool ___fullMessage;

  /// @brief Field recoveredMessage, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___recoveredMessage;

  /// @brief Field preSig, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___preSig;

  /// @brief Field preBlock, offset: 0x50, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___preBlock;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer, ___digest) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer, ___cipher) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer, ___trailer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer, ___keyBits) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer, ___block) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer, ___mBuf) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer, ___messageLength) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer, ___fullMessage) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer, ___recoveredMessage) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer, ___preSig) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer, ___preBlock) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer, 0x58>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Signers
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer*, "Org.BouncyCastle.Crypto.Signers", "Iso9796d2Signer");
