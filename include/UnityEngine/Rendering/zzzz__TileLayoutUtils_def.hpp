#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\TileLayoutUtils.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TileLayoutUtils)
namespace UnityEngine {
struct RectInt;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class TileLayoutUtils;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::TileLayoutUtils*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::TileLayoutUtils*, "UnityEngine.Rendering", "TileLayoutUtils");
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.TileLayoutUtils
class CORDL_TYPE TileLayoutUtils : public ::System::Object {
public:
  // Declarations
  /// @brief Method TryLayoutByCol, addr 0x67c93c8, size 0x60, virtual false, abstract: false, final false
  static inline bool TryLayoutByCol(::UnityEngine::RectInt src, uint32_t tileSize, ::by_ref<::UnityEngine::RectInt> main, ::by_ref<::UnityEngine::RectInt> other);

  /// @brief Method TryLayoutByRow, addr 0x67c9368, size 0x60, virtual false, abstract: false, final false
  static inline bool TryLayoutByRow(::UnityEngine::RectInt src, uint32_t tileSize, ::by_ref<::UnityEngine::RectInt> main, ::by_ref<::UnityEngine::RectInt> other);

  /// @brief Method TryLayoutByTiles, addr 0x67c92dc, size 0x8c, virtual false, abstract: false, final false
  static inline bool TryLayoutByTiles(::UnityEngine::RectInt src, uint32_t tileSize, ::by_ref<::UnityEngine::RectInt> main, ::by_ref<::UnityEngine::RectInt> topRow,
                                      ::by_ref<::UnityEngine::RectInt> rightCol, ::by_ref<::UnityEngine::RectInt> topRight);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TileLayoutUtils();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TileLayoutUtils", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TileLayoutUtils(TileLayoutUtils&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TileLayoutUtils", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TileLayoutUtils(TileLayoutUtils const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12318 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::TileLayoutUtils) == 0x10, "Size mismatch!");

} // namespace UnityEngine::Rendering
