#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Signers/DsaDigestSigner.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DsaDigestSigner)
namespace Org::BouncyCastle::Crypto::Signers {
class IDsaEncoding;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
namespace Org::BouncyCastle::Crypto {
class IDsaExt;
}
namespace Org::BouncyCastle::Crypto {
class IDsa;
}
namespace Org::BouncyCastle::Crypto {
class ISigner;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Signers {
class DsaDigestSigner;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Signers::DsaDigestSigner);
// Dependencies System.Object
namespace Org::BouncyCastle::Crypto::Signers {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Signers.DsaDigestSigner
class CORDL_TYPE DsaDigestSigner : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AlgorithmName)) ::StringW AlgorithmName;

  /// @brief Field digest, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_digest, put = __cordl_internal_set_digest)) ::Org::BouncyCastle::Crypto::IDigest* digest;

  /// @brief Field dsa, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_dsa, put = __cordl_internal_set_dsa)) ::Org::BouncyCastle::Crypto::IDsa* dsa;

  /// @brief Field encoding, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_encoding, put = __cordl_internal_set_encoding)) ::Org::BouncyCastle::Crypto::Signers::IDsaEncoding* encoding;

  /// @brief Field forSigning, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_forSigning, put = __cordl_internal_set_forSigning)) bool forSigning;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::ISigner"
  constexpr operator ::Org::BouncyCastle::Crypto::ISigner*() noexcept;

  /// @brief Method BlockUpdate, addr 0x33269ec, size 0xd0, virtual true, abstract: false, final false
  inline void BlockUpdate(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, int32_t length);

  /// @brief Method GenerateSignature, addr 0x3326abc, size 0x388, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GenerateSignature();

  /// @brief Method GetOrder, addr 0x332726c, size 0x104, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* GetOrder();

  /// @brief Method Init, addr 0x33266fc, size 0x238, virtual true, abstract: false, final false
  inline void Init(bool forSigning, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters);

  static inline ::Org::BouncyCastle::Crypto::Signers::DsaDigestSigner* New_ctor(::Org::BouncyCastle::Crypto::IDsa* dsa, ::Org::BouncyCastle::Crypto::IDigest* digest);

  static inline ::Org::BouncyCastle::Crypto::Signers::DsaDigestSigner* New_ctor(::Org::BouncyCastle::Crypto::IDsaExt* dsa, ::Org::BouncyCastle::Crypto::IDigest* digest,
                                                                                ::Org::BouncyCastle::Crypto::Signers::IDsaEncoding* encoding);

  /// @brief Method Reset, addr 0x33271c4, size 0xa8, virtual true, abstract: false, final false
  inline void Reset();

  /// @brief Method Update, addr 0x3326934, size 0xb8, virtual true, abstract: false, final false
  inline void Update(uint8_t input);

  /// @brief Method VerifySignature, addr 0x3326e44, size 0x380, virtual true, abstract: false, final false
  inline bool VerifySignature(::ArrayW<uint8_t, ::Array<uint8_t>*> signature);

  constexpr ::Org::BouncyCastle::Crypto::IDigest* const& __cordl_internal_get_digest() const;

  constexpr ::Org::BouncyCastle::Crypto::IDigest*& __cordl_internal_get_digest();

  constexpr ::Org::BouncyCastle::Crypto::IDsa* const& __cordl_internal_get_dsa() const;

  constexpr ::Org::BouncyCastle::Crypto::IDsa*& __cordl_internal_get_dsa();

  constexpr ::Org::BouncyCastle::Crypto::Signers::IDsaEncoding* const& __cordl_internal_get_encoding() const;

  constexpr ::Org::BouncyCastle::Crypto::Signers::IDsaEncoding*& __cordl_internal_get_encoding();

  constexpr bool const& __cordl_internal_get_forSigning() const;

  constexpr bool& __cordl_internal_get_forSigning();

  constexpr void __cordl_internal_set_digest(::Org::BouncyCastle::Crypto::IDigest* value);

  constexpr void __cordl_internal_set_dsa(::Org::BouncyCastle::Crypto::IDsa* value);

  constexpr void __cordl_internal_set_encoding(::Org::BouncyCastle::Crypto::Signers::IDsaEncoding* value);

  constexpr void __cordl_internal_set_forSigning(bool value);

  /// @brief Method .ctor, addr 0x332652c, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IDsa* dsa, ::Org::BouncyCastle::Crypto::IDigest* digest);

  /// @brief Method .ctor, addr 0x33265a4, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IDsaExt* dsa, ::Org::BouncyCastle::Crypto::IDigest* digest, ::Org::BouncyCastle::Crypto::Signers::IDsaEncoding* encoding);

  /// @brief Method get_AlgorithmName, addr 0x33265b0, size 0x14c, virtual true, abstract: false, final false
  inline ::StringW get_AlgorithmName();

  /// @brief Convert to "::Org::BouncyCastle::Crypto::ISigner"
  constexpr ::Org::BouncyCastle::Crypto::ISigner* i___Org__BouncyCastle__Crypto__ISigner() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DsaDigestSigner();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DsaDigestSigner", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DsaDigestSigner(DsaDigestSigner&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DsaDigestSigner", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DsaDigestSigner(DsaDigestSigner const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1124 };

  /// @brief Field dsa, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::IDsa* ___dsa;

  /// @brief Field digest, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::IDigest* ___digest;

  /// @brief Field encoding, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Signers::IDsaEncoding* ___encoding;

  /// @brief Field forSigning, offset: 0x28, size: 0x1, def value: None
  bool ___forSigning;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::Signers::DsaDigestSigner, ___dsa) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Signers::DsaDigestSigner, ___digest) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Signers::DsaDigestSigner, ___encoding) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Signers::DsaDigestSigner, ___forSigning) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Signers::DsaDigestSigner, 0x30>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Signers
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Signers::DsaDigestSigner);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Signers::DsaDigestSigner*, "Org.BouncyCastle.Crypto.Signers", "DsaDigestSigner");
