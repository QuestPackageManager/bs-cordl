#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__ECDomainParameters_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ECNamedDomainParameters)
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class ECDomainParameters;
}
namespace Org::BouncyCastle::Math::EC {
class ECCurve;
}
namespace Org::BouncyCastle::Math::EC {
class ECPoint;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Asn1::X9 {
class X9ECParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class ECNamedDomainParameters;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Parameters::ECNamedDomainParameters);
// Type: Org.BouncyCastle.Crypto.Parameters::ECNamedDomainParameters
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1033))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1034))
// CS Name: ::Org.BouncyCastle.Crypto.Parameters::ECNamedDomainParameters*
class CORDL_TYPE ECNamedDomainParameters : public ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters {
public:
  // Declarations
  /// @brief Field name, offset 0x40, size 0x8
  __declspec(property(get = __get_name, put = __set_name))::Org::BouncyCastle::Asn1::DerObjectIdentifier* name;

  __declspec(property(get = get_Name))::Org::BouncyCastle::Asn1::DerObjectIdentifier* Name;

  constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& __get_name();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerObjectIdentifier*> const& __get_name() const;

  constexpr void __set_name(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  /// @brief Method get_Name addr 0xebdbb4 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* get_Name();

  static inline ::Org::BouncyCastle::Crypto::Parameters::ECNamedDomainParameters* New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* name,
                                                                                           ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* dp);

  /// @brief Method .ctor addr 0xebdbbc size 0x68 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* name, ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* dp);

  static inline ::Org::BouncyCastle::Crypto::Parameters::ECNamedDomainParameters* New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* name, ::Org::BouncyCastle::Asn1::X9::X9ECParameters* x9);

  /// @brief Method .ctor addr 0xebdc5c size 0x28 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* name, ::Org::BouncyCastle::Asn1::X9::X9ECParameters* x9);

  static inline ::Org::BouncyCastle::Crypto::Parameters::ECNamedDomainParameters* New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* name, ::Org::BouncyCastle::Math::EC::ECCurve* curve,
                                                                                           ::Org::BouncyCastle::Math::EC::ECPoint* g, ::Org::BouncyCastle::Math::BigInteger* n);

  /// @brief Method .ctor addr 0xebdc84 size 0x30 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* name, ::Org::BouncyCastle::Math::EC::ECCurve* curve, ::Org::BouncyCastle::Math::EC::ECPoint* g,
                    ::Org::BouncyCastle::Math::BigInteger* n);

  static inline ::Org::BouncyCastle::Crypto::Parameters::ECNamedDomainParameters* New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* name, ::Org::BouncyCastle::Math::EC::ECCurve* curve,
                                                                                           ::Org::BouncyCastle::Math::EC::ECPoint* g, ::Org::BouncyCastle::Math::BigInteger* n,
                                                                                           ::Org::BouncyCastle::Math::BigInteger* h);

  /// @brief Method .ctor addr 0xebdcb4 size 0x38 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* name, ::Org::BouncyCastle::Math::EC::ECCurve* curve, ::Org::BouncyCastle::Math::EC::ECPoint* g,
                    ::Org::BouncyCastle::Math::BigInteger* n, ::Org::BouncyCastle::Math::BigInteger* h);

  static inline ::Org::BouncyCastle::Crypto::Parameters::ECNamedDomainParameters* New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* name, ::Org::BouncyCastle::Math::EC::ECCurve* curve,
                                                                                           ::Org::BouncyCastle::Math::EC::ECPoint* g, ::Org::BouncyCastle::Math::BigInteger* n,
                                                                                           ::Org::BouncyCastle::Math::BigInteger* h, ::ArrayW<uint8_t, ::Array<uint8_t>*> seed);

  /// @brief Method .ctor addr 0xebdc24 size 0x38 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* name, ::Org::BouncyCastle::Math::EC::ECCurve* curve, ::Org::BouncyCastle::Math::EC::ECPoint* g,
                    ::Org::BouncyCastle::Math::BigInteger* n, ::Org::BouncyCastle::Math::BigInteger* h, ::ArrayW<uint8_t, ::Array<uint8_t>*> seed);

  // Ctor Parameters [CppParam { name: "", ty: "ECNamedDomainParameters", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ECNamedDomainParameters(ECNamedDomainParameters&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ECNamedDomainParameters", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ECNamedDomainParameters(ECNamedDomainParameters const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ECNamedDomainParameters();

public:
  /// @brief Field name, offset: 0x40, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerObjectIdentifier* ___name;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Parameters::ECNamedDomainParameters, 0x48>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Parameters::ECNamedDomainParameters, ___name) == 0x40, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Parameters::ECNamedDomainParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Parameters::ECNamedDomainParameters*, "Org.BouncyCastle.Crypto.Parameters", "ECNamedDomainParameters");
