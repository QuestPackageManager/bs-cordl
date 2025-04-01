#pragma once
// IWYU pragma private; include "UnityEngine/Tilemaps/TileAnimationData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Tilemaps/zzzz__TileAnimationFlags_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(TileAnimationData)
namespace UnityEngine {
class Sprite;
}
// Forward declare root types
namespace UnityEngine::Tilemaps {
struct TileAnimationData;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Tilemaps::TileAnimationData);
// Dependencies UnityEngine.Tilemaps.TileAnimationFlags
namespace UnityEngine::Tilemaps {
// Is value type: true
// CS Name: UnityEngine.Tilemaps.TileAnimationData
struct CORDL_TYPE TileAnimationData {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr TileAnimationData();

  // Ctor Parameters [CppParam { name: "m_AnimatedSprites", ty: "::ArrayW<::UnityW<::UnityEngine::Sprite>,::Array<::UnityW<::UnityEngine::Sprite>>*>", modifiers: "", def_value: None }, CppParam {
  // name: "m_AnimationSpeed", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_AnimationStartTime", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_Flags",
  // ty: "::UnityEngine::Tilemaps::TileAnimationFlags", modifiers: "", def_value: None }]
  constexpr TileAnimationData(::ArrayW<::UnityW<::UnityEngine::Sprite>, ::Array<::UnityW<::UnityEngine::Sprite>>*> m_AnimatedSprites, float_t m_AnimationSpeed, float_t m_AnimationStartTime,
                              ::UnityEngine::Tilemaps::TileAnimationFlags m_Flags) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18580 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field m_AnimatedSprites, offset: 0x0, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::Sprite>, ::Array<::UnityW<::UnityEngine::Sprite>>*> m_AnimatedSprites;

  /// @brief Field m_AnimationSpeed, offset: 0x8, size: 0x4, def value: None
  float_t m_AnimationSpeed;

  /// @brief Field m_AnimationStartTime, offset: 0xc, size: 0x4, def value: None
  float_t m_AnimationStartTime;

  /// @brief Field m_Flags, offset: 0x10, size: 0x4, def value: None
  ::UnityEngine::Tilemaps::TileAnimationFlags m_Flags;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Tilemaps::TileAnimationData, m_AnimatedSprites) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Tilemaps::TileAnimationData, m_AnimationSpeed) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Tilemaps::TileAnimationData, m_AnimationStartTime) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Tilemaps::TileAnimationData, m_Flags) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Tilemaps::TileAnimationData, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Tilemaps
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Tilemaps::TileAnimationData, "UnityEngine.Tilemaps", "TileAnimationData");
