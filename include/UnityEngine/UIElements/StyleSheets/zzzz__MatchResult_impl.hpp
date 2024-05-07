#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StyleSheets/MatchResult.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__MatchResultErrorCode_impl.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__MatchResult_def.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__MatchResultErrorCode_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::MatchResult.get_success
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::StyleSheets::MatchResult::*)()>(
    &::UnityEngine::UIElements::StyleSheets::MatchResult::get_success)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x354529c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::MatchResult>::get(),
                                                                               "get_success", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline bool UnityEngine::UIElements::StyleSheets::MatchResult::get_success() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::MatchResult>::get(),
                                                                             "get_success", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "errorCode", ty: "::UnityEngine::UIElements::StyleSheets::MatchResultErrorCode", modifiers: "", def_value: Some("{}") }, CppParam { name: "errorValue", ty:
// "::StringW", modifiers: "", def_value: Some("nullptr") }]
constexpr ::UnityEngine::UIElements::StyleSheets::MatchResult::MatchResult(::UnityEngine::UIElements::StyleSheets::MatchResultErrorCode errorCode, ::StringW errorValue) noexcept {
  this->errorCode = errorCode;
  this->errorValue = errorValue;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::StyleSheets::MatchResult::MatchResult() {}
