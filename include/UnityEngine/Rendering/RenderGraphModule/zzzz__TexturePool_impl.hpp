#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/TexturePool.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraphResourcePool_1_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TexturePool_def.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandle_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::TexturePool.ReleaseInternalResource
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::TexturePool::*)(::UnityEngine::Rendering::RTHandle*)>(
    &::UnityEngine::Rendering::RenderGraphModule::TexturePool::ReleaseInternalResource)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x67e5e38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::TexturePool*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::TexturePool*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::TexturePool.GetResourceName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Rendering::RenderGraphModule::TexturePool::*)(::by_ref<::UnityEngine::Rendering::RTHandle*>)>(
    &::UnityEngine::Rendering::RenderGraphModule::TexturePool::GetResourceName)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x67e5e50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::TexturePool*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::TexturePool*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::TexturePool.GetResourceSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::UnityEngine::Rendering::RenderGraphModule::TexturePool::*)(::by_ref<::UnityEngine::Rendering::RTHandle*>)>(
    &::UnityEngine::Rendering::RenderGraphModule::TexturePool::GetResourceSize)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x67e5e70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::TexturePool*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::TexturePool*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::TexturePool.GetResourceTypeName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Rendering::RenderGraphModule::TexturePool::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::TexturePool::GetResourceTypeName)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x67e5e8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::TexturePool*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::TexturePool*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::TexturePool.GetSortIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::RenderGraphModule::TexturePool::*)(::UnityEngine::Rendering::RTHandle*)>(
    &::UnityEngine::Rendering::RenderGraphModule::TexturePool::GetSortIndex)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x67e5ed0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::TexturePool*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::TexturePool*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::TexturePool._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::TexturePool::*)()>(&::UnityEngine::Rendering::RenderGraphModule::TexturePool::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x67e0560;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::TexturePool*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::RenderGraphModule::TexturePool::ReleaseInternalResource(::UnityEngine::Rendering::RTHandle* res) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::TexturePool*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, res);
}
inline ::StringW UnityEngine::Rendering::RenderGraphModule::TexturePool::GetResourceName(::by_ref<::UnityEngine::Rendering::RTHandle*> res) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::TexturePool*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, res);
}
inline int64_t UnityEngine::Rendering::RenderGraphModule::TexturePool::GetResourceSize(::by_ref<::UnityEngine::Rendering::RTHandle*> res) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::TexturePool*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method, res);
}
inline ::StringW UnityEngine::Rendering::RenderGraphModule::TexturePool::GetResourceTypeName() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::TexturePool*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::RenderGraphModule::TexturePool::GetSortIndex(::UnityEngine::Rendering::RTHandle* res) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::TexturePool*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, res);
}
inline void UnityEngine::Rendering::RenderGraphModule::TexturePool::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::TexturePool*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::RenderGraphModule::TexturePool* UnityEngine::Rendering::RenderGraphModule::TexturePool::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::RenderGraphModule::TexturePool*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderGraphModule::TexturePool::TexturePool() {}
