#pragma once
// IWYU pragma private; include "GlobalNamespace/UIExtensionMethods.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__UIExtensionMethods_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::UIExtensionMethods.CopySizeAndPositionFrom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::RectTransform*, ::UnityEngine::RectTransform*)>(
    &::GlobalNamespace::UIExtensionMethods::CopySizeAndPositionFrom)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x39c9a88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UIExtensionMethods*>::get(), "CopySizeAndPositionFrom", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RectTransform*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RectTransform*>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::UIExtensionMethods::CopySizeAndPositionFrom(::UnityEngine::RectTransform* target, ::UnityEngine::RectTransform* source) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UIExtensionMethods*>::get(), "CopySizeAndPositionFrom", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RectTransform*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RectTransform*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, target, source);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::UIExtensionMethods::UIExtensionMethods() {}
