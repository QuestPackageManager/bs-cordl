#pragma once
// IWYU pragma private; include "GlobalNamespace/FullScreenPassRendererFeature.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPassInput_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRendererFeature_impl.hpp"
#include "GlobalNamespace/zzzz__FullScreenPassRendererFeature_def.hpp"
#include "GlobalNamespace/zzzz__FullScreenPassRendererFeature_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__BaseRenderFunc_2_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RasterGraphContext_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraph_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderingData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderingLayerUtils_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderer_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__ContextContainer_def.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__RasterCommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableRenderContext_def.hpp"
#include "UnityEngine/zzzz__ISerializationCallbackReceiver_def.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__RenderTextureDescriptor_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::FullScreenPassRendererFeature_InjectionPoint::FullScreenPassRendererFeature_InjectionPoint(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FullScreenPassRendererFeature_InjectionPoint::FullScreenPassRendererFeature_InjectionPoint() {}
constexpr ::GlobalNamespace::FullScreenPassRendererFeature_InjectionPoint GlobalNamespace::FullScreenPassRendererFeature_InjectionPoint::BeforeRenderingTransparents{ static_cast<int32_t>(0x1c2) };
constexpr ::GlobalNamespace::FullScreenPassRendererFeature_InjectionPoint GlobalNamespace::FullScreenPassRendererFeature_InjectionPoint::BeforeRenderingPostProcessing{ static_cast<int32_t>(0x226) };
constexpr ::GlobalNamespace::FullScreenPassRendererFeature_InjectionPoint GlobalNamespace::FullScreenPassRendererFeature_InjectionPoint::AfterRenderingPostProcessing{ static_cast<int32_t>(0x258) };
//  Writing Method size for method: ::GlobalNamespace::FullScreenRenderPass_FullScreenPassRendererFeature_CopyPassData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FullScreenRenderPass_FullScreenPassRendererFeature_CopyPassData::*)()>(
    &::GlobalNamespace::FullScreenRenderPass_FullScreenPassRendererFeature_CopyPassData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x661c7fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FullScreenRenderPass_FullScreenPassRendererFeature_CopyPassData*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& GlobalNamespace::FullScreenRenderPass_FullScreenPassRendererFeature_CopyPassData::__cordl_internal_get_inputTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inputTexture;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const&
