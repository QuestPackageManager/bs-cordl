#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Cmp/CrlAnnContent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(CrlAnnContent)
namespace Org::BouncyCastle::Asn1::X509 {
class CertificateList;
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
class CrlAnnContent;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Cmp::CrlAnnContent);
// Dependencies Org.BouncyCastle.Asn1.Asn1Encodable
namespace Org::BouncyCastle::Asn1::Cmp {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.Cmp.CrlAnnContent
class CORDL_TYPE CrlAnnContent : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field content, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_content, put = __cordl_internal_set_content)) ::Org::BouncyCastle::Asn1::Asn1Sequence* content;

  /// @brief Method GetInstance, addr 0x22fa5d4, size 0x180, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Cmp::CrlAnnContent* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Cmp::CrlAnnContent* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method ToAsn1Object, addr 0x22fa84c, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  /// @brief Method ToCertificateListArray, addr 0x22fa754, size 0xf8, virtual true, abstract: false, final false
  inline ::ArrayW<::Org::BouncyCastle::Asn1::X509::CertificateList*, ::Array<::Org::BouncyCastle::Asn1::X509::CertificateList*>*> ToCertificateListArray();

  constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence* const& __cordl_internal_get_content() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& __cordl_internal_get_content();

  constexpr void __cordl_internal_set_content(::Org::BouncyCastle::Asn1::Asn1Sequence* value);

  /// @brief Method .ctor, addr 0x22fa5ac, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CrlAnnContent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CrlAnnContent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CrlAnnContent(CrlAnnContent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CrlAnnContent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CrlAnnContent(CrlAnnContent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21 };

  /// @brief Field content, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Sequence* ___content;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::Cmp::CrlAnnContent, ___content) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Cmp::CrlAnnContent, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Cmp
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cmp::CrlAnnContent);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cmp::CrlAnnContent*, "Org.BouncyCastle.Asn1.Cmp", "CrlAnnContent");
