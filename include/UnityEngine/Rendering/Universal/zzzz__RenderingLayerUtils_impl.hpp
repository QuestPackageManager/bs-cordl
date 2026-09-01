#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\Universal\RenderingLayerUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderingLayerUtils_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__GraphicsFormat_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderingLayerUtils_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderingMode_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRendererFeature_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalRenderer_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__RasterCommandBuffer_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::RenderingLayerUtils_Event::RenderingLayerUtils_Event(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::RenderingLayerUtils_Event::RenderingLayerUtils_Event() {}
constexpr ::UnityEngine::Rendering::Universal::RenderingLayerUtils_Event UnityEngine::Rendering::Universal::RenderingLayerUtils_Event::DepthNormalPrePass{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::Universal::RenderingLayerUtils_Event UnityEngine::Rendering::Universal::RenderingLayerUtils_Event::Opaque{ static_cast<int32_t>(0x1) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize::RenderingLayerUtils_MaskSize(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize::RenderingLayerUtils_MaskSize() {}
constexpr ::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize::Bits8{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize::Bits16{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize::Bits24{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize::Bits32{ static_cast<int32_t>(0x3) };
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RenderingLayerUtils.CombineRendererEvents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (*)(bool, int32_t, ::UnityEngine::Rendering::Universal::RenderingLayerUtils_Event, ::by_ref<::UnityEngine::Rendering::Universal::RenderingLayerUtils_Event>)>(
        &::UnityEngine::Rendering::Universal::RenderingLayerUtils::CombineRendererEvents)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x68b1bd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingLayerUtils*>(),
                                                             { "CombineRendererEvents",
                                                               {},
                                                               { ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderingLayerUtils_Event>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::RenderingLayerUtils_Event>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RenderingLayerUtils.RequireRenderingLayers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<bool (*)(::UnityEngine::Rendering::Universal::UniversalRenderer*, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererFeature>>*,
                         int32_t, ::by_ref<::UnityEngine::Rendering::Universal::RenderingLayerUtils_Event>, ::by_ref<::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize>)>(
        &::UnityEngine::Rendering::Universal::RenderingLayerUtils::RequireRenderingLayers)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x68b1c0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingLayerUtils*>(),
                                                             { "RequireRenderingLayers",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererFeature>>*>(),
                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::RenderingLayerUtils_Event>>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RenderingLayerUtils.RequireRenderingLayers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<bool (*)(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererFeature>>*, ::UnityEngine::Rendering::Universal::RenderingMode, bool,
                         int32_t, ::by_ref<::UnityEngine::Rendering::Universal::RenderingLayerUtils_Event>, ::by_ref<::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize>)>(
        &::UnityEngine::Rendering::Universal::RenderingLayerUtils::RequireRenderingLayers)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0x68b1c7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingLayerUtils*>(),
                                                             { "RequireRenderingLayers",
                                                               {},
                                                               { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererFeature>>*>(),
                                                                 ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderingMode>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::RenderingLayerUtils_Event>>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RenderingLayerUtils.SetupProperties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize)>(
    &::UnityEngine::Rendering::Universal::RenderingLayerUtils::SetupProperties)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x68b1f74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingLayerUtils*>(),
            { "SetupProperties", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RenderingLayerUtils.SetupProperties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::RasterCommandBuffer*, ::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize)>(
    &::UnityEngine::Rendering::Universal::RenderingLayerUtils::SetupProperties)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x68b1fe4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingLayerUtils*>(),
            { "SetupProperties", {}, { ::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RenderingLayerUtils.GetFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Experimental::Rendering::GraphicsFormat (*)(::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize)>(
    &::UnityEngine::Rendering::Universal::RenderingLayerUtils::GetFormat)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x68b20fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingLayerUtils*>(),
                                                             { "GetFormat", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RenderingLayerUtils.ToValidRenderingLayers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(uint32_t)>(&::UnityEngine::Rendering::Universal::RenderingLayerUtils::ToValidRenderingLayers)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x68b21a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingLayerUtils*>(), { "ToValidRenderingLayers", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RenderingLayerUtils.GetMaskSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize (*)(int32_t)>(
    &::UnityEngine::Rendering::Universal::RenderingLayerUtils::GetMaskSize)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x68b1f40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingLayerUtils*>(), { "GetMaskSize", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RenderingLayerUtils.GetBits
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize)>(
    &::UnityEngine::Rendering::Universal::RenderingLayerUtils::GetBits)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x68b20b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingLayerUtils*>(),
                                                             { "GetBits", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RenderingLayerUtils.Combine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::Universal::RenderingLayerUtils_Event (*)(::UnityEngine::Rendering::Universal::RenderingLayerUtils_Event,
                                                                                                                          ::UnityEngine::Rendering::Universal::RenderingLayerUtils_Event)>(
    &::UnityEngine::Rendering::Universal::RenderingLayerUtils::Combine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x68b1c00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingLayerUtils*>(),
                                                                                           { "Combine",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderingLayerUtils_Event>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderingLayerUtils_Event>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RenderingLayerUtils.Combine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize (*)(::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize,
                                                                                                                             ::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize)>(
    &::UnityEngine::Rendering::Universal::RenderingLayerUtils::Combine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x68b1f34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingLayerUtils*>(),
                                                                                           { "Combine",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::RenderingLayerUtils::CombineRendererEvents(bool isDeferred, int32_t msaaSampleCount,
                                                                                          ::UnityEngine::Rendering::Universal::RenderingLayerUtils_Event rendererEvent,
                                                                                          ::by_ref<::UnityEngine::Rendering::Universal::RenderingLayerUtils_Event> combinedEvent) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingLayerUtils*>(),
                                                           { "CombineRendererEvents",
                                                             {},
                                                             { ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderingLayerUtils_Event>(),
                                                               ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::RenderingLayerUtils_Event>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, isDeferred, msaaSampleCount, rendererEvent, combinedEvent);
}
inline bool UnityEngine::Rendering::Universal::RenderingLayerUtils::RequireRenderingLayers(
    ::UnityEngine::Rendering::Universal::UniversalRenderer* universalRenderer,
    ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererFeature>>* rendererFeatures, int32_t msaaSampleCount,
    ::by_ref<::UnityEngine::Rendering::Universal::RenderingLayerUtils_Event> combinedEvent, ::by_ref<::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize> combinedMaskSize) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingLayerUtils*>(),
                                                           { "RequireRenderingLayers",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                                                               ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererFeature>>*>(),
                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::RenderingLayerUtils_Event>>(),
                                                               ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, universalRenderer, rendererFeatures, msaaSampleCount, combinedEvent, combinedMaskSize);
}
inline bool UnityEngine::Rendering::Universal::RenderingLayerUtils::RequireRenderingLayers(
    ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererFeature>>* rendererFeatures,
    ::UnityEngine::Rendering::Universal::RenderingMode renderingMode, bool accurateGbufferNormals, int32_t msaaSampleCount,
    ::by_ref<::UnityEngine::Rendering::Universal::RenderingLayerUtils_Event> combinedEvent, ::by_ref<::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize> combinedMaskSize) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingLayerUtils*>(),
                                                           { "RequireRenderingLayers",
                                                             {},
                                                             { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererFeature>>*>(),
                                                               ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderingMode>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::RenderingLayerUtils_Event>>(),
                                                               ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, rendererFeatures, renderingMode, accurateGbufferNormals, msaaSampleCount, combinedEvent, combinedMaskSize);
}
inline void UnityEngine::Rendering::Universal::RenderingLayerUtils::SetupProperties(::UnityEngine::Rendering::CommandBuffer* cmd,
                                                                                    ::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize maskSize) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingLayerUtils*>(),
          { "SetupProperties", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, maskSize);
}
inline void UnityEngine::Rendering::Universal::RenderingLayerUtils::SetupProperties(::UnityEngine::Rendering::RasterCommandBuffer* cmd,
                                                                                    ::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize maskSize) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingLayerUtils*>(),
          { "SetupProperties", {}, { ::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, maskSize);
}
inline ::UnityEngine::Experimental::Rendering::GraphicsFormat
UnityEngine::Rendering::Universal::RenderingLayerUtils::GetFormat(::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize maskSize) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingLayerUtils*>(),
                                                           { "GetFormat", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::GraphicsFormat>(nullptr, ___internal_method, maskSize);
}
inline uint32_t UnityEngine::Rendering::Universal::RenderingLayerUtils::ToValidRenderingLayers(uint32_t renderingLayers) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingLayerUtils*>(), { "ToValidRenderingLayers", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, renderingLayers);
}
inline ::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize UnityEngine::Rendering::Universal::RenderingLayerUtils::GetMaskSize(int32_t bits) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingLayerUtils*>(), { "GetMaskSize", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize>(nullptr, ___internal_method, bits);
}
inline int32_t UnityEngine::Rendering::Universal::RenderingLayerUtils::GetBits(::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize maskSize) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingLayerUtils*>(),
                                                                                         { "GetBits", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, maskSize);
}
inline ::UnityEngine::Rendering::Universal::RenderingLayerUtils_Event
UnityEngine::Rendering::Universal::RenderingLayerUtils::Combine(::UnityEngine::Rendering::Universal::RenderingLayerUtils_Event a, ::UnityEngine::Rendering::Universal::RenderingLayerUtils_Event b) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingLayerUtils*>(),
          { "Combine", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderingLayerUtils_Event>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderingLayerUtils_Event>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::RenderingLayerUtils_Event>(nullptr, ___internal_method, a, b);
}
inline ::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize
UnityEngine::Rendering::Universal::RenderingLayerUtils::Combine(::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize a,
                                                                ::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize b) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingLayerUtils*>(),
                                                                                         { "Combine",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize>(),
                                                                                             ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize>(nullptr, ___internal_method, a, b);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::RenderingLayerUtils::RenderingLayerUtils() {}
