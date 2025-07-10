#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Ocsp/Signature.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Signature)
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1 {
class DerBitString;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Ocsp {
class Signature;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Ocsp::Signature);
// Dependencies Org.BouncyCastle.Asn1.Asn1Encodable
namespace Org::BouncyCastle::Asn1::Ocsp {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.Ocsp.Signature
class CORDL_TYPE Signature : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_Certs)) ::Org::BouncyCastle::Asn1::Asn1Sequence* Certs;

  __declspec(property(get = get_SignatureAlgorithm)) ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* SignatureAlgorithm;

  __declspec(property(get = get_SignatureValue)) ::Org::BouncyCastle::Asn1::DerBitString* SignatureValue;

  /// @brief Field certs, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_certs, put = __cordl_internal_set_certs)) ::Org::BouncyCastle::Asn1::Asn1Sequence* certs;

  /// @brief Field signatureAlgorithm, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_signatureAlgorithm, put = __cordl_internal_set_signatureAlgorithm)) ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* signatureAlgorithm;

  /// @brief Field signatureValue, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_signatureValue, put = __cordl_internal_set_signatureValue)) ::Org::BouncyCastle::Asn1::DerBitString* signatureValue;

  /// @brief Method GetInstance, addr 0x2406cac, size 0x18, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Ocsp::Signature* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool explicitly);

  /// @brief Method GetInstance, addr 0x2409af4, size 0x17c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Ocsp::Signature* GetInstance(::System::Object* obj);

  /// @brief Method GetSignatureOctets, addr 0x2409ea0, size 0x20, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetSignatureOctets();

  static inline ::Org::BouncyCastle::Asn1::Ocsp::Signature* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  static inline ::Org::BouncyCastle::Asn1::Ocsp::Signature* New_ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* signatureAlgorithm, ::Org::BouncyCastle::Asn1::DerBitString* signatureValue);

  static inline ::Org::BouncyCastle::Asn1::Ocsp::Signature* New_ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* signatureAlgorithm, ::Org::BouncyCastle::Asn1::DerBitString* signatureValue,
                                                                     ::Org::BouncyCastle::Asn1::Asn1Sequence* certs);

  /// @brief Method ToAsn1Object, addr 0x2409ec8, size 0x134, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence* const& __cordl_internal_get_certs() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& __cordl_internal_get_certs();

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* const& __cordl_internal_get_signatureAlgorithm() const;

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& __cordl_internal_get_signatureAlgorithm();

  constexpr ::Org::BouncyCastle::Asn1::DerBitString* const& __cordl_internal_get_signatureValue() const;

  constexpr ::Org::BouncyCastle::Asn1::DerBitString*& __cordl_internal_get_signatureValue();

  constexpr void __cordl_internal_set_certs(::Org::BouncyCastle::Asn1::Asn1Sequence* value);

  constexpr void __cordl_internal_set_signatureAlgorithm(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value);

  constexpr void __cordl_internal_set_signatureValue(::Org::BouncyCastle::Asn1::DerBitString* value);

  /// @brief Method .ctor, addr 0x2409c70, size 0x16c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor, addr 0x2409ddc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* signatureAlgorithm, ::Org::BouncyCastle::Asn1::DerBitString* signatureValue);

  /// @brief Method .ctor, addr 0x2409de4, size 0xac, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* signatureAlgorithm, ::Org::BouncyCastle::Asn1::DerBitString* signatureValue, ::Org::BouncyCastle::Asn1::Asn1Sequence* certs);

  /// @brief Method get_Certs, addr 0x2409ec0, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Sequence* get_Certs();

  /// @brief Method get_SignatureAlgorithm, addr 0x2409e90, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_SignatureAlgorithm();

  /// @brief Method get_SignatureValue, addr 0x2409e98, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerBitString* get_SignatureValue();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Signature();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Signature", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Signature(Signature&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Signature", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Signature(Signature const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 221 };

  /// @brief Field signatureAlgorithm, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* ___signatureAlgorithm;

  /// @brief Field signatureValue, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerBitString* ___signatureValue;

  /// @brief Field certs, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Sequence* ___certs;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::Ocsp::Signature, ___signatureAlgorithm) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Ocsp::Signature, ___signatureValue) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Ocsp::Signature, ___certs) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Ocsp::Signature, 0x28>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Ocsp
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Ocsp::Signature);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Ocsp::Signature*, "Org.BouncyCastle.Asn1.Ocsp", "Signature");
