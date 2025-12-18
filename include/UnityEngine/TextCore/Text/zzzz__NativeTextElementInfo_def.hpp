#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/Text/NativeTextElementInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/TextCore/Text/zzzz__TextCoreVertex_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NativeTextElementInfo)
// Forward declare root types
namespace UnityEngine::TextCore::Text {
struct NativeTextElementInfo;
}
// Write type traits
MARK_VAL_T(::UnityEngine::TextCore::Text::NativeTextElementInfo);
// Dependencies UnityEngine.TextCore.Text.TextCoreVertex
namespace UnityEngine::TextCore::Text {
// Is value type: true
// CS Name: UnityEngine.TextCore.Text.NativeTextElementInfo
struct CORDL_TYPE NativeTextElementInfo {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr NativeTextElementInfo();

  // Ctor Parameters [CppParam { name: "glyphID", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "bottomLeft", ty: "::UnityEngine::TextCore::Text::TextCoreVertex", modifiers: "",
  // def_value: None }, CppParam { name: "topLeft", ty: "::UnityEngine::TextCore::Text::TextCoreVertex", modifiers: "", def_value: None }, CppParam { name: "topRight", ty:
  // "::UnityEngine::TextCore::Text::TextCoreVertex", modifiers: "", def_value: None }, CppParam { name: "bottomRight", ty: "::UnityEngine::TextCore::Text::TextCoreVertex", modifiers: "", def_value:
  // None }]
  constexpr NativeTextElementInfo(int32_t glyphID, ::UnityEngine::TextCore::Text::TextCoreVertex bottomLeft, ::UnityEngine::TextCore::Text::TextCoreVertex topLeft,
                                  ::UnityEngine::TextCore::Text::TextCoreVertex topRight, ::UnityEngine::TextCore::Text::TextCoreVertex bottomRight) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17189 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x84 };

  /// @brief Field glyphID, offset: 0x0, size: 0x4, def value: None
  int32_t glyphID;

  /// @brief Field bottomLeft, offset: 0x4, size: 0x20, def value: None
  ::UnityEngine::TextCore::Text::TextCoreVertex bottomLeft;

  /// @brief Field topLeft, offset: 0x24, size: 0x20, def value: None
  ::UnityEngine::TextCore::Text::TextCoreVertex topLeft;

  /// @brief Field topRight, offset: 0x44, size: 0x20, def value: None
  ::UnityEngine::TextCore::Text::TextCoreVertex topRight;

  /// @brief Field bottomRight, offset: 0x64, size: 0x20, def value: None
  ::UnityEngine::TextCore::Text::TextCoreVertex bottomRight;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::TextCore::Text::NativeTextElementInfo, glyphID) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::NativeTextElementInfo, bottomLeft) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::NativeTextElementInfo, topLeft) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::NativeTextElementInfo, topRight) == 0x44, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::NativeTextElementInfo, bottomRight) == 0x64, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::Text::NativeTextElementInfo, 0x84>, "Size mismatch!");

} // namespace UnityEngine::TextCore::Text
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::NativeTextElementInfo, "UnityEngine.TextCore.Text", "NativeTextElementInfo");
