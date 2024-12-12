#pragma once
// IWYU pragma private; include "GlobalNamespace/NoteJumpDurationTypeSettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NoteJumpDurationTypeSettings)
// Forward declare root types
namespace GlobalNamespace {
struct NoteJumpDurationTypeSettings;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::NoteJumpDurationTypeSettings);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: NoteJumpDurationTypeSettings
struct CORDL_TYPE NoteJumpDurationTypeSettings {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __NoteJumpDurationTypeSettings_Unwrapped
  enum struct __NoteJumpDurationTypeSettings_Unwrapped : int32_t {
    __E_Dynamic = static_cast<int32_t>(0x0),
    __E_Static = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __NoteJumpDurationTypeSettings_Unwrapped() const noexcept {
    return static_cast<__NoteJumpDurationTypeSettings_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr NoteJumpDurationTypeSettings();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr NoteJumpDurationTypeSettings(int32_t value__) noexcept;

  /// @brief Field Dynamic value: I32(0)
  static ::GlobalNamespace::NoteJumpDurationTypeSettings const Dynamic;

  /// @brief Field Static value: I32(1)
  static ::GlobalNamespace::NoteJumpDurationTypeSettings const Static;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13218 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NoteJumpDurationTypeSettings, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NoteJumpDurationTypeSettings, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NoteJumpDurationTypeSettings, "", "NoteJumpDurationTypeSettings");
