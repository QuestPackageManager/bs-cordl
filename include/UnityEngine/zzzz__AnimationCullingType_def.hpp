#pragma once
// IWYU pragma private; include "UnityEngine/AnimationCullingType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AnimationCullingType)
// Forward declare root types
namespace UnityEngine {
struct AnimationCullingType;
}
// Write type traits
MARK_VAL_T(::UnityEngine::AnimationCullingType);
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.AnimationCullingType
struct CORDL_TYPE AnimationCullingType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __AnimationCullingType_Unwrapped
  enum struct __AnimationCullingType_Unwrapped : int32_t {
    __E_AlwaysAnimate = static_cast<int32_t>(0x0),
    __E_BasedOnRenderers = static_cast<int32_t>(0x1),
    __E_BasedOnClipBounds = static_cast<int32_t>(0x2),
    __E_BasedOnUserBounds = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __AnimationCullingType_Unwrapped() const noexcept {
    return static_cast<__AnimationCullingType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr AnimationCullingType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr AnimationCullingType(int32_t value__) noexcept;

  /// @brief Field AlwaysAnimate value: I32(0)
  static ::UnityEngine::AnimationCullingType const AlwaysAnimate;

  /// @brief Field BasedOnClipBounds value: I32(2)
  static ::UnityEngine::AnimationCullingType const BasedOnClipBounds;

  /// @brief Field BasedOnRenderers value: I32(1)
  static ::UnityEngine::AnimationCullingType const BasedOnRenderers;

  /// @brief Field BasedOnUserBounds value: I32(3)
  static ::UnityEngine::AnimationCullingType const BasedOnUserBounds;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19946 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::AnimationCullingType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::AnimationCullingType, 0x4>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AnimationCullingType, "UnityEngine", "AnimationCullingType");
