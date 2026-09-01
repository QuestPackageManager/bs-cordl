#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\RenderGraphModule\BufferDesc.hpp"
#include "UnityEngine/zzzz__GraphicsBuffer_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__BufferDesc_def.hpp"
#include "UnityEngine/zzzz__GraphicsBuffer_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::BufferDesc._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::BufferDesc::*)(int32_t, int32_t)>(
    &::UnityEngine::Rendering::RenderGraphModule::BufferDesc::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x67e46bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::BufferDesc>(), { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::BufferDesc._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::BufferDesc::*)(int32_t, int32_t, ::UnityEngine::GraphicsBuffer_Target)>(
    &::UnityEngine::Rendering::RenderGraphModule::BufferDesc::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x67e46d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::BufferDesc>(),
                                                             { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer_Target>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::BufferDesc.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::RenderGraphModule::BufferDesc::*)()>(&::UnityEngine::Rendering::RenderGraphModule::BufferDesc::GetHashCode)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x67e46e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::BufferDesc>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::BufferDesc>(), 2 }));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::RenderGraphModule::BufferDesc::_ctor(int32_t count, int32_t stride) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::BufferDesc>(), { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, count, stride);
}
inline void UnityEngine::Rendering::RenderGraphModule::BufferDesc::_ctor(int32_t count, int32_t stride, ::UnityEngine::GraphicsBuffer_Target target) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::BufferDesc>(),
                                                           { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer_Target>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, count, stride, target);
}
inline int32_t UnityEngine::Rendering::RenderGraphModule::BufferDesc::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::BufferDesc>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "stride", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "name", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "target", ty: "::UnityEngine::GraphicsBuffer_Target", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "usageFlags", ty: "::UnityEngine::GraphicsBuffer_UsageFlags", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::RenderGraphModule::BufferDesc::BufferDesc(int32_t count, int32_t stride, ::StringW name, ::UnityEngine::GraphicsBuffer_Target target,
                                                                              ::UnityEngine::GraphicsBuffer_UsageFlags usageFlags) noexcept {
  this->count = count;
  this->stride = stride;
  this->name = name;
  this->target = target;
  this->usageFlags = usageFlags;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderGraphModule::BufferDesc::BufferDesc() {}
