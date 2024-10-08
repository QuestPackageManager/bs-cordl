#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Cmp/CertificateConfirmationContent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(CertificateConfirmationContent)
namespace Org::BouncyCastle::Asn1::Cmp {
class CertConfirmContent;
}
namespace Org::BouncyCastle::Cmp {
class CertificateStatus;
}
namespace Org::BouncyCastle::Cms {
class DefaultDigestAlgorithmIdentifierFinder;
}
// Forward declare root types
namespace Org::BouncyCastle::Cmp {
class CertificateConfirmationContent;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Cmp::CertificateConfirmationContent);
// Type: Org.BouncyCastle.Cmp::CertificateConfirmationContent
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Cmp {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Cmp::CertificateConfirmationContent*
class CORDL_TYPE CertificateConfirmationContent : public ::System::Object {
public:
  // Declarations
  /// @brief Field content, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_content, put = __cordl_internal_set_content)) ::Org::BouncyCastle::Asn1::Cmp::CertConfirmContent* content;

  /// @brief Field digestAlgFinder, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_digestAlgFinder, put = __cordl_internal_set_digestAlgFinder)) ::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder* digestAlgFinder;

  /// @brief Method GetStatusMessages, addr 0x260b9f8, size 0x128, virtual false, abstract: false, final false
  inline ::ArrayW<::Org::BouncyCastle::Cmp::CertificateStatus*, ::Array<::Org::BouncyCastle::Cmp::CertificateStatus*>*> GetStatusMessages();

  static inline ::Org::BouncyCastle::Cmp::CertificateConfirmationContent* New_ctor(::Org::BouncyCastle::Asn1::Cmp::CertConfirmContent* content);

  static inline ::Org::BouncyCastle::Cmp::CertificateConfirmationContent* New_ctor(::Org::BouncyCastle::Asn1::Cmp::CertConfirmContent* content,
                                                                                   ::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder* digestAlgFinder);

  /// @brief Method ToAsn1Structure, addr 0x260b9f0, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Cmp::CertConfirmContent* ToAsn1Structure();

  constexpr ::Org::BouncyCastle::Asn1::Cmp::CertConfirmContent*& __cordl_internal_get_content();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cmp::CertConfirmContent*> const& __cordl_internal_get_content() const;

  constexpr ::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder*& __cordl_internal_get_digestAlgFinder();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder*> const& __cordl_internal_get_digestAlgFinder() const;

  constexpr void __cordl_internal_set_content(::Org::BouncyCastle::Asn1::Cmp::CertConfirmContent* value);

  constexpr void __cordl_internal_set_digestAlgFinder(::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder* value);

  /// @brief Method .ctor, addr 0x260b99c, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Cmp::CertConfirmContent* content);

  /// @brief Method .ctor, addr 0x260b9c4, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Cmp::CertConfirmContent* content, ::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder* digestAlgFinder);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CertificateConfirmationContent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CertificateConfirmationContent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CertificateConfirmationContent(CertificateConfirmationContent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CertificateConfirmationContent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CertificateConfirmationContent(CertificateConfirmationContent const&) = delete;

  /// @brief Field digestAlgFinder, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder* ___digestAlgFinder;

  /// @brief Field content, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Cmp::CertConfirmContent* ___content;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 601 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Cmp::CertificateConfirmationContent, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cmp::CertificateConfirmationContent, ___digestAlgFinder) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cmp::CertificateConfirmationContent, ___content) == 0x18, "Offset mismatch!");

} // namespace Org::BouncyCastle::Cmp
NEED_NO_BOX(::Org::BouncyCastle::Cmp::CertificateConfirmationContent);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cmp::CertificateConfirmationContent*, "Org.BouncyCastle.Cmp", "CertificateConfirmationContent");
