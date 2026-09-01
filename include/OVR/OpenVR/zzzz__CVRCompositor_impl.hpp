#pragma once
// IWYU pragma private; include "OVR\OpenVR\CVRCompositor.hpp"
#include "OVR/OpenVR/zzzz__IVRCompositor_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "OVR/OpenVR/zzzz__CVRCompositor_def.hpp"
#include "OVR/OpenVR/zzzz__Compositor_CumulativeStats_def.hpp"
#include "OVR/OpenVR/zzzz__Compositor_FrameTiming_def.hpp"
#include "OVR/OpenVR/zzzz__ETrackingUniverseOrigin_def.hpp"
#include "OVR/OpenVR/zzzz__EVRCompositorError_def.hpp"
#include "OVR/OpenVR/zzzz__EVRCompositorTimingMode_def.hpp"
#include "OVR/OpenVR/zzzz__EVREye_def.hpp"
#include "OVR/OpenVR/zzzz__EVRSubmitFlags_def.hpp"
#include "OVR/OpenVR/zzzz__HmdColor_t_def.hpp"
#include "OVR/OpenVR/zzzz__Texture_t_def.hpp"
#include "OVR/OpenVR/zzzz__TrackedDevicePose_t_def.hpp"
#include "OVR/OpenVR/zzzz__VRTextureBounds_t_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::OVR::OpenVR::CVRCompositor._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::CVRCompositor::*)(::System::IntPtr)>(&::OVR::OpenVR::CVRCompositor::_ctor)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5e44f9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRCompositor*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRCompositor.SetTrackingSpace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::CVRCompositor::*)(::OVR::OpenVR::ETrackingUniverseOrigin)>(&::OVR::OpenVR::CVRCompositor::SetTrackingSpace)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e4509c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRCompositor*>(), { "SetTrackingSpace", {}, { ::i2c::type_of<::OVR::OpenVR::ETrackingUniverseOrigin>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRCompositor.GetTrackingSpace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::ETrackingUniverseOrigin (::OVR::OpenVR::CVRCompositor::*)()>(&::OVR::OpenVR::CVRCompositor::GetTrackingSpace)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e450bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRCompositor*>(), { "GetTrackingSpace", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRCompositor.WaitGetPoses
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRCompositorError (::OVR::OpenVR::CVRCompositor::*)(
    ::ArrayW<::OVR::OpenVR::TrackedDevicePose_t>, ::ArrayW<::OVR::OpenVR::TrackedDevicePose_t>)>(&::OVR::OpenVR::CVRCompositor::WaitGetPoses)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5e450dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRCompositor*>(),
                                         { "WaitGetPoses", {}, { ::i2c::type_of<::ArrayW<::OVR::OpenVR::TrackedDevicePose_t>>(), ::i2c::type_of<::ArrayW<::OVR::OpenVR::TrackedDevicePose_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRCompositor.GetLastPoses
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRCompositorError (::OVR::OpenVR::CVRCompositor::*)(
    ::ArrayW<::OVR::OpenVR::TrackedDevicePose_t>, ::ArrayW<::OVR::OpenVR::TrackedDevicePose_t>)>(&::OVR::OpenVR::CVRCompositor::GetLastPoses)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5e45114;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRCompositor*>(),
                                         { "GetLastPoses", {}, { ::i2c::type_of<::ArrayW<::OVR::OpenVR::TrackedDevicePose_t>>(), ::i2c::type_of<::ArrayW<::OVR::OpenVR::TrackedDevicePose_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRCompositor.GetLastPoseForTrackedDeviceIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRCompositorError (::OVR::OpenVR::CVRCompositor::*)(
    uint32_t, ::by_ref<::OVR::OpenVR::TrackedDevicePose_t>, ::by_ref<::OVR::OpenVR::TrackedDevicePose_t>)>(&::OVR::OpenVR::CVRCompositor::GetLastPoseForTrackedDeviceIndex)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e4514c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRCompositor*>(), { "GetLastPoseForTrackedDeviceIndex",
                                                                                                    {},
                                                                                                    { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::OVR::OpenVR::TrackedDevicePose_t>>(),
                                                                                                      ::i2c::type_of<::by_ref<::OVR::OpenVR::TrackedDevicePose_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRCompositor.Submit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRCompositorError (::OVR::OpenVR::CVRCompositor::*)(
    ::OVR::OpenVR::EVREye, ::by_ref<::OVR::OpenVR::Texture_t>, ::by_ref<::OVR::OpenVR::VRTextureBounds_t>, ::OVR::OpenVR::EVRSubmitFlags)>(&::OVR::OpenVR::CVRCompositor::Submit)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e4516c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRCompositor*>(), { "Submit",
                                                                                {},
                                                                                { ::i2c::type_of<::OVR::OpenVR::EVREye>(), ::i2c::type_of<::by_ref<::OVR::OpenVR::Texture_t>>(),
                                                                                  ::i2c::type_of<::by_ref<::OVR::OpenVR::VRTextureBounds_t>>(), ::i2c::type_of<::OVR::OpenVR::EVRSubmitFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRCompositor.ClearLastSubmittedFrame
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::CVRCompositor::*)()>(&::OVR::OpenVR::CVRCompositor::ClearLastSubmittedFrame)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e4518c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRCompositor*>(), { "ClearLastSubmittedFrame", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRCompositor.PostPresentHandoff
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::CVRCompositor::*)()>(&::OVR::OpenVR::CVRCompositor::PostPresentHandoff)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e451ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRCompositor*>(), { "PostPresentHandoff", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRCompositor.GetFrameTiming
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::CVRCompositor::*)(::by_ref<::OVR::OpenVR::Compositor_FrameTiming>, uint32_t)>(
    &::OVR::OpenVR::CVRCompositor::GetFrameTiming)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e451cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRCompositor*>(),
                                                             { "GetFrameTiming", {}, { ::i2c::type_of<::by_ref<::OVR::OpenVR::Compositor_FrameTiming>>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRCompositor.GetFrameTimings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::OVR::OpenVR::CVRCompositor::*)(::by_ref<::OVR::OpenVR::Compositor_FrameTiming>, uint32_t)>(
    &::OVR::OpenVR::CVRCompositor::GetFrameTimings)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e451ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRCompositor*>(),
                                                             { "GetFrameTimings", {}, { ::i2c::type_of<::by_ref<::OVR::OpenVR::Compositor_FrameTiming>>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRCompositor.GetFrameTimeRemaining
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::OVR::OpenVR::CVRCompositor::*)()>(&::OVR::OpenVR::CVRCompositor::GetFrameTimeRemaining)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e4520c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRCompositor*>(), { "GetFrameTimeRemaining", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRCompositor.GetCumulativeStats
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::CVRCompositor::*)(::by_ref<::OVR::OpenVR::Compositor_CumulativeStats>, uint32_t)>(
    &::OVR::OpenVR::CVRCompositor::GetCumulativeStats)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e4522c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRCompositor*>(),
                                                             { "GetCumulativeStats", {}, { ::i2c::type_of<::by_ref<::OVR::OpenVR::Compositor_CumulativeStats>>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRCompositor.FadeToColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::CVRCompositor::*)(float_t, float_t, float_t, float_t, float_t, bool)>(&::OVR::OpenVR::CVRCompositor::FadeToColor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e4524c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::OVR::OpenVR::CVRCompositor*>(),
            { "FadeToColor", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRCompositor.GetCurrentFadeColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::HmdColor_t (::OVR::OpenVR::CVRCompositor::*)(bool)>(&::OVR::OpenVR::CVRCompositor::GetCurrentFadeColor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e45270;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRCompositor*>(), { "GetCurrentFadeColor", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRCompositor.FadeGrid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::CVRCompositor::*)(float_t, bool)>(&::OVR::OpenVR::CVRCompositor::FadeGrid)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e45294;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRCompositor*>(), { "FadeGrid", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRCompositor.GetCurrentGridAlpha
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::OVR::OpenVR::CVRCompositor::*)()>(&::OVR::OpenVR::CVRCompositor::GetCurrentGridAlpha)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e452b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRCompositor*>(), { "GetCurrentGridAlpha", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRCompositor.SetSkyboxOverride
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRCompositorError (::OVR::OpenVR::CVRCompositor::*)(::ArrayW<::OVR::OpenVR::Texture_t>)>(
    &::OVR::OpenVR::CVRCompositor::SetSkyboxOverride)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5e452d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRCompositor*>(), { "SetSkyboxOverride", {}, { ::i2c::type_of<::ArrayW<::OVR::OpenVR::Texture_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRCompositor.ClearSkyboxOverride
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::CVRCompositor::*)()>(&::OVR::OpenVR::CVRCompositor::ClearSkyboxOverride)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e45304;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRCompositor*>(), { "ClearSkyboxOverride", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRCompositor.CompositorBringToFront
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::CVRCompositor::*)()>(&::OVR::OpenVR::CVRCompositor::CompositorBringToFront)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e45324;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRCompositor*>(), { "CompositorBringToFront", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRCompositor.CompositorGoToBack
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::CVRCompositor::*)()>(&::OVR::OpenVR::CVRCompositor::CompositorGoToBack)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e45344;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRCompositor*>(), { "CompositorGoToBack", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRCompositor.CompositorQuit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::CVRCompositor::*)()>(&::OVR::OpenVR::CVRCompositor::CompositorQuit)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e45364;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRCompositor*>(), { "CompositorQuit", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRCompositor.IsFullscreen
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::CVRCompositor::*)()>(&::OVR::OpenVR::CVRCompositor::IsFullscreen)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e45384;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRCompositor*>(), { "IsFullscreen", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRCompositor.GetCurrentSceneFocusProcess
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::OVR::OpenVR::CVRCompositor::*)()>(&::OVR::OpenVR::CVRCompositor::GetCurrentSceneFocusProcess)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e453a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRCompositor*>(), { "GetCurrentSceneFocusProcess", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRCompositor.GetLastFrameRenderer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::OVR::OpenVR::CVRCompositor::*)()>(&::OVR::OpenVR::CVRCompositor::GetLastFrameRenderer)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e453c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRCompositor*>(), { "GetLastFrameRenderer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRCompositor.CanRenderScene
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::CVRCompositor::*)()>(&::OVR::OpenVR::CVRCompositor::CanRenderScene)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e453e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRCompositor*>(), { "CanRenderScene", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRCompositor.ShowMirrorWindow
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::CVRCompositor::*)()>(&::OVR::OpenVR::CVRCompositor::ShowMirrorWindow)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e45404;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRCompositor*>(), { "ShowMirrorWindow", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRCompositor.HideMirrorWindow
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::CVRCompositor::*)()>(&::OVR::OpenVR::CVRCompositor::HideMirrorWindow)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e45424;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRCompositor*>(), { "HideMirrorWindow", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRCompositor.IsMirrorWindowVisible
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::CVRCompositor::*)()>(&::OVR::OpenVR::CVRCompositor::IsMirrorWindowVisible)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e45444;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRCompositor*>(), { "IsMirrorWindowVisible", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRCompositor.CompositorDumpImages
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::CVRCompositor::*)()>(&::OVR::OpenVR::CVRCompositor::CompositorDumpImages)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e45464;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRCompositor*>(), { "CompositorDumpImages", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRCompositor.ShouldAppRenderWithLowResources
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::CVRCompositor::*)()>(&::OVR::OpenVR::CVRCompositor::ShouldAppRenderWithLowResources)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e45484;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRCompositor*>(), { "ShouldAppRenderWithLowResources", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRCompositor.ForceInterleavedReprojectionOn
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::CVRCompositor::*)(bool)>(&::OVR::OpenVR::CVRCompositor::ForceInterleavedReprojectionOn)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e454a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRCompositor*>(), { "ForceInterleavedReprojectionOn", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRCompositor.ForceReconnectProcess
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::CVRCompositor::*)()>(&::OVR::OpenVR::CVRCompositor::ForceReconnectProcess)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e454c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRCompositor*>(), { "ForceReconnectProcess", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRCompositor.SuspendRendering
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::CVRCompositor::*)(bool)>(&::OVR::OpenVR::CVRCompositor::SuspendRendering)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e454e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRCompositor*>(), { "SuspendRendering", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRCompositor.GetMirrorTextureD3D11
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRCompositorError (::OVR::OpenVR::CVRCompositor::*)(::OVR::OpenVR::EVREye, ::System::IntPtr, ::by_ref<::System::IntPtr>)>(
    &::OVR::OpenVR::CVRCompositor::GetMirrorTextureD3D11)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e4550c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRCompositor*>(),
                            { "GetMirrorTextureD3D11", {}, { ::i2c::type_of<::OVR::OpenVR::EVREye>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::System::IntPtr>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRCompositor.ReleaseMirrorTextureD3D11
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::CVRCompositor::*)(::System::IntPtr)>(&::OVR::OpenVR::CVRCompositor::ReleaseMirrorTextureD3D11)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e4552c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRCompositor*>(), { "ReleaseMirrorTextureD3D11", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRCompositor.GetMirrorTextureGL
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRCompositorError (::OVR::OpenVR::CVRCompositor::*)(::OVR::OpenVR::EVREye, ::by_ref<uint32_t>, ::System::IntPtr)>(
    &::OVR::OpenVR::CVRCompositor::GetMirrorTextureGL)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e4554c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRCompositor*>(),
                                                { "GetMirrorTextureGL", {}, { ::i2c::type_of<::OVR::OpenVR::EVREye>(), ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRCompositor.ReleaseSharedGLTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::CVRCompositor::*)(uint32_t, ::System::IntPtr)>(&::OVR::OpenVR::CVRCompositor::ReleaseSharedGLTexture)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e45570;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRCompositor*>(), { "ReleaseSharedGLTexture", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRCompositor.LockGLSharedTextureForAccess
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::CVRCompositor::*)(::System::IntPtr)>(&::OVR::OpenVR::CVRCompositor::LockGLSharedTextureForAccess)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e45590;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRCompositor*>(), { "LockGLSharedTextureForAccess", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRCompositor.UnlockGLSharedTextureForAccess
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::CVRCompositor::*)(::System::IntPtr)>(&::OVR::OpenVR::CVRCompositor::UnlockGLSharedTextureForAccess)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e455b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRCompositor*>(), { "UnlockGLSharedTextureForAccess", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRCompositor.GetVulkanInstanceExtensionsRequired
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::OVR::OpenVR::CVRCompositor::*)(::System::Text::StringBuilder*, uint32_t)>(
    &::OVR::OpenVR::CVRCompositor::GetVulkanInstanceExtensionsRequired)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e455d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRCompositor*>(),
                                                             { "GetVulkanInstanceExtensionsRequired", {}, { ::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRCompositor.GetVulkanDeviceExtensionsRequired
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::OVR::OpenVR::CVRCompositor::*)(::System::IntPtr, ::System::Text::StringBuilder*, uint32_t)>(
    &::OVR::OpenVR::CVRCompositor::GetVulkanDeviceExtensionsRequired)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e455f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRCompositor*>(),
                            { "GetVulkanDeviceExtensionsRequired", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRCompositor.SetExplicitTimingMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::CVRCompositor::*)(::OVR::OpenVR::EVRCompositorTimingMode)>(&::OVR::OpenVR::CVRCompositor::SetExplicitTimingMode)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e45610;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRCompositor*>(), { "SetExplicitTimingMode", {}, { ::i2c::type_of<::OVR::OpenVR::EVRCompositorTimingMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRCompositor.SubmitExplicitTimingData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRCompositorError (::OVR::OpenVR::CVRCompositor::*)()>(&::OVR::OpenVR::CVRCompositor::SubmitExplicitTimingData)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e45630;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRCompositor*>(), { "SubmitExplicitTimingData", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::OVR::OpenVR::IVRCompositor& OVR::OpenVR::CVRCompositor::__cordl_internal_get_FnTable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___FnTable;
}
constexpr ::OVR::OpenVR::IVRCompositor const& OVR::OpenVR::CVRCompositor::__cordl_internal_get_FnTable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___FnTable;
}
constexpr void OVR::OpenVR::CVRCompositor::__cordl_internal_set_FnTable(::OVR::OpenVR::IVRCompositor value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___FnTable = value;
}
inline void OVR::OpenVR::CVRCompositor::_ctor(::System::IntPtr pInterface) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRCompositor*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pInterface);
}
inline void OVR::OpenVR::CVRCompositor::SetTrackingSpace(::OVR::OpenVR::ETrackingUniverseOrigin eOrigin) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRCompositor*>(), { "SetTrackingSpace", {}, { ::i2c::type_of<::OVR::OpenVR::ETrackingUniverseOrigin>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eOrigin);
}
inline ::OVR::OpenVR::ETrackingUniverseOrigin OVR::OpenVR::CVRCompositor::GetTrackingSpace() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRCompositor*>(), { "GetTrackingSpace", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::ETrackingUniverseOrigin>(this, ___internal_method);
}
inline ::OVR::OpenVR::EVRCompositorError OVR::OpenVR::CVRCompositor::WaitGetPoses(::ArrayW<::OVR::OpenVR::TrackedDevicePose_t> pRenderPoseArray,
                                                                                  ::ArrayW<::OVR::OpenVR::TrackedDevicePose_t> pGamePoseArray) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRCompositor*>(),
                                       { "WaitGetPoses", {}, { ::i2c::type_of<::ArrayW<::OVR::OpenVR::TrackedDevicePose_t>>(), ::i2c::type_of<::ArrayW<::OVR::OpenVR::TrackedDevicePose_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRCompositorError>(this, ___internal_method, pRenderPoseArray, pGamePoseArray);
}
inline ::OVR::OpenVR::EVRCompositorError OVR::OpenVR::CVRCompositor::GetLastPoses(::ArrayW<::OVR::OpenVR::TrackedDevicePose_t> pRenderPoseArray,
                                                                                  ::ArrayW<::OVR::OpenVR::TrackedDevicePose_t> pGamePoseArray) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRCompositor*>(),
                                       { "GetLastPoses", {}, { ::i2c::type_of<::ArrayW<::OVR::OpenVR::TrackedDevicePose_t>>(), ::i2c::type_of<::ArrayW<::OVR::OpenVR::TrackedDevicePose_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRCompositorError>(this, ___internal_method, pRenderPoseArray, pGamePoseArray);
}
inline ::OVR::OpenVR::EVRCompositorError OVR::OpenVR::CVRCompositor::GetLastPoseForTrackedDeviceIndex(uint32_t unDeviceIndex, ::by_ref<::OVR::OpenVR::TrackedDevicePose_t> pOutputPose,
                                                                                                      ::by_ref<::OVR::OpenVR::TrackedDevicePose_t> pOutputGamePose) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRCompositor*>(), { "GetLastPoseForTrackedDeviceIndex",
                                                                                                  {},
                                                                                                  { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::OVR::OpenVR::TrackedDevicePose_t>>(),
                                                                                                    ::i2c::type_of<::by_ref<::OVR::OpenVR::TrackedDevicePose_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRCompositorError>(this, ___internal_method, unDeviceIndex, pOutputPose, pOutputGamePose);
}
inline ::OVR::OpenVR::EVRCompositorError OVR::OpenVR::CVRCompositor::Submit(::OVR::OpenVR::EVREye eEye, ::by_ref<::OVR::OpenVR::Texture_t> pTexture, ::by_ref<::OVR::OpenVR::VRTextureBounds_t> pBounds,
                                                                            ::OVR::OpenVR::EVRSubmitFlags nSubmitFlags) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRCompositor*>(), { "Submit",
                                                                              {},
                                                                              { ::i2c::type_of<::OVR::OpenVR::EVREye>(), ::i2c::type_of<::by_ref<::OVR::OpenVR::Texture_t>>(),
                                                                                ::i2c::type_of<::by_ref<::OVR::OpenVR::VRTextureBounds_t>>(), ::i2c::type_of<::OVR::OpenVR::EVRSubmitFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRCompositorError>(this, ___internal_method, eEye, pTexture, pBounds, nSubmitFlags);
}
inline void OVR::OpenVR::CVRCompositor::ClearLastSubmittedFrame() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRCompositor*>(), { "ClearLastSubmittedFrame", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void OVR::OpenVR::CVRCompositor::PostPresentHandoff() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRCompositor*>(), { "PostPresentHandoff", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool OVR::OpenVR::CVRCompositor::GetFrameTiming(::by_ref<::OVR::OpenVR::Compositor_FrameTiming> pTiming, uint32_t unFramesAgo) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRCompositor*>(),
                                                           { "GetFrameTiming", {}, { ::i2c::type_of<::by_ref<::OVR::OpenVR::Compositor_FrameTiming>>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pTiming, unFramesAgo);
}
inline uint32_t OVR::OpenVR::CVRCompositor::GetFrameTimings(::by_ref<::OVR::OpenVR::Compositor_FrameTiming> pTiming, uint32_t nFrames) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRCompositor*>(),
                                                           { "GetFrameTimings", {}, { ::i2c::type_of<::by_ref<::OVR::OpenVR::Compositor_FrameTiming>>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, pTiming, nFrames);
}
inline float_t OVR::OpenVR::CVRCompositor::GetFrameTimeRemaining() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRCompositor*>(), { "GetFrameTimeRemaining", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void OVR::OpenVR::CVRCompositor::GetCumulativeStats(::by_ref<::OVR::OpenVR::Compositor_CumulativeStats> pStats, uint32_t nStatsSizeInBytes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRCompositor*>(),
                                                           { "GetCumulativeStats", {}, { ::i2c::type_of<::by_ref<::OVR::OpenVR::Compositor_CumulativeStats>>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pStats, nStatsSizeInBytes);
}
inline void OVR::OpenVR::CVRCompositor::FadeToColor(float_t fSeconds, float_t fRed, float_t fGreen, float_t fBlue, float_t fAlpha, bool bBackground) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::OVR::OpenVR::CVRCompositor*>(),
          { "FadeToColor", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fSeconds, fRed, fGreen, fBlue, fAlpha, bBackground);
}
inline ::OVR::OpenVR::HmdColor_t OVR::OpenVR::CVRCompositor::GetCurrentFadeColor(bool bBackground) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRCompositor*>(), { "GetCurrentFadeColor", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::HmdColor_t>(this, ___internal_method, bBackground);
}
inline void OVR::OpenVR::CVRCompositor::FadeGrid(float_t fSeconds, bool bFadeIn) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRCompositor*>(), { "FadeGrid", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fSeconds, bFadeIn);
}
inline float_t OVR::OpenVR::CVRCompositor::GetCurrentGridAlpha() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRCompositor*>(), { "GetCurrentGridAlpha", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::OVR::OpenVR::EVRCompositorError OVR::OpenVR::CVRCompositor::SetSkyboxOverride(::ArrayW<::OVR::OpenVR::Texture_t> pTextures) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRCompositor*>(), { "SetSkyboxOverride", {}, { ::i2c::type_of<::ArrayW<::OVR::OpenVR::Texture_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRCompositorError>(this, ___internal_method, pTextures);
}
inline void OVR::OpenVR::CVRCompositor::ClearSkyboxOverride() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRCompositor*>(), { "ClearSkyboxOverride", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void OVR::OpenVR::CVRCompositor::CompositorBringToFront() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRCompositor*>(), { "CompositorBringToFront", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void OVR::OpenVR::CVRCompositor::CompositorGoToBack() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRCompositor*>(), { "CompositorGoToBack", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void OVR::OpenVR::CVRCompositor::CompositorQuit() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRCompositor*>(), { "CompositorQuit", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool OVR::OpenVR::CVRCompositor::IsFullscreen() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRCompositor*>(), { "IsFullscreen", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline uint32_t OVR::OpenVR::CVRCompositor::GetCurrentSceneFocusProcess() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRCompositor*>(), { "GetCurrentSceneFocusProcess", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
inline uint32_t OVR::OpenVR::CVRCompositor::GetLastFrameRenderer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRCompositor*>(), { "GetLastFrameRenderer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
inline bool OVR::OpenVR::CVRCompositor::CanRenderScene() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRCompositor*>(), { "CanRenderScene", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void OVR::OpenVR::CVRCompositor::ShowMirrorWindow() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRCompositor*>(), { "ShowMirrorWindow", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void OVR::OpenVR::CVRCompositor::HideMirrorWindow() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRCompositor*>(), { "HideMirrorWindow", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool OVR::OpenVR::CVRCompositor::IsMirrorWindowVisible() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRCompositor*>(), { "IsMirrorWindowVisible", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void OVR::OpenVR::CVRCompositor::CompositorDumpImages() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRCompositor*>(), { "CompositorDumpImages", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool OVR::OpenVR::CVRCompositor::ShouldAppRenderWithLowResources() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRCompositor*>(), { "ShouldAppRenderWithLowResources", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void OVR::OpenVR::CVRCompositor::ForceInterleavedReprojectionOn(bool bOverride) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRCompositor*>(), { "ForceInterleavedReprojectionOn", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bOverride);
}
inline void OVR::OpenVR::CVRCompositor::ForceReconnectProcess() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRCompositor*>(), { "ForceReconnectProcess", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void OVR::OpenVR::CVRCompositor::SuspendRendering(bool bSuspend) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRCompositor*>(), { "SuspendRendering", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bSuspend);
}
inline ::OVR::OpenVR::EVRCompositorError OVR::OpenVR::CVRCompositor::GetMirrorTextureD3D11(::OVR::OpenVR::EVREye eEye, ::System::IntPtr pD3D11DeviceOrResource,
                                                                                           ::by_ref<::System::IntPtr> ppD3D11ShaderResourceView) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRCompositor*>(),
                          { "GetMirrorTextureD3D11", {}, { ::i2c::type_of<::OVR::OpenVR::EVREye>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::System::IntPtr>>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRCompositorError>(this, ___internal_method, eEye, pD3D11DeviceOrResource, ppD3D11ShaderResourceView);
}
inline void OVR::OpenVR::CVRCompositor::ReleaseMirrorTextureD3D11(::System::IntPtr pD3D11ShaderResourceView) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRCompositor*>(), { "ReleaseMirrorTextureD3D11", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pD3D11ShaderResourceView);
}
inline ::OVR::OpenVR::EVRCompositorError OVR::OpenVR::CVRCompositor::GetMirrorTextureGL(::OVR::OpenVR::EVREye eEye, ::by_ref<uint32_t> pglTextureId, ::System::IntPtr pglSharedTextureHandle) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRCompositor*>(),
                                              { "GetMirrorTextureGL", {}, { ::i2c::type_of<::OVR::OpenVR::EVREye>(), ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRCompositorError>(this, ___internal_method, eEye, pglTextureId, pglSharedTextureHandle);
}
inline bool OVR::OpenVR::CVRCompositor::ReleaseSharedGLTexture(uint32_t glTextureId, ::System::IntPtr glSharedTextureHandle) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRCompositor*>(), { "ReleaseSharedGLTexture", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, glTextureId, glSharedTextureHandle);
}
inline void OVR::OpenVR::CVRCompositor::LockGLSharedTextureForAccess(::System::IntPtr glSharedTextureHandle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRCompositor*>(), { "LockGLSharedTextureForAccess", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, glSharedTextureHandle);
}
inline void OVR::OpenVR::CVRCompositor::UnlockGLSharedTextureForAccess(::System::IntPtr glSharedTextureHandle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRCompositor*>(), { "UnlockGLSharedTextureForAccess", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, glSharedTextureHandle);
}
inline uint32_t OVR::OpenVR::CVRCompositor::GetVulkanInstanceExtensionsRequired(::System::Text::StringBuilder* pchValue, uint32_t unBufferSize) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRCompositor*>(),
                                                           { "GetVulkanInstanceExtensionsRequired", {}, { ::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, pchValue, unBufferSize);
}
inline uint32_t OVR::OpenVR::CVRCompositor::GetVulkanDeviceExtensionsRequired(::System::IntPtr pPhysicalDevice, ::System::Text::StringBuilder* pchValue, uint32_t unBufferSize) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRCompositor*>(),
                          { "GetVulkanDeviceExtensionsRequired", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, pPhysicalDevice, pchValue, unBufferSize);
}
inline void OVR::OpenVR::CVRCompositor::SetExplicitTimingMode(::OVR::OpenVR::EVRCompositorTimingMode eTimingMode) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRCompositor*>(), { "SetExplicitTimingMode", {}, { ::i2c::type_of<::OVR::OpenVR::EVRCompositorTimingMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eTimingMode);
}
inline ::OVR::OpenVR::EVRCompositorError OVR::OpenVR::CVRCompositor::SubmitExplicitTimingData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRCompositor*>(), { "SubmitExplicitTimingData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRCompositorError>(this, ___internal_method);
}
inline ::OVR::OpenVR::CVRCompositor* OVR::OpenVR::CVRCompositor::New_ctor(::System::IntPtr pInterface) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::CVRCompositor*>(pInterface));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::CVRCompositor::CVRCompositor() {}
