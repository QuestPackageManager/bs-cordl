#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/AABB.hpp"
#include "Unity/Mathematics/zzzz__float3_impl.hpp"
#include "UnityEngine/Rendering/zzzz__AABB_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "Unity/Mathematics/zzzz__float4x4_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::AABB.get_min
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float3 (::UnityEngine::Rendering::AABB::*)()>(&::UnityEngine::Rendering::AABB::get_min)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6652ed8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::AABB>::get(), "get_min",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::AABB.get_max
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float3 (::UnityEngine::Rendering::AABB::*)()>(&::UnityEngine::Rendering::AABB::get_max)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6652ef8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::AABB>::get(), "get_max",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::AABB.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::Rendering::AABB::*)()>(&::UnityEngine::Rendering::AABB::ToString)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x6652f18;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::AABB>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::AABB>::get(), 3));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::AABB.RotateExtents
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float3 (*)(
    ::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::Unity::Mathematics::float3)>(&::UnityEngine::Rendering::AABB::RotateExtents)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6652ff0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::AABB>::get(), "RotateExtents", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::AABB.Transform
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::AABB (*)(::Unity::Mathematics::float4x4, ::UnityEngine::Rendering::AABB)>(
    &::UnityEngine::Rendering::AABB::Transform)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x6653064;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::AABB>::get(), "Transform", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float4x4>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::AABB>::get() })));
    return ___internal_method;
  }
};
inline ::Unity::Mathematics::float3 UnityEngine::Rendering::AABB::get_min() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::AABB>::get(), "get_min",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3, false>(this, ___internal_method);
}
inline ::Unity::Mathematics::float3 UnityEngine::Rendering::AABB::get_max() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::AABB>::get(), "get_max",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3, false>(this, ___internal_method);
}
inline ::StringW UnityEngine::Rendering::AABB::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::AABB>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::Unity::Mathematics::float3 UnityEngine::Rendering::AABB::RotateExtents(::Unity::Mathematics::float3 extents, ::Unity::Mathematics::float3 m0, ::Unity::Mathematics::float3 m1,
                                                                                ::Unity::Mathematics::float3 m2) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::AABB>::get(), "RotateExtents", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float3>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3, false>(nullptr, ___internal_method, extents, m0, m1, m2);
}
inline ::UnityEngine::Rendering::AABB UnityEngine::Rendering::AABB::Transform(::Unity::Mathematics::float4x4 transform, ::UnityEngine::Rendering::AABB localBounds) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::AABB>::get(), "Transform", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Mathematics::float4x4>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::AABB>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::AABB, false>(nullptr, ___internal_method, transform, localBounds);
}
// Ctor Parameters [CppParam { name: "center", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: Some("{}") }, CppParam { name: "extents", ty: "::Unity::Mathematics::float3", modifiers:
// "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::AABB::AABB(::Unity::Mathematics::float3 center, ::Unity::Mathematics::float3 extents) noexcept {
  this->center = center;
  this->extents = extents;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::AABB::AABB() {}
