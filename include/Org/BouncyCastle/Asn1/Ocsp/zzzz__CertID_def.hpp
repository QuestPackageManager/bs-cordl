#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(CertID)
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetString;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Ocsp {
class CertID;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Ocsp::CertID);
// Type: Org.BouncyCastle.Asn1.Ocsp::CertID
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Ocsp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(207))
// CS Name: ::Org.BouncyCastle.Asn1.Ocsp::CertID*
class CORDL_TYPE CertID : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field hashAlgorithm, offset 0x10, size 0x8
  __declspec(property(get = __get_hashAlgorithm, put = __set_hashAlgorithm))::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* hashAlgorithm;

  /// @brief Field issuerNameHash, offset 0x18, size 0x8
  __declspec(property(get = __get_issuerNameHash, put = __set_issuerNameHash))::Org::BouncyCastle::Asn1::Asn1OctetString* issuerNameHash;

  /// @brief Field issuerKeyHash, offset 0x20, size 0x8
  __declspec(property(get = __get_issuerKeyHash, put = __set_issuerKeyHash))::Org::BouncyCastle::Asn1::Asn1OctetString* issuerKeyHash;

  /// @brief Field serialNumber, offset 0x28, size 0x8
  __declspec(property(get = __get_serialNumber, put = __set_serialNumber))::Org::BouncyCastle::Asn1::DerInteger* serialNumber;

  __declspec(property(get = get_HashAlgorithm))::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* HashAlgorithm;

  __declspec(property(get = get_IssuerNameHash))::Org::BouncyCastle::Asn1::Asn1OctetString* IssuerNameHash;

  __declspec(property(get = get_IssuerKeyHash))::Org::BouncyCastle::Asn1::Asn1OctetString* IssuerKeyHash;

  __declspec(property(get = get_SerialNumber))::Org::BouncyCastle::Asn1::DerInteger* SerialNumber;

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& __get_hashAlgorithm();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*> const& __get_hashAlgorithm() const;

  constexpr void __set_hashAlgorithm(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value);

  constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString*& __get_issuerNameHash();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1OctetString*> const& __get_issuerNameHash() const;

  constexpr void __set_issuerNameHash(::Org::BouncyCastle::Asn1::Asn1OctetString* value);

  constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString*& __get_issuerKeyHash();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1OctetString*> const& __get_issuerKeyHash() const;

  constexpr void __set_issuerKeyHash(::Org::BouncyCastle::Asn1::Asn1OctetString* value);

  constexpr ::Org::BouncyCastle::Asn1::DerInteger*& __get_serialNumber();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerInteger*> const& __get_serialNumber() const;

  constexpr void __set_serialNumber(::Org::BouncyCastle::Asn1::DerInteger* value);

  /// @brief Method GetInstance addr 0xf7fa98 size 0x18 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::Ocsp::CertID* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool explicitly);

  /// @brief Method GetInstance addr 0xf7fab0 size 0x188 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::Ocsp::CertID* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Ocsp::CertID* New_ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* hashAlgorithm, ::Org::BouncyCastle::Asn1::Asn1OctetString* issuerNameHash,
                                                                  ::Org::BouncyCastle::Asn1::Asn1OctetString* issuerKeyHash, ::Org::BouncyCastle::Asn1::DerInteger* serialNumber);

  /// @brief Method .ctor addr 0xf7fd5c size 0x40 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* hashAlgorithm, ::Org::BouncyCastle::Asn1::Asn1OctetString* issuerNameHash,
                    ::Org::BouncyCastle::Asn1::Asn1OctetString* issuerKeyHash, ::Org::BouncyCastle::Asn1::DerInteger* serialNumber);

  static inline ::Org::BouncyCastle::Asn1::Ocsp::CertID* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor addr 0xf7fc38 size 0x124 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_HashAlgorithm addr 0xf7fd9c size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_HashAlgorithm();

  /// @brief Method get_IssuerNameHash addr 0xf7fda4 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::Asn1OctetString* get_IssuerNameHash();

  /// @brief Method get_IssuerKeyHash addr 0xf7fdac size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::Asn1OctetString* get_IssuerKeyHash();

  /// @brief Method get_SerialNumber addr 0xf7fdb4 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::DerInteger* get_SerialNumber();

  /// @brief Method ToAsn1Object addr 0xf7fdbc size 0x148 virtual true final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "CertID", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CertID(CertID&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CertID", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CertID(CertID const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CertID();

public:
  /// @brief Field hashAlgorithm, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* ___hashAlgorithm;

  /// @brief Field issuerNameHash, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1OctetString* ___issuerNameHash;

  /// @brief Field issuerKeyHash, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1OctetString* ___issuerKeyHash;

  /// @brief Field serialNumber, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerInteger* ___serialNumber;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Ocsp::CertID, 0x30>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Ocsp
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Ocsp::CertID);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Ocsp::CertID*, "Org.BouncyCastle.Asn1.Ocsp", "CertID");
