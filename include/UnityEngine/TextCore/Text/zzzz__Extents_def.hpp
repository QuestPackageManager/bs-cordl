#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(Extents)
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::TextCore::Text {
struct Extents;
}
// Write type traits
MARK_VAL_T(::UnityEngine::TextCore::Text::Extents);
// Type: UnityEngine.TextCore.Text::Extents
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::TextCore::Text {
// Is value type: true
// CS Name: ::UnityEngine.TextCore.Text::Extents
struct CORDL_TYPE Extents {
public:
  // Declarations
  /// @brief Method ToString, addr 0x3290030, size 0x2ac, virtual true, abstract: false, final false
  inline ::StringW ToString();

  // Ctor Parameters []
  // @brief default ctor
  constexpr Extents();

  // Ctor Parameters [CppParam { name: "min", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "max", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }]
  constexpr Extents(::UnityEngine::Vector2 min, ::UnityEngine::Vector2 max) noexcept;

  /// @brief Field min, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::Vector2 min;

  /// @brief Field max, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::Vector2 max;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::Text::Extents, 0x10>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::Extents, min) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::Extents, max) == 0x8, "Offset mismatch!");

} // namespace UnityEngine::TextCore::Text
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::Extents, "UnityEngine.TextCore.Text", "Extents");
