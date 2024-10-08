#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Ess/EssCertID.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EssCertID)
namespace Org::BouncyCastle::Asn1::X509 {
class IssuerSerial;
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
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Ess {
class EssCertID;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Ess::EssCertID);
// Type: Org.BouncyCastle.Asn1.Ess::EssCertID
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Ess {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Asn1.Ess::EssCertID*
class CORDL_TYPE EssCertID : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_IssuerSerial)) ::Org::BouncyCastle::Asn1::X509::IssuerSerial* IssuerSerial;

  /// @brief Field certHash, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_certHash, put = __cordl_internal_set_certHash)) ::Org::BouncyCastle::Asn1::Asn1OctetString* certHash;

  /// @brief Field issuerSerial, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_issuerSerial, put = __cordl_internal_set_issuerSerial)) ::Org::BouncyCastle::Asn1::X509::IssuerSerial* issuerSerial;

  /// @brief Method GetCertHash, addr 0x22e7224, size 0x20, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetCertHash();

  /// @brief Method GetInstance, addr 0x22e6e6c, size 0x180, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Ess::EssCertID* GetInstance(::System::Object* o);

  static inline ::Org::BouncyCastle::Asn1::Ess::EssCertID* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> hash);

  static inline ::Org::BouncyCastle::Asn1::Ess::EssCertID* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> hash, ::Org::BouncyCastle::Asn1::X509::IssuerSerial* issuerSerial);

  static inline ::Org::BouncyCastle::Asn1::Ess::EssCertID* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method ToAsn1Object, addr 0x22e724c, size 0x144, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString*& __cordl_internal_get_certHash();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1OctetString*> const& __cordl_internal_get_certHash() const;

  constexpr ::Org::BouncyCastle::Asn1::X509::IssuerSerial*& __cordl_internal_get_issuerSerial();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::IssuerSerial*> const& __cordl_internal_get_issuerSerial() const;

  constexpr void __cordl_internal_set_certHash(::Org::BouncyCastle::Asn1::Asn1OctetString* value);

  constexpr void __cordl_internal_set_issuerSerial(::Org::BouncyCastle::Asn1::X509::IssuerSerial* value);

  /// @brief Method .ctor, addr 0x22e7138, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> hash);

  /// @brief Method .ctor, addr 0x22e71ac, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> hash, ::Org::BouncyCastle::Asn1::X509::IssuerSerial* issuerSerial);

  /// @brief Method .ctor, addr 0x22e6fec, size 0x14c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_IssuerSerial, addr 0x22e7244, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::IssuerSerial* get_IssuerSerial();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EssCertID();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EssCertID", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EssCertID(EssCertID&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EssCertID", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EssCertID(EssCertID const&) = delete;

  /// @brief Field certHash, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1OctetString* ___certHash;

  /// @brief Field issuerSerial, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::IssuerSerial* ___issuerSerial;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 162 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Ess::EssCertID, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Ess::EssCertID, ___certHash) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Ess::EssCertID, ___issuerSerial) == 0x18, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::Ess
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Ess::EssCertID);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Ess::EssCertID*, "Org.BouncyCastle.Asn1.Ess", "EssCertID");
