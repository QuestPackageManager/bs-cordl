#pragma once
// IWYU pragma private; include "UnityEngine\ResourceManagement\Profiling\AssetFrameData.hpp"
#include "UnityEngine/ResourceManagement/Profiling/zzzz__ContentStatus_impl.hpp"
#include "UnityEngine/ResourceManagement/Profiling/zzzz__AssetFrameData_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Profiling::AssetFrameData.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ResourceManagement::Profiling::AssetFrameData::*)(::System::Object*)>(
    &::UnityEngine::ResourceManagement::Profiling::AssetFrameData::Equals)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x69245bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Profiling::AssetFrameData>(),
                                                                                          { ::i2c::class_of<::UnityEngine::ResourceManagement::Profiling::AssetFrameData>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Profiling::AssetFrameData.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ResourceManagement::Profiling::AssetFrameData::*)()>(
    &::UnityEngine::ResourceManagement::Profiling::AssetFrameData::GetHashCode)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6924648;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Profiling::AssetFrameData>(),
                                                                                          { ::i2c::class_of<::UnityEngine::ResourceManagement::Profiling::AssetFrameData>(), 2 }));
    return ___internal_method;
  }
};
inline bool UnityEngine::ResourceManagement::Profiling::AssetFrameData::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ResourceManagement::Profiling::AssetFrameData>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t UnityEngine::ResourceManagement::Profiling::AssetFrameData::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ResourceManagement::Profiling::AssetFrameData>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "AssetCode", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "BundleCode", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam
// { name: "ReferenceCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "PercentComplete", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "Status", ty: "::UnityEngine::ResourceManagement::Profiling::ContentStatus", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ResourceManagement::Profiling::AssetFrameData::AssetFrameData(int32_t AssetCode, int32_t BundleCode, int32_t ReferenceCount, float_t PercentComplete,
                                                                                       ::UnityEngine::ResourceManagement::Profiling::ContentStatus Status) noexcept {
  this->AssetCode = AssetCode;
  this->BundleCode = BundleCode;
  this->ReferenceCount = ReferenceCount;
  this->PercentComplete = PercentComplete;
  this->Status = Status;
}
// Ctor Parameters []
constexpr ::UnityEngine::ResourceManagement::Profiling::AssetFrameData::AssetFrameData() {}
