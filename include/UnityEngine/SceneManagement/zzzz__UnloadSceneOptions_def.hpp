#pragma once
// IWYU pragma private; include "UnityEngine/SceneManagement/UnloadSceneOptions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UnloadSceneOptions)
// Forward declare root types
namespace UnityEngine::SceneManagement {
struct UnloadSceneOptions;
}
// Write type traits
MARK_VAL_T(::UnityEngine::SceneManagement::UnloadSceneOptions);
// Dependencies
namespace UnityEngine::SceneManagement {
// Is value type: true
// CS Name: UnityEngine.SceneManagement.UnloadSceneOptions
struct CORDL_TYPE UnloadSceneOptions {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __UnloadSceneOptions_Unwrapped
  enum struct __UnloadSceneOptions_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_UnloadAllEmbeddedSceneObjects = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __UnloadSceneOptions_Unwrapped() const noexcept {
    return static_cast<__UnloadSceneOptions_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr UnloadSceneOptions();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr UnloadSceneOptions(int32_t value__) noexcept;

  /// @brief Field None value: I32(0)
  static ::UnityEngine::SceneManagement::UnloadSceneOptions const None;

  /// @brief Field UnloadAllEmbeddedSceneObjects value: I32(1)
  static ::UnityEngine::SceneManagement::UnloadSceneOptions const UnloadAllEmbeddedSceneObjects;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11012 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::SceneManagement::UnloadSceneOptions, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::SceneManagement::UnloadSceneOptions, 0x4>, "Size mismatch!");

} // namespace UnityEngine::SceneManagement
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::SceneManagement::UnloadSceneOptions, "UnityEngine.SceneManagement", "UnloadSceneOptions");
