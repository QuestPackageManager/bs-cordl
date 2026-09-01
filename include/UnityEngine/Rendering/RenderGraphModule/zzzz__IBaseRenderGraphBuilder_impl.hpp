#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\RenderGraphModule\IBaseRenderGraphBuilder.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__IBaseRenderGraphBuilder_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__AccessFlags_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__BufferDesc_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__BufferHandle_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RendererListHandle_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureDesc_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder.UseTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder::*)(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>, ::UnityEngine::Rendering::RenderGraphModule::AccessFlags)>(
    &::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder::UseTexture)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder.UseGlobalTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder::*)(
    int32_t, ::UnityEngine::Rendering::RenderGraphModule::AccessFlags)>(&::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder::UseGlobalTexture)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder.UseAllGlobalTextures
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder::*)(bool)>(
    &::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder::UseAllGlobalTextures)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder.SetGlobalTextureAfterPass
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder::*)(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>, int32_t)>(&::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder::SetGlobalTextureAfterPass)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder.UseBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::BufferHandle (::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder::*)(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::BufferHandle>, ::UnityEngine::Rendering::RenderGraphModule::AccessFlags)>(
    &::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder::UseBuffer)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder.CreateTransientTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::TextureHandle (::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder::*)(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>)>(&::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder::CreateTransientTexture)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder.CreateTransientTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::TextureHandle (::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder::*)(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>)>(&::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder::CreateTransientTexture)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder.CreateTransientBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::BufferHandle (::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder::*)(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::BufferDesc>)>(&::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder::CreateTransientBuffer)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder.CreateTransientBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::BufferHandle (::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder::*)(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::BufferHandle>)>(&::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder::CreateTransientBuffer)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder.UseRendererList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder::*)(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>)>(&::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder::UseRendererList)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder.EnableAsyncCompute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder::*)(bool)>(
    &::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder::EnableAsyncCompute)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder.AllowPassCulling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder::*)(bool)>(
    &::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder::AllowPassCulling)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder.AllowGlobalStateModification
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder::*)(bool)>(
    &::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder::AllowGlobalStateModification)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder.EnableFoveatedRasterization
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder::*)(bool)>(
    &::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder::EnableFoveatedRasterization)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder*>(), 13 }));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder::UseTexture(::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> input,
                                                                                           ::UnityEngine::Rendering::RenderGraphModule::AccessFlags flags) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, input, flags);
}
inline void UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder::UseGlobalTexture(int32_t propertyId, ::UnityEngine::Rendering::RenderGraphModule::AccessFlags flags) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, propertyId, flags);
}
inline void UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder::UseAllGlobalTextures(bool enable) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, enable);
}
inline void UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder::SetGlobalTextureAfterPass(::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> input,
                                                                                                          int32_t propertyId) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, input, propertyId);
}
inline ::UnityEngine::Rendering::RenderGraphModule::BufferHandle
UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder::UseBuffer(::by_ref<::UnityEngine::Rendering::RenderGraphModule::BufferHandle> input,
                                                                              ::UnityEngine::Rendering::RenderGraphModule::AccessFlags flags) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::BufferHandle>(this, ___internal_method, input, flags);
}
inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle
UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder::CreateTransientTexture(::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc> desc) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(this, ___internal_method, desc);
}
inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle
UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder::CreateTransientTexture(::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> texture) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(this, ___internal_method, texture);
}
inline ::UnityEngine::Rendering::RenderGraphModule::BufferHandle
UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder::CreateTransientBuffer(::by_ref<::UnityEngine::Rendering::RenderGraphModule::BufferDesc> desc) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::BufferHandle>(this, ___internal_method, desc);
}
inline ::UnityEngine::Rendering::RenderGraphModule::BufferHandle
UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder::CreateTransientBuffer(::by_ref<::UnityEngine::Rendering::RenderGraphModule::BufferHandle> computebuffer) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::BufferHandle>(this, ___internal_method, computebuffer);
}
inline void UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder::UseRendererList(::by_ref<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle> input) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, input);
}
inline void UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder::EnableAsyncCompute(bool value) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder::AllowPassCulling(bool value) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder::AllowGlobalStateModification(bool value) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder::EnableFoveatedRasterization(bool value) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
