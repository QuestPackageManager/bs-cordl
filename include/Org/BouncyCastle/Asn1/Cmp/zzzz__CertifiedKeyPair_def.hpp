#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Cmp/CertifiedKeyPair.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(CertifiedKeyPair)
namespace Org::BouncyCastle::Asn1::Cmp {
class CertOrEncCert;
}
namespace Org::BouncyCastle::Asn1::Crmf {
class EncryptedValue;
}
namespace Org::BouncyCastle::Asn1::Crmf {
class PkiPublicationInfo;
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
class CertifiedKeyPair;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair);
// Dependencies Org.BouncyCastle.Asn1.Asn1Encodable
namespace Org::BouncyCastle::Asn1::Cmp {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.Cmp.CertifiedKeyPair
class CORDL_TYPE CertifiedKeyPair : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_CertOrEncCert)) ::Org::BouncyCastle::Asn1::Cmp::CertOrEncCert* CertOrEncCert;

  __declspec(property(get = get_PrivateKey)) ::Org::BouncyCastle::Asn1::Crmf::EncryptedValue* PrivateKey;

  __declspec(property(get = get_PublicationInfo)) ::Org::BouncyCastle::Asn1::Crmf::PkiPublicationInfo* PublicationInfo;

  /// @brief Field certOrEncCert, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_certOrEncCert, put = __cordl_internal_set_certOrEncCert)) ::Org::BouncyCastle::Asn1::Cmp::CertOrEncCert* certOrEncCert;

  /// @brief Field privateKey, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_privateKey, put = __cordl_internal_set_privateKey)) ::Org::BouncyCastle::Asn1::Crmf::EncryptedValue* privateKey;

  /// @brief Field publicationInfo, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_publicationInfo, put = __cordl_internal_set_publicationInfo)) ::Org::BouncyCastle::Asn1::Crmf::PkiPublicationInfo* publicationInfo;

  /// @brief Method GetInstance, addr 0x22f4730, size 0x17c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair* New_ctor(::Org::BouncyCastle::Asn1::Cmp::CertOrEncCert* certOrEncCert);

  static inline ::Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair* New_ctor(::Org::BouncyCastle::Asn1::Cmp::CertOrEncCert* certOrEncCert, ::Org::BouncyCastle::Asn1::Crmf::EncryptedValue* privateKey,
                                                                           ::Org::BouncyCastle::Asn1::Crmf::PkiPublicationInfo* publicationInfo);

  static inline ::Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method ToAsn1Object, addr 0x22f4958, size 0x120, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::Cmp::CertOrEncCert* const& __cordl_internal_get_certOrEncCert() const;

  constexpr ::Org::BouncyCastle::Asn1::Cmp::CertOrEncCert*& __cordl_internal_get_certOrEncCert();

  constexpr ::Org::BouncyCastle::Asn1::Crmf::EncryptedValue* const& __cordl_internal_get_privateKey() const;

  constexpr ::Org::BouncyCastle::Asn1::Crmf::EncryptedValue*& __cordl_internal_get_privateKey();

  constexpr ::Org::BouncyCastle::Asn1::Crmf::PkiPublicationInfo* const& __cordl_internal_get_publicationInfo() const;

  constexpr ::Org::BouncyCastle::Asn1::Crmf::PkiPublicationInfo*& __cordl_internal_get_publicationInfo();

  constexpr void __cordl_internal_set_certOrEncCert(::Org::BouncyCastle::Asn1::Cmp::CertOrEncCert* value);

  constexpr void __cordl_internal_set_privateKey(::Org::BouncyCastle::Asn1::Crmf::EncryptedValue* value);

  constexpr void __cordl_internal_set_publicationInfo(::Org::BouncyCastle::Asn1::Crmf::PkiPublicationInfo* value);

  /// @brief Method .ctor, addr 0x22f48ac, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Cmp::CertOrEncCert* certOrEncCert);

  /// @brief Method .ctor, addr 0x22f48b8, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Cmp::CertOrEncCert* certOrEncCert, ::Org::BouncyCastle::Asn1::Crmf::EncryptedValue* privateKey,
                    ::Org::BouncyCastle::Asn1::Crmf::PkiPublicationInfo* publicationInfo);

  /// @brief Method .ctor, addr 0x22f44bc, size 0xf8, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_CertOrEncCert, addr 0x22f4940, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Cmp::CertOrEncCert* get_CertOrEncCert();

  /// @brief Method get_PrivateKey, addr 0x22f4948, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Crmf::EncryptedValue* get_PrivateKey();

  /// @brief Method get_PublicationInfo, addr 0x22f4950, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Crmf::PkiPublicationInfo* get_PublicationInfo();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CertifiedKeyPair();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CertifiedKeyPair", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CertifiedKeyPair(CertifiedKeyPair&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CertifiedKeyPair", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CertifiedKeyPair(CertifiedKeyPair const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12 };

  /// @brief Field certOrEncCert, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Cmp::CertOrEncCert* ___certOrEncCert;

  /// @brief Field privateKey, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Crmf::EncryptedValue* ___privateKey;

  /// @brief Field publicationInfo, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Crmf::PkiPublicationInfo* ___publicationInfo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair, ___certOrEncCert) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair, ___privateKey) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair, ___publicationInfo) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair, 0x28>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Cmp
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair*, "Org.BouncyCastle.Asn1.Cmp", "CertifiedKeyPair");
