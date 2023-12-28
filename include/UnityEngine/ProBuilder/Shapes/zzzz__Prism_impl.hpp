#pragma once
#include "UnityEngine/ProBuilder/Shapes/zzzz__Shape_impl.hpp"
#include "UnityEngine/ProBuilder/Shapes/zzzz__Prism_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/ProBuilder/Shapes/zzzz__Shape_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__ProBuilderMesh_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::ProBuilder::Shapes::Prism.CopyShape
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::Shapes::Prism::*)(::UnityEngine::ProBuilder::Shapes::Shape*)>(
    &::UnityEngine::ProBuilder::Shapes::Prism::CopyShape)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2b8c3a4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Shapes::Prism*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Shapes::Prism*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Shapes::Prism.RebuildMesh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Bounds (::UnityEngine::ProBuilder::Shapes::Prism::*)(
    ::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&::UnityEngine::ProBuilder::Shapes::Prism::RebuildMesh)> {
  constexpr static std::size_t size = 0x814;
  constexpr static std::size_t addrs = 0x2b8c3a8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Shapes::Prism*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Shapes::Prism*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Shapes::Prism._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::Shapes::Prism::*)()>(&::UnityEngine::ProBuilder::Shapes::Prism::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b8cbbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Shapes::Prism*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline void UnityEngine::ProBuilder::Shapes::Prism::CopyShape(::UnityEngine::ProBuilder::Shapes::Shape* shape) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Shapes::Prism*>::get(), "CopyShape", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Shapes::Shape*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, shape);
}
inline ::UnityEngine::Bounds UnityEngine::ProBuilder::Shapes::Prism::RebuildMesh(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::Vector3 size, ::UnityEngine::Quaternion rotation) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Shapes::Prism*>::get(), "RebuildMesh", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds, false>(this, ___internal_method, mesh, size, rotation);
}
inline ::UnityEngine::ProBuilder::Shapes::Prism* UnityEngine::ProBuilder::Shapes::Prism::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::ProBuilder::Shapes::Prism*>());
}
inline void UnityEngine::ProBuilder::Shapes::Prism::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Shapes::Prism*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::Shapes::Prism::Prism() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
