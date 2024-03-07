#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(CertOrEncCert)
namespace Org::BouncyCastle::Asn1::Cmp {
class CmpCertificate;
}
namespace Org::BouncyCastle::Asn1::Crmf {
class EncryptedValue;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1 {
class IAsn1Choice;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cmp {
class CertOrEncCert;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Cmp::CertOrEncCert);
// Type: Org.BouncyCastle.Asn1.Cmp::CertOrEncCert
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Cmp {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Asn1.Cmp::CertOrEncCert*
class CORDL_TYPE CertOrEncCert : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_Certificate))::Org::BouncyCastle::Asn1::Cmp::CmpCertificate* Certificate;

  __declspec(property(get = get_EncryptedCert))::Org::BouncyCastle::Asn1::Crmf::EncryptedValue* EncryptedCert;

  /// @brief Field certificate, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_certificate, put = __cordl_internal_set_certificate))::Org::BouncyCastle::Asn1::Cmp::CmpCertificate* certificate;

  /// @brief Field encryptedCert, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_encryptedCert, put = __cordl_internal_set_encryptedCert))::Org::BouncyCastle::Asn1::Crmf::EncryptedValue* encryptedCert;

  /// @brief Convert operator to "::Org::BouncyCastle::Asn1::IAsn1Choice"
  constexpr operator ::Org::BouncyCastle::Asn1::IAsn1Choice*() noexcept;

  /// @brief Method GetInstance, addr 0xef5e2c, size 0x188, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Cmp::CertOrEncCert* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Cmp::CertOrEncCert* New_ctor(::Org::BouncyCastle::Asn1::Cmp::CmpCertificate* certificate);

  static inline ::Org::BouncyCastle::Asn1::Cmp::CertOrEncCert* New_ctor(::Org::BouncyCastle::Asn1::Crmf::EncryptedValue* encryptedCert);

  static inline ::Org::BouncyCastle::Asn1::Cmp::CertOrEncCert* New_ctor(::Org::BouncyCastle::Asn1::Asn1TaggedObject* tagged);

  /// @brief Method ToAsn1Object, addr 0xef650c, size 0x94, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::Cmp::CmpCertificate*& __cordl_internal_get_certificate();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cmp::CmpCertificate*> const& __cordl_internal_get_certificate() const;

  constexpr ::Org::BouncyCastle::Asn1::Crmf::EncryptedValue*& __cordl_internal_get_encryptedCert();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Crmf::EncryptedValue*> const& __cordl_internal_get_encryptedCert() const;

  constexpr void __cordl_internal_set_certificate(::Org::BouncyCastle::Asn1::Cmp::CmpCertificate* value);

  constexpr void __cordl_internal_set_encryptedCert(::Org::BouncyCastle::Asn1::Crmf::EncryptedValue* value);

  /// @brief Method .ctor, addr 0xef640c, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Cmp::CmpCertificate* certificate);

  /// @brief Method .ctor, addr 0xef6484, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Crmf::EncryptedValue* encryptedCert);

  /// @brief Method .ctor, addr 0xef6318, size 0xf4, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1TaggedObject* tagged);

  /// @brief Method get_Certificate, addr 0xef64fc, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Cmp::CmpCertificate* get_Certificate();

  /// @brief Method get_EncryptedCert, addr 0xef6504, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Crmf::EncryptedValue* get_EncryptedCert();

  /// @brief Convert to "::Org::BouncyCastle::Asn1::IAsn1Choice"
  constexpr ::Org::BouncyCastle::Asn1::IAsn1Choice* i___Org__BouncyCastle__Asn1__IAsn1Choice() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CertOrEncCert();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CertOrEncCert", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CertOrEncCert(CertOrEncCert&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CertOrEncCert", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CertOrEncCert(CertOrEncCert const&) = delete;

  /// @brief Field certificate, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Cmp::CmpCertificate* ___certificate;

  /// @brief Field encryptedCert, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Crmf::EncryptedValue* ___encryptedCert;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Cmp::CertOrEncCert, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cmp::CertOrEncCert, ___certificate) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cmp::CertOrEncCert, ___encryptedCert) == 0x18, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::Cmp
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cmp::CertOrEncCert);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cmp::CertOrEncCert*, "Org.BouncyCastle.Asn1.Cmp", "CertOrEncCert");
