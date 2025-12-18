#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UxmlUtility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlUtility_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::UxmlUtility.ParseStringListAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::StringW>* (*)(::StringW)>(
    &::UnityEngine::UIElements::UxmlUtility::ParseStringListAttribute)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x6af5d60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UxmlUtility*>::get(), "ParseStringListAttribute",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline ::System::Collections::Generic::List_1<::StringW>* UnityEngine::UIElements::UxmlUtility::ParseStringListAttribute(::StringW itemList) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UxmlUtility*>::get(), "ParseStringListAttribute",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::StringW>*, false>(nullptr, ___internal_method, itemList);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UxmlUtility::UxmlUtility() {}
