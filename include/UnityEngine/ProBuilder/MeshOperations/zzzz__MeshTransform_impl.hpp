#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/MeshOperations/MeshTransform.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ProBuilder/MeshOperations/zzzz__MeshTransform_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__PivotLocation_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__ProBuilderMesh_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::MeshTransform.SetPivot
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::PivotLocation)>(
    &::UnityEngine::ProBuilder::MeshOperations::MeshTransform::SetPivot)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x477e73c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::MeshTransform*>::get(), "SetPivot", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::PivotLocation>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::MeshTransform.CenterPivot
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::ArrayW<int32_t, ::Array<int32_t>*>)>(
    &::UnityEngine::ProBuilder::MeshOperations::MeshTransform::CenterPivot)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0x477a034;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::MeshTransform*>::get(), "CenterPivot", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::MeshTransform.SetPivot
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::Vector3)>(
    &::UnityEngine::ProBuilder::MeshOperations::MeshTransform::SetPivot)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x477e7d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::MeshTransform*>::get(), "SetPivot", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::MeshTransform.FreezeScaleTransform
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::ProBuilder::ProBuilderMesh*)>(
    &::UnityEngine::ProBuilder::MeshOperations::MeshTransform::FreezeScaleTransform)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x477e968;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::MeshTransform*>::get(), "FreezeScaleTransform", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::ProBuilder::MeshOperations::MeshTransform::SetPivot(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::ProBuilder::PivotLocation pivotLocation) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::MeshTransform*>::get(), "SetPivot", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::PivotLocation>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, mesh, pivotLocation);
}
inline void UnityEngine::ProBuilder::MeshOperations::MeshTransform::CenterPivot(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::ArrayW<int32_t, ::Array<int32_t>*> indexes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::MeshTransform*>::get(), "CenterPivot", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, mesh, indexes);
}
inline void UnityEngine::ProBuilder::MeshOperations::MeshTransform::SetPivot(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::Vector3 worldPosition) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::MeshTransform*>::get(), "SetPivot", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, mesh, worldPosition);
}
inline void UnityEngine::ProBuilder::MeshOperations::MeshTransform::FreezeScaleTransform(::UnityEngine::ProBuilder::ProBuilderMesh* mesh) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::MeshTransform*>::get(), "FreezeScaleTransform", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, mesh);
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::MeshOperations::MeshTransform::MeshTransform() {}
