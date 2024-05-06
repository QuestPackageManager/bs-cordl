#pragma once
// IWYU pragma private; include "UnityEngine/Tilemaps/TileAnimationData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
// Type: UnityEngine.Tilemaps::TileAnimationData
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Tilemaps {
// Is value type: true
// CS Name: ::UnityEngine.Tilemaps::TileAnimationData
struct CORDL_TYPE TileAnimationData {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr TileAnimationData();

  // Ctor Parameters [CppParam { name: "m_AnimatedSprites", ty: "::ArrayW<::UnityW<::UnityEngine::Sprite>,::Array<::UnityW<::UnityEngine::Sprite>>*>", modifiers: "", def_value: None }, CppParam {
  // name: "m_AnimationSpeed", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_AnimationStartTime", ty: "float_t", modifiers: "", def_value: None }]
  constexpr TileAnimationData(::ArrayW<::UnityW<::UnityEngine::Sprite>, ::Array<::UnityW<::UnityEngine::Sprite>>*> m_AnimatedSprites, float_t m_AnimationSpeed, float_t m_AnimationStartTime) noexcept;

  /// @brief Field m_AnimatedSprites, offset: 0x0, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::Sprite>, ::Array<::UnityW<::UnityEngine::Sprite>>*> m_AnimatedSprites;

  /// @brief Field m_AnimationSpeed, offset: 0x8, size: 0x4, def value: None
  float_t m_AnimationSpeed;

  /// @brief Field m_AnimationStartTime, offset: 0xc, size: 0x4, def value: None
  float_t m_AnimationStartTime;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Tilemaps::TileAnimationData, 0x10>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Tilemaps::TileAnimationData, m_AnimatedSprites) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Tilemaps::TileAnimationData, m_AnimationSpeed) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Tilemaps::TileAnimationData, m_AnimationStartTime) == 0xc, "Offset mismatch!");

} // namespace UnityEngine::Tilemaps
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Tilemaps::TileAnimationData, "UnityEngine.Tilemaps", "TileAnimationData");
