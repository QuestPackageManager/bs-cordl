#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(CertificatePair)
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509CertificateStructure;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class CertificatePair;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X509::CertificatePair);
// Type: Org.BouncyCastle.Asn1.X509::CertificatePair
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(348))
// CS Name: ::Org.BouncyCastle.Asn1.X509::CertificatePair*
class CORDL_TYPE CertificatePair : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field forward, offset 0x10, size 0x8
  __declspec(property(get = __get_forward, put = __set_forward))::Org::BouncyCastle::Asn1::X509::X509CertificateStructure* forward;

  /// @brief Field reverse, offset 0x18, size 0x8
  __declspec(property(get = __get_reverse, put = __set_reverse))::Org::BouncyCastle::Asn1::X509::X509CertificateStructure* reverse;

  __declspec(property(get = get_Forward))::Org::BouncyCastle::Asn1::X509::X509CertificateStructure* Forward;

  __declspec(property(get = get_Reverse))::Org::BouncyCastle::Asn1::X509::X509CertificateStructure* Reverse;

  constexpr ::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*& __get_forward();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*> const& __get_forward() const;

  constexpr void __set_forward(::Org::BouncyCastle::Asn1::X509::X509CertificateStructure* value);

  constexpr ::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*& __get_reverse();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*> const& __get_reverse() const;

  constexpr void __set_reverse(::Org::BouncyCastle::Asn1::X509::X509CertificateStructure* value);

  /// @brief Method GetInstance, addr 0x10870e0, size 0x188, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X509::CertificatePair* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::X509::CertificatePair* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor, addr 0x1087268, size 0x450, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  static inline ::Org::BouncyCastle::Asn1::X509::CertificatePair* New_ctor(::Org::BouncyCastle::Asn1::X509::X509CertificateStructure* forward,
                                                                           ::Org::BouncyCastle::Asn1::X509::X509CertificateStructure* reverse);

  /// @brief Method .ctor, addr 0x10876b8, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::X509CertificateStructure* forward, ::Org::BouncyCastle::Asn1::X509::X509CertificateStructure* reverse);

  /// @brief Method ToAsn1Object, addr 0x10876e4, size 0xc0, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  /// @brief Method get_Forward, addr 0x10877a4, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::X509CertificateStructure* get_Forward();

  /// @brief Method get_Reverse, addr 0x10877ac, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::X509CertificateStructure* get_Reverse();

  // Ctor Parameters [CppParam { name: "", ty: "CertificatePair", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CertificatePair(CertificatePair&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CertificatePair", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CertificatePair(CertificatePair const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CertificatePair();

public:
  /// @brief Field forward, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::X509CertificateStructure* ___forward;

  /// @brief Field reverse, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::X509CertificateStructure* ___reverse;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X509::CertificatePair, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::CertificatePair, ___forward) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::CertificatePair, ___reverse) == 0x18, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::CertificatePair);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::CertificatePair*, "Org.BouncyCastle.Asn1.X509", "CertificatePair");
