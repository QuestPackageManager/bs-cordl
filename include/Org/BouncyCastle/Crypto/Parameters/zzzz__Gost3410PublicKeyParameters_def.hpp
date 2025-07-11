#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Parameters/Gost3410PublicKeyParameters.hpp"
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
// Dependencies Org.BouncyCastle.Crypto.Parameters.Gost3410KeyParameters
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Parameters.Gost3410PublicKeyParameters
class CORDL_TYPE Gost3410PublicKeyParameters : public ::Org::BouncyCastle::Crypto::Parameters::Gost3410KeyParameters {
public:
  // Declarations
  __declspec(property(get = get_Y)) ::Org::BouncyCastle::Math::BigInteger* Y;

  /// @brief Field y, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_y, put = __cordl_internal_set_y)) ::Org::BouncyCastle::Math::BigInteger* y;

  static inline ::Org::BouncyCastle::Crypto::Parameters::Gost3410PublicKeyParameters* New_ctor(::Org::BouncyCastle::Math::BigInteger* y,
                                                                                               ::Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters* parameters);

  static inline ::Org::BouncyCastle::Crypto::Parameters::Gost3410PublicKeyParameters* New_ctor(::Org::BouncyCastle::Math::BigInteger* y,
                                                                                               ::Org::BouncyCastle::Asn1::DerObjectIdentifier* publicKeyParamSet);

  constexpr ::Org::BouncyCastle::Math::BigInteger* const& __cordl_internal_get_y() const;

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __cordl_internal_get_y();

  constexpr void __cordl_internal_set_y(::Org::BouncyCastle::Math::BigInteger* value);

  /// @brief Method .ctor, addr 0x23bf2b4, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Math::BigInteger* y, ::Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters* parameters);

  /// @brief Method .ctor, addr 0x23bf370, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Math::BigInteger* y, ::Org::BouncyCastle::Asn1::DerObjectIdentifier* publicKeyParamSet);

  /// @brief Method get_Y, addr 0x23bf434, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_Y();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Gost3410PublicKeyParameters();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Gost3410PublicKeyParameters", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Gost3410PublicKeyParameters(Gost3410PublicKeyParameters&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Gost3410PublicKeyParameters", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Gost3410PublicKeyParameters(Gost3410PublicKeyParameters const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1055 };

  /// @brief Field y, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___y;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::Parameters::Gost3410PublicKeyParameters, ___y) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Parameters::Gost3410PublicKeyParameters, 0x30>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Parameters::Gost3410PublicKeyParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Parameters::Gost3410PublicKeyParameters*, "Org.BouncyCastle.Crypto.Parameters", "Gost3410PublicKeyParameters");
