#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(OtherCertID)
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::Asn1::X509 {
class IssuerSerial;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Ess {
class OtherCertID;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Ess::OtherCertID);
// Type: Org.BouncyCastle.Asn1.Ess::OtherCertID
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Ess {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(164))
// CS Name: ::Org.BouncyCastle.Asn1.Ess::OtherCertID*
class CORDL_TYPE OtherCertID : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field otherCertHash, offset 0x10, size 0x8
  __declspec(property(get = __get_otherCertHash, put = __set_otherCertHash))::Org::BouncyCastle::Asn1::Asn1Encodable* otherCertHash;

  /// @brief Field issuerSerial, offset 0x18, size 0x8
  __declspec(property(get = __get_issuerSerial, put = __set_issuerSerial))::Org::BouncyCastle::Asn1::X509::IssuerSerial* issuerSerial;

  __declspec(property(get = get_AlgorithmHash))::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* AlgorithmHash;

  __declspec(property(get = get_IssuerSerial))::Org::BouncyCastle::Asn1::X509::IssuerSerial* IssuerSerial;

  constexpr ::Org::BouncyCastle::Asn1::Asn1Encodable*& __get_otherCertHash();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Encodable*> const& __get_otherCertHash() const;

  constexpr void __set_otherCertHash(::Org::BouncyCastle::Asn1::Asn1Encodable* value);

  constexpr ::Org::BouncyCastle::Asn1::X509::IssuerSerial*& __get_issuerSerial();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::IssuerSerial*> const& __get_issuerSerial() const;

  constexpr void __set_issuerSerial(::Org::BouncyCastle::Asn1::X509::IssuerSerial* value);

  /// @brief Method GetInstance addr 0xe258a4 size 0x190 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::Ess::OtherCertID* GetInstance(::System::Object* o);

  static inline ::Org::BouncyCastle::Asn1::Ess::OtherCertID* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor addr 0xe25a34 size 0x1f8 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  static inline ::Org::BouncyCastle::Asn1::Ess::OtherCertID* New_ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* algId, ::ArrayW<uint8_t, ::Array<uint8_t>*> digest);

  /// @brief Method .ctor addr 0xe25c2c size 0x84 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* algId, ::ArrayW<uint8_t, ::Array<uint8_t>*> digest);

  static inline ::Org::BouncyCastle::Asn1::Ess::OtherCertID* New_ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* algId, ::ArrayW<uint8_t, ::Array<uint8_t>*> digest,
                                                                      ::Org::BouncyCastle::Asn1::X509::IssuerSerial* issuerSerial);

  /// @brief Method .ctor addr 0xe25cb0 size 0x90 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* algId, ::ArrayW<uint8_t, ::Array<uint8_t>*> digest, ::Org::BouncyCastle::Asn1::X509::IssuerSerial* issuerSerial);

  /// @brief Method get_AlgorithmHash addr 0xe25d40 size 0x104 virtual false final false
  inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_AlgorithmHash();

  /// @brief Method GetCertHash addr 0xe25e44 size 0x11c virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetCertHash();

  /// @brief Method get_IssuerSerial addr 0xe25f60 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::X509::IssuerSerial* get_IssuerSerial();

  /// @brief Method ToAsn1Object addr 0xe25f68 size 0x148 virtual true final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "OtherCertID", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OtherCertID(OtherCertID&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OtherCertID", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OtherCertID(OtherCertID const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OtherCertID();

public:
  /// @brief Field otherCertHash, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Encodable* ___otherCertHash;

  /// @brief Field issuerSerial, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::IssuerSerial* ___issuerSerial;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Ess::OtherCertID, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Ess::OtherCertID, ___otherCertHash) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Ess::OtherCertID, ___issuerSerial) == 0x18, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::Ess
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Ess::OtherCertID);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Ess::OtherCertID*, "Org.BouncyCastle.Asn1.Ess", "OtherCertID");
