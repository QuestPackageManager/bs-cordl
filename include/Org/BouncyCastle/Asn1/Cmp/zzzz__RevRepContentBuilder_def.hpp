#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Cmp/RevRepContentBuilder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(RevRepContentBuilder)
namespace Org::BouncyCastle::Asn1::Cmp {
class PkiStatusInfo;
}
namespace Org::BouncyCastle::Asn1::Cmp {
class RevRepContent;
}
namespace Org::BouncyCastle::Asn1::Crmf {
class CertId;
}
namespace Org::BouncyCastle::Asn1::X509 {
class CertificateList;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1EncodableVector;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cmp {
class RevRepContentBuilder;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Cmp::RevRepContentBuilder);
// Dependencies System.Object
namespace Org::BouncyCastle::Asn1::Cmp {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.Cmp.RevRepContentBuilder
class CORDL_TYPE RevRepContentBuilder : public ::System::Object {
public:
  // Declarations
  /// @brief Field crls, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_crls, put = __cordl_internal_set_crls)) ::Org::BouncyCastle::Asn1::Asn1EncodableVector* crls;

  /// @brief Field revCerts, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_revCerts, put = __cordl_internal_set_revCerts)) ::Org::BouncyCastle::Asn1::Asn1EncodableVector* revCerts;

  /// @brief Field status, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_status, put = __cordl_internal_set_status)) ::Org::BouncyCastle::Asn1::Asn1EncodableVector* status;

  /// @brief Method Add, addr 0x22fc088, size 0x28, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Cmp::RevRepContentBuilder* Add(::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo* status);

  /// @brief Method Add, addr 0x22fc0b0, size 0xa8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Cmp::RevRepContentBuilder* Add(::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo* status, ::Org::BouncyCastle::Asn1::Crmf::CertId* certId);

  /// @brief Method AddCrl, addr 0x22fc158, size 0x28, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Cmp::RevRepContentBuilder* AddCrl(::Org::BouncyCastle::Asn1::X509::CertificateList* crl);

  /// @brief Method Build, addr 0x22fc180, size 0x18c, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Cmp::RevRepContent* Build();

  static inline ::Org::BouncyCastle::Asn1::Cmp::RevRepContentBuilder* New_ctor();

  constexpr ::Org::BouncyCastle::Asn1::Asn1EncodableVector* const& __cordl_internal_get_crls() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1EncodableVector*& __cordl_internal_get_crls();

  constexpr ::Org::BouncyCastle::Asn1::Asn1EncodableVector* const& __cordl_internal_get_revCerts() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1EncodableVector*& __cordl_internal_get_revCerts();

  constexpr ::Org::BouncyCastle::Asn1::Asn1EncodableVector* const& __cordl_internal_get_status() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1EncodableVector*& __cordl_internal_get_status();

  constexpr void __cordl_internal_set_crls(::Org::BouncyCastle::Asn1::Asn1EncodableVector* value);

  constexpr void __cordl_internal_set_revCerts(::Org::BouncyCastle::Asn1::Asn1EncodableVector* value);

  constexpr void __cordl_internal_set_status(::Org::BouncyCastle::Asn1::Asn1EncodableVector* value);

  /// @brief Method .ctor, addr 0x22fc30c, size 0x90, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RevRepContentBuilder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RevRepContentBuilder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RevRepContentBuilder(RevRepContentBuilder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RevRepContentBuilder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RevRepContentBuilder(RevRepContentBuilder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 52 };

  /// @brief Field status, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1EncodableVector* ___status;

  /// @brief Field revCerts, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1EncodableVector* ___revCerts;

  /// @brief Field crls, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1EncodableVector* ___crls;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::Cmp::RevRepContentBuilder, ___status) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cmp::RevRepContentBuilder, ___revCerts) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cmp::RevRepContentBuilder, ___crls) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Cmp::RevRepContentBuilder, 0x28>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Cmp
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cmp::RevRepContentBuilder);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cmp::RevRepContentBuilder*, "Org.BouncyCastle.Asn1.Cmp", "RevRepContentBuilder");
