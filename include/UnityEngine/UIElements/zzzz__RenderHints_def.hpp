#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/RenderHints.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RenderHints)
// Forward declare root types
namespace UnityEngine::UIElements {
struct RenderHints;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::RenderHints);
// Type: UnityEngine.UIElements::RenderHints
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: ::UnityEngine.UIElements::RenderHints
struct CORDL_TYPE RenderHints {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __RenderHints_Unwrapped
  enum struct __RenderHints_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_GroupTransform = static_cast<int32_t>(0x1),
    __E_BoneTransform = static_cast<int32_t>(0x2),
    __E_ClipWithScissors = static_cast<int32_t>(0x4),
    __E_MaskContainer = static_cast<int32_t>(0x8),
    __E_DynamicColor = static_cast<int32_t>(0x10),
    __E_DirtyOffset = static_cast<int32_t>(0x5),
    __E_DirtyGroupTransform = static_cast<int32_t>(0x20),
    __E_DirtyBoneTransform = static_cast<int32_t>(0x40),
    __E_DirtyClipWithScissors = static_cast<int32_t>(0x80),
    __E_DirtyMaskContainer = static_cast<int32_t>(0x100),
    __E_DirtyAll = static_cast<int32_t>(0x1e0),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __RenderHints_Unwrapped() const noexcept {
    return static_cast<__RenderHints_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderHints();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr RenderHints(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field BoneTransform value: static_cast<int32_t>(0x2)
  static ::UnityEngine::UIElements::RenderHints const BoneTransform;

  /// @brief Field ClipWithScissors value: static_cast<int32_t>(0x4)
  static ::UnityEngine::UIElements::RenderHints const ClipWithScissors;

  /// @brief Field DirtyAll value: static_cast<int32_t>(0x1e0)
  static ::UnityEngine::UIElements::RenderHints const DirtyAll;

  /// @brief Field DirtyBoneTransform value: static_cast<int32_t>(0x40)
  static ::UnityEngine::UIElements::RenderHints const DirtyBoneTransform;

  /// @brief Field DirtyClipWithScissors value: static_cast<int32_t>(0x80)
  static ::UnityEngine::UIElements::RenderHints const DirtyClipWithScissors;

  /// @brief Field DirtyGroupTransform value: static_cast<int32_t>(0x20)
  static ::UnityEngine::UIElements::RenderHints const DirtyGroupTransform;

  /// @brief Field DirtyMaskContainer value: static_cast<int32_t>(0x100)
  static ::UnityEngine::UIElements::RenderHints const DirtyMaskContainer;

  /// @brief Field DirtyOffset value: static_cast<int32_t>(0x5)
  static ::UnityEngine::UIElements::RenderHints const DirtyOffset;

  /// @brief Field DynamicColor value: static_cast<int32_t>(0x10)
  static ::UnityEngine::UIElements::RenderHints const DynamicColor;

  /// @brief Field GroupTransform value: static_cast<int32_t>(0x1)
  static ::UnityEngine::UIElements::RenderHints const GroupTransform;

  /// @brief Field MaskContainer value: static_cast<int32_t>(0x8)
  static ::UnityEngine::UIElements::RenderHints const MaskContainer;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::UnityEngine::UIElements::RenderHints const None;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::RenderHints, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::RenderHints, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::RenderHints, "UnityEngine.UIElements", "RenderHints");
