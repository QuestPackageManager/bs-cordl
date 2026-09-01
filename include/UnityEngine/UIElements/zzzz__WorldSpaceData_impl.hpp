#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\WorldSpaceData.hpp"
#include "UnityEngine/zzzz__Bounds_impl.hpp"
#include "UnityEngine/UIElements/zzzz__WorldSpaceData_def.hpp"
inline void UnityEngine::UIElements::WorldSpaceData::setStaticF_k_Empty3DBounds(::UnityEngine::Bounds value) {
  ::cordl_internals::setStaticField<::UnityEngine::Bounds, "k_Empty3DBounds", ::UnityEngine::UIElements::WorldSpaceData>(std::forward<::UnityEngine::Bounds>(value));
}
inline ::UnityEngine::Bounds UnityEngine::UIElements::WorldSpaceData::getStaticF_k_Empty3DBounds() {
  return ::cordl_internals::getStaticField<::UnityEngine::Bounds, "k_Empty3DBounds", ::UnityEngine::UIElements::WorldSpaceData>();
}
// Ctor Parameters [CppParam { name: "localBounds3D", ty: "::UnityEngine::Bounds", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::WorldSpaceData::WorldSpaceData(::UnityEngine::Bounds localBounds3D) noexcept {
  this->localBounds3D = localBounds3D;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::WorldSpaceData::WorldSpaceData() {}
