#pragma once
// IWYU pragma private; include "UnityEngine/Tilemaps/TileChangeData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Vector3Int_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(TileChangeData)
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace UnityEngine::Tilemaps {
struct TileChangeData;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Tilemaps::TileChangeData);
// Dependencies UnityEngine.Color, UnityEngine.Matrix4x4, UnityEngine.Vector3Int
namespace UnityEngine::Tilemaps {
// Is value type: true
// CS Name: UnityEngine.Tilemaps.TileChangeData
struct CORDL_TYPE TileChangeData {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr TileChangeData();

  // Ctor Parameters [CppParam { name: "m_Position", ty: "::UnityEngine::Vector3Int", modifiers: "", def_value: None }, CppParam { name: "m_TileAsset", ty: "::UnityW<::UnityEngine::Object>",
  // modifiers: "", def_value: None }, CppParam { name: "m_Color", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "m_Transform", ty: "::UnityEngine::Matrix4x4",
  // modifiers: "", def_value: None }]
  constexpr TileChangeData(::UnityEngine::Vector3Int m_Position, ::UnityW<::UnityEngine::Object> m_TileAsset, ::UnityEngine::Color m_Color, ::UnityEngine::Matrix4x4 m_Transform) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18578 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x68 };

  /// @brief Field m_Position, offset: 0x0, size: 0xc, def value: None
  ::UnityEngine::Vector3Int m_Position;

  /// @brief Field m_TileAsset, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Object> m_TileAsset;

  /// @brief Field m_Color, offset: 0x18, size: 0x10, def value: None
  ::UnityEngine::Color m_Color;

  /// @brief Field m_Transform, offset: 0x28, size: 0x40, def value: None
  ::UnityEngine::Matrix4x4 m_Transform;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Tilemaps::TileChangeData, m_Position) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Tilemaps::TileChangeData, m_TileAsset) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Tilemaps::TileChangeData, m_Color) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Tilemaps::TileChangeData, m_Transform) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Tilemaps::TileChangeData, 0x68>, "Size mismatch!");

} // namespace UnityEngine::Tilemaps
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Tilemaps::TileChangeData, "UnityEngine.Tilemaps", "TileChangeData");
