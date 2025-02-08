#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StyleSheets/StyleSheetExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__StyleSheetExtensions_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleSheet_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleValueHandle_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StyleSheetExtensions.ReadAsString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::UnityEngine::UIElements::StyleSheet*, ::UnityEngine::UIElements::StyleValueHandle)>(
    &::UnityEngine::UIElements::StyleSheets::StyleSheetExtensions::ReadAsString)> {
  constexpr static std::size_t size = 0x2e4;
  constexpr static std::size_t addrs = 0x49dfd50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::StyleSheetExtensions*>::get(), "ReadAsString", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheet*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleValueHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::StyleSheetExtensions.IsVarFunction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::UIElements::StyleValueHandle)>(
    &::UnityEngine::UIElements::StyleSheets::StyleSheetExtensions::IsVarFunction)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x49e0034;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::StyleSheetExtensions*>::get(), "IsVarFunction", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleValueHandle>::get() })));
    return ___internal_method;
  }
};
inline ::StringW UnityEngine::UIElements::StyleSheets::StyleSheetExtensions::ReadAsString(::UnityEngine::UIElements::StyleSheet* sheet, ::UnityEngine::UIElements::StyleValueHandle handle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::StyleSheetExtensions*>::get(), "ReadAsString", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheet*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleValueHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, sheet, handle);
}
inline bool UnityEngine::UIElements::StyleSheets::StyleSheetExtensions::IsVarFunction(::UnityEngine::UIElements::StyleValueHandle handle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::StyleSheetExtensions*>::get(), "IsVarFunction", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleValueHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, handle);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::StyleSheets::StyleSheetExtensions::StyleSheetExtensions() {}
