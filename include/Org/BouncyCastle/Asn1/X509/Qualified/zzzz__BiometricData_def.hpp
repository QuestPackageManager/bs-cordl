#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/X509/Qualified/BiometricData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(BiometricData)
namespace Org::BouncyCastle::Asn1::X509::Qualified {
class TypeOfBiometricData;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetString;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class DerIA5String;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509::Qualified {
class BiometricData;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X509::Qualified::BiometricData);
// Dependencies Org.BouncyCastle.Asn1.Asn1Encodable
namespace Org::BouncyCastle::Asn1::X509::Qualified {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.X509.Qualified.BiometricData
class CORDL_TYPE BiometricData : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_BiometricDataHash)) ::Org::BouncyCastle::Asn1::Asn1OctetString* BiometricDataHash;

  __declspec(property(get = get_HashAlgorithm)) ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* HashAlgorithm;

  __declspec(property(get = get_SourceDataUri)) ::Org::BouncyCastle::Asn1::DerIA5String* SourceDataUri;

  __declspec(property(get = get_TypeOfBiometricData)) ::Org::BouncyCastle::Asn1::X509::Qualified::TypeOfBiometricData* TypeOfBiometricData;

  /// @brief Field biometricDataHash, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_biometricDataHash, put = __cordl_internal_set_biometricDataHash)) ::Org::BouncyCastle::Asn1::Asn1OctetString* biometricDataHash;

  /// @brief Field hashAlgorithm, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_hashAlgorithm, put = __cordl_internal_set_hashAlgorithm)) ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* hashAlgorithm;

  /// @brief Field sourceDataUri, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_sourceDataUri, put = __cordl_internal_set_sourceDataUri)) ::Org::BouncyCastle::Asn1::DerIA5String* sourceDataUri;

  /// @brief Field typeOfBiometricData, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_typeOfBiometricData,
                      put = __cordl_internal_set_typeOfBiometricData)) ::Org::BouncyCastle::Asn1::X509::Qualified::TypeOfBiometricData* typeOfBiometricData;

  /// @brief Method GetInstance, addr 0x3431680, size 0x164, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X509::Qualified::BiometricData* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::X509::Qualified::BiometricData* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  static inline ::Org::BouncyCastle::Asn1::X509::Qualified::BiometricData* New_ctor(::Org::BouncyCastle::Asn1::X509::Qualified::TypeOfBiometricData* typeOfBiometricData,
                                                                                    ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* hashAlgorithm,
                                                                                    ::Org::BouncyCastle::Asn1::Asn1OctetString* biometricDataHash);

  static inline ::Org::BouncyCastle::Asn1::X509::Qualified::BiometricData* New_ctor(::Org::BouncyCastle::Asn1::X509::Qualified::TypeOfBiometricData* typeOfBiometricData,
                                                                                    ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* hashAlgorithm,
                                                                                    ::Org::BouncyCastle::Asn1::Asn1OctetString* biometricDataHash,
                                                                                    ::Org::BouncyCastle::Asn1::DerIA5String* sourceDataUri);

  /// @brief Method ToAsn1Object, addr 0x3431ab0, size 0x1ac, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString* const& __cordl_internal_get_biometricDataHash() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString*& __cordl_internal_get_biometricDataHash();

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* const& __cordl_internal_get_hashAlgorithm() const;

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& __cordl_internal_get_hashAlgorithm();

  constexpr ::Org::BouncyCastle::Asn1::DerIA5String* const& __cordl_internal_get_sourceDataUri() const;

  constexpr ::Org::BouncyCastle::Asn1::DerIA5String*& __cordl_internal_get_sourceDataUri();

  constexpr ::Org::BouncyCastle::Asn1::X509::Qualified::TypeOfBiometricData* const& __cordl_internal_get_typeOfBiometricData() const;

  constexpr ::Org::BouncyCastle::Asn1::X509::Qualified::TypeOfBiometricData*& __cordl_internal_get_typeOfBiometricData();

  constexpr void __cordl_internal_set_biometricDataHash(::Org::BouncyCastle::Asn1::Asn1OctetString* value);

  constexpr void __cordl_internal_set_hashAlgorithm(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value);

  constexpr void __cordl_internal_set_sourceDataUri(::Org::BouncyCastle::Asn1::DerIA5String* value);

  constexpr void __cordl_internal_set_typeOfBiometricData(::Org::BouncyCastle::Asn1::X509::Qualified::TypeOfBiometricData* value);

  /// @brief Method .ctor, addr 0x34317e4, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor, addr 0x3431a84, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::Qualified::TypeOfBiometricData* typeOfBiometricData, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* hashAlgorithm,
                    ::Org::BouncyCastle::Asn1::Asn1OctetString* biometricDataHash);

  /// @brief Method .ctor, addr 0x3431a78, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::Qualified::TypeOfBiometricData* typeOfBiometricData, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* hashAlgorithm,
                    ::Org::BouncyCastle::Asn1::Asn1OctetString* biometricDataHash, ::Org::BouncyCastle::Asn1::DerIA5String* sourceDataUri);

  /// @brief Method get_BiometricDataHash, addr 0x3431aa0, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1OctetString* get_BiometricDataHash();

  /// @brief Method get_HashAlgorithm, addr 0x3431a98, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_HashAlgorithm();

  /// @brief Method get_SourceDataUri, addr 0x3431aa8, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerIA5String* get_SourceDataUri();

  /// @brief Method get_TypeOfBiometricData, addr 0x3431a90, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::Qualified::TypeOfBiometricData* get_TypeOfBiometricData();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BiometricData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BiometricData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BiometricData(BiometricData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BiometricData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BiometricData(BiometricData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 327 };

  /// @brief Field typeOfBiometricData, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::Qualified::TypeOfBiometricData* ___typeOfBiometricData;

  /// @brief Field hashAlgorithm, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* ___hashAlgorithm;

  /// @brief Field biometricDataHash, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1OctetString* ___biometricDataHash;

  /// @brief Field sourceDataUri, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerIA5String* ___sourceDataUri;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::Qualified::BiometricData, ___typeOfBiometricData) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::Qualified::BiometricData, ___hashAlgorithm) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::Qualified::BiometricData, ___biometricDataHash) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::Qualified::BiometricData, ___sourceDataUri) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X509::Qualified::BiometricData, 0x30>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::X509::Qualified
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::Qualified::BiometricData);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::Qualified::BiometricData*, "Org.BouncyCastle.Asn1.X509.Qualified", "BiometricData");
