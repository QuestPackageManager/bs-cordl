#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Signature)
namespace Org::BouncyCastle::Asn1 {
class DerBitString;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Ocsp {
class Signature;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Ocsp::Signature);
// Type: Org.BouncyCastle.Asn1.Ocsp::Signature
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Ocsp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(221))
// CS Name: ::Org.BouncyCastle.Asn1.Ocsp::Signature*
class CORDL_TYPE Signature : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field signatureAlgorithm, offset 0x10, size 0x8
  __declspec(property(get = __get_signatureAlgorithm, put = __set_signatureAlgorithm))::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* signatureAlgorithm;

  /// @brief Field signatureValue, offset 0x18, size 0x8
  __declspec(property(get = __get_signatureValue, put = __set_signatureValue))::Org::BouncyCastle::Asn1::DerBitString* signatureValue;

  /// @brief Field certs, offset 0x20, size 0x8
  __declspec(property(get = __get_certs, put = __set_certs))::Org::BouncyCastle::Asn1::Asn1Sequence* certs;

  __declspec(property(get = get_SignatureAlgorithm))::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* SignatureAlgorithm;

  __declspec(property(get = get_SignatureValue))::Org::BouncyCastle::Asn1::DerBitString* SignatureValue;

  __declspec(property(get = get_Certs))::Org::BouncyCastle::Asn1::Asn1Sequence* Certs;

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& __get_signatureAlgorithm();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*> const& __get_signatureAlgorithm() const;

  constexpr void __set_signatureAlgorithm(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value);

  constexpr ::Org::BouncyCastle::Asn1::DerBitString*& __get_signatureValue();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerBitString*> const& __get_signatureValue() const;

  constexpr void __set_signatureValue(::Org::BouncyCastle::Asn1::DerBitString* value);

  constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& __get_certs();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Sequence*> const& __get_certs() const;

  constexpr void __set_certs(::Org::BouncyCastle::Asn1::Asn1Sequence* value);

  /// @brief Method GetInstance addr 0xf0ad50 size 0x18 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::Ocsp::Signature* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool explicitly);

  /// @brief Method GetInstance addr 0xf0dc90 size 0x188 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::Ocsp::Signature* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Ocsp::Signature* New_ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* signatureAlgorithm, ::Org::BouncyCastle::Asn1::DerBitString* signatureValue);

  /// @brief Method .ctor addr 0xf0df84 size 0x8 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* signatureAlgorithm, ::Org::BouncyCastle::Asn1::DerBitString* signatureValue);

  static inline ::Org::BouncyCastle::Asn1::Ocsp::Signature* New_ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* signatureAlgorithm, ::Org::BouncyCastle::Asn1::DerBitString* signatureValue,
                                                                     ::Org::BouncyCastle::Asn1::Asn1Sequence* certs);

  /// @brief Method .ctor addr 0xf0df8c size 0xb4 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* signatureAlgorithm, ::Org::BouncyCastle::Asn1::DerBitString* signatureValue, ::Org::BouncyCastle::Asn1::Asn1Sequence* certs);

  static inline ::Org::BouncyCastle::Asn1::Ocsp::Signature* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor addr 0xf0de18 size 0x16c virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_SignatureAlgorithm addr 0xf0e040 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_SignatureAlgorithm();

  /// @brief Method get_SignatureValue addr 0xf0e048 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::DerBitString* get_SignatureValue();

  /// @brief Method GetSignatureOctets addr 0xf0e050 size 0x20 virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetSignatureOctets();

  /// @brief Method get_Certs addr 0xf0e070 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::Asn1Sequence* get_Certs();

  /// @brief Method ToAsn1Object addr 0xf0e078 size 0x140 virtual true final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "Signature", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Signature(Signature&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Signature", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Signature(Signature const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Signature();

public:
  /// @brief Field signatureAlgorithm, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* ___signatureAlgorithm;

  /// @brief Field signatureValue, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerBitString* ___signatureValue;

  /// @brief Field certs, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Sequence* ___certs;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Ocsp::Signature, 0x28>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Ocsp::Signature, ___signatureAlgorithm) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Ocsp::Signature, ___signatureValue) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Ocsp::Signature, ___certs) == 0x20, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::Ocsp
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Ocsp::Signature);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Ocsp::Signature*, "Org.BouncyCastle.Asn1.Ocsp", "Signature");
