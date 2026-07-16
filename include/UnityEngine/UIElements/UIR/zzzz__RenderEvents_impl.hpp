#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/RenderEvents.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__RenderEvents_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__ChainBuilderStats_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__ClipMethod_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__MeshHandle_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__RenderChain_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__UIRenderDevice_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderEvents.ProcessOnClippingChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (*)(::UnityEngine::UIElements::UIR::RenderChain*, ::UnityEngine::UIElements::VisualElement*, uint32_t, ::by_ref<::UnityEngine::UIElements::UIR::ChainBuilderStats>)>(
        &::UnityEngine::UIElements::UIR::RenderEvents::ProcessOnClippingChanged)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x6ce90d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderEvents*>(),
                                                             { "ProcessOnClippingChanged",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderChain*>(), ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(),
                                                                 ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::UIR::ChainBuilderStats>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderEvents.ProcessOnOpacityChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UIElements::UIR::RenderChain*, ::UnityEngine::UIElements::VisualElement*, uint32_t,
                                                                ::by_ref<::UnityEngine::UIElements::UIR::ChainBuilderStats>)>(&::UnityEngine::UIElements::UIR::RenderEvents::ProcessOnOpacityChanged)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x6ce96d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderEvents*>(),
                                                             { "ProcessOnOpacityChanged",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderChain*>(), ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(),
                                                                 ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::UIR::ChainBuilderStats>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderEvents.ProcessOnColorChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UIElements::UIR::RenderChain*, ::UnityEngine::UIElements::VisualElement*, uint32_t,
                                                                ::by_ref<::UnityEngine::UIElements::UIR::ChainBuilderStats>)>(&::UnityEngine::UIElements::UIR::RenderEvents::ProcessOnColorChanged)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6ce9b44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderEvents*>(),
                                                             { "ProcessOnColorChanged",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderChain*>(), ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(),
                                                                 ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::UIR::ChainBuilderStats>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderEvents.ProcessOnTransformOrSizeChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (*)(::UnityEngine::UIElements::UIR::RenderChain*, ::UnityEngine::UIElements::VisualElement*, uint32_t, ::by_ref<::UnityEngine::UIElements::UIR::ChainBuilderStats>)>(
        &::UnityEngine::UIElements::UIR::RenderEvents::ProcessOnTransformOrSizeChanged)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x6ce9e04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderEvents*>(),
                                                             { "ProcessOnTransformOrSizeChanged",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderChain*>(), ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(),
                                                                 ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::UIR::ChainBuilderStats>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderEvents.GetTransformIDTransformInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Matrix4x4 (*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::UIR::RenderEvents::GetTransformIDTransformInfo)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x6cea228;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderEvents*>(),
                                                                                           { "GetTransformIDTransformInfo", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderEvents.GetClipRectIDClipInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (*)(::UnityEngine::UIElements::VisualElement*)>(&::UnityEngine::UIElements::UIR::RenderEvents::GetClipRectIDClipInfo)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x6cea374;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderEvents*>(),
                                                                                           { "GetClipRectIDClipInfo", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderEvents.DepthFirstOnChildAdded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::UnityEngine::UIElements::UIR::RenderChain*, ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::VisualElement*,
                                                                    int32_t, bool)>(&::UnityEngine::UIElements::UIR::RenderEvents::DepthFirstOnChildAdded)> {
  constexpr static std::size_t size = 0x528;
  constexpr static std::size_t addrs = 0x6cea510;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderEvents*>(),
                                                             { "DepthFirstOnChildAdded",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderChain*>(), ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(),
                                                                 ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderEvents.DepthFirstOnChildRemoving
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::UnityEngine::UIElements::UIR::RenderChain*, ::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::UIR::RenderEvents::DepthFirstOnChildRemoving)> {
  constexpr static std::size_t size = 0x484;
  constexpr static std::size_t addrs = 0x6ceb7b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderEvents*>(),
                            { "DepthFirstOnChildRemoving", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderChain*>(), ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderEvents.DepthFirstOnClippingChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(
    ::UnityEngine::UIElements::UIR::RenderChain*, ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::VisualElement*, uint32_t, bool, bool, bool, bool, bool,
    ::UnityEngine::UIElements::UIR::UIRenderDevice*, ::by_ref<::UnityEngine::UIElements::UIR::ChainBuilderStats>)>(&::UnityEngine::UIElements::UIR::RenderEvents::DepthFirstOnClippingChanged)> {
  constexpr static std::size_t size = 0x524;
  constexpr static std::size_t addrs = 0x6ce91b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderEvents*>(),
                                                { "DepthFirstOnClippingChanged",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderChain*>(), ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(),
                                                    ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(),
                                                    ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::UIElements::UIR::UIRenderDevice*>(),
                                                    ::i2c::type_of<::by_ref<::UnityEngine::UIElements::UIR::ChainBuilderStats>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderEvents.DepthFirstOnOpacityChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UIElements::UIR::RenderChain*, float_t, ::UnityEngine::UIElements::VisualElement*, uint32_t, bool,
                                                                ::by_ref<::UnityEngine::UIElements::UIR::ChainBuilderStats>, bool)>(
    &::UnityEngine::UIElements::UIR::RenderEvents::DepthFirstOnOpacityChanged)> {
  constexpr static std::size_t size = 0x3a8;
  constexpr static std::size_t addrs = 0x6ce979c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderEvents*>(),
                            { "DepthFirstOnOpacityChanged",
                              {},
                              { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderChain*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(),
                                ::i2c::type_of<uint32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::UIR::ChainBuilderStats>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderEvents.OnColorChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UIElements::UIR::RenderChain*, ::UnityEngine::UIElements::VisualElement*, uint32_t,
                                                                ::by_ref<::UnityEngine::UIElements::UIR::ChainBuilderStats>)>(&::UnityEngine::UIElements::UIR::RenderEvents::OnColorChanged)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x6ce9bd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderEvents*>(),
                                                             { "OnColorChanged",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderChain*>(), ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(),
                                                                 ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::UIR::ChainBuilderStats>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderEvents.DepthFirstOnTransformOrSizeChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UIElements::UIR::RenderChain*, ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::VisualElement*,
                                                                uint32_t, ::UnityEngine::UIElements::UIR::UIRenderDevice*, bool, bool, ::by_ref<::UnityEngine::UIElements::UIR::ChainBuilderStats>)>(
    &::UnityEngine::UIElements::UIR::RenderEvents::DepthFirstOnTransformOrSizeChanged)> {
  constexpr static std::size_t size = 0x368;
  constexpr static std::size_t addrs = 0x6ce9ec0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderEvents*>(),
                                         { "DepthFirstOnTransformOrSizeChanged",
                                           {},
                                           { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderChain*>(), ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(),
                                             ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::UnityEngine::UIElements::UIR::UIRenderDevice*>(),
                                             ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::UIR::ChainBuilderStats>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderEvents.UpdateTextCoreSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::UIElements::UIR::RenderChain*, ::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::UIR::RenderEvents::UpdateTextCoreSettings)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x6cec890;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderEvents*>(),
                            { "UpdateTextCoreSettings", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderChain*>(), ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderEvents.NudgeVerticesToNewSpace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::UIR::RenderChain*,
                                                                ::UnityEngine::UIElements::UIR::UIRenderDevice*)>(&::UnityEngine::UIElements::UIR::RenderEvents::NudgeVerticesToNewSpace)> {
  constexpr static std::size_t size = 0x3dc;
  constexpr static std::size_t addrs = 0x6cecd7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderEvents*>(),
                                                             { "NudgeVerticesToNewSpace",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderChain*>(),
                                                                 ::i2c::type_of<::UnityEngine::UIElements::UIR::UIRenderDevice*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderEvents.PrepareNudgeVertices
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::UIR::UIRenderDevice*, ::UnityEngine::UIElements::UIR::MeshHandle*,
                                                                ::by_ref<::System::IntPtr>, ::by_ref<::System::IntPtr>, ::by_ref<int32_t>)>(
    &::UnityEngine::UIElements::UIR::RenderEvents::PrepareNudgeVertices)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x6ced5cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderEvents*>(),
                                                             { "PrepareNudgeVertices",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::UIR::UIRenderDevice*>(),
                                                                 ::i2c::type_of<::UnityEngine::UIElements::UIR::MeshHandle*>(), ::i2c::type_of<::by_ref<::System::IntPtr>>(),
                                                                 ::i2c::type_of<::by_ref<::System::IntPtr>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderEvents.GetLastDeepestChild
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::VisualElement* (*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::UIR::RenderEvents::GetLastDeepestChild)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6ceab5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderEvents*>(),
                                                                                           { "GetLastDeepestChild", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderEvents.DetermineSelfClipMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::UIR::ClipMethod (*)(::UnityEngine::UIElements::UIR::RenderChain*, ::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::UIR::RenderEvents::DetermineSelfClipMethod)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6cec650;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderEvents*>(),
                            { "DetermineSelfClipMethod", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderChain*>(), ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderEvents.UpdateLocalFlipsWinding
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::UIElements::VisualElement*)>(&::UnityEngine::UIElements::UIR::RenderEvents::UpdateLocalFlipsWinding)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x6ceaa38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderEvents*>(),
                                                                                           { "UpdateLocalFlipsWinding", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderEvents.UpdateZeroScaling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UIElements::VisualElement*)>(&::UnityEngine::UIElements::UIR::RenderEvents::UpdateZeroScaling)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x6cecbf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderEvents*>(),
                                                                                           { "UpdateZeroScaling", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderEvents.NeedsTransformID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::UIElements::VisualElement*)>(&::UnityEngine::UIElements::UIR::RenderEvents::NeedsTransformID)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6ceabd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderEvents*>(),
                                                                                           { "NeedsTransformID", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderEvents.NeedsColorID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::UIElements::VisualElement*)>(&::UnityEngine::UIElements::UIR::RenderEvents::NeedsColorID)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6ceac28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderEvents*>(), { "NeedsColorID", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderEvents.NeedsTextCoreSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::UIElements::VisualElement*)>(&::UnityEngine::UIElements::UIR::RenderEvents::NeedsTextCoreSettings)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6ced158;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderEvents*>(),
                                                                                           { "NeedsTextCoreSettings", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderEvents.InitColorIDs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::UIElements::UIR::RenderChain*, ::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::UIR::RenderEvents::InitColorIDs)> {
  constexpr static std::size_t size = 0x564;
  constexpr static std::size_t addrs = 0x6ceac40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderEvents*>(),
                                         { "InitColorIDs", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderChain*>(), ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderEvents.SetColorValues
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UIElements::UIR::RenderChain*, ::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::UIR::RenderEvents::SetColorValues)> {
  constexpr static std::size_t size = 0x4a8;
  constexpr static std::size_t addrs = 0x6ceb1a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderEvents*>(),
                                         { "SetColorValues", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderChain*>(), ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::UIR::RenderEvents::setStaticF_k_NudgeVerticesMarker(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "k_NudgeVerticesMarker", ::UnityEngine::UIElements::UIR::RenderEvents*>(
      std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::UIElements::UIR::RenderEvents::getStaticF_k_NudgeVerticesMarker() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "k_NudgeVerticesMarker", ::UnityEngine::UIElements::UIR::RenderEvents*>();
}
inline void UnityEngine::UIElements::UIR::RenderEvents::setStaticF_VisibilityTreshold(float_t value) {
  ::cordl_internals::setStaticField<float_t, "VisibilityTreshold", ::UnityEngine::UIElements::UIR::RenderEvents*>(std::forward<float_t>(value));
}
inline float_t UnityEngine::UIElements::UIR::RenderEvents::getStaticF_VisibilityTreshold() {
  return ::cordl_internals::getStaticField<float_t, "VisibilityTreshold", ::UnityEngine::UIElements::UIR::RenderEvents*>();
}
inline void UnityEngine::UIElements::UIR::RenderEvents::ProcessOnClippingChanged(::UnityEngine::UIElements::UIR::RenderChain* renderChain, ::UnityEngine::UIElements::VisualElement* ve,
                                                                                 uint32_t dirtyID, ::by_ref<::UnityEngine::UIElements::UIR::ChainBuilderStats> stats) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderEvents*>(),
                                                           { "ProcessOnClippingChanged",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderChain*>(), ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(),
                                                               ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::UIR::ChainBuilderStats>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, renderChain, ve, dirtyID, stats);
}
inline void UnityEngine::UIElements::UIR::RenderEvents::ProcessOnOpacityChanged(::UnityEngine::UIElements::UIR::RenderChain* renderChain, ::UnityEngine::UIElements::VisualElement* ve,
                                                                                uint32_t dirtyID, ::by_ref<::UnityEngine::UIElements::UIR::ChainBuilderStats> stats) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderEvents*>(),
                                                           { "ProcessOnOpacityChanged",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderChain*>(), ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(),
                                                               ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::UIR::ChainBuilderStats>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, renderChain, ve, dirtyID, stats);
}
inline void UnityEngine::UIElements::UIR::RenderEvents::ProcessOnColorChanged(::UnityEngine::UIElements::UIR::RenderChain* renderChain, ::UnityEngine::UIElements::VisualElement* ve, uint32_t dirtyID,
                                                                              ::by_ref<::UnityEngine::UIElements::UIR::ChainBuilderStats> stats) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderEvents*>(),
                                                           { "ProcessOnColorChanged",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderChain*>(), ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(),
                                                               ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::UIR::ChainBuilderStats>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, renderChain, ve, dirtyID, stats);
}
inline void UnityEngine::UIElements::UIR::RenderEvents::ProcessOnTransformOrSizeChanged(::UnityEngine::UIElements::UIR::RenderChain* renderChain, ::UnityEngine::UIElements::VisualElement* ve,
                                                                                        uint32_t dirtyID, ::by_ref<::UnityEngine::UIElements::UIR::ChainBuilderStats> stats) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderEvents*>(),
                                                           { "ProcessOnTransformOrSizeChanged",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderChain*>(), ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(),
                                                               ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::UIR::ChainBuilderStats>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, renderChain, ve, dirtyID, stats);
}
inline ::UnityEngine::Matrix4x4 UnityEngine::UIElements::UIR::RenderEvents::GetTransformIDTransformInfo(::UnityEngine::UIElements::VisualElement* ve) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderEvents*>(),
                                                                                         { "GetTransformIDTransformInfo", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4>(nullptr, ___internal_method, ve);
}
inline ::UnityEngine::Vector4 UnityEngine::UIElements::UIR::RenderEvents::GetClipRectIDClipInfo(::UnityEngine::UIElements::VisualElement* ve) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderEvents*>(),
                                                                                         { "GetClipRectIDClipInfo", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(nullptr, ___internal_method, ve);
}
inline uint32_t UnityEngine::UIElements::UIR::RenderEvents::DepthFirstOnChildAdded(::UnityEngine::UIElements::UIR::RenderChain* renderChain, ::UnityEngine::UIElements::VisualElement* parent,
                                                                                   ::UnityEngine::UIElements::VisualElement* ve, int32_t index, bool resetState) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderEvents*>(),
                                                           { "DepthFirstOnChildAdded",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderChain*>(), ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(),
                                                               ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, renderChain, parent, ve, index, resetState);
}
inline uint32_t UnityEngine::UIElements::UIR::RenderEvents::DepthFirstOnChildRemoving(::UnityEngine::UIElements::UIR::RenderChain* renderChain, ::UnityEngine::UIElements::VisualElement* ve) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderEvents*>(),
                          { "DepthFirstOnChildRemoving", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderChain*>(), ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, renderChain, ve);
}
inline void UnityEngine::UIElements::UIR::RenderEvents::DepthFirstOnClippingChanged(::UnityEngine::UIElements::UIR::RenderChain* renderChain, ::UnityEngine::UIElements::VisualElement* parent,
                                                                                    ::UnityEngine::UIElements::VisualElement* ve, uint32_t dirtyID, bool hierarchical, bool isRootOfChange,
                                                                                    bool isPendingHierarchicalRepaint, bool inheritedClipRectIDChanged, bool inheritedMaskingChanged,
                                                                                    ::UnityEngine::UIElements::UIR::UIRenderDevice* device,
                                                                                    ::by_ref<::UnityEngine::UIElements::UIR::ChainBuilderStats> stats) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderEvents*>(),
                                              { "DepthFirstOnClippingChanged",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderChain*>(), ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(),
                                                  ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(),
                                                  ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::UIElements::UIR::UIRenderDevice*>(),
                                                  ::i2c::type_of<::by_ref<::UnityEngine::UIElements::UIR::ChainBuilderStats>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, renderChain, parent, ve, dirtyID, hierarchical, isRootOfChange, isPendingHierarchicalRepaint,
                                                   inheritedClipRectIDChanged, inheritedMaskingChanged, device, stats);
}
inline void UnityEngine::UIElements::UIR::RenderEvents::DepthFirstOnOpacityChanged(::UnityEngine::UIElements::UIR::RenderChain* renderChain, float_t parentCompositeOpacity,
                                                                                   ::UnityEngine::UIElements::VisualElement* ve, uint32_t dirtyID, bool hierarchical,
                                                                                   ::by_ref<::UnityEngine::UIElements::UIR::ChainBuilderStats> stats, bool isDoingFullVertexRegeneration) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderEvents*>(),
                          { "DepthFirstOnOpacityChanged",
                            {},
                            { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderChain*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(),
                              ::i2c::type_of<uint32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::UIR::ChainBuilderStats>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, renderChain, parentCompositeOpacity, ve, dirtyID, hierarchical, stats, isDoingFullVertexRegeneration);
}
inline void UnityEngine::UIElements::UIR::RenderEvents::OnColorChanged(::UnityEngine::UIElements::UIR::RenderChain* renderChain, ::UnityEngine::UIElements::VisualElement* ve, uint32_t dirtyID,
                                                                       ::by_ref<::UnityEngine::UIElements::UIR::ChainBuilderStats> stats) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderEvents*>(),
                                                           { "OnColorChanged",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderChain*>(), ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(),
                                                               ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::UIR::ChainBuilderStats>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, renderChain, ve, dirtyID, stats);
}
inline void UnityEngine::UIElements::UIR::RenderEvents::DepthFirstOnTransformOrSizeChanged(::UnityEngine::UIElements::UIR::RenderChain* renderChain, ::UnityEngine::UIElements::VisualElement* parent,
                                                                                           ::UnityEngine::UIElements::VisualElement* ve, uint32_t dirtyID,
                                                                                           ::UnityEngine::UIElements::UIR::UIRenderDevice* device, bool isAncestorOfChangeSkinned,
                                                                                           bool transformChanged, ::by_ref<::UnityEngine::UIElements::UIR::ChainBuilderStats> stats) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderEvents*>(),
                                       { "DepthFirstOnTransformOrSizeChanged",
                                         {},
                                         { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderChain*>(), ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(),
                                           ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::UnityEngine::UIElements::UIR::UIRenderDevice*>(),
                                           ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::UIR::ChainBuilderStats>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, renderChain, parent, ve, dirtyID, device, isAncestorOfChangeSkinned, transformChanged, stats);
}
inline bool UnityEngine::UIElements::UIR::RenderEvents::UpdateTextCoreSettings(::UnityEngine::UIElements::UIR::RenderChain* renderChain, ::UnityEngine::UIElements::VisualElement* ve) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderEvents*>(),
                          { "UpdateTextCoreSettings", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderChain*>(), ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, renderChain, ve);
}
inline bool UnityEngine::UIElements::UIR::RenderEvents::NudgeVerticesToNewSpace(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::UIR::RenderChain* renderChain,
                                                                                ::UnityEngine::UIElements::UIR::UIRenderDevice* device) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderEvents*>(),
                                                           { "NudgeVerticesToNewSpace",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderChain*>(),
                                                               ::i2c::type_of<::UnityEngine::UIElements::UIR::UIRenderDevice*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ve, renderChain, device);
}
inline void UnityEngine::UIElements::UIR::RenderEvents::PrepareNudgeVertices(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::UIR::UIRenderDevice* device,
                                                                             ::UnityEngine::UIElements::UIR::MeshHandle* mesh, ::by_ref<::System::IntPtr> src, ::by_ref<::System::IntPtr> dst,
                                                                             ::by_ref<int32_t> count) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderEvents*>(),
                                                           { "PrepareNudgeVertices",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::UIR::UIRenderDevice*>(),
                                                               ::i2c::type_of<::UnityEngine::UIElements::UIR::MeshHandle*>(), ::i2c::type_of<::by_ref<::System::IntPtr>>(),
                                                               ::i2c::type_of<::by_ref<::System::IntPtr>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ve, device, mesh, src, dst, count);
}
inline ::UnityEngine::UIElements::VisualElement* UnityEngine::UIElements::UIR::RenderEvents::GetLastDeepestChild(::UnityEngine::UIElements::VisualElement* ve) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderEvents*>(),
                                                                                         { "GetLastDeepestChild", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElement*>(nullptr, ___internal_method, ve);
}
inline ::UnityEngine::UIElements::UIR::ClipMethod UnityEngine::UIElements::UIR::RenderEvents::DetermineSelfClipMethod(::UnityEngine::UIElements::UIR::RenderChain* renderChain,
                                                                                                                      ::UnityEngine::UIElements::VisualElement* ve) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderEvents*>(),
                          { "DetermineSelfClipMethod", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderChain*>(), ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UIR::ClipMethod>(nullptr, ___internal_method, renderChain, ve);
}
inline bool UnityEngine::UIElements::UIR::RenderEvents::UpdateLocalFlipsWinding(::UnityEngine::UIElements::VisualElement* ve) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderEvents*>(),
                                                                                         { "UpdateLocalFlipsWinding", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ve);
}
inline void UnityEngine::UIElements::UIR::RenderEvents::UpdateZeroScaling(::UnityEngine::UIElements::VisualElement* ve) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderEvents*>(),
                                                                                         { "UpdateZeroScaling", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ve);
}
inline bool UnityEngine::UIElements::UIR::RenderEvents::NeedsTransformID(::UnityEngine::UIElements::VisualElement* ve) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderEvents*>(), { "NeedsTransformID", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ve);
}
inline bool UnityEngine::UIElements::UIR::RenderEvents::NeedsColorID(::UnityEngine::UIElements::VisualElement* ve) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderEvents*>(), { "NeedsColorID", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ve);
}
inline bool UnityEngine::UIElements::UIR::RenderEvents::NeedsTextCoreSettings(::UnityEngine::UIElements::VisualElement* ve) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderEvents*>(),
                                                                                         { "NeedsTextCoreSettings", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ve);
}
inline bool UnityEngine::UIElements::UIR::RenderEvents::InitColorIDs(::UnityEngine::UIElements::UIR::RenderChain* renderChain, ::UnityEngine::UIElements::VisualElement* ve) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderEvents*>(),
                                       { "InitColorIDs", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderChain*>(), ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, renderChain, ve);
}
inline void UnityEngine::UIElements::UIR::RenderEvents::SetColorValues(::UnityEngine::UIElements::UIR::RenderChain* renderChain, ::UnityEngine::UIElements::VisualElement* ve) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderEvents*>(),
                                       { "SetColorValues", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderChain*>(), ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, renderChain, ve);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIR::RenderEvents::RenderEvents() {}
