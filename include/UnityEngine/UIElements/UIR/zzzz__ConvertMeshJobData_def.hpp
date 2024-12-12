#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/ConvertMeshJobData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ConvertMeshJobData)
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
struct ConvertMeshJobData;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::UIR::ConvertMeshJobData);
// Dependencies System.IntPtr, UnityEngine.Color32, UnityEngine.Matrix4x4
namespace UnityEngine::UIElements::UIR {
// Is value type: true
// CS Name: UnityEngine.UIElements.UIR.ConvertMeshJobData
struct CORDL_TYPE ConvertMeshJobData {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConvertMeshJobData();

  // Ctor Parameters [CppParam { name: "vertSrc", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "vertDst", ty: "::System::IntPtr", modifiers: "", def_value: None },
  // CppParam { name: "vertCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "transform", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: None }, CppParam { name:
  // "transformUVs", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "xformClipPages", ty: "::UnityEngine::Color32", modifiers: "", def_value: None }, CppParam { name: "ids", ty:
  // "::UnityEngine::Color32", modifiers: "", def_value: None }, CppParam { name: "addFlags", ty: "::UnityEngine::Color32", modifiers: "", def_value: None }, CppParam { name: "opacityPage", ty:
  // "::UnityEngine::Color32", modifiers: "", def_value: None }, CppParam { name: "textCoreSettingsPage", ty: "::UnityEngine::Color32", modifiers: "", def_value: None }, CppParam { name: "isText", ty:
  // "int32_t", modifiers: "", def_value: None }, CppParam { name: "textureId", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "indexSrc", ty: "::System::IntPtr", modifiers: "",
  // def_value: None }, CppParam { name: "indexDst", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "indexCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam
  // { name: "indexOffset", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "flipIndices", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ConvertMeshJobData(::System::IntPtr vertSrc, ::System::IntPtr vertDst, int32_t vertCount, ::UnityEngine::Matrix4x4 transform, int32_t transformUVs, ::UnityEngine::Color32 xformClipPages,
                               ::UnityEngine::Color32 ids, ::UnityEngine::Color32 addFlags, ::UnityEngine::Color32 opacityPage, ::UnityEngine::Color32 textCoreSettingsPage, int32_t isText,
                               float_t textureId, ::System::IntPtr indexSrc, ::System::IntPtr indexDst, int32_t indexCount, int32_t indexOffset, int32_t flipIndices) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6361 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x98 };

  /// @brief Field vertSrc, offset: 0x0, size: 0x8, def value: None
  ::System::IntPtr vertSrc;

  /// @brief Field vertDst, offset: 0x8, size: 0x8, def value: None
  ::System::IntPtr vertDst;

  /// @brief Field vertCount, offset: 0x10, size: 0x4, def value: None
  int32_t vertCount;

  /// @brief Field transform, offset: 0x14, size: 0x40, def value: None
  ::UnityEngine::Matrix4x4 transform;

  /// @brief Field transformUVs, offset: 0x54, size: 0x4, def value: None
  int32_t transformUVs;

  /// @brief Field xformClipPages, offset: 0x58, size: 0x4, def value: None
  ::UnityEngine::Color32 xformClipPages;

  /// @brief Field ids, offset: 0x5c, size: 0x4, def value: None
  ::UnityEngine::Color32 ids;

  /// @brief Field addFlags, offset: 0x60, size: 0x4, def value: None
  ::UnityEngine::Color32 addFlags;

  /// @brief Field opacityPage, offset: 0x64, size: 0x4, def value: None
  ::UnityEngine::Color32 opacityPage;

  /// @brief Field textCoreSettingsPage, offset: 0x68, size: 0x4, def value: None
  ::UnityEngine::Color32 textCoreSettingsPage;

  /// @brief Field isText, offset: 0x6c, size: 0x4, def value: None
  int32_t isText;

  /// @brief Field textureId, offset: 0x70, size: 0x4, def value: None
  float_t textureId;

  /// @brief Field indexSrc, offset: 0x78, size: 0x8, def value: None
  ::System::IntPtr indexSrc;

  /// @brief Field indexDst, offset: 0x80, size: 0x8, def value: None
  ::System::IntPtr indexDst;

  /// @brief Field indexCount, offset: 0x88, size: 0x4, def value: None
  int32_t indexCount;

  /// @brief Field indexOffset, offset: 0x8c, size: 0x4, def value: None
  int32_t indexOffset;

  /// @brief Field flipIndices, offset: 0x90, size: 0x4, def value: None
  int32_t flipIndices;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::UIR::ConvertMeshJobData, vertSrc) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::ConvertMeshJobData, vertDst) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::ConvertMeshJobData, vertCount) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::ConvertMeshJobData, transform) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::ConvertMeshJobData, transformUVs) == 0x54, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::ConvertMeshJobData, xformClipPages) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::ConvertMeshJobData, ids) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::ConvertMeshJobData, addFlags) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::ConvertMeshJobData, opacityPage) == 0x64, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::ConvertMeshJobData, textCoreSettingsPage) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::ConvertMeshJobData, isText) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::ConvertMeshJobData, textureId) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::ConvertMeshJobData, indexSrc) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::ConvertMeshJobData, indexDst) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::ConvertMeshJobData, indexCount) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::ConvertMeshJobData, indexOffset) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::ConvertMeshJobData, flipIndices) == 0x90, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::ConvertMeshJobData, 0x98>, "Size mismatch!");

} // namespace UnityEngine::UIElements::UIR
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::ConvertMeshJobData, "UnityEngine.UIElements.UIR", "ConvertMeshJobData");
