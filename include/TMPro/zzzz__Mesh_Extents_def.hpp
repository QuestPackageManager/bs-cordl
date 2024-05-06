#pragma once
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
// Type: TMPro::Mesh_Extents
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace TMPro {
// Is value type: true
// CS Name: ::TMPro::Mesh_Extents
struct CORDL_TYPE Mesh_Extents {
public:
  // Declarations
  /// @brief Method ToString, addr 0x33357b4, size 0x2ac, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x33357a8, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Vector2 min, ::UnityEngine::Vector2 max);

  // Ctor Parameters []
  // @brief default ctor
  constexpr Mesh_Extents();

  // Ctor Parameters [CppParam { name: "min", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "max", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }]
  constexpr Mesh_Extents(::UnityEngine::Vector2 min, ::UnityEngine::Vector2 max) noexcept;

  /// @brief Field min, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::Vector2 min;

  /// @brief Field max, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::Vector2 max;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::Mesh_Extents, 0x10>, "Size mismatch!");

static_assert(offsetof(::TMPro::Mesh_Extents, min) == 0x0, "Offset mismatch!");

static_assert(offsetof(::TMPro::Mesh_Extents, max) == 0x8, "Offset mismatch!");

} // namespace TMPro
DEFINE_IL2CPP_ARG_TYPE(::TMPro::Mesh_Extents, "TMPro", "Mesh_Extents");
