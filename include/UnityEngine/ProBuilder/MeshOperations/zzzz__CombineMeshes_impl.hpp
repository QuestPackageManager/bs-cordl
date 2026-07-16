#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/MeshOperations/CombineMeshes.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ProBuilder/MeshOperations/zzzz__CombineMeshes_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "UnityEngine/ProBuilder/MeshOperations/zzzz__CombineMeshes_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__Face_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__ProBuilderMesh_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__SharedVertex_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__Vertex_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::CombineMeshes___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::MeshOperations::CombineMeshes___c::*)()>(
    &::UnityEngine::ProBuilder::MeshOperations::CombineMeshes___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6718b3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::CombineMeshes___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::CombineMeshes___c._SplitByMaxVertexCount_b__5_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ProBuilder::MeshOperations::CombineMeshes___c::*)(::UnityEngine::ProBuilder::Face*)>(
    &::UnityEngine::ProBuilder::MeshOperations::CombineMeshes___c::_SplitByMaxVertexCount_b__5_0)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6718b40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::CombineMeshes___c*>(),
                                                                                           { "<SplitByMaxVertexCount>b__5_0", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Face*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::ProBuilder::MeshOperations::CombineMeshes___c::setStaticF___9(::UnityEngine::ProBuilder::MeshOperations::CombineMeshes___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::ProBuilder::MeshOperations::CombineMeshes___c*, "<>9", ::UnityEngine::ProBuilder::MeshOperations::CombineMeshes___c*>(
      std::forward<::UnityEngine::ProBuilder::MeshOperations::CombineMeshes___c*>(value));
}
inline ::UnityEngine::ProBuilder::MeshOperations::CombineMeshes___c* UnityEngine::ProBuilder::MeshOperations::CombineMeshes___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::ProBuilder::MeshOperations::CombineMeshes___c*, "<>9", ::UnityEngine::ProBuilder::MeshOperations::CombineMeshes___c*>();
}
inline void UnityEngine::ProBuilder::MeshOperations::CombineMeshes___c::setStaticF___9__5_0(::System::Func_2<::UnityEngine::ProBuilder::Face*, int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::ProBuilder::Face*, int32_t>*, "<>9__5_0", ::UnityEngine::ProBuilder::MeshOperations::CombineMeshes___c*>(
      std::forward<::System::Func_2<::UnityEngine::ProBuilder::Face*, int32_t>*>(value));
}
inline ::System::Func_2<::UnityEngine::ProBuilder::Face*, int32_t>* UnityEngine::ProBuilder::MeshOperations::CombineMeshes___c::getStaticF___9__5_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::ProBuilder::Face*, int32_t>*, "<>9__5_0", ::UnityEngine::ProBuilder::MeshOperations::CombineMeshes___c*>();
}
inline void UnityEngine::ProBuilder::MeshOperations::CombineMeshes___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::CombineMeshes___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t UnityEngine::ProBuilder::MeshOperations::CombineMeshes___c::_SplitByMaxVertexCount_b__5_0(::UnityEngine::ProBuilder::Face* x) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::CombineMeshes___c*>(),
                                                                                         { "<SplitByMaxVertexCount>b__5_0", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Face*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, x);
}
inline ::UnityEngine::ProBuilder::MeshOperations::CombineMeshes___c* UnityEngine::ProBuilder::MeshOperations::CombineMeshes___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ProBuilder::MeshOperations::CombineMeshes___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::MeshOperations::CombineMeshes___c::CombineMeshes___c() {}
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::CombineMeshes.Combine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<
    ::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>* (*)(::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*)>(
    &::UnityEngine::ProBuilder::MeshOperations::CombineMeshes::Combine)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6715c04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::CombineMeshes*>(),
                                                { "Combine", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::CombineMeshes.Combine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<
    ::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>* (*)(::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*,
                                                              ::UnityEngine::ProBuilder::ProBuilderMesh*)>(&::UnityEngine::ProBuilder::MeshOperations::CombineMeshes::Combine)> {
  constexpr static std::size_t size = 0xb64;
  constexpr static std::size_t addrs = 0x671607c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::CombineMeshes*>(),
                                                             { "Combine",
                                                               {},
                                                               { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*>(),
                                                                 ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::CombineMeshes.CombineToNewMeshes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<
    ::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>* (*)(::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*)>(
    &::UnityEngine::ProBuilder::MeshOperations::CombineMeshes::CombineToNewMeshes)> {
  constexpr static std::size_t size = 0x474;
  constexpr static std::size_t addrs = 0x6715c08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::CombineMeshes*>(),
                                         { "CombineToNewMeshes", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::CombineMeshes.AccumulateMeshesInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(
    ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*, int32_t, ::by_ref<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*>,
    ::by_ref<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*>, ::by_ref<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*>,
    ::by_ref<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::SharedVertex*>*>, ::by_ref<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::SharedVertex*>*>,
    ::by_ref<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*>, ::UnityEngine::Transform*)>(
    &::UnityEngine::ProBuilder::MeshOperations::CombineMeshes::AccumulateMeshesInfo)> {
  constexpr static std::size_t size = 0xcd4;
  constexpr static std::size_t addrs = 0x6716be0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::CombineMeshes*>(),
                                         { "AccumulateMeshesInfo",
                                           {},
                                           { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*>(), ::i2c::type_of<int32_t>(),
                                             ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*>>(),
                                             ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*>>(),
                                             ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*>>(),
                                             ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::SharedVertex*>*>>(),
                                             ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::SharedVertex*>*>>(),
                                             ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*>>(), ::i2c::type_of<::UnityEngine::Transform*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::CombineMeshes.CreateMeshFromSplit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh> (*)(
    ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*,
    ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*, ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*, ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*,
    ::ArrayW<::UnityEngine::Material*>)>(&::UnityEngine::ProBuilder::MeshOperations::CombineMeshes::CreateMeshFromSplit)> {
  constexpr static std::size_t size = 0x4d4;
  constexpr static std::size_t addrs = 0x6718614;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::CombineMeshes*>(),
                            { "CreateMeshFromSplit",
                              {},
                              { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*>(),
                                ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*>(),
                                ::i2c::type_of<::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*>(),
                                ::i2c::type_of<::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Material*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::CombineMeshes.SplitByMaxVertexCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<
    ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>* (*)(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>*,
                                                                                                     ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Face*>*,
                                                                                                     ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::SharedVertex*>*,
                                                                                                     ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::SharedVertex*>*, uint32_t)>(
    &::UnityEngine::ProBuilder::MeshOperations::CombineMeshes::SplitByMaxVertexCount)> {
  constexpr static std::size_t size = 0xd60;
  constexpr static std::size_t addrs = 0x67178b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::CombineMeshes*>(),
                                                { "SplitByMaxVertexCount",
                                                  {},
                                                  { ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>*>(),
                                                    ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Face*>*>(),
                                                    ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::SharedVertex*>*>(),
                                                    ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::SharedVertex*>*>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*
UnityEngine::ProBuilder::MeshOperations::CombineMeshes::Combine(::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>* meshes) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::CombineMeshes*>(),
                                              { "Combine", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*>(nullptr, ___internal_method, meshes);
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*
UnityEngine::ProBuilder::MeshOperations::CombineMeshes::Combine(::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>* meshes,
                                                                ::UnityEngine::ProBuilder::ProBuilderMesh* meshTarget) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::CombineMeshes*>(),
                                                           { "Combine",
                                                             {},
                                                             { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*>(),
                                                               ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*>(nullptr, ___internal_method, meshes, meshTarget);
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*
UnityEngine::ProBuilder::MeshOperations::CombineMeshes::CombineToNewMeshes(::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>* meshes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::CombineMeshes*>(),
                                       { "CombineToNewMeshes", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*>(nullptr, ___internal_method, meshes);
}
inline void UnityEngine::ProBuilder::MeshOperations::CombineMeshes::AccumulateMeshesInfo(::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>* meshes,
                                                                                         int32_t offset, ::by_ref<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*> vertices,
                                                                                         ::by_ref<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*> faces,
                                                                                         ::by_ref<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*> autoUvFaces,
                                                                                         ::by_ref<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::SharedVertex*>*> sharedVertices,
                                                                                         ::by_ref<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::SharedVertex*>*> sharedTextures,
                                                                                         ::by_ref<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*> materialMap,
                                                                                         ::UnityEngine::Transform* targetTransform) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::CombineMeshes*>(),
                                       { "AccumulateMeshesInfo",
                                         {},
                                         { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*>(), ::i2c::type_of<int32_t>(),
                                           ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*>>(),
                                           ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*>>(),
                                           ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*>>(),
                                           ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::SharedVertex*>*>>(),
                                           ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::SharedVertex*>*>>(),
                                           ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*>>(), ::i2c::type_of<::UnityEngine::Transform*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, meshes, offset, vertices, faces, autoUvFaces, sharedVertices, sharedTextures, materialMap, targetTransform);
}
inline ::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh> UnityEngine::ProBuilder::MeshOperations::CombineMeshes::CreateMeshFromSplit(
    ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>* vertices, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>* faces,
    ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* sharedVertexLookup, ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* sharedTextureLookup,
    ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* remap, ::ArrayW<::UnityEngine::Material*> materials) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::CombineMeshes*>(),
                          { "CreateMeshFromSplit",
                            {},
                            { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*>(),
                              ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*>(),
                              ::i2c::type_of<::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*>(),
                              ::i2c::type_of<::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Material*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>(nullptr, ___internal_method, vertices, faces, sharedVertexLookup, sharedTextureLookup, remap,
                                                                                                  materials);
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>* UnityEngine::ProBuilder::MeshOperations::CombineMeshes::SplitByMaxVertexCount(
    ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>* vertices, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Face*>* faces,
    ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::SharedVertex*>* sharedVertices,
    ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::SharedVertex*>* sharedTextures, uint32_t maxVertexCount) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::CombineMeshes*>(),
                                                           { "SplitByMaxVertexCount",
                                                             {},
                                                             { ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>*>(),
                                                               ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Face*>*>(),
                                                               ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::SharedVertex*>*>(),
                                                               ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::SharedVertex*>*>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*>(nullptr, ___internal_method, vertices, faces, sharedVertices,
                                                                                                                                           sharedTextures, maxVertexCount);
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::MeshOperations::CombineMeshes::CombineMeshes() {}
