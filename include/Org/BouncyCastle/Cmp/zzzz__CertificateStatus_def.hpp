#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(CertificateStatus)
namespace Org::BouncyCastle::Cms {
class DefaultSignatureAlgorithmIdentifierFinder;
}
namespace Org::BouncyCastle::Asn1::Cmp {
class PkiStatusInfo;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::X509 {
class X509Certificate;
}
namespace Org::BouncyCastle::Asn1::Cmp {
class CertStatus;
}
namespace Org::BouncyCastle::Cms {
class DefaultDigestAlgorithmIdentifierFinder;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(603))
// CS Name: ::Org.BouncyCastle.Cmp::CertificateStatus*
class CORDL_TYPE CertificateStatus : public ::System::Object {
public:
  // Declarations
  /// @brief Field digestAlgFinder, offset 0x10, size 0x8
  __declspec(property(get = __get_digestAlgFinder, put = __set_digestAlgFinder))::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder* digestAlgFinder;

  /// @brief Field certStatus, offset 0x18, size 0x8
  __declspec(property(get = __get_certStatus, put = __set_certStatus))::Org::BouncyCastle::Asn1::Cmp::CertStatus* certStatus;

  /// @brief Field sigAlgFinder, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_sigAlgFinder, put = setStaticF_sigAlgFinder))::Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder* sigAlgFinder;

  __declspec(property(get = get_PkiStatusInfo))::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo* PkiStatusInfo;

  __declspec(property(get = get_CertRequestId))::Org::BouncyCastle::Math::BigInteger* CertRequestId;

  constexpr ::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder*& __get_digestAlgFinder();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder*> const& __get_digestAlgFinder() const;

  constexpr void __set_digestAlgFinder(::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder* value);

  constexpr ::Org::BouncyCastle::Asn1::Cmp::CertStatus*& __get_certStatus();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cmp::CertStatus*> const& __get_certStatus() const;

  constexpr void __set_certStatus(::Org::BouncyCastle::Asn1::Cmp::CertStatus* value);

  static inline void setStaticF_sigAlgFinder(::Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder* value);

  static inline ::Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder* getStaticF_sigAlgFinder();

  static inline ::Org::BouncyCastle::Cmp::CertificateStatus* New_ctor(::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder* digestAlgFinder,
                                                                      ::Org::BouncyCastle::Asn1::Cmp::CertStatus* certStatus);

  /// @brief Method .ctor addr 0x11d5510 size 0x2c virtual false final false
  inline void _ctor(::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder* digestAlgFinder, ::Org::BouncyCastle::Asn1::Cmp::CertStatus* certStatus);

  /// @brief Method get_PkiStatusInfo addr 0x11d5c9c size 0x20 virtual false final false
  inline ::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo* get_PkiStatusInfo();

  /// @brief Method get_CertRequestId addr 0x11d5cbc size 0x2c virtual false final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_CertRequestId();

  /// @brief Method IsVerified addr 0x11d5ce8 size 0x1f0 virtual false final false
  inline bool IsVerified(::Org::BouncyCastle::X509::X509Certificate* cert);

  // Ctor Parameters [CppParam { name: "", ty: "CertificateStatus", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CertificateStatus(CertificateStatus&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CertificateStatus", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CertificateStatus(CertificateStatus const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CertificateStatus();

public:
  /// @brief Field digestAlgFinder, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder* ___digestAlgFinder;

  /// @brief Field certStatus, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Cmp::CertStatus* ___certStatus;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Cmp::CertificateStatus, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Cmp
NEED_NO_BOX(::Org::BouncyCastle::Cmp::CertificateStatus);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cmp::CertificateStatus*, "Org.BouncyCastle.Cmp", "CertificateStatus");
