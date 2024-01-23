#pragma once
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
// Type: Org.BouncyCastle.Asn1.X509::RsaPublicKeyStructure
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(7))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(381))
// CS Name: ::Org.BouncyCastle.Asn1.X509::RsaPublicKeyStructure*
class CORDL_TYPE RsaPublicKeyStructure : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field modulus, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_modulus, put = __cordl_internal_set_modulus))::Org::BouncyCastle::Math::BigInteger* modulus;

  /// @brief Field publicExponent, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_publicExponent, put = __cordl_internal_set_publicExponent))::Org::BouncyCastle::Math::BigInteger* publicExponent;

  __declspec(property(get = get_Modulus))::Org::BouncyCastle::Math::BigInteger* Modulus;

  __declspec(property(get = get_PublicExponent))::Org::BouncyCastle::Math::BigInteger* PublicExponent;

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __cordl_internal_get_modulus();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& __cordl_internal_get_modulus() const;

  constexpr void __cordl_internal_set_modulus(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __cordl_internal_get_publicExponent();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& __cordl_internal_get_publicExponent() const;

  constexpr void __cordl_internal_set_publicExponent(::Org::BouncyCastle::Math::BigInteger* value);

  /// @brief Method GetInstance, addr 0x1196144, size 0x18, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X509::RsaPublicKeyStructure* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool explicitly);

  /// @brief Method GetInstance, addr 0x119615c, size 0x178, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X509::RsaPublicKeyStructure* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::X509::RsaPublicKeyStructure* New_ctor(::Org::BouncyCastle::Math::BigInteger* modulus, ::Org::BouncyCastle::Math::BigInteger* publicExponent);

  /// @brief Method .ctor, addr 0x11963fc, size 0x13c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Math::BigInteger* modulus, ::Org::BouncyCastle::Math::BigInteger* publicExponent);

  static inline ::Org::BouncyCastle::Asn1::X509::RsaPublicKeyStructure* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor, addr 0x11962d4, size 0x128, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_Modulus, addr 0x1196538, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_Modulus();

  /// @brief Method get_PublicExponent, addr 0x1196540, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_PublicExponent();

  /// @brief Method ToAsn1Object, addr 0x1196548, size 0x140, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "RsaPublicKeyStructure", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RsaPublicKeyStructure(RsaPublicKeyStructure&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RsaPublicKeyStructure", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RsaPublicKeyStructure(RsaPublicKeyStructure const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RsaPublicKeyStructure();

public:
  /// @brief Field modulus, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___modulus;

  /// @brief Field publicExponent, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___publicExponent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X509::RsaPublicKeyStructure, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::RsaPublicKeyStructure, ___modulus) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::RsaPublicKeyStructure, ___publicExponent) == 0x18, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::RsaPublicKeyStructure);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::RsaPublicKeyStructure*, "Org.BouncyCastle.Asn1.X509", "RsaPublicKeyStructure");
