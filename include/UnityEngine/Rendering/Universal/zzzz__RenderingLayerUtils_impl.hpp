#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/RenderingLayerUtils.hpp"
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(bool, int32_t, ::UnityEngine::Rendering::Universal::RenderingLayerUtils_Event, ::ByRef<::UnityEngine::Rendering::Universal::RenderingLayerUtils_Event>)>(
        &::UnityEngine::Rendering::Universal::RenderingLayerUtils::CombineRendererEvents)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6691c74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RenderingLayerUtils*>::get(), "CombineRendererEvents", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::RenderingLayerUtils_Event>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::Universal::RenderingLayerUtils_Event>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RenderingLayerUtils.RequireRenderingLayers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::UnityEngine::Rendering::Universal::UniversalRenderer*, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererFeature>>*,
                         int32_t, ::ByRef<::UnityEngine::Rendering::Universal::RenderingLayerUtils_Event>, ::ByRef<::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize>)>(
        &::UnityEngine::Rendering::Universal::RenderingLayerUtils::RequireRenderingLayers)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6691ca8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RenderingLayerUtils*>::get(), "RequireRenderingLayers", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalRenderer*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererFeature>>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::Universal::RenderingLayerUtils_Event>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RenderingLayerUtils.RequireRenderingLayers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererFeature>>*, ::UnityEngine::Rendering::Universal::RenderingMode, bool,
                         int32_t, ::ByRef<::UnityEngine::Rendering::Universal::RenderingLayerUtils_Event>, ::ByRef<::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize>)>(
        &::UnityEngine::Rendering::Universal::RenderingLayerUtils::RequireRenderingLayers)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0x6691d18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RenderingLayerUtils*>::get(), "RequireRenderingLayers", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererFeature>>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::RenderingMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::Universal::RenderingLayerUtils_Event>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RenderingLayerUtils.SetupProperties
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize)>(&::UnityEngine::Rendering::Universal::RenderingLayerUtils::SetupProperties)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6692010;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RenderingLayerUtils*>::get(), "SetupProperties", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RenderingLayerUtils.SetupProperties
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ::UnityEngine::Rendering::RasterCommandBuffer*, ::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize)>(&::UnityEngine::Rendering::Universal::RenderingLayerUtils::SetupProperties)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6692080;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RenderingLayerUtils*>::get(), "SetupProperties", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RasterCommandBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RenderingLayerUtils.GetFormat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Experimental::Rendering::GraphicsFormat (*)(
    ::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize)>(&::UnityEngine::Rendering::Universal::RenderingLayerUtils::GetFormat)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6692198;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RenderingLayerUtils*>::get(), "GetFormat", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RenderingLayerUtils.ToValidRenderingLayers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)(uint32_t)>(&::UnityEngine::Rendering::Universal::RenderingLayerUtils::ToValidRenderingLayers)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x669223c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RenderingLayerUtils*>::get(), "ToValidRenderingLayers",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RenderingLayerUtils.GetMaskSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize (*)(int32_t)>(
    &::UnityEngine::Rendering::Universal::RenderingLayerUtils::GetMaskSize)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x6691fdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RenderingLayerUtils*>::get(), "GetMaskSize",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RenderingLayerUtils.GetBits
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize)>(
    &::UnityEngine::Rendering::Universal::RenderingLayerUtils::GetBits)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x669214c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RenderingLayerUtils*>::get(), "GetBits", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RenderingLayerUtils.Combine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::RenderingLayerUtils_Event (*)(
    ::UnityEngine::Rendering::Universal::RenderingLayerUtils_Event, ::UnityEngine::Rendering::Universal::RenderingLayerUtils_Event)>(
    &::UnityEngine::Rendering::Universal::RenderingLayerUtils::Combine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6691c9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RenderingLayerUtils*>::get(), "Combine", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::RenderingLayerUtils_Event>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::RenderingLayerUtils_Event>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RenderingLayerUtils.Combine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize (*)(
    ::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize, ::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize)>(
    &::UnityEngine::Rendering::Universal::RenderingLayerUtils::Combine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6691fd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RenderingLayerUtils*>::get(), "Combine", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::RenderingLayerUtils::CombineRendererEvents(bool isDeferred, int32_t msaaSampleCount,
                                                                                          ::UnityEngine::Rendering::Universal::RenderingLayerUtils_Event rendererEvent,
                                                                                          ::ByRef<::UnityEngine::Rendering::Universal::RenderingLayerUtils_Event> combinedEvent) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RenderingLayerUtils*>::get(), "CombineRendererEvents", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::RenderingLayerUtils_Event>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::Universal::RenderingLayerUtils_Event>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, isDeferred, msaaSampleCount, rendererEvent, combinedEvent);
}
inline bool UnityEngine::Rendering::Universal::RenderingLayerUtils::RequireRenderingLayers(
    ::UnityEngine::Rendering::Universal::UniversalRenderer* universalRenderer,
    ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererFeature>>* rendererFeatures, int32_t msaaSampleCount,
    ::ByRef<::UnityEngine::Rendering::Universal::RenderingLayerUtils_Event> combinedEvent, ::ByRef<::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize> combinedMaskSize) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RenderingLayerUtils*>::get(), "RequireRenderingLayers", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalRenderer*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererFeature>>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::Universal::RenderingLayerUtils_Event>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, universalRenderer, rendererFeatures, msaaSampleCount, combinedEvent, combinedMaskSize);
}
inline bool UnityEngine::Rendering::Universal::RenderingLayerUtils::RequireRenderingLayers(
    ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererFeature>>* rendererFeatures,
    ::UnityEngine::Rendering::Universal::RenderingMode renderingMode, bool accurateGbufferNormals, int32_t msaaSampleCount,
    ::ByRef<::UnityEngine::Rendering::Universal::RenderingLayerUtils_Event> combinedEvent, ::ByRef<::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize> combinedMaskSize) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RenderingLayerUtils*>::get(), "RequireRenderingLayers", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererFeature>>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::RenderingMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::Universal::RenderingLayerUtils_Event>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, rendererFeatures, renderingMode, accurateGbufferNormals, msaaSampleCount, combinedEvent, combinedMaskSize);
}
inline void UnityEngine::Rendering::Universal::RenderingLayerUtils::SetupProperties(::UnityEngine::Rendering::CommandBuffer* cmd,
                                                                                    ::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize maskSize) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RenderingLayerUtils*>::get(), "SetupProperties", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, cmd, maskSize);
}
inline void UnityEngine::Rendering::Universal::RenderingLayerUtils::SetupProperties(::UnityEngine::Rendering::RasterCommandBuffer* cmd,
                                                                                    ::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize maskSize) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RenderingLayerUtils*>::get(), "SetupProperties", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RasterCommandBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, cmd, maskSize);
}
inline ::UnityEngine::Experimental::Rendering::GraphicsFormat
UnityEngine::Rendering::Universal::RenderingLayerUtils::GetFormat(::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize maskSize) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RenderingLayerUtils*>::get(), "GetFormat", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::GraphicsFormat, false>(nullptr, ___internal_method, maskSize);
}
inline uint32_t UnityEngine::Rendering::Universal::RenderingLayerUtils::ToValidRenderingLayers(uint32_t renderingLayers) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RenderingLayerUtils*>::get(), "ToValidRenderingLayers",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method, renderingLayers);
}
inline ::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize UnityEngine::Rendering::Universal::RenderingLayerUtils::GetMaskSize(int32_t bits) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RenderingLayerUtils*>::get(), "GetMaskSize",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize, false>(nullptr, ___internal_method, bits);
}
inline int32_t UnityEngine::Rendering::Universal::RenderingLayerUtils::GetBits(::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize maskSize) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RenderingLayerUtils*>::get(), "GetBits", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, maskSize);
}
inline ::UnityEngine::Rendering::Universal::RenderingLayerUtils_Event
UnityEngine::Rendering::Universal::RenderingLayerUtils::Combine(::UnityEngine::Rendering::Universal::RenderingLayerUtils_Event a, ::UnityEngine::Rendering::Universal::RenderingLayerUtils_Event b) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RenderingLayerUtils*>::get(), "Combine", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::RenderingLayerUtils_Event>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::RenderingLayerUtils_Event>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::RenderingLayerUtils_Event, false>(nullptr, ___internal_method, a, b);
}
inline ::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize
UnityEngine::Rendering::Universal::RenderingLayerUtils::Combine(::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize a,
                                                                ::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize b) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::RenderingLayerUtils*>::get(), "Combine", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize, false>(nullptr, ___internal_method, a, b);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::RenderingLayerUtils::RenderingLayerUtils() {}
