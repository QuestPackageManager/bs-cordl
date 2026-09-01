#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\RenderGraphModule\RayTracingAccelerationStructureHandle.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__ResourceHandle_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RayTracingAccelerationStructureHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__RayTracingAccelerationStructure_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RayTracingAccelerationStructureHandle.get_nullHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::RayTracingAccelerationStructureHandle (*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::RayTracingAccelerationStructureHandle::get_nullHandle)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x67e3f74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RayTracingAccelerationStructureHandle>(), { "get_nullHandle", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RayTracingAccelerationStructureHandle._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RayTracingAccelerationStructureHandle::*)(int32_t)>(
    &::UnityEngine::Rendering::RenderGraphModule::RayTracingAccelerationStructureHandle::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x67e3fd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RayTracingAccelerationStructureHandle>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RayTracingAccelerationStructureHandle.op_Implicit___UnityEngine__Rendering__RayTracingAccelerationStructure_
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::Rendering::RayTracingAccelerationStructure* (*)(::UnityEngine::Rendering::RenderGraphModule::RayTracingAccelerationStructureHandle)>(
        &::UnityEngine::Rendering::RenderGraphModule::RayTracingAccelerationStructureHandle::op_Implicit___UnityEngine__Rendering__RayTracingAccelerationStructure_)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x67e40cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RayTracingAccelerationStructureHandle>(),
                                                             { "op_Implicit", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RayTracingAccelerationStructureHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RayTracingAccelerationStructureHandle.IsValid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::RenderGraphModule::RayTracingAccelerationStructureHandle::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::RayTracingAccelerationStructureHandle::IsValid)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x67e41bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RayTracingAccelerationStructureHandle>(), { "IsValid", {}, {} })));
    return ___internal_method;
  }
};
inline void
UnityEngine::Rendering::RenderGraphModule::RayTracingAccelerationStructureHandle::setStaticF_s_NullHandle(::UnityEngine::Rendering::RenderGraphModule::RayTracingAccelerationStructureHandle value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderGraphModule::RayTracingAccelerationStructureHandle, "s_NullHandle",
                                    ::UnityEngine::Rendering::RenderGraphModule::RayTracingAccelerationStructureHandle>(
      std::forward<::UnityEngine::Rendering::RenderGraphModule::RayTracingAccelerationStructureHandle>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::RayTracingAccelerationStructureHandle UnityEngine::Rendering::RenderGraphModule::RayTracingAccelerationStructureHandle::getStaticF_s_NullHandle() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderGraphModule::RayTracingAccelerationStructureHandle, "s_NullHandle",
                                           ::UnityEngine::Rendering::RenderGraphModule::RayTracingAccelerationStructureHandle>();
}
inline ::UnityEngine::Rendering::RenderGraphModule::RayTracingAccelerationStructureHandle UnityEngine::Rendering::RenderGraphModule::RayTracingAccelerationStructureHandle::get_nullHandle() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RayTracingAccelerationStructureHandle>(), { "get_nullHandle", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::RayTracingAccelerationStructureHandle>(nullptr, ___internal_method);
}
inline void UnityEngine::Rendering::RenderGraphModule::RayTracingAccelerationStructureHandle::_ctor(int32_t handle) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RayTracingAccelerationStructureHandle>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, handle);
}
inline ::UnityEngine::Rendering::RayTracingAccelerationStructure*
UnityEngine::Rendering::RenderGraphModule::RayTracingAccelerationStructureHandle::op_Implicit___UnityEngine__Rendering__RayTracingAccelerationStructure_(
    ::UnityEngine::Rendering::RenderGraphModule::RayTracingAccelerationStructureHandle handle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RayTracingAccelerationStructureHandle>(),
                                                           { "op_Implicit", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RayTracingAccelerationStructureHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RayTracingAccelerationStructure*>(nullptr, ___internal_method, handle);
}
inline bool UnityEngine::Rendering::RenderGraphModule::RayTracingAccelerationStructureHandle::IsValid() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RayTracingAccelerationStructureHandle>(), { "IsValid", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "handle", ty: "::UnityEngine::Rendering::RenderGraphModule::ResourceHandle", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::RenderGraphModule::RayTracingAccelerationStructureHandle::RayTracingAccelerationStructureHandle(
    ::UnityEngine::Rendering::RenderGraphModule::ResourceHandle handle) noexcept {
  this->handle = handle;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderGraphModule::RayTracingAccelerationStructureHandle::RayTracingAccelerationStructureHandle() {}
