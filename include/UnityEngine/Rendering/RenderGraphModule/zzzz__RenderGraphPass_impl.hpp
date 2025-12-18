#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/RenderGraphPass.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraphPassType_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__ResourceHandle_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureAccess_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraphPass_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__AccessFlags_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__DepthAccess_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__InternalRenderGraphContext_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraphObjectPool_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraphPassType_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraphPass_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraphResourceRegistry_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RendererListHandle_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__ResourceHandle_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureAccess_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__HashFNV1A32_def.hpp"
#include "UnityEngine/Rendering/zzzz__ProfilingSampler_def.hpp"
// Ctor Parameters [CppParam { name: "h", ty: "::UnityEngine::Rendering::RenderGraphModule::ResourceHandle", modifiers: "", def_value: Some("{}") }, CppParam { name: "preserveCounterValue", ty:
// "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass_RandomWriteResourceInfo::RenderGraphPass_RandomWriteResourceInfo(::UnityEngine::Rendering::RenderGraphModule::ResourceHandle h,
                                                                                                                                        bool preserveCounterValue) noexcept {
  this->h = h;
  this->preserveCounterValue = preserveCounterValue;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass_RandomWriteResourceInfo::RenderGraphPass_RandomWriteResourceInfo() {}
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)(
    ::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::Execute)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.Release
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool*)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::Release)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.HasRenderFunc
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::HasRenderFunc)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.GetRenderFuncHash
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::GetRenderFuncHash)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.get_name
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::get_name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x662a028;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "get_name",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.set_name
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)(::StringW)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::set_name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x662a030;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "set_name",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.get_index
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::get_index)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x662a038;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "get_index",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.set_index
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)(int32_t)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::set_index)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x662a040;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "set_index",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.get_type
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPassType (
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)()>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::get_type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x662a048;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "get_type",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.set_type
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPassType)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::set_type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x662a050;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "set_type", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPassType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.get_customSampler
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::ProfilingSampler* (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::get_customSampler)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x662a058;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "get_customSampler",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.set_customSampler
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)(::UnityEngine::Rendering::ProfilingSampler*)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::set_customSampler)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x662a060;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "set_customSampler", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProfilingSampler*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.get_enableAsyncCompute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::get_enableAsyncCompute)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x662a068;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "get_enableAsyncCompute",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.set_enableAsyncCompute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)(bool)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::set_enableAsyncCompute)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x662a070;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "set_enableAsyncCompute",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.get_allowPassCulling
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::get_allowPassCulling)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x662a078;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "get_allowPassCulling",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.set_allowPassCulling
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)(bool)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::set_allowPassCulling)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x662a080;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "set_allowPassCulling",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.get_allowGlobalState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::get_allowGlobalState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x662a088;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "get_allowGlobalState",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.set_allowGlobalState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)(bool)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::set_allowGlobalState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x662a090;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "set_allowGlobalState",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.get_enableFoveatedRasterization
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::get_enableFoveatedRasterization)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x662a098;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>::get(),
                                                 "get_enableFoveatedRasterization", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.set_enableFoveatedRasterization
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)(bool)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::set_enableFoveatedRasterization)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x662a0a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "set_enableFoveatedRasterization",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.get_depthAccess
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::RenderGraphModule::TextureAccess (
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)()>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::get_depthAccess)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x662a0a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "get_depthAccess",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.set_depthAccess
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)(
    ::UnityEngine::Rendering::RenderGraphModule::TextureAccess)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::set_depthAccess)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x662a0bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "set_depthAccess", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::TextureAccess>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.get_colorBufferAccess
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureAccess, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureAccess>*> (
        ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)()>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::get_colorBufferAccess)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x662a0d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "get_colorBufferAccess",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.set_colorBufferAccess
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)(
    ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureAccess, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureAccess>*>)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::set_colorBufferAccess)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x662a0e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "set_colorBufferAccess", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
            ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureAccess, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureAccess>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.get_colorBufferMaxIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::get_colorBufferMaxIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x662a0e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>::get(),
                                                 "get_colorBufferMaxIndex", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.set_colorBufferMaxIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)(int32_t)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::set_colorBufferMaxIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x662a0f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "set_colorBufferMaxIndex",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.get_fragmentInputAccess
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureAccess, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureAccess>*> (
        ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)()>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::get_fragmentInputAccess)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x662a0f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>::get(),
                                                 "get_fragmentInputAccess", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.set_fragmentInputAccess
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)(
    ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureAccess, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureAccess>*>)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::set_fragmentInputAccess)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x662a100;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "set_fragmentInputAccess",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                        ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureAccess, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureAccess>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.get_fragmentInputMaxIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::get_fragmentInputMaxIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x662a108;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>::get(),
                                                 "get_fragmentInputMaxIndex", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.set_fragmentInputMaxIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)(int32_t)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::set_fragmentInputMaxIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x662a110;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "set_fragmentInputMaxIndex",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.get_randomAccessResource
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass_RandomWriteResourceInfo, ::Array<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass_RandomWriteResourceInfo>*> (
        ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)()>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::get_randomAccessResource)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x662a118;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>::get(),
                                                 "get_randomAccessResource", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.set_randomAccessResource
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)(
    ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass_RandomWriteResourceInfo, ::Array<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass_RandomWriteResourceInfo>*>)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::set_randomAccessResource)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x662a120;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "set_randomAccessResource",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass_RandomWriteResourceInfo,
                                                                           ::Array<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass_RandomWriteResourceInfo>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.get_randomAccessResourceMaxIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::get_randomAccessResourceMaxIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x662a128;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>::get(),
                                                 "get_randomAccessResourceMaxIndex", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.set_randomAccessResourceMaxIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)(int32_t)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::set_randomAccessResourceMaxIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x662a130;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "set_randomAccessResourceMaxIndex",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.get_generateDebugData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::get_generateDebugData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x662a138;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "get_generateDebugData",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.set_generateDebugData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)(bool)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::set_generateDebugData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x662a140;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "set_generateDebugData",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.get_allowRendererListCulling
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::get_allowRendererListCulling)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x662a148;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>::get(),
                                                 "get_allowRendererListCulling", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.set_allowRendererListCulling
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)(bool)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::set_allowRendererListCulling)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x662a150;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "set_allowRendererListCulling",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::_ctor)> {
  constexpr static std::size_t size = 0x30c;
  constexpr static std::size_t addrs = 0x662a158;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.Clear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::Clear)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x662a464;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "Clear",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.HasRenderAttachments
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::HasRenderAttachments)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x662a604;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "HasRenderAttachments",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.IsTransient
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)(
    ::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::IsTransient)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x662a800;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "IsTransient", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.IsWritten
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)(
    ::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::IsWritten)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x662a8f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "IsWritten", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.IsRead
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)(
    ::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::IsRead)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x662aa98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "IsRead", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.IsAttachment
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)(
    ::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::IsAttachment)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x662ad08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "IsAttachment", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.AddResourceWrite
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)(
    ::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::AddResourceWrite)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x662afa8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "AddResourceWrite", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.AddResourceRead
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)(
    ::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::AddResourceRead)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x662b0f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "AddResourceRead", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.AddTransientResource
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)(
    ::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::AddTransientResource)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x662b248;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "AddTransientResource", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.UseRendererList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)(
    ::ByRef<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::UseRendererList)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x662b398;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "UseRendererList", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.EnableAsyncCompute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)(bool)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::EnableAsyncCompute)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x662b45c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "EnableAsyncCompute",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.AllowPassCulling
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)(bool)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::AllowPassCulling)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x662b464;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "AllowPassCulling",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.EnableFoveatedRasterization
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)(bool)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::EnableFoveatedRasterization)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x662b46c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "EnableFoveatedRasterization",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.AllowRendererListCulling
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)(bool)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::AllowRendererListCulling)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x662b474;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "AllowRendererListCulling",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.AllowGlobalState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)(bool)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::AllowGlobalState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x662b47c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "AllowGlobalState",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.GenerateDebugData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)(bool)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::GenerateDebugData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x662b484;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "GenerateDebugData",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.SetColorBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)(
    ::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>, int32_t)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::SetColorBuffer)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x662b48c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "SetColorBuffer", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.SetColorBufferRaw
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)(
    ::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>, int32_t, ::UnityEngine::Rendering::RenderGraphModule::AccessFlags, int32_t, int32_t)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::SetColorBufferRaw)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x662b538;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "SetColorBufferRaw", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::AccessFlags>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.SetFragmentInputRaw
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)(
    ::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>, int32_t, ::UnityEngine::Rendering::RenderGraphModule::AccessFlags, int32_t, int32_t)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::SetFragmentInputRaw)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x662b7d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "SetFragmentInputRaw", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::AccessFlags>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.SetRandomWriteResourceRaw
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)(
    ::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>, int32_t, bool, ::UnityEngine::Rendering::RenderGraphModule::AccessFlags)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::SetRandomWriteResourceRaw)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x662ba68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "SetRandomWriteResourceRaw",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::AccessFlags>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.SetDepthBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)(
    ::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>, ::UnityEngine::Rendering::RenderGraphModule::DepthAccess)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::SetDepthBuffer)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x662bcc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "SetDepthBuffer", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::DepthAccess>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.SetDepthBufferRaw
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)(
    ::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>, ::UnityEngine::Rendering::RenderGraphModule::AccessFlags, int32_t, int32_t)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::SetDepthBufferRaw)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x662bd34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "SetDepthBufferRaw", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::AccessFlags>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.ComputeTextureHash
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)(
    ::ByRef<::UnityEngine::Rendering::HashFNV1A32>, ::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>, ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::ComputeTextureHash)> {
  constexpr static std::size_t size = 0x4f8;
  constexpr static std::size_t addrs = 0x662bf0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "ComputeTextureHash", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::HashFNV1A32>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.ComputeHash
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)(
    ::ByRef<::UnityEngine::Rendering::HashFNV1A32>, ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::ComputeHash)> {
  constexpr static std::size_t size = 0x95c;
  constexpr static std::size_t addrs = 0x662c404;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "ComputeHash", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::HashFNV1A32>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.ComputeHashForTextureAccess
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ::ByRef<::UnityEngine::Rendering::HashFNV1A32>, ::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>, ::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureAccess>)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::ComputeHashForTextureAccess)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x662cd60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "ComputeHashForTextureAccess",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::HashFNV1A32>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureAccess>>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_get__name_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____name_k__BackingField;
}
constexpr ::StringW const& UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_get__name_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____name_k__BackingField;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_set__name_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____name_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_get__index_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____index_k__BackingField;
}
constexpr int32_t const& UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_get__index_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____index_k__BackingField;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_set__index_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____index_k__BackingField = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPassType& UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_get__type_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____type_k__BackingField;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPassType const& UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_get__type_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____type_k__BackingField;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_set__type_k__BackingField(::UnityEngine::Rendering::RenderGraphModule::RenderGraphPassType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____type_k__BackingField = value;
}
constexpr ::UnityEngine::Rendering::ProfilingSampler*& UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_get__customSampler_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____customSampler_k__BackingField;
}
constexpr ::UnityEngine::Rendering::ProfilingSampler* const& UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_get__customSampler_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____customSampler_k__BackingField;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_set__customSampler_k__BackingField(::UnityEngine::Rendering::ProfilingSampler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____customSampler_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_get__enableAsyncCompute_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____enableAsyncCompute_k__BackingField;
}
constexpr bool const& UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_get__enableAsyncCompute_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____enableAsyncCompute_k__BackingField;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_set__enableAsyncCompute_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____enableAsyncCompute_k__BackingField = value;
}
constexpr bool& UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_get__allowPassCulling_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allowPassCulling_k__BackingField;
}
constexpr bool const& UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_get__allowPassCulling_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allowPassCulling_k__BackingField;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_set__allowPassCulling_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____allowPassCulling_k__BackingField = value;
}
constexpr bool& UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_get__allowGlobalState_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allowGlobalState_k__BackingField;
}
constexpr bool const& UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_get__allowGlobalState_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allowGlobalState_k__BackingField;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_set__allowGlobalState_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____allowGlobalState_k__BackingField = value;
}
constexpr bool& UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_get__enableFoveatedRasterization_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____enableFoveatedRasterization_k__BackingField;
}
constexpr bool const& UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_get__enableFoveatedRasterization_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____enableFoveatedRasterization_k__BackingField;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_set__enableFoveatedRasterization_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____enableFoveatedRasterization_k__BackingField = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureAccess& UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_get__depthAccess_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____depthAccess_k__BackingField;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureAccess const& UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_get__depthAccess_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____depthAccess_k__BackingField;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_set__depthAccess_k__BackingField(::UnityEngine::Rendering::RenderGraphModule::TextureAccess value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____depthAccess_k__BackingField = value;
}
constexpr ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureAccess, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureAccess>*>&
UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_get__colorBufferAccess_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorBufferAccess_k__BackingField;
}
constexpr ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureAccess, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureAccess>*> const&
UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_get__colorBufferAccess_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorBufferAccess_k__BackingField;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_set__colorBufferAccess_k__BackingField(
    ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureAccess, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureAccess>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____colorBufferAccess_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_get__colorBufferMaxIndex_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorBufferMaxIndex_k__BackingField;
}
constexpr int32_t const& UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_get__colorBufferMaxIndex_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorBufferMaxIndex_k__BackingField;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_set__colorBufferMaxIndex_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____colorBufferMaxIndex_k__BackingField = value;
}
constexpr ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureAccess, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureAccess>*>&
UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_get__fragmentInputAccess_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fragmentInputAccess_k__BackingField;
}
constexpr ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureAccess, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureAccess>*> const&
UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_get__fragmentInputAccess_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fragmentInputAccess_k__BackingField;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_set__fragmentInputAccess_k__BackingField(
    ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureAccess, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureAccess>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____fragmentInputAccess_k__BackingField)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_get__fragmentInputMaxIndex_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fragmentInputMaxIndex_k__BackingField;
}
constexpr int32_t const& UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_get__fragmentInputMaxIndex_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fragmentInputMaxIndex_k__BackingField;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_set__fragmentInputMaxIndex_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fragmentInputMaxIndex_k__BackingField = value;
}
constexpr ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass_RandomWriteResourceInfo,
                   ::Array<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass_RandomWriteResourceInfo>*>&
UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_get__randomAccessResource_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____randomAccessResource_k__BackingField;
}
constexpr ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass_RandomWriteResourceInfo,
                   ::Array<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass_RandomWriteResourceInfo>*> const&
UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_get__randomAccessResource_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____randomAccessResource_k__BackingField;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_set__randomAccessResource_k__BackingField(
    ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass_RandomWriteResourceInfo, ::Array<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass_RandomWriteResourceInfo>*>
        value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____randomAccessResource_k__BackingField)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_get__randomAccessResourceMaxIndex_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____randomAccessResourceMaxIndex_k__BackingField;
}
constexpr int32_t const& UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_get__randomAccessResourceMaxIndex_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____randomAccessResourceMaxIndex_k__BackingField;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_set__randomAccessResourceMaxIndex_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____randomAccessResourceMaxIndex_k__BackingField = value;
}
constexpr bool& UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_get__generateDebugData_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____generateDebugData_k__BackingField;
}
constexpr bool const& UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_get__generateDebugData_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____generateDebugData_k__BackingField;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_set__generateDebugData_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____generateDebugData_k__BackingField = value;
}
constexpr bool& UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_get__allowRendererListCulling_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allowRendererListCulling_k__BackingField;
}
constexpr bool const& UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_get__allowRendererListCulling_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allowRendererListCulling_k__BackingField;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_set__allowRendererListCulling_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____allowRendererListCulling_k__BackingField = value;
}
constexpr ::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>*,
                   ::Array<::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>*>*>&
UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_get_resourceReadLists() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resourceReadLists;
}
constexpr ::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>*,
                   ::Array<::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>*>*> const&
UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_get_resourceReadLists() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resourceReadLists;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_set_resourceReadLists(
    ::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>*,
             ::Array<::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>*>*>
        value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___resourceReadLists)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>*,
                   ::Array<::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>*>*>&
UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_get_resourceWriteLists() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resourceWriteLists;
}
constexpr ::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>*,
                   ::Array<::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>*>*> const&
UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_get_resourceWriteLists() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resourceWriteLists;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_set_resourceWriteLists(
    ::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>*,
             ::Array<::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>*>*>
        value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___resourceWriteLists)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>*,
                   ::Array<::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>*>*>&
UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_get_transientResourceList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___transientResourceList;
}
constexpr ::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>*,
                   ::Array<::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>*>*> const&
UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_get_transientResourceList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___transientResourceList;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_set_transientResourceList(
    ::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>*,
             ::Array<::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>*>*>
        value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___transientResourceList)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>*&
UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_get_usedRendererListList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___usedRendererListList;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>* const&
UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_get_usedRendererListList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___usedRendererListList;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_set_usedRendererListList(
    ::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___usedRendererListList)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Rendering::RenderGraphModule::TextureHandle, int32_t>>*&
UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_get_setGlobalsList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___setGlobalsList;
}
constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Rendering::RenderGraphModule::TextureHandle, int32_t>>* const&
UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_get_setGlobalsList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___setGlobalsList;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_set_setGlobalsList(
    ::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Rendering::RenderGraphModule::TextureHandle, int32_t>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___setGlobalsList)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_get_useAllGlobalTextures() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useAllGlobalTextures;
}
constexpr bool const& UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_get_useAllGlobalTextures() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useAllGlobalTextures;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_set_useAllGlobalTextures(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___useAllGlobalTextures = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>*&
UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_get_implicitReadsList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___implicitReadsList;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>* const&
UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_get_implicitReadsList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___implicitReadsList;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_set_implicitReadsList(
    ::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___implicitReadsList)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::Execute(::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext* renderGraphContext) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, renderGraphContext);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::Release(::UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool* pool) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pool);
}
inline bool UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::HasRenderFunc() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::GetRenderFuncHash() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::StringW UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::get_name() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "get_name",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::set_name(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "set_name",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::get_index() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "get_index",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::set_index(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "set_index",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPassType UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::get_type() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "get_type",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPassType, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::set_type(::UnityEngine::Rendering::RenderGraphModule::RenderGraphPassType value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "set_type", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPassType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::ProfilingSampler* UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::get_customSampler() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "get_customSampler",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::ProfilingSampler*, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::set_customSampler(::UnityEngine::Rendering::ProfilingSampler* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "set_customSampler", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProfilingSampler*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::get_enableAsyncCompute() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "get_enableAsyncCompute",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::set_enableAsyncCompute(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "set_enableAsyncCompute",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::get_allowPassCulling() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "get_allowPassCulling",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::set_allowPassCulling(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "set_allowPassCulling",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::get_allowGlobalState() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "get_allowGlobalState",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::set_allowGlobalState(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "set_allowGlobalState",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::get_enableFoveatedRasterization() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>::get(),
                                               "get_enableFoveatedRasterization", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::set_enableFoveatedRasterization(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "set_enableFoveatedRasterization",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::RenderGraphModule::TextureAccess UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::get_depthAccess() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "get_depthAccess",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::TextureAccess, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::set_depthAccess(::UnityEngine::Rendering::RenderGraphModule::TextureAccess value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "set_depthAccess", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::TextureAccess>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureAccess, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureAccess>*>
UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::get_colorBufferAccess() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "get_colorBufferAccess",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureAccess, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureAccess>*>, false>(
      this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::set_colorBufferAccess(
    ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureAccess, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureAccess>*> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "set_colorBufferAccess", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureAccess, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureAccess>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::get_colorBufferMaxIndex() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "get_colorBufferMaxIndex",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::set_colorBufferMaxIndex(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "set_colorBufferMaxIndex",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureAccess, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureAccess>*>
UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::get_fragmentInputAccess() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "get_fragmentInputAccess",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureAccess, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureAccess>*>, false>(
      this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::set_fragmentInputAccess(
    ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureAccess, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureAccess>*> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "set_fragmentInputAccess", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureAccess, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureAccess>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::get_fragmentInputMaxIndex() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>::get(),
                                               "get_fragmentInputMaxIndex", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::set_fragmentInputMaxIndex(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "set_fragmentInputMaxIndex",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass_RandomWriteResourceInfo, ::Array<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass_RandomWriteResourceInfo>*>
UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::get_randomAccessResource() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "get_randomAccessResource",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<
      ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass_RandomWriteResourceInfo, ::Array<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass_RandomWriteResourceInfo>*>,
      false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::set_randomAccessResource(
    ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass_RandomWriteResourceInfo, ::Array<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass_RandomWriteResourceInfo>*>
        value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "set_randomAccessResource",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass_RandomWriteResourceInfo,
                                                                         ::Array<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass_RandomWriteResourceInfo>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::get_randomAccessResourceMaxIndex() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>::get(),
                                               "get_randomAccessResourceMaxIndex", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::set_randomAccessResourceMaxIndex(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "set_randomAccessResourceMaxIndex",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::get_generateDebugData() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "get_generateDebugData",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::set_generateDebugData(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "set_generateDebugData",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::get_allowRendererListCulling() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>::get(),
                                               "get_allowRendererListCulling", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::set_allowRendererListCulling(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "set_allowRendererListCulling",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::Clear() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "Clear",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::HasRenderAttachments() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "HasRenderAttachments",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::IsTransient(::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle> res) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "IsTransient", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, res);
}
inline bool UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::IsWritten(::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle> res) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "IsWritten", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, res);
}
inline bool UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::IsRead(::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle> res) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "IsRead", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, res);
}
inline bool UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::IsAttachment(::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> res) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "IsAttachment", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, res);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::AddResourceWrite(::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle> res) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "AddResourceWrite", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, res);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::AddResourceRead(::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle> res) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "AddResourceRead", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, res);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::AddTransientResource(::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle> res) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "AddTransientResource", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, res);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::UseRendererList(::ByRef<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle> rendererList) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "UseRendererList", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rendererList);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::EnableAsyncCompute(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "EnableAsyncCompute",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::AllowPassCulling(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "AllowPassCulling",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::EnableFoveatedRasterization(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "EnableFoveatedRasterization",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::AllowRendererListCulling(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "AllowRendererListCulling",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::AllowGlobalState(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "AllowGlobalState",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::GenerateDebugData(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "GenerateDebugData",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::SetColorBuffer(::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> resource, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "SetColorBuffer", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, resource, index);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::SetColorBufferRaw(::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> resource, int32_t index,
                                                                                          ::UnityEngine::Rendering::RenderGraphModule::AccessFlags accessFlags, int32_t mipLevel, int32_t depthSlice) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "SetColorBufferRaw", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::AccessFlags>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, resource, index, accessFlags, mipLevel, depthSlice);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::SetFragmentInputRaw(::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> resource, int32_t index,
                                                                                            ::UnityEngine::Rendering::RenderGraphModule::AccessFlags accessFlags, int32_t mipLevel,
                                                                                            int32_t depthSlice) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "SetFragmentInputRaw", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::AccessFlags>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, resource, index, accessFlags, mipLevel, depthSlice);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::SetRandomWriteResourceRaw(::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle> resource, int32_t index,
                                                                                                  bool preserveCounterValue, ::UnityEngine::Rendering::RenderGraphModule::AccessFlags accessFlags) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "SetRandomWriteResourceRaw",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::AccessFlags>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, resource, index, preserveCounterValue, accessFlags);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::SetDepthBuffer(::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> resource,
                                                                                       ::UnityEngine::Rendering::RenderGraphModule::DepthAccess flags) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "SetDepthBuffer", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::DepthAccess>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, resource, flags);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::SetDepthBufferRaw(::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> resource,
                                                                                          ::UnityEngine::Rendering::RenderGraphModule::AccessFlags accessFlags, int32_t mipLevel, int32_t depthSlice) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "SetDepthBufferRaw", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::AccessFlags>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, resource, accessFlags, mipLevel, depthSlice);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::ComputeTextureHash(::ByRef<::UnityEngine::Rendering::HashFNV1A32> generator,
                                                                                           ::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle> handle,
                                                                                           ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry* resources) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "ComputeTextureHash", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::HashFNV1A32>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, generator, handle, resources);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::ComputeHash(::ByRef<::UnityEngine::Rendering::HashFNV1A32> generator,
                                                                                    ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry* resources) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "ComputeHash", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::HashFNV1A32>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, generator, resources);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::ComputeHashForTextureAccess(::ByRef<::UnityEngine::Rendering::HashFNV1A32> generator,
                                                                                                    ::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle> handle,
                                                                                                    ::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureAccess> textureAccess) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>::get(), "ComputeHashForTextureAccess",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::HashFNV1A32>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureAccess>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, generator, handle, textureAccess);
}
inline ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass* UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::RenderGraphPass() {}
