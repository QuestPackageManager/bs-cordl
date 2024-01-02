#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__StyleValueFunctionExtension_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleValueFunction_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::StyleValueFunctionExtension.ToUssString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::UnityEngine::UIElements::StyleValueFunction)>(
    &::UnityEngine::UIElements::StyleValueFunctionExtension::ToUssString)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x2e6b438;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleValueFunctionExtension*>::get(), "ToUssString", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleValueFunction>::get() })));
    return ___internal_method;
  }
};
inline ::StringW UnityEngine::UIElements::StyleValueFunctionExtension::ToUssString(::UnityEngine::UIElements::StyleValueFunction svf) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleValueFunctionExtension*>::get(), "ToUssString", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleValueFunction>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, svf);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::StyleValueFunctionExtension::StyleValueFunctionExtension() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
