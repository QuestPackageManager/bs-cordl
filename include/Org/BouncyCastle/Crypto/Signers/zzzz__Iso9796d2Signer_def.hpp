#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Iso9796d2Signer)
namespace Org::BouncyCastle::Crypto {
class ISignerWithRecovery;
}
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
namespace Org::BouncyCastle::Crypto {
class IAsymmetricBlockCipher;
}
namespace Org::BouncyCastle::Crypto {
class ISigner;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Signers {
class Iso9796d2Signer;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer);
// Type: Org.BouncyCastle.Crypto.Signers::Iso9796d2Signer
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Signers {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1147))
// CS Name: ::Org.BouncyCastle.Crypto.Signers::Iso9796d2Signer*
class CORDL_TYPE Iso9796d2Signer : public ::System::Object {
public:
  // Declarations
  /// @brief Field digest, offset 0x10, size 0x8
  __declspec(property(get = __get_digest, put = __set_digest))::Org::BouncyCastle::Crypto::IDigest* digest;

  /// @brief Field cipher, offset 0x18, size 0x8
  __declspec(property(get = __get_cipher, put = __set_cipher))::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* cipher;

  /// @brief Field trailer, offset 0x20, size 0x4
  __declspec(property(get = __get_trailer, put = __set_trailer)) int32_t trailer;

  /// @brief Field keyBits, offset 0x24, size 0x4
  __declspec(property(get = __get_keyBits, put = __set_keyBits)) int32_t keyBits;

  /// @brief Field block, offset 0x28, size 0x8
  __declspec(property(get = __get_block, put = __set_block))::ArrayW<uint8_t, ::Array<uint8_t>*> block;

  /// @brief Field mBuf, offset 0x30, size 0x8
  __declspec(property(get = __get_mBuf, put = __set_mBuf))::ArrayW<uint8_t, ::Array<uint8_t>*> mBuf;

  /// @brief Field messageLength, offset 0x38, size 0x4
  __declspec(property(get = __get_messageLength, put = __set_messageLength)) int32_t messageLength;

  /// @brief Field fullMessage, offset 0x3c, size 0x1
  __declspec(property(get = __get_fullMessage, put = __set_fullMessage)) bool fullMessage;

  /// @brief Field recoveredMessage, offset 0x40, size 0x8
  __declspec(property(get = __get_recoveredMessage, put = __set_recoveredMessage))::ArrayW<uint8_t, ::Array<uint8_t>*> recoveredMessage;

  /// @brief Field preSig, offset 0x48, size 0x8
  __declspec(property(get = __get_preSig, put = __set_preSig))::ArrayW<uint8_t, ::Array<uint8_t>*> preSig;

  /// @brief Field preBlock, offset 0x50, size 0x8
  __declspec(property(get = __get_preBlock, put = __set_preBlock))::ArrayW<uint8_t, ::Array<uint8_t>*> preBlock;

  __declspec(property(get = get_AlgorithmName))::StringW AlgorithmName;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::ISignerWithRecovery"
  constexpr operator ::Org::BouncyCastle::Crypto::ISignerWithRecovery*() noexcept;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::ISigner"
  constexpr operator ::Org::BouncyCastle::Crypto::ISigner*() noexcept;

  constexpr ::Org::BouncyCastle::Crypto::IDigest*& __get_digest();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IDigest*> const& __get_digest() const;

  constexpr void __set_digest(::Org::BouncyCastle::Crypto::IDigest* value);

  constexpr ::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*& __get_cipher();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*> const& __get_cipher() const;

  constexpr void __set_cipher(::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* value);

  constexpr int32_t& __get_trailer();

  constexpr int32_t const& __get_trailer() const;

  constexpr void __set_trailer(int32_t value);

  constexpr int32_t& __get_keyBits();

  constexpr int32_t const& __get_keyBits() const;

