#pragma once
// IWYU pragma private; include "UnityEngine/AvatarTarget.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AvatarTarget)
// Forward declare root types
namespace UnityEngine {
struct AvatarTarget;
}
// Write type traits
MARK_VAL_T(::UnityEngine::AvatarTarget);
// Type: UnityEngine::AvatarTarget
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// CS Name: ::UnityEngine::AvatarTarget
struct CORDL_TYPE AvatarTarget {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __AvatarTarget_Unwrapped
  enum struct __AvatarTarget_Unwrapped : int32_t {
    __E_Root = static_cast<int32_t>(0x0),
    __E_Body = static_cast<int32_t>(0x1),
    __E_LeftFoot = static_cast<int32_t>(0x2),
    __E_RightFoot = static_cast<int32_t>(0x3),
    __E_LeftHand = static_cast<int32_t>(0x4),
    __E_RightHand = static_cast<int32_t>(0x5),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __AvatarTarget_Unwrapped() const noexcept {
    return static_cast<__AvatarTarget_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr AvatarTarget();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr AvatarTarget(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Body value: static_cast<int32_t>(0x1)
  static ::UnityEngine::AvatarTarget const Body;

  /// @brief Field LeftFoot value: static_cast<int32_t>(0x2)
  static ::UnityEngine::AvatarTarget const LeftFoot;

  /// @brief Field LeftHand value: static_cast<int32_t>(0x4)
  static ::UnityEngine::AvatarTarget const LeftHand;

  /// @brief Field RightFoot value: static_cast<int32_t>(0x3)
  static ::UnityEngine::AvatarTarget const RightFoot;

  /// @brief Field RightHand value: static_cast<int32_t>(0x5)
  static ::UnityEngine::AvatarTarget const RightHand;

  /// @brief Field Root value: static_cast<int32_t>(0x0)
  static ::UnityEngine::AvatarTarget const Root;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AvatarTarget, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::AvatarTarget, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AvatarTarget, "UnityEngine", "AvatarTarget");
