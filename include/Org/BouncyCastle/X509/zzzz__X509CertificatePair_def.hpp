#pragma once
// IWYU pragma private; include "Org/BouncyCastle/X509/X509CertificatePair.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(X509CertificatePair)
namespace Org::BouncyCastle::Asn1::X509 {
class CertificatePair;
}
namespace Org::BouncyCastle::X509 {
class X509Certificate;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::X509 {
class X509CertificatePair;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::X509::X509CertificatePair);
// Type: Org.BouncyCastle.X509::X509CertificatePair
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::X509 {
// Is value type: false
// CS Name: ::Org.BouncyCastle.X509::X509CertificatePair*
class CORDL_TYPE X509CertificatePair : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Forward)) ::Org::BouncyCastle::X509::X509Certificate* Forward;

  __declspec(property(get = get_Reverse)) ::Org::BouncyCastle::X509::X509Certificate* Reverse;

  /// @brief Field forward, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_forward, put = __cordl_internal_set_forward)) ::Org::BouncyCastle::X509::X509Certificate* forward;

  /// @brief Field reverse, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_reverse, put = __cordl_internal_set_reverse)) ::Org::BouncyCastle::X509::X509Certificate* reverse;

  /// @brief Method Equals, addr 0x25beb44, size 0xc0, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetEncoded, addr 0x25be8e0, size 0x254, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetEncoded();

  /// @brief Method GetHashCode, addr 0x25bec04, size 0x50, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::Org::BouncyCastle::X509::X509CertificatePair* New_ctor(::Org::BouncyCastle::X509::X509Certificate* forward, ::Org::BouncyCastle::X509::X509Certificate* reverse);

  static inline ::Org::BouncyCastle::X509::X509CertificatePair* New_ctor(::Org::BouncyCastle::Asn1::X509::CertificatePair* pair);

  constexpr ::Org::BouncyCastle::X509::X509Certificate*& __cordl_internal_get_forward();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::X509::X509Certificate*> const& __cordl_internal_get_forward() const;

  constexpr ::Org::BouncyCastle::X509::X509Certificate*& __cordl_internal_get_reverse();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::X509::X509Certificate*> const& __cordl_internal_get_reverse() const;

  constexpr void __cordl_internal_set_forward(::Org::BouncyCastle::X509::X509Certificate* value);

  constexpr void __cordl_internal_set_reverse(::Org::BouncyCastle::X509::X509Certificate* value);

  /// @brief Method .ctor, addr 0x25be814, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::X509::X509Certificate* forward, ::Org::BouncyCastle::X509::X509Certificate* reverse);

  /// @brief Method .ctor, addr 0x25be840, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::CertificatePair* pair);

  /// @brief Method get_Forward, addr 0x25beb34, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::X509::X509Certificate* get_Forward();

  /// @brief Method get_Reverse, addr 0x25beb3c, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::X509::X509Certificate* get_Reverse();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X509CertificatePair();

public:
  // Ctor Parameters [CppParam { name: "", ty: "X509CertificatePair", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X509CertificatePair(X509CertificatePair&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X509CertificatePair", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X509CertificatePair(X509CertificatePair const&) = delete;

  /// @brief Field forward, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::X509::X509Certificate* ___forward;

  /// @brief Field reverse, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::X509::X509Certificate* ___reverse;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1861 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::X509::X509CertificatePair, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::X509::X509CertificatePair, ___forward) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::X509::X509CertificatePair, ___reverse) == 0x18, "Offset mismatch!");

} // namespace Org::BouncyCastle::X509
NEED_NO_BOX(::Org::BouncyCastle::X509::X509CertificatePair);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::X509::X509CertificatePair*, "Org.BouncyCastle.X509", "X509CertificatePair");
