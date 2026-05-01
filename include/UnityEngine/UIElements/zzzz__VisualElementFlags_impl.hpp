#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/VisualElementFlags.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElementFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::VisualElementFlags::VisualElementFlags(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::VisualElementFlags::VisualElementFlags() {}
constexpr ::UnityEngine::UIElements::VisualElementFlags UnityEngine::UIElements::VisualElementFlags::WorldTransformDirty{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::UIElements::VisualElementFlags UnityEngine::UIElements::VisualElementFlags::WorldTransformInverseDirty{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::UIElements::VisualElementFlags UnityEngine::UIElements::VisualElementFlags::WorldClipDirty{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::UIElements::VisualElementFlags UnityEngine::UIElements::VisualElementFlags::BoundingBoxDirty{ static_cast<int32_t>(0x8) };
constexpr ::UnityEngine::UIElements::VisualElementFlags UnityEngine::UIElements::VisualElementFlags::WorldBoundingBoxDirty{ static_cast<int32_t>(0x10) };
constexpr ::UnityEngine::UIElements::VisualElementFlags UnityEngine::UIElements::VisualElementFlags::EventInterestParentCategoriesDirty{ static_cast<int32_t>(0x20) };
constexpr ::UnityEngine::UIElements::VisualElementFlags UnityEngine::UIElements::VisualElementFlags::LayoutManual{ static_cast<int32_t>(0x40) };
constexpr ::UnityEngine::UIElements::VisualElementFlags UnityEngine::UIElements::VisualElementFlags::CompositeRoot{ static_cast<int32_t>(0x80) };
constexpr ::UnityEngine::UIElements::VisualElementFlags UnityEngine::UIElements::VisualElementFlags::RequireMeasureFunction{ static_cast<int32_t>(0x100) };
constexpr ::UnityEngine::UIElements::VisualElementFlags UnityEngine::UIElements::VisualElementFlags::EnableViewDataPersistence{ static_cast<int32_t>(0x200) };
constexpr ::UnityEngine::UIElements::VisualElementFlags UnityEngine::UIElements::VisualElementFlags::DisableClipping{ static_cast<int32_t>(0x400) };
constexpr ::UnityEngine::UIElements::VisualElementFlags UnityEngine::UIElements::VisualElementFlags::NeedsAttachToPanelEvent{ static_cast<int32_t>(0x800) };
constexpr ::UnityEngine::UIElements::VisualElementFlags UnityEngine::UIElements::VisualElementFlags::HierarchyDisplayed{ static_cast<int32_t>(0x1000) };
constexpr ::UnityEngine::UIElements::VisualElementFlags UnityEngine::UIElements::VisualElementFlags::StyleInitialized{ static_cast<int32_t>(0x2000) };
constexpr ::UnityEngine::UIElements::VisualElementFlags UnityEngine::UIElements::VisualElementFlags::DisableRendering{ static_cast<int32_t>(0x4000) };
constexpr ::UnityEngine::UIElements::VisualElementFlags UnityEngine::UIElements::VisualElementFlags::Needs3DBounds{ static_cast<int32_t>(0x8000) };
constexpr ::UnityEngine::UIElements::VisualElementFlags UnityEngine::UIElements::VisualElementFlags::LocalBounds3DDirty{ static_cast<int32_t>(0x10000) };
constexpr ::UnityEngine::UIElements::VisualElementFlags UnityEngine::UIElements::VisualElementFlags::DetachedDataSource{ static_cast<int32_t>(0x20000) };
constexpr ::UnityEngine::UIElements::VisualElementFlags UnityEngine::UIElements::VisualElementFlags::Init{ static_cast<int32_t>(0x3003f) };
