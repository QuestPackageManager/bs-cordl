#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/MeshOperations/SurfaceTopology.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ProBuilder/MeshOperations/zzzz__SurfaceTopology_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "UnityEngine/ProBuilder/MeshOperations/zzzz__SurfaceTopology_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__ActionResult_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__Edge_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__FaceRebuildData_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__Face_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__ProBuilderMesh_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__Vertex_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__WindingOrder_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__WingedEdge_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::SurfaceTopology___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::MeshOperations::SurfaceTopology___c::*)()>(
    &::UnityEngine::ProBuilder::MeshOperations::SurfaceTopology___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6735a1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::SurfaceTopology___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::SurfaceTopology___c._ToTriangles_b__0_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::ProBuilder::Face* (::UnityEngine::ProBuilder::MeshOperations::SurfaceTopology___c::*)(::UnityEngine::ProBuilder::FaceRebuildData*)>(
        &::UnityEngine::ProBuilder::MeshOperations::SurfaceTopology___c::_ToTriangles_b__0_0)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6735a20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::SurfaceTopology___c*>(),
                                                                                           { "<ToTriangles>b__0_0", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::FaceRebuildData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::SurfaceTopology___c._GetWindingOrder_b__3_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::ProBuilder::MeshOperations::SurfaceTopology___c::*)(::UnityEngine::ProBuilder::Vertex*)>(
    &::UnityEngine::ProBuilder::MeshOperations::SurfaceTopology___c::_GetWindingOrder_b__3_0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6735a34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::SurfaceTopology___c*>(),
                                                                                           { "<GetWindingOrder>b__3_0", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Vertex*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::ProBuilder::MeshOperations::SurfaceTopology___c::setStaticF___9(::UnityEngine::ProBuilder::MeshOperations::SurfaceTopology___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::ProBuilder::MeshOperations::SurfaceTopology___c*, "<>9", ::UnityEngine::ProBuilder::MeshOperations::SurfaceTopology___c*>(
      std::forward<::UnityEngine::ProBuilder::MeshOperations::SurfaceTopology___c*>(value));
}
inline ::UnityEngine::ProBuilder::MeshOperations::SurfaceTopology___c* UnityEngine::ProBuilder::MeshOperations::SurfaceTopology___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::ProBuilder::MeshOperations::SurfaceTopology___c*, "<>9", ::UnityEngine::ProBuilder::MeshOperations::SurfaceTopology___c*>();
}
inline void UnityEngine::ProBuilder::MeshOperations::SurfaceTopology___c::setStaticF___9__0_0(::System::Func_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::UnityEngine::ProBuilder::Face*>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::UnityEngine::ProBuilder::Face*>*, "<>9__0_0",
                                    ::UnityEngine::ProBuilder::MeshOperations::SurfaceTopology___c*>(
      std::forward<::System::Func_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::UnityEngine::ProBuilder::Face*>*>(value));
}
inline ::System::Func_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::UnityEngine::ProBuilder::Face*>* UnityEngine::ProBuilder::MeshOperations::SurfaceTopology___c::getStaticF___9__0_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::UnityEngine::ProBuilder::Face*>*, "<>9__0_0",
                                           ::UnityEngine::ProBuilder::MeshOperations::SurfaceTopology___c*>();
}
inline void UnityEngine::ProBuilder::MeshOperations::SurfaceTopology___c::setStaticF___9__3_0(::System::Func_2<::UnityEngine::ProBuilder::Vertex*, ::UnityEngine::Vector3>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::ProBuilder::Vertex*, ::UnityEngine::Vector3>*, "<>9__3_0", ::UnityEngine::ProBuilder::MeshOperations::SurfaceTopology___c*>(
      std::forward<::System::Func_2<::UnityEngine::ProBuilder::Vertex*, ::UnityEngine::Vector3>*>(value));
}
inline ::System::Func_2<::UnityEngine::ProBuilder::Vertex*, ::UnityEngine::Vector3>* UnityEngine::ProBuilder::MeshOperations::SurfaceTopology___c::getStaticF___9__3_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::ProBuilder::Vertex*, ::UnityEngine::Vector3>*, "<>9__3_0",
                                           ::UnityEngine::ProBuilder::MeshOperations::SurfaceTopology___c*>();
}
inline void UnityEngine::ProBuilder::MeshOperations::SurfaceTopology___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::SurfaceTopology___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::ProBuilder::Face* UnityEngine::ProBuilder::MeshOperations::SurfaceTopology___c::_ToTriangles_b__0_0(::UnityEngine::ProBuilder::FaceRebuildData* x) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::SurfaceTopology___c*>(),
                                                                                         { "<ToTriangles>b__0_0", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::FaceRebuildData*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Face*>(this, ___internal_method, x);
}
inline ::UnityEngine::Vector3 UnityEngine::ProBuilder::MeshOperations::SurfaceTopology___c::_GetWindingOrder_b__3_0(::UnityEngine::ProBuilder::Vertex* x) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::SurfaceTopology___c*>(),
                                                                                         { "<GetWindingOrder>b__3_0", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Vertex*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, x);
}
inline ::UnityEngine::ProBuilder::MeshOperations::SurfaceTopology___c* UnityEngine::ProBuilder::MeshOperations::SurfaceTopology___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ProBuilder::MeshOperations::SurfaceTopology___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::MeshOperations::SurfaceTopology___c::SurfaceTopology___c() {}
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::SurfaceTopology.ToTriangles
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::ArrayW<::UnityEngine::ProBuilder::Face*> (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Face*>*)>(
        &::UnityEngine::ProBuilder::MeshOperations::SurfaceTopology::ToTriangles)> {
  constexpr static std::size_t size = 0x5a4;
  constexpr static std::size_t addrs = 0x6733b78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::SurfaceTopology*>(),
            { "ToTriangles", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Face*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::SurfaceTopology.BreakFaceIntoTris
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<
    ::UnityEngine::ProBuilder::FaceRebuildData*>* (*)(::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*,
                                                      ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*)>(
    &::UnityEngine::ProBuilder::MeshOperations::SurfaceTopology::BreakFaceIntoTris)> {
  constexpr static std::size_t size = 0x604;
  constexpr static std::size_t addrs = 0x673411c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::SurfaceTopology*>(),
                                                { "BreakFaceIntoTris",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::ProBuilder::Face*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*>(),
                                                    ::i2c::type_of<::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::SurfaceTopology.GetWindingOrder
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ProBuilder::WindingOrder (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::Face*)>(
    &::UnityEngine::ProBuilder::MeshOperations::SurfaceTopology::GetWindingOrder)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6734720;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::SurfaceTopology*>(),
                                                { "GetWindingOrder", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Face*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::SurfaceTopology.GetWindingOrder
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::ProBuilder::WindingOrder (*)(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>*, ::System::Collections::Generic::IList_1<int32_t>*)>(
        &::UnityEngine::ProBuilder::MeshOperations::SurfaceTopology::GetWindingOrder)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x67349f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::SurfaceTopology*>(),
                                                                                           { "GetWindingOrder",
                                                                                             {},
                                                                                             { ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>*>(),
                                                                                               ::i2c::type_of<::System::Collections::Generic::IList_1<int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::SurfaceTopology.GetWindingOrder
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ProBuilder::WindingOrder (*)(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*)>(
    &::UnityEngine::ProBuilder::MeshOperations::SurfaceTopology::GetWindingOrder)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x6734770;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::SurfaceTopology*>(),
                                                             { "GetWindingOrder", {}, { ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::SurfaceTopology.FlipEdge
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::Face*)>(
    &::UnityEngine::ProBuilder::MeshOperations::SurfaceTopology::FlipEdge)> {
  constexpr static std::size_t size = 0x33c;
  constexpr static std::size_t addrs = 0x6734ba8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::SurfaceTopology*>(),
                                                { "FlipEdge", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Face*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::SurfaceTopology.ConformNormals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::ProBuilder::ActionResult* (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*)>(
        &::UnityEngine::ProBuilder::MeshOperations::SurfaceTopology::ConformNormals)> {
  constexpr static std::size_t size = 0x59c;
  constexpr static std::size_t addrs = 0x6734ee4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::SurfaceTopology*>(),
                            { "ConformNormals",
                              {},
                              { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::SurfaceTopology.GetWindingFlags
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::ProBuilder::WingedEdge*, bool, ::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::Face*, bool>*)>(
    &::UnityEngine::ProBuilder::MeshOperations::SurfaceTopology::GetWindingFlags)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x6735480;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::SurfaceTopology*>(),
                                                             { "GetWindingFlags",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::ProBuilder::WingedEdge*>(), ::i2c::type_of<bool>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::Face*, bool>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::SurfaceTopology.ConformOppositeNormal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ProBuilder::ActionResult* (*)(::UnityEngine::ProBuilder::WingedEdge*)>(
    &::UnityEngine::ProBuilder::MeshOperations::SurfaceTopology::ConformOppositeNormal)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x67356d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::SurfaceTopology*>(),
                                                                                           { "ConformOppositeNormal", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::WingedEdge*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::SurfaceTopology.GetCommonEdgeInWindingOrder
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ProBuilder::Edge (*)(::UnityEngine::ProBuilder::WingedEdge*)>(
    &::UnityEngine::ProBuilder::MeshOperations::SurfaceTopology::GetCommonEdgeInWindingOrder)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x6735590;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::SurfaceTopology*>(),
                                                                                           { "GetCommonEdgeInWindingOrder", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::WingedEdge*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::SurfaceTopology.MatchNormal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::ProBuilder::Face*, ::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*)>(
    &::UnityEngine::ProBuilder::MeshOperations::SurfaceTopology::MatchNormal)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x67357e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::SurfaceTopology*>(),
                                                                                           { "MatchNormal",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::ProBuilder::Face*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Face*>(),
                                                                                               ::i2c::type_of<::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*>() } })));
    return ___internal_method;
  }
};
inline ::ArrayW<::UnityEngine::ProBuilder::Face*>
UnityEngine::ProBuilder::MeshOperations::SurfaceTopology::ToTriangles(::UnityEngine::ProBuilder::ProBuilderMesh* mesh,
                                                                      ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Face*>* faces) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::SurfaceTopology*>(),
          { "ToTriangles", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Face*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::ProBuilder::Face*>>(nullptr, ___internal_method, mesh, faces);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::FaceRebuildData*>*
UnityEngine::ProBuilder::MeshOperations::SurfaceTopology::BreakFaceIntoTris(::UnityEngine::ProBuilder::Face* face, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>* vertices,
                                                                            ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* lookup) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::SurfaceTopology*>(),
                                              { "BreakFaceIntoTris",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::ProBuilder::Face*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*>(),
                                                  ::i2c::type_of<::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::FaceRebuildData*>*>(nullptr, ___internal_method, face, vertices, lookup);
}
inline ::UnityEngine::ProBuilder::WindingOrder UnityEngine::ProBuilder::MeshOperations::SurfaceTopology::GetWindingOrder(::UnityEngine::ProBuilder::ProBuilderMesh* mesh,
                                                                                                                         ::UnityEngine::ProBuilder::Face* face) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::SurfaceTopology*>(),
                                              { "GetWindingOrder", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Face*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::WindingOrder>(nullptr, ___internal_method, mesh, face);
}
inline ::UnityEngine::ProBuilder::WindingOrder
UnityEngine::ProBuilder::MeshOperations::SurfaceTopology::GetWindingOrder(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>* vertices,
                                                                          ::System::Collections::Generic::IList_1<int32_t>* indexes) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::SurfaceTopology*>(),
                                                                                         { "GetWindingOrder",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>*>(),
                                                                                             ::i2c::type_of<::System::Collections::Generic::IList_1<int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::WindingOrder>(nullptr, ___internal_method, vertices, indexes);
}
inline ::UnityEngine::ProBuilder::WindingOrder UnityEngine::ProBuilder::MeshOperations::SurfaceTopology::GetWindingOrder(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>* points) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::SurfaceTopology*>(),
                                                           { "GetWindingOrder", {}, { ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::WindingOrder>(nullptr, ___internal_method, points);
}
inline bool UnityEngine::ProBuilder::MeshOperations::SurfaceTopology::FlipEdge(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::ProBuilder::Face* face) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::SurfaceTopology*>(),
                                                           { "FlipEdge", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Face*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, mesh, face);
}
inline ::UnityEngine::ProBuilder::ActionResult*
UnityEngine::ProBuilder::MeshOperations::SurfaceTopology::ConformNormals(::UnityEngine::ProBuilder::ProBuilderMesh* mesh,
                                                                         ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* faces) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::SurfaceTopology*>(),
                          { "ConformNormals",
                            {},
                            { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::ActionResult*>(nullptr, ___internal_method, mesh, faces);
}
inline void UnityEngine::ProBuilder::MeshOperations::SurfaceTopology::GetWindingFlags(::UnityEngine::ProBuilder::WingedEdge* edge, bool flag,
                                                                                      ::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::Face*, bool>* flags) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::SurfaceTopology*>(),
                                                           { "GetWindingFlags",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::ProBuilder::WingedEdge*>(), ::i2c::type_of<bool>(),
                                                               ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::Face*, bool>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, edge, flag, flags);
}
inline ::UnityEngine::ProBuilder::ActionResult* UnityEngine::ProBuilder::MeshOperations::SurfaceTopology::ConformOppositeNormal(::UnityEngine::ProBuilder::WingedEdge* source) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::SurfaceTopology*>(),
                                                                                         { "ConformOppositeNormal", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::WingedEdge*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::ActionResult*>(nullptr, ___internal_method, source);
}
inline ::UnityEngine::ProBuilder::Edge UnityEngine::ProBuilder::MeshOperations::SurfaceTopology::GetCommonEdgeInWindingOrder(::UnityEngine::ProBuilder::WingedEdge* wing) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::SurfaceTopology*>(),
                                                                                         { "GetCommonEdgeInWindingOrder", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::WingedEdge*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Edge>(nullptr, ___internal_method, wing);
}
inline void UnityEngine::ProBuilder::MeshOperations::SurfaceTopology::MatchNormal(::UnityEngine::ProBuilder::Face* source, ::UnityEngine::ProBuilder::Face* target,
                                                                                  ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* lookup) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::SurfaceTopology*>(),
                                                                                         { "MatchNormal",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::ProBuilder::Face*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Face*>(),
                                                                                             ::i2c::type_of<::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, source, target, lookup);
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::MeshOperations::SurfaceTopology::SurfaceTopology() {}
