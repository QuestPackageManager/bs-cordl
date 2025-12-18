#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Ocsp/CertID.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(CertID)
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
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
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
// Dependencies Org.BouncyCastle.Asn1.Asn1Encodable
namespace Org::BouncyCastle::Asn1::Ocsp {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.Ocsp.CertID
class CORDL_TYPE CertID : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_HashAlgorithm)) ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* HashAlgorithm;

  __declspec(property(get = get_IssuerKeyHash)) ::Org::BouncyCastle::Asn1::Asn1OctetString* IssuerKeyHash;

  __declspec(property(get = get_IssuerNameHash)) ::Org::BouncyCastle::Asn1::Asn1OctetString* IssuerNameHash;

  __declspec(property(get = get_SerialNumber)) ::Org::BouncyCastle::Asn1::DerInteger* SerialNumber;

  /// @brief Field hashAlgorithm, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_hashAlgorithm, put = __cordl_internal_set_hashAlgorithm)) ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* hashAlgorithm;

  /// @brief Field issuerKeyHash, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_issuerKeyHash, put = __cordl_internal_set_issuerKeyHash)) ::Org::BouncyCastle::Asn1::Asn1OctetString* issuerKeyHash;

  /// @brief Field issuerNameHash, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_issuerNameHash, put = __cordl_internal_set_issuerNameHash)) ::Org::BouncyCastle::Asn1::Asn1OctetString* issuerNameHash;

  /// @brief Field serialNumber, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_serialNumber, put = __cordl_internal_set_serialNumber)) ::Org::BouncyCastle::Asn1::DerInteger* serialNumber;

  /// @brief Method GetInstance, addr 0x335e52c, size 0x14, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Ocsp::CertID* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool explicitly);

  /// @brief Method GetInstance, addr 0x335e540, size 0x184, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Ocsp::CertID* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Ocsp::CertID* New_ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* hashAlgorithm, ::Org::BouncyCastle::Asn1::Asn1OctetString* issuerNameHash,
                                                                  ::Org::BouncyCastle::Asn1::Asn1OctetString* issuerKeyHash, ::Org::BouncyCastle::Asn1::DerInteger* serialNumber);

  static inline ::Org::BouncyCastle::Asn1::Ocsp::CertID* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method ToAsn1Object, addr 0x335e808, size 0x148, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* const& __cordl_internal_get_hashAlgorithm() const;

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& __cordl_internal_get_hashAlgorithm();

  constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString* const& __cordl_internal_get_issuerKeyHash() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString*& __cordl_internal_get_issuerKeyHash();

  constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString* const& __cordl_internal_get_issuerNameHash() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString*& __cordl_internal_get_issuerNameHash();

  constexpr ::Org::BouncyCastle::Asn1::DerInteger* const& __cordl_internal_get_serialNumber() const;

  constexpr ::Org::BouncyCastle::Asn1::DerInteger*& __cordl_internal_get_serialNumber();

  constexpr void __cordl_internal_set_hashAlgorithm(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value);

  constexpr void __cordl_internal_set_issuerKeyHash(::Org::BouncyCastle::Asn1::Asn1OctetString* value);

  constexpr void __cordl_internal_set_issuerNameHash(::Org::BouncyCastle::Asn1::Asn1OctetString* value);

  constexpr void __cordl_internal_set_serialNumber(::Org::BouncyCastle::Asn1::DerInteger* value);

  /// @brief Method .ctor, addr 0x335e7dc, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* hashAlgorithm, ::Org::BouncyCastle::Asn1::Asn1OctetString* issuerNameHash,
                    ::Org::BouncyCastle::Asn1::Asn1OctetString* issuerKeyHash, ::Org::BouncyCastle::Asn1::DerInteger* serialNumber);

  /// @brief Method .ctor, addr 0x335e6c4, size 0x118, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_HashAlgorithm, addr 0x335e7e8, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_HashAlgorithm();

  /// @brief Method get_IssuerKeyHash, addr 0x335e7f8, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1OctetString* get_IssuerKeyHash();

  /// @brief Method get_IssuerNameHash, addr 0x335e7f0, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1OctetString* get_IssuerNameHash();

  /// @brief Method get_SerialNumber, addr 0x335e800, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerInteger* get_SerialNumber();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CertID();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CertID", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CertID(CertID&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CertID", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CertID(CertID const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 207 };

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
static_assert(offsetof(::Org::BouncyCastle::Asn1::Ocsp::CertID, ___hashAlgorithm) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Ocsp::CertID, ___issuerNameHash) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Ocsp::CertID, ___issuerKeyHash) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Ocsp::CertID, ___serialNumber) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Ocsp::CertID, 0x30>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Ocsp
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Ocsp::CertID);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Ocsp::CertID*, "Org.BouncyCastle.Asn1.Ocsp", "CertID");
