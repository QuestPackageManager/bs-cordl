#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__StyleValueKeywordExtension_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleValueKeyword_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::StyleValueKeywordExtension.ToUssString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::UnityEngine::UIElements::StyleValueKeyword)>(
    &::UnityEngine::UIElements::StyleValueKeywordExtension::ToUssString)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x2d03588;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleValueKeywordExtension*>::get(), "ToUssString", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleValueKeyword>::get() })));
    return ___internal_method;
  }
};
inline ::StringW UnityEngine::UIElements::StyleValueKeywordExtension::ToUssString(::UnityEngine::UIElements::StyleValueKeyword svk) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleValueKeywordExtension*>::get(), "ToUssString", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleValueKeyword>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, svk);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::StyleValueKeywordExtension::StyleValueKeywordExtension() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
