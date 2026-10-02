#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/UnifiedRayTracing/GeometryPoolEntryInfo.hpp"
#include "UnityEngine/Rendering/UnifiedRayTracing/zzzz__GeometryPoolEntryInfo_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolEntryInfo.NewDefault
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolEntryInfo (*)()>(
    &::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolEntryInfo::NewDefault)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e02e88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolEntryInfo>(), { "NewDefault", {}, {} })));
    return ___internal_method;
  }
};
inline ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolEntryInfo UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolEntryInfo::NewDefault() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolEntryInfo>(), { "NewDefault", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolEntryInfo>(nullptr, ___internal_method);
}
// Ctor Parameters [CppParam { name: "valid", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "refCount", ty: "uint32_t", modifiers: "", def_value: Some("{}"),
// comment: None }]
constexpr ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolEntryInfo::GeometryPoolEntryInfo(bool valid, uint32_t refCount) noexcept {
  this->valid = valid;
  this->refCount = refCount;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::UnifiedRayTracing::GeometryPoolEntryInfo::GeometryPoolEntryInfo() {}
