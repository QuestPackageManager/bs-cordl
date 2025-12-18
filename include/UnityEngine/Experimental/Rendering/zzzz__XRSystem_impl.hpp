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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Il2CppObject* (*)()>(&::UnityEngine::Experimental::Rendering::XRSystem::GetActiveDisplay)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6593a6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRSystem*>::get(),
                                                                               "GetActiveDisplay", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRSystem.get_displayActive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::UnityEngine::Experimental::Rendering::XRSystem::get_displayActive)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x658f210;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRSystem*>::get(),
                                                                               "get_displayActive", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRSystem.get_isHDRDisplayOutputActive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::UnityEngine::Experimental::Rendering::XRSystem::get_isHDRDisplayOutputActive)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6593ac8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRSystem*>::get(),
                                                                               "get_isHDRDisplayOutputActive", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRSystem.get_singlePassAllowed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::UnityEngine::Experimental::Rendering::XRSystem::get_singlePassAllowed)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6593b70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRSystem*>::get(),
                                                                               "get_singlePassAllowed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRSystem.set_singlePassAllowed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::UnityEngine::Experimental::Rendering::XRSystem::set_singlePassAllowed)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6593bcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRSystem*>::get(), "set_singlePassAllowed",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRSystem.get_foveatedRenderingCaps
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::FoveatedRenderingCaps (*)()>(
    &::UnityEngine::Experimental::Rendering::XRSystem::get_foveatedRenderingCaps)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6593c30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRSystem*>::get(),
                                                                               "get_foveatedRenderingCaps", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRSystem.set_foveatedRenderingCaps
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Rendering::FoveatedRenderingCaps)>(
    &::UnityEngine::Experimental::Rendering::XRSystem::set_foveatedRenderingCaps)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6593c8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRSystem*>::get(), "set_foveatedRenderingCaps", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::FoveatedRenderingCaps>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRSystem.get_dumpDebugInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::UnityEngine::Experimental::Rendering::XRSystem::get_dumpDebugInfo)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6593cec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRSystem*>::get(),
                                                                               "get_dumpDebugInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRSystem.set_dumpDebugInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::UnityEngine::Experimental::Rendering::XRSystem::set_dumpDebugInfo)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6593d48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRSystem*>::get(), "set_dumpDebugInfo",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRSystem.Initialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::System::Func_2<::UnityEngine::Experimental::Rendering::XRPassCreateInfo, ::UnityEngine::Experimental::Rendering::XRPass*>*, ::UnityEngine::Shader*, ::UnityEngine::Shader*)>(
        &::UnityEngine::Experimental::Rendering::XRSystem::Initialize)> {
  constexpr static std::size_t size = 0x440;
  constexpr static std::size_t addrs = 0x6593dac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRSystem*>::get(), "Initialize", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::UnityEngine::Experimental::Rendering::XRPassCreateInfo, ::UnityEngine::Experimental::Rendering::XRPass*>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Shader*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Shader*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRSystem.SetDisplayMSAASamples
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Rendering::MSAASamples)>(
    &::UnityEngine::Experimental::Rendering::XRSystem::SetDisplayMSAASamples)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x6594504;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRSystem*>::get(), "SetDisplayMSAASamples", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::MSAASamples>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRSystem.GetDisplayMSAASamples
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::MSAASamples (*)()>(
    &::UnityEngine::Experimental::Rendering::XRSystem::GetDisplayMSAASamples)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x65946dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRSystem*>::get(),
                                                                               "GetDisplayMSAASamples", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRSystem.SetOcclusionMeshScale
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(float_t)>(&::UnityEngine::Experimental::Rendering::XRSystem::SetOcclusionMeshScale)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6594738;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRSystem*>::get(), "SetOcclusionMeshScale",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRSystem.GetOcclusionMeshScale
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)()>(&::UnityEngine::Experimental::Rendering::XRSystem::GetOcclusionMeshScale)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x65947a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRSystem*>::get(),
                                                                               "GetOcclusionMeshScale", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRSystem.SetMirrorViewMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t)>(&::UnityEngine::Experimental::Rendering::XRSystem::SetMirrorViewMode)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x65947fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRSystem*>::get(), "SetMirrorViewMode",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRSystem.GetMirrorViewMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&::UnityEngine::Experimental::Rendering::XRSystem::GetMirrorViewMode)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6594898;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRSystem*>::get(),
                                                                               "GetMirrorViewMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRSystem.SetRenderScale
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(float_t)>(&::UnityEngine::Experimental::Rendering::XRSystem::SetRenderScale)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x6594930;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRSystem*>::get(), "SetRenderScale",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRSystem.GetRenderViewportScale
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)()>(&::UnityEngine::Experimental::Rendering::XRSystem::GetRenderViewportScale)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6594ad0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRSystem*>::get(),
                                                                               "GetRenderViewportScale", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRSystem.NewLayout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Experimental::Rendering::XRLayout* (*)()>(
    &::UnityEngine::Experimental::Rendering::XRSystem::NewLayout)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6594b38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRSystem*>::get(),
                                                                               "NewLayout", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRSystem.EndLayout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::Experimental::Rendering::XRSystem::EndLayout)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x6594ba0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRSystem*>::get(),
                                                                               "EndLayout", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRSystem.RenderMirrorView
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Camera*)>(
    &::UnityEngine::Experimental::Rendering::XRSystem::RenderMirrorView)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6594c84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRSystem*>::get(), "RenderMirrorView", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRSystem.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::Experimental::Rendering::XRSystem::Dispose)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x6594d30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRSystem*>::get(),
                                                                               "Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRSystem.SetDisplayZRange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(float_t, float_t)>(&::UnityEngine::Experimental::Rendering::XRSystem::SetDisplayZRange)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x658f2ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRSystem*>::get(), "SetDisplayZRange", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRSystem.SetLayoutOverride
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_2<::UnityEngine::Experimental::Rendering::XRLayout*, ::UnityW<::UnityEngine::Camera>>*)>(
    &::UnityEngine::Experimental::Rendering::XRSystem::SetLayoutOverride)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6594ec0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRSystem*>::get(), "SetLayoutOverride", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityEngine::Experimental::Rendering::XRLayout*, ::UnityW<::UnityEngine::Camera>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRSystem.XRSystemInit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::Experimental::Rendering::XRSystem::XRSystemInit)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x6594f20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRSystem*>::get(),
                                                                               "XRSystemInit", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRSystem.RefreshDeviceInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::Experimental::Rendering::XRSystem::RefreshDeviceInfo)> {
  constexpr static std::size_t size = 0x318;
  constexpr static std::size_t addrs = 0x65941ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRSystem*>::get(),
                                                                               "RefreshDeviceInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRSystem.CreateDefaultLayout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Camera*, ::UnityEngine::Experimental::Rendering::XRLayout*)>(
    &::UnityEngine::Experimental::Rendering::XRSystem::CreateDefaultLayout)> {
  constexpr static std::size_t size = 0x4cc;
  constexpr static std::size_t addrs = 0x658f374;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRSystem*>::get(), "CreateDefaultLayout", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::XRLayout*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRSystem.ReconfigurePass
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Experimental::Rendering::XRPass*, ::UnityEngine::Camera*)>(
    &::UnityEngine::Experimental::Rendering::XRSystem::ReconfigurePass)> {
  constexpr static std::size_t size = 0x2a4;
  constexpr static std::size_t addrs = 0x658f9bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRSystem*>::get(), "ReconfigurePass", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::XRPass*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRSystem.CanUseSinglePass
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Camera*, ::UnityEngine::XR::XRDisplaySubsystem_XRRenderPass)>(
    &::UnityEngine::Experimental::Rendering::XRSystem::CanUseSinglePass)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x6594ff0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRSystem*>::get(), "CanUseSinglePass", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRDisplaySubsystem_XRRenderPass>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRSystem.BuildView
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Experimental::Rendering::XRView (*)(
    ::UnityEngine::XR::XRDisplaySubsystem_XRRenderPass, ::UnityEngine::XR::XRDisplaySubsystem_XRRenderParameter)>(&::UnityEngine::Experimental::Rendering::XRSystem::BuildView)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x65954f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRSystem*>::get(), "BuildView", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRDisplaySubsystem_XRRenderPass>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRDisplaySubsystem_XRRenderParameter>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRSystem.XrRenderTextureDescToUnityRenderTextureDesc
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::RenderTextureDescriptor (*)(::UnityEngine::RenderTextureDescriptor)>(
    &::UnityEngine::Experimental::Rendering::XRSystem::XrRenderTextureDescToUnityRenderTextureDesc)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x65956bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRSystem*>::get(), "XrRenderTextureDescToUnityRenderTextureDesc",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTextureDescriptor>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRSystem.BuildPass
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Experimental::Rendering::XRPassCreateInfo (*)(
    ::UnityEngine::XR::XRDisplaySubsystem_XRRenderPass, ::UnityEngine::Rendering::ScriptableCullingParameters, ::UnityEngine::Experimental::Rendering::XRLayout*)>(
    &::UnityEngine::Experimental::Rendering::XRSystem::BuildPass)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x6595160;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRSystem*>::get(), "BuildPass", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRDisplaySubsystem_XRRenderPass>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ScriptableCullingParameters>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::XRLayout*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRSystem._CreateDefaultLayout_g__AddViewToPass_44_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Experimental::Rendering::XRPass*, ::UnityEngine::XR::XRDisplaySubsystem_XRRenderPass, int32_t,
                                                                                           ::ByRef<::UnityEngine::Experimental::Rendering::XRSystem___c__DisplayClass44_0>)>(
    &::UnityEngine::Experimental::Rendering::XRSystem::_CreateDefaultLayout_g__AddViewToPass_44_0)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x6595400;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRSystem*>::get(), "<CreateDefaultLayout>g__AddViewToPass|44_0",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::XRPass*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRDisplaySubsystem_XRRenderPass>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Experimental::Rendering::XRSystem___c__DisplayClass44_0>>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Experimental::Rendering::XRSystem::setStaticF_s_Layout(::UnityEngine::Experimental::Rendering::XRLayoutStack* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Experimental::Rendering::XRLayoutStack*, "s_Layout",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRSystem*>::get>(
      std::forward<::UnityEngine::Experimental::Rendering::XRLayoutStack*>(value));
}
inline ::UnityEngine::Experimental::Rendering::XRLayoutStack* UnityEngine::Experimental::Rendering::XRSystem::getStaticF_s_Layout() {
  return ::cordl_internals::getStaticField<::UnityEngine::Experimental::Rendering::XRLayoutStack*, "s_Layout",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRSystem*>::get>();
}
inline void UnityEngine::Experimental::Rendering::XRSystem::setStaticF_s_PassAllocator(
    ::System::Func_2<::UnityEngine::Experimental::Rendering::XRPassCreateInfo, ::UnityEngine::Experimental::Rendering::XRPass*>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::Experimental::Rendering::XRPassCreateInfo, ::UnityEngine::Experimental::Rendering::XRPass*>*, "s_PassAllocator",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRSystem*>::get>(
      std::forward<::System::Func_2<::UnityEngine::Experimental::Rendering::XRPassCreateInfo, ::UnityEngine::Experimental::Rendering::XRPass*>*>(value));
}
inline ::System::Func_2<::UnityEngine::Experimental::Rendering::XRPassCreateInfo, ::UnityEngine::Experimental::Rendering::XRPass*>*
UnityEngine::Experimental::Rendering::XRSystem::getStaticF_s_PassAllocator() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::Experimental::Rendering::XRPassCreateInfo, ::UnityEngine::Experimental::Rendering::XRPass*>*, "s_PassAllocator",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRSystem*>::get>();
}
inline void UnityEngine::Experimental::Rendering::XRSystem::setStaticF_s_DisplayList(::System::Collections::Generic::List_1<Il2CppObject*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<Il2CppObject*>*, "s_DisplayList",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRSystem*>::get>(
      std::forward<::System::Collections::Generic::List_1<Il2CppObject*>*>(value));
}
inline ::System::Collections::Generic::List_1<Il2CppObject*>* UnityEngine::Experimental::Rendering::XRSystem::getStaticF_s_DisplayList() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<Il2CppObject*>*, "s_DisplayList",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRSystem*>::get>();
}
inline void UnityEngine::Experimental::Rendering::XRSystem::setStaticF_s_Display(Il2CppObject* value) {
  ::cordl_internals::setStaticField<Il2CppObject*, "s_Display", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRSystem*>::get>(
      std::forward<Il2CppObject*>(value));
}
inline Il2CppObject* UnityEngine::Experimental::Rendering::XRSystem::getStaticF_s_Display() {
  return ::cordl_internals::getStaticField<Il2CppObject*, "s_Display", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRSystem*>::get>();
}
inline void UnityEngine::Experimental::Rendering::XRSystem::setStaticF_s_MSAASamples(::UnityEngine::Rendering::MSAASamples value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::MSAASamples, "s_MSAASamples",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRSystem*>::get>(
      std::forward<::UnityEngine::Rendering::MSAASamples>(value));
}
inline ::UnityEngine::Rendering::MSAASamples UnityEngine::Experimental::Rendering::XRSystem::getStaticF_s_MSAASamples() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::MSAASamples, "s_MSAASamples",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRSystem*>::get>();
}
inline void UnityEngine::Experimental::Rendering::XRSystem::setStaticF_s_OcclusionMeshScaling(float_t value) {
  ::cordl_internals::setStaticField<float_t, "s_OcclusionMeshScaling", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRSystem*>::get>(
      std::forward<float_t>(value));
}
inline float_t UnityEngine::Experimental::Rendering::XRSystem::getStaticF_s_OcclusionMeshScaling() {
  return ::cordl_internals::getStaticField<float_t, "s_OcclusionMeshScaling", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRSystem*>::get>();
}
inline void UnityEngine::Experimental::Rendering::XRSystem::setStaticF_s_OcclusionMeshMaterial(::UnityW<::UnityEngine::Material> value) {
  ::cordl_internals::setStaticField<::UnityW<::UnityEngine::Material>, "s_OcclusionMeshMaterial",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRSystem*>::get>(
      std::forward<::UnityW<::UnityEngine::Material>>(value));
}
inline ::UnityW<::UnityEngine::Material> UnityEngine::Experimental::Rendering::XRSystem::getStaticF_s_OcclusionMeshMaterial() {
  return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Material>, "s_OcclusionMeshMaterial",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRSystem*>::get>();
}
inline void UnityEngine::Experimental::Rendering::XRSystem::setStaticF_s_MirrorViewMaterial(::UnityW<::UnityEngine::Material> value) {
  ::cordl_internals::setStaticField<::UnityW<::UnityEngine::Material>, "s_MirrorViewMaterial",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRSystem*>::get>(
      std::forward<::UnityW<::UnityEngine::Material>>(value));
}
inline ::UnityW<::UnityEngine::Material> UnityEngine::Experimental::Rendering::XRSystem::getStaticF_s_MirrorViewMaterial() {
  return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Material>, "s_MirrorViewMaterial",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRSystem*>::get>();
}
inline void UnityEngine::Experimental::Rendering::XRSystem::setStaticF_s_LayoutOverride(::System::Action_2<::UnityEngine::Experimental::Rendering::XRLayout*, ::UnityW<::UnityEngine::Camera>>* value) {
  ::cordl_internals::setStaticField<::System::Action_2<::UnityEngine::Experimental::Rendering::XRLayout*, ::UnityW<::UnityEngine::Camera>>*, "s_LayoutOverride",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRSystem*>::get>(
      std::forward<::System::Action_2<::UnityEngine::Experimental::Rendering::XRLayout*, ::UnityW<::UnityEngine::Camera>>*>(value));
}
inline ::System::Action_2<::UnityEngine::Experimental::Rendering::XRLayout*, ::UnityW<::UnityEngine::Camera>>* UnityEngine::Experimental::Rendering::XRSystem::getStaticF_s_LayoutOverride() {
  return ::cordl_internals::getStaticField<::System::Action_2<::UnityEngine::Experimental::Rendering::XRLayout*, ::UnityW<::UnityEngine::Camera>>*, "s_LayoutOverride",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRSystem*>::get>();
}
inline void UnityEngine::Experimental::Rendering::XRSystem::setStaticF_emptyPass(::UnityEngine::Experimental::Rendering::XRPass* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Experimental::Rendering::XRPass*, "emptyPass",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRSystem*>::get>(
      std::forward<::UnityEngine::Experimental::Rendering::XRPass*>(value));
}
inline ::UnityEngine::Experimental::Rendering::XRPass* UnityEngine::Experimental::Rendering::XRSystem::getStaticF_emptyPass() {
  return ::cordl_internals::getStaticField<::UnityEngine::Experimental::Rendering::XRPass*, "emptyPass",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRSystem*>::get>();
}
inline void UnityEngine::Experimental::Rendering::XRSystem::setStaticF__singlePassAllowed_k__BackingField(bool value) {
  ::cordl_internals::setStaticField<bool, "<singlePassAllowed>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRSystem*>::get>(
      std::forward<bool>(value));
}
inline bool UnityEngine::Experimental::Rendering::XRSystem::getStaticF__singlePassAllowed_k__BackingField() {
  return ::cordl_internals::getStaticField<bool, "<singlePassAllowed>k__BackingField",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRSystem*>::get>();
}
inline void UnityEngine::Experimental::Rendering::XRSystem::setStaticF__foveatedRenderingCaps_k__BackingField(::UnityEngine::Rendering::FoveatedRenderingCaps value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::FoveatedRenderingCaps, "<foveatedRenderingCaps>k__BackingField",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRSystem*>::get>(
      std::forward<::UnityEngine::Rendering::FoveatedRenderingCaps>(value));
}
inline ::UnityEngine::Rendering::FoveatedRenderingCaps UnityEngine::Experimental::Rendering::XRSystem::getStaticF__foveatedRenderingCaps_k__BackingField() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::FoveatedRenderingCaps, "<foveatedRenderingCaps>k__BackingField",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRSystem*>::get>();
}
inline void UnityEngine::Experimental::Rendering::XRSystem::setStaticF__dumpDebugInfo_k__BackingField(bool value) {
  ::cordl_internals::setStaticField<bool, "<dumpDebugInfo>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRSystem*>::get>(
      std::forward<bool>(value));
}
inline bool UnityEngine::Experimental::Rendering::XRSystem::getStaticF__dumpDebugInfo_k__BackingField() {
  return ::cordl_internals::getStaticField<bool, "<dumpDebugInfo>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRSystem*>::get>();
}
inline Il2CppObject* UnityEngine::Experimental::Rendering::XRSystem::GetActiveDisplay() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRSystem*>::get(),
                                                                             "GetActiveDisplay", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<Il2CppObject*, false>(nullptr, ___internal_method);
}
inline bool UnityEngine::Experimental::Rendering::XRSystem::get_displayActive() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRSystem*>::get(),
                                                                             "get_displayActive", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline bool UnityEngine::Experimental::Rendering::XRSystem::get_isHDRDisplayOutputActive() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRSystem*>::get(),
                                                                             "get_isHDRDisplayOutputActive", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline bool UnityEngine::Experimental::Rendering::XRSystem::get_singlePassAllowed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRSystem*>::get(),
                                                                             "get_singlePassAllowed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::XRSystem::set_singlePassAllowed(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRSystem*>::get(), "set_singlePassAllowed",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline ::UnityEngine::Rendering::FoveatedRenderingCaps UnityEngine::Experimental::Rendering::XRSystem::get_foveatedRenderingCaps() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRSystem*>::get(),
                                                                             "get_foveatedRenderingCaps", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::FoveatedRenderingCaps, false>(nullptr, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::XRSystem::set_foveatedRenderingCaps(::UnityEngine::Rendering::FoveatedRenderingCaps value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRSystem*>::get(), "set_foveatedRenderingCaps", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::FoveatedRenderingCaps>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline bool UnityEngine::Experimental::Rendering::XRSystem::get_dumpDebugInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRSystem*>::get(),
                                                                             "get_dumpDebugInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::XRSystem::set_dumpDebugInfo(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRSystem*>::get(), "set_dumpDebugInfo",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void
UnityEngine::Experimental::Rendering::XRSystem::Initialize(::System::Func_2<::UnityEngine::Experimental::Rendering::XRPassCreateInfo, ::UnityEngine::Experimental::Rendering::XRPass*>* passAllocator,
                                                           ::UnityEngine::Shader* occlusionMeshPS, ::UnityEngine::Shader* mirrorViewPS) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRSystem*>::get(), "Initialize", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::UnityEngine::Experimental::Rendering::XRPassCreateInfo, ::UnityEngine::Experimental::Rendering::XRPass*>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Shader*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Shader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, passAllocator, occlusionMeshPS, mirrorViewPS);
}
inline void UnityEngine::Experimental::Rendering::XRSystem::SetDisplayMSAASamples(::UnityEngine::Rendering::MSAASamples msaaSamples) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRSystem*>::get(), "SetDisplayMSAASamples", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::MSAASamples>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, msaaSamples);
}
inline ::UnityEngine::Rendering::MSAASamples UnityEngine::Experimental::Rendering::XRSystem::GetDisplayMSAASamples() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRSystem*>::get(),
                                                                             "GetDisplayMSAASamples", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::MSAASamples, false>(nullptr, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::XRSystem::SetOcclusionMeshScale(float_t occlusionMeshScale) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRSystem*>::get(), "SetOcclusionMeshScale",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, occlusionMeshScale);
}
inline float_t UnityEngine::Experimental::Rendering::XRSystem::GetOcclusionMeshScale() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRSystem*>::get(),
                                                                             "GetOcclusionMeshScale", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::XRSystem::SetMirrorViewMode(int32_t mirrorBlitMode) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRSystem*>::get(), "SetMirrorViewMode",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, mirrorBlitMode);
}
inline int32_t UnityEngine::Experimental::Rendering::XRSystem::GetMirrorViewMode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRSystem*>::get(),
                                                                             "GetMirrorViewMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::XRSystem::SetRenderScale(float_t renderScale) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRSystem*>::get(), "SetRenderScale",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, renderScale);
}
inline float_t UnityEngine::Experimental::Rendering::XRSystem::GetRenderViewportScale() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRSystem*>::get(),
                                                                             "GetRenderViewportScale", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method);
}
inline ::UnityEngine::Experimental::Rendering::XRLayout* UnityEngine::Experimental::Rendering::XRSystem::NewLayout() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRSystem*>::get(),
                                                                             "NewLayout", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::XRLayout*, false>(nullptr, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::XRSystem::EndLayout() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRSystem*>::get(),
                                                                             "EndLayout", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::XRSystem::RenderMirrorView(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Camera* camera) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRSystem*>::get(), "RenderMirrorView", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, cmd, camera);
}
inline void UnityEngine::Experimental::Rendering::XRSystem::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRSystem*>::get(),
                                                                             "Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::XRSystem::SetDisplayZRange(float_t zNear, float_t zFar) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRSystem*>::get(), "SetDisplayZRange", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, zNear, zFar);
}
inline void UnityEngine::Experimental::Rendering::XRSystem::SetLayoutOverride(::System::Action_2<::UnityEngine::Experimental::Rendering::XRLayout*, ::UnityW<::UnityEngine::Camera>>* action) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRSystem*>::get(), "SetLayoutOverride", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityEngine::Experimental::Rendering::XRLayout*, ::UnityW<::UnityEngine::Camera>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, action);
}
inline void UnityEngine::Experimental::Rendering::XRSystem::XRSystemInit() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRSystem*>::get(),
                                                                             "XRSystemInit", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::XRSystem::RefreshDeviceInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRSystem*>::get(),
                                                                             "RefreshDeviceInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::XRSystem::CreateDefaultLayout(::UnityEngine::Camera* camera, ::UnityEngine::Experimental::Rendering::XRLayout* layout) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRSystem*>::get(), "CreateDefaultLayout", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::XRLayout*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, camera, layout);
}
inline void UnityEngine::Experimental::Rendering::XRSystem::ReconfigurePass(::UnityEngine::Experimental::Rendering::XRPass* xrPass, ::UnityEngine::Camera* camera) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRSystem*>::get(), "ReconfigurePass", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::XRPass*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, xrPass, camera);
}
inline bool UnityEngine::Experimental::Rendering::XRSystem::CanUseSinglePass(::UnityEngine::Camera* camera, ::UnityEngine::XR::XRDisplaySubsystem_XRRenderPass renderPass) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRSystem*>::get(), "CanUseSinglePass", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRDisplaySubsystem_XRRenderPass>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, camera, renderPass);
}
inline ::UnityEngine::Experimental::Rendering::XRView UnityEngine::Experimental::Rendering::XRSystem::BuildView(::UnityEngine::XR::XRDisplaySubsystem_XRRenderPass renderPass,
                                                                                                                ::UnityEngine::XR::XRDisplaySubsystem_XRRenderParameter renderParameter) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRSystem*>::get(), "BuildView", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRDisplaySubsystem_XRRenderPass>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRDisplaySubsystem_XRRenderParameter>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::XRView, false>(nullptr, ___internal_method, renderPass, renderParameter);
}
inline ::UnityEngine::RenderTextureDescriptor UnityEngine::Experimental::Rendering::XRSystem::XrRenderTextureDescToUnityRenderTextureDesc(::UnityEngine::RenderTextureDescriptor xrDesc) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRSystem*>::get(), "XrRenderTextureDescToUnityRenderTextureDesc",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTextureDescriptor>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::RenderTextureDescriptor, false>(nullptr, ___internal_method, xrDesc);
}
inline ::UnityEngine::Experimental::Rendering::XRPassCreateInfo UnityEngine::Experimental::Rendering::XRSystem::BuildPass(::UnityEngine::XR::XRDisplaySubsystem_XRRenderPass xrRenderPass,
                                                                                                                          ::UnityEngine::Rendering::ScriptableCullingParameters cullingParameters,
                                                                                                                          ::UnityEngine::Experimental::Rendering::XRLayout* layout) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRSystem*>::get(), "BuildPass", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRDisplaySubsystem_XRRenderPass>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ScriptableCullingParameters>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::XRLayout*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::XRPassCreateInfo, false>(nullptr, ___internal_method, xrRenderPass, cullingParameters, layout);
}
inline void UnityEngine::Experimental::Rendering::XRSystem::_CreateDefaultLayout_g__AddViewToPass_44_0(
    ::UnityEngine::Experimental::Rendering::XRPass* xrPass, ::UnityEngine::XR::XRDisplaySubsystem_XRRenderPass renderPass, int32_t renderParamIndex,
    ::ByRef<::UnityEngine::Experimental::Rendering::XRSystem___c__DisplayClass44_0> _cordl_fixed_empty_name_whitespace) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRSystem*>::get(), "<CreateDefaultLayout>g__AddViewToPass|44_0",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::XRPass*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRDisplaySubsystem_XRRenderPass>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Experimental::Rendering::XRSystem___c__DisplayClass44_0>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, xrPass, renderPass, renderParamIndex, _cordl_fixed_empty_name_whitespace);
}
// Ctor Parameters []
constexpr ::UnityEngine::Experimental::Rendering::XRSystem::XRSystem() {}
