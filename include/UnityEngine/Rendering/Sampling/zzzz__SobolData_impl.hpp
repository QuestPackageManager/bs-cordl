#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Sampling/SobolData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/Sampling/zzzz__SobolData_def.hpp"
inline void UnityEngine::Rendering::Sampling::SobolData::setStaticF_SobolMatrices(::ArrayW<uint32_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint32_t>, "SobolMatrices", ::UnityEngine::Rendering::Sampling::SobolData*>(std::forward<::ArrayW<uint32_t>>(value));
}
inline ::ArrayW<uint32_t> UnityEngine::Rendering::Sampling::SobolData::getStaticF_SobolMatrices() {
  return ::cordl_internals::getStaticField<::ArrayW<uint32_t>, "SobolMatrices", ::UnityEngine::Rendering::Sampling::SobolData*>();
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Sampling::SobolData::SobolData() {}
