#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/GPUDrivenMeshLodInfo.hpp"
#include "UnityEngine/Rendering/zzzz__GPUDrivenMeshLodInfo_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::GPUDrivenMeshLodInfo.get_lodSelectionActive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::GPUDrivenMeshLodInfo::*)()>(&::UnityEngine::Rendering::GPUDrivenMeshLodInfo::get_lodSelectionActive)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6f8a2a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUDrivenMeshLodInfo>(), { "get_lodSelectionActive", {}, {} })));
    return ___internal_method;
  }
};
inline bool UnityEngine::Rendering::GPUDrivenMeshLodInfo::get_lodSelectionActive() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GPUDrivenMeshLodInfo>(), { "get_lodSelectionActive", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "levelCount", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "lodSlope", ty: "float_t", modifiers: "", def_value:
// Some("{}"), comment: None }, CppParam { name: "lodBias", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Rendering::GPUDrivenMeshLodInfo::GPUDrivenMeshLodInfo(int32_t levelCount, float_t lodSlope, float_t lodBias) noexcept {
  this->levelCount = levelCount;
  this->lodSlope = lodSlope;
  this->lodBias = lodBias;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::GPUDrivenMeshLodInfo::GPUDrivenMeshLodInfo() {}
