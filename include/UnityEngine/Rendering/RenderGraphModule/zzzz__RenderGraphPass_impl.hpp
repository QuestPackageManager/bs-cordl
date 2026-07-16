#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/RenderGraphPass.hpp"
#include "System/Collections/Generic/zzzz__List_1_impl.hpp"
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)(
    ::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::Execute)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.Release
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)(::UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool*)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::Release)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.HasRenderFunc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::HasRenderFunc)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.GetRenderFuncHash
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::GetRenderFuncHash)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.get_name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::get_name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67db978;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(), { "get_name", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.set_name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)(::StringW)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::set_name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67db980;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(), { "set_name", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.get_index
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::get_index)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67db988;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(), { "get_index", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.set_index
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)(int32_t)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::set_index)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67db990;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(), { "set_index", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.get_type
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPassType (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::get_type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67db998;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(), { "get_type", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.set_type
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)(::UnityEngine::Rendering::RenderGraphModule::RenderGraphPassType)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::set_type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67db9a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(),
                                                             { "set_type", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPassType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.get_customSampler
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::ProfilingSampler* (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::get_customSampler)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67db9a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(), { "get_customSampler", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.set_customSampler
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)(::UnityEngine::Rendering::ProfilingSampler*)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::set_customSampler)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67db9b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(),
                                                                                           { "set_customSampler", {}, { ::i2c::type_of<::UnityEngine::Rendering::ProfilingSampler*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.get_enableAsyncCompute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::get_enableAsyncCompute)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67db9b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(), { "get_enableAsyncCompute", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.set_enableAsyncCompute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)(bool)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::set_enableAsyncCompute)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67db9c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(), { "set_enableAsyncCompute", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.get_allowPassCulling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::get_allowPassCulling)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67db9c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(), { "get_allowPassCulling", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.set_allowPassCulling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)(bool)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::set_allowPassCulling)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67db9d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(), { "set_allowPassCulling", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.get_allowGlobalState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::get_allowGlobalState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67db9d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(), { "get_allowGlobalState", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.set_allowGlobalState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)(bool)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::set_allowGlobalState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67db9e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(), { "set_allowGlobalState", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.get_enableFoveatedRasterization
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::get_enableFoveatedRasterization)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67db9e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(), { "get_enableFoveatedRasterization", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.set_enableFoveatedRasterization
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)(bool)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::set_enableFoveatedRasterization)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67db9f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(), { "set_enableFoveatedRasterization", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.get_depthAccess
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::TextureAccess (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::get_depthAccess)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x67db9f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(), { "get_depthAccess", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.set_depthAccess
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)(::UnityEngine::Rendering::RenderGraphModule::TextureAccess)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::set_depthAccess)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x67dba0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(),
                                                             { "set_depthAccess", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureAccess>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.get_colorBufferAccess
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureAccess> (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::get_colorBufferAccess)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67dba28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(), { "get_colorBufferAccess", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.set_colorBufferAccess
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)(::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureAccess>)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::set_colorBufferAccess)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67dba30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(),
                                                             { "set_colorBufferAccess", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureAccess>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.get_colorBufferMaxIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::get_colorBufferMaxIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67dba38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(), { "get_colorBufferMaxIndex", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.set_colorBufferMaxIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)(int32_t)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::set_colorBufferMaxIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67dba40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(), { "set_colorBufferMaxIndex", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.get_fragmentInputAccess
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureAccess> (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::get_fragmentInputAccess)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67dba48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(), { "get_fragmentInputAccess", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.set_fragmentInputAccess
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)(::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureAccess>)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::set_fragmentInputAccess)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67dba50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(),
                                                             { "set_fragmentInputAccess", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureAccess>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.get_fragmentInputMaxIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::get_fragmentInputMaxIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67dba58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(), { "get_fragmentInputMaxIndex", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.set_fragmentInputMaxIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)(int32_t)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::set_fragmentInputMaxIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67dba60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(), { "set_fragmentInputMaxIndex", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.get_randomAccessResource
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass_RandomWriteResourceInfo> (
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)()>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::get_randomAccessResource)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67dba68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(), { "get_randomAccessResource", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.set_randomAccessResource
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)(
    ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass_RandomWriteResourceInfo>)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::set_randomAccessResource)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67dba70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(),
                                         { "set_randomAccessResource", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass_RandomWriteResourceInfo>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.get_randomAccessResourceMaxIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::get_randomAccessResourceMaxIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67dba78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(), { "get_randomAccessResourceMaxIndex", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.set_randomAccessResourceMaxIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)(int32_t)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::set_randomAccessResourceMaxIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67dba80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(), { "set_randomAccessResourceMaxIndex", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.get_generateDebugData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::get_generateDebugData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67dba88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(), { "get_generateDebugData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.set_generateDebugData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)(bool)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::set_generateDebugData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67dba90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(), { "set_generateDebugData", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.get_allowRendererListCulling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::get_allowRendererListCulling)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67dba98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(), { "get_allowRendererListCulling", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.set_allowRendererListCulling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)(bool)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::set_allowRendererListCulling)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67dbaa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(), { "set_allowRendererListCulling", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::_ctor)> {
  constexpr static std::size_t size = 0x30c;
  constexpr static std::size_t addrs = 0x67dbaa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.Clear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::Clear)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x67dbdb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(), { "Clear", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.HasRenderAttachments
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::HasRenderAttachments)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x67dbf54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(), { "HasRenderAttachments", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.IsTransient
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)(::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::IsTransient)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x67dc150;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(),
                                                             { "IsTransient", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.IsWritten
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)(::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::IsWritten)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x67dc240;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(),
                                                             { "IsWritten", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.IsRead
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)(::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::IsRead)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x67dc3e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(),
                                                             { "IsRead", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.IsAttachment
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)(::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::IsAttachment)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x67dc658;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(),
                                                             { "IsAttachment", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.AddResourceWrite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)(::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::AddResourceWrite)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x67dc8f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(),
                                                             { "AddResourceWrite", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.AddResourceRead
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)(::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::AddResourceRead)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x67dca48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(),
                                                             { "AddResourceRead", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.AddTransientResource
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)(::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::AddTransientResource)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x67dcb98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(),
                                                             { "AddTransientResource", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.UseRendererList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::UseRendererList)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x67dcce8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(),
                                                             { "UseRendererList", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.EnableAsyncCompute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)(bool)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::EnableAsyncCompute)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67dcdac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(), { "EnableAsyncCompute", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.AllowPassCulling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)(bool)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::AllowPassCulling)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67dcdb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(), { "AllowPassCulling", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.EnableFoveatedRasterization
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)(bool)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::EnableFoveatedRasterization)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67dcdbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(), { "EnableFoveatedRasterization", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.AllowRendererListCulling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)(bool)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::AllowRendererListCulling)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67dcdc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(), { "AllowRendererListCulling", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.AllowGlobalState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)(bool)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::AllowGlobalState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67dcdcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(), { "AllowGlobalState", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.GenerateDebugData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)(bool)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::GenerateDebugData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67dcdd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(), { "GenerateDebugData", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.SetColorBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>, int32_t)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::SetColorBuffer)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x67dcddc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(),
                                                { "SetColorBuffer", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.SetColorBufferRaw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>, int32_t, ::UnityEngine::Rendering::RenderGraphModule::AccessFlags, int32_t, int32_t)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::SetColorBufferRaw)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x67dce88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(),
                                                { "SetColorBufferRaw",
                                                  {},
                                                  { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(), ::i2c::type_of<int32_t>(),
                                                    ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::AccessFlags>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.SetFragmentInputRaw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>, int32_t, ::UnityEngine::Rendering::RenderGraphModule::AccessFlags, int32_t, int32_t)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::SetFragmentInputRaw)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x67dd120;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(),
                                                { "SetFragmentInputRaw",
                                                  {},
                                                  { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(), ::i2c::type_of<int32_t>(),
                                                    ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::AccessFlags>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.SetRandomWriteResourceRaw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)(::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>,
                                                                                                                              int32_t, bool, ::UnityEngine::Rendering::RenderGraphModule::AccessFlags)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::SetRandomWriteResourceRaw)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x67dd3b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(),
                                                             { "SetRandomWriteResourceRaw",
                                                               {},
                                                               { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::AccessFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.SetDepthBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)(::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>,
                                                                                                                              ::UnityEngine::Rendering::RenderGraphModule::DepthAccess)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::SetDepthBuffer)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x67dd614;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(),
                                                                                           { "SetDepthBuffer",
                                                                                             {},
                                                                                             { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::DepthAccess>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.SetDepthBufferRaw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>, ::UnityEngine::Rendering::RenderGraphModule::AccessFlags, int32_t, int32_t)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::SetDepthBufferRaw)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x67dd684;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(),
                                                { "SetDepthBufferRaw",
                                                  {},
                                                  { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(),
                                                    ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::AccessFlags>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.ComputeTextureHash
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)(
    ::by_ref<::UnityEngine::Rendering::HashFNV1A32>, ::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>, ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::ComputeTextureHash)> {
  constexpr static std::size_t size = 0x4f8;
  constexpr static std::size_t addrs = 0x67dd85c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(),
                                         { "ComputeTextureHash",
                                           {},
                                           { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::HashFNV1A32>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>(),
                                             ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.ComputeHash
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)(
    ::by_ref<::UnityEngine::Rendering::HashFNV1A32>, ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::ComputeHash)> {
  constexpr static std::size_t size = 0x95c;
  constexpr static std::size_t addrs = 0x67ddd54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(),
                            { "ComputeHash",
                              {},
                              { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::HashFNV1A32>>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.ComputeHashForTextureAccess
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Rendering::HashFNV1A32>, ::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>,
                                                                ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureAccess>)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::ComputeHashForTextureAccess)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x67de6b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(),
                                         { "ComputeHashForTextureAccess",
                                           {},
                                           { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::HashFNV1A32>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>(),
                                             ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureAccess>>() } })));
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
  this->____name_k__BackingField = value;
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
  this->____customSampler_k__BackingField = value;
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
constexpr ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureAccess>& UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_get__colorBufferAccess_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorBufferAccess_k__BackingField;
}
constexpr ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureAccess> const&
UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_get__colorBufferAccess_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorBufferAccess_k__BackingField;
}
constexpr void
UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_set__colorBufferAccess_k__BackingField(::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureAccess> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____colorBufferAccess_k__BackingField = value;
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
constexpr ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureAccess>&
UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_get__fragmentInputAccess_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fragmentInputAccess_k__BackingField;
}
constexpr ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureAccess> const&
UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_get__fragmentInputAccess_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fragmentInputAccess_k__BackingField;
}
constexpr void
UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_set__fragmentInputAccess_k__BackingField(::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureAccess> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fragmentInputAccess_k__BackingField = value;
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
constexpr ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass_RandomWriteResourceInfo>&
UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_get__randomAccessResource_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____randomAccessResource_k__BackingField;
}
constexpr ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass_RandomWriteResourceInfo> const&
UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_get__randomAccessResource_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____randomAccessResource_k__BackingField;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_set__randomAccessResource_k__BackingField(
    ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass_RandomWriteResourceInfo> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____randomAccessResource_k__BackingField = value;
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
constexpr ::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>*>&
UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_get_resourceReadLists() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resourceReadLists;
}
constexpr ::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>*> const&
UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_get_resourceReadLists() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resourceReadLists;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_set_resourceReadLists(
    ::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___resourceReadLists = value;
}
constexpr ::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>*>&
UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_get_resourceWriteLists() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resourceWriteLists;
}
constexpr ::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>*> const&
UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_get_resourceWriteLists() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resourceWriteLists;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_set_resourceWriteLists(
    ::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___resourceWriteLists = value;
}
constexpr ::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>*>&
UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_get_transientResourceList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___transientResourceList;
}
constexpr ::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>*> const&
UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_get_transientResourceList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___transientResourceList;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_set_transientResourceList(
    ::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___transientResourceList = value;
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
  this->___usedRendererListList = value;
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
  this->___setGlobalsList = value;
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
  this->___implicitReadsList = value;
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::Execute(::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext* renderGraphContext) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraphContext);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::Release(::UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool* pool) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pool);
}
inline bool UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::HasRenderFunc() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::GetRenderFuncHash() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::get_name() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(), { "get_name", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::set_name(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(), { "set_name", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::get_index() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(), { "get_index", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::set_index(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(), { "set_index", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPassType UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::get_type() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(), { "get_type", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPassType>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::set_type(::UnityEngine::Rendering::RenderGraphModule::RenderGraphPassType value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(),
                                                                                         { "set_type", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPassType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::ProfilingSampler* UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::get_customSampler() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(), { "get_customSampler", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::ProfilingSampler*>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::set_customSampler(::UnityEngine::Rendering::ProfilingSampler* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(),
                                                                                         { "set_customSampler", {}, { ::i2c::type_of<::UnityEngine::Rendering::ProfilingSampler*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::get_enableAsyncCompute() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(), { "get_enableAsyncCompute", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::set_enableAsyncCompute(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(), { "set_enableAsyncCompute", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::get_allowPassCulling() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(), { "get_allowPassCulling", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::set_allowPassCulling(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(), { "set_allowPassCulling", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::get_allowGlobalState() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(), { "get_allowGlobalState", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::set_allowGlobalState(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(), { "set_allowGlobalState", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::get_enableFoveatedRasterization() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(), { "get_enableFoveatedRasterization", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::set_enableFoveatedRasterization(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(), { "set_enableFoveatedRasterization", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::RenderGraphModule::TextureAccess UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::get_depthAccess() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(), { "get_depthAccess", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::TextureAccess>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::set_depthAccess(::UnityEngine::Rendering::RenderGraphModule::TextureAccess value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(),
                                                                                         { "set_depthAccess", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureAccess>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureAccess> UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::get_colorBufferAccess() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(), { "get_colorBufferAccess", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureAccess>>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::set_colorBufferAccess(::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureAccess> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(),
                                                           { "set_colorBufferAccess", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureAccess>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::get_colorBufferMaxIndex() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(), { "get_colorBufferMaxIndex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::set_colorBufferMaxIndex(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(), { "set_colorBufferMaxIndex", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureAccess> UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::get_fragmentInputAccess() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(), { "get_fragmentInputAccess", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureAccess>>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::set_fragmentInputAccess(::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureAccess> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(),
                                                           { "set_fragmentInputAccess", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureAccess>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::get_fragmentInputMaxIndex() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(), { "get_fragmentInputMaxIndex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::set_fragmentInputMaxIndex(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(), { "set_fragmentInputMaxIndex", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass_RandomWriteResourceInfo> UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::get_randomAccessResource() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(), { "get_randomAccessResource", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass_RandomWriteResourceInfo>>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::set_randomAccessResource(::ArrayW<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass_RandomWriteResourceInfo> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(),
                                       { "set_randomAccessResource", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass_RandomWriteResourceInfo>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::get_randomAccessResourceMaxIndex() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(), { "get_randomAccessResourceMaxIndex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::set_randomAccessResourceMaxIndex(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(), { "set_randomAccessResourceMaxIndex", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::get_generateDebugData() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(), { "get_generateDebugData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::set_generateDebugData(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(), { "set_generateDebugData", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::get_allowRendererListCulling() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(), { "get_allowRendererListCulling", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::set_allowRendererListCulling(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(), { "set_allowRendererListCulling", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::Clear() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(), { "Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::HasRenderAttachments() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(), { "HasRenderAttachments", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::IsTransient(::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle> res) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(),
                                                           { "IsTransient", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, res);
}
inline bool UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::IsWritten(::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle> res) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(),
                                                           { "IsWritten", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, res);
}
inline bool UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::IsRead(::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle> res) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(),
                                                           { "IsRead", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, res);
}
inline bool UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::IsAttachment(::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> res) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(),
                                                           { "IsAttachment", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, res);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::AddResourceWrite(::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle> res) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(),
                                                           { "AddResourceWrite", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, res);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::AddResourceRead(::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle> res) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(),
                                                           { "AddResourceRead", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, res);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::AddTransientResource(::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle> res) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(),
                                                           { "AddTransientResource", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, res);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::UseRendererList(::by_ref<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle> rendererList) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(),
                                                           { "UseRendererList", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rendererList);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::EnableAsyncCompute(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(), { "EnableAsyncCompute", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::AllowPassCulling(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(), { "AllowPassCulling", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::EnableFoveatedRasterization(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(), { "EnableFoveatedRasterization", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::AllowRendererListCulling(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(), { "AllowRendererListCulling", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::AllowGlobalState(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(), { "AllowGlobalState", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::GenerateDebugData(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(), { "GenerateDebugData", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::SetColorBuffer(::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> resource, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(),
                                              { "SetColorBuffer", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, resource, index);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::SetColorBufferRaw(::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> resource, int32_t index,
                                                                                          ::UnityEngine::Rendering::RenderGraphModule::AccessFlags accessFlags, int32_t mipLevel, int32_t depthSlice) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(),
                                                           { "SetColorBufferRaw",
                                                             {},
                                                             { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::AccessFlags>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, resource, index, accessFlags, mipLevel, depthSlice);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::SetFragmentInputRaw(::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> resource, int32_t index,
                                                                                            ::UnityEngine::Rendering::RenderGraphModule::AccessFlags accessFlags, int32_t mipLevel,
                                                                                            int32_t depthSlice) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(),
                                                           { "SetFragmentInputRaw",
                                                             {},
                                                             { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::AccessFlags>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, resource, index, accessFlags, mipLevel, depthSlice);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::SetRandomWriteResourceRaw(::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle> resource, int32_t index,
                                                                                                  bool preserveCounterValue, ::UnityEngine::Rendering::RenderGraphModule::AccessFlags accessFlags) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(),
                                                           { "SetRandomWriteResourceRaw",
                                                             {},
                                                             { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::AccessFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, resource, index, preserveCounterValue, accessFlags);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::SetDepthBuffer(::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> resource,
                                                                                       ::UnityEngine::Rendering::RenderGraphModule::DepthAccess flags) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(),
                          { "SetDepthBuffer",
                            {},
                            { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::DepthAccess>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, resource, flags);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::SetDepthBufferRaw(::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> resource,
                                                                                          ::UnityEngine::Rendering::RenderGraphModule::AccessFlags accessFlags, int32_t mipLevel, int32_t depthSlice) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(),
                                                           { "SetDepthBufferRaw",
                                                             {},
                                                             { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(),
                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::AccessFlags>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, resource, accessFlags, mipLevel, depthSlice);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::ComputeTextureHash(::by_ref<::UnityEngine::Rendering::HashFNV1A32> generator,
                                                                                           ::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle> handle,
                                                                                           ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry* resources) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(),
                                       { "ComputeTextureHash",
                                         {},
                                         { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::HashFNV1A32>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>(),
                                           ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, generator, handle, resources);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::ComputeHash(::by_ref<::UnityEngine::Rendering::HashFNV1A32> generator,
                                                                                    ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry* resources) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(),
          { "ComputeHash", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::HashFNV1A32>>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, generator, resources);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::ComputeHashForTextureAccess(::by_ref<::UnityEngine::Rendering::HashFNV1A32> generator,
                                                                                                    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle> handle,
                                                                                                    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureAccess> textureAccess) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(),
                                       { "ComputeHashForTextureAccess",
                                         {},
                                         { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::HashFNV1A32>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>(),
                                           ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureAccess>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, generator, handle, textureAccess);
}
inline ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass* UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::RenderGraphPass() {}
