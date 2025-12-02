#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/Profiling/CatalogFrameData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Hash128_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(CatalogFrameData)
// Forward declare root types
namespace UnityEngine::ResourceManagement::Profiling {
struct CatalogFrameData;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ResourceManagement::Profiling::CatalogFrameData);
// Dependencies UnityEngine.Hash128
namespace UnityEngine::ResourceManagement::Profiling {
// Is value type: true
// CS Name: UnityEngine.ResourceManagement.Profiling.CatalogFrameData
struct CORDL_TYPE CatalogFrameData {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr CatalogFrameData();

  // Ctor Parameters [CppParam { name: "BuildResultHash", ty: "::UnityEngine::Hash128", modifiers: "", def_value: None }]
  constexpr CatalogFrameData(::UnityEngine::Hash128 BuildResultHash) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18756 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field BuildResultHash, offset: 0x0, size: 0x10, def value: None
  ::UnityEngine::Hash128 BuildResultHash;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ResourceManagement::Profiling::CatalogFrameData, BuildResultHash) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::Profiling::CatalogFrameData, 0x10>, "Size mismatch!");

} // namespace UnityEngine::ResourceManagement::Profiling
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::Profiling::CatalogFrameData, "UnityEngine.ResourceManagement.Profiling", "CatalogFrameData");
