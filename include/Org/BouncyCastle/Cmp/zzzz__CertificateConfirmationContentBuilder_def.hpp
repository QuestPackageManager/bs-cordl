#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(CertificateConfirmationContentBuilder)
namespace Org::BouncyCastle::Cms {
class DefaultDigestAlgorithmIdentifierFinder;
}
namespace Org::BouncyCastle::X509 {
class X509Certificate;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Cmp {
class CertificateConfirmationContent;
}
namespace Org::BouncyCastle::Cms {
class DefaultSignatureAlgorithmIdentifierFinder;
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
// Type: Org.BouncyCastle.Cmp::CertificateConfirmationContentBuilder
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Cmp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(602))
// CS Name: ::Org.BouncyCastle.Cmp::CertificateConfirmationContentBuilder*
class CORDL_TYPE CertificateConfirmationContentBuilder : public ::System::Object {
public:
  // Declarations
  /// @brief Field digestAlgFinder, offset 0x10, size 0x8
  __declspec(property(get = __get_digestAlgFinder, put = __set_digestAlgFinder))::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder* digestAlgFinder;

  /// @brief Field acceptedCerts, offset 0x18, size 0x8
  __declspec(property(get = __get_acceptedCerts, put = __set_acceptedCerts))::System::Collections::IList* acceptedCerts;

  /// @brief Field acceptedReqIds, offset 0x20, size 0x8
  __declspec(property(get = __get_acceptedReqIds, put = __set_acceptedReqIds))::System::Collections::IList* acceptedReqIds;

  /// @brief Field sigAlgFinder, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_sigAlgFinder, put = setStaticF_sigAlgFinder))::Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder* sigAlgFinder;

  constexpr ::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder*& __get_digestAlgFinder();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder*> const& __get_digestAlgFinder() const;

  constexpr void __set_digestAlgFinder(::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder* value);

  constexpr ::System::Collections::IList*& __get_acceptedCerts();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IList*> const& __get_acceptedCerts() const;

  constexpr void __set_acceptedCerts(::System::Collections::IList* value);

  constexpr ::System::Collections::IList*& __get_acceptedReqIds();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IList*> const& __get_acceptedReqIds() const;

  constexpr void __set_acceptedReqIds(::System::Collections::IList* value);

  static inline void setStaticF_sigAlgFinder(::Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder* value);

  static inline ::Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder* getStaticF_sigAlgFinder();

  static inline ::Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder* New_ctor();

  /// @brief Method .ctor, addr 0x11d553c, size 0x64, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder* New_ctor(::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder* digestAlgFinder);

  /// @brief Method .ctor, addr 0x11d55a0, size 0x84, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder* digestAlgFinder);

  /// @brief Method AddAcceptedCertificate, addr 0x11d5624, size 0x128, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder* AddAcceptedCertificate(::Org::BouncyCastle::X509::X509Certificate* certHolder,
                                                                                                 ::Org::BouncyCastle::Math::BigInteger* certReqId);

  /// @brief Method Build, addr 0x11d574c, size 0x470, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Cmp::CertificateConfirmationContent* Build();

  // Ctor Parameters [CppParam { name: "", ty: "CertificateConfirmationContentBuilder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CertificateConfirmationContentBuilder(CertificateConfirmationContentBuilder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CertificateConfirmationContentBuilder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CertificateConfirmationContentBuilder(CertificateConfirmationContentBuilder const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CertificateConfirmationContentBuilder();

public:
  /// @brief Field digestAlgFinder, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder* ___digestAlgFinder;

  /// @brief Field acceptedCerts, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::IList* ___acceptedCerts;

  /// @brief Field acceptedReqIds, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::IList* ___acceptedReqIds;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder, 0x28>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder, ___digestAlgFinder) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder, ___acceptedCerts) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder, ___acceptedReqIds) == 0x20, "Offset mismatch!");

} // namespace Org::BouncyCastle::Cmp
NEED_NO_BOX(::Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder*, "Org.BouncyCastle.Cmp", "CertificateConfirmationContentBuilder");
