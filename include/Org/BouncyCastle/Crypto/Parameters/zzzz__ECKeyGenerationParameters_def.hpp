#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/zzzz__KeyGenerationParameters_def.hpp"
CORDL_MODULE_EXPORT(ECKeyGenerationParameters)
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class ECDomainParameters;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class ECKeyGenerationParameters;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Parameters::ECKeyGenerationParameters);
// Type: Org.BouncyCastle.Crypto.Parameters::ECKeyGenerationParameters
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1018))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1036))
// CS Name: ::Org.BouncyCastle.Crypto.Parameters::ECKeyGenerationParameters*
class CORDL_TYPE ECKeyGenerationParameters : public ::Org::BouncyCastle::Crypto::KeyGenerationParameters {
public:
  // Declarations
  /// @brief Field domainParams, offset 0x20, size 0x8
  __declspec(property(get = __get_domainParams, put = __set_domainParams))::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* domainParams;

  /// @brief Field publicKeyParamSet, offset 0x28, size 0x8
  __declspec(property(get = __get_publicKeyParamSet, put = __set_publicKeyParamSet))::Org::BouncyCastle::Asn1::DerObjectIdentifier* publicKeyParamSet;

  __declspec(property(get = get_DomainParameters))::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* DomainParameters;

  __declspec(property(get = get_PublicKeyParamSet))::Org::BouncyCastle::Asn1::DerObjectIdentifier* PublicKeyParamSet;

  constexpr ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*& __get_domainParams();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*> const& __get_domainParams() const;

  constexpr void __set_domainParams(::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* value);

  constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& __get_publicKeyParamSet();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerObjectIdentifier*> const& __get_publicKeyParamSet() const;

  constexpr void __set_publicKeyParamSet(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Crypto::Parameters::ECKeyGenerationParameters* New_ctor(::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* domainParameters,
                                                                                             ::Org::BouncyCastle::Security::SecureRandom* random);

  /// @brief Method .ctor addr 0xebde00 size 0x4c virtual false final false
  inline void _ctor(::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* domainParameters, ::Org::BouncyCastle::Security::SecureRandom* random);

  static inline ::Org::BouncyCastle::Crypto::Parameters::ECKeyGenerationParameters* New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* publicKeyParamSet,
                                                                                             ::Org::BouncyCastle::Security::SecureRandom* random);

  /// @brief Method .ctor addr 0xebde4c size 0x7c virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* publicKeyParamSet, ::Org::BouncyCastle::Security::SecureRandom* random);

  /// @brief Method get_DomainParameters addr 0xebdfd8 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* get_DomainParameters();

  /// @brief Method get_PublicKeyParamSet addr 0xebdfe0 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* get_PublicKeyParamSet();

  // Ctor Parameters [CppParam { name: "", ty: "ECKeyGenerationParameters", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ECKeyGenerationParameters(ECKeyGenerationParameters&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ECKeyGenerationParameters", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ECKeyGenerationParameters(ECKeyGenerationParameters const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ECKeyGenerationParameters();

public:
  /// @brief Field domainParams, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* ___domainParams;

  /// @brief Field publicKeyParamSet, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerObjectIdentifier* ___publicKeyParamSet;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Parameters::ECKeyGenerationParameters, 0x30>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Parameters::ECKeyGenerationParameters, ___domainParams) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Parameters::ECKeyGenerationParameters, ___publicKeyParamSet) == 0x28, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Parameters::ECKeyGenerationParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Parameters::ECKeyGenerationParameters*, "Org.BouncyCastle.Crypto.Parameters", "ECKeyGenerationParameters");
