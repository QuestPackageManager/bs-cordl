#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(OobCertHash)
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1::Crmf {
class CertId;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class DerBitString;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cmp {
class OobCertHash;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Cmp::OobCertHash);
// Type: Org.BouncyCastle.Asn1.Cmp::OobCertHash
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Cmp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(27))
// CS Name: ::Org.BouncyCastle.Asn1.Cmp::OobCertHash*
class CORDL_TYPE OobCertHash : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field hashAlg, offset 0x10, size 0x8
  __declspec(property(get = __get_hashAlg, put = __set_hashAlg))::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* hashAlg;

  /// @brief Field certId, offset 0x18, size 0x8
  __declspec(property(get = __get_certId, put = __set_certId))::Org::BouncyCastle::Asn1::Crmf::CertId* certId;

  /// @brief Field hashVal, offset 0x20, size 0x8
  __declspec(property(get = __get_hashVal, put = __set_hashVal))::Org::BouncyCastle::Asn1::DerBitString* hashVal;

  __declspec(property(get = get_HashAlg))::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* HashAlg;

  __declspec(property(get = get_CertID))::Org::BouncyCastle::Asn1::Crmf::CertId* CertID;

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& __get_hashAlg();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*> const& __get_hashAlg() const;

  constexpr void __set_hashAlg(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value);

  constexpr ::Org::BouncyCastle::Asn1::Crmf::CertId*& __get_certId();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Crmf::CertId*> const& __get_certId() const;

  constexpr void __set_certId(::Org::BouncyCastle::Asn1::Crmf::CertId* value);

  constexpr ::Org::BouncyCastle::Asn1::DerBitString*& __get_hashVal();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerBitString*> const& __get_hashVal() const;

  constexpr void __set_hashVal(::Org::BouncyCastle::Asn1::DerBitString* value);

  static inline ::Org::BouncyCastle::Asn1::Cmp::OobCertHash* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor addr 0xe6864c size 0x144 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method GetInstance addr 0xe6899c size 0x188 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::Cmp::OobCertHash* GetInstance(::System::Object* obj);

  /// @brief Method get_HashAlg addr 0xe68b24 size 0x8 virtual true final false
  inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_HashAlg();

  /// @brief Method get_CertID addr 0xe68b2c size 0x8 virtual true final false
  inline ::Org::BouncyCastle::Asn1::Crmf::CertId* get_CertID();

  /// @brief Method ToAsn1Object addr 0xe68b34 size 0xd0 virtual true final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "OobCertHash", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OobCertHash(OobCertHash&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OobCertHash", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OobCertHash(OobCertHash const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OobCertHash();

public:
  /// @brief Field hashAlg, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* ___hashAlg;

  /// @brief Field certId, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Crmf::CertId* ___certId;

  /// @brief Field hashVal, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerBitString* ___hashVal;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Cmp::OobCertHash, 0x28>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Cmp
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cmp::OobCertHash);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cmp::OobCertHash*, "Org.BouncyCastle.Asn1.Cmp", "OobCertHash");
