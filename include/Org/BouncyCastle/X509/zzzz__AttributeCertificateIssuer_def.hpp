#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AttributeCertificateIssuer)
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Name;
}
namespace Org::BouncyCastle::X509::Store {
class IX509Selector;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AttCertIssuer;
}
namespace Org::BouncyCastle::Asn1::X509 {
class GeneralNames;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::X509 {
class X509Certificate;
}
namespace System {
class ICloneable;
}
// Forward declare root types
namespace Org::BouncyCastle::X509 {
class AttributeCertificateIssuer;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::X509::AttributeCertificateIssuer);
// Type: Org.BouncyCastle.X509::AttributeCertificateIssuer
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1853))
// CS Name: ::Org.BouncyCastle.X509::AttributeCertificateIssuer*
class CORDL_TYPE AttributeCertificateIssuer : public ::System::Object {
public:
  // Declarations
  /// @brief Field form, offset 0x10, size 0x8
  __declspec(property(get = __get_form, put = __set_form))::Org::BouncyCastle::Asn1::Asn1Encodable* form;

  /// @brief Convert operator to "::Org::BouncyCastle::X509::Store::IX509Selector"
  constexpr operator ::Org::BouncyCastle::X509::Store::IX509Selector*() noexcept;

  /// @brief Convert operator to "::System::ICloneable"
  constexpr operator ::System::ICloneable*() noexcept;

  constexpr ::Org::BouncyCastle::Asn1::Asn1Encodable*& __get_form();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Encodable*> const& __get_form() const;

  constexpr void __set_form(::Org::BouncyCastle::Asn1::Asn1Encodable* value);

  static inline ::Org::BouncyCastle::X509::AttributeCertificateIssuer* New_ctor(::Org::BouncyCastle::Asn1::X509::AttCertIssuer* issuer);

  /// @brief Method .ctor addr 0x1103e98 size 0x34 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::AttCertIssuer* issuer);

  static inline ::Org::BouncyCastle::X509::AttributeCertificateIssuer* New_ctor(::Org::BouncyCastle::Asn1::X509::X509Name* principal);

  /// @brief Method .ctor addr 0x1103ecc size 0xdc virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::X509Name* principal);

  /// @brief Method GetNames addr 0x1103fa8 size 0x1fc virtual false final false
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> GetNames();

  /// @brief Method GetPrincipals addr 0x11041a4 size 0x1c0 virtual false final false
  inline ::ArrayW<::Org::BouncyCastle::Asn1::X509::X509Name*, ::Array<::Org::BouncyCastle::Asn1::X509::X509Name*>*> GetPrincipals();

  /// @brief Method MatchesDN addr 0x1104364 size 0x180 virtual false final false
  inline bool MatchesDN(::Org::BouncyCastle::Asn1::X509::X509Name* subject, ::Org::BouncyCastle::Asn1::X509::GeneralNames* targets);

  /// @brief Method Clone addr 0x11044e4 size 0x80 virtual true final true
  inline ::System::Object* Clone();

  /// @brief Method Match addr 0x1104564 size 0x18c virtual false final false
  inline bool Match(::Org::BouncyCastle::X509::X509Certificate* x509Cert);

  /// @brief Method Equals addr 0x11046f0 size 0xa8 virtual true final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode addr 0x1104798 size 0x1c virtual true final false
  inline int32_t GetHashCode();

  /// @brief Method Match addr 0x11047b4 size 0x8c virtual true final true
  inline bool Match(::System::Object* obj);

  // Ctor Parameters [CppParam { name: "", ty: "AttributeCertificateIssuer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AttributeCertificateIssuer(AttributeCertificateIssuer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AttributeCertificateIssuer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AttributeCertificateIssuer(AttributeCertificateIssuer const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AttributeCertificateIssuer();

public:
  /// @brief Field form, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Encodable* ___form;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::X509::AttributeCertificateIssuer, 0x18>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::X509::AttributeCertificateIssuer, ___form) == 0x10, "Offset mismatch!");

} // namespace Org::BouncyCastle::X509
NEED_NO_BOX(::Org::BouncyCastle::X509::AttributeCertificateIssuer);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::X509::AttributeCertificateIssuer*, "Org.BouncyCastle.X509", "AttributeCertificateIssuer");
