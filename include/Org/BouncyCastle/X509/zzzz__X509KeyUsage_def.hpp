#pragma once
// IWYU pragma private; include "Org/BouncyCastle/X509/X509KeyUsage.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(X509KeyUsage)
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
// Forward declare root types
namespace Org::BouncyCastle::X509 {
class X509KeyUsage;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::X509::X509KeyUsage);
// Dependencies Org.BouncyCastle.Asn1.Asn1Encodable
namespace Org::BouncyCastle::X509 {
// Is value type: false
// CS Name: Org.BouncyCastle.X509.X509KeyUsage
class CORDL_TYPE X509KeyUsage : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field usage, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_usage, put = __cordl_internal_set_usage)) int32_t usage;

  static inline ::Org::BouncyCastle::X509::X509KeyUsage* New_ctor(int32_t usage);

  /// @brief Method ToAsn1Object, addr 0x25f95c4, size 0x60, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr int32_t const& __cordl_internal_get_usage() const;

  constexpr int32_t& __cordl_internal_get_usage();

  constexpr void __cordl_internal_set_usage(int32_t value);

  /// @brief Method .ctor, addr 0x25f959c, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t usage);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X509KeyUsage();

public:
  // Ctor Parameters [CppParam { name: "", ty: "X509KeyUsage", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X509KeyUsage(X509KeyUsage&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X509KeyUsage", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X509KeyUsage(X509KeyUsage const&) = delete;

  /// @brief Field CrlSign offset 0xffffffff size 0x4
  static constexpr int32_t CrlSign{ static_cast<int32_t>(0x2) };

  /// @brief Field DataEncipherment offset 0xffffffff size 0x4
  static constexpr int32_t DataEncipherment{ static_cast<int32_t>(0x10) };

  /// @brief Field DecipherOnly offset 0xffffffff size 0x4
  static constexpr int32_t DecipherOnly{ static_cast<int32_t>(0x8000) };

  /// @brief Field DigitalSignature offset 0xffffffff size 0x4
  static constexpr int32_t DigitalSignature{ static_cast<int32_t>(0x80) };

  /// @brief Field EncipherOnly offset 0xffffffff size 0x4
  static constexpr int32_t EncipherOnly{ static_cast<int32_t>(0x1) };

  /// @brief Field KeyAgreement offset 0xffffffff size 0x4
  static constexpr int32_t KeyAgreement{ static_cast<int32_t>(0x8) };

  /// @brief Field KeyCertSign offset 0xffffffff size 0x4
  static constexpr int32_t KeyCertSign{ static_cast<int32_t>(0x4) };

  /// @brief Field KeyEncipherment offset 0xffffffff size 0x4
  static constexpr int32_t KeyEncipherment{ static_cast<int32_t>(0x20) };

  /// @brief Field NonRepudiation offset 0xffffffff size 0x4
  static constexpr int32_t NonRepudiation{ static_cast<int32_t>(0x40) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1867 };

  /// @brief Field usage, offset: 0x10, size: 0x4, def value: None
  int32_t ___usage;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::X509::X509KeyUsage, ___usage) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::X509::X509KeyUsage, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::X509
NEED_NO_BOX(::Org::BouncyCastle::X509::X509KeyUsage);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::X509::X509KeyUsage*, "Org.BouncyCastle.X509", "X509KeyUsage");
