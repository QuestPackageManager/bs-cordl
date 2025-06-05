#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Parameters/DHPublicKeyParameters.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__DHKeyParameters_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DHPublicKeyParameters)
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class DHParameters;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class DHPublicKeyParameters;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Parameters::DHPublicKeyParameters);
// Dependencies Org.BouncyCastle.Crypto.Parameters.DHKeyParameters
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Parameters.DHPublicKeyParameters
class CORDL_TYPE DHPublicKeyParameters : public ::Org::BouncyCastle::Crypto::Parameters::DHKeyParameters {
public:
  // Declarations
  __declspec(property(get = get_Y)) ::Org::BouncyCastle::Math::BigInteger* Y;

  /// @brief Field y, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_y, put = __cordl_internal_set_y)) ::Org::BouncyCastle::Math::BigInteger* y;

  /// @brief Method Equals, addr 0x23ba26c, size 0x9c, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x23ba308, size 0x58, virtual false, abstract: false, final false
  inline bool Equals(::Org::BouncyCastle::Crypto::Parameters::DHPublicKeyParameters* other);

  /// @brief Method GetHashCode, addr 0x23ba360, size 0x40, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method Legendre, addr 0x23ba02c, size 0x1b4, virtual false, abstract: false, final false
  static inline int32_t Legendre(::Org::BouncyCastle::Math::BigInteger* a, ::Org::BouncyCastle::Math::BigInteger* b);

  static inline ::Org::BouncyCastle::Crypto::Parameters::DHPublicKeyParameters* New_ctor(::Org::BouncyCastle::Math::BigInteger* y, ::Org::BouncyCastle::Crypto::Parameters::DHParameters* parameters);

  static inline ::Org::BouncyCastle::Crypto::Parameters::DHPublicKeyParameters* New_ctor(::Org::BouncyCastle::Math::BigInteger* y, ::Org::BouncyCastle::Crypto::Parameters::DHParameters* parameters,
                                                                                         ::Org::BouncyCastle::Asn1::DerObjectIdentifier* algorithmOid);

  /// @brief Method Validate, addr 0x23b9de0, size 0x24c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::BigInteger* Validate(::Org::BouncyCastle::Math::BigInteger* y, ::Org::BouncyCastle::Crypto::Parameters::DHParameters* dhParams);

  constexpr ::Org::BouncyCastle::Math::BigInteger* const& __cordl_internal_get_y() const;

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __cordl_internal_get_y();

  constexpr void __cordl_internal_set_y(::Org::BouncyCastle::Math::BigInteger* value);

  /// @brief Method .ctor, addr 0x23ba1e0, size 0x38, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Math::BigInteger* y, ::Org::BouncyCastle::Crypto::Parameters::DHParameters* parameters);

  /// @brief Method .ctor, addr 0x23ba218, size 0x4c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Math::BigInteger* y, ::Org::BouncyCastle::Crypto::Parameters::DHParameters* parameters, ::Org::BouncyCastle::Asn1::DerObjectIdentifier* algorithmOid);

  /// @brief Method get_Y, addr 0x23ba264, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_Y();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DHPublicKeyParameters();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DHPublicKeyParameters", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DHPublicKeyParameters(DHPublicKeyParameters&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DHPublicKeyParameters", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DHPublicKeyParameters(DHPublicKeyParameters const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1024 };

  /// @brief Field y, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___y;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::Parameters::DHPublicKeyParameters, ___y) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Parameters::DHPublicKeyParameters, 0x30>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Parameters::DHPublicKeyParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Parameters::DHPublicKeyParameters*, "Org.BouncyCastle.Crypto.Parameters", "DHPublicKeyParameters");
