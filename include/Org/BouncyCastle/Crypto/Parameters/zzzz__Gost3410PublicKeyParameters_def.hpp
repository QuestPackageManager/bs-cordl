#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__Gost3410KeyParameters_def.hpp"
CORDL_MODULE_EXPORT(Gost3410PublicKeyParameters)
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class Gost3410Parameters;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class Gost3410PublicKeyParameters;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Parameters::Gost3410PublicKeyParameters);
// Type: Org.BouncyCastle.Crypto.Parameters::Gost3410PublicKeyParameters
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(1052))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1055))
// CS Name: ::Org.BouncyCastle.Crypto.Parameters::Gost3410PublicKeyParameters*
class CORDL_TYPE Gost3410PublicKeyParameters : public ::Org::BouncyCastle::Crypto::Parameters::Gost3410KeyParameters {
public:
  // Declarations
  /// @brief Field y, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_y, put = __cordl_internal_set_y))::Org::BouncyCastle::Math::BigInteger* y;

  __declspec(property(get = get_Y))::Org::BouncyCastle::Math::BigInteger* Y;

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __cordl_internal_get_y();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& __cordl_internal_get_y() const;

  constexpr void __cordl_internal_set_y(::Org::BouncyCastle::Math::BigInteger* value);

  static inline ::Org::BouncyCastle::Crypto::Parameters::Gost3410PublicKeyParameters* New_ctor(::Org::BouncyCastle::Math::BigInteger* y,
                                                                                               ::Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters* parameters);

  /// @brief Method .ctor, addr 0xf61474, size 0xc0, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Math::BigInteger* y, ::Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters* parameters);

  static inline ::Org::BouncyCastle::Crypto::Parameters::Gost3410PublicKeyParameters* New_ctor(::Org::BouncyCastle::Math::BigInteger* y,
                                                                                               ::Org::BouncyCastle::Asn1::DerObjectIdentifier* publicKeyParamSet);

  /// @brief Method .ctor, addr 0xf61534, size 0xc8, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Math::BigInteger* y, ::Org::BouncyCastle::Asn1::DerObjectIdentifier* publicKeyParamSet);

  /// @brief Method get_Y, addr 0xf615fc, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_Y();

  // Ctor Parameters [CppParam { name: "", ty: "Gost3410PublicKeyParameters", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Gost3410PublicKeyParameters(Gost3410PublicKeyParameters&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Gost3410PublicKeyParameters", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Gost3410PublicKeyParameters(Gost3410PublicKeyParameters const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Gost3410PublicKeyParameters();

public:
  /// @brief Field y, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___y;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Parameters::Gost3410PublicKeyParameters, 0x30>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Parameters::Gost3410PublicKeyParameters, ___y) == 0x28, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Parameters::Gost3410PublicKeyParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Parameters::Gost3410PublicKeyParameters*, "Org.BouncyCastle.Crypto.Parameters", "Gost3410PublicKeyParameters");
