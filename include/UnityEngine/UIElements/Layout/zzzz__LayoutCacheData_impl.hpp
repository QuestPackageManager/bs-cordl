#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Layout/LayoutCacheData.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__FixedBuffer16_1_impl.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutCachedMeasurement_impl.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutCacheData_def.hpp"
inline void UnityEngine::UIElements::Layout::LayoutCacheData::setStaticF_Default(::UnityEngine::UIElements::Layout::LayoutCacheData value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::Layout::LayoutCacheData, "Default",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Layout::LayoutCacheData>::get>(
      std::forward<::UnityEngine::UIElements::Layout::LayoutCacheData>(value));
}
inline ::UnityEngine::UIElements::Layout::LayoutCacheData UnityEngine::UIElements::Layout::LayoutCacheData::getStaticF_Default() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::Layout::LayoutCacheData, "Default",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Layout::LayoutCacheData>::get>();
}
// Ctor Parameters [CppParam { name: "NextCachedMeasurementsIndex", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "cachedMeasurements", ty:
// "::UnityEngine::UIElements::Layout::FixedBuffer16_1<::UnityEngine::UIElements::Layout::LayoutCachedMeasurement>", modifiers: "", def_value: Some("{}") }, CppParam { name: "CachedLayout", ty:
// "::UnityEngine::UIElements::Layout::LayoutCachedMeasurement", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::Layout::LayoutCacheData::LayoutCacheData(
    uint32_t NextCachedMeasurementsIndex, ::UnityEngine::UIElements::Layout::FixedBuffer16_1<::UnityEngine::UIElements::Layout::LayoutCachedMeasurement> cachedMeasurements,
    ::UnityEngine::UIElements::Layout::LayoutCachedMeasurement CachedLayout) noexcept {
  this->NextCachedMeasurementsIndex = NextCachedMeasurementsIndex;
  this->cachedMeasurements = cachedMeasurements;
  this->CachedLayout = CachedLayout;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::Layout::LayoutCacheData::LayoutCacheData() {}
