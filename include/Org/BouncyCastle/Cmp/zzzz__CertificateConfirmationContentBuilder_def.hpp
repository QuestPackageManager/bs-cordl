#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Cmp/CertificateConfirmationContentBuilder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(CertificateConfirmationContentBuilder)
namespace Org::BouncyCastle::Cmp {
class CertificateConfirmationContent;
}
namespace Org::BouncyCastle::Cms {
class DefaultDigestAlgorithmIdentifierFinder;
}
namespace Org::BouncyCastle::Cms {
class DefaultSignatureAlgorithmIdentifierFinder;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::X509 {
class X509Certificate;
}
namespace System::Collections {
class IList;
}
// Forward declare root types
namespace Org::BouncyCastle::Cmp {
class CertificateConfirmationContentBuilder;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder);
// Dependencies System.Object
namespace Org::BouncyCastle::Cmp {
// Is value type: false
// CS Name: Org.BouncyCastle.Cmp.CertificateConfirmationContentBuilder
class CORDL_TYPE CertificateConfirmationContentBuilder : public ::System::Object {
public:
  // Declarations
  /// @brief Field acceptedCerts, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_acceptedCerts, put = __cordl_internal_set_acceptedCerts)) ::System::Collections::IList* acceptedCerts;

  /// @brief Field acceptedReqIds, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_acceptedReqIds, put = __cordl_internal_set_acceptedReqIds)) ::System::Collections::IList* acceptedReqIds;

  /// @brief Field digestAlgFinder, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_digestAlgFinder, put = __cordl_internal_set_digestAlgFinder)) ::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder* digestAlgFinder;

  /// @brief Field sigAlgFinder, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_sigAlgFinder, put = setStaticF_sigAlgFinder)) ::Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder* sigAlgFinder;

  /// @brief Method AddAcceptedCertificate, addr 0x2649fc0, size 0x128, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder* AddAcceptedCertificate(::Org::BouncyCastle::X509::X509Certificate* certHolder,
                                                                                                 ::Org::BouncyCastle::Math::BigInteger* certReqId);

  /// @brief Method Build, addr 0x264a0e8, size 0x460, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Cmp::CertificateConfirmationContent* Build();

  static inline ::Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder* New_ctor();

  static inline ::Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder* New_ctor(::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder* digestAlgFinder);

  constexpr ::System::Collections::IList* const& __cordl_internal_get_acceptedCerts() const;

  constexpr ::System::Collections::IList*& __cordl_internal_get_acceptedCerts();

  constexpr ::System::Collections::IList* const& __cordl_internal_get_acceptedReqIds() const;

  constexpr ::System::Collections::IList*& __cordl_internal_get_acceptedReqIds();

  constexpr ::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder* const& __cordl_internal_get_digestAlgFinder() const;

  constexpr ::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder*& __cordl_internal_get_digestAlgFinder();

  constexpr void __cordl_internal_set_acceptedCerts(::System::Collections::IList* value);

  constexpr void __cordl_internal_set_acceptedReqIds(::System::Collections::IList* value);

  constexpr void __cordl_internal_set_digestAlgFinder(::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder* value);

  /// @brief Method .ctor, addr 0x2649ee0, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x2649f3c, size 0x84, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder* digestAlgFinder);

  static inline ::Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder* getStaticF_sigAlgFinder();

  static inline void setStaticF_sigAlgFinder(::Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CertificateConfirmationContentBuilder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CertificateConfirmationContentBuilder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CertificateConfirmationContentBuilder(CertificateConfirmationContentBuilder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CertificateConfirmationContentBuilder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CertificateConfirmationContentBuilder(CertificateConfirmationContentBuilder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 602 };

  /// @brief Field digestAlgFinder, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder* ___digestAlgFinder;

  /// @brief Field acceptedCerts, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::IList* ___acceptedCerts;

  /// @brief Field acceptedReqIds, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::IList* ___acceptedReqIds;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder, ___digestAlgFinder) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder, ___acceptedCerts) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder, ___acceptedReqIds) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder, 0x28>, "Size mismatch!");

} // namespace Org::BouncyCastle::Cmp
NEED_NO_BOX(::Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder*, "Org.BouncyCastle.Cmp", "CertificateConfirmationContentBuilder");
