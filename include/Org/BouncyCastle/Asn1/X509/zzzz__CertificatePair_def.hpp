#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/X509/CertificatePair.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(CertificatePair)
namespace Org::BouncyCastle::Asn1::X509 {
class X509CertificateStructure;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class CertificatePair;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X509::CertificatePair);
// Dependencies Org.BouncyCastle.Asn1.Asn1Encodable
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.X509.CertificatePair
class CORDL_TYPE CertificatePair : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_Forward)) ::Org::BouncyCastle::Asn1::X509::X509CertificateStructure* Forward;

  __declspec(property(get = get_Reverse)) ::Org::BouncyCastle::Asn1::X509::X509CertificateStructure* Reverse;

  /// @brief Field forward, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_forward, put = __cordl_internal_set_forward)) ::Org::BouncyCastle::Asn1::X509::X509CertificateStructure* forward;

  /// @brief Field reverse, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_reverse, put = __cordl_internal_set_reverse)) ::Org::BouncyCastle::Asn1::X509::X509CertificateStructure* reverse;

  /// @brief Method GetInstance, addr 0x25085e8, size 0x17c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X509::CertificatePair* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::X509::CertificatePair* New_ctor(::Org::BouncyCastle::Asn1::X509::X509CertificateStructure* forward,
                                                                           ::Org::BouncyCastle::Asn1::X509::X509CertificateStructure* reverse);

  static inline ::Org::BouncyCastle::Asn1::X509::CertificatePair* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method ToAsn1Object, addr 0x2508bd0, size 0xbc, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::X509::X509CertificateStructure* const& __cordl_internal_get_forward() const;

  constexpr ::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*& __cordl_internal_get_forward();

  constexpr ::Org::BouncyCastle::Asn1::X509::X509CertificateStructure* const& __cordl_internal_get_reverse() const;

  constexpr ::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*& __cordl_internal_get_reverse();

  constexpr void __cordl_internal_set_forward(::Org::BouncyCastle::Asn1::X509::X509CertificateStructure* value);

  constexpr void __cordl_internal_set_reverse(::Org::BouncyCastle::Asn1::X509::X509CertificateStructure* value);

  /// @brief Method .ctor, addr 0x2508ba4, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::X509CertificateStructure* forward, ::Org::BouncyCastle::Asn1::X509::X509CertificateStructure* reverse);

  /// @brief Method .ctor, addr 0x2508764, size 0x440, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_Forward, addr 0x2508c8c, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::X509CertificateStructure* get_Forward();

  /// @brief Method get_Reverse, addr 0x2508c94, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::X509CertificateStructure* get_Reverse();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CertificatePair();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CertificatePair", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CertificatePair(CertificatePair&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CertificatePair", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CertificatePair(CertificatePair const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 348 };

  /// @brief Field forward, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::X509CertificateStructure* ___forward;

  /// @brief Field reverse, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::X509CertificateStructure* ___reverse;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::CertificatePair, ___forward) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::CertificatePair, ___reverse) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X509::CertificatePair, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::CertificatePair);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::CertificatePair*, "Org.BouncyCastle.Asn1.X509", "CertificatePair");
