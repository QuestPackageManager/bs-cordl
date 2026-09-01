#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\RenderGraphModule\BufferPool.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraphResourcePool_1_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__BufferPool_def.hpp"
#include "UnityEngine/zzzz__GraphicsBuffer_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::BufferPool.ReleaseInternalResource
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::BufferPool::*)(::UnityEngine::GraphicsBuffer*)>(
    &::UnityEngine::Rendering::RenderGraphModule::BufferPool::ReleaseInternalResource)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x67e4ad4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::BufferPool*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::BufferPool*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::BufferPool.GetResourceName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Rendering::RenderGraphModule::BufferPool::*)(::by_ref<::UnityEngine::GraphicsBuffer*>)>(
    &::UnityEngine::Rendering::RenderGraphModule::BufferPool::GetResourceName)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x67e4ae8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::BufferPool*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::BufferPool*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::BufferPool.GetResourceSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::UnityEngine::Rendering::RenderGraphModule::BufferPool::*)(::by_ref<::UnityEngine::GraphicsBuffer*>)>(
    &::UnityEngine::Rendering::RenderGraphModule::BufferPool::GetResourceSize)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x67e4b2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::BufferPool*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::BufferPool*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::BufferPool.GetResourceTypeName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Rendering::RenderGraphModule::BufferPool::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::BufferPool::GetResourceTypeName)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x67e4b70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::BufferPool*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::BufferPool*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::BufferPool.GetSortIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::RenderGraphModule::BufferPool::*)(::UnityEngine::GraphicsBuffer*)>(
    &::UnityEngine::Rendering::RenderGraphModule::BufferPool::GetSortIndex)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x67e4bb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::BufferPool*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::BufferPool*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::BufferPool._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::BufferPool::*)()>(&::UnityEngine::Rendering::RenderGraphModule::BufferPool::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x67e4bd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::BufferPool*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::RenderGraphModule::BufferPool::ReleaseInternalResource(::UnityEngine::GraphicsBuffer* res) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::BufferPool*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, res);
}
inline ::StringW UnityEngine::Rendering::RenderGraphModule::BufferPool::GetResourceName(::by_ref<::UnityEngine::GraphicsBuffer*> res) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::BufferPool*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, res);
}
inline int64_t UnityEngine::Rendering::RenderGraphModule::BufferPool::GetResourceSize(::by_ref<::UnityEngine::GraphicsBuffer*> res) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::BufferPool*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method, res);
}
inline ::StringW UnityEngine::Rendering::RenderGraphModule::BufferPool::GetResourceTypeName() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::BufferPool*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::RenderGraphModule::BufferPool::GetSortIndex(::UnityEngine::GraphicsBuffer* res) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::BufferPool*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, res);
}
inline void UnityEngine::Rendering::RenderGraphModule::BufferPool::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::BufferPool*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::RenderGraphModule::BufferPool* UnityEngine::Rendering::RenderGraphModule::BufferPool::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::RenderGraphModule::BufferPool*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderGraphModule::BufferPool::BufferPool() {}
