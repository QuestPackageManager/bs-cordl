#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(OtherCertID)
namespace Org::BouncyCastle::Asn1::Esf {
class OtherHash;
}
namespace Org::BouncyCastle::Asn1::X509 {
class IssuerSerial;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Esf {
class OtherCertID;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Esf::OtherCertID);
// Type: Org.BouncyCastle.Asn1.Esf::OtherCertID
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Esf {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(7))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(148))
// CS Name: ::Org.BouncyCastle.Asn1.Esf::OtherCertID*
class CORDL_TYPE OtherCertID : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field otherCertHash, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_otherCertHash, put = __cordl_internal_set_otherCertHash))::Org::BouncyCastle::Asn1::Esf::OtherHash* otherCertHash;

  /// @brief Field issuerSerial, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_issuerSerial, put = __cordl_internal_set_issuerSerial))::Org::BouncyCastle::Asn1::X509::IssuerSerial* issuerSerial;

  __declspec(property(get = get_OtherCertHash))::Org::BouncyCastle::Asn1::Esf::OtherHash* OtherCertHash;

  __declspec(property(get = get_IssuerSerial))::Org::BouncyCastle::Asn1::X509::IssuerSerial* IssuerSerial;

  constexpr ::Org::BouncyCastle::Asn1::Esf::OtherHash*& __cordl_internal_get_otherCertHash();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Esf::OtherHash*> const& __cordl_internal_get_otherCertHash() const;

  constexpr void __cordl_internal_set_otherCertHash(::Org::BouncyCastle::Asn1::Esf::OtherHash* value);

  constexpr ::Org::BouncyCastle::Asn1::X509::IssuerSerial*& __cordl_internal_get_issuerSerial();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::IssuerSerial*> const& __cordl_internal_get_issuerSerial() const;

  constexpr void __cordl_internal_set_issuerSerial(::Org::BouncyCastle::Asn1::X509::IssuerSerial* value);

  /// @brief Method GetInstance, addr 0xeba318, size 0x188, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Esf::OtherCertID* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Esf::OtherCertID* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor, addr 0xebe5c4, size 0x1cc, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  static inline ::Org::BouncyCastle::Asn1::Esf::OtherCertID* New_ctor(::Org::BouncyCastle::Asn1::Esf::OtherHash* otherCertHash);

  /// @brief Method .ctor, addr 0xebe790, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Esf::OtherHash* otherCertHash);

  static inline ::Org::BouncyCastle::Asn1::Esf::OtherCertID* New_ctor(::Org::BouncyCastle::Asn1::Esf::OtherHash* otherCertHash, ::Org::BouncyCastle::Asn1::X509::IssuerSerial* issuerSerial);

  /// @brief Method .ctor, addr 0xebe798, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Esf::OtherHash* otherCertHash, ::Org::BouncyCastle::Asn1::X509::IssuerSerial* issuerSerial);

  /// @brief Method get_OtherCertHash, addr 0xebe814, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Esf::OtherHash* get_OtherCertHash();

  /// @brief Method get_IssuerSerial, addr 0xebe81c, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::IssuerSerial* get_IssuerSerial();

  /// @brief Method ToAsn1Object, addr 0xebe824, size 0x138, virtual true, abstract: false, final false
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
  ::Org::BouncyCastle::Asn1::Esf::OtherHash* ___otherCertHash;

  /// @brief Field issuerSerial, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::IssuerSerial* ___issuerSerial;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Esf::OtherCertID, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Esf::OtherCertID, ___otherCertHash) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Esf::OtherCertID, ___issuerSerial) == 0x18, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::Esf
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Esf::OtherCertID);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Esf::OtherCertID*, "Org.BouncyCastle.Asn1.Esf", "OtherCertID");
