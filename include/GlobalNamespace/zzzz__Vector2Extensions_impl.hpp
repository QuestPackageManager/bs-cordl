#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__Vector2Extensions_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::Vector2Extensions.SignedAngleToLine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(::UnityEngine::Vector2, ::UnityEngine::Vector2)>(
    &::GlobalNamespace::Vector2Extensions::SignedAngleToLine)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0xe28b7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Vector2Extensions*>::get(), "SignedAngleToLine", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
    return ___internal_method;
  }
};
inline float_t GlobalNamespace::Vector2Extensions::SignedAngleToLine(::UnityEngine::Vector2 vec, ::UnityEngine::Vector2 line) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Vector2Extensions*>::get(), "SignedAngleToLine", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, vec, line);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Vector2Extensions::Vector2Extensions() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
