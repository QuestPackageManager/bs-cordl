#pragma once
// IWYU pragma private; include "TMPro/Mesh_Extents.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(Mesh_Extents)
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace TMPro {
struct Mesh_Extents;
}
// Write type traits
MARK_VAL_T(::TMPro::Mesh_Extents);
// Dependencies UnityEngine.Vector2
namespace TMPro {
// Is value type: true
// CS Name: TMPro.Mesh_Extents
struct CORDL_TYPE Mesh_Extents {
public:
  // Declarations
  /// @brief Method ToString, addr 0x47c7664, size 0x1a0, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x47c7658, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Vector2 min, ::UnityEngine::Vector2 max);

  // Ctor Parameters []
  // @brief default ctor
  constexpr Mesh_Extents();

  // Ctor Parameters [CppParam { name: "min", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "max", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }]
  constexpr Mesh_Extents(::UnityEngine::Vector2 min, ::UnityEngine::Vector2 max) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14443 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field min, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::Vector2 min;

  /// @brief Field max, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::Vector2 max;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::TMPro::Mesh_Extents, min) == 0x0, "Offset mismatch!");

static_assert(offsetof(::TMPro::Mesh_Extents, max) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::TMPro::Mesh_Extents, 0x10>, "Size mismatch!");

} // namespace TMPro
DEFINE_IL2CPP_ARG_TYPE(::TMPro::Mesh_Extents, "TMPro", "Mesh_Extents");
