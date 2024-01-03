#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(BiometricData)
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class DerIA5String;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetString;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1::X509::Qualified {
class TypeOfBiometricData;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509::Qualified {
class BiometricData;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X509::Qualified::BiometricData);
// Type: Org.BouncyCastle.Asn1.X509.Qualified::BiometricData
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::X509::Qualified {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(327))
// CS Name: ::Org.BouncyCastle.Asn1.X509.Qualified::BiometricData*
class CORDL_TYPE BiometricData : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field typeOfBiometricData, offset 0x10, size 0x8
  __declspec(property(get = __get_typeOfBiometricData, put = __set_typeOfBiometricData))::Org::BouncyCastle::Asn1::X509::Qualified::TypeOfBiometricData* typeOfBiometricData;

  /// @brief Field hashAlgorithm, offset 0x18, size 0x8
  __declspec(property(get = __get_hashAlgorithm, put = __set_hashAlgorithm))::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* hashAlgorithm;

  /// @brief Field biometricDataHash, offset 0x20, size 0x8
  __declspec(property(get = __get_biometricDataHash, put = __set_biometricDataHash))::Org::BouncyCastle::Asn1::Asn1OctetString* biometricDataHash;

  /// @brief Field sourceDataUri, offset 0x28, size 0x8
  __declspec(property(get = __get_sourceDataUri, put = __set_sourceDataUri))::Org::BouncyCastle::Asn1::DerIA5String* sourceDataUri;

  __declspec(property(get = get_TypeOfBiometricData))::Org::BouncyCastle::Asn1::X509::Qualified::TypeOfBiometricData* TypeOfBiometricData;

  __declspec(property(get = get_HashAlgorithm))::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* HashAlgorithm;

  __declspec(property(get = get_BiometricDataHash))::Org::BouncyCastle::Asn1::Asn1OctetString* BiometricDataHash;

  __declspec(property(get = get_SourceDataUri))::Org::BouncyCastle::Asn1::DerIA5String* SourceDataUri;

  constexpr ::Org::BouncyCastle::Asn1::X509::Qualified::TypeOfBiometricData*& __get_typeOfBiometricData();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::Qualified::TypeOfBiometricData*> const& __get_typeOfBiometricData() const;

  constexpr void __set_typeOfBiometricData(::Org::BouncyCastle::Asn1::X509::Qualified::TypeOfBiometricData* value);

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& __get_hashAlgorithm();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*> const& __get_hashAlgorithm() const;

  constexpr void __set_hashAlgorithm(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value);

  constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString*& __get_biometricDataHash();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1OctetString*> const& __get_biometricDataHash() const;

  constexpr void __set_biometricDataHash(::Org::BouncyCastle::Asn1::Asn1OctetString* value);

  constexpr ::Org::BouncyCastle::Asn1::DerIA5String*& __get_sourceDataUri();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerIA5String*> const& __get_sourceDataUri() const;

  constexpr void __set_sourceDataUri(::Org::BouncyCastle::Asn1::DerIA5String* value);

  /// @brief Method GetInstance, addr 0x10801d0, size 0x168, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X509::Qualified::BiometricData* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::X509::Qualified::BiometricData* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor, addr 0x1080338, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  static inline ::Org::BouncyCastle::Asn1::X509::Qualified::BiometricData* New_ctor(::Org::BouncyCastle::Asn1::X509::Qualified::TypeOfBiometricData* typeOfBiometricData,
                                                                                    ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* hashAlgorithm,
                                                                                    ::Org::BouncyCastle::Asn1::Asn1OctetString* biometricDataHash,
                                                                                    ::Org::BouncyCastle::Asn1::DerIA5String* sourceDataUri);

  /// @brief Method .ctor, addr 0x10805e4, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::Qualified::TypeOfBiometricData* typeOfBiometricData, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* hashAlgorithm,
                    ::Org::BouncyCastle::Asn1::Asn1OctetString* biometricDataHash, ::Org::BouncyCastle::Asn1::DerIA5String* sourceDataUri);

  static inline ::Org::BouncyCastle::Asn1::X509::Qualified::BiometricData* New_ctor(::Org::BouncyCastle::Asn1::X509::Qualified::TypeOfBiometricData* typeOfBiometricData,
                                                                                    ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* hashAlgorithm,
                                                                                    ::Org::BouncyCastle::Asn1::Asn1OctetString* biometricDataHash);

  /// @brief Method .ctor, addr 0x1080624, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::Qualified::TypeOfBiometricData* typeOfBiometricData, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* hashAlgorithm,
                    ::Org::BouncyCastle::Asn1::Asn1OctetString* biometricDataHash);

  /// @brief Method get_TypeOfBiometricData, addr 0x1080660, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::Qualified::TypeOfBiometricData* get_TypeOfBiometricData();

  /// @brief Method get_HashAlgorithm, addr 0x1080668, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_HashAlgorithm();

  /// @brief Method get_BiometricDataHash, addr 0x1080670, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1OctetString* get_BiometricDataHash();

  /// @brief Method get_SourceDataUri, addr 0x1080678, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerIA5String* get_SourceDataUri();

  /// @brief Method ToAsn1Object, addr 0x1080680, size 0x1a0, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "BiometricData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BiometricData(BiometricData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BiometricData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BiometricData(BiometricData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BiometricData();

public:
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
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X509::Qualified::BiometricData, 0x30>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::Qualified::BiometricData, ___typeOfBiometricData) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::Qualified::BiometricData, ___hashAlgorithm) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::Qualified::BiometricData, ___biometricDataHash) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::Qualified::BiometricData, ___sourceDataUri) == 0x28, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::X509::Qualified
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::Qualified::BiometricData);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::Qualified::BiometricData*, "Org.BouncyCastle.Asn1.X509.Qualified", "BiometricData");
