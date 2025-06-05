#pragma once
// IWYU pragma private; include "System/Security/Cryptography/HMACSHA256.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Cryptography/zzzz__HMAC_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HMACSHA256)
// Forward declare root types
namespace System::Security::Cryptography {
class HMACSHA256;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::HMACSHA256);
// Dependencies System.Security.Cryptography.HMAC
namespace System::Security::Cryptography {
// Is value type: false
// CS Name: System.Security.Cryptography.HMACSHA256
class CORDL_TYPE HMACSHA256 : public ::System::Security::Cryptography::HMAC {
public:
  // Declarations
  static inline ::System::Security::Cryptography::HMACSHA256* New_ctor();

  static inline ::System::Security::Cryptography::HMACSHA256* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> key);

  /// @brief Method .ctor, addr 0x3ca1a34, size 0x24, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x3ca1a58, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> key);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HMACSHA256();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HMACSHA256", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HMACSHA256(HMACSHA256&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HMACSHA256", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HMACSHA256(HMACSHA256 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2937 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::HMACSHA256, 0x68>, "Size mismatch!");

} // namespace System::Security::Cryptography
NEED_NO_BOX(::System::Security::Cryptography::HMACSHA256);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::HMACSHA256*, "System.Security.Cryptography", "HMACSHA256");
