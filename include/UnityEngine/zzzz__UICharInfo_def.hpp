#pragma once
// IWYU pragma private; include "UnityEngine/UICharInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(UICharInfo)
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine {
struct UICharInfo;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UICharInfo);
// Type: UnityEngine::UICharInfo
// SizeInfo { instance_size: 12, native_size: 12, calculated_instance_size: 12, calculated_native_size: 28, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// CS Name: ::UnityEngine::UICharInfo
struct CORDL_TYPE UICharInfo {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr UICharInfo();

  // Ctor Parameters [CppParam { name: "cursorPos", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "charWidth", ty: "float_t", modifiers: "", def_value: None }]
  constexpr UICharInfo(::UnityEngine::Vector2 cursorPos, float_t charWidth) noexcept;

  /// @brief Field cursorPos, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::Vector2 cursorPos;

  /// @brief Field charWidth, offset: 0x8, size: 0x4, def value: None
  float_t charWidth;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UICharInfo, 0xc>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UICharInfo, cursorPos) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UICharInfo, charWidth) == 0x8, "Offset mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UICharInfo, "UnityEngine", "UICharInfo");
