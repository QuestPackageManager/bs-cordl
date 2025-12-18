#pragma once
// IWYU pragma private; include "GlobalNamespace/ToneMappingExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__GlobalKeyword_impl.hpp"
#include "GlobalNamespace/zzzz__ToneMappingExtensions_def.hpp"
#include "GlobalNamespace/zzzz__ToneMapping_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ToneMappingExtensions.SetShaderKeyword
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::ToneMapping)>(&::GlobalNamespace::ToneMappingExtensions::SetShaderKeyword)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x56b20cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ToneMappingExtensions*>::get(), "SetShaderKeyword", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ToneMapping>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ToneMappingExtensions.SetShaderKeyword
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::ToneMapping, ::UnityEngine::Rendering::CommandBuffer*)>(
    &::GlobalNamespace::ToneMappingExtensions::SetShaderKeyword)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x56b3e2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ToneMappingExtensions*>::get(), "SetShaderKeyword", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ToneMapping>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ToneMappingExtensions::setStaticF__acesToneMappingKeyword(::UnityEngine::Rendering::GlobalKeyword value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::GlobalKeyword, "_acesToneMappingKeyword",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ToneMappingExtensions*>::get>(
      std::forward<::UnityEngine::Rendering::GlobalKeyword>(value));
}
inline ::UnityEngine::Rendering::GlobalKeyword GlobalNamespace::ToneMappingExtensions::getStaticF__acesToneMappingKeyword() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::GlobalKeyword, "_acesToneMappingKeyword",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ToneMappingExtensions*>::get>();
}
inline void GlobalNamespace::ToneMappingExtensions::SetShaderKeyword(::GlobalNamespace::ToneMapping toneMapping) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ToneMappingExtensions*>::get(), "SetShaderKeyword", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ToneMapping>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, toneMapping);
}
inline void GlobalNamespace::ToneMappingExtensions::SetShaderKeyword(::GlobalNamespace::ToneMapping toneMapping, ::UnityEngine::Rendering::CommandBuffer* cmd) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ToneMappingExtensions*>::get(), "SetShaderKeyword", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ToneMapping>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, toneMapping, cmd);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ToneMappingExtensions::ToneMappingExtensions() {}
