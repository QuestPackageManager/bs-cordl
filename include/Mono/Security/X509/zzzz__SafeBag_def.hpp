#pragma once
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
// Type: Mono.Security.X509::SafeBag
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Mono::Security::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13745))
// CS Name: ::Mono.Security.X509::SafeBag*
class CORDL_TYPE SafeBag : public ::System::Object {
public:
  // Declarations
  /// @brief Field _bagOID, offset 0x10, size 0x8
  __declspec(property(get = __get__bagOID, put = __set__bagOID))::StringW _bagOID;

  /// @brief Field _asn1, offset 0x18, size 0x8
  __declspec(property(get = __get__asn1, put = __set__asn1))::Mono::Security::ASN1* _asn1;

  __declspec(property(get = get_BagOID))::StringW BagOID;

  __declspec(property(get = get_ASN1))::Mono::Security::ASN1* ASN1;

  constexpr ::StringW& __get__bagOID();

  constexpr ::StringW const& __get__bagOID() const;

  constexpr void __set__bagOID(::StringW value);

  constexpr ::Mono::Security::ASN1*& __get__asn1();

  constexpr ::cordl_internals::to_const_pointer<::Mono::Security::ASN1*> const& __get__asn1() const;

  constexpr void __set__asn1(::Mono::Security::ASN1* value);

  static inline ::Mono::Security::X509::SafeBag* New_ctor(::StringW bagOID, ::Mono::Security::ASN1* asn1);

  /// @brief Method .ctor addr 0x23f0550 size 0x2c virtual false final false
  inline void _ctor(::StringW bagOID, ::Mono::Security::ASN1* asn1);

  /// @brief Method get_BagOID addr 0x23f057c size 0x8 virtual false final false
  inline ::StringW get_BagOID();

  /// @brief Method get_ASN1 addr 0x23f0584 size 0x8 virtual false final false
  inline ::Mono::Security::ASN1* get_ASN1();

  // Ctor Parameters [CppParam { name: "", ty: "SafeBag", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SafeBag(SafeBag&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SafeBag", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SafeBag(SafeBag const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SafeBag();

public:
  /// @brief Field _bagOID, offset: 0x10, size: 0x8, def value: None
  ::StringW ____bagOID;

  /// @brief Field _asn1, offset: 0x18, size: 0x8, def value: None
  ::Mono::Security::ASN1* ____asn1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Security::X509::SafeBag, 0x20>, "Size mismatch!");

} // namespace Mono::Security::X509
NEED_NO_BOX(::Mono::Security::X509::SafeBag);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::X509::SafeBag*, "Mono.Security.X509", "SafeBag");
