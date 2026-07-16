#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/CommandBufferExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBufferExtensions_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__FastMemoryFlags_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTargetIdentifier_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::CommandBufferExtensions.Internal_SwitchIntoFastMemory
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::by_ref<::UnityEngine::Rendering::RenderTargetIdentifier>, ::UnityEngine::Rendering::FastMemoryFlags, float_t, bool)>(
        &::UnityEngine::Rendering::CommandBufferExtensions::Internal_SwitchIntoFastMemory)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x6b18eac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CommandBufferExtensions*>(),
                                                { "Internal_SwitchIntoFastMemory",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderTargetIdentifier>>(),
                                                    ::i2c::type_of<::UnityEngine::Rendering::FastMemoryFlags>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CommandBufferExtensions.Internal_SwitchOutOfFastMemory
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::by_ref<::UnityEngine::Rendering::RenderTargetIdentifier>, bool)>(
    &::UnityEngine::Rendering::CommandBufferExtensions::Internal_SwitchOutOfFastMemory)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6b18fe0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CommandBufferExtensions*>(),
                            { "Internal_SwitchOutOfFastMemory",
                              {},
                              { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderTargetIdentifier>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CommandBufferExtensions.SwitchIntoFastMemory
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::FastMemoryFlags,
                                                                float_t, bool)>(&::UnityEngine::Rendering::CommandBufferExtensions::SwitchIntoFastMemory)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6b190dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CommandBufferExtensions*>(),
                                                             { "SwitchIntoFastMemory",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(),
                                                                 ::i2c::type_of<::UnityEngine::Rendering::FastMemoryFlags>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CommandBufferExtensions.SwitchOutOfFastMemory
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, bool)>(
    &::UnityEngine::Rendering::CommandBufferExtensions::SwitchOutOfFastMemory)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6b190e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CommandBufferExtensions*>(),
                            { "SwitchOutOfFastMemory",
                              {},
                              { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CommandBufferExtensions.Internal_SwitchIntoFastMemory_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Rendering::RenderTargetIdentifier>, ::UnityEngine::Rendering::FastMemoryFlags, float_t,
                                                                bool)>(&::UnityEngine::Rendering::CommandBufferExtensions::Internal_SwitchIntoFastMemory_Injected)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6b18f74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CommandBufferExtensions*>(),
                                                             { "Internal_SwitchIntoFastMemory_Injected",
                                                               {},
                                                               { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderTargetIdentifier>>(),
                                                                 ::i2c::type_of<::UnityEngine::Rendering::FastMemoryFlags>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CommandBufferExtensions.Internal_SwitchOutOfFastMemory_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Rendering::RenderTargetIdentifier>, bool)>(
    &::UnityEngine::Rendering::CommandBufferExtensions::Internal_SwitchOutOfFastMemory_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6b19088;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CommandBufferExtensions*>(),
                                                { "Internal_SwitchOutOfFastMemory_Injected",
                                                  {},
                                                  { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderTargetIdentifier>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::CommandBufferExtensions::Internal_SwitchIntoFastMemory(::UnityEngine::Rendering::CommandBuffer* cmd, ::by_ref<::UnityEngine::Rendering::RenderTargetIdentifier> rt,
                                                                                           ::UnityEngine::Rendering::FastMemoryFlags fastMemoryFlags, float_t residency, bool copyContents) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CommandBufferExtensions*>(),
                                                           { "Internal_SwitchIntoFastMemory",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderTargetIdentifier>>(),
                                                               ::i2c::type_of<::UnityEngine::Rendering::FastMemoryFlags>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, rt, fastMemoryFlags, residency, copyContents);
}
inline void UnityEngine::Rendering::CommandBufferExtensions::Internal_SwitchOutOfFastMemory(::UnityEngine::Rendering::CommandBuffer* cmd, ::by_ref<::UnityEngine::Rendering::RenderTargetIdentifier> rt,
                                                                                            bool copyContents) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CommandBufferExtensions*>(),
                          { "Internal_SwitchOutOfFastMemory",
                            {},
                            { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderTargetIdentifier>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, rt, copyContents);
}
inline void UnityEngine::Rendering::CommandBufferExtensions::SwitchIntoFastMemory(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier rid,
                                                                                  ::UnityEngine::Rendering::FastMemoryFlags fastMemoryFlags, float_t residency, bool copyContents) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CommandBufferExtensions*>(),
                                                           { "SwitchIntoFastMemory",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(),
                                                               ::i2c::type_of<::UnityEngine::Rendering::FastMemoryFlags>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, rid, fastMemoryFlags, residency, copyContents);
}
inline void UnityEngine::Rendering::CommandBufferExtensions::SwitchOutOfFastMemory(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier rid,
                                                                                   bool copyContents) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CommandBufferExtensions*>(),
                          { "SwitchOutOfFastMemory",
                            {},
                            { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, rid, copyContents);
}
inline void UnityEngine::Rendering::CommandBufferExtensions::Internal_SwitchIntoFastMemory_Injected(::System::IntPtr cmd, ::by_ref<::UnityEngine::Rendering::RenderTargetIdentifier> rt,
                                                                                                    ::UnityEngine::Rendering::FastMemoryFlags fastMemoryFlags, float_t residency, bool copyContents) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CommandBufferExtensions*>(),
                                                           { "Internal_SwitchIntoFastMemory_Injected",
                                                             {},
                                                             { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderTargetIdentifier>>(),
                                                               ::i2c::type_of<::UnityEngine::Rendering::FastMemoryFlags>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, rt, fastMemoryFlags, residency, copyContents);
}
inline void UnityEngine::Rendering::CommandBufferExtensions::Internal_SwitchOutOfFastMemory_Injected(::System::IntPtr cmd, ::by_ref<::UnityEngine::Rendering::RenderTargetIdentifier> rt,
                                                                                                     bool copyContents) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CommandBufferExtensions*>(),
                                              { "Internal_SwitchOutOfFastMemory_Injected",
                                                {},
                                                { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderTargetIdentifier>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, rt, copyContents);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::CommandBufferExtensions::CommandBufferExtensions() {}
