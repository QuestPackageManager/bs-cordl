#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/ResourceVersionedData.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/zzzz__ResourceVersionedData_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__ResourceHandle_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourceVersionedData.SetWritingPass
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourceVersionedData::*)(
    Il2CppObject*, ::UnityEngine::Rendering::RenderGraphModule::ResourceHandle, int32_t)>(
    &::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourceVersionedData::SetWritingPass)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6645e40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourceVersionedData>::get(),
                                    "SetWritingPass", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Il2CppObject*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourceVersionedData.RegisterReadingPass
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourceVersionedData::*)(
    Il2CppObject*, ::UnityEngine::Rendering::RenderGraphModule::ResourceHandle, int32_t, int32_t)>(
    &::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourceVersionedData::RegisterReadingPass)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x6645e50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourceVersionedData>::get(), "RegisterReadingPass",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Il2CppObject*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourceVersionedData.RemoveReadingPass
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourceVersionedData::*)(
    Il2CppObject*, ::UnityEngine::Rendering::RenderGraphModule::ResourceHandle, int32_t)>(
    &::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourceVersionedData::RemoveReadingPass)> {
  constexpr static std::size_t size = 0x31c;
  constexpr static std::size_t addrs = 0x6645fe4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourceVersionedData>::get(),
                                    "RemoveReadingPass", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Il2CppObject*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourceVersionedData::SetWritingPass(Il2CppObject* ctx, ::UnityEngine::Rendering::RenderGraphModule::ResourceHandle h,
                                                                                                                       int32_t passId) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourceVersionedData>::get(),
                                  "SetWritingPass", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Il2CppObject*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ctx, h, passId);
}
inline void UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourceVersionedData::RegisterReadingPass(Il2CppObject* ctx,
                                                                                                                            ::UnityEngine::Rendering::RenderGraphModule::ResourceHandle h,
                                                                                                                            int32_t passId, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourceVersionedData>::get(), "RegisterReadingPass",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Il2CppObject*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ctx, h, passId, index);
}
inline void UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourceVersionedData::RemoveReadingPass(Il2CppObject* ctx,
                                                                                                                          ::UnityEngine::Rendering::RenderGraphModule::ResourceHandle h,
                                                                                                                          int32_t passId) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourceVersionedData>::get(),
                                  "RemoveReadingPass", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Il2CppObject*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ctx, h, passId);
}
// Ctor Parameters [CppParam { name: "written", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "writePassId", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "numReaders", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourceVersionedData::ResourceVersionedData(bool written, int32_t writePassId, int32_t numReaders) noexcept {
  this->written = written;
  this->writePassId = writePassId;
  this->numReaders = numReaders;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourceVersionedData::ResourceVersionedData() {}
