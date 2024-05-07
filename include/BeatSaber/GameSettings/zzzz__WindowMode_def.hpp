#pragma once
// IWYU pragma private; include "BeatSaber/GameSettings/WindowMode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(WindowMode)
// Forward declare root types
namespace BeatSaber::GameSettings {
struct WindowMode;
}
// Write type traits
MARK_VAL_T(::BeatSaber::GameSettings::WindowMode);
// Type: BeatSaber.GameSettings::WindowMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace BeatSaber::GameSettings {
// Is value type: true
// CS Name: ::BeatSaber.GameSettings::WindowMode
struct CORDL_TYPE WindowMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __WindowMode_Unwrapped
  enum struct __WindowMode_Unwrapped : int32_t {
    __E_Windowed = static_cast<int32_t>(0x0),
    __E_Fullscreen = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __WindowMode_Unwrapped() const noexcept {
    return static_cast<__WindowMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr WindowMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr WindowMode(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Fullscreen value: static_cast<int32_t>(0x1)
  static ::BeatSaber::GameSettings::WindowMode const Fullscreen;

  /// @brief Field Windowed value: static_cast<int32_t>(0x0)
  static ::BeatSaber::GameSettings::WindowMode const Windowed;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::GameSettings::WindowMode, 0x4>, "Size mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::WindowMode, value__) == 0x0, "Offset mismatch!");

} // namespace BeatSaber::GameSettings
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::GameSettings::WindowMode, "BeatSaber.GameSettings", "WindowMode");
