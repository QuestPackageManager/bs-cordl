#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(RevRepContentBuilder)
namespace Org::BouncyCastle::Asn1::Cmp {
class PkiStatusInfo;
}
namespace Org::BouncyCastle::Asn1::X509 {
class CertificateList;
}
namespace Org::BouncyCastle::Asn1::Crmf {
class CertId;
}
namespace Org::BouncyCastle::Asn1::Cmp {
class RevRepContent;
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
// Type: Org.BouncyCastle.Asn1.Cmp::RevRepContentBuilder
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Cmp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(52))
// CS Name: ::Org.BouncyCastle.Asn1.Cmp::RevRepContentBuilder*
class CORDL_TYPE RevRepContentBuilder : public ::System::Object {
public:
  // Declarations
  /// @brief Field status, offset 0x10, size 0x8
  __declspec(property(get = __get_status, put = __set_status))::Org::BouncyCastle::Asn1::Asn1EncodableVector* status;

  /// @brief Field revCerts, offset 0x18, size 0x8
  __declspec(property(get = __get_revCerts, put = __set_revCerts))::Org::BouncyCastle::Asn1::Asn1EncodableVector* revCerts;

  /// @brief Field crls, offset 0x20, size 0x8
  __declspec(property(get = __get_crls, put = __set_crls))::Org::BouncyCastle::Asn1::Asn1EncodableVector* crls;

  constexpr ::Org::BouncyCastle::Asn1::Asn1EncodableVector*& __get_status();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1EncodableVector*> const& __get_status() const;

  constexpr void __set_status(::Org::BouncyCastle::Asn1::Asn1EncodableVector* value);

  constexpr ::Org::BouncyCastle::Asn1::Asn1EncodableVector*& __get_revCerts();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1EncodableVector*> const& __get_revCerts() const;

  constexpr void __set_revCerts(::Org::BouncyCastle::Asn1::Asn1EncodableVector* value);

  constexpr ::Org::BouncyCastle::Asn1::Asn1EncodableVector*& __get_crls();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1EncodableVector*> const& __get_crls() const;

  constexpr void __set_crls(::Org::BouncyCastle::Asn1::Asn1EncodableVector* value);

  /// @brief Method Add, addr 0xe6f154, size 0x28, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Cmp::RevRepContentBuilder* Add(::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo* status);

  /// @brief Method Add, addr 0xe6f17c, size 0xac, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Cmp::RevRepContentBuilder* Add(::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo* status, ::Org::BouncyCastle::Asn1::Crmf::CertId* certId);

  /// @brief Method AddCrl, addr 0xe6f228, size 0x28, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Cmp::RevRepContentBuilder* AddCrl(::Org::BouncyCastle::Asn1::X509::CertificateList* crl);

  /// @brief Method Build, addr 0xe6f250, size 0x1a4, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Cmp::RevRepContent* Build();

  static inline ::Org::BouncyCastle::Asn1::Cmp::RevRepContentBuilder* New_ctor();

  /// @brief Method .ctor, addr 0xe6f3f4, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "RevRepContentBuilder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RevRepContentBuilder(RevRepContentBuilder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RevRepContentBuilder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RevRepContentBuilder(RevRepContentBuilder const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RevRepContentBuilder();

public:
  /// @brief Field status, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1EncodableVector* ___status;

  /// @brief Field revCerts, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1EncodableVector* ___revCerts;

  /// @brief Field crls, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1EncodableVector* ___crls;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Cmp::RevRepContentBuilder, 0x28>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cmp::RevRepContentBuilder, ___status) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cmp::RevRepContentBuilder, ___revCerts) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cmp::RevRepContentBuilder, ___crls) == 0x20, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::Cmp
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cmp::RevRepContentBuilder);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cmp::RevRepContentBuilder*, "Org.BouncyCastle.Asn1.Cmp", "RevRepContentBuilder");
