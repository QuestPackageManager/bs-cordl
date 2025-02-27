#pragma once
// IWYU pragma private; include "UnityEngine/AnimatorUpdateMode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AnimatorUpdateMode)
// Forward declare root types
namespace UnityEngine {
struct AnimatorUpdateMode;
}
// Write type traits
MARK_VAL_T(::UnityEngine::AnimatorUpdateMode);
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.AnimatorUpdateMode
struct CORDL_TYPE AnimatorUpdateMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __AnimatorUpdateMode_Unwrapped
  enum struct __AnimatorUpdateMode_Unwrapped : int32_t {
    __E_Normal = static_cast<int32_t>(0x0),
    __E_AnimatePhysics = static_cast<int32_t>(0x1),
    __E_UnscaledTime = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __AnimatorUpdateMode_Unwrapped() const noexcept {
    return static_cast<__AnimatorUpdateMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr AnimatorUpdateMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr AnimatorUpdateMode(int32_t value__) noexcept;

  /// @brief Field AnimatePhysics value: I32(1)
  static ::UnityEngine::AnimatorUpdateMode const AnimatePhysics;

  /// @brief Field Normal value: I32(0)
  static ::UnityEngine::AnimatorUpdateMode const Normal;

  /// @brief Field UnscaledTime value: I32(2)
  static ::UnityEngine::AnimatorUpdateMode const UnscaledTime;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16871 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::AnimatorUpdateMode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::AnimatorUpdateMode, 0x4>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AnimatorUpdateMode, "UnityEngine", "AnimatorUpdateMode");
