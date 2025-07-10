#pragma once
// IWYU pragma private; include "Mono/Security/X509/SafeBag.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SafeBag)
namespace Mono::Security {
class ASN1;
}
// Forward declare root types
namespace Mono::Security::X509 {
class SafeBag;
}
// Write type traits
MARK_REF_PTR_T(::Mono::Security::X509::SafeBag);
// Dependencies System.Object
namespace Mono::Security::X509 {
// Is value type: false
// CS Name: Mono.Security.X509.SafeBag
class CORDL_TYPE SafeBag : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_ASN1)) ::Mono::Security::ASN1* ASN1;

  __declspec(property(get = get_BagOID)) ::StringW BagOID;

  /// @brief Field _asn1, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__asn1, put = __cordl_internal_set__asn1)) ::Mono::Security::ASN1* _asn1;

  /// @brief Field _bagOID, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__bagOID, put = __cordl_internal_set__bagOID)) ::StringW _bagOID;

  static inline ::Mono::Security::X509::SafeBag* New_ctor(::StringW bagOID, ::Mono::Security::ASN1* asn1);

  constexpr ::Mono::Security::ASN1* const& __cordl_internal_get__asn1() const;

  constexpr ::Mono::Security::ASN1*& __cordl_internal_get__asn1();

  constexpr ::StringW const& __cordl_internal_get__bagOID() const;

  constexpr ::StringW& __cordl_internal_get__bagOID();

  constexpr void __cordl_internal_set__asn1(::Mono::Security::ASN1* value);

  constexpr void __cordl_internal_set__bagOID(::StringW value);

  /// @brief Method .ctor, addr 0x3c33afc, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::StringW bagOID, ::Mono::Security::ASN1* asn1);

  /// @brief Method get_ASN1, addr 0x3c33b30, size 0x8, virtual false, abstract: false, final false
  inline ::Mono::Security::ASN1* get_ASN1();

  /// @brief Method get_BagOID, addr 0x3c33b28, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_BagOID();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SafeBag();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SafeBag", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SafeBag(SafeBag&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SafeBag", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SafeBag(SafeBag const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15925 };

  /// @brief Field _bagOID, offset: 0x10, size: 0x8, def value: None
  ::StringW ____bagOID;

  /// @brief Field _asn1, offset: 0x18, size: 0x8, def value: None
  ::Mono::Security::ASN1* ____asn1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mono::Security::X509::SafeBag, ____bagOID) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::X509::SafeBag, ____asn1) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Mono::Security::X509::SafeBag, 0x20>, "Size mismatch!");

} // namespace Mono::Security::X509
NEED_NO_BOX(::Mono::Security::X509::SafeBag);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::X509::SafeBag*, "Mono.Security.X509", "SafeBag");
