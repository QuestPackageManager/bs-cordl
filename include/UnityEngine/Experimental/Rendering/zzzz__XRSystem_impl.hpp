#pragma once
// IWYU pragma private; include "UnityEngine/Experimental/Rendering/XRSystem.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__FoveatedRenderingCaps_impl.hpp"
#include "UnityEngine/Rendering/zzzz__MSAASamples_impl.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__XRSystem_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__XRLayoutStack_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__XRLayout_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__XRPassCreateInfo_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__XRPass_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__XRSystem_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__XRView_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__FoveatedRenderingCaps_def.hpp"
#include "UnityEngine/Rendering/zzzz__MSAASamples_def.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableCullingParameters_def.hpp"
#include "UnityEngine/XR/zzzz__XRDisplaySubsystem_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__RenderTextureDescriptor_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
// Ctor Parameters [CppParam { name: "camera", ty: "::UnityW<::UnityEngine::Camera>", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Experimental::Rendering::XRSystem___c__DisplayClass44_0::XRSystem___c__DisplayClass44_0(::UnityW<::UnityEngine::Camera> camera) noexcept {
  this->camera = camera;
}
// Ctor Parameters []
constexpr ::UnityEngine::Experimental::Rendering::XRSystem___c__DisplayClass44_0::XRSystem___c__DisplayClass44_0() {}
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRSystem.GetActiveDisplay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<Il2CppObject* (*)()>(&::UnityEngine::Experimental::Rendering::XRSystem::GetActiveDisplay)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x67453bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRSystem*>(), { "GetActiveDisplay", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRSystem.get_displayActive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::Experimental::Rendering::XRSystem::get_displayActive)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6740b60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRSystem*>(), { "get_displayActive", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRSystem.get_isHDRDisplayOutputActive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::Experimental::Rendering::XRSystem::get_isHDRDisplayOutputActive)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6745418;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRSystem*>(), { "get_isHDRDisplayOutputActive", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRSystem.get_singlePassAllowed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::Experimental::Rendering::XRSystem::get_singlePassAllowed)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x67454c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRSystem*>(), { "get_singlePassAllowed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRSystem.set_singlePassAllowed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::UnityEngine::Experimental::Rendering::XRSystem::set_singlePassAllowed)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x674551c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRSystem*>(), { "set_singlePassAllowed", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRSystem.get_foveatedRenderingCaps
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::FoveatedRenderingCaps (*)()>(&::UnityEngine::Experimental::Rendering::XRSystem::get_foveatedRenderingCaps)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6745580;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRSystem*>(), { "get_foveatedRenderingCaps", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRSystem.set_foveatedRenderingCaps
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::FoveatedRenderingCaps)>(&::UnityEngine::Experimental::Rendering::XRSystem::set_foveatedRenderingCaps)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x67455dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRSystem*>(),
                                                             { "set_foveatedRenderingCaps", {}, { ::i2c::type_of<::UnityEngine::Rendering::FoveatedRenderingCaps>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRSystem.get_dumpDebugInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::Experimental::Rendering::XRSystem::get_dumpDebugInfo)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x674563c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRSystem*>(), { "get_dumpDebugInfo", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRSystem.set_dumpDebugInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::UnityEngine::Experimental::Rendering::XRSystem::set_dumpDebugInfo)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6745698;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRSystem*>(), { "set_dumpDebugInfo", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRSystem.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Func_2<::UnityEngine::Experimental::Rendering::XRPassCreateInfo, ::UnityEngine::Experimental::Rendering::XRPass*>*,
                                                                ::UnityEngine::Shader*, ::UnityEngine::Shader*)>(&::UnityEngine::Experimental::Rendering::XRSystem::Initialize)> {
  constexpr static std::size_t size = 0x440;
  constexpr static std::size_t addrs = 0x67456fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRSystem*>(),
                                                { "Initialize",
                                                  {},
                                                  { ::i2c::type_of<::System::Func_2<::UnityEngine::Experimental::Rendering::XRPassCreateInfo, ::UnityEngine::Experimental::Rendering::XRPass*>*>(),
                                                    ::i2c::type_of<::UnityEngine::Shader*>(), ::i2c::type_of<::UnityEngine::Shader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRSystem.SetDisplayMSAASamples
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::MSAASamples)>(&::UnityEngine::Experimental::Rendering::XRSystem::SetDisplayMSAASamples)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x6745e54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRSystem*>(),
                                                                                           { "SetDisplayMSAASamples", {}, { ::i2c::type_of<::UnityEngine::Rendering::MSAASamples>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRSystem.GetDisplayMSAASamples
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::MSAASamples (*)()>(&::UnityEngine::Experimental::Rendering::XRSystem::GetDisplayMSAASamples)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x674602c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRSystem*>(), { "GetDisplayMSAASamples", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRSystem.SetOcclusionMeshScale
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t)>(&::UnityEngine::Experimental::Rendering::XRSystem::SetOcclusionMeshScale)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6746088;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRSystem*>(), { "SetOcclusionMeshScale", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRSystem.GetOcclusionMeshScale
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)()>(&::UnityEngine::Experimental::Rendering::XRSystem::GetOcclusionMeshScale)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x67460f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRSystem*>(), { "GetOcclusionMeshScale", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRSystem.SetMirrorViewMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::UnityEngine::Experimental::Rendering::XRSystem::SetMirrorViewMode)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x674614c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRSystem*>(), { "SetMirrorViewMode", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRSystem.GetMirrorViewMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::UnityEngine::Experimental::Rendering::XRSystem::GetMirrorViewMode)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x67461e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRSystem*>(), { "GetMirrorViewMode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRSystem.SetRenderScale
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t)>(&::UnityEngine::Experimental::Rendering::XRSystem::SetRenderScale)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x6746280;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRSystem*>(), { "SetRenderScale", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRSystem.GetRenderViewportScale
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)()>(&::UnityEngine::Experimental::Rendering::XRSystem::GetRenderViewportScale)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6746420;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRSystem*>(), { "GetRenderViewportScale", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRSystem.NewLayout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Experimental::Rendering::XRLayout* (*)()>(&::UnityEngine::Experimental::Rendering::XRSystem::NewLayout)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6746488;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRSystem*>(), { "NewLayout", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRSystem.EndLayout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::Experimental::Rendering::XRSystem::EndLayout)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x67464f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRSystem*>(), { "EndLayout", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRSystem.RenderMirrorView
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Camera*)>(
    &::UnityEngine::Experimental::Rendering::XRSystem::RenderMirrorView)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x67465d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRSystem*>(),
                                                             { "RenderMirrorView", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Camera*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRSystem.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::Experimental::Rendering::XRSystem::Dispose)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x6746680;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRSystem*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRSystem.SetDisplayZRange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t, float_t)>(&::UnityEngine::Experimental::Rendering::XRSystem::SetDisplayZRange)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x6740bfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRSystem*>(), { "SetDisplayZRange", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRSystem.SetLayoutOverride
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_2<::UnityEngine::Experimental::Rendering::XRLayout*, ::UnityW<::UnityEngine::Camera>>*)>(
    &::UnityEngine::Experimental::Rendering::XRSystem::SetLayoutOverride)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6746810;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRSystem*>(),
                                         { "SetLayoutOverride", {}, { ::i2c::type_of<::System::Action_2<::UnityEngine::Experimental::Rendering::XRLayout*, ::UnityW<::UnityEngine::Camera>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRSystem.XRSystemInit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::Experimental::Rendering::XRSystem::XRSystemInit)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x6746870;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRSystem*>(), { "XRSystemInit", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRSystem.RefreshDeviceInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::Experimental::Rendering::XRSystem::RefreshDeviceInfo)> {
  constexpr static std::size_t size = 0x318;
  constexpr static std::size_t addrs = 0x6745b3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRSystem*>(), { "RefreshDeviceInfo", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRSystem.CreateDefaultLayout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Camera*, ::UnityEngine::Experimental::Rendering::XRLayout*)>(
    &::UnityEngine::Experimental::Rendering::XRSystem::CreateDefaultLayout)> {
  constexpr static std::size_t size = 0x4cc;
  constexpr static std::size_t addrs = 0x6740cc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRSystem*>(),
                                                { "CreateDefaultLayout", {}, { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::XRLayout*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRSystem.ReconfigurePass
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Experimental::Rendering::XRPass*, ::UnityEngine::Camera*)>(
    &::UnityEngine::Experimental::Rendering::XRSystem::ReconfigurePass)> {
  constexpr static std::size_t size = 0x2a4;
  constexpr static std::size_t addrs = 0x674130c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRSystem*>(),
                                                { "ReconfigurePass", {}, { ::i2c::type_of<::UnityEngine::Experimental::Rendering::XRPass*>(), ::i2c::type_of<::UnityEngine::Camera*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRSystem.CanUseSinglePass
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Camera*, ::UnityEngine::XR::XRDisplaySubsystem_XRRenderPass)>(
    &::UnityEngine::Experimental::Rendering::XRSystem::CanUseSinglePass)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x6746940;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRSystem*>(),
                                                { "CanUseSinglePass", {}, { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::XR::XRDisplaySubsystem_XRRenderPass>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRSystem.BuildView
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Experimental::Rendering::XRView (*)(
    ::UnityEngine::XR::XRDisplaySubsystem_XRRenderPass, ::UnityEngine::XR::XRDisplaySubsystem_XRRenderParameter)>(&::UnityEngine::Experimental::Rendering::XRSystem::BuildView)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x6746e44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRSystem*>(),
                            { "BuildView", {}, { ::i2c::type_of<::UnityEngine::XR::XRDisplaySubsystem_XRRenderPass>(), ::i2c::type_of<::UnityEngine::XR::XRDisplaySubsystem_XRRenderParameter>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRSystem.XrRenderTextureDescToUnityRenderTextureDesc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::RenderTextureDescriptor (*)(::UnityEngine::RenderTextureDescriptor)>(
    &::UnityEngine::Experimental::Rendering::XRSystem::XrRenderTextureDescToUnityRenderTextureDesc)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x674700c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRSystem*>(),
                                                             { "XrRenderTextureDescToUnityRenderTextureDesc", {}, { ::i2c::type_of<::UnityEngine::RenderTextureDescriptor>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRSystem.BuildPass
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Experimental::Rendering::XRPassCreateInfo (*)(
    ::UnityEngine::XR::XRDisplaySubsystem_XRRenderPass, ::UnityEngine::Rendering::ScriptableCullingParameters, ::UnityEngine::Experimental::Rendering::XRLayout*)>(
    &::UnityEngine::Experimental::Rendering::XRSystem::BuildPass)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x6746ab0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRSystem*>(),
                                                { "BuildPass",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::XR::XRDisplaySubsystem_XRRenderPass>(), ::i2c::type_of<::UnityEngine::Rendering::ScriptableCullingParameters>(),
                                                    ::i2c::type_of<::UnityEngine::Experimental::Rendering::XRLayout*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRSystem._CreateDefaultLayout_g__AddViewToPass_44_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Experimental::Rendering::XRPass*, ::UnityEngine::XR::XRDisplaySubsystem_XRRenderPass, int32_t,
                                                                ::by_ref<::UnityEngine::Experimental::Rendering::XRSystem___c__DisplayClass44_0>)>(
    &::UnityEngine::Experimental::Rendering::XRSystem::_CreateDefaultLayout_g__AddViewToPass_44_0)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x6746d50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRSystem*>(),
                                                { "<CreateDefaultLayout>g__AddViewToPass|44_0",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::Experimental::Rendering::XRPass*>(), ::i2c::type_of<::UnityEngine::XR::XRDisplaySubsystem_XRRenderPass>(),
                                                    ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Experimental::Rendering::XRSystem___c__DisplayClass44_0>>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Experimental::Rendering::XRSystem::setStaticF_s_Layout(::UnityEngine::Experimental::Rendering::XRLayoutStack* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Experimental::Rendering::XRLayoutStack*, "s_Layout", ::UnityEngine::Experimental::Rendering::XRSystem*>(
      std::forward<::UnityEngine::Experimental::Rendering::XRLayoutStack*>(value));
}
inline ::UnityEngine::Experimental::Rendering::XRLayoutStack* UnityEngine::Experimental::Rendering::XRSystem::getStaticF_s_Layout() {
  return ::cordl_internals::getStaticField<::UnityEngine::Experimental::Rendering::XRLayoutStack*, "s_Layout", ::UnityEngine::Experimental::Rendering::XRSystem*>();
}
inline void UnityEngine::Experimental::Rendering::XRSystem::setStaticF_s_PassAllocator(
    ::System::Func_2<::UnityEngine::Experimental::Rendering::XRPassCreateInfo, ::UnityEngine::Experimental::Rendering::XRPass*>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::Experimental::Rendering::XRPassCreateInfo, ::UnityEngine::Experimental::Rendering::XRPass*>*, "s_PassAllocator",
                                    ::UnityEngine::Experimental::Rendering::XRSystem*>(
      std::forward<::System::Func_2<::UnityEngine::Experimental::Rendering::XRPassCreateInfo, ::UnityEngine::Experimental::Rendering::XRPass*>*>(value));
}
inline ::System::Func_2<::UnityEngine::Experimental::Rendering::XRPassCreateInfo, ::UnityEngine::Experimental::Rendering::XRPass*>*
UnityEngine::Experimental::Rendering::XRSystem::getStaticF_s_PassAllocator() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::Experimental::Rendering::XRPassCreateInfo, ::UnityEngine::Experimental::Rendering::XRPass*>*, "s_PassAllocator",
                                           ::UnityEngine::Experimental::Rendering::XRSystem*>();
}
inline void UnityEngine::Experimental::Rendering::XRSystem::setStaticF_s_DisplayList(::System::Collections::Generic::List_1<Il2CppObject*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<Il2CppObject*>*, "s_DisplayList", ::UnityEngine::Experimental::Rendering::XRSystem*>(
      std::forward<::System::Collections::Generic::List_1<Il2CppObject*>*>(value));
}
inline ::System::Collections::Generic::List_1<Il2CppObject*>* UnityEngine::Experimental::Rendering::XRSystem::getStaticF_s_DisplayList() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<Il2CppObject*>*, "s_DisplayList", ::UnityEngine::Experimental::Rendering::XRSystem*>();
}
inline void UnityEngine::Experimental::Rendering::XRSystem::setStaticF_s_Display(Il2CppObject* value) {
  ::cordl_internals::setStaticField<Il2CppObject*, "s_Display", ::UnityEngine::Experimental::Rendering::XRSystem*>(std::forward<Il2CppObject*>(value));
}
inline Il2CppObject* UnityEngine::Experimental::Rendering::XRSystem::getStaticF_s_Display() {
  return ::cordl_internals::getStaticField<Il2CppObject*, "s_Display", ::UnityEngine::Experimental::Rendering::XRSystem*>();
}
inline void UnityEngine::Experimental::Rendering::XRSystem::setStaticF_s_MSAASamples(::UnityEngine::Rendering::MSAASamples value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::MSAASamples, "s_MSAASamples", ::UnityEngine::Experimental::Rendering::XRSystem*>(
      std::forward<::UnityEngine::Rendering::MSAASamples>(value));
}
inline ::UnityEngine::Rendering::MSAASamples UnityEngine::Experimental::Rendering::XRSystem::getStaticF_s_MSAASamples() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::MSAASamples, "s_MSAASamples", ::UnityEngine::Experimental::Rendering::XRSystem*>();
}
inline void UnityEngine::Experimental::Rendering::XRSystem::setStaticF_s_OcclusionMeshScaling(float_t value) {
  ::cordl_internals::setStaticField<float_t, "s_OcclusionMeshScaling", ::UnityEngine::Experimental::Rendering::XRSystem*>(std::forward<float_t>(value));
}
inline float_t UnityEngine::Experimental::Rendering::XRSystem::getStaticF_s_OcclusionMeshScaling() {
  return ::cordl_internals::getStaticField<float_t, "s_OcclusionMeshScaling", ::UnityEngine::Experimental::Rendering::XRSystem*>();
}
inline void UnityEngine::Experimental::Rendering::XRSystem::setStaticF_s_OcclusionMeshMaterial(::UnityW<::UnityEngine::Material> value) {
  ::cordl_internals::setStaticField<::UnityW<::UnityEngine::Material>, "s_OcclusionMeshMaterial", ::UnityEngine::Experimental::Rendering::XRSystem*>(
      std::forward<::UnityW<::UnityEngine::Material>>(value));
}
inline ::UnityW<::UnityEngine::Material> UnityEngine::Experimental::Rendering::XRSystem::getStaticF_s_OcclusionMeshMaterial() {
  return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Material>, "s_OcclusionMeshMaterial", ::UnityEngine::Experimental::Rendering::XRSystem*>();
}
inline void UnityEngine::Experimental::Rendering::XRSystem::setStaticF_s_MirrorViewMaterial(::UnityW<::UnityEngine::Material> value) {
  ::cordl_internals::setStaticField<::UnityW<::UnityEngine::Material>, "s_MirrorViewMaterial", ::UnityEngine::Experimental::Rendering::XRSystem*>(
      std::forward<::UnityW<::UnityEngine::Material>>(value));
}
inline ::UnityW<::UnityEngine::Material> UnityEngine::Experimental::Rendering::XRSystem::getStaticF_s_MirrorViewMaterial() {
  return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Material>, "s_MirrorViewMaterial", ::UnityEngine::Experimental::Rendering::XRSystem*>();
}
inline void UnityEngine::Experimental::Rendering::XRSystem::setStaticF_s_LayoutOverride(::System::Action_2<::UnityEngine::Experimental::Rendering::XRLayout*, ::UnityW<::UnityEngine::Camera>>* value) {
  ::cordl_internals::setStaticField<::System::Action_2<::UnityEngine::Experimental::Rendering::XRLayout*, ::UnityW<::UnityEngine::Camera>>*, "s_LayoutOverride",
                                    ::UnityEngine::Experimental::Rendering::XRSystem*>(
      std::forward<::System::Action_2<::UnityEngine::Experimental::Rendering::XRLayout*, ::UnityW<::UnityEngine::Camera>>*>(value));
}
inline ::System::Action_2<::UnityEngine::Experimental::Rendering::XRLayout*, ::UnityW<::UnityEngine::Camera>>* UnityEngine::Experimental::Rendering::XRSystem::getStaticF_s_LayoutOverride() {
  return ::cordl_internals::getStaticField<::System::Action_2<::UnityEngine::Experimental::Rendering::XRLayout*, ::UnityW<::UnityEngine::Camera>>*, "s_LayoutOverride",
                                           ::UnityEngine::Experimental::Rendering::XRSystem*>();
}
inline void UnityEngine::Experimental::Rendering::XRSystem::setStaticF_emptyPass(::UnityEngine::Experimental::Rendering::XRPass* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Experimental::Rendering::XRPass*, "emptyPass", ::UnityEngine::Experimental::Rendering::XRSystem*>(
      std::forward<::UnityEngine::Experimental::Rendering::XRPass*>(value));
}
inline ::UnityEngine::Experimental::Rendering::XRPass* UnityEngine::Experimental::Rendering::XRSystem::getStaticF_emptyPass() {
  return ::cordl_internals::getStaticField<::UnityEngine::Experimental::Rendering::XRPass*, "emptyPass", ::UnityEngine::Experimental::Rendering::XRSystem*>();
}
inline void UnityEngine::Experimental::Rendering::XRSystem::setStaticF__singlePassAllowed_k__BackingField(bool value) {
  ::cordl_internals::setStaticField<bool, "<singlePassAllowed>k__BackingField", ::UnityEngine::Experimental::Rendering::XRSystem*>(std::forward<bool>(value));
}
inline bool UnityEngine::Experimental::Rendering::XRSystem::getStaticF__singlePassAllowed_k__BackingField() {
  return ::cordl_internals::getStaticField<bool, "<singlePassAllowed>k__BackingField", ::UnityEngine::Experimental::Rendering::XRSystem*>();
}
inline void UnityEngine::Experimental::Rendering::XRSystem::setStaticF__foveatedRenderingCaps_k__BackingField(::UnityEngine::Rendering::FoveatedRenderingCaps value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::FoveatedRenderingCaps, "<foveatedRenderingCaps>k__BackingField", ::UnityEngine::Experimental::Rendering::XRSystem*>(
      std::forward<::UnityEngine::Rendering::FoveatedRenderingCaps>(value));
}
inline ::UnityEngine::Rendering::FoveatedRenderingCaps UnityEngine::Experimental::Rendering::XRSystem::getStaticF__foveatedRenderingCaps_k__BackingField() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::FoveatedRenderingCaps, "<foveatedRenderingCaps>k__BackingField", ::UnityEngine::Experimental::Rendering::XRSystem*>();
}
inline void UnityEngine::Experimental::Rendering::XRSystem::setStaticF__dumpDebugInfo_k__BackingField(bool value) {
  ::cordl_internals::setStaticField<bool, "<dumpDebugInfo>k__BackingField", ::UnityEngine::Experimental::Rendering::XRSystem*>(std::forward<bool>(value));
}
inline bool UnityEngine::Experimental::Rendering::XRSystem::getStaticF__dumpDebugInfo_k__BackingField() {
  return ::cordl_internals::getStaticField<bool, "<dumpDebugInfo>k__BackingField", ::UnityEngine::Experimental::Rendering::XRSystem*>();
}
inline Il2CppObject* UnityEngine::Experimental::Rendering::XRSystem::GetActiveDisplay() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRSystem*>(), { "GetActiveDisplay", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<Il2CppObject*>(nullptr, ___internal_method);
}
inline bool UnityEngine::Experimental::Rendering::XRSystem::get_displayActive() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRSystem*>(), { "get_displayActive", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool UnityEngine::Experimental::Rendering::XRSystem::get_isHDRDisplayOutputActive() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRSystem*>(), { "get_isHDRDisplayOutputActive", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool UnityEngine::Experimental::Rendering::XRSystem::get_singlePassAllowed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRSystem*>(), { "get_singlePassAllowed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::XRSystem::set_singlePassAllowed(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRSystem*>(), { "set_singlePassAllowed", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::UnityEngine::Rendering::FoveatedRenderingCaps UnityEngine::Experimental::Rendering::XRSystem::get_foveatedRenderingCaps() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRSystem*>(), { "get_foveatedRenderingCaps", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::FoveatedRenderingCaps>(nullptr, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::XRSystem::set_foveatedRenderingCaps(::UnityEngine::Rendering::FoveatedRenderingCaps value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRSystem*>(),
                                                                                         { "set_foveatedRenderingCaps", {}, { ::i2c::type_of<::UnityEngine::Rendering::FoveatedRenderingCaps>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline bool UnityEngine::Experimental::Rendering::XRSystem::get_dumpDebugInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRSystem*>(), { "get_dumpDebugInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::XRSystem::set_dumpDebugInfo(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRSystem*>(), { "set_dumpDebugInfo", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void
UnityEngine::Experimental::Rendering::XRSystem::Initialize(::System::Func_2<::UnityEngine::Experimental::Rendering::XRPassCreateInfo, ::UnityEngine::Experimental::Rendering::XRPass*>* passAllocator,
                                                           ::UnityEngine::Shader* occlusionMeshPS, ::UnityEngine::Shader* mirrorViewPS) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRSystem*>(),
                                              { "Initialize",
                                                {},
                                                { ::i2c::type_of<::System::Func_2<::UnityEngine::Experimental::Rendering::XRPassCreateInfo, ::UnityEngine::Experimental::Rendering::XRPass*>*>(),
                                                  ::i2c::type_of<::UnityEngine::Shader*>(), ::i2c::type_of<::UnityEngine::Shader*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, passAllocator, occlusionMeshPS, mirrorViewPS);
}
inline void UnityEngine::Experimental::Rendering::XRSystem::SetDisplayMSAASamples(::UnityEngine::Rendering::MSAASamples msaaSamples) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRSystem*>(),
                                                                                         { "SetDisplayMSAASamples", {}, { ::i2c::type_of<::UnityEngine::Rendering::MSAASamples>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, msaaSamples);
}
inline ::UnityEngine::Rendering::MSAASamples UnityEngine::Experimental::Rendering::XRSystem::GetDisplayMSAASamples() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRSystem*>(), { "GetDisplayMSAASamples", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::MSAASamples>(nullptr, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::XRSystem::SetOcclusionMeshScale(float_t occlusionMeshScale) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRSystem*>(), { "SetOcclusionMeshScale", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, occlusionMeshScale);
}
inline float_t UnityEngine::Experimental::Rendering::XRSystem::GetOcclusionMeshScale() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRSystem*>(), { "GetOcclusionMeshScale", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::XRSystem::SetMirrorViewMode(int32_t mirrorBlitMode) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRSystem*>(), { "SetMirrorViewMode", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mirrorBlitMode);
}
inline int32_t UnityEngine::Experimental::Rendering::XRSystem::GetMirrorViewMode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRSystem*>(), { "GetMirrorViewMode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::XRSystem::SetRenderScale(float_t renderScale) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRSystem*>(), { "SetRenderScale", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, renderScale);
}
inline float_t UnityEngine::Experimental::Rendering::XRSystem::GetRenderViewportScale() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRSystem*>(), { "GetRenderViewportScale", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method);
}
inline ::UnityEngine::Experimental::Rendering::XRLayout* UnityEngine::Experimental::Rendering::XRSystem::NewLayout() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRSystem*>(), { "NewLayout", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::XRLayout*>(nullptr, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::XRSystem::EndLayout() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRSystem*>(), { "EndLayout", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::XRSystem::RenderMirrorView(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Camera* camera) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRSystem*>(),
                                                           { "RenderMirrorView", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Camera*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, camera);
}
inline void UnityEngine::Experimental::Rendering::XRSystem::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRSystem*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::XRSystem::SetDisplayZRange(float_t zNear, float_t zFar) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRSystem*>(), { "SetDisplayZRange", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, zNear, zFar);
}
inline void UnityEngine::Experimental::Rendering::XRSystem::SetLayoutOverride(::System::Action_2<::UnityEngine::Experimental::Rendering::XRLayout*, ::UnityW<::UnityEngine::Camera>>* action) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRSystem*>(),
                                       { "SetLayoutOverride", {}, { ::i2c::type_of<::System::Action_2<::UnityEngine::Experimental::Rendering::XRLayout*, ::UnityW<::UnityEngine::Camera>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, action);
}
inline void UnityEngine::Experimental::Rendering::XRSystem::XRSystemInit() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRSystem*>(), { "XRSystemInit", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::XRSystem::RefreshDeviceInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRSystem*>(), { "RefreshDeviceInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::XRSystem::CreateDefaultLayout(::UnityEngine::Camera* camera, ::UnityEngine::Experimental::Rendering::XRLayout* layout) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRSystem*>(),
                                              { "CreateDefaultLayout", {}, { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::XRLayout*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, camera, layout);
}
inline void UnityEngine::Experimental::Rendering::XRSystem::ReconfigurePass(::UnityEngine::Experimental::Rendering::XRPass* xrPass, ::UnityEngine::Camera* camera) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRSystem*>(),
                                              { "ReconfigurePass", {}, { ::i2c::type_of<::UnityEngine::Experimental::Rendering::XRPass*>(), ::i2c::type_of<::UnityEngine::Camera*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, xrPass, camera);
}
inline bool UnityEngine::Experimental::Rendering::XRSystem::CanUseSinglePass(::UnityEngine::Camera* camera, ::UnityEngine::XR::XRDisplaySubsystem_XRRenderPass renderPass) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRSystem*>(),
                                              { "CanUseSinglePass", {}, { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::XR::XRDisplaySubsystem_XRRenderPass>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, camera, renderPass);
}
inline ::UnityEngine::Experimental::Rendering::XRView UnityEngine::Experimental::Rendering::XRSystem::BuildView(::UnityEngine::XR::XRDisplaySubsystem_XRRenderPass renderPass,
                                                                                                                ::UnityEngine::XR::XRDisplaySubsystem_XRRenderParameter renderParameter) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRSystem*>(),
                          { "BuildView", {}, { ::i2c::type_of<::UnityEngine::XR::XRDisplaySubsystem_XRRenderPass>(), ::i2c::type_of<::UnityEngine::XR::XRDisplaySubsystem_XRRenderParameter>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::XRView>(nullptr, ___internal_method, renderPass, renderParameter);
}
inline ::UnityEngine::RenderTextureDescriptor UnityEngine::Experimental::Rendering::XRSystem::XrRenderTextureDescToUnityRenderTextureDesc(::UnityEngine::RenderTextureDescriptor xrDesc) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRSystem*>(),
                                                           { "XrRenderTextureDescToUnityRenderTextureDesc", {}, { ::i2c::type_of<::UnityEngine::RenderTextureDescriptor>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::RenderTextureDescriptor>(nullptr, ___internal_method, xrDesc);
}
inline ::UnityEngine::Experimental::Rendering::XRPassCreateInfo UnityEngine::Experimental::Rendering::XRSystem::BuildPass(::UnityEngine::XR::XRDisplaySubsystem_XRRenderPass xrRenderPass,
                                                                                                                          ::UnityEngine::Rendering::ScriptableCullingParameters cullingParameters,
                                                                                                                          ::UnityEngine::Experimental::Rendering::XRLayout* layout) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRSystem*>(),
                                              { "BuildPass",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::XR::XRDisplaySubsystem_XRRenderPass>(), ::i2c::type_of<::UnityEngine::Rendering::ScriptableCullingParameters>(),
                                                  ::i2c::type_of<::UnityEngine::Experimental::Rendering::XRLayout*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::XRPassCreateInfo>(nullptr, ___internal_method, xrRenderPass, cullingParameters, layout);
}
inline void UnityEngine::Experimental::Rendering::XRSystem::_CreateDefaultLayout_g__AddViewToPass_44_0(
    ::UnityEngine::Experimental::Rendering::XRPass* xrPass, ::UnityEngine::XR::XRDisplaySubsystem_XRRenderPass renderPass, int32_t renderParamIndex,
    ::by_ref<::UnityEngine::Experimental::Rendering::XRSystem___c__DisplayClass44_0> _cordl_fixed_empty_name_whitespace) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRSystem*>(),
                                                           { "<CreateDefaultLayout>g__AddViewToPass|44_0",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Experimental::Rendering::XRPass*>(), ::i2c::type_of<::UnityEngine::XR::XRDisplaySubsystem_XRRenderPass>(),
                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Experimental::Rendering::XRSystem___c__DisplayClass44_0>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, xrPass, renderPass, renderParamIndex, _cordl_fixed_empty_name_whitespace);
}
// Ctor Parameters []
constexpr ::UnityEngine::Experimental::Rendering::XRSystem::XRSystem() {}
