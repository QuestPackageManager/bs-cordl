#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(CertId)
namespace Org::BouncyCastle::Asn1::X509 {
class GeneralName;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Crmf {
class CertId;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Crmf::CertId);
// Type: Org.BouncyCastle.Asn1.Crmf::CertId
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Crmf {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(103))
// CS Name: ::Org.BouncyCastle.Asn1.Crmf::CertId*
class CORDL_TYPE CertId : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field issuer, offset 0x10, size 0x8
  __declspec(property(get = __get_issuer, put = __set_issuer))::Org::BouncyCastle::Asn1::X509::GeneralName* issuer;

  /// @brief Field serialNumber, offset 0x18, size 0x8
  __declspec(property(get = __get_serialNumber, put = __set_serialNumber))::Org::BouncyCastle::Asn1::DerInteger* serialNumber;

  __declspec(property(get = get_Issuer))::Org::BouncyCastle::Asn1::X509::GeneralName* Issuer;

  __declspec(property(get = get_SerialNumber))::Org::BouncyCastle::Asn1::DerInteger* SerialNumber;

  constexpr ::Org::BouncyCastle::Asn1::X509::GeneralName*& __get_issuer();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::GeneralName*> const& __get_issuer() const;

  constexpr void __set_issuer(::Org::BouncyCastle::Asn1::X509::GeneralName* value);

  constexpr ::Org::BouncyCastle::Asn1::DerInteger*& __get_serialNumber();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerInteger*> const& __get_serialNumber() const;

  constexpr void __set_serialNumber(::Org::BouncyCastle::Asn1::DerInteger* value);

  static inline ::Org::BouncyCastle::Asn1::Crmf::CertId* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor, addr 0xe839c0, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method GetInstance, addr 0xe83a28, size 0x188, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Crmf::CertId* GetInstance(::System::Object* obj);

  /// @brief Method GetInstance, addr 0xe83bb0, size 0x18, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Crmf::CertId* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool isExplicit);

  /// @brief Method get_Issuer, addr 0xe83bc8, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::GeneralName* get_Issuer();

  /// @brief Method get_SerialNumber, addr 0xe83bd0, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerInteger* get_SerialNumber();

  /// @brief Method ToAsn1Object, addr 0xe83bd8, size 0xf0, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "CertId", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CertId(CertId&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CertId", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CertId(CertId const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CertId();

public:
  /// @brief Field issuer, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::GeneralName* ___issuer;

  /// @brief Field serialNumber, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerInteger* ___serialNumber;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Crmf::CertId, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Crmf::CertId, ___issuer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Crmf::CertId, ___serialNumber) == 0x18, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::Crmf
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Crmf::CertId);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Crmf::CertId*, "Org.BouncyCastle.Asn1.Crmf", "CertId");
