#pragma once
#include "UnityEngine/ProBuilder/Shapes/zzzz__Shape_impl.hpp"
#include "UnityEngine/ProBuilder/Shapes/zzzz__Arch_def.hpp"
#include "UnityEngine/ProBuilder/Shapes/zzzz__Shape_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__ProBuilderMesh_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::ProBuilder::Shapes::Arch.CopyShape
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::Shapes::Arch::*)(::UnityEngine::ProBuilder::Shapes::Shape*)>(
    &::UnityEngine::ProBuilder::Shapes::Arch::CopyShape)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2b86d64;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Shapes::Arch*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Shapes::Arch*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Shapes::Arch.GetFace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> (::UnityEngine::ProBuilder::Shapes::Arch::*)(
    ::UnityEngine::Vector2, ::UnityEngine::Vector2, float_t)>(&::UnityEngine::ProBuilder::Shapes::Arch::GetFace)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2b86df8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Shapes::Arch*>::get(), "GetFace", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Shapes::Arch.RebuildMesh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Bounds (::UnityEngine::ProBuilder::Shapes::Arch::*)(
    ::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&::UnityEngine::ProBuilder::Shapes::Arch::RebuildMesh)> {
  constexpr static std::size_t size = 0xc00;
  constexpr static std::size_t addrs = 0x2b86ebc;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Shapes::Arch*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Shapes::Arch*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Shapes::Arch._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::Shapes::Arch::*)()>(&::UnityEngine::ProBuilder::Shapes::Arch::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2b87abc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Shapes::Arch*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr float_t& UnityEngine::ProBuilder::Shapes::Arch::__get_m_Thickness() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Thickness;
}
constexpr float_t const& UnityEngine::ProBuilder::Shapes::Arch::__get_m_Thickness() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Thickness;
}
constexpr void UnityEngine::ProBuilder::Shapes::Arch::__set_m_Thickness(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Thickness = value;
}
constexpr int32_t& UnityEngine::ProBuilder::Shapes::Arch::__get_m_NumberOfSides() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NumberOfSides;
}
constexpr int32_t const& UnityEngine::ProBuilder::Shapes::Arch::__get_m_NumberOfSides() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NumberOfSides;
}
constexpr void UnityEngine::ProBuilder::Shapes::Arch::__set_m_NumberOfSides(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_NumberOfSides = value;
}
constexpr float_t& UnityEngine::ProBuilder::Shapes::Arch::__get_m_ArchDegrees() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ArchDegrees;
}
constexpr float_t const& UnityEngine::ProBuilder::Shapes::Arch::__get_m_ArchDegrees() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ArchDegrees;
}
constexpr void UnityEngine::ProBuilder::Shapes::Arch::__set_m_ArchDegrees(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ArchDegrees = value;
}
constexpr bool& UnityEngine::ProBuilder::Shapes::Arch::__get_m_EndCaps() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EndCaps;
}
constexpr bool const& UnityEngine::ProBuilder::Shapes::Arch::__get_m_EndCaps() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EndCaps;
}
constexpr void UnityEngine::ProBuilder::Shapes::Arch::__set_m_EndCaps(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_EndCaps = value;
}
constexpr bool& UnityEngine::ProBuilder::Shapes::Arch::__get_m_Smooth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Smooth;
}
constexpr bool const& UnityEngine::ProBuilder::Shapes::Arch::__get_m_Smooth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Smooth;
}
constexpr void UnityEngine::ProBuilder::Shapes::Arch::__set_m_Smooth(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Smooth = value;
}
inline void UnityEngine::ProBuilder::Shapes::Arch::CopyShape(::UnityEngine::ProBuilder::Shapes::Shape* shape) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Shapes::Arch*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, shape);
}
inline ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> UnityEngine::ProBuilder::Shapes::Arch::GetFace(::UnityEngine::Vector2 vertex1, ::UnityEngine::Vector2 vertex2,
                                                                                                                         float_t depth) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Shapes::Arch*>::get(), "GetFace", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>, false>(this, ___internal_method, vertex1, vertex2, depth);
}
inline ::UnityEngine::Bounds UnityEngine::ProBuilder::Shapes::Arch::RebuildMesh(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::Vector3 size, ::UnityEngine::Quaternion rotation) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Shapes::Arch*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds, false>(this, ___internal_method, mesh, size, rotation);
}
inline ::UnityEngine::ProBuilder::Shapes::Arch* UnityEngine::ProBuilder::Shapes::Arch::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::ProBuilder::Shapes::Arch*>());
}
inline void UnityEngine::ProBuilder::Shapes::Arch::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Shapes::Arch*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::Shapes::Arch::Arch() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
