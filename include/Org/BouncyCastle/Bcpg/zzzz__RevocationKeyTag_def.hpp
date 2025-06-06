#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Bcpg/RevocationKeyTag.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RevocationKeyTag)
// Forward declare root types
namespace Org::BouncyCastle::Bcpg {
struct RevocationKeyTag;
}
// Write type traits
MARK_VAL_T(::Org::BouncyCastle::Bcpg::RevocationKeyTag);
// Dependencies
namespace Org::BouncyCastle::Bcpg {
// Is value type: true
// CS Name: Org.BouncyCastle.Bcpg.RevocationKeyTag
struct CORDL_TYPE RevocationKeyTag {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint8_t;

  /// @brief Nested struct __RevocationKeyTag_Unwrapped
  enum struct __RevocationKeyTag_Unwrapped : uint8_t {
    __E_ClassDefault = static_cast<uint8_t>(0x80u),
    __E_ClassSensitive = static_cast<uint8_t>(0x40u),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __RevocationKeyTag_Unwrapped() const noexcept {
    return static_cast<__RevocationKeyTag_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator uint8_t() const noexcept {
    return static_cast<uint8_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr RevocationKeyTag();

  // Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr RevocationKeyTag(uint8_t value__) noexcept;

  /// @brief Field ClassDefault value: U8(128)
  static ::Org::BouncyCastle::Bcpg::RevocationKeyTag const ClassDefault;

  /// @brief Field ClassSensitive value: U8(64)
  static ::Org::BouncyCastle::Bcpg::RevocationKeyTag const ClassSensitive;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 543 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Field value__, offset: 0x0, size: 0x1, def value: None
  uint8_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Bcpg::RevocationKeyTag, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::RevocationKeyTag, 0x1>, "Size mismatch!");

} // namespace Org::BouncyCastle::Bcpg
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::RevocationKeyTag, "Org.BouncyCastle.Bcpg", "RevocationKeyTag");
