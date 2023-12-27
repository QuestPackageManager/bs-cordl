#pragma once
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
namespace UnityEngine::TextCore {
struct GlyphRect;
}
namespace UnityEngine::TextCore {
struct GlyphMetrics;
}
namespace UnityEngine::TextCore {
struct GlyphClassDefinitionType;
}
// Forward declare root types
namespace UnityEngine::TextCore::LowLevel {
struct GlyphMarshallingStruct;
}
// Write type traits
MARK_VAL_T(::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct);
// Type: UnityEngine.TextCore.LowLevel::GlyphMarshallingStruct
// SizeInfo { instance_size: 52, native_size: 52, calculated_instance_size: 52, calculated_native_size: 68, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::TextCore::LowLevel {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15529)), TypeDefinitionIndex(TypeDefinitionIndex(15528)), TypeDefinitionIndex(TypeDefinitionIndex(15527))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15531))
// CS Name: ::UnityEngine.TextCore.LowLevel::GlyphMarshallingStruct
struct CORDL_TYPE GlyphMarshallingStruct {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "index", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "metrics", ty: "::UnityEngine::TextCore::GlyphMetrics", modifiers: "", def_value:
  // None }, CppParam { name: "glyphRect", ty: "::UnityEngine::TextCore::GlyphRect", modifiers: "", def_value: None }, CppParam { name: "scale", ty: "float_t", modifiers: "", def_value: None },
  // CppParam { name: "atlasIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "classDefinitionType", ty: "::UnityEngine::TextCore::GlyphClassDefinitionType", modifiers: "",
  // def_value: None }]
  constexpr GlyphMarshallingStruct(uint32_t index, ::UnityEngine::TextCore::GlyphMetrics metrics, ::UnityEngine::TextCore::GlyphRect glyphRect, float_t scale, int32_t atlasIndex,
                                   ::UnityEngine::TextCore::GlyphClassDefinitionType classDefinitionType) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr GlyphMarshallingStruct();

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

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x34 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct, 0x34>, "Size mismatch!");

} // namespace UnityEngine::TextCore::LowLevel
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct, "UnityEngine.TextCore.LowLevel", "GlyphMarshallingStruct");
