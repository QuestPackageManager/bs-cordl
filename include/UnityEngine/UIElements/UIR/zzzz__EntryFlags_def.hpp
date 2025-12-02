#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/EntryFlags.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EntryFlags)
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
struct EntryFlags;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::UIR::EntryFlags);
// Dependencies
namespace UnityEngine::UIElements::UIR {
// Is value type: true
// CS Name: UnityEngine.UIElements.UIR.EntryFlags
struct CORDL_TYPE EntryFlags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint16_t;

  /// @brief Nested struct __EntryFlags_Unwrapped
  enum struct __EntryFlags_Unwrapped : uint16_t {
    __E_UsesTextCoreSettings = static_cast<uint16_t>(0x1u),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __EntryFlags_Unwrapped() const noexcept {
    return static_cast<__EntryFlags_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator uint16_t() const noexcept {
    return static_cast<uint16_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr EntryFlags();

  // Ctor Parameters [CppParam { name: "value__", ty: "uint16_t", modifiers: "", def_value: None }]
  constexpr EntryFlags(uint16_t value__) noexcept;

  /// @brief Field UsesTextCoreSettings value: U16(1)
  static ::UnityEngine::UIElements::UIR::EntryFlags const UsesTextCoreSettings;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5294 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x2 };

  /// @brief Field value__, offset: 0x0, size: 0x2, def value: None
  uint16_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::UIR::EntryFlags, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::EntryFlags, 0x2>, "Size mismatch!");

} // namespace UnityEngine::UIElements::UIR
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::EntryFlags, "UnityEngine.UIElements.UIR", "EntryFlags");
