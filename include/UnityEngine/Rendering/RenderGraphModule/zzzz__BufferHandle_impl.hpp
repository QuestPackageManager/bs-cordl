#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/BufferHandle.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__ResourceHandle_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__BufferHandle_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__ResourceHandle_def.hpp"
#include "UnityEngine/zzzz__GraphicsBuffer_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::BufferHandle.get_nullHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::BufferHandle (*)()>(&::UnityEngine::Rendering::RenderGraphModule::BufferHandle::get_nullHandle)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x67deb74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::BufferHandle>(), { "get_nullHandle", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::BufferHandle._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::BufferHandle::*)(::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>)>(
    &::UnityEngine::Rendering::RenderGraphModule::BufferHandle::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x67debd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::BufferHandle>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::BufferHandle._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::BufferHandle::*)(int32_t, bool)>(
    &::UnityEngine::Rendering::RenderGraphModule::BufferHandle::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x67debe8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::BufferHandle>(), { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::BufferHandle.op_Implicit___UnityEngine__GraphicsBuffer_
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::GraphicsBuffer* (*)(::UnityEngine::Rendering::RenderGraphModule::BufferHandle)>(
    &::UnityEngine::Rendering::RenderGraphModule::BufferHandle::op_Implicit___UnityEngine__GraphicsBuffer_)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x67dec28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::BufferHandle>(),
                                                                                           { "op_Implicit", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::BufferHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::BufferHandle.IsValid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::RenderGraphModule::BufferHandle::*)()>(&::UnityEngine::Rendering::RenderGraphModule::BufferHandle::IsValid)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x67ded18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::BufferHandle>(), { "IsValid", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::RenderGraphModule::BufferHandle::setStaticF_s_NullHandle(::UnityEngine::Rendering::RenderGraphModule::BufferHandle value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderGraphModule::BufferHandle, "s_NullHandle", ::UnityEngine::Rendering::RenderGraphModule::BufferHandle>(
      std::forward<::UnityEngine::Rendering::RenderGraphModule::BufferHandle>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BufferHandle UnityEngine::Rendering::RenderGraphModule::BufferHandle::getStaticF_s_NullHandle() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderGraphModule::BufferHandle, "s_NullHandle", ::UnityEngine::Rendering::RenderGraphModule::BufferHandle>();
}
inline ::UnityEngine::Rendering::RenderGraphModule::BufferHandle UnityEngine::Rendering::RenderGraphModule::BufferHandle::get_nullHandle() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::BufferHandle>(), { "get_nullHandle", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::BufferHandle>(nullptr, ___internal_method);
}
inline void UnityEngine::Rendering::RenderGraphModule::BufferHandle::_ctor(::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle> h) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::BufferHandle>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, h);
}
inline void UnityEngine::Rendering::RenderGraphModule::BufferHandle::_ctor(int32_t handle, bool shared) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::BufferHandle>(), { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, handle, shared);
}
inline ::UnityEngine::GraphicsBuffer*
UnityEngine::Rendering::RenderGraphModule::BufferHandle::op_Implicit___UnityEngine__GraphicsBuffer_(::UnityEngine::Rendering::RenderGraphModule::BufferHandle buffer) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::BufferHandle>(),
                                                                                         { "op_Implicit", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::BufferHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GraphicsBuffer*>(nullptr, ___internal_method, buffer);
}
inline bool UnityEngine::Rendering::RenderGraphModule::BufferHandle::IsValid() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::BufferHandle>(), { "IsValid", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "handle", ty: "::UnityEngine::Rendering::RenderGraphModule::ResourceHandle", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::RenderGraphModule::BufferHandle::BufferHandle(::UnityEngine::Rendering::RenderGraphModule::ResourceHandle handle) noexcept {
  this->handle = handle;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderGraphModule::BufferHandle::BufferHandle() {}
