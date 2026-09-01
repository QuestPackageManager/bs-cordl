#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\CommandBufferPool.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBufferPool_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBufferPool_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__ObjectPool_1_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::CommandBufferPool___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::CommandBufferPool___c::*)()>(&::UnityEngine::Rendering::CommandBufferPool___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x67560ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CommandBufferPool___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CommandBufferPool___c.__cctor_b__4_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::CommandBufferPool___c::*)(::UnityEngine::Rendering::CommandBuffer*)>(
    &::UnityEngine::Rendering::CommandBufferPool___c::__cctor_b__4_0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x67560f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CommandBufferPool___c*>(),
                                                                                           { "<.cctor>b__4_0", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::CommandBufferPool___c::setStaticF___9(::UnityEngine::Rendering::CommandBufferPool___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::CommandBufferPool___c*, "<>9", ::UnityEngine::Rendering::CommandBufferPool___c*>(
      std::forward<::UnityEngine::Rendering::CommandBufferPool___c*>(value));
}
inline ::UnityEngine::Rendering::CommandBufferPool___c* UnityEngine::Rendering::CommandBufferPool___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::CommandBufferPool___c*, "<>9", ::UnityEngine::Rendering::CommandBufferPool___c*>();
}
inline void UnityEngine::Rendering::CommandBufferPool___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CommandBufferPool___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::CommandBufferPool___c::__cctor_b__4_0(::UnityEngine::Rendering::CommandBuffer* x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CommandBufferPool___c*>(), { "<.cctor>b__4_0", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x);
}
inline ::UnityEngine::Rendering::CommandBufferPool___c* UnityEngine::Rendering::CommandBufferPool___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::CommandBufferPool___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::CommandBufferPool___c::CommandBufferPool___c() {}
//  Writing Method size for method: ::UnityEngine::Rendering::CommandBufferPool.Get
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::CommandBuffer* (*)()>(&::UnityEngine::Rendering::CommandBufferPool::Get)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6755da0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CommandBufferPool*>(), { "Get", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CommandBufferPool.Get
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::CommandBuffer* (*)(::StringW)>(&::UnityEngine::Rendering::CommandBufferPool::Get)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6755e54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CommandBufferPool*>(), { "Get", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CommandBufferPool.Release
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*)>(&::UnityEngine::Rendering::CommandBufferPool::Release)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6755ef4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CommandBufferPool*>(), { "Release", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::CommandBufferPool::setStaticF_s_BufferPool(::UnityEngine::Rendering::ObjectPool_1<::UnityEngine::Rendering::CommandBuffer*>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::ObjectPool_1<::UnityEngine::Rendering::CommandBuffer*>*, "s_BufferPool", ::UnityEngine::Rendering::CommandBufferPool*>(
      std::forward<::UnityEngine::Rendering::ObjectPool_1<::UnityEngine::Rendering::CommandBuffer*>*>(value));
}
inline ::UnityEngine::Rendering::ObjectPool_1<::UnityEngine::Rendering::CommandBuffer*>* UnityEngine::Rendering::CommandBufferPool::getStaticF_s_BufferPool() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ObjectPool_1<::UnityEngine::Rendering::CommandBuffer*>*, "s_BufferPool", ::UnityEngine::Rendering::CommandBufferPool*>();
}
inline ::UnityEngine::Rendering::CommandBuffer* UnityEngine::Rendering::CommandBufferPool::Get() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CommandBufferPool*>(), { "Get", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::CommandBuffer*>(nullptr, ___internal_method);
}
inline ::UnityEngine::Rendering::CommandBuffer* UnityEngine::Rendering::CommandBufferPool::Get(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CommandBufferPool*>(), { "Get", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::CommandBuffer*>(nullptr, ___internal_method, name);
}
inline void UnityEngine::Rendering::CommandBufferPool::Release(::UnityEngine::Rendering::CommandBuffer* buffer) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CommandBufferPool*>(), { "Release", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, buffer);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::CommandBufferPool::CommandBufferPool() {}
