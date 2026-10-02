#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RadeonRays/TopLevelAccelStruct.hpp"
#include "UnityEngine/zzzz__GraphicsBuffer_impl.hpp"
#include "UnityEngine/Rendering/RadeonRays/zzzz__TopLevelAccelStruct_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/zzzz__GraphicsBuffer_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::RadeonRays::TopLevelAccelStruct.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RadeonRays::TopLevelAccelStruct::*)()>(&::UnityEngine::Rendering::RadeonRays::TopLevelAccelStruct::Dispose)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x6dfc520;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::TopLevelAccelStruct>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::RadeonRays::TopLevelAccelStruct::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RadeonRays::TopLevelAccelStruct>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::Rendering::RadeonRays::TopLevelAccelStruct::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::Rendering::RadeonRays::TopLevelAccelStruct::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "topLevelBvh", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "bottomLevelBvhs", ty:
// "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "instanceInfos", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value:
// Some("{}"), comment: None }, CppParam { name: "instanceCount", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Rendering::RadeonRays::TopLevelAccelStruct::TopLevelAccelStruct(::UnityEngine::GraphicsBuffer* topLevelBvh, ::UnityEngine::GraphicsBuffer* bottomLevelBvhs,
                                                                                         ::UnityEngine::GraphicsBuffer* instanceInfos, uint32_t instanceCount) noexcept {
  this->topLevelBvh = topLevelBvh;
  this->bottomLevelBvhs = bottomLevelBvhs;
  this->instanceInfos = instanceInfos;
  this->instanceCount = instanceCount;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RadeonRays::TopLevelAccelStruct::TopLevelAccelStruct() {}
constexpr ::UnityEngine::GraphicsBuffer_Target UnityEngine::Rendering::RadeonRays::TopLevelAccelStruct::topLevelBvhTarget{ static_cast<int32_t>(0x10) };
constexpr ::UnityEngine::GraphicsBuffer_Target UnityEngine::Rendering::RadeonRays::TopLevelAccelStruct::instanceInfoTarget{ static_cast<int32_t>(0x10) };
