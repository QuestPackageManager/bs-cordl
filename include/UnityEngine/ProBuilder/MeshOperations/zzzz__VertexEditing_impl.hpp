#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ProBuilder/MeshOperations/zzzz__VertexEditing_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__Vertex_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__SimpleTuple_2_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__FaceRebuildData_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__ProBuilderMesh_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__WingedEdge_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__EdgeLookup_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__Edge_def.hpp"
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::VertexEditing.MergeVertices
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::ArrayW<int32_t, ::Array<int32_t>*>, bool)>(
    &::UnityEngine::ProBuilder::MeshOperations::VertexEditing::MergeVertices)> {
  constexpr static std::size_t size = 0x32c;
  constexpr static std::size_t addrs = 0x2bc68b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::VertexEditing*>::get(), "MergeVertices", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::VertexEditing.SplitVertices
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::Edge)>(
    &::UnityEngine::ProBuilder::MeshOperations::VertexEditing::SplitVertices)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2bc6be0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::VertexEditing*>::get(), "SplitVertices", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Edge>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::VertexEditing.SplitVertices
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<int32_t>*)>(
    &::UnityEngine::ProBuilder::MeshOperations::VertexEditing::SplitVertices)> {
  constexpr static std::size_t size = 0x424;
  constexpr static std::size_t addrs = 0x2bc6c68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::VertexEditing*>::get(), "SplitVertices", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<int32_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::VertexEditing.WeldVertices
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<int32_t, ::Array<int32_t>*> (*)(
    ::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<int32_t>*, float_t)>(&::UnityEngine::ProBuilder::MeshOperations::VertexEditing::WeldVertices)> {
  constexpr static std::size_t size = 0xce8;
  constexpr static std::size_t addrs = 0x2bc708c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::VertexEditing*>::get(), "WeldVertices", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<int32_t>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::VertexEditing.ExplodeVertex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::ProBuilder::FaceRebuildData* (*)(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>*,
                                                                ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::WingedEdge*, int32_t>>*,
                                                                float_t, ByRef<::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::List_1<int32_t>*>*>)>(
        &::UnityEngine::ProBuilder::MeshOperations::VertexEditing::ExplodeVertex)> {
  constexpr static std::size_t size = 0xb90;
  constexpr static std::size_t addrs = 0x2bc7d74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::VertexEditing*>::get(), "ExplodeVertex", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::WingedEdge*, int32_t>>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::List_1<int32_t>*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::VertexEditing.AlignEdgeWithDirection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::Edge (*)(::UnityEngine::ProBuilder::EdgeLookup, int32_t)>(
    &::UnityEngine::ProBuilder::MeshOperations::VertexEditing::AlignEdgeWithDirection)> {
  constexpr static std::size_t size = 0x1048;
  constexpr static std::size_t addrs = 0x2bc8904;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::VertexEditing*>::get(), "AlignEdgeWithDirection", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::EdgeLookup>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
/// @param collapseToFirst: bool (default: false)
inline int32_t UnityEngine::ProBuilder::MeshOperations::VertexEditing::MergeVertices(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::ArrayW<int32_t, ::Array<int32_t>*> indexes,
                                                                                     bool collapseToFirst) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::VertexEditing*>::get(), "MergeVertices", std::vector<Il2CppClass*>{},
                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get(),
                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, mesh, indexes, collapseToFirst);
}
inline void UnityEngine::ProBuilder::MeshOperations::VertexEditing::SplitVertices(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::ProBuilder::Edge edge) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::VertexEditing*>::get(), "SplitVertices", std::vector<Il2CppClass*>{},
                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Edge>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, mesh, edge);
}
inline void UnityEngine::ProBuilder::MeshOperations::VertexEditing::SplitVertices(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::IEnumerable_1<int32_t>* vertices) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::VertexEditing*>::get(), "SplitVertices", std::vector<Il2CppClass*>{},
                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<int32_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, mesh, vertices);
}
inline ::ArrayW<int32_t, ::Array<int32_t>*> UnityEngine::ProBuilder::MeshOperations::VertexEditing::WeldVertices(::UnityEngine::ProBuilder::ProBuilderMesh* mesh,
                                                                                                                 ::System::Collections::Generic::IEnumerable_1<int32_t>* indexes,
                                                                                                                 float_t neighborRadius) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::VertexEditing*>::get(), "WeldVertices", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<int32_t>*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t, ::Array<int32_t>*>, false>(nullptr, ___internal_method, mesh, indexes, neighborRadius);
}
inline ::UnityEngine::ProBuilder::FaceRebuildData* UnityEngine::ProBuilder::MeshOperations::VertexEditing::ExplodeVertex(
    ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>* vertices,
    ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::WingedEdge*, int32_t>>* edgeAndCommonIndex, float_t distance,
    ByRef<::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::List_1<int32_t>*>*> appendedVertices) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::VertexEditing*>::get(), "ExplodeVertex", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::WingedEdge*, int32_t>>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::List_1<int32_t>*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::FaceRebuildData*, false>(nullptr, ___internal_method, vertices, edgeAndCommonIndex, distance, appendedVertices);
}
inline ::UnityEngine::ProBuilder::Edge UnityEngine::ProBuilder::MeshOperations::VertexEditing::AlignEdgeWithDirection(::UnityEngine::ProBuilder::EdgeLookup edge, int32_t commonIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::VertexEditing*>::get(), "AlignEdgeWithDirection", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::EdgeLookup>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Edge, false>(nullptr, ___internal_method, edge, commonIndex);
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::MeshOperations::VertexEditing::VertexEditing() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
