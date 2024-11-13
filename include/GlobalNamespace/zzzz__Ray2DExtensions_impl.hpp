#pragma once
// IWYU pragma private; include "GlobalNamespace/Ray2DExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__Ray2DExtensions_def.hpp"
#include "UnityEngine/zzzz__Ray2D_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::Ray2DExtensions.CircleIntersections
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::UnityEngine::Ray2D, ::UnityEngine::Vector2, float_t, ::ArrayW<float_t, ::Array<float_t>*>)>(
    &::GlobalNamespace::Ray2DExtensions::CircleIntersections)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x228049c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Ray2DExtensions*>::get(), "CircleIntersections", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Ray2D>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t, ::Array<float_t>*>>::get() })));
    return ___internal_method;
  }
};
inline int32_t GlobalNamespace::Ray2DExtensions::CircleIntersections(::UnityEngine::Ray2D ray, ::UnityEngine::Vector2 circleCenter, float_t radius, ::ArrayW<float_t, ::Array<float_t>*> distances) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Ray2DExtensions*>::get(), "CircleIntersections", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Ray2D>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t, ::Array<float_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, ray, circleCenter, radius, distances);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Ray2DExtensions::Ray2DExtensions() {}
