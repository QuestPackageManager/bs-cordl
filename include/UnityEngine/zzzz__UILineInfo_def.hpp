#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UILineInfo)
// Forward declare root types
namespace UnityEngine {
struct UILineInfo;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UILineInfo);
// Type: UnityEngine::UILineInfo
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15798))
// CS Name: ::UnityEngine::UILineInfo
struct CORDL_TYPE UILineInfo {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "startCharIdx", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "height", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "topY", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "leading", ty: "float_t", modifiers: "", def_value: None }]
  constexpr UILineInfo(int32_t startCharIdx, int32_t height, float_t topY, float_t leading) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr UILineInfo();

  /// @brief Field startCharIdx, offset: 0x0, size: 0x4, def value: None
  int32_t startCharIdx;

  /// @brief Field height, offset: 0x4, size: 0x4, def value: None
  int32_t height;

  /// @brief Field topY, offset: 0x8, size: 0x4, def value: None
  float_t topY;

  /// @brief Field leading, offset: 0xc, size: 0x4, def value: None
  float_t leading;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UILineInfo, 0x10>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UILineInfo, startCharIdx) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UILineInfo, height) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UILineInfo, topY) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UILineInfo, leading) == 0xc, "Offset mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UILineInfo, "UnityEngine", "UILineInfo");
