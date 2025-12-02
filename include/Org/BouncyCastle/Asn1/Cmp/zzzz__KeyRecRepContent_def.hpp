#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Cmp/KeyRecRepContent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(KeyRecRepContent)
namespace Org::BouncyCastle::Asn1::Cmp {
class CertifiedKeyPair;
}
namespace Org::BouncyCastle::Asn1::Cmp {
class CmpCertificate;
}
namespace Org::BouncyCastle::Asn1::Cmp {
class PkiStatusInfo;
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
namespace Org::BouncyCastle::Asn1::Cmp {
class KeyRecRepContent;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Cmp::KeyRecRepContent);
// Dependencies Org.BouncyCastle.Asn1.Asn1Encodable
namespace Org::BouncyCastle::Asn1::Cmp {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.Cmp.KeyRecRepContent
class CORDL_TYPE KeyRecRepContent : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_NewSigCert)) ::Org::BouncyCastle::Asn1::Cmp::CmpCertificate* NewSigCert;

  __declspec(property(get = get_Status)) ::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo* Status;

  /// @brief Field caCerts, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_caCerts, put = __cordl_internal_set_caCerts)) ::Org::BouncyCastle::Asn1::Asn1Sequence* caCerts;

  /// @brief Field keyPairHist, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_keyPairHist, put = __cordl_internal_set_keyPairHist)) ::Org::BouncyCastle::Asn1::Asn1Sequence* keyPairHist;

  /// @brief Field newSigCert, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_newSigCert, put = __cordl_internal_set_newSigCert)) ::Org::BouncyCastle::Asn1::Cmp::CmpCertificate* newSigCert;

  /// @brief Field status, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_status, put = __cordl_internal_set_status)) ::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo* status;

  /// @brief Method GetCACerts, addr 0x3224b34, size 0x100, virtual true, abstract: false, final false
  inline ::ArrayW<::Org::BouncyCastle::Asn1::Cmp::CmpCertificate*, ::Array<::Org::BouncyCastle::Asn1::Cmp::CmpCertificate*>*> GetCACerts();

  /// @brief Method GetInstance, addr 0x32249a0, size 0x184, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Cmp::KeyRecRepContent* GetInstance(::System::Object* obj);

  /// @brief Method GetKeyPairHist, addr 0x3224c34, size 0x100, virtual true, abstract: false, final false
  inline ::ArrayW<::Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair*, ::Array<::Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair*>*> GetKeyPairHist();

  static inline ::Org::BouncyCastle::Asn1::Cmp::KeyRecRepContent* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method ToAsn1Object, addr 0x3224d34, size 0x148, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence* const& __cordl_internal_get_caCerts() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& __cordl_internal_get_caCerts();

  constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence* const& __cordl_internal_get_keyPairHist() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& __cordl_internal_get_keyPairHist();

  constexpr ::Org::BouncyCastle::Asn1::Cmp::CmpCertificate* const& __cordl_internal_get_newSigCert() const;

  constexpr ::Org::BouncyCastle::Asn1::Cmp::CmpCertificate*& __cordl_internal_get_newSigCert();

  constexpr ::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo* const& __cordl_internal_get_status() const;

  constexpr ::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo*& __cordl_internal_get_status();

  constexpr void __cordl_internal_set_caCerts(::Org::BouncyCastle::Asn1::Asn1Sequence* value);

  constexpr void __cordl_internal_set_keyPairHist(::Org::BouncyCastle::Asn1::Asn1Sequence* value);

  constexpr void __cordl_internal_set_newSigCert(::Org::BouncyCastle::Asn1::Cmp::CmpCertificate* value);

  constexpr void __cordl_internal_set_status(::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo* value);

  /// @brief Method .ctor, addr 0x32247fc, size 0x1a4, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_NewSigCert, addr 0x3224b2c, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Cmp::CmpCertificate* get_NewSigCert();

  /// @brief Method get_Status, addr 0x3224b24, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo* get_Status();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr KeyRecRepContent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "KeyRecRepContent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  KeyRecRepContent(KeyRecRepContent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "KeyRecRepContent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  KeyRecRepContent(KeyRecRepContent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 26 };

  /// @brief Field status, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo* ___status;

  /// @brief Field newSigCert, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Cmp::CmpCertificate* ___newSigCert;

  /// @brief Field caCerts, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Sequence* ___caCerts;

  /// @brief Field keyPairHist, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Sequence* ___keyPairHist;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::Cmp::KeyRecRepContent, ___status) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cmp::KeyRecRepContent, ___newSigCert) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cmp::KeyRecRepContent, ___caCerts) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cmp::KeyRecRepContent, ___keyPairHist) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Cmp::KeyRecRepContent, 0x30>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Cmp
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cmp::KeyRecRepContent);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cmp::KeyRecRepContent*, "Org.BouncyCastle.Asn1.Cmp", "KeyRecRepContent");
