#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(CertOrEncCert)
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1::Cmp {
class CmpCertificate;
}
namespace Org::BouncyCastle::Asn1::Crmf {
class EncryptedValue;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1 {
class IAsn1Choice;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14))
// CS Name: ::Org.BouncyCastle.Asn1.Cmp::CertOrEncCert*
class CORDL_TYPE CertOrEncCert : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field certificate, offset 0x10, size 0x8
  __declspec(property(get = __get_certificate, put = __set_certificate))::Org::BouncyCastle::Asn1::Cmp::CmpCertificate* certificate;

  /// @brief Field encryptedCert, offset 0x18, size 0x8
  __declspec(property(get = __get_encryptedCert, put = __set_encryptedCert))::Org::BouncyCastle::Asn1::Crmf::EncryptedValue* encryptedCert;

  __declspec(property(get = get_Certificate))::Org::BouncyCastle::Asn1::Cmp::CmpCertificate* Certificate;

  __declspec(property(get = get_EncryptedCert))::Org::BouncyCastle::Asn1::Crmf::EncryptedValue* EncryptedCert;

  /// @brief Convert operator to "::Org::BouncyCastle::Asn1::IAsn1Choice"
  constexpr operator ::Org::BouncyCastle::Asn1::IAsn1Choice*() noexcept;

  constexpr ::Org::BouncyCastle::Asn1::Cmp::CmpCertificate*& __get_certificate();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cmp::CmpCertificate*> const& __get_certificate() const;

  constexpr void __set_certificate(::Org::BouncyCastle::Asn1::Cmp::CmpCertificate* value);

  constexpr ::Org::BouncyCastle::Asn1::Crmf::EncryptedValue*& __get_encryptedCert();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Crmf::EncryptedValue*> const& __get_encryptedCert() const;

  constexpr void __set_encryptedCert(::Org::BouncyCastle::Asn1::Crmf::EncryptedValue* value);

  static inline ::Org::BouncyCastle::Asn1::Cmp::CertOrEncCert* New_ctor(::Org::BouncyCastle::Asn1::Asn1TaggedObject* tagged);

  /// @brief Method .ctor, addr 0xe64db4, size 0xf4, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1TaggedObject* tagged);

  /// @brief Method GetInstance, addr 0xe648c8, size 0x188, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Cmp::CertOrEncCert* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Cmp::CertOrEncCert* New_ctor(::Org::BouncyCastle::Asn1::Cmp::CmpCertificate* certificate);

  /// @brief Method .ctor, addr 0xe64ea8, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Cmp::CmpCertificate* certificate);

  static inline ::Org::BouncyCastle::Asn1::Cmp::CertOrEncCert* New_ctor(::Org::BouncyCastle::Asn1::Crmf::EncryptedValue* encryptedCert);

  /// @brief Method .ctor, addr 0xe64f20, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Crmf::EncryptedValue* encryptedCert);

  /// @brief Method get_Certificate, addr 0xe64f98, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Cmp::CmpCertificate* get_Certificate();

  /// @brief Method get_EncryptedCert, addr 0xe64fa0, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Crmf::EncryptedValue* get_EncryptedCert();

  /// @brief Method ToAsn1Object, addr 0xe64fa8, size 0x94, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "CertOrEncCert", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CertOrEncCert(CertOrEncCert&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CertOrEncCert", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CertOrEncCert(CertOrEncCert const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CertOrEncCert();

public:
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
