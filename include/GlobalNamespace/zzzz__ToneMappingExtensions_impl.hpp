#pragma once
// IWYU pragma private; include "GlobalNamespace/ToneMappingExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__ToneMappingExtensions_def.hpp"
#include "GlobalNamespace/zzzz__ToneMapping_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ToneMappingExtensions.SetShaderKeyword
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::ToneMapping)>(&::GlobalNamespace::ToneMappingExtensions::SetShaderKeyword)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x39da178;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ToneMappingExtensions*>::get(), "SetShaderKeyword", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ToneMapping>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ToneMappingExtensions::setStaticF__shaderKeywordMap(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::StringW, ::Array<::StringW>*>, "_shaderKeywordMap",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ToneMappingExtensions*>::get>(
      std::forward<::ArrayW<::StringW, ::Array<::StringW>*>>(value));
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> GlobalNamespace::ToneMappingExtensions::getStaticF__shaderKeywordMap() {
  return ::cordl_internals::getStaticField<::ArrayW<::StringW, ::Array<::StringW>*>, "_shaderKeywordMap",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ToneMappingExtensions*>::get>();
}
inline void GlobalNamespace::ToneMappingExtensions::SetShaderKeyword(::GlobalNamespace::ToneMapping toneMapping) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ToneMappingExtensions*>::get(), "SetShaderKeyword", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ToneMapping>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, toneMapping);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ToneMappingExtensions::ToneMappingExtensions() {}
