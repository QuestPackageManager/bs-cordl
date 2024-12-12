#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Signers/Gost3410DigestSigner.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/zzzz__ISigner_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Gost3410DigestSigner)
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
namespace Org::BouncyCastle::Crypto {
class IDsa;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Signers {
class Gost3410DigestSigner;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Signers::Gost3410DigestSigner);
// Dependencies Org.BouncyCastle.Crypto.ISigner, System.Object
namespace Org::BouncyCastle::Crypto::Signers {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Signers.Gost3410DigestSigner
class CORDL_TYPE Gost3410DigestSigner : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AlgorithmName)) ::StringW AlgorithmName;

  /// @brief Field digest, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_digest, put = __cordl_internal_set_digest)) ::Org::BouncyCastle::Crypto::IDigest* digest;

  /// @brief Field dsaSigner, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_dsaSigner, put = __cordl_internal_set_dsaSigner)) ::Org::BouncyCastle::Crypto::IDsa* dsaSigner;

  /// @brief Field forSigning, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_forSigning, put = __cordl_internal_set_forSigning)) bool forSigning;

  /// @brief Field halfSize, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_halfSize, put = __cordl_internal_set_halfSize)) int32_t halfSize;

  /// @brief Field size, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_size, put = __cordl_internal_set_size)) int32_t size;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::ISigner"
  constexpr operator ::Org::BouncyCastle::Crypto::ISigner*() noexcept;

  /// @brief Method BlockUpdate, addr 0x23d28f8, size 0xc4, virtual true, abstract: false, final false
  inline void BlockUpdate(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, int32_t length);

  /// @brief Method GenerateSignature, addr 0x23d29bc, size 0x3ac, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GenerateSignature();

  /// @brief Method Init, addr 0x23d262c, size 0x220, virtual true, abstract: false, final false
  inline void Init(bool forSigning, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters);

  static inline ::Org::BouncyCastle::Crypto::Signers::Gost3410DigestSigner* New_ctor(::Org::BouncyCastle::Crypto::IDsa* signer, ::Org::BouncyCastle::Crypto::IDigest* digest);

  /// @brief Method Reset, addr 0x23d30ac, size 0xa4, virtual true, abstract: false, final false
  inline void Reset();

  /// @brief Method Update, addr 0x23d284c, size 0xac, virtual true, abstract: false, final false
  inline void Update(uint8_t input);

  /// @brief Method VerifySignature, addr 0x23d2d68, size 0x344, virtual true, abstract: false, final false
  inline bool VerifySignature(::ArrayW<uint8_t, ::Array<uint8_t>*> signature);

  constexpr ::Org::BouncyCastle::Crypto::IDigest* const& __cordl_internal_get_digest() const;

  constexpr ::Org::BouncyCastle::Crypto::IDigest*& __cordl_internal_get_digest();

  constexpr ::Org::BouncyCastle::Crypto::IDsa* const& __cordl_internal_get_dsaSigner() const;

  constexpr ::Org::BouncyCastle::Crypto::IDsa*& __cordl_internal_get_dsaSigner();

  constexpr bool const& __cordl_internal_get_forSigning() const;

  constexpr bool& __cordl_internal_get_forSigning();

  constexpr int32_t const& __cordl_internal_get_halfSize() const;

  constexpr int32_t& __cordl_internal_get_halfSize();

  constexpr int32_t const& __cordl_internal_get_size() const;

  constexpr int32_t& __cordl_internal_get_size();

  constexpr void __cordl_internal_set_digest(::Org::BouncyCastle::Crypto::IDigest* value);

  constexpr void __cordl_internal_set_dsaSigner(::Org::BouncyCastle::Crypto::IDsa* value);

  constexpr void __cordl_internal_set_forSigning(bool value);

  constexpr void __cordl_internal_set_halfSize(int32_t value);

  constexpr void __cordl_internal_set_size(int32_t value);

  /// @brief Method .ctor, addr 0x23d2420, size 0xcc, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IDsa* signer, ::Org::BouncyCastle::Crypto::IDigest* digest);

  /// @brief Method get_AlgorithmName, addr 0x23d24ec, size 0x140, virtual true, abstract: false, final false
  inline ::StringW get_AlgorithmName();

  /// @brief Convert to "::Org::BouncyCastle::Crypto::ISigner"
  constexpr ::Org::BouncyCastle::Crypto::ISigner* i___Org__BouncyCastle__Crypto__ISigner() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Gost3410DigestSigner();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Gost3410DigestSigner", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Gost3410DigestSigner(Gost3410DigestSigner&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Gost3410DigestSigner", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Gost3410DigestSigner(Gost3410DigestSigner const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1140 };

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
static_assert(offsetof(::Org::BouncyCastle::Crypto::Signers::Gost3410DigestSigner, ___digest) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Signers::Gost3410DigestSigner, ___dsaSigner) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Signers::Gost3410DigestSigner, ___size) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Signers::Gost3410DigestSigner, ___halfSize) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Signers::Gost3410DigestSigner, ___forSigning) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Signers::Gost3410DigestSigner, 0x30>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Signers
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Signers::Gost3410DigestSigner);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Signers::Gost3410DigestSigner*, "Org.BouncyCastle.Crypto.Signers", "Gost3410DigestSigner");
