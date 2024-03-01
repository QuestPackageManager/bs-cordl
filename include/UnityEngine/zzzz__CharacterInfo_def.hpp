#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__FontStyle_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CharacterInfo)
namespace UnityEngine {
struct FontStyle;
}
namespace UnityEngine {
struct Rect;
}
// Forward declare root types
namespace UnityEngine {
struct CharacterInfo;
}
// Write type traits
MARK_VAL_T(::UnityEngine::CharacterInfo);
// Type: UnityEngine::CharacterInfo
// SizeInfo { instance_size: 52, native_size: 52, calculated_instance_size: 52, calculated_native_size: 65, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// CS Name: ::UnityEngine::CharacterInfo
struct CORDL_TYPE CharacterInfo {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr CharacterInfo();

  // Ctor Parameters [CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "uv", ty: "::UnityEngine::Rect", modifiers: "", def_value: None }, CppParam { name:
  // "vert", ty: "::UnityEngine::Rect", modifiers: "", def_value: None }, CppParam { name: "width", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "size", ty: "int32_t", modifiers:
  // "", def_value: None }, CppParam { name: "style", ty: "::UnityEngine::FontStyle", modifiers: "", def_value: None }, CppParam { name: "flipped", ty: "bool", modifiers: "", def_value: None }]
  constexpr CharacterInfo(int32_t index, ::UnityEngine::Rect uv, ::UnityEngine::Rect vert, float_t width, int32_t size, ::UnityEngine::FontStyle style, bool flipped) noexcept;

  /// @brief Field index, offset: 0x0, size: 0x4, def value: None
  int32_t index;

  /// @brief Field uv, offset: 0x4, size: 0x10, def value: None
  ::UnityEngine::Rect uv;

  /// @brief Field vert, offset: 0x14, size: 0x10, def value: None
  ::UnityEngine::Rect vert;

  /// @brief Field width, offset: 0x24, size: 0x4, def value: None
  float_t width;

  /// @brief Field size, offset: 0x28, size: 0x4, def value: None
  int32_t size;

  /// @brief Field style, offset: 0x2c, size: 0x4, def value: None
  ::UnityEngine::FontStyle style;

  /// @brief Field flipped, offset: 0x30, size: 0x1, def value: None
  bool flipped;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x34 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::CharacterInfo, 0x34>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::CharacterInfo, index) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::CharacterInfo, uv) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::CharacterInfo, vert) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::CharacterInfo, width) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::CharacterInfo, size) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::CharacterInfo, style) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::CharacterInfo, flipped) == 0x30, "Offset mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::CharacterInfo, "UnityEngine", "CharacterInfo");
