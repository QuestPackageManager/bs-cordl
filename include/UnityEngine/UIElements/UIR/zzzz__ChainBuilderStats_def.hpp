#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/ChainBuilderStats.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ChainBuilderStats)
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
struct ChainBuilderStats;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::UIR::ChainBuilderStats);
// Dependencies
namespace UnityEngine::UIElements::UIR {
// Is value type: true
// CS Name: UnityEngine.UIElements.UIR.ChainBuilderStats
struct CORDL_TYPE ChainBuilderStats {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr ChainBuilderStats();

  // Ctor Parameters [CppParam { name: "elementsAdded", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "elementsRemoved", ty: "uint32_t", modifiers: "", def_value: None }, CppParam
  // { name: "recursiveClipUpdates", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "recursiveClipUpdatesExpanded", ty: "uint32_t", modifiers: "", def_value: None }, CppParam {
  // name: "nonRecursiveClipUpdates", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "recursiveTransformUpdates", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name:
  // "recursiveTransformUpdatesExpanded", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "recursiveOpacityUpdates", ty: "uint32_t", modifiers: "", def_value: None }, CppParam {
  // name: "recursiveOpacityUpdatesExpanded", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "opacityIdUpdates", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name:
  // "colorUpdates", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "colorUpdatesExpanded", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name:
  // "recursiveVisualUpdates", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "recursiveVisualUpdatesExpanded", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name:
  // "nonRecursiveVisualUpdates", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "dirtyProcessed", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name:
  // "nudgeTransformed", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "boneTransformed", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "skipTransformed", ty:
  // "uint32_t", modifiers: "", def_value: None }, CppParam { name: "visualUpdateTransformed", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "updatedMeshAllocations", ty:
  // "uint32_t", modifiers: "", def_value: None }, CppParam { name: "newMeshAllocations", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "groupTransformElementsChanged", ty:
  // "uint32_t", modifiers: "", def_value: None }, CppParam { name: "immedateRenderersActive", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr ChainBuilderStats(uint32_t elementsAdded, uint32_t elementsRemoved, uint32_t recursiveClipUpdates, uint32_t recursiveClipUpdatesExpanded, uint32_t nonRecursiveClipUpdates,
                              uint32_t recursiveTransformUpdates, uint32_t recursiveTransformUpdatesExpanded, uint32_t recursiveOpacityUpdates, uint32_t recursiveOpacityUpdatesExpanded,
                              uint32_t opacityIdUpdates, uint32_t colorUpdates, uint32_t colorUpdatesExpanded, uint32_t recursiveVisualUpdates, uint32_t recursiveVisualUpdatesExpanded,
                              uint32_t nonRecursiveVisualUpdates, uint32_t dirtyProcessed, uint32_t nudgeTransformed, uint32_t boneTransformed, uint32_t skipTransformed,
                              uint32_t visualUpdateTransformed, uint32_t updatedMeshAllocations, uint32_t newMeshAllocations, uint32_t groupTransformElementsChanged,
                              uint32_t immedateRenderersActive) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6378 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x60 };

  /// @brief Field elementsAdded, offset: 0x0, size: 0x4, def value: None
  uint32_t elementsAdded;

  /// @brief Field elementsRemoved, offset: 0x4, size: 0x4, def value: None
  uint32_t elementsRemoved;

  /// @brief Field recursiveClipUpdates, offset: 0x8, size: 0x4, def value: None
  uint32_t recursiveClipUpdates;

  /// @brief Field recursiveClipUpdatesExpanded, offset: 0xc, size: 0x4, def value: None
  uint32_t recursiveClipUpdatesExpanded;

  /// @brief Field nonRecursiveClipUpdates, offset: 0x10, size: 0x4, def value: None
  uint32_t nonRecursiveClipUpdates;

  /// @brief Field recursiveTransformUpdates, offset: 0x14, size: 0x4, def value: None
  uint32_t recursiveTransformUpdates;

  /// @brief Field recursiveTransformUpdatesExpanded, offset: 0x18, size: 0x4, def value: None
  uint32_t recursiveTransformUpdatesExpanded;

  /// @brief Field recursiveOpacityUpdates, offset: 0x1c, size: 0x4, def value: None
  uint32_t recursiveOpacityUpdates;

  /// @brief Field recursiveOpacityUpdatesExpanded, offset: 0x20, size: 0x4, def value: None
  uint32_t recursiveOpacityUpdatesExpanded;

  /// @brief Field opacityIdUpdates, offset: 0x24, size: 0x4, def value: None
  uint32_t opacityIdUpdates;

  /// @brief Field colorUpdates, offset: 0x28, size: 0x4, def value: None
  uint32_t colorUpdates;

  /// @brief Field colorUpdatesExpanded, offset: 0x2c, size: 0x4, def value: None
  uint32_t colorUpdatesExpanded;

  /// @brief Field recursiveVisualUpdates, offset: 0x30, size: 0x4, def value: None
  uint32_t recursiveVisualUpdates;

  /// @brief Field recursiveVisualUpdatesExpanded, offset: 0x34, size: 0x4, def value: None
  uint32_t recursiveVisualUpdatesExpanded;

  /// @brief Field nonRecursiveVisualUpdates, offset: 0x38, size: 0x4, def value: None
  uint32_t nonRecursiveVisualUpdates;

  /// @brief Field dirtyProcessed, offset: 0x3c, size: 0x4, def value: None
  uint32_t dirtyProcessed;

  /// @brief Field nudgeTransformed, offset: 0x40, size: 0x4, def value: None
  uint32_t nudgeTransformed;

  /// @brief Field boneTransformed, offset: 0x44, size: 0x4, def value: None
  uint32_t boneTransformed;

  /// @brief Field skipTransformed, offset: 0x48, size: 0x4, def value: None
  uint32_t skipTransformed;

  /// @brief Field visualUpdateTransformed, offset: 0x4c, size: 0x4, def value: None
  uint32_t visualUpdateTransformed;

  /// @brief Field updatedMeshAllocations, offset: 0x50, size: 0x4, def value: None
  uint32_t updatedMeshAllocations;

  /// @brief Field newMeshAllocations, offset: 0x54, size: 0x4, def value: None
  uint32_t newMeshAllocations;

  /// @brief Field groupTransformElementsChanged, offset: 0x58, size: 0x4, def value: None
  uint32_t groupTransformElementsChanged;

  /// @brief Field immedateRenderersActive, offset: 0x5c, size: 0x4, def value: None
  uint32_t immedateRenderersActive;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::UIR::ChainBuilderStats, elementsAdded) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::ChainBuilderStats, elementsRemoved) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::ChainBuilderStats, recursiveClipUpdates) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::ChainBuilderStats, recursiveClipUpdatesExpanded) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::ChainBuilderStats, nonRecursiveClipUpdates) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::ChainBuilderStats, recursiveTransformUpdates) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::ChainBuilderStats, recursiveTransformUpdatesExpanded) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::ChainBuilderStats, recursiveOpacityUpdates) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::ChainBuilderStats, recursiveOpacityUpdatesExpanded) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::ChainBuilderStats, opacityIdUpdates) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::ChainBuilderStats, colorUpdates) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::ChainBuilderStats, colorUpdatesExpanded) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::ChainBuilderStats, recursiveVisualUpdates) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::ChainBuilderStats, recursiveVisualUpdatesExpanded) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::ChainBuilderStats, nonRecursiveVisualUpdates) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::ChainBuilderStats, dirtyProcessed) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::ChainBuilderStats, nudgeTransformed) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::ChainBuilderStats, boneTransformed) == 0x44, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::ChainBuilderStats, skipTransformed) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::ChainBuilderStats, visualUpdateTransformed) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::ChainBuilderStats, updatedMeshAllocations) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::ChainBuilderStats, newMeshAllocations) == 0x54, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::ChainBuilderStats, groupTransformElementsChanged) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::ChainBuilderStats, immedateRenderersActive) == 0x5c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::ChainBuilderStats, 0x60>, "Size mismatch!");

} // namespace UnityEngine::UIElements::UIR
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::ChainBuilderStats, "UnityEngine.UIElements.UIR", "ChainBuilderStats");
