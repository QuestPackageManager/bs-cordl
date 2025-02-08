#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/Shapes/Sphere.hpp"
#include "UnityEngine/ProBuilder/Shapes/zzzz__Shape_impl.hpp"
#include "UnityEngine/ProBuilder/Shapes/zzzz__Sphere_def.hpp"
#include "UnityEngine/ProBuilder/Shapes/zzzz__Shape_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__ProBuilderMesh_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::ProBuilder::Shapes::Sphere.CopyShape
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::Shapes::Sphere::*)(::UnityEngine::ProBuilder::Shapes::Shape*)>(
    &::UnityEngine::ProBuilder::Shapes::Sphere::CopyShape)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x4757ac8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Shapes::Sphere*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Shapes::Sphere*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Shapes::Sphere.UpdateBounds
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Bounds (::UnityEngine::ProBuilder::Shapes::Sphere::*)(
    ::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Bounds)>(&::UnityEngine::ProBuilder::Shapes::Sphere::UpdateBounds)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x4757b4c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Shapes::Sphere*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Shapes::Sphere*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Shapes::Sphere.RebuildMesh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Bounds (::UnityEngine::ProBuilder::Shapes::Sphere::*)(
    ::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&::UnityEngine::ProBuilder::Shapes::Sphere::RebuildMesh)> {
  constexpr static std::size_t size = 0x8d8;
  constexpr static std::size_t addrs = 0x4757bb8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Shapes::Sphere*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Shapes::Sphere*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Shapes::Sphere.SubdivideIcosahedron
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> (*)(
    ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>, float_t)>(&::UnityEngine::ProBuilder::Shapes::Sphere::SubdivideIcosahedron)> {
  constexpr static std::size_t size = 0x568;
  constexpr static std::size_t addrs = 0x4758490;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Shapes::Sphere*>::get(), "SubdivideIcosahedron", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Shapes::Sphere._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::Shapes::Sphere::*)()>(&::UnityEngine::ProBuilder::Shapes::Sphere::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x47589f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Shapes::Sphere*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::ProBuilder::Shapes::Sphere::__cordl_internal_get_m_Subdivisions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Subdivisions;
}
constexpr int32_t const& UnityEngine::ProBuilder::Shapes::Sphere::__cordl_internal_get_m_Subdivisions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Subdivisions;
}
constexpr void UnityEngine::ProBuilder::Shapes::Sphere::__cordl_internal_set_m_Subdivisions(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Subdivisions = value;
}
constexpr int32_t& UnityEngine::ProBuilder::Shapes::Sphere::__cordl_internal_get_m_BottomMostVertexIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BottomMostVertexIndex;
}
constexpr int32_t const& UnityEngine::ProBuilder::Shapes::Sphere::__cordl_internal_get_m_BottomMostVertexIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BottomMostVertexIndex;
}
constexpr void UnityEngine::ProBuilder::Shapes::Sphere::__cordl_internal_set_m_BottomMostVertexIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_BottomMostVertexIndex = value;
}
constexpr bool& UnityEngine::ProBuilder::Shapes::Sphere::__cordl_internal_get_m_Smooth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Smooth;
}
constexpr bool const& UnityEngine::ProBuilder::Shapes::Sphere::__cordl_internal_get_m_Smooth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Smooth;
}
constexpr void UnityEngine::ProBuilder::Shapes::Sphere::__cordl_internal_set_m_Smooth(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Smooth = value;
}
inline void UnityEngine::ProBuilder::Shapes::Sphere::setStaticF_k_IcosphereVertices(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>, "k_IcosphereVertices",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Shapes::Sphere*>::get>(
      std::forward<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>>(value));
}
inline ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> UnityEngine::ProBuilder::Shapes::Sphere::getStaticF_k_IcosphereVertices() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>, "k_IcosphereVertices",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Shapes::Sphere*>::get>();
}
inline void UnityEngine::ProBuilder::Shapes::Sphere::setStaticF_k_IcosphereTriangles(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<int32_t, ::Array<int32_t>*>, "k_IcosphereTriangles",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Shapes::Sphere*>::get>(std::forward<::ArrayW<int32_t, ::Array<int32_t>*>>(value));
}
inline ::ArrayW<int32_t, ::Array<int32_t>*> UnityEngine::ProBuilder::Shapes::Sphere::getStaticF_k_IcosphereTriangles() {
  return ::cordl_internals::getStaticField<::ArrayW<int32_t, ::Array<int32_t>*>, "k_IcosphereTriangles",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Shapes::Sphere*>::get>();
}
inline void UnityEngine::ProBuilder::Shapes::Sphere::CopyShape(::UnityEngine::ProBuilder::Shapes::Shape* shape) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Shapes::Sphere*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, shape);
}
inline ::UnityEngine::Bounds UnityEngine::ProBuilder::Shapes::Sphere::UpdateBounds(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::Vector3 size, ::UnityEngine::Quaternion rotation,
                                                                                   ::UnityEngine::Bounds bounds) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Shapes::Sphere*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds, false>(this, ___internal_method, mesh, size, rotation, bounds);
}
inline ::UnityEngine::Bounds UnityEngine::ProBuilder::Shapes::Sphere::RebuildMesh(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::Vector3 size, ::UnityEngine::Quaternion rotation) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Shapes::Sphere*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds, false>(this, ___internal_method, mesh, size, rotation);
}
inline ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>
UnityEngine::ProBuilder::Shapes::Sphere::SubdivideIcosahedron(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> vertices, float_t radius) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Shapes::Sphere*>::get(), "SubdivideIcosahedron", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>, false>(nullptr, ___internal_method, vertices, radius);
}
inline void UnityEngine::ProBuilder::Shapes::Sphere::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Shapes::Sphere*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::ProBuilder::Shapes::Sphere* UnityEngine::ProBuilder::Shapes::Sphere::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::ProBuilder::Shapes::Sphere*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::Shapes::Sphere::Sphere() {}
