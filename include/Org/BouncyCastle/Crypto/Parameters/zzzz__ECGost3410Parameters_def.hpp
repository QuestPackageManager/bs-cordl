#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__ECNamedDomainParameters_def.hpp"
CORDL_MODULE_EXPORT(ECGost3410Parameters)
namespace Org::BouncyCastle::Crypto::Parameters {
class ECNamedDomainParameters;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class ECDomainParameters;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class ECGost3410Parameters;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Parameters::ECGost3410Parameters);
// Type: Org.BouncyCastle.Crypto.Parameters::ECGost3410Parameters
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1034))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1035))
// CS Name: ::Org.BouncyCastle.Crypto.Parameters::ECGost3410Parameters*
class CORDL_TYPE ECGost3410Parameters : public ::Org::BouncyCastle::Crypto::Parameters::ECNamedDomainParameters {
public:
  // Declarations
  /// @brief Field _publicKeyParamSet, offset 0x48, size 0x8
  __declspec(property(get = __get__publicKeyParamSet, put = __set__publicKeyParamSet))::Org::BouncyCastle::Asn1::DerObjectIdentifier* _publicKeyParamSet;

  /// @brief Field _digestParamSet, offset 0x50, size 0x8
  __declspec(property(get = __get__digestParamSet, put = __set__digestParamSet))::Org::BouncyCastle::Asn1::DerObjectIdentifier* _digestParamSet;

  /// @brief Field _encryptionParamSet, offset 0x58, size 0x8
  __declspec(property(get = __get__encryptionParamSet, put = __set__encryptionParamSet))::Org::BouncyCastle::Asn1::DerObjectIdentifier* _encryptionParamSet;

  __declspec(property(get = get_PublicKeyParamSet))::Org::BouncyCastle::Asn1::DerObjectIdentifier* PublicKeyParamSet;

  __declspec(property(get = get_DigestParamSet))::Org::BouncyCastle::Asn1::DerObjectIdentifier* DigestParamSet;

  __declspec(property(get = get_EncryptionParamSet))::Org::BouncyCastle::Asn1::DerObjectIdentifier* EncryptionParamSet;

  constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& __get__publicKeyParamSet();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerObjectIdentifier*> const& __get__publicKeyParamSet() const;

  constexpr void __set__publicKeyParamSet(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& __get__digestParamSet();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerObjectIdentifier*> const& __get__digestParamSet() const;

  constexpr void __set__digestParamSet(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& __get__encryptionParamSet();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerObjectIdentifier*> const& __get__encryptionParamSet() const;

  constexpr void __set__encryptionParamSet(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  /// @brief Method get_PublicKeyParamSet addr 0xf32ed8 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* get_PublicKeyParamSet();

  /// @brief Method get_DigestParamSet addr 0xf32ee0 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* get_DigestParamSet();

  /// @brief Method get_EncryptionParamSet addr 0xf32ee8 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* get_EncryptionParamSet();

  static inline ::Org::BouncyCastle::Crypto::Parameters::ECGost3410Parameters* New_ctor(::Org::BouncyCastle::Crypto::Parameters::ECNamedDomainParameters* dp,
                                                                                        ::Org::BouncyCastle::Asn1::DerObjectIdentifier* publicKeyParamSet,
                                                                                        ::Org::BouncyCastle::Asn1::DerObjectIdentifier* digestParamSet,
                                                                                        ::Org::BouncyCastle::Asn1::DerObjectIdentifier* encryptionParamSet);

  /// @brief Method .ctor addr 0xf32ef0 size 0x80 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Crypto::Parameters::ECNamedDomainParameters* dp, ::Org::BouncyCastle::Asn1::DerObjectIdentifier* publicKeyParamSet,
                    ::Org::BouncyCastle::Asn1::DerObjectIdentifier* digestParamSet, ::Org::BouncyCastle::Asn1::DerObjectIdentifier* encryptionParamSet);

  static inline ::Org::BouncyCastle::Crypto::Parameters::ECGost3410Parameters* New_ctor(::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* dp,
                                                                                        ::Org::BouncyCastle::Asn1::DerObjectIdentifier* publicKeyParamSet,
                                                                                        ::Org::BouncyCastle::Asn1::DerObjectIdentifier* digestParamSet,
                                                                                        ::Org::BouncyCastle::Asn1::DerObjectIdentifier* encryptionParamSet);

  /// @brief Method .ctor addr 0xf32f70 size 0x7c virtual false final false
  inline void _ctor(::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* dp, ::Org::BouncyCastle::Asn1::DerObjectIdentifier* publicKeyParamSet,
                    ::Org::BouncyCastle::Asn1::DerObjectIdentifier* digestParamSet, ::Org::BouncyCastle::Asn1::DerObjectIdentifier* encryptionParamSet);

  // Ctor Parameters [CppParam { name: "", ty: "ECGost3410Parameters", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ECGost3410Parameters(ECGost3410Parameters&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ECGost3410Parameters", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ECGost3410Parameters(ECGost3410Parameters const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ECGost3410Parameters();

public:
  /// @brief Field _publicKeyParamSet, offset: 0x48, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerObjectIdentifier* ____publicKeyParamSet;

  /// @brief Field _digestParamSet, offset: 0x50, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerObjectIdentifier* ____digestParamSet;

  /// @brief Field _encryptionParamSet, offset: 0x58, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerObjectIdentifier* ____encryptionParamSet;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Parameters::ECGost3410Parameters, 0x60>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Parameters::ECGost3410Parameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Parameters::ECGost3410Parameters*, "Org.BouncyCastle.Crypto.Parameters", "ECGost3410Parameters");
