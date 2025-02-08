#pragma once
// IWYU pragma private; include "Internal/Cryptography/Helpers.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Helpers)
// Forward declare root types
namespace Internal::Cryptography {
class Helpers;
}
// Write type traits
MARK_REF_PTR_T(::Internal::Cryptography::Helpers);
// Dependencies System.Object
namespace Internal::Cryptography {
// Is value type: false
// CS Name: Internal.Cryptography.Helpers
class CORDL_TYPE Helpers : public ::System::Object {
public:
  // Declarations
  /// @brief Method CloneByteArray, addr 0x3c73d6c, size 0x78, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> CloneByteArray(::ArrayW<uint8_t, ::Array<uint8_t>*> src);

  /// @brief Method NibbleToHex, addr 0x3c73ed0, size 0x1c, virtual false, abstract: false, final false
  static inline char16_t NibbleToHex(uint8_t b);

  /// @brief Method ToHexArrayUpper, addr 0x3c73de4, size 0xec, virtual false, abstract: false, final false
  static inline ::ArrayW<char16_t, ::Array<char16_t>*> ToHexArrayUpper(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes);

  /// @brief Method ToHexStringUpper, addr 0x3c73eec, size 0x10, virtual false, abstract: false, final false
  static inline ::StringW ToHexStringUpper(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Helpers();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Helpers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Helpers(Helpers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Helpers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Helpers(Helpers const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2309 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Internal::Cryptography::Helpers, 0x10>, "Size mismatch!");

} // namespace Internal::Cryptography
NEED_NO_BOX(::Internal::Cryptography::Helpers);
DEFINE_IL2CPP_ARG_TYPE(::Internal::Cryptography::Helpers*, "Internal.Cryptography", "Helpers");
