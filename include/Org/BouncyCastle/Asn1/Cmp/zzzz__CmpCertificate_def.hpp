#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(CmpCertificate)
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AttributeCertificate;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509CertificateStructure;
}
namespace Org::BouncyCastle::Asn1 {
class IAsn1Choice;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cmp {
class CmpCertificate;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Cmp::CmpCertificate);
// Type: Org.BouncyCastle.Asn1.Cmp::CmpCertificate
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Cmp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(19))
// CS Name: ::Org.BouncyCastle.Asn1.Cmp::CmpCertificate*
class CORDL_TYPE CmpCertificate : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field x509v3PKCert, offset 0x10, size 0x8
  __declspec(property(get = __get_x509v3PKCert, put = __set_x509v3PKCert))::Org::BouncyCastle::Asn1::X509::X509CertificateStructure* x509v3PKCert;

  /// @brief Field x509v2AttrCert, offset 0x18, size 0x8
  __declspec(property(get = __get_x509v2AttrCert, put = __set_x509v2AttrCert))::Org::BouncyCastle::Asn1::X509::AttributeCertificate* x509v2AttrCert;

  __declspec(property(get = get_IsX509v3PKCert)) bool IsX509v3PKCert;

  __declspec(property(get = get_X509v3PKCert))::Org::BouncyCastle::Asn1::X509::X509CertificateStructure* X509v3PKCert;

  __declspec(property(get = get_X509v2AttrCert))::Org::BouncyCastle::Asn1::X509::AttributeCertificate* X509v2AttrCert;

  /// @brief Convert operator to "::Org::BouncyCastle::Asn1::IAsn1Choice"
  constexpr operator ::Org::BouncyCastle::Asn1::IAsn1Choice*() noexcept;

  constexpr ::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*& __get_x509v3PKCert();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*> const& __get_x509v3PKCert() const;

  constexpr void __set_x509v3PKCert(::Org::BouncyCastle::Asn1::X509::X509CertificateStructure* value);

  constexpr ::Org::BouncyCastle::Asn1::X509::AttributeCertificate*& __get_x509v2AttrCert();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::AttributeCertificate*> const& __get_x509v2AttrCert() const;

  constexpr void __set_x509v2AttrCert(::Org::BouncyCastle::Asn1::X509::AttributeCertificate* value);

  static inline ::Org::BouncyCastle::Asn1::Cmp::CmpCertificate* New_ctor(::Org::BouncyCastle::Asn1::X509::AttributeCertificate* x509v2AttrCert);

  /// @brief Method .ctor addr 0xe66494 size 0x28 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::AttributeCertificate* x509v2AttrCert);

  static inline ::Org::BouncyCastle::Asn1::Cmp::CmpCertificate* New_ctor(::Org::BouncyCastle::Asn1::X509::X509CertificateStructure* x509v3PKCert);

  /// @brief Method .ctor addr 0xe664bc size 0xa4 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::X509CertificateStructure* x509v3PKCert);

  /// @brief Method GetInstance addr 0xe63f00 size 0x1dc virtual false final false
  static inline ::Org::BouncyCastle::Asn1::Cmp::CmpCertificate* GetInstance(::System::Object* obj);

  /// @brief Method get_IsX509v3PKCert addr 0xe66560 size 0x10 virtual true final false
  inline bool get_IsX509v3PKCert();

  /// @brief Method get_X509v3PKCert addr 0xe66570 size 0x8 virtual true final false
  inline ::Org::BouncyCastle::Asn1::X509::X509CertificateStructure* get_X509v3PKCert();

  /// @brief Method get_X509v2AttrCert addr 0xe66578 size 0x8 virtual true final false
  inline ::Org::BouncyCastle::Asn1::X509::AttributeCertificate* get_X509v2AttrCert();

  /// @brief Method ToAsn1Object addr 0xe66580 size 0x90 virtual true final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "CmpCertificate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CmpCertificate(CmpCertificate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CmpCertificate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CmpCertificate(CmpCertificate const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CmpCertificate();

public:
  /// @brief Field x509v3PKCert, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::X509CertificateStructure* ___x509v3PKCert;

  /// @brief Field x509v2AttrCert, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::AttributeCertificate* ___x509v2AttrCert;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Cmp::CmpCertificate, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Cmp
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cmp::CmpCertificate);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cmp::CmpCertificate*, "Org.BouncyCastle.Asn1.Cmp", "CmpCertificate");
