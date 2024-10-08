#pragma once
// IWYU pragma private; include "UnityEngine/RenderInstancedDataLayout.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RenderInstancedDataLayout)
// Forward declare root types
namespace UnityEngine {
struct RenderInstancedDataLayout;
}
// Write type traits
MARK_VAL_T(::UnityEngine::RenderInstancedDataLayout);
// Type: UnityEngine::RenderInstancedDataLayout
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// CS Name: ::UnityEngine::RenderInstancedDataLayout
struct CORDL_TYPE RenderInstancedDataLayout {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderInstancedDataLayout();

  // Ctor Parameters [CppParam { name: "_size_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_offsetObjectToWorld_k__BackingField", ty: "int32_t", modifiers: "",
  // def_value: None }, CppParam { name: "_offsetPrevObjectToWorld_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_offsetRenderingLayerMask_k__BackingField", ty:
  // "int32_t", modifiers: "", def_value: None }]
  constexpr RenderInstancedDataLayout(int32_t _size_k__BackingField, int32_t _offsetObjectToWorld_k__BackingField, int32_t _offsetPrevObjectToWorld_k__BackingField,
                                      int32_t _offsetRenderingLayerMask_k__BackingField) noexcept;

  /// @brief Field <size>k__BackingField, offset: 0x0, size: 0x4, def value: None
  int32_t _size_k__BackingField;

  /// @brief Field <offsetObjectToWorld>k__BackingField, offset: 0x4, size: 0x4, def value: None
  int32_t _offsetObjectToWorld_k__BackingField;

  /// @brief Field <offsetPrevObjectToWorld>k__BackingField, offset: 0x8, size: 0x4, def value: None
  int32_t _offsetPrevObjectToWorld_k__BackingField;

  /// @brief Field <offsetRenderingLayerMask>k__BackingField, offset: 0xc, size: 0x4, def value: None
  int32_t _offsetRenderingLayerMask_k__BackingField;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10687 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::RenderInstancedDataLayout, 0x10>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::RenderInstancedDataLayout, _size_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::RenderInstancedDataLayout, _offsetObjectToWorld_k__BackingField) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::RenderInstancedDataLayout, _offsetPrevObjectToWorld_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::RenderInstancedDataLayout, _offsetRenderingLayerMask_k__BackingField) == 0xc, "Offset mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::RenderInstancedDataLayout, "UnityEngine", "RenderInstancedDataLayout");
