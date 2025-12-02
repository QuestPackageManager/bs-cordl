#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/OccluderMipBounds.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector2Int_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(OccluderMipBounds)
// Forward declare root types
namespace UnityEngine::Rendering {
struct OccluderMipBounds;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::OccluderMipBounds);
// Dependencies UnityEngine.Vector2Int
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.OccluderMipBounds
struct CORDL_TYPE OccluderMipBounds {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr OccluderMipBounds();

  // Ctor Parameters [CppParam { name: "offset", ty: "::UnityEngine::Vector2Int", modifiers: "", def_value: None }, CppParam { name: "size", ty: "::UnityEngine::Vector2Int", modifiers: "", def_value:
  // None }]
  constexpr OccluderMipBounds(::UnityEngine::Vector2Int offset, ::UnityEngine::Vector2Int size) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17695 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field offset, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::Vector2Int offset;

  /// @brief Field size, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::Vector2Int size;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::OccluderMipBounds, offset) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::OccluderMipBounds, size) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::OccluderMipBounds, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::OccluderMipBounds, "UnityEngine.Rendering", "OccluderMipBounds");
