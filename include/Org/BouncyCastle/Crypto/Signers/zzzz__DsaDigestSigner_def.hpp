#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
// Type: Org.BouncyCastle.Crypto.Signers::DsaDigestSigner
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 41, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Signers {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1124))
// CS Name: ::Org.BouncyCastle.Crypto.Signers::DsaDigestSigner*
class CORDL_TYPE DsaDigestSigner : public ::System::Object {
public:
  // Declarations
  /// @brief Field dsa, offset 0x10, size 0x8
  __declspec(property(get = __get_dsa, put = __set_dsa))::Org::BouncyCastle::Crypto::IDsa* dsa;

  /// @brief Field digest, offset 0x18, size 0x8
  __declspec(property(get = __get_digest, put = __set_digest))::Org::BouncyCastle::Crypto::IDigest* digest;

  /// @brief Field encoding, offset 0x20, size 0x8
  __declspec(property(get = __get_encoding, put = __set_encoding))::Org::BouncyCastle::Crypto::Signers::IDsaEncoding* encoding;

  /// @brief Field forSigning, offset 0x28, size 0x1
  __declspec(property(get = __get_forSigning, put = __set_forSigning)) bool forSigning;

  __declspec(property(get = get_AlgorithmName))::StringW AlgorithmName;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::ISigner"
  constexpr operator ::Org::BouncyCastle::Crypto::ISigner*() noexcept;

  /// @brief Convert to "::Org::BouncyCastle::Crypto::ISigner"
  constexpr ::Org::BouncyCastle::Crypto::ISigner* i___Org__BouncyCastle__Crypto__ISigner() noexcept;

  constexpr ::Org::BouncyCastle::Crypto::IDsa*& __get_dsa();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IDsa*> const& __get_dsa() const;

  constexpr void __set_dsa(::Org::BouncyCastle::Crypto::IDsa* value);

  constexpr ::Org::BouncyCastle::Crypto::IDigest*& __get_digest();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IDigest*> const& __get_digest() const;

  constexpr void __set_digest(::Org::BouncyCastle::Crypto::IDigest* value);

  constexpr ::Org::BouncyCastle::Crypto::Signers::IDsaEncoding*& __get_encoding();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Signers::IDsaEncoding*> const& __get_encoding() const;

  constexpr void __set_encoding(::Org::BouncyCastle::Crypto::Signers::IDsaEncoding* value);

  constexpr bool& __get_forSigning();

  constexpr bool const& __get_forSigning() const;

  constexpr void __set_forSigning(bool value);

  static inline ::Org::BouncyCastle::Crypto::Signers::DsaDigestSigner* New_ctor(::Org::BouncyCastle::Crypto::IDsa* dsa, ::Org::BouncyCastle::Crypto::IDigest* digest);

  /// @brief Method .ctor, addr 0xf464c4, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IDsa* dsa, ::Org::BouncyCastle::Crypto::IDigest* digest);

  static inline ::Org::BouncyCastle::Crypto::Signers::DsaDigestSigner* New_ctor(::Org::BouncyCastle::Crypto::IDsaExt* dsa, ::Org::BouncyCastle::Crypto::IDigest* digest,
                                                                                ::Org::BouncyCastle::Crypto::Signers::IDsaEncoding* encoding);

  /// @brief Method .ctor, addr 0xf46544, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IDsaExt* dsa, ::Org::BouncyCastle::Crypto::IDigest* digest, ::Org::BouncyCastle::Crypto::Signers::IDsaEncoding* encoding);

  /// @brief Method get_AlgorithmName, addr 0xf46580, size 0x140, virtual true, abstract: false, final false
  inline ::StringW get_AlgorithmName();

  /// @brief Method Init, addr 0xf466c0, size 0x228, virtual true, abstract: false, final false
  inline void Init(bool forSigning, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters);

  /// @brief Method Update, addr 0xf468e8, size 0xac, virtual true, abstract: false, final false
  inline void Update(uint8_t input);

  /// @brief Method BlockUpdate, addr 0xf46994, size 0xc4, virtual true, abstract: false, final false
  inline void BlockUpdate(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, int32_t length);

  /// @brief Method GenerateSignature, addr 0xf46a58, size 0x37c, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GenerateSignature();

  /// @brief Method VerifySignature, addr 0xf46dd4, size 0x370, virtual true, abstract: false, final false
  inline bool VerifySignature(::ArrayW<uint8_t, ::Array<uint8_t>*> signature);

  /// @brief Method Reset, addr 0xf47144, size 0xa4, virtual true, abstract: false, final false
  inline void Reset();

  /// @brief Method GetOrder, addr 0xf471e8, size 0x100, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* GetOrder();

  // Ctor Parameters [CppParam { name: "", ty: "DsaDigestSigner", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DsaDigestSigner(DsaDigestSigner&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DsaDigestSigner", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DsaDigestSigner(DsaDigestSigner const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DsaDigestSigner();

public:
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
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Signers::DsaDigestSigner, 0x30>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Signers::DsaDigestSigner, ___dsa) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Signers::DsaDigestSigner, ___digest) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Signers::DsaDigestSigner, ___encoding) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Signers::DsaDigestSigner, ___forSigning) == 0x28, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Signers
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Signers::DsaDigestSigner);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Signers::DsaDigestSigner*, "Org.BouncyCastle.Crypto.Signers", "DsaDigestSigner");
