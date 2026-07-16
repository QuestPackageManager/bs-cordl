#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/BaseCommandBuffer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__BaseCommandBuffer_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraphPass_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::BaseCommandBuffer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::BaseCommandBuffer::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*, bool)>(&::UnityEngine::Rendering::BaseCommandBuffer::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6748cac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Rendering::BaseCommandBuffer*>(),
            { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BaseCommandBuffer.get_name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Rendering::BaseCommandBuffer::*)()>(&::UnityEngine::Rendering::BaseCommandBuffer::get_name)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6748cd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BaseCommandBuffer*>(), { "get_name", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BaseCommandBuffer.get_sizeInBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::BaseCommandBuffer::*)()>(&::UnityEngine::Rendering::BaseCommandBuffer::get_sizeInBytes)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6748cec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BaseCommandBuffer*>(), { "get_sizeInBytes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BaseCommandBuffer.ThrowIfGlobalStateNotAllowed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::BaseCommandBuffer::*)()>(&::UnityEngine::Rendering::BaseCommandBuffer::ThrowIfGlobalStateNotAllowed)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6748d04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BaseCommandBuffer*>(), { "ThrowIfGlobalStateNotAllowed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BaseCommandBuffer.ThrowIfRasterNotAllowed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::BaseCommandBuffer::*)()>(&::UnityEngine::Rendering::BaseCommandBuffer::ThrowIfRasterNotAllowed)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6748d7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BaseCommandBuffer*>(), { "ThrowIfRasterNotAllowed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BaseCommandBuffer.ValidateTextureHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::BaseCommandBuffer::*)(::UnityEngine::Rendering::RenderGraphModule::TextureHandle)>(
    &::UnityEngine::Rendering::BaseCommandBuffer::ValidateTextureHandle)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x6748e10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BaseCommandBuffer*>(),
                                                             { "ValidateTextureHandle", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BaseCommandBuffer.ValidateTextureHandleRead
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::BaseCommandBuffer::*)(::UnityEngine::Rendering::RenderGraphModule::TextureHandle)>(
    &::UnityEngine::Rendering::BaseCommandBuffer::ValidateTextureHandleRead)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x6748ff0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BaseCommandBuffer*>(),
                                                             { "ValidateTextureHandleRead", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BaseCommandBuffer.ValidateTextureHandleWrite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::BaseCommandBuffer::*)(::UnityEngine::Rendering::RenderGraphModule::TextureHandle)>(
    &::UnityEngine::Rendering::BaseCommandBuffer::ValidateTextureHandleWrite)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x674917c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BaseCommandBuffer*>(),
                                                             { "ValidateTextureHandleWrite", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::CommandBuffer*& UnityEngine::Rendering::BaseCommandBuffer::__cordl_internal_get_m_WrappedCommandBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_WrappedCommandBuffer;
}
constexpr ::UnityEngine::Rendering::CommandBuffer* const& UnityEngine::Rendering::BaseCommandBuffer::__cordl_internal_get_m_WrappedCommandBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_WrappedCommandBuffer;
}
constexpr void UnityEngine::Rendering::BaseCommandBuffer::__cordl_internal_set_m_WrappedCommandBuffer(::UnityEngine::Rendering::CommandBuffer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_WrappedCommandBuffer = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*& UnityEngine::Rendering::BaseCommandBuffer::__cordl_internal_get_m_ExecutingPass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ExecutingPass;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass* const& UnityEngine::Rendering::BaseCommandBuffer::__cordl_internal_get_m_ExecutingPass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ExecutingPass;
}
constexpr void UnityEngine::Rendering::BaseCommandBuffer::__cordl_internal_set_m_ExecutingPass(::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ExecutingPass = value;
}
inline void UnityEngine::Rendering::BaseCommandBuffer::_ctor(::UnityEngine::Rendering::CommandBuffer* wrapped, ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass* executingPass,
                                                             bool isAsync) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Rendering::BaseCommandBuffer*>(),
          { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, wrapped, executingPass, isAsync);
}
inline ::StringW UnityEngine::Rendering::BaseCommandBuffer::get_name() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BaseCommandBuffer*>(), { "get_name", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::BaseCommandBuffer::get_sizeInBytes() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BaseCommandBuffer*>(), { "get_sizeInBytes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::BaseCommandBuffer::ThrowIfGlobalStateNotAllowed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BaseCommandBuffer*>(), { "ThrowIfGlobalStateNotAllowed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::BaseCommandBuffer::ThrowIfRasterNotAllowed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BaseCommandBuffer*>(), { "ThrowIfRasterNotAllowed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::BaseCommandBuffer::ValidateTextureHandle(::UnityEngine::Rendering::RenderGraphModule::TextureHandle h) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BaseCommandBuffer*>(),
                                                           { "ValidateTextureHandle", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, h);
}
inline void UnityEngine::Rendering::BaseCommandBuffer::ValidateTextureHandleRead(::UnityEngine::Rendering::RenderGraphModule::TextureHandle h) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BaseCommandBuffer*>(),
                                                           { "ValidateTextureHandleRead", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, h);
}
inline void UnityEngine::Rendering::BaseCommandBuffer::ValidateTextureHandleWrite(::UnityEngine::Rendering::RenderGraphModule::TextureHandle h) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BaseCommandBuffer*>(),
                                                           { "ValidateTextureHandleWrite", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, h);
}
inline ::UnityEngine::Rendering::BaseCommandBuffer* UnityEngine::Rendering::BaseCommandBuffer::New_ctor(::UnityEngine::Rendering::CommandBuffer* wrapped,
                                                                                                        ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass* executingPass, bool isAsync) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::BaseCommandBuffer*>(wrapped, executingPass, isAsync));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::BaseCommandBuffer::BaseCommandBuffer() {}
