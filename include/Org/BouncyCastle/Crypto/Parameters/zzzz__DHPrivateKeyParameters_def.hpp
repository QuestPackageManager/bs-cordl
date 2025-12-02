#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Parameters/DHPrivateKeyParameters.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__DHKeyParameters_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DHPrivateKeyParameters)
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
class DHPrivateKeyParameters;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters);
// Dependencies Org.BouncyCastle.Crypto.Parameters.DHKeyParameters
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Parameters.DHPrivateKeyParameters
class CORDL_TYPE DHPrivateKeyParameters : public ::Org::BouncyCastle::Crypto::Parameters::DHKeyParameters {
public:
  // Declarations
  __declspec(property(get = get_X)) ::Org::BouncyCastle::Math::BigInteger* X;

  /// @brief Field x, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_x, put = __cordl_internal_set_x)) ::Org::BouncyCastle::Math::BigInteger* x;

  /// @brief Method Equals, addr 0x32e7f24, size 0xac, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x32e7fd0, size 0x58, virtual false, abstract: false, final false
  inline bool Equals(::Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters* other);

  /// @brief Method GetHashCode, addr 0x32e8028, size 0x40, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters* New_ctor(::Org::BouncyCastle::Math::BigInteger* x, ::Org::BouncyCastle::Crypto::Parameters::DHParameters* parameters);

  static inline ::Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters* New_ctor(::Org::BouncyCastle::Math::BigInteger* x, ::Org::BouncyCastle::Crypto::Parameters::DHParameters* parameters,
                                                                                          ::Org::BouncyCastle::Asn1::DerObjectIdentifier* algorithmOid);

  constexpr ::Org::BouncyCastle::Math::BigInteger* const& __cordl_internal_get_x() const;

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __cordl_internal_get_x();

  constexpr void __cordl_internal_set_x(::Org::BouncyCastle::Math::BigInteger* value);

  /// @brief Method .ctor, addr 0x32e7ee0, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Math::BigInteger* x, ::Org::BouncyCastle::Crypto::Parameters::DHParameters* parameters);

  /// @brief Method .ctor, addr 0x32e7f08, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Math::BigInteger* x, ::Org::BouncyCastle::Crypto::Parameters::DHParameters* parameters, ::Org::BouncyCastle::Asn1::DerObjectIdentifier* algorithmOid);

  /// @brief Method get_X, addr 0x32e7f1c, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_X();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DHPrivateKeyParameters();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DHPrivateKeyParameters", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DHPrivateKeyParameters(DHPrivateKeyParameters&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DHPrivateKeyParameters", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DHPrivateKeyParameters(DHPrivateKeyParameters const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1023 };

  /// @brief Field x, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___x;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters, ___x) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters, 0x30>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters*, "Org.BouncyCastle.Crypto.Parameters", "DHPrivateKeyParameters");
