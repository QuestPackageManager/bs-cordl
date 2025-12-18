#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UxmlObjectAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlObjectAttribute_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::UxmlObjectAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UxmlObjectAttribute::*)()>(&::UnityEngine::UIElements::UxmlObjectAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6af44b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UxmlObjectAttribute*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::UxmlObjectAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UxmlObjectAttribute*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::UxmlObjectAttribute* UnityEngine::UIElements::UxmlObjectAttribute::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::UxmlObjectAttribute*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UxmlObjectAttribute::UxmlObjectAttribute() {}
