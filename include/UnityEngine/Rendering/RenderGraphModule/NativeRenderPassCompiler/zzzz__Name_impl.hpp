#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/Name.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/zzzz__Name_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::Name._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::Name::*)(::StringW, bool)>(
    &::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::Name::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6636b58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::Name>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::Name::_ctor(::StringW name, bool computeUTF8ByteCount) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::Name>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name, computeUTF8ByteCount);
}
// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "utf8ByteCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::Name::Name(::StringW name, int32_t utf8ByteCount) noexcept {
  this->name = name;
  this->utf8ByteCount = utf8ByteCount;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::Name::Name() {}
