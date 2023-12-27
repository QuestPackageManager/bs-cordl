#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__ECKeyParameters_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ECPublicKeyParameters)
namespace Org::BouncyCastle::Crypto::Parameters {
class ECDomainParameters;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Math::EC {
class ECPoint;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class ECPublicKeyParameters;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters);
// Type: Org.BouncyCastle.Crypto.Parameters::ECPublicKeyParameters
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1037))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1039))
// CS Name: ::Org.BouncyCastle.Crypto.Parameters::ECPublicKeyParameters*
class CORDL_TYPE ECPublicKeyParameters : public ::Org::BouncyCastle::Crypto::Parameters::ECKeyParameters {
public:
  // Declarations
  /// @brief Field q, offset 0x30, size 0x8
  __declspec(property(get = __get_q, put = __set_q))::Org::BouncyCastle::Math::EC::ECPoint* q;

  __declspec(property(get = get_Q))::Org::BouncyCastle::Math::EC::ECPoint* Q;

  constexpr ::Org::BouncyCastle::Math::EC::ECPoint*& __get_q();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::EC::ECPoint*> const& __get_q() const;

  constexpr void __set_q(::Org::BouncyCastle::Math::EC::ECPoint* value);

  static inline ::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* New_ctor(::Org::BouncyCastle::Math::EC::ECPoint* q,
                                                                                         ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* parameters);

  /// @brief Method .ctor addr 0xf33c5c size 0x60 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Math::EC::ECPoint* q, ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* parameters);

  static inline ::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* New_ctor(::Org::BouncyCastle::Math::EC::ECPoint* q, ::Org::BouncyCastle::Asn1::DerObjectIdentifier* publicKeyParamSet);

  /// @brief Method .ctor addr 0xf33d58 size 0xa4 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Math::EC::ECPoint* q, ::Org::BouncyCastle::Asn1::DerObjectIdentifier* publicKeyParamSet);

  static inline ::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* New_ctor(::StringW algorithm, ::Org::BouncyCastle::Math::EC::ECPoint* q,
                                                                                         ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* parameters);

  /// @brief Method .ctor addr 0xf33cbc size 0x9c virtual false final false
  inline void _ctor(::StringW algorithm, ::Org::BouncyCastle::Math::EC::ECPoint* q, ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* parameters);

  static inline ::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* New_ctor(::StringW algorithm, ::Org::BouncyCastle::Math::EC::ECPoint* q,
                                                                                         ::Org::BouncyCastle::Asn1::DerObjectIdentifier* publicKeyParamSet);

  /// @brief Method .ctor addr 0xf33dfc size 0x9c virtual false final false
  inline void _ctor(::StringW algorithm, ::Org::BouncyCastle::Math::EC::ECPoint* q, ::Org::BouncyCastle::Asn1::DerObjectIdentifier* publicKeyParamSet);

  /// @brief Method get_Q addr 0xf33e98 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* get_Q();

  /// @brief Method Equals addr 0xf33ea0 size 0x9c virtual true final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals addr 0xf33f3c size 0x5c virtual false final false
  inline bool Equals(::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* other);

  /// @brief Method GetHashCode addr 0xf33f98 size 0x40 virtual true final false
  inline int32_t GetHashCode();

  // Ctor Parameters [CppParam { name: "", ty: "ECPublicKeyParameters", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ECPublicKeyParameters(ECPublicKeyParameters&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ECPublicKeyParameters", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ECPublicKeyParameters(ECPublicKeyParameters const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ECPublicKeyParameters();

public:
  /// @brief Field q, offset: 0x30, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::EC::ECPoint* ___q;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters, 0x38>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters*, "Org.BouncyCastle.Crypto.Parameters", "ECPublicKeyParameters");
