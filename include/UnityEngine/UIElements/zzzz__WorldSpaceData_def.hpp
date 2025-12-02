#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/WorldSpaceData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(WorldSpaceData)
// Forward declare root types
namespace UnityEngine::UIElements {
struct WorldSpaceData;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::WorldSpaceData);
// Dependencies UnityEngine.Bounds
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

  // Ctor Parameters [CppParam { name: "localBounds3D", ty: "::UnityEngine::Bounds", modifiers: "", def_value: None }]
  constexpr WorldSpaceData(::UnityEngine::Bounds localBounds3D) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5267 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field localBounds3D, offset: 0x0, size: 0x18, def value: None
  ::UnityEngine::Bounds localBounds3D;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::WorldSpaceData, localBounds3D) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::WorldSpaceData, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::WorldSpaceData, "UnityEngine.UIElements", "WorldSpaceData");
