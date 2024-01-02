#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TMP_SpriteInfo)
// Forward declare root types
namespace TMPro {
struct TMP_SpriteInfo;
}
// Write type traits
MARK_VAL_T(::TMPro::TMP_SpriteInfo);
// Type: TMPro::TMP_SpriteInfo
// SizeInfo { instance_size: 12, native_size: 12, calculated_instance_size: 12, calculated_native_size: 28, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace TMPro {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12321))
// CS Name: ::TMPro::TMP_SpriteInfo
struct CORDL_TYPE TMP_SpriteInfo {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "spriteIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "characterIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam {
  // name: "vertexIndex", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr TMP_SpriteInfo(int32_t spriteIndex, int32_t characterIndex, int32_t vertexIndex) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr TMP_SpriteInfo();

  /// @brief Field spriteIndex, offset: 0x0, size: 0x4, def value: None
  int32_t spriteIndex;

  /// @brief Field characterIndex, offset: 0x4, size: 0x4, def value: None
  int32_t characterIndex;

  /// @brief Field vertexIndex, offset: 0x8, size: 0x4, def value: None
  int32_t vertexIndex;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::TMP_SpriteInfo, 0xc>, "Size mismatch!");

static_assert(offsetof(::TMPro::TMP_SpriteInfo, spriteIndex) == 0x0, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_SpriteInfo, characterIndex) == 0x4, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_SpriteInfo, vertexIndex) == 0x8, "Offset mismatch!");

} // namespace TMPro
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_SpriteInfo, "TMPro", "TMP_SpriteInfo");
