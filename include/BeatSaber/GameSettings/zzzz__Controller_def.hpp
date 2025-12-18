#pragma once
// IWYU pragma private; include "BeatSaber/GameSettings/Controller.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(Controller)
// Forward declare root types
namespace BeatSaber::GameSettings {
struct Controller;
}
// Write type traits
MARK_VAL_T(::BeatSaber::GameSettings::Controller);
// Dependencies UnityEngine.Vector3
namespace BeatSaber::GameSettings {
// Is value type: true
// CS Name: BeatSaber.GameSettings.Controller
struct CORDL_TYPE Controller {
public:
  // Declarations
  /// @brief Method HasDefaultValues, addr 0x31c3868, size 0xc8, virtual false, abstract: false, final false
  inline bool HasDefaultValues();

  // Ctor Parameters []
  // @brief default ctor
  constexpr Controller();

  // Ctor Parameters [CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "rotation", ty: "::UnityEngine::Vector3", modifiers: "", def_value:
  // None }]
  constexpr Controller(::UnityEngine::Vector3 position, ::UnityEngine::Vector3 rotation) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21880 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field position, offset: 0x0, size: 0xc, def value: None
  ::UnityEngine::Vector3 position;

  /// @brief Field rotation, offset: 0xc, size: 0xc, def value: None
  ::UnityEngine::Vector3 rotation;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::GameSettings::Controller, position) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::Controller, rotation) == 0xc, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::GameSettings::Controller, 0x18>, "Size mismatch!");

} // namespace BeatSaber::GameSettings
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::GameSettings::Controller, "BeatSaber.GameSettings", "Controller");
