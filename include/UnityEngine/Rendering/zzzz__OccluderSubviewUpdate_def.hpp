#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/OccluderSubviewUpdate.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Vector2Int_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OccluderSubviewUpdate)
// Forward declare root types
namespace UnityEngine::Rendering {
struct OccluderSubviewUpdate;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::OccluderSubviewUpdate);
// Dependencies UnityEngine.Matrix4x4, UnityEngine.Vector2Int, UnityEngine.Vector3
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.OccluderSubviewUpdate
struct CORDL_TYPE OccluderSubviewUpdate {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x665f4b0, size 0x108, virtual false, abstract: false, final false
  inline void _ctor(int32_t subviewIndex);

  // Ctor Parameters []
  // @brief default ctor
  constexpr OccluderSubviewUpdate();

  // Ctor Parameters [CppParam { name: "subviewIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "depthSliceIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam {
  // name: "depthOffset", ty: "::UnityEngine::Vector2Int", modifiers: "", def_value: None }, CppParam { name: "viewMatrix", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: None }, CppParam {
  // name: "invViewMatrix", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: None }, CppParam { name: "gpuProjMatrix", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: None },
  // CppParam { name: "viewOffsetWorldSpace", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }]
  constexpr OccluderSubviewUpdate(int32_t subviewIndex, int32_t depthSliceIndex, ::UnityEngine::Vector2Int depthOffset, ::UnityEngine::Matrix4x4 viewMatrix, ::UnityEngine::Matrix4x4 invViewMatrix,
                                  ::UnityEngine::Matrix4x4 gpuProjMatrix, ::UnityEngine::Vector3 viewOffsetWorldSpace) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17603 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xdc };

  /// @brief Field subviewIndex, offset: 0x0, size: 0x4, def value: None
  int32_t subviewIndex;

  /// @brief Field depthSliceIndex, offset: 0x4, size: 0x4, def value: None
  int32_t depthSliceIndex;

  /// @brief Field depthOffset, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::Vector2Int depthOffset;

  /// @brief Field viewMatrix, offset: 0x10, size: 0x40, def value: None
  ::UnityEngine::Matrix4x4 viewMatrix;

  /// @brief Field invViewMatrix, offset: 0x50, size: 0x40, def value: None
  ::UnityEngine::Matrix4x4 invViewMatrix;

  /// @brief Field gpuProjMatrix, offset: 0x90, size: 0x40, def value: None
  ::UnityEngine::Matrix4x4 gpuProjMatrix;

  /// @brief Field viewOffsetWorldSpace, offset: 0xd0, size: 0xc, def value: None
  ::UnityEngine::Vector3 viewOffsetWorldSpace;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::OccluderSubviewUpdate, subviewIndex) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::OccluderSubviewUpdate, depthSliceIndex) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::OccluderSubviewUpdate, depthOffset) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::OccluderSubviewUpdate, viewMatrix) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::OccluderSubviewUpdate, invViewMatrix) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::OccluderSubviewUpdate, gpuProjMatrix) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::OccluderSubviewUpdate, viewOffsetWorldSpace) == 0xd0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::OccluderSubviewUpdate, 0xdc>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::OccluderSubviewUpdate, "UnityEngine.Rendering", "OccluderSubviewUpdate");
