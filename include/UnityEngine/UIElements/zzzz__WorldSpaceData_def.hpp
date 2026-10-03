#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/WorldSpaceData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(WorldSpaceData)
// Forward declare root types
namespace UnityEngine::UIElements {
struct WorldSpaceData;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::WorldSpaceData);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::WorldSpaceData, "UnityEngine.UIElements", "WorldSpaceData");
// Dependencies UnityEngine.Bounds, UnityEngine.Rect
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.WorldSpaceData
struct CORDL_TYPE WorldSpaceData {
public:
  // Declarations
  /// @brief Field k_Empty3DBounds, offset 0xffffffff, size 0x18
  __declspec(property(get = getStaticF_k_Empty3DBounds, put = setStaticF_k_Empty3DBounds)) ::UnityEngine::Bounds k_Empty3DBounds;

  static inline ::UnityEngine::Bounds getStaticF_k_Empty3DBounds();

  static inline void setStaticF_k_Empty3DBounds(::UnityEngine::Bounds value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr WorldSpaceData();

  // Ctor Parameters [CppParam { name: "localBounds3D", ty: "::UnityEngine::Bounds", modifiers: "", def_value: None, comment: None }, CppParam { name: "localBoundsPicking3D", ty:
  // "::UnityEngine::Bounds", modifiers: "", def_value: None, comment: None }, CppParam { name: "localBoundsWithoutNested3D", ty: "::UnityEngine::Bounds", modifiers: "", def_value: None, comment: None
  // }, CppParam { name: "boundingBoxWithoutNested", ty: "::UnityEngine::Rect", modifiers: "", def_value: None, comment: None }]
  constexpr WorldSpaceData(::UnityEngine::Bounds localBounds3D, ::UnityEngine::Bounds localBoundsPicking3D, ::UnityEngine::Bounds localBoundsWithoutNested3D,
                           ::UnityEngine::Rect boundingBoxWithoutNested) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5373 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x58 };

  /// @brief Field localBounds3D, offset: 0x0, size: 0x18, def value: None
  ::UnityEngine::Bounds localBounds3D;

  /// @brief Field localBoundsPicking3D, offset: 0x18, size: 0x18, def value: None
  ::UnityEngine::Bounds localBoundsPicking3D;

  /// @brief Field localBoundsWithoutNested3D, offset: 0x30, size: 0x18, def value: None
  ::UnityEngine::Bounds localBoundsWithoutNested3D;

  /// @brief Field boundingBoxWithoutNested, offset: 0x48, size: 0x10, def value: None
  ::UnityEngine::Rect boundingBoxWithoutNested;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::WorldSpaceData, localBounds3D) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::WorldSpaceData, localBoundsPicking3D) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::WorldSpaceData, localBoundsWithoutNested3D) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::WorldSpaceData, boundingBoxWithoutNested) == 0x48, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::WorldSpaceData) == 0x58, "Size mismatch!");

} // namespace UnityEngine::UIElements
