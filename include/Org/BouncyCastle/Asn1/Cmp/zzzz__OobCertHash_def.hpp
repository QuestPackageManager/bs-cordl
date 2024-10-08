#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Cmp/OobCertHash.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(OobCertHash)
namespace Org::BouncyCastle::Asn1::Crmf {
class CertId;
}
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
class DerBitString;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cmp {
class OobCertHash;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Cmp::OobCertHash);
// Type: Org.BouncyCastle.Asn1.Cmp::OobCertHash
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Cmp {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Asn1.Cmp::OobCertHash*
class CORDL_TYPE OobCertHash : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_CertID)) ::Org::BouncyCastle::Asn1::Crmf::CertId* CertID;

  __declspec(property(get = get_HashAlg)) ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* HashAlg;

  /// @brief Field certId, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_certId, put = __cordl_internal_set_certId)) ::Org::BouncyCastle::Asn1::Crmf::CertId* certId;

  /// @brief Field hashAlg, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_hashAlg, put = __cordl_internal_set_hashAlg)) ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* hashAlg;

  /// @brief Field hashVal, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_hashVal, put = __cordl_internal_set_hashVal)) ::Org::BouncyCastle::Asn1::DerBitString* hashVal;

  /// @brief Method GetInstance, addr 0x22b7760, size 0x17c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Cmp::OobCertHash* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Cmp::OobCertHash* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method ToAsn1Object, addr 0x22b78ec, size 0xcc, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::Crmf::CertId*& __cordl_internal_get_certId();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Crmf::CertId*> const& __cordl_internal_get_certId() const;

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& __cordl_internal_get_hashAlg();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*> const& __cordl_internal_get_hashAlg() const;

  constexpr ::Org::BouncyCastle::Asn1::DerBitString*& __cordl_internal_get_hashVal();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerBitString*> const& __cordl_internal_get_hashVal() const;

  constexpr void __cordl_internal_set_certId(::Org::BouncyCastle::Asn1::Crmf::CertId* value);

  constexpr void __cordl_internal_set_hashAlg(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value);

  constexpr void __cordl_internal_set_hashVal(::Org::BouncyCastle::Asn1::DerBitString* value);

  /// @brief Method .ctor, addr 0x22b7410, size 0x14c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_CertID, addr 0x22b78e4, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Crmf::CertId* get_CertID();

  /// @brief Method get_HashAlg, addr 0x22b78dc, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_HashAlg();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OobCertHash();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OobCertHash", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OobCertHash(OobCertHash&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OobCertHash", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OobCertHash(OobCertHash const&) = delete;

  /// @brief Field hashAlg, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* ___hashAlg;

  /// @brief Field certId, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Crmf::CertId* ___certId;

  /// @brief Field hashVal, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerBitString* ___hashVal;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 27 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Cmp::OobCertHash, 0x28>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cmp::OobCertHash, ___hashAlg) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cmp::OobCertHash, ___certId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cmp::OobCertHash, ___hashVal) == 0x20, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::Cmp
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cmp::OobCertHash);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cmp::OobCertHash*, "Org.BouncyCastle.Asn1.Cmp", "OobCertHash");
