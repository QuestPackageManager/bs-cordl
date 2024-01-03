#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__DerBitString_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(KeyUsage)
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Extensions;
}
namespace Org::BouncyCastle::Asn1 {
class DerBitString;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class KeyUsage;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X509::KeyUsage);
// Type: Org.BouncyCastle.Asn1.X509::KeyUsage
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(34))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(369))
// CS Name: ::Org.BouncyCastle.Asn1.X509::KeyUsage*
class CORDL_TYPE KeyUsage : public ::Org::BouncyCastle::Asn1::DerBitString {
public:
  // Declarations
  /// @brief Method GetInstance, addr 0x11922bc, size 0x114, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X509::KeyUsage* GetInstance(::System::Object* obj);

  /// @brief Method FromExtensions, addr 0x1192464, size 0x74, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X509::KeyUsage* FromExtensions(::Org::BouncyCastle::Asn1::X509::X509Extensions* extensions);

  static inline ::Org::BouncyCastle::Asn1::X509::KeyUsage* New_ctor(int32_t usage);

  /// @brief Method .ctor, addr 0x11924d8, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(int32_t usage);

  static inline ::Org::BouncyCastle::Asn1::X509::KeyUsage* New_ctor(::Org::BouncyCastle::Asn1::DerBitString* usage);

  /// @brief Method .ctor, addr 0x11923d0, size 0x94, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DerBitString* usage);

  /// @brief Method ToString, addr 0x1192540, size 0xc0, virtual true, abstract: false, final false
  inline ::StringW ToString();

  // Ctor Parameters [CppParam { name: "", ty: "KeyUsage", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  KeyUsage(KeyUsage&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "KeyUsage", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  KeyUsage(KeyUsage const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr KeyUsage();

public:
  /// @brief Field DigitalSignature offset 0xffffffff size 0x4
  static constexpr int32_t DigitalSignature{ static_cast<int32_t>(0x80) };

  /// @brief Field NonRepudiation offset 0xffffffff size 0x4
  static constexpr int32_t NonRepudiation{ static_cast<int32_t>(0x40) };

  /// @brief Field KeyEncipherment offset 0xffffffff size 0x4
  static constexpr int32_t KeyEncipherment{ static_cast<int32_t>(0x20) };

  /// @brief Field DataEncipherment offset 0xffffffff size 0x4
  static constexpr int32_t DataEncipherment{ static_cast<int32_t>(0x10) };

  /// @brief Field KeyAgreement offset 0xffffffff size 0x4
  static constexpr int32_t KeyAgreement{ static_cast<int32_t>(0x8) };

  /// @brief Field KeyCertSign offset 0xffffffff size 0x4
  static constexpr int32_t KeyCertSign{ static_cast<int32_t>(0x4) };

  /// @brief Field CrlSign offset 0xffffffff size 0x4
  static constexpr int32_t CrlSign{ static_cast<int32_t>(0x2) };

  /// @brief Field EncipherOnly offset 0xffffffff size 0x4
  static constexpr int32_t EncipherOnly{ static_cast<int32_t>(0x1) };

  /// @brief Field DecipherOnly offset 0xffffffff size 0x4
  static constexpr int32_t DecipherOnly{ static_cast<int32_t>(0x8000) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X509::KeyUsage, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::KeyUsage);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::KeyUsage*, "Org.BouncyCastle.Asn1.X509", "KeyUsage");
