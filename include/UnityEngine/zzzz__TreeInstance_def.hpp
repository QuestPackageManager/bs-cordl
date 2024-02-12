#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TreeInstance)
namespace UnityEngine {
struct Color32;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
struct TreeInstance;
}
// Write type traits
MARK_VAL_T(::UnityEngine::TreeInstance);
// Type: UnityEngine::TreeInstance
// SizeInfo { instance_size: 40, native_size: 40, calculated_instance_size: 40, calculated_native_size: 56, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(8993)), TypeDefinitionIndex(TypeDefinitionIndex(8994))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15648))
// CS Name: ::UnityEngine::TreeInstance
struct CORDL_TYPE TreeInstance {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "widthScale", ty: "float_t", modifiers: "", def_value: None },
  // CppParam { name: "heightScale", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "rotation", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "color", ty:
  // "::UnityEngine::Color32", modifiers: "", def_value: None }, CppParam { name: "lightmapColor", ty: "::UnityEngine::Color32", modifiers: "", def_value: None }, CppParam { name: "prototypeIndex",
  // ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "temporaryDistance", ty: "float_t", modifiers: "", def_value: None }]
  constexpr TreeInstance(::UnityEngine::Vector3 position, float_t widthScale, float_t heightScale, float_t rotation, ::UnityEngine::Color32 color, ::UnityEngine::Color32 lightmapColor,
                         int32_t prototypeIndex, float_t temporaryDistance) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr TreeInstance();

  /// @brief Field position, offset: 0x0, size: 0xc, def value: None
  ::UnityEngine::Vector3 position;

  /// @brief Field widthScale, offset: 0xc, size: 0x4, def value: None
  float_t widthScale;

  /// @brief Field heightScale, offset: 0x10, size: 0x4, def value: None
  float_t heightScale;

  /// @brief Field rotation, offset: 0x14, size: 0x4, def value: None
  float_t rotation;

  /// @brief Field color, offset: 0x18, size: 0x4, def value: None
  ::UnityEngine::Color32 color;

  /// @brief Field lightmapColor, offset: 0x1c, size: 0x4, def value: None
  ::UnityEngine::Color32 lightmapColor;

  /// @brief Field prototypeIndex, offset: 0x20, size: 0x4, def value: None
  int32_t prototypeIndex;

  /// @brief Field temporaryDistance, offset: 0x24, size: 0x4, def value: None
  float_t temporaryDistance;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TreeInstance, 0x28>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::TreeInstance, position) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TreeInstance, widthScale) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TreeInstance, heightScale) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TreeInstance, rotation) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TreeInstance, color) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TreeInstance, lightmapColor) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TreeInstance, prototypeIndex) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TreeInstance, temporaryDistance) == 0x24, "Offset mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TreeInstance, "UnityEngine", "TreeInstance");
