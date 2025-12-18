#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/PassFragmentData.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__AccessFlags_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__ResourceHandle_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/zzzz__PassFragmentData_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassFragmentData.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassFragmentData::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassFragmentData::GetHashCode)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6642240;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassFragmentData>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassFragmentData>::get(), 2));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassFragmentData.SameSubResource
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ByRef<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassFragmentData>,
                                                                                           ::ByRef<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassFragmentData>)>(
    &::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassFragmentData::SameSubResource)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x66422cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassFragmentData>::get(), "SameSubResource",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassFragmentData>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassFragmentData>>::get() })));
    return ___internal_method;
  }
};
inline int32_t UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassFragmentData::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassFragmentData>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassFragmentData::SameSubResource(
    ::ByRef<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassFragmentData> x,
    ::ByRef<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassFragmentData> y) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassFragmentData>::get(), "SameSubResource",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassFragmentData>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassFragmentData>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, x, y);
}
// Ctor Parameters [CppParam { name: "resource", ty: "::UnityEngine::Rendering::RenderGraphModule::ResourceHandle", modifiers: "", def_value: Some("{}") }, CppParam { name: "accessFlags", ty:
// "::UnityEngine::Rendering::RenderGraphModule::AccessFlags", modifiers: "", def_value: Some("{}") }, CppParam { name: "mipLevel", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "depthSlice", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassFragmentData::PassFragmentData(::UnityEngine::Rendering::RenderGraphModule::ResourceHandle resource,
                                                                                                                    ::UnityEngine::Rendering::RenderGraphModule::AccessFlags accessFlags,
                                                                                                                    int32_t mipLevel, int32_t depthSlice) noexcept {
  this->resource = resource;
  this->accessFlags = accessFlags;
  this->mipLevel = mipLevel;
  this->depthSlice = depthSlice;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::PassFragmentData::PassFragmentData() {}
