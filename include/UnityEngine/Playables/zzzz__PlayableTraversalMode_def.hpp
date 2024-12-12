#pragma once
// IWYU pragma private; include "UnityEngine/Playables/PlayableTraversalMode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PlayableTraversalMode)
// Forward declare root types
namespace UnityEngine::Playables {
struct PlayableTraversalMode;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Playables::PlayableTraversalMode);
// Dependencies
namespace UnityEngine::Playables {
// Is value type: true
// CS Name: UnityEngine.Playables.PlayableTraversalMode
struct CORDL_TYPE PlayableTraversalMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __PlayableTraversalMode_Unwrapped
  enum struct __PlayableTraversalMode_Unwrapped : int32_t {
    __E_Mix = static_cast<int32_t>(0x0),
    __E_Passthrough = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __PlayableTraversalMode_Unwrapped() const noexcept {
    return static_cast<__PlayableTraversalMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayableTraversalMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr PlayableTraversalMode(int32_t value__) noexcept;

  /// @brief Field Mix value: I32(0)
  static ::UnityEngine::Playables::PlayableTraversalMode const Mix;

  /// @brief Field Passthrough value: I32(1)
  static ::UnityEngine::Playables::PlayableTraversalMode const Passthrough;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11276 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Playables::PlayableTraversalMode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Playables::PlayableTraversalMode, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Playables
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Playables::PlayableTraversalMode, "UnityEngine.Playables", "PlayableTraversalMode");
