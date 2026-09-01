#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\AsyncGPUReadback.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__AsyncGPUReadback_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/Rendering/zzzz__AsyncGPUReadbackRequest_def.hpp"
#include "UnityEngine/Rendering/zzzz__AsyncRequestNativeArrayData_def.hpp"
#include "UnityEngine/zzzz__GraphicsBuffer_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::AsyncGPUReadback.Request
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::AsyncGPUReadbackRequest (*)(
    ::UnityEngine::GraphicsBuffer*, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*)>(&::UnityEngine::Rendering::AsyncGPUReadback::Request)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6b08b80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::AsyncGPUReadback*>(),
                            { "Request", {}, { ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::AsyncGPUReadback.Request
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::AsyncGPUReadbackRequest (*)(
    ::UnityEngine::GraphicsBuffer*, int32_t, int32_t, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*)>(&::UnityEngine::Rendering::AsyncGPUReadback::Request)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6b08c80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::AsyncGPUReadback*>(),
                                                                                           { "Request",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                               ::i2c::type_of<::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::AsyncGPUReadback.Request_Internal_GraphicsBuffer_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::AsyncGPUReadbackRequest (*)(::UnityEngine::GraphicsBuffer*, ::UnityEngine::Rendering::AsyncRequestNativeArrayData*)>(
    &::UnityEngine::Rendering::AsyncGPUReadback::Request_Internal_GraphicsBuffer_1)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6b08bdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::UnityEngine::Rendering::AsyncGPUReadback*>(),
                         { "Request_Internal_GraphicsBuffer_1", {}, { ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::AsyncRequestNativeArrayData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::AsyncGPUReadback.Request_Internal_GraphicsBuffer_2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::AsyncGPUReadbackRequest (*)(
    ::UnityEngine::GraphicsBuffer*, int32_t, int32_t, ::UnityEngine::Rendering::AsyncRequestNativeArrayData*)>(&::UnityEngine::Rendering::AsyncGPUReadback::Request_Internal_GraphicsBuffer_2)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x6b08cdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::AsyncGPUReadback*>(),
                                                                                           { "Request_Internal_GraphicsBuffer_2",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::AsyncRequestNativeArrayData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::AsyncGPUReadback.Request_Internal_GraphicsBuffer_1_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::Rendering::AsyncRequestNativeArrayData*, ::by_ref<::UnityEngine::Rendering::AsyncGPUReadbackRequest>)>(
    &::UnityEngine::Rendering::AsyncGPUReadback::Request_Internal_GraphicsBuffer_1_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6b08d98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::AsyncGPUReadback*>(),
                                                             { "Request_Internal_GraphicsBuffer_1_Injected",
                                                               {},
                                                               { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Rendering::AsyncRequestNativeArrayData*>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::Rendering::AsyncGPUReadbackRequest>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::AsyncGPUReadback.Request_Internal_GraphicsBuffer_2_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (*)(::System::IntPtr, int32_t, int32_t, ::UnityEngine::Rendering::AsyncRequestNativeArrayData*, ::by_ref<::UnityEngine::Rendering::AsyncGPUReadbackRequest>)>(
        &::UnityEngine::Rendering::AsyncGPUReadback::Request_Internal_GraphicsBuffer_2_Injected)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6b08dec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::AsyncGPUReadback*>(), { "Request_Internal_GraphicsBuffer_2_Injected",
                                                                                                           {},
                                                                                                           { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                                             ::i2c::type_of<::UnityEngine::Rendering::AsyncRequestNativeArrayData*>(),
                                                                                                             ::i2c::type_of<::by_ref<::UnityEngine::Rendering::AsyncGPUReadbackRequest>>() } })));
    return ___internal_method;
  }
};
inline ::UnityEngine::Rendering::AsyncGPUReadbackRequest UnityEngine::Rendering::AsyncGPUReadback::Request(::UnityEngine::GraphicsBuffer* src,
                                                                                                           ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* callback) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::AsyncGPUReadback*>(),
                          { "Request", {}, { ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::AsyncGPUReadbackRequest>(nullptr, ___internal_method, src, callback);
}
inline ::UnityEngine::Rendering::AsyncGPUReadbackRequest UnityEngine::Rendering::AsyncGPUReadback::Request(::UnityEngine::GraphicsBuffer* src, int32_t size, int32_t offset,
                                                                                                           ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* callback) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::AsyncGPUReadback*>(),
                                                                                         { "Request",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                             ::i2c::type_of<::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::AsyncGPUReadbackRequest>(nullptr, ___internal_method, src, size, offset, callback);
}
inline ::UnityEngine::Rendering::AsyncGPUReadbackRequest UnityEngine::Rendering::AsyncGPUReadback::Request_Internal_GraphicsBuffer_1(::UnityEngine::GraphicsBuffer* buffer,
                                                                                                                                     ::UnityEngine::Rendering::AsyncRequestNativeArrayData* data) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::Rendering::AsyncGPUReadback*>(),
                       { "Request_Internal_GraphicsBuffer_1", {}, { ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::AsyncRequestNativeArrayData*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::AsyncGPUReadbackRequest>(nullptr, ___internal_method, buffer, data);
}
inline ::UnityEngine::Rendering::AsyncGPUReadbackRequest UnityEngine::Rendering::AsyncGPUReadback::Request_Internal_GraphicsBuffer_2(::UnityEngine::GraphicsBuffer* src, int32_t size, int32_t offset,
                                                                                                                                     ::UnityEngine::Rendering::AsyncRequestNativeArrayData* data) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::AsyncGPUReadback*>(),
                                                                                         { "Request_Internal_GraphicsBuffer_2",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                             ::i2c::type_of<::UnityEngine::Rendering::AsyncRequestNativeArrayData*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::AsyncGPUReadbackRequest>(nullptr, ___internal_method, src, size, offset, data);
}
inline void UnityEngine::Rendering::AsyncGPUReadback::Request_Internal_GraphicsBuffer_1_Injected(::System::IntPtr buffer, ::UnityEngine::Rendering::AsyncRequestNativeArrayData* data,
                                                                                                 ::by_ref<::UnityEngine::Rendering::AsyncGPUReadbackRequest> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::AsyncGPUReadback*>(),
                                                           { "Request_Internal_GraphicsBuffer_1_Injected",
                                                             {},
                                                             { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Rendering::AsyncRequestNativeArrayData*>(),
                                                               ::i2c::type_of<::by_ref<::UnityEngine::Rendering::AsyncGPUReadbackRequest>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, buffer, data, ret);
}
inline void UnityEngine::Rendering::AsyncGPUReadback::Request_Internal_GraphicsBuffer_2_Injected(::System::IntPtr src, int32_t size, int32_t offset,
                                                                                                 ::UnityEngine::Rendering::AsyncRequestNativeArrayData* data,
                                                                                                 ::by_ref<::UnityEngine::Rendering::AsyncGPUReadbackRequest> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::AsyncGPUReadback*>(), { "Request_Internal_GraphicsBuffer_2_Injected",
                                                                                                         {},
                                                                                                         { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                                           ::i2c::type_of<::UnityEngine::Rendering::AsyncRequestNativeArrayData*>(),
                                                                                                           ::i2c::type_of<::by_ref<::UnityEngine::Rendering::AsyncGPUReadbackRequest>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, src, size, offset, data, ret);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::AsyncGPUReadback::AsyncGPUReadback() {}
