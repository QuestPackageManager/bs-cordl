#pragma once
// IWYU pragma private; include "UnityEngine\ProBuilder\MeshOperations\VertexEditing.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ProBuilder/MeshOperations/zzzz__VertexEditing_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__EdgeLookup_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__Edge_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__FaceRebuildData_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__ProBuilderMesh_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__SimpleTuple_2_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__Vertex_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__WingedEdge_def.hpp"
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::VertexEditing.MergeVertices
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::ArrayW<int32_t>, bool)>(
    &::UnityEngine::ProBuilder::MeshOperations::VertexEditing::MergeVertices)> {
  constexpr static std::size_t size = 0x31c;
  constexpr static std::size_t addrs = 0x6740cd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::VertexEditing*>(),
                                         { "MergeVertices", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::VertexEditing.SplitVertices
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::Edge)>(
    &::UnityEngine::ProBuilder::MeshOperations::VertexEditing::SplitVertices)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6740ff4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::VertexEditing*>(),
                                                { "SplitVertices", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Edge>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::VertexEditing.SplitVertices
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<int32_t>*)>(
    &::UnityEngine::ProBuilder::MeshOperations::VertexEditing::SplitVertices)> {
  constexpr static std::size_t size = 0x3f0;
  constexpr static std::size_t addrs = 0x6741080;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::VertexEditing*>(),
                            { "SplitVertices", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::VertexEditing.WeldVertices
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int32_t> (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<int32_t>*, float_t)>(
    &::UnityEngine::ProBuilder::MeshOperations::VertexEditing::WeldVertices)> {
  constexpr static std::size_t size = 0xce4;
  constexpr static std::size_t addrs = 0x6741470;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::VertexEditing*>(),
                                                             { "WeldVertices",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<int32_t>*>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::VertexEditing.ExplodeVertex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::ProBuilder::FaceRebuildData* (*)(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>*,
                                                                ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::WingedEdge*, int32_t>>*,
                                                                float_t, ::by_ref<::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::List_1<int32_t>*>*>)>(
        &::UnityEngine::ProBuilder::MeshOperations::VertexEditing::ExplodeVertex)> {
  constexpr static std::size_t size = 0xc14;
  constexpr static std::size_t addrs = 0x6742154;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::VertexEditing*>(),
                            { "ExplodeVertex",
                              {},
                              { ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>*>(),
                                ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::WingedEdge*, int32_t>>*>(),
                                ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::List_1<int32_t>*>*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::VertexEditing.AlignEdgeWithDirection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ProBuilder::Edge (*)(::UnityEngine::ProBuilder::EdgeLookup, int32_t)>(
    &::UnityEngine::ProBuilder::MeshOperations::VertexEditing::AlignEdgeWithDirection)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6742d68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::VertexEditing*>(),
                                                             { "AlignEdgeWithDirection", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::EdgeLookup>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline int32_t UnityEngine::ProBuilder::MeshOperations::VertexEditing::MergeVertices(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::ArrayW<int32_t> indexes, bool collapseToFirst) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::VertexEditing*>(),
                                              { "MergeVertices", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, mesh, indexes, collapseToFirst);
}
inline void UnityEngine::ProBuilder::MeshOperations::VertexEditing::SplitVertices(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::ProBuilder::Edge edge) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::VertexEditing*>(),
                                              { "SplitVertices", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Edge>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mesh, edge);
}
inline void UnityEngine::ProBuilder::MeshOperations::VertexEditing::SplitVertices(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::IEnumerable_1<int32_t>* vertices) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::VertexEditing*>(),
                          { "SplitVertices", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mesh, vertices);
}
inline ::ArrayW<int32_t> UnityEngine::ProBuilder::MeshOperations::VertexEditing::WeldVertices(::UnityEngine::ProBuilder::ProBuilderMesh* mesh,
                                                                                              ::System::Collections::Generic::IEnumerable_1<int32_t>* indexes, float_t neighborRadius) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::VertexEditing*>(),
                          { "WeldVertices",
                            {},
                            { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<int32_t>*>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>>(nullptr, ___internal_method, mesh, indexes, neighborRadius);
}
inline ::UnityEngine::ProBuilder::FaceRebuildData* UnityEngine::ProBuilder::MeshOperations::VertexEditing::ExplodeVertex(
    ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>* vertices,
    ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::WingedEdge*, int32_t>>* edgeAndCommonIndex, float_t distance,
    ::by_ref<::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::List_1<int32_t>*>*> appendedVertices) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::VertexEditing*>(),
                          { "ExplodeVertex",
                            {},
                            { ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>*>(),
                              ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::WingedEdge*, int32_t>>*>(),
                              ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::List_1<int32_t>*>*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::FaceRebuildData*>(nullptr, ___internal_method, vertices, edgeAndCommonIndex, distance, appendedVertices);
}
inline ::UnityEngine::ProBuilder::Edge UnityEngine::ProBuilder::MeshOperations::VertexEditing::AlignEdgeWithDirection(::UnityEngine::ProBuilder::EdgeLookup edge, int32_t commonIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::VertexEditing*>(),
                                                           { "AlignEdgeWithDirection", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::EdgeLookup>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Edge>(nullptr, ___internal_method, edge, commonIndex);
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::MeshOperations::VertexEditing::VertexEditing() {}
