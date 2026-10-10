#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/RenderGraphPass.hpp"
#include "System/Collections/Generic/zzzz__List_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__ExtendedFeatureFlags_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraphPassType_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__ResourceHandle_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureAccess_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ShadingRateCombiner_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ShadingRateFragmentSize_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraphPass_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__AccessFlags_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__DepthAccess_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__ExtendedFeatureFlags_def.hpp"
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
#include "UnityEngine/Rendering/zzzz__ShadingRateCombinerStage_def.hpp"
#include "UnityEngine/Rendering/zzzz__ShadingRateCombiner_def.hpp"
#include "UnityEngine/Rendering/zzzz__ShadingRateFragmentSize_def.hpp"
// Ctor Parameters [CppParam { name: "h", ty: "::UnityEngine::Rendering::RenderGraphModule::ResourceHandle", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name:
// "preserveCounterValue", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
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
  constexpr static std::size_t addrs = 0x6c093d4;

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
  constexpr static std::size_t addrs = 0x6c093dc;

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
  constexpr static std::size_t addrs = 0x6c093e4;

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
  constexpr static std::size_t addrs = 0x6c093ec;

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
  constexpr static std::size_t addrs = 0x6c093f4;

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
  constexpr static std::size_t addrs = 0x6c093fc;

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
  constexpr static std::size_t addrs = 0x6c09404;

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
  constexpr static std::size_t addrs = 0x6c0940c;

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
  constexpr static std::size_t addrs = 0x6c09414;

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
  constexpr static std::size_t addrs = 0x6c0941c;

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
  constexpr static std::size_t addrs = 0x6c09424;

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
  constexpr static std::size_t addrs = 0x6c0942c;

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
  constexpr static std::size_t addrs = 0x6c09434;

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
  constexpr static std::size_t addrs = 0x6c0943c;

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
  constexpr static std::size_t addrs = 0x6c09444;

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
  constexpr static std::size_t addrs = 0x6c0944c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(), { "set_enableFoveatedRasterization", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.get_extendedFeatureFlags
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::ExtendedFeatureFlags (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::get_extendedFeatureFlags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c09454;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(), { "get_extendedFeatureFlags", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.set_extendedFeatureFlags
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)(::UnityEngine::Rendering::RenderGraphModule::ExtendedFeatureFlags)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::set_extendedFeatureFlags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c0945c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(),
                                                             { "set_extendedFeatureFlags", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::ExtendedFeatureFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.get_depthAccess
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::TextureAccess (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::get_depthAccess)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6c09464;

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
  constexpr static std::size_t addrs = 0x6c09478;

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
  constexpr static std::size_t addrs = 0x6c09494;

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
  constexpr static std::size_t addrs = 0x6c0949c;

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
  constexpr static std::size_t addrs = 0x6c094a4;

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
  constexpr static std::size_t addrs = 0x6c094ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(), { "set_colorBufferMaxIndex", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.get_hasShadingRateImage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::get_hasShadingRateImage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c094b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(), { "get_hasShadingRateImage", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.set_hasShadingRateImage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)(bool)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::set_hasShadingRateImage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c094bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(), { "set_hasShadingRateImage", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.get_shadingRateAccess
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::TextureAccess (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::get_shadingRateAccess)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6c094c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(), { "get_shadingRateAccess", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.set_shadingRateAccess
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)(::UnityEngine::Rendering::RenderGraphModule::TextureAccess)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::set_shadingRateAccess)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6c094d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(),
                                                             { "set_shadingRateAccess", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureAccess>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.get_hasShadingRateStates
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::get_hasShadingRateStates)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c094f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(), { "get_hasShadingRateStates", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.set_hasShadingRateStates
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)(bool)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::set_hasShadingRateStates)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c094fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(), { "set_hasShadingRateStates", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.get_shadingRateFragmentSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::ShadingRateFragmentSize (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::get_shadingRateFragmentSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c09504;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(), { "get_shadingRateFragmentSize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.set_shadingRateFragmentSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)(::UnityEngine::Rendering::ShadingRateFragmentSize)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::set_shadingRateFragmentSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c0950c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(),
                                                             { "set_shadingRateFragmentSize", {}, { ::i2c::type_of<::UnityEngine::Rendering::ShadingRateFragmentSize>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.get_primitiveShadingRateCombiner
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::ShadingRateCombiner (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::get_primitiveShadingRateCombiner)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c09514;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(), { "get_primitiveShadingRateCombiner", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.set_primitiveShadingRateCombiner
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)(::UnityEngine::Rendering::ShadingRateCombiner)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::set_primitiveShadingRateCombiner)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c0951c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(),
                                                             { "set_primitiveShadingRateCombiner", {}, { ::i2c::type_of<::UnityEngine::Rendering::ShadingRateCombiner>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.get_fragmentShadingRateCombiner
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::ShadingRateCombiner (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::get_fragmentShadingRateCombiner)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c09524;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(), { "get_fragmentShadingRateCombiner", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.set_fragmentShadingRateCombiner
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)(::UnityEngine::Rendering::ShadingRateCombiner)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::set_fragmentShadingRateCombiner)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c0952c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(),
                                                             { "set_fragmentShadingRateCombiner", {}, { ::i2c::type_of<::UnityEngine::Rendering::ShadingRateCombiner>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.get_fragmentInputAccess
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureAccess> (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::get_fragmentInputAccess)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c09534;

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
  constexpr static std::size_t addrs = 0x6c0953c;

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
  constexpr static std::size_t addrs = 0x6c09544;

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
  constexpr static std::size_t addrs = 0x6c0954c;

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
  constexpr static std::size_t addrs = 0x6c09554;

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
  constexpr static std::size_t addrs = 0x6c0955c;

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
  constexpr static std::size_t addrs = 0x6c09564;

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
  constexpr static std::size_t addrs = 0x6c0956c;

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
  constexpr static std::size_t addrs = 0x6c09574;

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
  constexpr static std::size_t addrs = 0x6c0957c;

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
  constexpr static std::size_t addrs = 0x6c09584;

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
  constexpr static std::size_t addrs = 0x6c0958c;

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
  constexpr static std::size_t addrs = 0x6c09594;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.Clear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::Clear)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x6c098a0;

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
  constexpr static std::size_t addrs = 0x6c09a4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(), { "HasRenderAttachments", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.IsTransient
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle const>)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::IsTransient)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x6c09c48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(),
                                                             { "IsTransient", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle const>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.IsWritten
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle const>)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::IsWritten)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x6c09df0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(),
                                                             { "IsWritten", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle const>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.IsRead
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle const>)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::IsRead)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x6c09f98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(),
                                                             { "IsRead", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle const>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.IsAttachment
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle const>)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::IsAttachment)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x6c0a204;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(),
                                                             { "IsAttachment", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle const>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.AddResourceWrite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle const>)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::AddResourceWrite)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x6c0a4a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(),
                                                             { "AddResourceWrite", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle const>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.AddResourceRead
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle const>)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::AddResourceRead)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x6c0a5e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(),
                                                             { "AddResourceRead", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle const>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.AddTransientResource
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle const>)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::AddTransientResource)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x6c0a72c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(),
                                                             { "AddTransientResource", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle const>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.UseRendererList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle const>)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::UseRendererList)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6c0a870;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(),
                                                             { "UseRendererList", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle const>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.EnableAsyncCompute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)(bool)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::EnableAsyncCompute)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c0a934;

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
  constexpr static std::size_t addrs = 0x6c0a93c;

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
  constexpr static std::size_t addrs = 0x6c0a944;

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
  constexpr static std::size_t addrs = 0x6c0a94c;

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
  constexpr static std::size_t addrs = 0x6c0a954;

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
  constexpr static std::size_t addrs = 0x6c0a95c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(), { "GenerateDebugData", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.SetColorBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle const>, int32_t)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::SetColorBuffer)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6c0a964;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(),
                                         { "SetColorBuffer", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle const>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.SetColorBufferRaw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle const>, int32_t, ::UnityEngine::Rendering::RenderGraphModule::AccessFlags, int32_t, int32_t)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::SetColorBufferRaw)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x6c0aa2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(),
                                                { "SetColorBufferRaw",
                                                  {},
                                                  { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle const>>(), ::i2c::type_of<int32_t>(),
                                                    ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::AccessFlags>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.SetFragmentInputRaw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle const>, int32_t, ::UnityEngine::Rendering::RenderGraphModule::AccessFlags, int32_t, int32_t)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::SetFragmentInputRaw)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x6c0acbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(),
                                                { "SetFragmentInputRaw",
                                                  {},
                                                  { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle const>>(), ::i2c::type_of<int32_t>(),
                                                    ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::AccessFlags>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.SetRandomWriteResourceRaw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle const>, int32_t, bool, ::UnityEngine::Rendering::RenderGraphModule::AccessFlags)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::SetRandomWriteResourceRaw)> {
  constexpr static std::size_t size = 0x2e4;
  constexpr static std::size_t addrs = 0x6c0af38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(),
                                                             { "SetRandomWriteResourceRaw",
                                                               {},
                                                               { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle const>>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::AccessFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.SetDepthBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle const>, ::UnityEngine::Rendering::RenderGraphModule::DepthAccess)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::SetDepthBuffer)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6c0b21c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(),
                                                                                           { "SetDepthBuffer",
                                                                                             {},
                                                                                             { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle const>>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::DepthAccess>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.SetDepthBufferRaw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle const>, ::UnityEngine::Rendering::RenderGraphModule::AccessFlags, int32_t, int32_t)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::SetDepthBufferRaw)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x6c0b27c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(),
                                                { "SetDepthBufferRaw",
                                                  {},
                                                  { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle const>>(),
                                                    ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::AccessFlags>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.ComputeTextureHash
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)(
    ::by_ref<::UnityEngine::Rendering::HashFNV1A32>, ::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle const>,
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::ComputeTextureHash)> {
  constexpr static std::size_t size = 0x4ec;
  constexpr static std::size_t addrs = 0x6c0b468;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(),
                                                                                           { "ComputeTextureHash",
                                                                                             {},
                                                                                             { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::HashFNV1A32>>(),
                                                                                               ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle const>>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.ComputeHashForTextureAccess
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Rendering::HashFNV1A32>, ::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle const>,
                                                                ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureAccess const>)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::ComputeHashForTextureAccess)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6c0bcdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(),
                                                                                           { "ComputeHashForTextureAccess",
                                                                                             {},
                                                                                             { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::HashFNV1A32>>(),
                                                                                               ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle const>>(),
                                                                                               ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureAccess const>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.ComputeHash
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)(
    ::by_ref<::UnityEngine::Rendering::HashFNV1A32>, ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::ComputeHash)> {
  constexpr static std::size_t size = 0xab4;
  constexpr static std::size_t addrs = 0x6c0bd88;

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
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.SetShadingRateImageRaw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle const>)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::SetShadingRateImageRaw)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6c0c83c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(),
                                                             { "SetShadingRateImageRaw", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle const>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.SetShadingRateImage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle const>, ::UnityEngine::Rendering::RenderGraphModule::AccessFlags, int32_t, int32_t)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::SetShadingRateImage)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6c0c898;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(),
                                                { "SetShadingRateImage",
                                                  {},
                                                  { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle const>>(),
                                                    ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::AccessFlags>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.SetShadingRateFragmentSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)(::UnityEngine::Rendering::ShadingRateFragmentSize)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::SetShadingRateFragmentSize)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6c0c934;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(),
                                                             { "SetShadingRateFragmentSize", {}, { ::i2c::type_of<::UnityEngine::Rendering::ShadingRateFragmentSize>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.SetShadingRateCombiner
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)(
    ::UnityEngine::Rendering::ShadingRateCombinerStage, ::UnityEngine::Rendering::ShadingRateCombiner)>(&::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::SetShadingRateCombiner)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6c0c984;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(),
                         { "SetShadingRateCombiner", {}, { ::i2c::type_of<::UnityEngine::Rendering::ShadingRateCombinerStage>(), ::i2c::type_of<::UnityEngine::Rendering::ShadingRateCombiner>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass.SetExtendedFeatureFlags
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::*)(::UnityEngine::Rendering::RenderGraphModule::ExtendedFeatureFlags)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::SetExtendedFeatureFlags)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6c0c9f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(),
                                                             { "SetExtendedFeatureFlags", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::ExtendedFeatureFlags>() } })));
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
constexpr ::UnityEngine::Rendering::RenderGraphModule::ExtendedFeatureFlags& UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_get__extendedFeatureFlags_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____extendedFeatureFlags_k__BackingField;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::ExtendedFeatureFlags const&
UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_get__extendedFeatureFlags_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____extendedFeatureFlags_k__BackingField;
}
constexpr void
UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_set__extendedFeatureFlags_k__BackingField(::UnityEngine::Rendering::RenderGraphModule::ExtendedFeatureFlags value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____extendedFeatureFlags_k__BackingField = value;
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
constexpr bool& UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_get__hasShadingRateImage_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasShadingRateImage_k__BackingField;
}
constexpr bool const& UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_get__hasShadingRateImage_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasShadingRateImage_k__BackingField;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_set__hasShadingRateImage_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hasShadingRateImage_k__BackingField = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureAccess& UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_get__shadingRateAccess_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shadingRateAccess_k__BackingField;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureAccess const&
UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_get__shadingRateAccess_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shadingRateAccess_k__BackingField;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_set__shadingRateAccess_k__BackingField(::UnityEngine::Rendering::RenderGraphModule::TextureAccess value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____shadingRateAccess_k__BackingField = value;
}
constexpr bool& UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_get__hasShadingRateStates_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasShadingRateStates_k__BackingField;
}
constexpr bool const& UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_get__hasShadingRateStates_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasShadingRateStates_k__BackingField;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_set__hasShadingRateStates_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hasShadingRateStates_k__BackingField = value;
}
constexpr ::UnityEngine::Rendering::ShadingRateFragmentSize& UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_get__shadingRateFragmentSize_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shadingRateFragmentSize_k__BackingField;
}
constexpr ::UnityEngine::Rendering::ShadingRateFragmentSize const& UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_get__shadingRateFragmentSize_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shadingRateFragmentSize_k__BackingField;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_set__shadingRateFragmentSize_k__BackingField(::UnityEngine::Rendering::ShadingRateFragmentSize value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____shadingRateFragmentSize_k__BackingField = value;
}
constexpr ::UnityEngine::Rendering::ShadingRateCombiner& UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_get__primitiveShadingRateCombiner_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____primitiveShadingRateCombiner_k__BackingField;
}
constexpr ::UnityEngine::Rendering::ShadingRateCombiner const& UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_get__primitiveShadingRateCombiner_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____primitiveShadingRateCombiner_k__BackingField;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_set__primitiveShadingRateCombiner_k__BackingField(::UnityEngine::Rendering::ShadingRateCombiner value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____primitiveShadingRateCombiner_k__BackingField = value;
}
constexpr ::UnityEngine::Rendering::ShadingRateCombiner& UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_get__fragmentShadingRateCombiner_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fragmentShadingRateCombiner_k__BackingField;
}
constexpr ::UnityEngine::Rendering::ShadingRateCombiner const& UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_get__fragmentShadingRateCombiner_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fragmentShadingRateCombiner_k__BackingField;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::__cordl_internal_set__fragmentShadingRateCombiner_k__BackingField(::UnityEngine::Rendering::ShadingRateCombiner value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fragmentShadingRateCombiner_k__BackingField = value;
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
inline ::UnityEngine::Rendering::RenderGraphModule::ExtendedFeatureFlags UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::get_extendedFeatureFlags() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(), { "get_extendedFeatureFlags", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::ExtendedFeatureFlags>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::set_extendedFeatureFlags(::UnityEngine::Rendering::RenderGraphModule::ExtendedFeatureFlags value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(),
                                                           { "set_extendedFeatureFlags", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::ExtendedFeatureFlags>() } })));
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
inline bool UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::get_hasShadingRateImage() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(), { "get_hasShadingRateImage", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::set_hasShadingRateImage(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(), { "set_hasShadingRateImage", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::RenderGraphModule::TextureAccess UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::get_shadingRateAccess() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(), { "get_shadingRateAccess", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::TextureAccess>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::set_shadingRateAccess(::UnityEngine::Rendering::RenderGraphModule::TextureAccess value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(),
                                                           { "set_shadingRateAccess", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureAccess>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::get_hasShadingRateStates() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(), { "get_hasShadingRateStates", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::set_hasShadingRateStates(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(), { "set_hasShadingRateStates", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::ShadingRateFragmentSize UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::get_shadingRateFragmentSize() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(), { "get_shadingRateFragmentSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::ShadingRateFragmentSize>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::set_shadingRateFragmentSize(::UnityEngine::Rendering::ShadingRateFragmentSize value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(),
                                                           { "set_shadingRateFragmentSize", {}, { ::i2c::type_of<::UnityEngine::Rendering::ShadingRateFragmentSize>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::ShadingRateCombiner UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::get_primitiveShadingRateCombiner() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(), { "get_primitiveShadingRateCombiner", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::ShadingRateCombiner>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::set_primitiveShadingRateCombiner(::UnityEngine::Rendering::ShadingRateCombiner value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(),
                                                           { "set_primitiveShadingRateCombiner", {}, { ::i2c::type_of<::UnityEngine::Rendering::ShadingRateCombiner>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::ShadingRateCombiner UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::get_fragmentShadingRateCombiner() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(), { "get_fragmentShadingRateCombiner", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::ShadingRateCombiner>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::set_fragmentShadingRateCombiner(::UnityEngine::Rendering::ShadingRateCombiner value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(),
                                                           { "set_fragmentShadingRateCombiner", {}, { ::i2c::type_of<::UnityEngine::Rendering::ShadingRateCombiner>() } })));
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
inline bool UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::IsTransient(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle const> res) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(),
                                                           { "IsTransient", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle const>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, res);
}
inline bool UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::IsWritten(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle const> res) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(),
                                                           { "IsWritten", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle const>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, res);
}
inline bool UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::IsRead(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle const> res) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(),
                                                           { "IsRead", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle const>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, res);
}
inline bool UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::IsAttachment(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle const> res) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(),
                                                           { "IsAttachment", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle const>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, res);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::AddResourceWrite(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle const> res) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(),
                                                           { "AddResourceWrite", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle const>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, res);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::AddResourceRead(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle const> res) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(),
                                                           { "AddResourceRead", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle const>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, res);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::AddTransientResource(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle const> res) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(),
                                                           { "AddTransientResource", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle const>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, res);
}
inline void
UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::UseRendererList(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle const> rendererList) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(),
                                                           { "UseRendererList", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle const>>() } })));
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
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::SetColorBuffer(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle const> resource,
                                                                                       int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(),
                                              { "SetColorBuffer", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle const>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, resource, index);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::SetColorBufferRaw(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle const> resource,
                                                                                          int32_t index, ::UnityEngine::Rendering::RenderGraphModule::AccessFlags accessFlags, int32_t mipLevel,
                                                                                          int32_t depthSlice) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(),
                                                           { "SetColorBufferRaw",
                                                             {},
                                                             { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle const>>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::AccessFlags>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, resource, index, accessFlags, mipLevel, depthSlice);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::SetFragmentInputRaw(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle const> resource,
                                                                                            int32_t index, ::UnityEngine::Rendering::RenderGraphModule::AccessFlags accessFlags, int32_t mipLevel,
                                                                                            int32_t depthSlice) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(),
                                                           { "SetFragmentInputRaw",
                                                             {},
                                                             { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle const>>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::AccessFlags>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, resource, index, accessFlags, mipLevel, depthSlice);
}
inline void
UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::SetRandomWriteResourceRaw(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle const> resource,
                                                                                      int32_t index, bool preserveCounterValue, ::UnityEngine::Rendering::RenderGraphModule::AccessFlags accessFlags) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(),
                                                           { "SetRandomWriteResourceRaw",
                                                             {},
                                                             { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle const>>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::AccessFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, resource, index, preserveCounterValue, accessFlags);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::SetDepthBuffer(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle const> resource,
                                                                                       ::UnityEngine::Rendering::RenderGraphModule::DepthAccess flags) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(),
                                                                                         { "SetDepthBuffer",
                                                                                           {},
                                                                                           { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle const>>(),
                                                                                             ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::DepthAccess>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, resource, flags);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::SetDepthBufferRaw(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle const> resource,
                                                                                          ::UnityEngine::Rendering::RenderGraphModule::AccessFlags accessFlags, int32_t mipLevel, int32_t depthSlice) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(),
                                                           { "SetDepthBufferRaw",
                                                             {},
                                                             { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle const>>(),
                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::AccessFlags>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, resource, accessFlags, mipLevel, depthSlice);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::ComputeTextureHash(::by_ref<::UnityEngine::Rendering::HashFNV1A32> generator,
                                                                                           /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle const> handle,
                                                                                           ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry* resources) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(),
                                                                                         { "ComputeTextureHash",
                                                                                           {},
                                                                                           { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::HashFNV1A32>>(),
                                                                                             ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle const>>(),
                                                                                             ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, generator, handle, resources);
}
inline void
UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::ComputeHashForTextureAccess(::by_ref<::UnityEngine::Rendering::HashFNV1A32> generator,
                                                                                        /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle const> handle,
                                                                                        /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureAccess const> textureAccess) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(),
                                                                                         { "ComputeHashForTextureAccess",
                                                                                           {},
                                                                                           { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::HashFNV1A32>>(),
                                                                                             ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle const>>(),
                                                                                             ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureAccess const>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, generator, handle, textureAccess);
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
inline void
UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::SetShadingRateImageRaw(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle const> shadingRateImage) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(),
                                                           { "SetShadingRateImageRaw", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle const>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, shadingRateImage);
}
inline void
UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::SetShadingRateImage(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle const> shadingRateImage,
                                                                                ::UnityEngine::Rendering::RenderGraphModule::AccessFlags accessFlags, int32_t mipLevel, int32_t depthSlice) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(),
                                                           { "SetShadingRateImage",
                                                             {},
                                                             { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle const>>(),
                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::AccessFlags>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, shadingRateImage, accessFlags, mipLevel, depthSlice);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::SetShadingRateFragmentSize(::UnityEngine::Rendering::ShadingRateFragmentSize shadingRateFragmentSize) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(),
                                                           { "SetShadingRateFragmentSize", {}, { ::i2c::type_of<::UnityEngine::Rendering::ShadingRateFragmentSize>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, shadingRateFragmentSize);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::SetShadingRateCombiner(::UnityEngine::Rendering::ShadingRateCombinerStage stage,
                                                                                               ::UnityEngine::Rendering::ShadingRateCombiner combiner) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(),
                       { "SetShadingRateCombiner", {}, { ::i2c::type_of<::UnityEngine::Rendering::ShadingRateCombinerStage>(), ::i2c::type_of<::UnityEngine::Rendering::ShadingRateCombiner>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stage, combiner);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::SetExtendedFeatureFlags(::UnityEngine::Rendering::RenderGraphModule::ExtendedFeatureFlags value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>(),
                                                           { "SetExtendedFeatureFlags", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::ExtendedFeatureFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass* UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass::RenderGraphPass() {}
