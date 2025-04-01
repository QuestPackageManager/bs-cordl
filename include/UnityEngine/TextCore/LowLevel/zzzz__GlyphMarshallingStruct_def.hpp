#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/LowLevel/GlyphMarshallingStruct.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/TextCore/zzzz__GlyphClassDefinitionType_def.hpp"
#include "UnityEngine/TextCore/zzzz__GlyphMetrics_def.hpp"
#include "UnityEngine/TextCore/zzzz__GlyphRect_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GlyphMarshallingStruct)
// Forward declare root types
namespace UnityEngine::TextCore::LowLevel {
struct GlyphMarshallingStruct;
}
// Write type traits
MARK_VAL_T(::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct);
// Dependencies UnityEngine.TextCore.GlyphClassDefinitionType, UnityEngine.TextCore.GlyphMetrics, UnityEngine.TextCore.GlyphRect
namespace UnityEngine::TextCore::LowLevel {
// Is value type: true
// CS Name: UnityEngine.TextCore.LowLevel.GlyphMarshallingStruct
struct CORDL_TYPE GlyphMarshallingStruct {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr GlyphMarshallingStruct();

  // Ctor Parameters [CppParam { name: "index", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "metrics", ty: "::UnityEngine::TextCore::GlyphMetrics", modifiers: "", def_value:
  // None }, CppParam { name: "glyphRect", ty: "::UnityEngine::TextCore::GlyphRect", modifiers: "", def_value: None }, CppParam { name: "scale", ty: "float_t", modifiers: "", def_value: None },
  // CppParam { name: "atlasIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "classDefinitionType", ty: "::UnityEngine::TextCore::GlyphClassDefinitionType", modifiers: "",
  // def_value: None }]
  constexpr GlyphMarshallingStruct(uint32_t index, ::UnityEngine::TextCore::GlyphMetrics metrics, ::UnityEngine::TextCore::GlyphRect glyphRect, float_t scale, int32_t atlasIndex,
                                   ::UnityEngine::TextCore::GlyphClassDefinitionType classDefinitionType) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18191 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x34 };

  /// @brief Field index, offset: 0x0, size: 0x4, def value: None
  uint32_t index;

  /// @brief Field metrics, offset: 0x4, size: 0x14, def value: None
  ::UnityEngine::TextCore::GlyphMetrics metrics;

  /// @brief Field glyphRect, offset: 0x18, size: 0x10, def value: None
  ::UnityEngine::TextCore::GlyphRect glyphRect;

  /// @brief Field scale, offset: 0x28, size: 0x4, def value: None
  float_t scale;

  /// @brief Field atlasIndex, offset: 0x2c, size: 0x4, def value: None
  int32_t atlasIndex;

  /// @brief Field classDefinitionType, offset: 0x30, size: 0x4, def value: None
  ::UnityEngine::TextCore::GlyphClassDefinitionType classDefinitionType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct, index) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct, metrics) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct, glyphRect) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct, scale) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct, atlasIndex) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct, classDefinitionType) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct, 0x34>, "Size mismatch!");

} // namespace UnityEngine::TextCore::LowLevel
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct, "UnityEngine.TextCore.LowLevel", "GlyphMarshallingStruct");
