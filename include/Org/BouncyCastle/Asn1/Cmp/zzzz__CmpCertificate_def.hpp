#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Cmp/CmpCertificate.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__IAsn1Choice_def.hpp"
CORDL_MODULE_EXPORT(CmpCertificate)
namespace Org::BouncyCastle::Asn1::X509 {
class AttributeCertificate;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509CertificateStructure;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cmp {
class CmpCertificate;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Cmp::CmpCertificate);
// Dependencies Org.BouncyCastle.Asn1.Asn1Encodable, Org.BouncyCastle.Asn1.IAsn1Choice
namespace Org::BouncyCastle::Asn1::Cmp {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.Cmp.CmpCertificate
class CORDL_TYPE CmpCertificate : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_IsX509v3PKCert)) bool IsX509v3PKCert;

  __declspec(property(get = get_X509v2AttrCert)) ::Org::BouncyCastle::Asn1::X509::AttributeCertificate* X509v2AttrCert;

  __declspec(property(get = get_X509v3PKCert)) ::Org::BouncyCastle::Asn1::X509::X509CertificateStructure* X509v3PKCert;

  /// @brief Field x509v2AttrCert, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_x509v2AttrCert, put = __cordl_internal_set_x509v2AttrCert)) ::Org::BouncyCastle::Asn1::X509::AttributeCertificate* x509v2AttrCert;

  /// @brief Field x509v3PKCert, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_x509v3PKCert, put = __cordl_internal_set_x509v3PKCert)) ::Org::BouncyCastle::Asn1::X509::X509CertificateStructure* x509v3PKCert;

  /// @brief Convert operator to "::Org::BouncyCastle::Asn1::IAsn1Choice"
  constexpr operator ::Org::BouncyCastle::Asn1::IAsn1Choice*() noexcept;

  /// @brief Method GetInstance, addr 0x22f3558, size 0x1d0, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Cmp::CmpCertificate* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Cmp::CmpCertificate* New_ctor(::Org::BouncyCastle::Asn1::X509::AttributeCertificate* x509v2AttrCert);

  static inline ::Org::BouncyCastle::Asn1::Cmp::CmpCertificate* New_ctor(::Org::BouncyCastle::Asn1::X509::X509CertificateStructure* x509v3PKCert);

  /// @brief Method ToAsn1Object, addr 0x22f5af8, size 0x8c, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::X509::AttributeCertificate* const& __cordl_internal_get_x509v2AttrCert() const;

  constexpr ::Org::BouncyCastle::Asn1::X509::AttributeCertificate*& __cordl_internal_get_x509v2AttrCert();

  constexpr ::Org::BouncyCastle::Asn1::X509::X509CertificateStructure* const& __cordl_internal_get_x509v3PKCert() const;

  constexpr ::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*& __cordl_internal_get_x509v3PKCert();

  constexpr void __cordl_internal_set_x509v2AttrCert(::Org::BouncyCastle::Asn1::X509::AttributeCertificate* value);

  constexpr void __cordl_internal_set_x509v3PKCert(::Org::BouncyCastle::Asn1::X509::X509CertificateStructure* value);

  /// @brief Method .ctor, addr 0x22f5a10, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::AttributeCertificate* x509v2AttrCert);

  /// @brief Method .ctor, addr 0x22f5a38, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::X509CertificateStructure* x509v3PKCert);

  /// @brief Method get_IsX509v3PKCert, addr 0x22f5ad8, size 0x10, virtual true, abstract: false, final false
  inline bool get_IsX509v3PKCert();

  /// @brief Method get_X509v2AttrCert, addr 0x22f5af0, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::AttributeCertificate* get_X509v2AttrCert();

  /// @brief Method get_X509v3PKCert, addr 0x22f5ae8, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::X509CertificateStructure* get_X509v3PKCert();

  /// @brief Convert to "::Org::BouncyCastle::Asn1::IAsn1Choice"
  constexpr ::Org::BouncyCastle::Asn1::IAsn1Choice* i___Org__BouncyCastle__Asn1__IAsn1Choice() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CmpCertificate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CmpCertificate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CmpCertificate(CmpCertificate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CmpCertificate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CmpCertificate(CmpCertificate const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19 };

  /// @brief Field x509v3PKCert, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::X509CertificateStructure* ___x509v3PKCert;

  /// @brief Field x509v2AttrCert, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::AttributeCertificate* ___x509v2AttrCert;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::Cmp::CmpCertificate, ___x509v3PKCert) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cmp::CmpCertificate, ___x509v2AttrCert) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Cmp::CmpCertificate, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Cmp
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cmp::CmpCertificate);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cmp::CmpCertificate*, "Org.BouncyCastle.Asn1.Cmp", "CmpCertificate");
