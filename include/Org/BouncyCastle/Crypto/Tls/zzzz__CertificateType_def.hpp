#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/CertificateType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CertificateType)
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class CertificateType;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::CertificateType);
// Dependencies System.Object
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Tls.CertificateType
class CORDL_TYPE CertificateType : public ::System::Object {
public:
  // Declarations
  static inline ::Org::BouncyCastle::Crypto::Tls::CertificateType* New_ctor();

  /// @brief Method .ctor, addr 0x23e6ac0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CertificateType();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CertificateType", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CertificateType(CertificateType&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CertificateType", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CertificateType(CertificateType const&) = delete;

  /// @brief Field OpenPGP offset 0xffffffff size 0x1
  static constexpr uint8_t OpenPGP{ static_cast<uint8_t>(0x1u) };

  /// @brief Field RawPublicKey offset 0xffffffff size 0x1
  static constexpr uint8_t RawPublicKey{ static_cast<uint8_t>(0x2u) };

  /// @brief Field X509 offset 0xffffffff size 0x1
  static constexpr uint8_t X509{ static_cast<uint8_t>(0x0u) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1191 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::CertificateType, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::CertificateType);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::CertificateType*, "Org.BouncyCastle.Crypto.Tls", "CertificateType");
