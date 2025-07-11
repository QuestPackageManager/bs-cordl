#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Parameters/ECPrivateKeyParameters.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__ECKeyParameters_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ECPrivateKeyParameters)
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class ECDomainParameters;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class ECPrivateKeyParameters;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters);
// Dependencies Org.BouncyCastle.Crypto.Parameters.ECKeyParameters
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Parameters.ECPrivateKeyParameters
class CORDL_TYPE ECPrivateKeyParameters : public ::Org::BouncyCastle::Crypto::Parameters::ECKeyParameters {
public:
  // Declarations
  __declspec(property(get = get_D)) ::Org::BouncyCastle::Math::BigInteger* D;

  /// @brief Field d, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_d, put = __cordl_internal_set_d)) ::Org::BouncyCastle::Math::BigInteger* d;

  /// @brief Method Equals, addr 0x23bc890, size 0x9c, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x23bc92c, size 0x58, virtual false, abstract: false, final false
  inline bool Equals(::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* other);

  /// @brief Method GetHashCode, addr 0x23bc984, size 0x40, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* New_ctor(::StringW algorithm, ::Org::BouncyCastle::Math::BigInteger* d,
                                                                                          ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* parameters);

  static inline ::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* New_ctor(::StringW algorithm, ::Org::BouncyCastle::Math::BigInteger* d,
                                                                                          ::Org::BouncyCastle::Asn1::DerObjectIdentifier* publicKeyParamSet);

  static inline ::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* New_ctor(::Org::BouncyCastle::Math::BigInteger* d,
                                                                                          ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* parameters);

  static inline ::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* New_ctor(::Org::BouncyCastle::Math::BigInteger* d, ::Org::BouncyCastle::Asn1::DerObjectIdentifier* publicKeyParamSet);

  constexpr ::Org::BouncyCastle::Math::BigInteger* const& __cordl_internal_get_d() const;

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __cordl_internal_get_d();

  constexpr void __cordl_internal_set_d(::Org::BouncyCastle::Math::BigInteger* value);

  /// @brief Method .ctor, addr 0x23bc6b8, size 0x98, virtual false, abstract: false, final false
  inline void _ctor(::StringW algorithm, ::Org::BouncyCastle::Math::BigInteger* d, ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* parameters);

  /// @brief Method .ctor, addr 0x23bc7f0, size 0x98, virtual false, abstract: false, final false
  inline void _ctor(::StringW algorithm, ::Org::BouncyCastle::Math::BigInteger* d, ::Org::BouncyCastle::Asn1::DerObjectIdentifier* publicKeyParamSet);

  /// @brief Method .ctor, addr 0x23bc658, size 0x60, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Math::BigInteger* d, ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* parameters);

  /// @brief Method .ctor, addr 0x23bc750, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Math::BigInteger* d, ::Org::BouncyCastle::Asn1::DerObjectIdentifier* publicKeyParamSet);

  /// @brief Method get_D, addr 0x23bc888, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_D();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ECPrivateKeyParameters();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ECPrivateKeyParameters", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ECPrivateKeyParameters(ECPrivateKeyParameters&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ECPrivateKeyParameters", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ECPrivateKeyParameters(ECPrivateKeyParameters const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1038 };

  /// @brief Field d, offset: 0x30, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___d;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters, ___d) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters, 0x38>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters*, "Org.BouncyCastle.Crypto.Parameters", "ECPrivateKeyParameters");
