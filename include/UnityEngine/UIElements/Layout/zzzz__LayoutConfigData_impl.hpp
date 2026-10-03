#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Layout/LayoutConfigData.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutConfigData_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::Layout::LayoutConfigData.get_Default
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::Layout::LayoutConfigData (*)()>(&::UnityEngine::UIElements::Layout::LayoutConfigData::get_Default)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x7198c1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutConfigData>(), { "get_Default", {}, {} })));
    return ___internal_method;
  }
};
inline ::UnityEngine::UIElements::Layout::LayoutConfigData UnityEngine::UIElements::Layout::LayoutConfigData::get_Default() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutConfigData>(), { "get_Default", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Layout::LayoutConfigData>(nullptr, ___internal_method);
}
// Ctor Parameters [CppParam { name: "PointScaleFactor", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ManagedMeasureFunctionIndex", ty: "int32_t", modifiers:
// "", def_value: Some("{}"), comment: None }, CppParam { name: "ManagedBaselineFunctionIndex", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ShouldLog", ty:
// "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::UIElements::Layout::LayoutConfigData::LayoutConfigData(float_t PointScaleFactor, int32_t ManagedMeasureFunctionIndex, int32_t ManagedBaselineFunctionIndex,
                                                                                bool ShouldLog) noexcept {
  this->PointScaleFactor = PointScaleFactor;
  this->ManagedMeasureFunctionIndex = ManagedMeasureFunctionIndex;
  this->ManagedBaselineFunctionIndex = ManagedBaselineFunctionIndex;
  this->ShouldLog = ShouldLog;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::Layout::LayoutConfigData::LayoutConfigData() {}