GlobalNamespace::FullScreenRenderPass_FullScreenPassRendererFeature_CopyPassData::__cordl_internal_get_inputTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inputTexture;
}
constexpr void GlobalNamespace::FullScreenRenderPass_FullScreenPassRendererFeature_CopyPassData::__cordl_internal_set_inputTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___inputTexture = value;
}
inline void GlobalNamespace::FullScreenRenderPass_FullScreenPassRendererFeature_CopyPassData::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FullScreenRenderPass_FullScreenPassRendererFeature_CopyPassData*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::FullScreenRenderPass_FullScreenPassRendererFeature_CopyPassData* GlobalNamespace::FullScreenRenderPass_FullScreenPassRendererFeature_CopyPassData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::FullScreenRenderPass_FullScreenPassRendererFeature_CopyPassData*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FullScreenRenderPass_FullScreenPassRendererFeature_CopyPassData::FullScreenRenderPass_FullScreenPassRendererFeature_CopyPassData() {}
//  Writing Method size for method: ::GlobalNamespace::FullScreenRenderPass_FullScreenPassRendererFeature_MainPassData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FullScreenRenderPass_FullScreenPassRendererFeature_MainPassData::*)()>(
    &::GlobalNamespace::FullScreenRenderPass_FullScreenPassRendererFeature_MainPassData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x661c800;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FullScreenRenderPass_FullScreenPassRendererFeature_MainPassData*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::FullScreenRenderPass_FullScreenPassRendererFeature_MainPassData::__cordl_internal_get_material() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___material;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::FullScreenRenderPass_FullScreenPassRendererFeature_MainPassData::__cordl_internal_get_material() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___material;
}
constexpr void GlobalNamespace::FullScreenRenderPass_FullScreenPassRendererFeature_MainPassData::__cordl_internal_set_material(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___material)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::FullScreenRenderPass_FullScreenPassRendererFeature_MainPassData::__cordl_internal_get_passIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___passIndex;
}
constexpr int32_t const& GlobalNamespace::FullScreenRenderPass_FullScreenPassRendererFeature_MainPassData::__cordl_internal_get_passIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___passIndex;
}
constexpr void GlobalNamespace::FullScreenRenderPass_FullScreenPassRendererFeature_MainPassData::__cordl_internal_set_passIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___passIndex = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& GlobalNamespace::FullScreenRenderPass_FullScreenPassRendererFeature_MainPassData::__cordl_internal_get_inputTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inputTexture;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const&
GlobalNamespace::FullScreenRenderPass_FullScreenPassRendererFeature_MainPassData::__cordl_internal_get_inputTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inputTexture;
}
constexpr void GlobalNamespace::FullScreenRenderPass_FullScreenPassRendererFeature_MainPassData::__cordl_internal_set_inputTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___inputTexture = value;
}
inline void GlobalNamespace::FullScreenRenderPass_FullScreenPassRendererFeature_MainPassData::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FullScreenRenderPass_FullScreenPassRendererFeature_MainPassData*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::FullScreenRenderPass_FullScreenPassRendererFeature_MainPassData* GlobalNamespace::FullScreenRenderPass_FullScreenPassRendererFeature_MainPassData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::FullScreenRenderPass_FullScreenPassRendererFeature_MainPassData*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FullScreenRenderPass_FullScreenPassRendererFeature_MainPassData::FullScreenRenderPass_FullScreenPassRendererFeature_MainPassData() {}
//  Writing Method size for method: ::GlobalNamespace::FullScreenRenderPass_FullScreenPassRendererFeature___c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FullScreenRenderPass_FullScreenPassRendererFeature___c::*)()>(
    &::GlobalNamespace::FullScreenRenderPass_FullScreenPassRendererFeature___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x661c858;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FullScreenRenderPass_FullScreenPassRendererFeature___c*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FullScreenRenderPass_FullScreenPassRendererFeature___c._RecordRenderGraph_b__14_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FullScreenRenderPass_FullScreenPassRendererFeature___c::*)(
    ::GlobalNamespace::FullScreenRenderPass_FullScreenPassRendererFeature_CopyPassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext)>(
    &::GlobalNamespace::FullScreenRenderPass_FullScreenPassRendererFeature___c::_RecordRenderGraph_b__14_0)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x661c85c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FullScreenRenderPass_FullScreenPassRendererFeature___c*>::get(), "<RecordRenderGraph>b__14_0",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::FullScreenRenderPass_FullScreenPassRendererFeature_CopyPassData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FullScreenRenderPass_FullScreenPassRendererFeature___c._RecordRenderGraph_b__14_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FullScreenRenderPass_FullScreenPassRendererFeature___c::*)(
    ::GlobalNamespace::FullScreenRenderPass_FullScreenPassRendererFeature_MainPassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext)>(
    &::GlobalNamespace::FullScreenRenderPass_FullScreenPassRendererFeature___c::_RecordRenderGraph_b__14_1)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x661c910;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FullScreenRenderPass_FullScreenPassRendererFeature___c*>::get(), "<RecordRenderGraph>b__14_1",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::FullScreenRenderPass_FullScreenPassRendererFeature_MainPassData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::FullScreenRenderPass_FullScreenPassRendererFeature___c::setStaticF___9(::GlobalNamespace::FullScreenRenderPass_FullScreenPassRendererFeature___c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::FullScreenRenderPass_FullScreenPassRendererFeature___c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FullScreenRenderPass_FullScreenPassRendererFeature___c*>::get>(
      std::forward<::GlobalNamespace::FullScreenRenderPass_FullScreenPassRendererFeature___c*>(value));
}
inline ::GlobalNamespace::FullScreenRenderPass_FullScreenPassRendererFeature___c* GlobalNamespace::FullScreenRenderPass_FullScreenPassRendererFeature___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::FullScreenRenderPass_FullScreenPassRendererFeature___c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FullScreenRenderPass_FullScreenPassRendererFeature___c*>::get>();
}
inline void GlobalNamespace::FullScreenRenderPass_FullScreenPassRendererFeature___c::setStaticF___9__14_0(
    ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::GlobalNamespace::FullScreenRenderPass_FullScreenPassRendererFeature_CopyPassData*,
                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::GlobalNamespace::FullScreenRenderPass_FullScreenPassRendererFeature_CopyPassData*,
                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
                                    "<>9__14_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FullScreenRenderPass_FullScreenPassRendererFeature___c*>::get>(
      std::forward<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::GlobalNamespace::FullScreenRenderPass_FullScreenPassRendererFeature_CopyPassData*,
                                                                                 ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::GlobalNamespace::FullScreenRenderPass_FullScreenPassRendererFeature_CopyPassData*,
                                                                     ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
GlobalNamespace::FullScreenRenderPass_FullScreenPassRendererFeature___c::getStaticF___9__14_0() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::GlobalNamespace::FullScreenRenderPass_FullScreenPassRendererFeature_CopyPassData*,
                                                                                                         ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
                                           "<>9__14_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FullScreenRenderPass_FullScreenPassRendererFeature___c*>::get>();
}
inline void GlobalNamespace::FullScreenRenderPass_FullScreenPassRendererFeature___c::setStaticF___9__14_1(
    ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::GlobalNamespace::FullScreenRenderPass_FullScreenPassRendererFeature_MainPassData*,
                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::GlobalNamespace::FullScreenRenderPass_FullScreenPassRendererFeature_MainPassData*,
                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
                                    "<>9__14_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FullScreenRenderPass_FullScreenPassRendererFeature___c*>::get>(
      std::forward<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::GlobalNamespace::FullScreenRenderPass_FullScreenPassRendererFeature_MainPassData*,
                                                                                 ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::GlobalNamespace::FullScreenRenderPass_FullScreenPassRendererFeature_MainPassData*,
                                                                     ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
GlobalNamespace::FullScreenRenderPass_FullScreenPassRendererFeature___c::getStaticF___9__14_1() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::GlobalNamespace::FullScreenRenderPass_FullScreenPassRendererFeature_MainPassData*,
                                                                                                         ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
                                           "<>9__14_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FullScreenRenderPass_FullScreenPassRendererFeature___c*>::get>();
}
inline void GlobalNamespace::FullScreenRenderPass_FullScreenPassRendererFeature___c::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FullScreenRenderPass_FullScreenPassRendererFeature___c*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void
GlobalNamespace::FullScreenRenderPass_FullScreenPassRendererFeature___c::_RecordRenderGraph_b__14_0(::GlobalNamespace::FullScreenRenderPass_FullScreenPassRendererFeature_CopyPassData* data,
                                                                                                    ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext rgContext) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FullScreenRenderPass_FullScreenPassRendererFeature___c*>::get(), "<RecordRenderGraph>b__14_0",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::FullScreenRenderPass_FullScreenPassRendererFeature_CopyPassData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data, rgContext);
}
inline void
GlobalNamespace::FullScreenRenderPass_FullScreenPassRendererFeature___c::_RecordRenderGraph_b__14_1(::GlobalNamespace::FullScreenRenderPass_FullScreenPassRendererFeature_MainPassData* data,
                                                                                                    ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext rgContext) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FullScreenRenderPass_FullScreenPassRendererFeature___c*>::get(), "<RecordRenderGraph>b__14_1",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::FullScreenRenderPass_FullScreenPassRendererFeature_MainPassData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data, rgContext);
}
inline ::GlobalNamespace::FullScreenRenderPass_FullScreenPassRendererFeature___c* GlobalNamespace::FullScreenRenderPass_FullScreenPassRendererFeature___c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::FullScreenRenderPass_FullScreenPassRendererFeature___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FullScreenRenderPass_FullScreenPassRendererFeature___c::FullScreenRenderPass_FullScreenPassRendererFeature___c() {}
//  Writing Method size for method: ::GlobalNamespace::FullScreenPassRendererFeature_FullScreenRenderPass._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FullScreenPassRendererFeature_FullScreenRenderPass::*)(::StringW)>(
    &::GlobalNamespace::FullScreenPassRendererFeature_FullScreenRenderPass::_ctor)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x661afe0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FullScreenPassRendererFeature_FullScreenRenderPass*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FullScreenPassRendererFeature_FullScreenRenderPass.SetupMembers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FullScreenPassRendererFeature_FullScreenRenderPass::*)(
    ::UnityEngine::Material*, int32_t, bool, bool)>(&::GlobalNamespace::FullScreenPassRendererFeature_FullScreenRenderPass::SetupMembers)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x661b340;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FullScreenPassRendererFeature_FullScreenRenderPass*>::get(), "SetupMembers", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FullScreenPassRendererFeature_FullScreenRenderPass.OnCameraSetup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FullScreenPassRendererFeature_FullScreenRenderPass::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::ByRef<::UnityEngine::Rendering::Universal::RenderingData>)>(&::GlobalNamespace::FullScreenPassRendererFeature_FullScreenRenderPass::OnCameraSetup)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x661b3e8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FullScreenPassRendererFeature_FullScreenRenderPass*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FullScreenPassRendererFeature_FullScreenRenderPass*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FullScreenPassRendererFeature_FullScreenRenderPass.ReAllocate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FullScreenPassRendererFeature_FullScreenRenderPass::*)(
    ::UnityEngine::RenderTextureDescriptor)>(&::GlobalNamespace::FullScreenPassRendererFeature_FullScreenRenderPass::ReAllocate)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x661b44c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FullScreenPassRendererFeature_FullScreenRenderPass*>::get(), "ReAllocate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTextureDescriptor>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FullScreenPassRendererFeature_FullScreenRenderPass.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FullScreenPassRendererFeature_FullScreenRenderPass::*)()>(
    &::GlobalNamespace::FullScreenPassRendererFeature_FullScreenRenderPass::Dispose)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x661b378;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FullScreenPassRendererFeature_FullScreenRenderPass*>::get(), "Dispose",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FullScreenPassRendererFeature_FullScreenRenderPass.ExecuteCopyColorPass
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Rendering::RasterCommandBuffer*, ::UnityEngine::Rendering::RTHandle*)>(
    &::GlobalNamespace::FullScreenPassRendererFeature_FullScreenRenderPass::ExecuteCopyColorPass)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x661b4f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FullScreenPassRendererFeature_FullScreenRenderPass*>::get(),
                                                 "ExecuteCopyColorPass", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RasterCommandBuffer*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RTHandle*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FullScreenPassRendererFeature_FullScreenRenderPass.ExecuteMainPass
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::Rendering::RasterCommandBuffer*, ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Material*, int32_t)>(
        &::GlobalNamespace::FullScreenPassRendererFeature_FullScreenRenderPass::ExecuteMainPass)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x661b574;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FullScreenPassRendererFeature_FullScreenRenderPass*>::get(),
                                                 "ExecuteMainPass", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RasterCommandBuffer*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RTHandle*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FullScreenPassRendererFeature_FullScreenRenderPass.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FullScreenPassRendererFeature_FullScreenRenderPass::*)(
    ::UnityEngine::Rendering::ScriptableRenderContext, ::ByRef<::UnityEngine::Rendering::Universal::RenderingData>)>(&::GlobalNamespace::FullScreenPassRendererFeature_FullScreenRenderPass::Execute)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0x661b758;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FullScreenPassRendererFeature_FullScreenRenderPass*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FullScreenPassRendererFeature_FullScreenRenderPass*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FullScreenPassRendererFeature_FullScreenRenderPass.RecordRenderGraph
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FullScreenPassRendererFeature_FullScreenRenderPass::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::ContextContainer*)>(
    &::GlobalNamespace::FullScreenPassRendererFeature_FullScreenRenderPass::RecordRenderGraph)> {
  constexpr static std::size_t size = 0xd44;
  constexpr static std::size_t addrs = 0x661ba20;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FullScreenPassRendererFeature_FullScreenRenderPass*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FullScreenPassRendererFeature_FullScreenRenderPass*>::get(), 11));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::FullScreenPassRendererFeature_FullScreenRenderPass::__cordl_internal_get_m_Material() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Material;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::FullScreenPassRendererFeature_FullScreenRenderPass::__cordl_internal_get_m_Material() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Material;
}
constexpr void GlobalNamespace::FullScreenPassRendererFeature_FullScreenRenderPass::__cordl_internal_set_m_Material(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Material)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::FullScreenPassRendererFeature_FullScreenRenderPass::__cordl_internal_get_m_PassIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PassIndex;
}
constexpr int32_t const& GlobalNamespace::FullScreenPassRendererFeature_FullScreenRenderPass::__cordl_internal_get_m_PassIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PassIndex;
}
constexpr void GlobalNamespace::FullScreenPassRendererFeature_FullScreenRenderPass::__cordl_internal_set_m_PassIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PassIndex = value;
}
constexpr bool& GlobalNamespace::FullScreenPassRendererFeature_FullScreenRenderPass::__cordl_internal_get_m_FetchActiveColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FetchActiveColor;
}
constexpr bool const& GlobalNamespace::FullScreenPassRendererFeature_FullScreenRenderPass::__cordl_internal_get_m_FetchActiveColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FetchActiveColor;
}
constexpr void GlobalNamespace::FullScreenPassRendererFeature_FullScreenRenderPass::__cordl_internal_set_m_FetchActiveColor(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_FetchActiveColor = value;
}
constexpr bool& GlobalNamespace::FullScreenPassRendererFeature_FullScreenRenderPass::__cordl_internal_get_m_BindDepthStencilAttachment() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BindDepthStencilAttachment;
}
constexpr bool const& GlobalNamespace::FullScreenPassRendererFeature_FullScreenRenderPass::__cordl_internal_get_m_BindDepthStencilAttachment() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BindDepthStencilAttachment;
}
constexpr void GlobalNamespace::FullScreenPassRendererFeature_FullScreenRenderPass::__cordl_internal_set_m_BindDepthStencilAttachment(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_BindDepthStencilAttachment = value;
}
constexpr ::UnityEngine::Rendering::RTHandle*& GlobalNamespace::FullScreenPassRendererFeature_FullScreenRenderPass::__cordl_internal_get_m_CopiedColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CopiedColor;
}
constexpr ::UnityEngine::Rendering::RTHandle* const& GlobalNamespace::FullScreenPassRendererFeature_FullScreenRenderPass::__cordl_internal_get_m_CopiedColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CopiedColor;
}
constexpr void GlobalNamespace::FullScreenPassRendererFeature_FullScreenRenderPass::__cordl_internal_set_m_CopiedColor(::UnityEngine::Rendering::RTHandle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_CopiedColor)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::FullScreenPassRendererFeature_FullScreenRenderPass::setStaticF_s_SharedPropertyBlock(::UnityEngine::MaterialPropertyBlock* value) {
  ::cordl_internals::setStaticField<::UnityEngine::MaterialPropertyBlock*, "s_SharedPropertyBlock",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FullScreenPassRendererFeature_FullScreenRenderPass*>::get>(
      std::forward<::UnityEngine::MaterialPropertyBlock*>(value));
}
inline ::UnityEngine::MaterialPropertyBlock* GlobalNamespace::FullScreenPassRendererFeature_FullScreenRenderPass::getStaticF_s_SharedPropertyBlock() {
  return ::cordl_internals::getStaticField<::UnityEngine::MaterialPropertyBlock*, "s_SharedPropertyBlock",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FullScreenPassRendererFeature_FullScreenRenderPass*>::get>();
}
inline void GlobalNamespace::FullScreenPassRendererFeature_FullScreenRenderPass::_ctor(::StringW passName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FullScreenPassRendererFeature_FullScreenRenderPass*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, passName);
}
inline void GlobalNamespace::FullScreenPassRendererFeature_FullScreenRenderPass::SetupMembers(::UnityEngine::Material* material, int32_t passIndex, bool fetchActiveColor,
                                                                                              bool bindDepthStencilAttachment) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FullScreenPassRendererFeature_FullScreenRenderPass*>::get(), "SetupMembers", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, material, passIndex, fetchActiveColor, bindDepthStencilAttachment);
}
inline void GlobalNamespace::FullScreenPassRendererFeature_FullScreenRenderPass::OnCameraSetup(::UnityEngine::Rendering::CommandBuffer* cmd,
                                                                                               ::ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FullScreenPassRendererFeature_FullScreenRenderPass*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cmd, renderingData);
}
inline void GlobalNamespace::FullScreenPassRendererFeature_FullScreenRenderPass::ReAllocate(::UnityEngine::RenderTextureDescriptor desc) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FullScreenPassRendererFeature_FullScreenRenderPass*>::get(), "ReAllocate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTextureDescriptor>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, desc);
}
inline void GlobalNamespace::FullScreenPassRendererFeature_FullScreenRenderPass::Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FullScreenPassRendererFeature_FullScreenRenderPass*>::get(), "Dispose",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::FullScreenPassRendererFeature_FullScreenRenderPass::ExecuteCopyColorPass(::UnityEngine::Rendering::RasterCommandBuffer* cmd,
                                                                                                      ::UnityEngine::Rendering::RTHandle* sourceTexture) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FullScreenPassRendererFeature_FullScreenRenderPass*>::get(),
                                               "ExecuteCopyColorPass", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RasterCommandBuffer*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RTHandle*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, cmd, sourceTexture);
}
inline void GlobalNamespace::FullScreenPassRendererFeature_FullScreenRenderPass::ExecuteMainPass(::UnityEngine::Rendering::RasterCommandBuffer* cmd, ::UnityEngine::Rendering::RTHandle* sourceTexture,
                                                                                                 ::UnityEngine::Material* material, int32_t passIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FullScreenPassRendererFeature_FullScreenRenderPass*>::get(), "ExecuteMainPass",
                                               std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RasterCommandBuffer*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RTHandle*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, cmd, sourceTexture, material, passIndex);
}
inline void GlobalNamespace::FullScreenPassRendererFeature_FullScreenRenderPass::Execute(::UnityEngine::Rendering::ScriptableRenderContext context,
                                                                                         ::ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FullScreenPassRendererFeature_FullScreenRenderPass*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context, renderingData);
}
inline void GlobalNamespace::FullScreenPassRendererFeature_FullScreenRenderPass::RecordRenderGraph(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                                                   ::UnityEngine::Rendering::ContextContainer* frameData) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FullScreenPassRendererFeature_FullScreenRenderPass*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, renderGraph, frameData);
}
inline ::GlobalNamespace::FullScreenPassRendererFeature_FullScreenRenderPass* GlobalNamespace::FullScreenPassRendererFeature_FullScreenRenderPass::New_ctor(::StringW passName) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::FullScreenPassRendererFeature_FullScreenRenderPass*>(passName));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FullScreenPassRendererFeature_FullScreenRenderPass::FullScreenPassRendererFeature_FullScreenRenderPass() {}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::FullScreenPassRendererFeature_Version::FullScreenPassRendererFeature_Version(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FullScreenPassRendererFeature_Version::FullScreenPassRendererFeature_Version() {}
constexpr ::GlobalNamespace::FullScreenPassRendererFeature_Version GlobalNamespace::FullScreenPassRendererFeature_Version::Uninitialised{ static_cast<int32_t>(0xffffffff) };
constexpr ::GlobalNamespace::FullScreenPassRendererFeature_Version GlobalNamespace::FullScreenPassRendererFeature_Version::Initial{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::FullScreenPassRendererFeature_Version GlobalNamespace::FullScreenPassRendererFeature_Version::AddFetchColorBufferCheckbox{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::FullScreenPassRendererFeature_Version GlobalNamespace::FullScreenPassRendererFeature_Version::Count{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::FullScreenPassRendererFeature_Version GlobalNamespace::FullScreenPassRendererFeature_Version::Latest{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::GlobalNamespace::FullScreenPassRendererFeature.Create
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FullScreenPassRendererFeature::*)()>(
    &::GlobalNamespace::FullScreenPassRendererFeature::Create)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x661af74;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FullScreenPassRendererFeature*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FullScreenPassRendererFeature*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FullScreenPassRendererFeature.RequireRenderingLayers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::FullScreenPassRendererFeature::*)(
    bool, bool, ::ByRef<::UnityEngine::Rendering::Universal::RenderingLayerUtils_Event>, ::ByRef<::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize>)>(
    &::GlobalNamespace::FullScreenPassRendererFeature::RequireRenderingLayers)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x661b088;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FullScreenPassRendererFeature*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FullScreenPassRendererFeature*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FullScreenPassRendererFeature.AddRenderPasses
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FullScreenPassRendererFeature::*)(
    ::UnityEngine::Rendering::Universal::ScriptableRenderer*, ::ByRef<::UnityEngine::Rendering::Universal::RenderingData>)>(&::GlobalNamespace::FullScreenPassRendererFeature::AddRenderPasses)> {
  constexpr static std::size_t size = 0x2a4;
  constexpr static std::size_t addrs = 0x661b09c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FullScreenPassRendererFeature*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FullScreenPassRendererFeature*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FullScreenPassRendererFeature.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FullScreenPassRendererFeature::*)(bool)>(
    &::GlobalNamespace::FullScreenPassRendererFeature::Dispose)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x661b354;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FullScreenPassRendererFeature*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FullScreenPassRendererFeature*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FullScreenPassRendererFeature.UpgradeIfNeeded
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FullScreenPassRendererFeature::*)()>(
    &::GlobalNamespace::FullScreenPassRendererFeature::UpgradeIfNeeded)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x661b38c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FullScreenPassRendererFeature*>::get(),
                                                                               "UpgradeIfNeeded", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FullScreenPassRendererFeature.UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FullScreenPassRendererFeature::*)()>(
    &::GlobalNamespace::FullScreenPassRendererFeature::UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x661b390;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FullScreenPassRendererFeature*>::get(),
                                                 "UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FullScreenPassRendererFeature.UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FullScreenPassRendererFeature::*)()>(
    &::GlobalNamespace::FullScreenPassRendererFeature::UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x661b3ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FullScreenPassRendererFeature*>::get(),
                                    "UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FullScreenPassRendererFeature._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FullScreenPassRendererFeature::*)()>(
    &::GlobalNamespace::FullScreenPassRendererFeature::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x661b3c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FullScreenPassRendererFeature*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::FullScreenPassRendererFeature_InjectionPoint& GlobalNamespace::FullScreenPassRendererFeature::__cordl_internal_get_injectionPoint() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___injectionPoint;
}
constexpr ::GlobalNamespace::FullScreenPassRendererFeature_InjectionPoint const& GlobalNamespace::FullScreenPassRendererFeature::__cordl_internal_get_injectionPoint() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___injectionPoint;
}
constexpr void GlobalNamespace::FullScreenPassRendererFeature::__cordl_internal_set_injectionPoint(::GlobalNamespace::FullScreenPassRendererFeature_InjectionPoint value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___injectionPoint = value;
}
constexpr bool& GlobalNamespace::FullScreenPassRendererFeature::__cordl_internal_get_fetchColorBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fetchColorBuffer;
}
constexpr bool const& GlobalNamespace::FullScreenPassRendererFeature::__cordl_internal_get_fetchColorBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fetchColorBuffer;
}
constexpr void GlobalNamespace::FullScreenPassRendererFeature::__cordl_internal_set_fetchColorBuffer(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___fetchColorBuffer = value;
}
constexpr ::UnityEngine::Rendering::Universal::ScriptableRenderPassInput& GlobalNamespace::FullScreenPassRendererFeature::__cordl_internal_get_requirements() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___requirements;
}
constexpr ::UnityEngine::Rendering::Universal::ScriptableRenderPassInput const& GlobalNamespace::FullScreenPassRendererFeature::__cordl_internal_get_requirements() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___requirements;
}
constexpr void GlobalNamespace::FullScreenPassRendererFeature::__cordl_internal_set_requirements(::UnityEngine::Rendering::Universal::ScriptableRenderPassInput value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___requirements = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::FullScreenPassRendererFeature::__cordl_internal_get_passMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___passMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::FullScreenPassRendererFeature::__cordl_internal_get_passMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___passMaterial;
}
constexpr void GlobalNamespace::FullScreenPassRendererFeature::__cordl_internal_set_passMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___passMaterial)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::FullScreenPassRendererFeature::__cordl_internal_get_passIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___passIndex;
}
constexpr int32_t const& GlobalNamespace::FullScreenPassRendererFeature::__cordl_internal_get_passIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___passIndex;
}
constexpr void GlobalNamespace::FullScreenPassRendererFeature::__cordl_internal_set_passIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___passIndex = value;
}
constexpr bool& GlobalNamespace::FullScreenPassRendererFeature::__cordl_internal_get_bindDepthStencilAttachment() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bindDepthStencilAttachment;
}
constexpr bool const& GlobalNamespace::FullScreenPassRendererFeature::__cordl_internal_get_bindDepthStencilAttachment() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bindDepthStencilAttachment;
}
constexpr void GlobalNamespace::FullScreenPassRendererFeature::__cordl_internal_set_bindDepthStencilAttachment(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bindDepthStencilAttachment = value;
}
constexpr ::GlobalNamespace::FullScreenPassRendererFeature_FullScreenRenderPass*& GlobalNamespace::FullScreenPassRendererFeature::__cordl_internal_get_m_FullScreenPass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FullScreenPass;
}
constexpr ::GlobalNamespace::FullScreenPassRendererFeature_FullScreenRenderPass* const& GlobalNamespace::FullScreenPassRendererFeature::__cordl_internal_get_m_FullScreenPass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FullScreenPass;
}
constexpr void GlobalNamespace::FullScreenPassRendererFeature::__cordl_internal_set_m_FullScreenPass(::GlobalNamespace::FullScreenPassRendererFeature_FullScreenRenderPass* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_FullScreenPass)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::FullScreenPassRendererFeature_Version& GlobalNamespace::FullScreenPassRendererFeature::__cordl_internal_get_m_Version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Version;
}
constexpr ::GlobalNamespace::FullScreenPassRendererFeature_Version const& GlobalNamespace::FullScreenPassRendererFeature::__cordl_internal_get_m_Version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Version;
}
constexpr void GlobalNamespace::FullScreenPassRendererFeature::__cordl_internal_set_m_Version(::GlobalNamespace::FullScreenPassRendererFeature_Version value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Version = value;
}
inline void GlobalNamespace::FullScreenPassRendererFeature::Create() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FullScreenPassRendererFeature*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::FullScreenPassRendererFeature::RequireRenderingLayers(bool isDeferred, bool needsGBufferAccurateNormals,
                                                                                   ::ByRef<::UnityEngine::Rendering::Universal::RenderingLayerUtils_Event> atEvent,
                                                                                   ::ByRef<::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize> maskSize) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FullScreenPassRendererFeature*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, isDeferred, needsGBufferAccurateNormals, atEvent, maskSize);
}
inline void GlobalNamespace::FullScreenPassRendererFeature::AddRenderPasses(::UnityEngine::Rendering::Universal::ScriptableRenderer* renderer,
                                                                            ::ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FullScreenPassRendererFeature*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, renderer, renderingData);
}
inline void GlobalNamespace::FullScreenPassRendererFeature::Dispose(bool disposing) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FullScreenPassRendererFeature*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disposing);
}
inline void GlobalNamespace::FullScreenPassRendererFeature::UpgradeIfNeeded() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FullScreenPassRendererFeature*>::get(),
                                                                             "UpgradeIfNeeded", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::FullScreenPassRendererFeature::UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FullScreenPassRendererFeature*>::get(),
                                               "UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::FullScreenPassRendererFeature::UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FullScreenPassRendererFeature*>::get(),
                                               "UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::FullScreenPassRendererFeature::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FullScreenPassRendererFeature*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::FullScreenPassRendererFeature* GlobalNamespace::FullScreenPassRendererFeature::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::FullScreenPassRendererFeature*>());
}
/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr GlobalNamespace::FullScreenPassRendererFeature::operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept {
  return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
constexpr ::UnityEngine::ISerializationCallbackReceiver* GlobalNamespace::FullScreenPassRendererFeature::i___UnityEngine__ISerializationCallbackReceiver() noexcept {
  return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FullScreenPassRendererFeature::FullScreenPassRendererFeature() {}
