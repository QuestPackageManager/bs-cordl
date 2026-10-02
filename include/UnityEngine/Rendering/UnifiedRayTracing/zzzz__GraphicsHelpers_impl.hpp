#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/UnifiedRayTracing/GraphicsHelpers.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/UnifiedRayTracing/zzzz__GraphicsHelpers_def.hpp"
#include "Unity/Mathematics/zzzz__uint3_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/zzzz__ComputeShader_def.hpp"
#include "UnityEngine/zzzz__GraphicsBuffer_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::GraphicsHelpers.CopyBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::ComputeShader*, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::GraphicsBuffer*, int32_t,
                                                                ::UnityEngine::GraphicsBuffer*, int32_t, int32_t)>(&::UnityEngine::Rendering::UnifiedRayTracing::GraphicsHelpers::CopyBuffer)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x6e08774;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::GraphicsHelpers*>(),
                            { "CopyBuffer",
                              {},
                              { ::i2c::type_of<::UnityEngine::ComputeShader*>(), ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(),
                                ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::GraphicsHelpers.CopyBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::ComputeShader*, ::UnityEngine::GraphicsBuffer*, int32_t, ::UnityEngine::GraphicsBuffer*, int32_t, int32_t)>(
    &::UnityEngine::Rendering::UnifiedRayTracing::GraphicsHelpers::CopyBuffer)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x6e08954;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::GraphicsHelpers*>(),
                                                             { "CopyBuffer",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::ComputeShader*>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::GraphicsHelpers.ReallocateBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::ComputeShader*, int32_t, int32_t, int32_t, ::by_ref<::UnityEngine::GraphicsBuffer*>)>(
    &::UnityEngine::Rendering::UnifiedRayTracing::GraphicsHelpers::ReallocateBuffer)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x6e04824;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::GraphicsHelpers*>(),
                                                                                           { "ReallocateBuffer",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::ComputeShader*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::GraphicsBuffer*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::GraphicsHelpers.get_MaxGraphicsBufferSizeInBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)()>(&::UnityEngine::Rendering::UnifiedRayTracing::GraphicsHelpers::get_MaxGraphicsBufferSizeInBytes)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6e04614;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::GraphicsHelpers*>(), { "get_MaxGraphicsBufferSizeInBytes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::GraphicsHelpers.get_MaxGraphicsBufferSizeInGigaBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)()>(&::UnityEngine::Rendering::UnifiedRayTracing::GraphicsHelpers::get_MaxGraphicsBufferSizeInGigaBytes)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6e047e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::GraphicsHelpers*>(), { "get_MaxGraphicsBufferSizeInGigaBytes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::GraphicsHelpers.DivUp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, int32_t)>(&::UnityEngine::Rendering::UnifiedRayTracing::GraphicsHelpers::DivUp)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6e08944;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::GraphicsHelpers*>(), { "DivUp", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::GraphicsHelpers.DivUp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, uint32_t)>(&::UnityEngine::Rendering::UnifiedRayTracing::GraphicsHelpers::DivUp)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6e08a48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::GraphicsHelpers*>(),
                                                                                           { "DivUp", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::GraphicsHelpers.DivUp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(uint32_t, uint32_t)>(&::UnityEngine::Rendering::UnifiedRayTracing::GraphicsHelpers::DivUp)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6e08a58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::GraphicsHelpers*>(),
                                                                                           { "DivUp", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::GraphicsHelpers.DivUp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint3 (*)(::Unity::Mathematics::uint3, ::Unity::Mathematics::uint3)>(
    &::UnityEngine::Rendering::UnifiedRayTracing::GraphicsHelpers::DivUp)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6e08a68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::GraphicsHelpers*>(),
                                                             { "DivUp", {}, { ::i2c::type_of<::Unity::Mathematics::uint3>(), ::i2c::type_of<::Unity::Mathematics::uint3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::GraphicsHelpers.Flush
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*)>(&::UnityEngine::Rendering::UnifiedRayTracing::GraphicsHelpers::Flush)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6e08aa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::GraphicsHelpers*>(),
                                                                                           { "Flush", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::UnifiedRayTracing::GraphicsHelpers::CopyBuffer(::UnityEngine::ComputeShader* copyShader, ::UnityEngine::Rendering::CommandBuffer* cmd,
                                                                                   ::UnityEngine::GraphicsBuffer* src, int32_t srcOffsetInDWords, ::UnityEngine::GraphicsBuffer* dst,
                                                                                   int32_t dstOffsetInDwords, int32_t sizeInDWords) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::GraphicsHelpers*>(),
                          { "CopyBuffer",
                            {},
                            { ::i2c::type_of<::UnityEngine::ComputeShader*>(), ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(),
                              ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, copyShader, cmd, src, srcOffsetInDWords, dst, dstOffsetInDwords, sizeInDWords);
}
inline void UnityEngine::Rendering::UnifiedRayTracing::GraphicsHelpers::CopyBuffer(::UnityEngine::ComputeShader* copyShader, ::UnityEngine::GraphicsBuffer* src, int32_t srcOffsetInDWords,
                                                                                   ::UnityEngine::GraphicsBuffer* dst, int32_t dstOffsetInDwords, int32_t sizeInDwords) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::GraphicsHelpers*>(),
                                                           { "CopyBuffer",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::ComputeShader*>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, copyShader, src, srcOffsetInDWords, dst, dstOffsetInDwords, sizeInDwords);
}
inline bool UnityEngine::Rendering::UnifiedRayTracing::GraphicsHelpers::ReallocateBuffer(::UnityEngine::ComputeShader* copyShader, int32_t oldCapacity, int32_t newCapacity, int32_t elementSizeInBytes,
                                                                                         ::by_ref<::UnityEngine::GraphicsBuffer*> buffer) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::GraphicsHelpers*>(),
                                                                                         { "ReallocateBuffer",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::ComputeShader*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                             ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::GraphicsBuffer*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, copyShader, oldCapacity, newCapacity, elementSizeInBytes, buffer);
}
inline int64_t UnityEngine::Rendering::UnifiedRayTracing::GraphicsHelpers::get_MaxGraphicsBufferSizeInBytes() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::GraphicsHelpers*>(), { "get_MaxGraphicsBufferSizeInBytes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method);
}
inline float_t UnityEngine::Rendering::UnifiedRayTracing::GraphicsHelpers::get_MaxGraphicsBufferSizeInGigaBytes() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::GraphicsHelpers*>(), { "get_MaxGraphicsBufferSizeInGigaBytes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method);
}
inline int32_t UnityEngine::Rendering::UnifiedRayTracing::GraphicsHelpers::DivUp(int32_t x, int32_t y) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::GraphicsHelpers*>(), { "DivUp", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, x, y);
}
inline int32_t UnityEngine::Rendering::UnifiedRayTracing::GraphicsHelpers::DivUp(int32_t x, uint32_t y) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::GraphicsHelpers*>(), { "DivUp", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, x, y);
}
inline uint32_t UnityEngine::Rendering::UnifiedRayTracing::GraphicsHelpers::DivUp(uint32_t x, uint32_t y) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::GraphicsHelpers*>(), { "DivUp", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, x, y);
}
inline ::Unity::Mathematics::uint3 UnityEngine::Rendering::UnifiedRayTracing::GraphicsHelpers::DivUp(::Unity::Mathematics::uint3 x, ::Unity::Mathematics::uint3 y) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::GraphicsHelpers*>(),
                                                           { "DivUp", {}, { ::i2c::type_of<::Unity::Mathematics::uint3>(), ::i2c::type_of<::Unity::Mathematics::uint3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint3>(nullptr, ___internal_method, x, y);
}
inline void UnityEngine::Rendering::UnifiedRayTracing::GraphicsHelpers::Flush(::UnityEngine::Rendering::CommandBuffer* cmd) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::GraphicsHelpers*>(),
                                                                                         { "Flush", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::UnifiedRayTracing::GraphicsHelpers::GraphicsHelpers() {}
