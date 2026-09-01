#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\RenderGraphModule\RayTracingAccelerationStructureResource.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RayTracingAccelerationStructureDesc_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraphResource_2_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RayTracingAccelerationStructureResource_def.hpp"
#include "UnityEngine/Rendering/zzzz__RayTracingAccelerationStructure_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RayTracingAccelerationStructureResource.GetName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Rendering::RenderGraphModule::RayTracingAccelerationStructureResource::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::RayTracingAccelerationStructureResource::GetName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67e4348;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RayTracingAccelerationStructureResource*>(),
                                                            { ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RayTracingAccelerationStructureResource*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RayTracingAccelerationStructureResource._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RayTracingAccelerationStructureResource::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::RayTracingAccelerationStructureResource::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x67e4350;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RayTracingAccelerationStructureResource*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::StringW UnityEngine::Rendering::RenderGraphModule::RayTracingAccelerationStructureResource::GetName() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RayTracingAccelerationStructureResource*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderGraphModule::RayTracingAccelerationStructureResource::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RayTracingAccelerationStructureResource*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::RenderGraphModule::RayTracingAccelerationStructureResource* UnityEngine::Rendering::RenderGraphModule::RayTracingAccelerationStructureResource::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::RenderGraphModule::RayTracingAccelerationStructureResource*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderGraphModule::RayTracingAccelerationStructureResource::RayTracingAccelerationStructureResource() {}
