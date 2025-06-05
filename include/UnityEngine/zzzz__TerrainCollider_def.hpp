#pragma once
// IWYU pragma private; include "UnityEngine/TerrainCollider.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Collider_def.hpp"
CORDL_MODULE_EXPORT(TerrainCollider)
namespace UnityEngine {
class TerrainData;
}
// Forward declare root types
namespace UnityEngine {
class TerrainCollider;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::TerrainCollider);
// Dependencies UnityEngine.Collider
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.TerrainCollider
class CORDL_TYPE TerrainCollider : public ::UnityEngine::Collider {
public:
  // Declarations
  __declspec(property(put = set_terrainData)) ::UnityW<::UnityEngine::TerrainData> terrainData;

  /// @brief Method set_terrainData, addr 0x4920f50, size 0x44, virtual false, abstract: false, final false
  inline void set_terrainData(::UnityEngine::TerrainData* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TerrainCollider();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TerrainCollider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TerrainCollider(TerrainCollider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TerrainCollider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TerrainCollider(TerrainCollider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19068 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TerrainCollider, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::TerrainCollider);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TerrainCollider*, "UnityEngine", "TerrainCollider");
