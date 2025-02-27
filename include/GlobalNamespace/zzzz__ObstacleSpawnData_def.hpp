#pragma once
// IWYU pragma private; include "GlobalNamespace/ObstacleSpawnData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(ObstacleSpawnData)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
struct ObstacleSpawnData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ObstacleSpawnData);
// Dependencies UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: ObstacleSpawnData
struct CORDL_TYPE ObstacleSpawnData {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x3af2624, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Vector3 moveOffset, float_t obstacleWidth, float_t obstacleHeight);

  // Ctor Parameters []
  // @brief default ctor
  constexpr ObstacleSpawnData();

  // Ctor Parameters [CppParam { name: "moveOffset", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "obstacleWidth", ty: "float_t", modifiers: "", def_value: None },
  // CppParam { name: "obstacleHeight", ty: "float_t", modifiers: "", def_value: None }]
  constexpr ObstacleSpawnData(::UnityEngine::Vector3 moveOffset, float_t obstacleWidth, float_t obstacleHeight) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4084 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x14 };

  /// @brief Field moveOffset, offset: 0x0, size: 0xc, def value: None
  ::UnityEngine::Vector3 moveOffset;

  /// @brief Field obstacleWidth, offset: 0xc, size: 0x4, def value: None
  float_t obstacleWidth;

  /// @brief Field obstacleHeight, offset: 0x10, size: 0x4, def value: None
  float_t obstacleHeight;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ObstacleSpawnData, moveOffset) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleSpawnData, obstacleWidth) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleSpawnData, obstacleHeight) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ObstacleSpawnData, 0x14>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ObstacleSpawnData, "", "ObstacleSpawnData");
