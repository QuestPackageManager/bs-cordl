#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/X509/KeyUsage.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__DerBitString_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(KeyUsage)
namespace Org::BouncyCastle::Asn1::X509 {
class X509Extensions;
}
namespace Org::BouncyCastle::Asn1 {
class DerBitString;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class KeyUsage;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X509::KeyUsage);
// Dependencies Org.BouncyCastle.Asn1.DerBitString
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.X509.KeyUsage
class CORDL_TYPE KeyUsage : public ::Org::BouncyCastle::Asn1::DerBitString {
public:
  // Declarations
  /// @brief Method FromExtensions, addr 0x2608d38, size 0x74, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X509::KeyUsage* FromExtensions(::Org::BouncyCastle::Asn1::X509::X509Extensions* extensions);

  /// @brief Method GetInstance, addr 0x2608b90, size 0x114, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X509::KeyUsage* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::X509::KeyUsage* New_ctor(::Org::BouncyCastle::Asn1::DerBitString* usage);

  static inline ::Org::BouncyCastle::Asn1::X509::KeyUsage* New_ctor(int32_t usage);

  /// @brief Method ToString, addr 0x2608e14, size 0xb8, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x2608ca4, size 0x94, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DerBitString* usage);

  /// @brief Method .ctor, addr 0x2608dac, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(int32_t usage);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr KeyUsage();

public:
  // Ctor Parameters [CppParam { name: "", ty: "KeyUsage", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  KeyUsage(KeyUsage&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "KeyUsage", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  KeyUsage(KeyUsage const&) = delete;

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 369 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X509::KeyUsage, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::KeyUsage);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::KeyUsage*, "Org.BouncyCastle.Asn1.X509", "KeyUsage");
