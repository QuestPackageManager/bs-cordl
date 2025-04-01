#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Cmp/CertOrEncCert.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__IAsn1Choice_def.hpp"
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
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cmp {
class CertOrEncCert;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Cmp::CertOrEncCert);
// Dependencies Org.BouncyCastle.Asn1.Asn1Encodable, Org.BouncyCastle.Asn1.IAsn1Choice
namespace Org::BouncyCastle::Asn1::Cmp {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.Cmp.CertOrEncCert
class CORDL_TYPE CertOrEncCert : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_Certificate)) ::Org::BouncyCastle::Asn1::Cmp::CmpCertificate* Certificate;

  __declspec(property(get = get_EncryptedCert)) ::Org::BouncyCastle::Asn1::Crmf::EncryptedValue* EncryptedCert;

  /// @brief Field certificate, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_certificate, put = __cordl_internal_set_certificate)) ::Org::BouncyCastle::Asn1::Cmp::CmpCertificate* certificate;

  /// @brief Field encryptedCert, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_encryptedCert, put = __cordl_internal_set_encryptedCert)) ::Org::BouncyCastle::Asn1::Crmf::EncryptedValue* encryptedCert;

  /// @brief Convert operator to "::Org::BouncyCastle::Asn1::IAsn1Choice"
  constexpr operator ::Org::BouncyCastle::Asn1::IAsn1Choice*() noexcept;

  /// @brief Method GetInstance, addr 0x22f047c, size 0x17c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Cmp::CertOrEncCert* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Cmp::CertOrEncCert* New_ctor(::Org::BouncyCastle::Asn1::Cmp::CmpCertificate* certificate);

  static inline ::Org::BouncyCastle::Asn1::Cmp::CertOrEncCert* New_ctor(::Org::BouncyCastle::Asn1::Crmf::EncryptedValue* encryptedCert);

  static inline ::Org::BouncyCastle::Asn1::Cmp::CertOrEncCert* New_ctor(::Org::BouncyCastle::Asn1::Asn1TaggedObject* tagged);

  /// @brief Method ToAsn1Object, addr 0x22f0b28, size 0x88, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::Cmp::CmpCertificate* const& __cordl_internal_get_certificate() const;

  constexpr ::Org::BouncyCastle::Asn1::Cmp::CmpCertificate*& __cordl_internal_get_certificate();

  constexpr ::Org::BouncyCastle::Asn1::Crmf::EncryptedValue* const& __cordl_internal_get_encryptedCert() const;

  constexpr ::Org::BouncyCastle::Asn1::Crmf::EncryptedValue*& __cordl_internal_get_encryptedCert();

  constexpr void __cordl_internal_set_certificate(::Org::BouncyCastle::Asn1::Cmp::CmpCertificate* value);

  constexpr void __cordl_internal_set_encryptedCert(::Org::BouncyCastle::Asn1::Crmf::EncryptedValue* value);

  /// @brief Method .ctor, addr 0x22f0a30, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Cmp::CmpCertificate* certificate);

  /// @brief Method .ctor, addr 0x22f0aa4, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Crmf::EncryptedValue* encryptedCert);

  /// @brief Method .ctor, addr 0x22f0940, size 0xf0, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1TaggedObject* tagged);

  /// @brief Method get_Certificate, addr 0x22f0b18, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Cmp::CmpCertificate* get_Certificate();

  /// @brief Method get_EncryptedCert, addr 0x22f0b20, size 0x8, virtual true, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14 };

  /// @brief Field certificate, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Cmp::CmpCertificate* ___certificate;

  /// @brief Field encryptedCert, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Crmf::EncryptedValue* ___encryptedCert;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::Cmp::CertOrEncCert, ___certificate) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cmp::CertOrEncCert, ___encryptedCert) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Cmp::CertOrEncCert, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Cmp
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cmp::CertOrEncCert);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cmp::CertOrEncCert*, "Org.BouncyCastle.Asn1.Cmp", "CertOrEncCert");
