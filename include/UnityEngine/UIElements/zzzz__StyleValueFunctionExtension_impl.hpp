#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__StyleValueFunctionExtension_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleValueFunction_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::StyleValueFunctionExtension.ToUssString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::UnityEngine::UIElements::StyleValueFunction)>(
    &::UnityEngine::UIElements::StyleValueFunctionExtension::ToUssString)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x35c02d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleValueFunctionExtension*>::get(), "ToUssString", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleValueFunction>::get() })));
    return ___internal_method;
  }
};
inline ::StringW UnityEngine::UIElements::StyleValueFunctionExtension::ToUssString(::UnityEngine::UIElements::StyleValueFunction svf) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleValueFunctionExtension*>::get(), "ToUssString", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleValueFunction>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, svf);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::StyleValueFunctionExtension::StyleValueFunctionExtension() {}
