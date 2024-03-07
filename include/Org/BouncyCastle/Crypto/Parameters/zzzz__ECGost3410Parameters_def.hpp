#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__ECNamedDomainParameters_def.hpp"
CORDL_MODULE_EXPORT(ECGost3410Parameters)
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class ECDomainParameters;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class ECNamedDomainParameters;
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
// CS Name: ::Org.BouncyCastle.Crypto.Parameters::ECGost3410Parameters*
class CORDL_TYPE ECGost3410Parameters : public ::Org::BouncyCastle::Crypto::Parameters::ECNamedDomainParameters {
public:
  // Declarations
  __declspec(property(get = get_DigestParamSet))::Org::BouncyCastle::Asn1::DerObjectIdentifier* DigestParamSet;

  __declspec(property(get = get_EncryptionParamSet))::Org::BouncyCastle::Asn1::DerObjectIdentifier* EncryptionParamSet;

  __declspec(property(get = get_PublicKeyParamSet))::Org::BouncyCastle::Asn1::DerObjectIdentifier* PublicKeyParamSet;

  /// @brief Field _digestParamSet, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__digestParamSet, put = __cordl_internal_set__digestParamSet))::Org::BouncyCastle::Asn1::DerObjectIdentifier* _digestParamSet;

  /// @brief Field _encryptionParamSet, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__encryptionParamSet, put = __cordl_internal_set__encryptionParamSet))::Org::BouncyCastle::Asn1::DerObjectIdentifier* _encryptionParamSet;

  /// @brief Field _publicKeyParamSet, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__publicKeyParamSet, put = __cordl_internal_set__publicKeyParamSet))::Org::BouncyCastle::Asn1::DerObjectIdentifier* _publicKeyParamSet;

  static inline ::Org::BouncyCastle::Crypto::Parameters::ECGost3410Parameters* New_ctor(::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* dp,
                                                                                        ::Org::BouncyCastle::Asn1::DerObjectIdentifier* publicKeyParamSet,
                                                                                        ::Org::BouncyCastle::Asn1::DerObjectIdentifier* digestParamSet,
                                                                                        ::Org::BouncyCastle::Asn1::DerObjectIdentifier* encryptionParamSet);

  static inline ::Org::BouncyCastle::Crypto::Parameters::ECGost3410Parameters* New_ctor(::Org::BouncyCastle::Crypto::Parameters::ECNamedDomainParameters* dp,
                                                                                        ::Org::BouncyCastle::Asn1::DerObjectIdentifier* publicKeyParamSet,
                                                                                        ::Org::BouncyCastle::Asn1::DerObjectIdentifier* digestParamSet,
                                                                                        ::Org::BouncyCastle::Asn1::DerObjectIdentifier* encryptionParamSet);

  constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& __cordl_internal_get__digestParamSet();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerObjectIdentifier*> const& __cordl_internal_get__digestParamSet() const;

  constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& __cordl_internal_get__encryptionParamSet();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerObjectIdentifier*> const& __cordl_internal_get__encryptionParamSet() const;

  constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& __cordl_internal_get__publicKeyParamSet();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerObjectIdentifier*> const& __cordl_internal_get__publicKeyParamSet() const;

  constexpr void __cordl_internal_set__digestParamSet(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  constexpr void __cordl_internal_set__encryptionParamSet(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  constexpr void __cordl_internal_set__publicKeyParamSet(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  /// @brief Method .ctor, addr 0xfc44d4, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* dp, ::Org::BouncyCastle::Asn1::DerObjectIdentifier* publicKeyParamSet,
                    ::Org::BouncyCastle::Asn1::DerObjectIdentifier* digestParamSet, ::Org::BouncyCastle::Asn1::DerObjectIdentifier* encryptionParamSet);

  /// @brief Method .ctor, addr 0xfc4454, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::Parameters::ECNamedDomainParameters* dp, ::Org::BouncyCastle::Asn1::DerObjectIdentifier* publicKeyParamSet,
                    ::Org::BouncyCastle::Asn1::DerObjectIdentifier* digestParamSet, ::Org::BouncyCastle::Asn1::DerObjectIdentifier* encryptionParamSet);

  /// @brief Method get_DigestParamSet, addr 0xfc4444, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* get_DigestParamSet();

  /// @brief Method get_EncryptionParamSet, addr 0xfc444c, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* get_EncryptionParamSet();

  /// @brief Method get_PublicKeyParamSet, addr 0xfc443c, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* get_PublicKeyParamSet();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ECGost3410Parameters();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ECGost3410Parameters", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ECGost3410Parameters(ECGost3410Parameters&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ECGost3410Parameters", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ECGost3410Parameters(ECGost3410Parameters const&) = delete;

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

static_assert(offsetof(::Org::BouncyCastle::Crypto::Parameters::ECGost3410Parameters, ____publicKeyParamSet) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Parameters::ECGost3410Parameters, ____digestParamSet) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Parameters::ECGost3410Parameters, ____encryptionParamSet) == 0x58, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Parameters::ECGost3410Parameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Parameters::ECGost3410Parameters*, "Org.BouncyCastle.Crypto.Parameters", "ECGost3410Parameters");