  constexpr void __set_keyBits(int32_t value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_block();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_block() const;

  constexpr void __set_block(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_mBuf();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_mBuf() const;

  constexpr void __set_mBuf(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr int32_t& __get_messageLength();

  constexpr int32_t const& __get_messageLength() const;

  constexpr void __set_messageLength(int32_t value);

  constexpr bool& __get_fullMessage();

  constexpr bool const& __get_fullMessage() const;

  constexpr void __set_fullMessage(bool value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_recoveredMessage();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_recoveredMessage() const;

  constexpr void __set_recoveredMessage(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_preSig();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_preSig() const;

  constexpr void __set_preSig(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_preBlock();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_preBlock() const;

  constexpr void __set_preBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method GetRecoveredMessage, addr 0xf5114c, size 0x8, virtual true, abstract: false, final true
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetRecoveredMessage();

  static inline ::Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer* New_ctor(::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* cipher, ::Org::BouncyCastle::Crypto::IDigest* digest,
                                                                                bool isImplicit);

  /// @brief Method .ctor, addr 0xf51154, size 0x108, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* cipher, ::Org::BouncyCastle::Crypto::IDigest* digest, bool isImplicit);

  static inline ::Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer* New_ctor(::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* cipher, ::Org::BouncyCastle::Crypto::IDigest* digest);

  /// @brief Method .ctor, addr 0xf5125c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* cipher, ::Org::BouncyCastle::Crypto::IDigest* digest);

  /// @brief Method get_AlgorithmName, addr 0xf51264, size 0xc0, virtual true, abstract: false, final false
  inline ::StringW get_AlgorithmName();

  /// @brief Method Init, addr 0xf51324, size 0x218, virtual true, abstract: false, final false
  inline void Init(bool forSigning, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters);

  /// @brief Method IsSameAs, addr 0xf5153c, size 0xb0, virtual false, abstract: false, final false
  inline bool IsSameAs(::ArrayW<uint8_t, ::Array<uint8_t>*> a, ::ArrayW<uint8_t, ::Array<uint8_t>*> b);

  /// @brief Method ClearBlock, addr 0xf515ec, size 0x24, virtual false, abstract: false, final false
  inline void ClearBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> block);

  /// @brief Method UpdateWithRecoveredMessage, addr 0xf51610, size 0x490, virtual true, abstract: false, final false
  inline void UpdateWithRecoveredMessage(::ArrayW<uint8_t, ::Array<uint8_t>*> signature);

  /// @brief Method Update, addr 0xf51aa0, size 0xe8, virtual true, abstract: false, final false
  inline void Update(uint8_t input);

  /// @brief Method BlockUpdate, addr 0xf51b88, size 0x134, virtual true, abstract: false, final false
  inline void BlockUpdate(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, int32_t length);

  /// @brief Method Reset, addr 0xf51cbc, size 0xe0, virtual true, abstract: false, final false
  inline void Reset();

  /// @brief Method GenerateSignature, addr 0xf51d9c, size 0x3e8, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GenerateSignature();

  /// @brief Method VerifySignature, addr 0xf52184, size 0x7a4, virtual true, abstract: false, final false
  inline bool VerifySignature(::ArrayW<uint8_t, ::Array<uint8_t>*> signature);

  /// @brief Method ReturnFalse, addr 0xf52928, size 0x28, virtual false, abstract: false, final false
  inline bool ReturnFalse(::ArrayW<uint8_t, ::Array<uint8_t>*> block);

  /// @brief Method HasFullMessage, addr 0xf52950, size 0x8, virtual true, abstract: false, final false
  inline bool HasFullMessage();

  // Ctor Parameters [CppParam { name: "", ty: "Iso9796d2Signer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Iso9796d2Signer(Iso9796d2Signer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Iso9796d2Signer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Iso9796d2Signer(Iso9796d2Signer const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Iso9796d2Signer();

public:
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

  /// @brief Field TrailerImplicit offset 0xffffffff size 0x4
  static constexpr int32_t TrailerImplicit{ static_cast<int32_t>(0xbc) };

  /// @brief Field TrailerRipeMD160 offset 0xffffffff size 0x4
  static constexpr int32_t TrailerRipeMD160{ static_cast<int32_t>(0x31cc) };

  /// @brief Field TrailerRipeMD128 offset 0xffffffff size 0x4
  static constexpr int32_t TrailerRipeMD128{ static_cast<int32_t>(0x32cc) };

  /// @brief Field TrailerSha1 offset 0xffffffff size 0x4
  static constexpr int32_t TrailerSha1{ static_cast<int32_t>(0x33cc) };

  /// @brief Field TrailerSha256 offset 0xffffffff size 0x4
  static constexpr int32_t TrailerSha256{ static_cast<int32_t>(0x34cc) };

  /// @brief Field TrailerSha512 offset 0xffffffff size 0x4
  static constexpr int32_t TrailerSha512{ static_cast<int32_t>(0x35cc) };

  /// @brief Field TrailerSha384 offset 0xffffffff size 0x4
  static constexpr int32_t TrailerSha384{ static_cast<int32_t>(0x36cc) };

  /// @brief Field TrailerWhirlpool offset 0xffffffff size 0x4
  static constexpr int32_t TrailerWhirlpool{ static_cast<int32_t>(0x37cc) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer, 0x58>, "Size mismatch!");

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

} // namespace Org::BouncyCastle::Crypto::Signers
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer*, "Org.BouncyCastle.Crypto.Signers", "Iso9796d2Signer");
