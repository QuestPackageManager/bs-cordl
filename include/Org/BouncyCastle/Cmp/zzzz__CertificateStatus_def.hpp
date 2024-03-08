#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(CertificateStatus)
namespace Org::BouncyCastle::Asn1::Cmp {
class CertStatus;
}
namespace Org::BouncyCastle::Asn1::Cmp {
class PkiStatusInfo;
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
// Forward declare root types
namespace Org::BouncyCastle::Cmp {
class CertificateStatus;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Cmp::CertificateStatus);
// Type: Org.BouncyCastle.Cmp::CertificateStatus
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Cmp {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Cmp::CertificateStatus*
class CORDL_TYPE CertificateStatus : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_CertRequestId))::Org::BouncyCastle::Math::BigInteger* CertRequestId;

  __declspec(property(get = get_PkiStatusInfo))::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo* PkiStatusInfo;

  /// @brief Field certStatus, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_certStatus, put = __cordl_internal_set_certStatus))::Org::BouncyCastle::Asn1::Cmp::CertStatus* certStatus;

  /// @brief Field digestAlgFinder, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_digestAlgFinder, put = __cordl_internal_set_digestAlgFinder))::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder* digestAlgFinder;

  /// @brief Field sigAlgFinder, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_sigAlgFinder, put = setStaticF_sigAlgFinder))::Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder* sigAlgFinder;

  /// @brief Method IsVerified, addr 0x126c24c, size 0x1f0, virtual false, abstract: false, final false
  inline bool IsVerified(::Org::BouncyCastle::X509::X509Certificate* cert);

  static inline ::Org::BouncyCastle::Cmp::CertificateStatus* New_ctor(::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder* digestAlgFinder,
                                                                      ::Org::BouncyCastle::Asn1::Cmp::CertStatus* certStatus);

  constexpr ::Org::BouncyCastle::Asn1::Cmp::CertStatus*& __cordl_internal_get_certStatus();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cmp::CertStatus*> const& __cordl_internal_get_certStatus() const;

  constexpr ::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder*& __cordl_internal_get_digestAlgFinder();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder*> const& __cordl_internal_get_digestAlgFinder() const;

  constexpr void __cordl_internal_set_certStatus(::Org::BouncyCastle::Asn1::Cmp::CertStatus* value);

  constexpr void __cordl_internal_set_digestAlgFinder(::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder* value);

  /// @brief Method .ctor, addr 0x126ba74, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder* digestAlgFinder, ::Org::BouncyCastle::Asn1::Cmp::CertStatus* certStatus);

  static inline ::Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder* getStaticF_sigAlgFinder();

  /// @brief Method get_CertRequestId, addr 0x126c220, size 0x2c, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_CertRequestId();

  /// @brief Method get_PkiStatusInfo, addr 0x126c200, size 0x20, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo* get_PkiStatusInfo();

  static inline void setStaticF_sigAlgFinder(::Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CertificateStatus();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CertificateStatus", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CertificateStatus(CertificateStatus&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CertificateStatus", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CertificateStatus(CertificateStatus const&) = delete;

  /// @brief Field digestAlgFinder, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder* ___digestAlgFinder;

  /// @brief Field certStatus, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Cmp::CertStatus* ___certStatus;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Cmp::CertificateStatus, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cmp::CertificateStatus, ___digestAlgFinder) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cmp::CertificateStatus, ___certStatus) == 0x18, "Offset mismatch!");

} // namespace Org::BouncyCastle::Cmp
NEED_NO_BOX(::Org::BouncyCastle::Cmp::CertificateStatus);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cmp::CertificateStatus*, "Org.BouncyCastle.Cmp", "CertificateStatus");
