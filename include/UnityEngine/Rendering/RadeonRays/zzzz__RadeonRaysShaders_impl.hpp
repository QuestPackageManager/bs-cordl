#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RadeonRays/RadeonRaysShaders.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/RadeonRays/zzzz__RadeonRaysShaders_def.hpp"
#include "UnityEngine/zzzz__ComputeShader_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::RadeonRays::RadeonRaysShaders._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RadeonRays::RadeonRaysShaders::*)()>(&::UnityEngine::Rendering::RadeonRays::RadeonRaysShaders::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6dfd1e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::RadeonRaysShaders*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::ComputeShader>& UnityEngine::Rendering::RadeonRays::RadeonRaysShaders::__cordl_internal_get_bitHistogram() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bitHistogram;
}
constexpr ::UnityW<::UnityEngine::ComputeShader> const& UnityEngine::Rendering::RadeonRays::RadeonRaysShaders::__cordl_internal_get_bitHistogram() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bitHistogram;
}
constexpr void UnityEngine::Rendering::RadeonRays::RadeonRaysShaders::__cordl_internal_set_bitHistogram(::UnityW<::UnityEngine::ComputeShader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bitHistogram = value;
}
constexpr ::UnityW<::UnityEngine::ComputeShader>& UnityEngine::Rendering::RadeonRays::RadeonRaysShaders::__cordl_internal_get_blockReducePart() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___blockReducePart;
}
constexpr ::UnityW<::UnityEngine::ComputeShader> const& UnityEngine::Rendering::RadeonRays::RadeonRaysShaders::__cordl_internal_get_blockReducePart() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___blockReducePart;
}
constexpr void UnityEngine::Rendering::RadeonRays::RadeonRaysShaders::__cordl_internal_set_blockReducePart(::UnityW<::UnityEngine::ComputeShader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___blockReducePart = value;
}
constexpr ::UnityW<::UnityEngine::ComputeShader>& UnityEngine::Rendering::RadeonRays::RadeonRaysShaders::__cordl_internal_get_blockScan() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___blockScan;
}
constexpr ::UnityW<::UnityEngine::ComputeShader> const& UnityEngine::Rendering::RadeonRays::RadeonRaysShaders::__cordl_internal_get_blockScan() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___blockScan;
}
constexpr void UnityEngine::Rendering::RadeonRays::RadeonRaysShaders::__cordl_internal_set_blockScan(::UnityW<::UnityEngine::ComputeShader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___blockScan = value;
}
constexpr ::UnityW<::UnityEngine::ComputeShader>& UnityEngine::Rendering::RadeonRays::RadeonRaysShaders::__cordl_internal_get_buildHlbvh() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buildHlbvh;
}
constexpr ::UnityW<::UnityEngine::ComputeShader> const& UnityEngine::Rendering::RadeonRays::RadeonRaysShaders::__cordl_internal_get_buildHlbvh() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buildHlbvh;
}
constexpr void UnityEngine::Rendering::RadeonRays::RadeonRaysShaders::__cordl_internal_set_buildHlbvh(::UnityW<::UnityEngine::ComputeShader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___buildHlbvh = value;
}
constexpr ::UnityW<::UnityEngine::ComputeShader>& UnityEngine::Rendering::RadeonRays::RadeonRaysShaders::__cordl_internal_get_restructureBvh() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___restructureBvh;
}
constexpr ::UnityW<::UnityEngine::ComputeShader> const& UnityEngine::Rendering::RadeonRays::RadeonRaysShaders::__cordl_internal_get_restructureBvh() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___restructureBvh;
}
constexpr void UnityEngine::Rendering::RadeonRays::RadeonRaysShaders::__cordl_internal_set_restructureBvh(::UnityW<::UnityEngine::ComputeShader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___restructureBvh = value;
}
constexpr ::UnityW<::UnityEngine::ComputeShader>& UnityEngine::Rendering::RadeonRays::RadeonRaysShaders::__cordl_internal_get_scatter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scatter;
}
constexpr ::UnityW<::UnityEngine::ComputeShader> const& UnityEngine::Rendering::RadeonRays::RadeonRaysShaders::__cordl_internal_get_scatter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scatter;
}
constexpr void UnityEngine::Rendering::RadeonRays::RadeonRaysShaders::__cordl_internal_set_scatter(::UnityW<::UnityEngine::ComputeShader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___scatter = value;
}
inline void UnityEngine::Rendering::RadeonRays::RadeonRaysShaders::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::RadeonRaysShaders*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::RadeonRays::RadeonRaysShaders* UnityEngine::Rendering::RadeonRays::RadeonRaysShaders::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::RadeonRays::RadeonRaysShaders*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RadeonRays::RadeonRaysShaders::RadeonRaysShaders() {}
