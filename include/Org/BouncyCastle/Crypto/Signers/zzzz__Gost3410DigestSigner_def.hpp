#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Gost3410DigestSigner)
namespace Org::BouncyCastle::Crypto {
class ISigner;
}
namespace Org::BouncyCastle::Crypto {
class IDsa;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Signers {
class Gost3410DigestSigner;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Signers::Gost3410DigestSigner);
// Type: Org.BouncyCastle.Crypto.Signers::Gost3410DigestSigner
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 41, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Signers {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1140))
// CS Name: ::Org.BouncyCastle.Crypto.Signers::Gost3410DigestSigner*
class CORDL_TYPE Gost3410DigestSigner : public ::System::Object {
public:
  // Declarations
  /// @brief Field digest, offset 0x10, size 0x8
  __declspec(property(get = __get_digest, put = __set_digest))::Org::BouncyCastle::Crypto::IDigest* digest;

  /// @brief Field dsaSigner, offset 0x18, size 0x8
  __declspec(property(get = __get_dsaSigner, put = __set_dsaSigner))::Org::BouncyCastle::Crypto::IDsa* dsaSigner;

  /// @brief Field size, offset 0x20, size 0x4
  __declspec(property(get = __get_size, put = __set_size)) int32_t size;

  /// @brief Field halfSize, offset 0x24, size 0x4
  __declspec(property(get = __get_halfSize, put = __set_halfSize)) int32_t halfSize;

  /// @brief Field forSigning, offset 0x28, size 0x1
  __declspec(property(get = __get_forSigning, put = __set_forSigning)) bool forSigning;

  __declspec(property(get = get_AlgorithmName))::StringW AlgorithmName;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::ISigner"
  constexpr operator ::Org::BouncyCastle::Crypto::ISigner*() noexcept;

  constexpr ::Org::BouncyCastle::Crypto::IDigest*& __get_digest();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IDigest*> const& __get_digest() const;

  constexpr void __set_digest(::Org::BouncyCastle::Crypto::IDigest* value);

  constexpr ::Org::BouncyCastle::Crypto::IDsa*& __get_dsaSigner();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IDsa*> const& __get_dsaSigner() const;

  constexpr void __set_dsaSigner(::Org::BouncyCastle::Crypto::IDsa* value);

  constexpr int32_t& __get_size();

  constexpr int32_t const& __get_size() const;

  constexpr void __set_size(int32_t value);

  constexpr int32_t& __get_halfSize();

  constexpr int32_t const& __get_halfSize() const;

  constexpr void __set_halfSize(int32_t value);

  constexpr bool& __get_forSigning();

  constexpr bool const& __get_forSigning() const;

  constexpr void __set_forSigning(bool value);

  static inline ::Org::BouncyCastle::Crypto::Signers::Gost3410DigestSigner* New_ctor(::Org::BouncyCastle::Crypto::IDsa* signer, ::Org::BouncyCastle::Crypto::IDigest* digest);

  /// @brief Method .ctor addr 0xed6dcc size 0xcc virtual false final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IDsa* signer, ::Org::BouncyCastle::Crypto::IDigest* digest);

  /// @brief Method get_AlgorithmName addr 0xed6e98 size 0x140 virtual true final false
  inline ::StringW get_AlgorithmName();

  /// @brief Method Init addr 0xed6fd8 size 0x228 virtual true final false
  inline void Init(bool forSigning, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters);

  /// @brief Method Update addr 0xed7200 size 0xac virtual true final false
  inline void Update(uint8_t input);

  /// @brief Method BlockUpdate addr 0xed72ac size 0xc4 virtual true final false
  inline void BlockUpdate(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, int32_t length);

  /// @brief Method GenerateSignature addr 0xed7370 size 0x3b8 virtual true final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GenerateSignature();

  /// @brief Method VerifySignature addr 0xed7728 size 0x364 virtual true final false
  inline bool VerifySignature(::ArrayW<uint8_t, ::Array<uint8_t>*> signature);

  /// @brief Method Reset addr 0xed7a8c size 0xa4 virtual true final false
  inline void Reset();

  // Ctor Parameters [CppParam { name: "", ty: "Gost3410DigestSigner", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Gost3410DigestSigner(Gost3410DigestSigner&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Gost3410DigestSigner", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Gost3410DigestSigner(Gost3410DigestSigner const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Gost3410DigestSigner();

public:
  /// @brief Field digest, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::IDigest* ___digest;

  /// @brief Field dsaSigner, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::IDsa* ___dsaSigner;

  /// @brief Field size, offset: 0x20, size: 0x4, def value: None
  int32_t ___size;

  /// @brief Field halfSize, offset: 0x24, size: 0x4, def value: None
  int32_t ___halfSize;

  /// @brief Field forSigning, offset: 0x28, size: 0x1, def value: None
  bool ___forSigning;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Signers::Gost3410DigestSigner, 0x30>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Signers::Gost3410DigestSigner, ___digest) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Signers::Gost3410DigestSigner, ___dsaSigner) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Signers::Gost3410DigestSigner, ___size) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Signers::Gost3410DigestSigner, ___halfSize) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Signers::Gost3410DigestSigner, ___forSigning) == 0x28, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Signers
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Signers::Gost3410DigestSigner);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Signers::Gost3410DigestSigner*, "Org.BouncyCastle.Crypto.Signers", "Gost3410DigestSigner");
