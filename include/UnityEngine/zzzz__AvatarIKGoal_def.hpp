#pragma once
// IWYU pragma private; include "UnityEngine/AvatarIKGoal.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AvatarIKGoal)
// Forward declare root types
namespace UnityEngine {
struct AvatarIKGoal;
}
// Write type traits
MARK_VAL_T(::UnityEngine::AvatarIKGoal);
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.AvatarIKGoal
struct CORDL_TYPE AvatarIKGoal {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __AvatarIKGoal_Unwrapped
  enum struct __AvatarIKGoal_Unwrapped : int32_t {
    __E_LeftFoot = static_cast<int32_t>(0x0),
    __E_RightFoot = static_cast<int32_t>(0x1),
    __E_LeftHand = static_cast<int32_t>(0x2),
    __E_RightHand = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __AvatarIKGoal_Unwrapped() const noexcept {
    return static_cast<__AvatarIKGoal_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr AvatarIKGoal();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr AvatarIKGoal(int32_t value__) noexcept;

  /// @brief Field LeftFoot value: I32(0)
  static ::UnityEngine::AvatarIKGoal const LeftFoot;

  /// @brief Field LeftHand value: I32(2)
  static ::UnityEngine::AvatarIKGoal const LeftHand;

  /// @brief Field RightFoot value: I32(1)
  static ::UnityEngine::AvatarIKGoal const RightFoot;

  /// @brief Field RightHand value: I32(3)
  static ::UnityEngine::AvatarIKGoal const RightHand;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19985 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::AvatarIKGoal, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::AvatarIKGoal, 0x4>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AvatarIKGoal, "UnityEngine", "AvatarIKGoal");
