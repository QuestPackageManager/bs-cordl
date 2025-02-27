#pragma once
// IWYU pragma private; include "System/Security/Cryptography/HMACSHA1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Cryptography/zzzz__HMAC_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HMACSHA1)
// Forward declare root types
namespace System::Security::Cryptography {
class HMACSHA1;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::HMACSHA1);
// Dependencies System.Security.Cryptography.HMAC
namespace System::Security::Cryptography {
// Is value type: false
// CS Name: System.Security.Cryptography.HMACSHA1
class CORDL_TYPE HMACSHA1 : public ::System::Security::Cryptography::HMAC {
public:
  // Declarations
  static inline ::System::Security::Cryptography::HMACSHA1* New_ctor();

  static inline ::System::Security::Cryptography::HMACSHA1* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> key);

  static inline ::System::Security::Cryptography::HMACSHA1* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> key, bool useManagedSha1);

  /// @brief Method .ctor, addr 0x3cae8d0, size 0x28, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x3caef78, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> key);

  /// @brief Method .ctor, addr 0x3caef80, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> key, bool useManagedSha1);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HMACSHA1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HMACSHA1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HMACSHA1(HMACSHA1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HMACSHA1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HMACSHA1(HMACSHA1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2936 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::HMACSHA1, 0x68>, "Size mismatch!");

} // namespace System::Security::Cryptography
NEED_NO_BOX(::System::Security::Cryptography::HMACSHA1);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::HMACSHA1*, "System.Security.Cryptography", "HMACSHA1");
