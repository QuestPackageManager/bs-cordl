#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/RenderEvents.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__RenderEvents_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__ChainBuilderStats_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__ClipMethod_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__MeshHandle_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__RenderData_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__RenderTreeManager_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__RenderTree_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__UIRenderDevice_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderEvents.ProcessOnClippingChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (*)(::UnityEngine::UIElements::UIR::RenderTreeManager*, ::UnityEngine::UIElements::UIR::RenderData*, uint32_t, ::by_ref<::UnityEngine::UIElements::UIR::ChainBuilderStats>)>(
        &::UnityEngine::UIElements::UIR::RenderEvents::ProcessOnClippingChanged)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x71775e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderEvents*>(),
                                                             { "ProcessOnClippingChanged",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(), ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderData*>(),
                                                                 ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::UIR::ChainBuilderStats>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderEvents.ProcessOnOpacityChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UIElements::UIR::RenderTreeManager*, ::UnityEngine::UIElements::UIR::RenderData*, uint32_t,
                                                                ::by_ref<::UnityEngine::UIElements::UIR::ChainBuilderStats>)>(&::UnityEngine::UIElements::UIR::RenderEvents::ProcessOnOpacityChanged)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x7177c74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderEvents*>(),
                                                             { "ProcessOnOpacityChanged",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(), ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderData*>(),
                                                                 ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::UIR::ChainBuilderStats>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderEvents.ProcessOnColorChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UIElements::UIR::RenderTreeManager*, ::UnityEngine::UIElements::UIR::RenderData*, uint32_t,
                                                                ::by_ref<::UnityEngine::UIElements::UIR::ChainBuilderStats>)>(&::UnityEngine::UIElements::UIR::RenderEvents::ProcessOnColorChanged)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x71780fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderEvents*>(),
                                                             { "ProcessOnColorChanged",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(), ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderData*>(),
                                                                 ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::UIR::ChainBuilderStats>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderEvents.ProcessOnTransformOrSizeChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (*)(::UnityEngine::UIElements::UIR::RenderTreeManager*, ::UnityEngine::UIElements::UIR::RenderData*, uint32_t, ::by_ref<::UnityEngine::UIElements::UIR::ChainBuilderStats>)>(
        &::UnityEngine::UIElements::UIR::RenderEvents::ProcessOnTransformOrSizeChanged)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x7178470;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderEvents*>(),
                                                             { "ProcessOnTransformOrSizeChanged",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(), ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderData*>(),
                                                                 ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::UIR::ChainBuilderStats>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderEvents.GetTransformIDTransformInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Matrix4x4 (*)(::UnityEngine::UIElements::UIR::RenderData*)>(
    &::UnityEngine::UIElements::UIR::RenderEvents::GetTransformIDTransformInfo)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x71788f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderEvents*>(),
                                                                                           { "GetTransformIDTransformInfo", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderEvents.GetClipRectIDClipInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (*)(::UnityEngine::UIElements::UIR::RenderData*)>(&::UnityEngine::UIElements::UIR::RenderEvents::GetClipRectIDClipInfo)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x7178a64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderEvents*>(),
                                                                                           { "GetClipRectIDClipInfo", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderEvents.DepthFirstOnChildAdded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::UnityEngine::UIElements::UIR::RenderTreeManager*, ::UnityEngine::UIElements::VisualElement*,
                                                                    ::UnityEngine::UIElements::VisualElement*, int32_t)>(&::UnityEngine::UIElements::UIR::RenderEvents::DepthFirstOnChildAdded)> {
  constexpr static std::size_t size = 0x5e0;
  constexpr static std::size_t addrs = 0x7178bb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderEvents*>(),
                                                             { "DepthFirstOnChildAdded",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(), ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(),
                                                                 ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderEvents.DepthFirstOnElementRemoving
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::UnityEngine::UIElements::UIR::RenderTreeManager*, ::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::UIR::RenderEvents::DepthFirstOnElementRemoving)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x717a0e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderEvents*>(),
            { "DepthFirstOnElementRemoving", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(), ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderEvents.DepthFirstRemoveRenderData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UIElements::UIR::RenderTreeManager*, ::UnityEngine::UIElements::UIR::RenderData*)>(
    &::UnityEngine::UIElements::UIR::RenderEvents::DepthFirstRemoveRenderData)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x717a28c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderEvents*>(),
            { "DepthFirstRemoveRenderData", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(), ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderEvents.DoDepthFirstRemoveRenderData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UIElements::UIR::RenderTreeManager*, ::UnityEngine::UIElements::UIR::RenderData*)>(
    &::UnityEngine::UIElements::UIR::RenderEvents::DoDepthFirstRemoveRenderData)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x717a824;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderEvents*>(),
            { "DoDepthFirstRemoveRenderData", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(), ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderEvents.DisconnectSubTree
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UIElements::UIR::RenderData*)>(&::UnityEngine::UIElements::UIR::RenderEvents::DisconnectSubTree)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x717a36c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderEvents*>(),
                                                                                           { "DisconnectSubTree", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderEvents.DisconnectRenderTreeFromParent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UIElements::UIR::RenderTree*, ::UnityEngine::UIElements::UIR::RenderTree*)>(
    &::UnityEngine::UIElements::UIR::RenderEvents::DisconnectRenderTreeFromParent)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x717a910;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderEvents*>(),
                         { "DisconnectRenderTreeFromParent", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderTree*>(), ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderTree*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderEvents.ResetRenderData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UIElements::UIR::RenderTreeManager*, ::UnityEngine::UIElements::UIR::RenderData*)>(
    &::UnityEngine::UIElements::UIR::RenderEvents::ResetRenderData)> {
  constexpr static std::size_t size = 0x464;
  constexpr static std::size_t addrs = 0x717a3c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderEvents*>(),
                            { "ResetRenderData", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(), ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderEvents.DepthFirstOnClippingChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(
    ::UnityEngine::UIElements::UIR::RenderTreeManager*, ::UnityEngine::UIElements::UIR::RenderData*, ::UnityEngine::UIElements::UIR::RenderData*, uint32_t, bool, bool, bool, bool, bool,
    ::UnityEngine::UIElements::UIR::UIRenderDevice*, ::by_ref<::UnityEngine::UIElements::UIR::ChainBuilderStats>)>(&::UnityEngine::UIElements::UIR::RenderEvents::DepthFirstOnClippingChanged)> {
  constexpr static std::size_t size = 0x5b4;
  constexpr static std::size_t addrs = 0x71776c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderEvents*>(),
                                                { "DepthFirstOnClippingChanged",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(), ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderData*>(),
                                                    ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderData*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(),
                                                    ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::UIElements::UIR::UIRenderDevice*>(),
                                                    ::i2c::type_of<::by_ref<::UnityEngine::UIElements::UIR::ChainBuilderStats>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderEvents.DepthFirstOnOpacityChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UIElements::UIR::RenderTreeManager*, float_t, ::UnityEngine::UIElements::UIR::RenderData*, uint32_t, bool,
                                                                ::by_ref<::UnityEngine::UIElements::UIR::ChainBuilderStats>, bool)>(
    &::UnityEngine::UIElements::UIR::RenderEvents::DepthFirstOnOpacityChanged)> {
  constexpr static std::size_t size = 0x3c8;
  constexpr static std::size_t addrs = 0x7177d34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderEvents*>(),
                            { "DepthFirstOnOpacityChanged",
                              {},
                              { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderData*>(),
                                ::i2c::type_of<uint32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::UIR::ChainBuilderStats>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderEvents.OnColorChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UIElements::UIR::RenderTreeManager*, ::UnityEngine::UIElements::UIR::RenderData*, uint32_t,
                                                                ::by_ref<::UnityEngine::UIElements::UIR::ChainBuilderStats>)>(&::UnityEngine::UIElements::UIR::RenderEvents::OnColorChanged)> {
  constexpr static std::size_t size = 0x2e8;
  constexpr static std::size_t addrs = 0x7178188;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderEvents*>(),
                                                             { "OnColorChanged",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(), ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderData*>(),
                                                                 ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::UIR::ChainBuilderStats>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderEvents.DepthFirstOnTransformOrSizeChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UIElements::UIR::RenderTreeManager*, ::UnityEngine::UIElements::UIR::RenderData*, uint32_t,
                                                                ::UnityEngine::UIElements::UIR::UIRenderDevice*, bool, bool, ::by_ref<::UnityEngine::UIElements::UIR::ChainBuilderStats>)>(
    &::UnityEngine::UIElements::UIR::RenderEvents::DepthFirstOnTransformOrSizeChanged)> {
  constexpr static std::size_t size = 0x3e0;
  constexpr static std::size_t addrs = 0x7178514;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderEvents*>(),
                                                             { "DepthFirstOnTransformOrSizeChanged",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(), ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderData*>(),
                                                                 ::i2c::type_of<uint32_t>(), ::i2c::type_of<::UnityEngine::UIElements::UIR::UIRenderDevice*>(), ::i2c::type_of<bool>(),
                                                                 ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::UIR::ChainBuilderStats>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderEvents.UpdateTextCoreSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::UIElements::UIR::RenderTreeManager*, ::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::UIR::RenderEvents::UpdateTextCoreSettings)> {
  constexpr static std::size_t size = 0x2f4;
  constexpr static std::size_t addrs = 0x717af68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderEvents*>(),
                            { "UpdateTextCoreSettings", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(), ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderEvents.NudgeVerticesToNewSpace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::UIElements::UIR::RenderData*, ::UnityEngine::UIElements::UIR::RenderTreeManager*,
                                                                ::UnityEngine::UIElements::UIR::UIRenderDevice*)>(&::UnityEngine::UIElements::UIR::RenderEvents::NudgeVerticesToNewSpace)> {
  constexpr static std::size_t size = 0x458;
  constexpr static std::size_t addrs = 0x717b424;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderEvents*>(),
                                                             { "NudgeVerticesToNewSpace",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderData*>(), ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(),
                                                                 ::i2c::type_of<::UnityEngine::UIElements::UIR::UIRenderDevice*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderEvents.PrepareNudgeVertices
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UIElements::UIR::UIRenderDevice*, ::UnityEngine::UIElements::UIR::MeshHandle*, ::by_ref<::System::IntPtr>,
                                                                ::by_ref<::System::IntPtr>, ::by_ref<int32_t>)>(&::UnityEngine::UIElements::UIR::RenderEvents::PrepareNudgeVertices)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x717b928;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderEvents*>(),
                                                             { "PrepareNudgeVertices",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::UIElements::UIR::UIRenderDevice*>(), ::i2c::type_of<::UnityEngine::UIElements::UIR::MeshHandle*>(),
                                                                 ::i2c::type_of<::by_ref<::System::IntPtr>>(), ::i2c::type_of<::by_ref<::System::IntPtr>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderEvents.DetermineSelfClipMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::UIR::ClipMethod (*)(::UnityEngine::UIElements::UIR::RenderTreeManager*, ::UnityEngine::UIElements::UIR::RenderData*)>(
    &::UnityEngine::UIElements::UIR::RenderEvents::DetermineSelfClipMethod)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x717ae98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderEvents*>(),
                         { "DetermineSelfClipMethod", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(), ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderEvents.UpdateLocalFlipsWinding
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::UIElements::UIR::RenderData*)>(&::UnityEngine::UIElements::UIR::RenderEvents::UpdateLocalFlipsWinding)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x71795b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderEvents*>(),
                                                                                           { "UpdateLocalFlipsWinding", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderEvents.UpdateZeroScaling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UIElements::UIR::RenderData*)>(&::UnityEngine::UIElements::UIR::RenderEvents::UpdateZeroScaling)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x717b25c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderEvents*>(),
                                                                                           { "UpdateZeroScaling", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderEvents.NeedsTransformID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::UIElements::VisualElement*)>(&::UnityEngine::UIElements::UIR::RenderEvents::NeedsTransformID)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x7179708;

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
  constexpr static std::size_t addrs = 0x717973c;

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
  constexpr static std::size_t addrs = 0x717b87c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderEvents*>(),
                                                                                           { "NeedsTextCoreSettings", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderEvents.InitColorIDs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::UIElements::UIR::RenderTreeManager*, ::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::UIR::RenderEvents::InitColorIDs)> {
  constexpr static std::size_t size = 0x464;
  constexpr static std::size_t addrs = 0x7179754;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderEvents*>(),
                            { "InitColorIDs", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(), ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderEvents.SetColorValues
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UIElements::UIR::RenderTreeManager*, ::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::UIR::RenderEvents::SetColorValues)> {
  constexpr static std::size_t size = 0x530;
  constexpr static std::size_t addrs = 0x7179bb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderEvents*>(),
                            { "SetColorValues", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(), ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
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
inline void UnityEngine::UIElements::UIR::RenderEvents::ProcessOnClippingChanged(::UnityEngine::UIElements::UIR::RenderTreeManager* renderTreeManager,
                                                                                 ::UnityEngine::UIElements::UIR::RenderData* renderData, uint32_t dirtyID,
                                                                                 ::by_ref<::UnityEngine::UIElements::UIR::ChainBuilderStats> stats) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderEvents*>(),
                                                           { "ProcessOnClippingChanged",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(), ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderData*>(),
                                                               ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::UIR::ChainBuilderStats>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, renderTreeManager, renderData, dirtyID, stats);
}
inline void UnityEngine::UIElements::UIR::RenderEvents::ProcessOnOpacityChanged(::UnityEngine::UIElements::UIR::RenderTreeManager* renderTreeManager,
                                                                                ::UnityEngine::UIElements::UIR::RenderData* renderData, uint32_t dirtyID,
                                                                                ::by_ref<::UnityEngine::UIElements::UIR::ChainBuilderStats> stats) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderEvents*>(),
                                                           { "ProcessOnOpacityChanged",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(), ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderData*>(),
                                                               ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::UIR::ChainBuilderStats>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, renderTreeManager, renderData, dirtyID, stats);
}
inline void UnityEngine::UIElements::UIR::RenderEvents::ProcessOnColorChanged(::UnityEngine::UIElements::UIR::RenderTreeManager* renderTreeManager,
                                                                              ::UnityEngine::UIElements::UIR::RenderData* renderData, uint32_t dirtyID,
                                                                              ::by_ref<::UnityEngine::UIElements::UIR::ChainBuilderStats> stats) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderEvents*>(),
                                                           { "ProcessOnColorChanged",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(), ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderData*>(),
                                                               ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::UIR::ChainBuilderStats>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, renderTreeManager, renderData, dirtyID, stats);
}
inline void UnityEngine::UIElements::UIR::RenderEvents::ProcessOnTransformOrSizeChanged(::UnityEngine::UIElements::UIR::RenderTreeManager* renderTreeManager,
                                                                                        ::UnityEngine::UIElements::UIR::RenderData* renderData, uint32_t dirtyID,
                                                                                        ::by_ref<::UnityEngine::UIElements::UIR::ChainBuilderStats> stats) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderEvents*>(),
                                                           { "ProcessOnTransformOrSizeChanged",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(), ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderData*>(),
                                                               ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::UIR::ChainBuilderStats>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, renderTreeManager, renderData, dirtyID, stats);
}
inline ::UnityEngine::Matrix4x4 UnityEngine::UIElements::UIR::RenderEvents::GetTransformIDTransformInfo(::UnityEngine::UIElements::UIR::RenderData* renderData) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderEvents*>(),
                                                                                         { "GetTransformIDTransformInfo", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderData*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4>(nullptr, ___internal_method, renderData);
}
inline ::UnityEngine::Vector4 UnityEngine::UIElements::UIR::RenderEvents::GetClipRectIDClipInfo(::UnityEngine::UIElements::UIR::RenderData* renderData) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderEvents*>(),
                                                                                         { "GetClipRectIDClipInfo", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderData*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(nullptr, ___internal_method, renderData);
}
inline uint32_t UnityEngine::UIElements::UIR::RenderEvents::DepthFirstOnChildAdded(::UnityEngine::UIElements::UIR::RenderTreeManager* renderTreeManager,
                                                                                   ::UnityEngine::UIElements::VisualElement* parent, ::UnityEngine::UIElements::VisualElement* ve, int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderEvents*>(),
                                                           { "DepthFirstOnChildAdded",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(), ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(),
                                                               ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, renderTreeManager, parent, ve, index);
}
inline uint32_t UnityEngine::UIElements::UIR::RenderEvents::DepthFirstOnElementRemoving(::UnityEngine::UIElements::UIR::RenderTreeManager* renderTreeManager,
                                                                                        ::UnityEngine::UIElements::VisualElement* ve) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderEvents*>(),
                       { "DepthFirstOnElementRemoving", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(), ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, renderTreeManager, ve);
}
inline void UnityEngine::UIElements::UIR::RenderEvents::DepthFirstRemoveRenderData(::UnityEngine::UIElements::UIR::RenderTreeManager* renderTreeManager,
                                                                                   ::UnityEngine::UIElements::UIR::RenderData* renderData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderEvents*>(),
                       { "DepthFirstRemoveRenderData", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(), ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, renderTreeManager, renderData);
}
inline void UnityEngine::UIElements::UIR::RenderEvents::DoDepthFirstRemoveRenderData(::UnityEngine::UIElements::UIR::RenderTreeManager* renderTreeManager,
                                                                                     ::UnityEngine::UIElements::UIR::RenderData* renderData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderEvents*>(),
          { "DoDepthFirstRemoveRenderData", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(), ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, renderTreeManager, renderData);
}
inline void UnityEngine::UIElements::UIR::RenderEvents::DisconnectSubTree(::UnityEngine::UIElements::UIR::RenderData* renderData) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderEvents*>(),
                                                                                         { "DisconnectSubTree", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, renderData);
}
inline void UnityEngine::UIElements::UIR::RenderEvents::DisconnectRenderTreeFromParent(::UnityEngine::UIElements::UIR::RenderTree* parentTree, ::UnityEngine::UIElements::UIR::RenderTree* nestedTree) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderEvents*>(),
                          { "DisconnectRenderTreeFromParent", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderTree*>(), ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderTree*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, parentTree, nestedTree);
}
inline void UnityEngine::UIElements::UIR::RenderEvents::ResetRenderData(::UnityEngine::UIElements::UIR::RenderTreeManager* renderTreeManager, ::UnityEngine::UIElements::UIR::RenderData* renderData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderEvents*>(),
                          { "ResetRenderData", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(), ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, renderTreeManager, renderData);
}
inline void UnityEngine::UIElements::UIR::RenderEvents::DepthFirstOnClippingChanged(::UnityEngine::UIElements::UIR::RenderTreeManager* renderTreeManager,
                                                                                    ::UnityEngine::UIElements::UIR::RenderData* parentRenderData,
                                                                                    ::UnityEngine::UIElements::UIR::RenderData* renderData, uint32_t dirtyID, bool hierarchical, bool isRootOfChange,
                                                                                    bool isPendingHierarchicalRepaint, bool inheritedClipRectIDChanged, bool inheritedMaskingChanged,
                                                                                    ::UnityEngine::UIElements::UIR::UIRenderDevice* device,
                                                                                    ::by_ref<::UnityEngine::UIElements::UIR::ChainBuilderStats> stats) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderEvents*>(),
                                              { "DepthFirstOnClippingChanged",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(), ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderData*>(),
                                                  ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderData*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(),
                                                  ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::UIElements::UIR::UIRenderDevice*>(),
                                                  ::i2c::type_of<::by_ref<::UnityEngine::UIElements::UIR::ChainBuilderStats>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, renderTreeManager, parentRenderData, renderData, dirtyID, hierarchical, isRootOfChange, isPendingHierarchicalRepaint,
                                                   inheritedClipRectIDChanged, inheritedMaskingChanged, device, stats);
}
inline void UnityEngine::UIElements::UIR::RenderEvents::DepthFirstOnOpacityChanged(::UnityEngine::UIElements::UIR::RenderTreeManager* renderTreeManager, float_t parentCompositeOpacity,
                                                                                   ::UnityEngine::UIElements::UIR::RenderData* renderData, uint32_t dirtyID, bool hierarchical,
                                                                                   ::by_ref<::UnityEngine::UIElements::UIR::ChainBuilderStats> stats, bool isDoingFullVertexRegeneration) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderEvents*>(),
                          { "DepthFirstOnOpacityChanged",
                            {},
                            { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderData*>(),
                              ::i2c::type_of<uint32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::UIR::ChainBuilderStats>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, renderTreeManager, parentCompositeOpacity, renderData, dirtyID, hierarchical, stats, isDoingFullVertexRegeneration);
}
inline void UnityEngine::UIElements::UIR::RenderEvents::OnColorChanged(::UnityEngine::UIElements::UIR::RenderTreeManager* renderTreeManager, ::UnityEngine::UIElements::UIR::RenderData* renderData,
                                                                       uint32_t dirtyID, ::by_ref<::UnityEngine::UIElements::UIR::ChainBuilderStats> stats) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderEvents*>(),
                                                           { "OnColorChanged",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(), ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderData*>(),
                                                               ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::UIR::ChainBuilderStats>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, renderTreeManager, renderData, dirtyID, stats);
}
inline void UnityEngine::UIElements::UIR::RenderEvents::DepthFirstOnTransformOrSizeChanged(::UnityEngine::UIElements::UIR::RenderTreeManager* renderTreeManager,
                                                                                           ::UnityEngine::UIElements::UIR::RenderData* renderData, uint32_t dirtyID,
                                                                                           ::UnityEngine::UIElements::UIR::UIRenderDevice* device, bool isAncestorOfChangeSkinned,
                                                                                           bool transformChanged, ::by_ref<::UnityEngine::UIElements::UIR::ChainBuilderStats> stats) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderEvents*>(),
                                                           { "DepthFirstOnTransformOrSizeChanged",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(), ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderData*>(),
                                                               ::i2c::type_of<uint32_t>(), ::i2c::type_of<::UnityEngine::UIElements::UIR::UIRenderDevice*>(), ::i2c::type_of<bool>(),
                                                               ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::UIR::ChainBuilderStats>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, renderTreeManager, renderData, dirtyID, device, isAncestorOfChangeSkinned, transformChanged, stats);
}
inline bool UnityEngine::UIElements::UIR::RenderEvents::UpdateTextCoreSettings(::UnityEngine::UIElements::UIR::RenderTreeManager* renderTreeManager, ::UnityEngine::UIElements::VisualElement* ve) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderEvents*>(),
                          { "UpdateTextCoreSettings", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(), ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, renderTreeManager, ve);
}
inline bool UnityEngine::UIElements::UIR::RenderEvents::NudgeVerticesToNewSpace(::UnityEngine::UIElements::UIR::RenderData* renderData,
                                                                                ::UnityEngine::UIElements::UIR::RenderTreeManager* renderTreeManager,
                                                                                ::UnityEngine::UIElements::UIR::UIRenderDevice* device) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderEvents*>(),
                                                           { "NudgeVerticesToNewSpace",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderData*>(), ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(),
                                                               ::i2c::type_of<::UnityEngine::UIElements::UIR::UIRenderDevice*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, renderData, renderTreeManager, device);
}
inline void UnityEngine::UIElements::UIR::RenderEvents::PrepareNudgeVertices(::UnityEngine::UIElements::UIR::UIRenderDevice* device, ::UnityEngine::UIElements::UIR::MeshHandle* mesh,
                                                                             ::by_ref<::System::IntPtr> src, ::by_ref<::System::IntPtr> dst, ::by_ref<int32_t> count) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderEvents*>(),
                                                           { "PrepareNudgeVertices",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::UIElements::UIR::UIRenderDevice*>(), ::i2c::type_of<::UnityEngine::UIElements::UIR::MeshHandle*>(),
                                                               ::i2c::type_of<::by_ref<::System::IntPtr>>(), ::i2c::type_of<::by_ref<::System::IntPtr>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, device, mesh, src, dst, count);
}
inline ::UnityEngine::UIElements::UIR::ClipMethod UnityEngine::UIElements::UIR::RenderEvents::DetermineSelfClipMethod(::UnityEngine::UIElements::UIR::RenderTreeManager* renderTreeManager,
                                                                                                                      ::UnityEngine::UIElements::UIR::RenderData* renderData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderEvents*>(),
                          { "DetermineSelfClipMethod", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(), ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderData*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UIR::ClipMethod>(nullptr, ___internal_method, renderTreeManager, renderData);
}
inline bool UnityEngine::UIElements::UIR::RenderEvents::UpdateLocalFlipsWinding(::UnityEngine::UIElements::UIR::RenderData* renderData) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderEvents*>(),
                                                                                         { "UpdateLocalFlipsWinding", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderData*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, renderData);
}
inline void UnityEngine::UIElements::UIR::RenderEvents::UpdateZeroScaling(::UnityEngine::UIElements::UIR::RenderData* renderData) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderEvents*>(),
                                                                                         { "UpdateZeroScaling", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, renderData);
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
inline bool UnityEngine::UIElements::UIR::RenderEvents::InitColorIDs(::UnityEngine::UIElements::UIR::RenderTreeManager* renderTreeManager, ::UnityEngine::UIElements::VisualElement* ve) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderEvents*>(),
                                       { "InitColorIDs", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(), ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, renderTreeManager, ve);
}
inline void UnityEngine::UIElements::UIR::RenderEvents::SetColorValues(::UnityEngine::UIElements::UIR::RenderTreeManager* renderTreeManager, ::UnityEngine::UIElements::VisualElement* ve) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderEvents*>(),
                          { "SetColorValues", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderTreeManager*>(), ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, renderTreeManager, ve);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIR::RenderEvents::RenderEvents() {}
