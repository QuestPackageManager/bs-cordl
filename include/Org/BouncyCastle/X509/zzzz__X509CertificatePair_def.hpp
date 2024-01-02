#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(X509CertificatePair)
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1::X509 {
class CertificatePair;
}
namespace Org::BouncyCastle::X509 {
class X509Certificate;
}
// Forward declare root types
namespace Org::BouncyCastle::X509 {
class X509CertificatePair;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::X509::X509CertificatePair);
// Type: Org.BouncyCastle.X509::X509CertificatePair
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1861))
// CS Name: ::Org.BouncyCastle.X509::X509CertificatePair*
class CORDL_TYPE X509CertificatePair : public ::System::Object {
public:
  // Declarations
  /// @brief Field forward, offset 0x10, size 0x8
  __declspec(property(get = __get_forward, put = __set_forward))::Org::BouncyCastle::X509::X509Certificate* forward;

  /// @brief Field reverse, offset 0x18, size 0x8
  __declspec(property(get = __get_reverse, put = __set_reverse))::Org::BouncyCastle::X509::X509Certificate* reverse;

  __declspec(property(get = get_Forward))::Org::BouncyCastle::X509::X509Certificate* Forward;

  __declspec(property(get = get_Reverse))::Org::BouncyCastle::X509::X509Certificate* Reverse;

  constexpr ::Org::BouncyCastle::X509::X509Certificate*& __get_forward();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::X509::X509Certificate*> const& __get_forward() const;

  constexpr void __set_forward(::Org::BouncyCastle::X509::X509Certificate* value);

  constexpr ::Org::BouncyCastle::X509::X509Certificate*& __get_reverse();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::X509::X509Certificate*> const& __get_reverse() const;

  constexpr void __set_reverse(::Org::BouncyCastle::X509::X509Certificate* value);

  static inline ::Org::BouncyCastle::X509::X509CertificatePair* New_ctor(::Org::BouncyCastle::X509::X509Certificate* forward, ::Org::BouncyCastle::X509::X509Certificate* reverse);

  /// @brief Method .ctor, addr 0x1179d04, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::X509::X509Certificate* forward, ::Org::BouncyCastle::X509::X509Certificate* reverse);

  static inline ::Org::BouncyCastle::X509::X509CertificatePair* New_ctor(::Org::BouncyCastle::Asn1::X509::CertificatePair* pair);

  /// @brief Method .ctor, addr 0x1179d30, size 0xa8, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::CertificatePair* pair);

  /// @brief Method GetEncoded, addr 0x1179dd8, size 0x270, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetEncoded();

  /// @brief Method get_Forward, addr 0x117a048, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::X509::X509Certificate* get_Forward();

  /// @brief Method get_Reverse, addr 0x117a050, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::X509::X509Certificate* get_Reverse();

  /// @brief Method Equals, addr 0x117a058, size 0xc0, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x117a118, size 0x50, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  // Ctor Parameters [CppParam { name: "", ty: "X509CertificatePair", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X509CertificatePair(X509CertificatePair&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X509CertificatePair", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X509CertificatePair(X509CertificatePair const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X509CertificatePair();

public:
  /// @brief Field forward, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::X509::X509Certificate* ___forward;

  /// @brief Field reverse, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::X509::X509Certificate* ___reverse;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::X509::X509CertificatePair, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::X509::X509CertificatePair, ___forward) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::X509::X509CertificatePair, ___reverse) == 0x18, "Offset mismatch!");

} // namespace Org::BouncyCastle::X509
NEED_NO_BOX(::Org::BouncyCastle::X509::X509CertificatePair);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::X509::X509CertificatePair*, "Org.BouncyCastle.X509", "X509CertificatePair");
