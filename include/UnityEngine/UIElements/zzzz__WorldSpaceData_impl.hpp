#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/WorldSpaceData.hpp"
#include "UnityEngine/zzzz__Bounds_impl.hpp"
#include "UnityEngine/zzzz__Rect_impl.hpp"
#include "UnityEngine/UIElements/zzzz__WorldSpaceData_def.hpp"
inline void UnityEngine::UIElements::WorldSpaceData::setStaticF_k_Empty3DBounds(::UnityEngine::Bounds value) {
  ::cordl_internals::setStaticField<::UnityEngine::Bounds, "k_Empty3DBounds", ::UnityEngine::UIElements::WorldSpaceData>(std::forward<::UnityEngine::Bounds>(value));
}
inline ::UnityEngine::Bounds UnityEngine::UIElements::WorldSpaceData::getStaticF_k_Empty3DBounds() {
  return ::cordl_internals::getStaticField<::UnityEngine::Bounds, "k_Empty3DBounds", ::UnityEngine::UIElements::WorldSpaceData>();
}
// Ctor Parameters [CppParam { name: "localBounds3D", ty: "::UnityEngine::Bounds", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "localBoundsPicking3D", ty:
// "::UnityEngine::Bounds", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "localBoundsWithoutNested3D", ty: "::UnityEngine::Bounds", modifiers: "", def_value: Some("{}"),
// comment: None }, CppParam { name: "boundingBoxWithoutNested", ty: "::UnityEngine::Rect", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::UIElements::WorldSpaceData::WorldSpaceData(::UnityEngine::Bounds localBounds3D, ::UnityEngine::Bounds localBoundsPicking3D, ::UnityEngine::Bounds localBoundsWithoutNested3D,
                                                                    ::UnityEngine::Rect boundingBoxWithoutNested) noexcept {
  this->localBounds3D = localBounds3D;
  this->localBoundsPicking3D = localBoundsPicking3D;
  this->localBoundsWithoutNested3D = localBoundsWithoutNested3D;
  this->boundingBoxWithoutNested = boundingBoxWithoutNested;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::WorldSpaceData::WorldSpaceData() {}
