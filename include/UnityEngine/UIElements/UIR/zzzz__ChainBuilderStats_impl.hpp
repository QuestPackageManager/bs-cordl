#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/ChainBuilderStats.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__ChainBuilderStats_def.hpp"
// Ctor Parameters [CppParam { name: "elementsAdded", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "elementsRemoved", ty: "uint32_t", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "recursiveClipUpdates", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "recursiveClipUpdatesExpanded", ty: "uint32_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "nonRecursiveClipUpdates", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "recursiveTransformUpdates", ty: "uint32_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "recursiveTransformUpdatesExpanded", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "recursiveOpacityUpdates", ty: "uint32_t",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "recursiveOpacityUpdatesExpanded", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "colorUpdates", ty: "uint32_t",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "colorUpdatesExpanded", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "recursiveVisualUpdates", ty: "uint32_t",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "recursiveVisualUpdatesExpanded", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "nonRecursiveVisualUpdates", ty:
// "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "dirtyProcessed", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "nudgeTransformed", ty: "uint32_t",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "boneTransformed", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "skipTransformed", ty: "uint32_t", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "visualUpdateTransformed", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "updatedMeshAllocations", ty: "uint32_t",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "newMeshAllocations", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "groupTransformElementsChanged", ty:
// "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "immedateRenderersActive", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "textUpdates", ty:
// "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::UIR::ChainBuilderStats::ChainBuilderStats(uint32_t elementsAdded, uint32_t elementsRemoved, uint32_t recursiveClipUpdates, uint32_t recursiveClipUpdatesExpanded,
                                                                               uint32_t nonRecursiveClipUpdates, uint32_t recursiveTransformUpdates, uint32_t recursiveTransformUpdatesExpanded,
                                                                               uint32_t recursiveOpacityUpdates, uint32_t recursiveOpacityUpdatesExpanded, uint32_t colorUpdates,
                                                                               uint32_t colorUpdatesExpanded, uint32_t recursiveVisualUpdates, uint32_t recursiveVisualUpdatesExpanded,
                                                                               uint32_t nonRecursiveVisualUpdates, uint32_t dirtyProcessed, uint32_t nudgeTransformed, uint32_t boneTransformed,
                                                                               uint32_t skipTransformed, uint32_t visualUpdateTransformed, uint32_t updatedMeshAllocations, uint32_t newMeshAllocations,
                                                                               uint32_t groupTransformElementsChanged, uint32_t immedateRenderersActive, uint32_t textUpdates) noexcept {
  this->elementsAdded = elementsAdded;
  this->elementsRemoved = elementsRemoved;
  this->recursiveClipUpdates = recursiveClipUpdates;
  this->recursiveClipUpdatesExpanded = recursiveClipUpdatesExpanded;
  this->nonRecursiveClipUpdates = nonRecursiveClipUpdates;
  this->recursiveTransformUpdates = recursiveTransformUpdates;
  this->recursiveTransformUpdatesExpanded = recursiveTransformUpdatesExpanded;
  this->recursiveOpacityUpdates = recursiveOpacityUpdates;
  this->recursiveOpacityUpdatesExpanded = recursiveOpacityUpdatesExpanded;
  this->colorUpdates = colorUpdates;
  this->colorUpdatesExpanded = colorUpdatesExpanded;
  this->recursiveVisualUpdates = recursiveVisualUpdates;
  this->recursiveVisualUpdatesExpanded = recursiveVisualUpdatesExpanded;
  this->nonRecursiveVisualUpdates = nonRecursiveVisualUpdates;
  this->dirtyProcessed = dirtyProcessed;
  this->nudgeTransformed = nudgeTransformed;
  this->boneTransformed = boneTransformed;
  this->skipTransformed = skipTransformed;
  this->visualUpdateTransformed = visualUpdateTransformed;
  this->updatedMeshAllocations = updatedMeshAllocations;
  this->newMeshAllocations = newMeshAllocations;
  this->groupTransformElementsChanged = groupTransformElementsChanged;
  this->immedateRenderersActive = immedateRenderersActive;
  this->textUpdates = textUpdates;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIR::ChainBuilderStats::ChainBuilderStats() {}
