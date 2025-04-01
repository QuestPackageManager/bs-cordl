#pragma once
// IWYU pragma private; include "GlobalNamespace/SplineUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__SplineUtils_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SplineUtils.Interpolate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t)>(&::GlobalNamespace::SplineUtils::Interpolate)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x4084258;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SplineUtils*>::get(), "Interpolate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
inline ::UnityEngine::Vector3 GlobalNamespace::SplineUtils::Interpolate(::UnityEngine::Vector3 t0, ::UnityEngine::Vector3 p0, ::UnityEngine::Vector3 p1, ::UnityEngine::Vector3 t1, float_t f) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SplineUtils*>::get(), "Interpolate", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(nullptr, ___internal_method, t0, p0, p1, t1, f);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SplineUtils::SplineUtils() {}
