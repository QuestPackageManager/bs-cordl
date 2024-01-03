#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SM2Signer)
namespace Org::BouncyCastle::Crypto::Parameters {
class ECDomainParameters;
}
namespace Org::BouncyCastle::Math::EC::Multiplier {
class ECMultiplier;
}
namespace Org::BouncyCastle::Math::EC {
class ECPoint;
}
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
namespace Org::BouncyCastle::Crypto {
class ISigner;
}
namespace Org::BouncyCastle::Crypto::Signers {
class IDsaEncoding;
}
namespace Org::BouncyCastle::Crypto::Signers {
class IDsaKCalculator;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Math::EC {
class ECFieldElement;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class ECKeyParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Signers {
class SM2Signer;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Signers::SM2Signer);
// Type: Org.BouncyCastle.Crypto.Signers::SM2Signer
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Signers {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1153))
// CS Name: ::Org.BouncyCastle.Crypto.Signers::SM2Signer*
class CORDL_TYPE SM2Signer : public ::System::Object {
public:
  // Declarations
  /// @brief Field kCalculator, offset 0x10, size 0x8
  __declspec(property(get = __get_kCalculator, put = __set_kCalculator))::Org::BouncyCastle::Crypto::Signers::IDsaKCalculator* kCalculator;

  /// @brief Field digest, offset 0x18, size 0x8
  __declspec(property(get = __get_digest, put = __set_digest))::Org::BouncyCastle::Crypto::IDigest* digest;

  /// @brief Field encoding, offset 0x20, size 0x8
  __declspec(property(get = __get_encoding, put = __set_encoding))::Org::BouncyCastle::Crypto::Signers::IDsaEncoding* encoding;

  /// @brief Field ecParams, offset 0x28, size 0x8
  __declspec(property(get = __get_ecParams, put = __set_ecParams))::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* ecParams;

  /// @brief Field pubPoint, offset 0x30, size 0x8
  __declspec(property(get = __get_pubPoint, put = __set_pubPoint))::Org::BouncyCastle::Math::EC::ECPoint* pubPoint;

  /// @brief Field ecKey, offset 0x38, size 0x8
  __declspec(property(get = __get_ecKey, put = __set_ecKey))::Org::BouncyCastle::Crypto::Parameters::ECKeyParameters* ecKey;

  /// @brief Field z, offset 0x40, size 0x8
  __declspec(property(get = __get_z, put = __set_z))::ArrayW<uint8_t, ::Array<uint8_t>*> z;

  __declspec(property(get = get_AlgorithmName))::StringW AlgorithmName;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::ISigner"
  constexpr operator ::Org::BouncyCastle::Crypto::ISigner*() noexcept;

  constexpr ::Org::BouncyCastle::Crypto::Signers::IDsaKCalculator*& __get_kCalculator();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Signers::IDsaKCalculator*> const& __get_kCalculator() const;

  constexpr void __set_kCalculator(::Org::BouncyCastle::Crypto::Signers::IDsaKCalculator* value);

  constexpr ::Org::BouncyCastle::Crypto::IDigest*& __get_digest();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IDigest*> const& __get_digest() const;

  constexpr void __set_digest(::Org::BouncyCastle::Crypto::IDigest* value);

  constexpr ::Org::BouncyCastle::Crypto::Signers::IDsaEncoding*& __get_encoding();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Signers::IDsaEncoding*> const& __get_encoding() const;

  constexpr void __set_encoding(::Org::BouncyCastle::Crypto::Signers::IDsaEncoding* value);

  constexpr ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*& __get_ecParams();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*> const& __get_ecParams() const;

  constexpr void __set_ecParams(::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* value);

  constexpr ::Org::BouncyCastle::Math::EC::ECPoint*& __get_pubPoint();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::EC::ECPoint*> const& __get_pubPoint() const;

  constexpr void __set_pubPoint(::Org::BouncyCastle::Math::EC::ECPoint* value);

  constexpr ::Org::BouncyCastle::Crypto::Parameters::ECKeyParameters*& __get_ecKey();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::ECKeyParameters*> const& __get_ecKey() const;

