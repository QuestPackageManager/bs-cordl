#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/UserMappingType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UserMappingType)
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class UserMappingType;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::UserMappingType);
// Dependencies System.Object
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Tls.UserMappingType
class CORDL_TYPE UserMappingType : public ::System::Object {
public:
  // Declarations
  static inline ::Org::BouncyCastle::Crypto::Tls::UserMappingType* New_ctor();

  /// @brief Method .ctor, addr 0x339dc6c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UserMappingType();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UserMappingType", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UserMappingType(UserMappingType&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UserMappingType", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UserMappingType(UserMappingType const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1334 };

  /// @brief Field upn_domain_hint offset 0xffffffff size 0x1
  static constexpr uint8_t upn_domain_hint{ static_cast<uint8_t>(0x40u) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::UserMappingType, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::UserMappingType);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::UserMappingType*, "Org.BouncyCastle.Crypto.Tls", "UserMappingType");
