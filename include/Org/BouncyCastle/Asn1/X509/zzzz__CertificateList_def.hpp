#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CertificateList)
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1::X509 {
class CrlEntry;
}
namespace Org::BouncyCastle::Asn1::X509 {
class TbsCertificateList;
}
namespace Org::BouncyCastle::Asn1::X509 {
class Time;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Name;
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
namespace System::Collections {
class IEnumerable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class CertificateList;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X509::CertificateList);
// Type: Org.BouncyCastle.Asn1.X509::CertificateList
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(7))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(347))
// CS Name: ::Org.BouncyCastle.Asn1.X509::CertificateList*
class CORDL_TYPE CertificateList : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field tbsCertList, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_tbsCertList, put = __cordl_internal_set_tbsCertList))::Org::BouncyCastle::Asn1::X509::TbsCertificateList* tbsCertList;

  /// @brief Field sigAlgID, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_sigAlgID, put = __cordl_internal_set_sigAlgID))::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* sigAlgID;

  /// @brief Field sig, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_sig, put = __cordl_internal_set_sig))::Org::BouncyCastle::Asn1::DerBitString* sig;

  __declspec(property(get = get_TbsCertList))::Org::BouncyCastle::Asn1::X509::TbsCertificateList* TbsCertList;

  __declspec(property(get = get_SignatureAlgorithm))::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* SignatureAlgorithm;

  __declspec(property(get = get_Signature))::Org::BouncyCastle::Asn1::DerBitString* Signature;

  __declspec(property(get = get_Version)) int32_t Version;

  __declspec(property(get = get_Issuer))::Org::BouncyCastle::Asn1::X509::X509Name* Issuer;

  __declspec(property(get = get_ThisUpdate))::Org::BouncyCastle::Asn1::X509::Time* ThisUpdate;

  __declspec(property(get = get_NextUpdate))::Org::BouncyCastle::Asn1::X509::Time* NextUpdate;

  constexpr ::Org::BouncyCastle::Asn1::X509::TbsCertificateList*& __cordl_internal_get_tbsCertList();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::TbsCertificateList*> const& __cordl_internal_get_tbsCertList() const;

  constexpr void __cordl_internal_set_tbsCertList(::Org::BouncyCastle::Asn1::X509::TbsCertificateList* value);

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& __cordl_internal_get_sigAlgID();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*> const& __cordl_internal_get_sigAlgID() const;

  constexpr void __cordl_internal_set_sigAlgID(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value);

  constexpr ::Org::BouncyCastle::Asn1::DerBitString*& __cordl_internal_get_sig();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerBitString*> const& __cordl_internal_get_sig() const;

  constexpr void __cordl_internal_set_sig(::Org::BouncyCastle::Asn1::DerBitString* value);

  /// @brief Method GetInstance, addr 0x10b3b68, size 0x18, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X509::CertificateList* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool explicitly);

  /// @brief Method GetInstance, addr 0x10b3b80, size 0xa4, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X509::CertificateList* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::X509::CertificateList* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor, addr 0x10b3c24, size 0x150, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_TbsCertList, addr 0x10b3d74, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::TbsCertificateList* get_TbsCertList();

  /// @brief Method GetRevokedCertificates, addr 0x10b3d7c, size 0x1c, virtual false, abstract: false, final false
  inline ::ArrayW<::Org::BouncyCastle::Asn1::X509::CrlEntry*, ::Array<::Org::BouncyCastle::Asn1::X509::CrlEntry*>*> GetRevokedCertificates();

  /// @brief Method GetRevokedCertificateEnumeration, addr 0x10b3d98, size 0x1c, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerable* GetRevokedCertificateEnumeration();

  /// @brief Method get_SignatureAlgorithm, addr 0x10b3db4, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_SignatureAlgorithm();

  /// @brief Method get_Signature, addr 0x10b3dbc, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerBitString* get_Signature();

  /// @brief Method GetSignatureOctets, addr 0x10b3dc4, size 0x20, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetSignatureOctets();

  /// @brief Method get_Version, addr 0x10b3de4, size 0x1c, virtual false, abstract: false, final false
  inline int32_t get_Version();

  /// @brief Method get_Issuer, addr 0x10b3e00, size 0x1c, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::X509Name* get_Issuer();

  /// @brief Method get_ThisUpdate, addr 0x10b3e1c, size 0x1c, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::Time* get_ThisUpdate();

  /// @brief Method get_NextUpdate, addr 0x10b3e38, size 0x1c, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::Time* get_NextUpdate();

  /// @brief Method ToAsn1Object, addr 0x10b3e54, size 0x11c, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "CertificateList", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CertificateList(CertificateList&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CertificateList", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CertificateList(CertificateList const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CertificateList();

public:
  /// @brief Field tbsCertList, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::TbsCertificateList* ___tbsCertList;

  /// @brief Field sigAlgID, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* ___sigAlgID;

  /// @brief Field sig, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerBitString* ___sig;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X509::CertificateList, 0x28>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::CertificateList, ___tbsCertList) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::CertificateList, ___sigAlgID) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::CertificateList, ___sig) == 0x20, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::CertificateList);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::CertificateList*, "Org.BouncyCastle.Asn1.X509", "CertificateList");