  constexpr void __set_ecKey(::Org::BouncyCastle::Crypto::Parameters::ECKeyParameters* value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_z();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_z() const;

  constexpr void __set_z(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline ::Org::BouncyCastle::Crypto::Signers::SM2Signer* New_ctor();

  /// @brief Method .ctor, addr 0xf577e0, size 0x98, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Org::BouncyCastle::Crypto::Signers::SM2Signer* New_ctor(::Org::BouncyCastle::Crypto::IDigest* digest);

  /// @brief Method .ctor, addr 0xf578f8, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IDigest* digest);

  static inline ::Org::BouncyCastle::Crypto::Signers::SM2Signer* New_ctor(::Org::BouncyCastle::Crypto::Signers::IDsaEncoding* encoding);

  /// @brief Method .ctor, addr 0xf57968, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::Signers::IDsaEncoding* encoding);

  static inline ::Org::BouncyCastle::Crypto::Signers::SM2Signer* New_ctor(::Org::BouncyCastle::Crypto::Signers::IDsaEncoding* encoding, ::Org::BouncyCastle::Crypto::IDigest* digest);

  /// @brief Method .ctor, addr 0xf57878, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::Signers::IDsaEncoding* encoding, ::Org::BouncyCastle::Crypto::IDigest* digest);

  /// @brief Method get_AlgorithmName, addr 0xf579dc, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_AlgorithmName();

  /// @brief Method Init, addr 0xf57a1c, size 0x654, virtual true, abstract: false, final false
  inline void Init(bool forSigning, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters);

  /// @brief Method Update, addr 0xf581e0, size 0xac, virtual true, abstract: false, final false
  inline void Update(uint8_t b);

  /// @brief Method BlockUpdate, addr 0xf5828c, size 0xc4, virtual true, abstract: false, final false
  inline void BlockUpdate(::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t off, int32_t len);

  /// @brief Method VerifySignature, addr 0xf58350, size 0x184, virtual true, abstract: false, final false
  inline bool VerifySignature(::ArrayW<uint8_t, ::Array<uint8_t>*> signature);

  /// @brief Method Reset, addr 0xf58738, size 0x134, virtual true, abstract: false, final false
  inline void Reset();

  /// @brief Method GenerateSignature, addr 0xf5886c, size 0x4fc, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GenerateSignature();

  /// @brief Method VerifySignature, addr 0xf584d4, size 0x264, virtual false, abstract: false, final false
  inline bool VerifySignature(::Org::BouncyCastle::Math::BigInteger* r, ::Org::BouncyCastle::Math::BigInteger* s);

  /// @brief Method GetZ, addr 0xf58070, size 0x170, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetZ(::ArrayW<uint8_t, ::Array<uint8_t>*> userID);

  /// @brief Method AddUserID, addr 0xf58d68, size 0x188, virtual false, abstract: false, final false
  inline void AddUserID(::Org::BouncyCastle::Crypto::IDigest* digest, ::ArrayW<uint8_t, ::Array<uint8_t>*> userID);

  /// @brief Method AddFieldElement, addr 0xf58ef0, size 0xd4, virtual false, abstract: false, final false
  inline void AddFieldElement(::Org::BouncyCastle::Crypto::IDigest* digest, ::Org::BouncyCastle::Math::EC::ECFieldElement* v);

  /// @brief Method CalculateE, addr 0xf58fc4, size 0x68, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* CalculateE(::Org::BouncyCastle::Math::BigInteger* n, ::ArrayW<uint8_t, ::Array<uint8_t>*> message);

  /// @brief Method CreateBasePointMultiplier, addr 0xf5902c, size 0x5c, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier* CreateBasePointMultiplier();

  // Ctor Parameters [CppParam { name: "", ty: "SM2Signer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SM2Signer(SM2Signer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SM2Signer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SM2Signer(SM2Signer const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SM2Signer();

public:
  /// @brief Field kCalculator, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Signers::IDsaKCalculator* ___kCalculator;

  /// @brief Field digest, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::IDigest* ___digest;

  /// @brief Field encoding, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Signers::IDsaEncoding* ___encoding;

  /// @brief Field ecParams, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* ___ecParams;

  /// @brief Field pubPoint, offset: 0x30, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::EC::ECPoint* ___pubPoint;

  /// @brief Field ecKey, offset: 0x38, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Parameters::ECKeyParameters* ___ecKey;

  /// @brief Field z, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___z;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Signers::SM2Signer, 0x48>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Signers::SM2Signer, ___kCalculator) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Signers::SM2Signer, ___digest) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Signers::SM2Signer, ___encoding) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Signers::SM2Signer, ___ecParams) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Signers::SM2Signer, ___pubPoint) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Signers::SM2Signer, ___ecKey) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Signers::SM2Signer, ___z) == 0x40, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Signers
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Signers::SM2Signer);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Signers::SM2Signer*, "Org.BouncyCastle.Crypto.Signers", "SM2Signer");
