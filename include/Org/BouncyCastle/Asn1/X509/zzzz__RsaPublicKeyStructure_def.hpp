#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/X509/RsaPublicKeyStructure.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(RsaPublicKeyStructure)
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class RsaPublicKeyStructure;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X509::RsaPublicKeyStructure);
// Dependencies Org.BouncyCastle.Asn1.Asn1Encodable
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.X509.RsaPublicKeyStructure
class CORDL_TYPE RsaPublicKeyStructure : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_Modulus)) ::Org::BouncyCastle::Math::BigInteger* Modulus;

  __declspec(property(get = get_PublicExponent)) ::Org::BouncyCastle::Math::BigInteger* PublicExponent;

  /// @brief Field modulus, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_modulus, put = __cordl_internal_set_modulus)) ::Org::BouncyCastle::Math::BigInteger* modulus;

  /// @brief Field publicExponent, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_publicExponent, put = __cordl_internal_set_publicExponent)) ::Org::BouncyCastle::Math::BigInteger* publicExponent;

  /// @brief Method GetInstance, addr 0x260b200, size 0x18, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X509::RsaPublicKeyStructure* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool explicitly);

  /// @brief Method GetInstance, addr 0x260b218, size 0x168, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X509::RsaPublicKeyStructure* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::X509::RsaPublicKeyStructure* New_ctor(::Org::BouncyCastle::Math::BigInteger* modulus, ::Org::BouncyCastle::Math::BigInteger* publicExponent);

  static inline ::Org::BouncyCastle::Asn1::X509::RsaPublicKeyStructure* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method ToAsn1Object, addr 0x260b5dc, size 0x13c, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Math::BigInteger* const& __cordl_internal_get_modulus() const;

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __cordl_internal_get_modulus();

  constexpr ::Org::BouncyCastle::Math::BigInteger* const& __cordl_internal_get_publicExponent() const;

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __cordl_internal_get_publicExponent();

  constexpr void __cordl_internal_set_modulus(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr void __cordl_internal_set_publicExponent(::Org::BouncyCastle::Math::BigInteger* value);

  /// @brief Method .ctor, addr 0x260b4a0, size 0x12c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Math::BigInteger* modulus, ::Org::BouncyCastle::Math::BigInteger* publicExponent);

  /// @brief Method .ctor, addr 0x260b380, size 0x120, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_Modulus, addr 0x260b5cc, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_Modulus();

  /// @brief Method get_PublicExponent, addr 0x260b5d4, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_PublicExponent();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RsaPublicKeyStructure();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RsaPublicKeyStructure", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RsaPublicKeyStructure(RsaPublicKeyStructure&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RsaPublicKeyStructure", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RsaPublicKeyStructure(RsaPublicKeyStructure const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 381 };

  /// @brief Field modulus, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___modulus;

  /// @brief Field publicExponent, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___publicExponent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::RsaPublicKeyStructure, ___modulus) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::RsaPublicKeyStructure, ___publicExponent) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X509::RsaPublicKeyStructure, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::RsaPublicKeyStructure);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::RsaPublicKeyStructure*, "Org.BouncyCastle.Asn1.X509", "RsaPublicKeyStructure");
