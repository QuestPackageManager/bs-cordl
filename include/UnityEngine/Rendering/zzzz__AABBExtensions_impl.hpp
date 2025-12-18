#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/AABBExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__AABBExtensions_def.hpp"
#include "UnityEngine/Rendering/zzzz__AABB_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::AABBExtensions.ToAABB
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::AABB (*)(::UnityEngine::Bounds)>(&::UnityEngine::Rendering::AABBExtensions::ToAABB)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6653138;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::AABBExtensions*>::get(), "ToAABB", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Bounds>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::AABBExtensions.ToBounds
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Bounds (*)(::UnityEngine::Rendering::AABB)>(&::UnityEngine::Rendering::AABBExtensions::ToBounds)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x665314c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::AABBExtensions*>::get(), "ToBounds", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::AABB>::get() })));
    return ___internal_method;
  }
};
inline ::UnityEngine::Rendering::AABB UnityEngine::Rendering::AABBExtensions::ToAABB(::UnityEngine::Bounds bounds) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::AABBExtensions*>::get(), "ToAABB", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Bounds>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::AABB, false>(nullptr, ___internal_method, bounds);
}
inline ::UnityEngine::Bounds UnityEngine::Rendering::AABBExtensions::ToBounds(::UnityEngine::Rendering::AABB aabb) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::AABBExtensions*>::get(), "ToBounds", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::AABB>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds, false>(nullptr, ___internal_method, aabb);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::AABBExtensions::AABBExtensions() {}
