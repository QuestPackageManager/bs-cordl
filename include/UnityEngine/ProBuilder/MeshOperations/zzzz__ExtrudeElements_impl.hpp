#pragma once
// IWYU pragma private; include "UnityEngine\ProBuilder\MeshOperations\ExtrudeElements.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ProBuilder/MeshOperations/zzzz__ExtrudeElements_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "UnityEngine/ProBuilder/MeshOperations/zzzz__ExtrudeElements_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__EdgeLookup_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__Edge_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__ExtrudeMethod_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__FaceRebuildData_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__Face_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__ProBuilderMesh_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__WingedEdge_def.hpp"
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ExtrudeElements___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::MeshOperations::ExtrudeElements___c::*)()>(
    &::UnityEngine::ProBuilder::MeshOperations::ExtrudeElements___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x672fc48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ExtrudeElements___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ExtrudeElements___c._DetachFaces_b__3_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::ProBuilder::Face* (::UnityEngine::ProBuilder::MeshOperations::ExtrudeElements___c::*)(::UnityEngine::ProBuilder::FaceRebuildData*)>(
        &::UnityEngine::ProBuilder::MeshOperations::ExtrudeElements___c::_DetachFaces_b__3_0)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x672fc4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ExtrudeElements___c*>(),
                                                                                           { "<DetachFaces>b__3_0", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::FaceRebuildData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ExtrudeElements___c._ExtrudePerFace_b__4_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ProBuilder::MeshOperations::ExtrudeElements___c::*)(::UnityEngine::ProBuilder::Face*)>(
    &::UnityEngine::ProBuilder::MeshOperations::ExtrudeElements___c::_ExtrudePerFace_b__4_0)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x672fc60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ExtrudeElements___c*>(),
                                                                                           { "<ExtrudePerFace>b__4_0", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Face*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::ProBuilder::MeshOperations::ExtrudeElements___c::setStaticF___9(::UnityEngine::ProBuilder::MeshOperations::ExtrudeElements___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::ProBuilder::MeshOperations::ExtrudeElements___c*, "<>9", ::UnityEngine::ProBuilder::MeshOperations::ExtrudeElements___c*>(
      std::forward<::UnityEngine::ProBuilder::MeshOperations::ExtrudeElements___c*>(value));
}
inline ::UnityEngine::ProBuilder::MeshOperations::ExtrudeElements___c* UnityEngine::ProBuilder::MeshOperations::ExtrudeElements___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::ProBuilder::MeshOperations::ExtrudeElements___c*, "<>9", ::UnityEngine::ProBuilder::MeshOperations::ExtrudeElements___c*>();
}
inline void UnityEngine::ProBuilder::MeshOperations::ExtrudeElements___c::setStaticF___9__3_0(::System::Func_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::UnityEngine::ProBuilder::Face*>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::UnityEngine::ProBuilder::Face*>*, "<>9__3_0",
                                    ::UnityEngine::ProBuilder::MeshOperations::ExtrudeElements___c*>(
      std::forward<::System::Func_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::UnityEngine::ProBuilder::Face*>*>(value));
}
inline ::System::Func_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::UnityEngine::ProBuilder::Face*>* UnityEngine::ProBuilder::MeshOperations::ExtrudeElements___c::getStaticF___9__3_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::UnityEngine::ProBuilder::Face*>*, "<>9__3_0",
                                           ::UnityEngine::ProBuilder::MeshOperations::ExtrudeElements___c*>();
}
inline void UnityEngine::ProBuilder::MeshOperations::ExtrudeElements___c::setStaticF___9__4_0(::System::Func_2<::UnityEngine::ProBuilder::Face*, int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::ProBuilder::Face*, int32_t>*, "<>9__4_0", ::UnityEngine::ProBuilder::MeshOperations::ExtrudeElements___c*>(
      std::forward<::System::Func_2<::UnityEngine::ProBuilder::Face*, int32_t>*>(value));
}
inline ::System::Func_2<::UnityEngine::ProBuilder::Face*, int32_t>* UnityEngine::ProBuilder::MeshOperations::ExtrudeElements___c::getStaticF___9__4_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::ProBuilder::Face*, int32_t>*, "<>9__4_0", ::UnityEngine::ProBuilder::MeshOperations::ExtrudeElements___c*>();
}
inline void UnityEngine::ProBuilder::MeshOperations::ExtrudeElements___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ExtrudeElements___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::ProBuilder::Face* UnityEngine::ProBuilder::MeshOperations::ExtrudeElements___c::_DetachFaces_b__3_0(::UnityEngine::ProBuilder::FaceRebuildData* x) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ExtrudeElements___c*>(),
                                                                                         { "<DetachFaces>b__3_0", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::FaceRebuildData*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Face*>(this, ___internal_method, x);
}
inline int32_t UnityEngine::ProBuilder::MeshOperations::ExtrudeElements___c::_ExtrudePerFace_b__4_0(::UnityEngine::ProBuilder::Face* x) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ExtrudeElements___c*>(),
                                                                                         { "<ExtrudePerFace>b__4_0", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Face*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, x);
}
inline ::UnityEngine::ProBuilder::MeshOperations::ExtrudeElements___c* UnityEngine::ProBuilder::MeshOperations::ExtrudeElements___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ProBuilder::MeshOperations::ExtrudeElements___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::MeshOperations::ExtrudeElements___c::ExtrudeElements___c() {}
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ExtrudeElements.Extrude
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::ProBuilder::Face*> (*)(
    ::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*, ::UnityEngine::ProBuilder::ExtrudeMethod, float_t)>(
    &::UnityEngine::ProBuilder::MeshOperations::ExtrudeElements::Extrude)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x672ab54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ExtrudeElements*>(),
                                                                                           { "Extrude",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
                                                                                               ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*>(),
                                                                                               ::i2c::type_of<::UnityEngine::ProBuilder::ExtrudeMethod>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ExtrudeElements.Extrude
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::ProBuilder::Edge> (*)(
    ::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*, float_t, bool, bool)>(
    &::UnityEngine::ProBuilder::MeshOperations::ExtrudeElements::Extrude)> {
  constexpr static std::size_t size = 0x1080;
  constexpr static std::size_t addrs = 0x672d770;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ExtrudeElements*>(),
                                                                                           { "Extrude",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
                                                                                               ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*>(),
                                                                                               ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ExtrudeElements.DetachFaces
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<
    ::UnityEngine::ProBuilder::Face*>* (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*)>(
    &::UnityEngine::ProBuilder::MeshOperations::ExtrudeElements::DetachFaces)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x672e988;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ExtrudeElements*>(),
                            { "DetachFaces",
                              {},
                              { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ExtrudeElements.DetachFaces
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<
    ::UnityEngine::ProBuilder::Face*>* (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*, bool)>(
    &::UnityEngine::ProBuilder::MeshOperations::ExtrudeElements::DetachFaces)> {
  constexpr static std::size_t size = 0xb10;
  constexpr static std::size_t addrs = 0x672e990;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ExtrudeElements*>(),
                                                             { "DetachFaces",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ExtrudeElements.ExtrudePerFace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::ArrayW<::UnityEngine::ProBuilder::Face*> (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*, float_t)>(
        &::UnityEngine::ProBuilder::MeshOperations::ExtrudeElements::ExtrudePerFace)> {
  constexpr static std::size_t size = 0xc8c;
  constexpr static std::size_t addrs = 0x672ab68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ExtrudeElements*>(),
                                                             { "ExtrudePerFace",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ExtrudeElements.ExtrudeAsGroups
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::ProBuilder::Face*> (*)(::UnityEngine::ProBuilder::ProBuilderMesh*,
                                                                                                      ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*, bool, float_t)>(
    &::UnityEngine::ProBuilder::MeshOperations::ExtrudeElements::ExtrudeAsGroups)> {
  constexpr static std::size_t size = 0x1f7c;
  constexpr static std::size_t addrs = 0x672b7f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ExtrudeElements*>(),
                                                                                           { "ExtrudeAsGroups",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
                                                                                               ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*>(),
                                                                                               ::i2c::type_of<bool>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ExtrudeElements.GetFaceGroups
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<
    ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>*>* (*)(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>*)>(
    &::UnityEngine::ProBuilder::MeshOperations::ExtrudeElements::GetFaceGroups)> {
  constexpr static std::size_t size = 0x3b4;
  constexpr static std::size_t addrs = 0x672f4a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ExtrudeElements*>(),
                                                             { "GetFaceGroups", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ExtrudeElements.GetPerimeterEdges
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<
    ::UnityEngine::ProBuilder::EdgeLookup, ::UnityEngine::ProBuilder::Face*>* (*)(::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>*,
                                                                                  ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*)>(
    &::UnityEngine::ProBuilder::MeshOperations::ExtrudeElements::GetPerimeterEdges)> {
  constexpr static std::size_t size = 0x3a0;
  constexpr static std::size_t addrs = 0x672f854;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ExtrudeElements*>(),
                                                                                           { "GetPerimeterEdges",
                                                                                             {},
                                                                                             { ::i2c::type_of<::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>*>(),
                                                                                               ::i2c::type_of<::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*>() } })));
    return ___internal_method;
  }
};
inline ::ArrayW<::UnityEngine::ProBuilder::Face*>
UnityEngine::ProBuilder::MeshOperations::ExtrudeElements::Extrude(::UnityEngine::ProBuilder::ProBuilderMesh* mesh,
                                                                  ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* faces,
                                                                  ::UnityEngine::ProBuilder::ExtrudeMethod method, float_t distance) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ExtrudeElements*>(),
                                                                                         { "Extrude",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
                                                                                             ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*>(),
                                                                                             ::i2c::type_of<::UnityEngine::ProBuilder::ExtrudeMethod>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::ProBuilder::Face*>>(nullptr, ___internal_method, mesh, faces, method, distance);
}
inline ::ArrayW<::UnityEngine::ProBuilder::Edge>
UnityEngine::ProBuilder::MeshOperations::ExtrudeElements::Extrude(::UnityEngine::ProBuilder::ProBuilderMesh* mesh,
                                                                  ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>* edges, float_t distance, bool extrudeAsGroup,
                                                                  bool enableManifoldExtrude) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ExtrudeElements*>(),
                                                                                         { "Extrude",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
                                                                                             ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*>(),
                                                                                             ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::ProBuilder::Edge>>(nullptr, ___internal_method, mesh, edges, distance, extrudeAsGroup, enableManifoldExtrude);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*
UnityEngine::ProBuilder::MeshOperations::ExtrudeElements::DetachFaces(::UnityEngine::ProBuilder::ProBuilderMesh* mesh,
                                                                      ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* faces) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ExtrudeElements*>(),
                          { "DetachFaces",
                            {},
                            { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*>(nullptr, ___internal_method, mesh, faces);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*
UnityEngine::ProBuilder::MeshOperations::ExtrudeElements::DetachFaces(::UnityEngine::ProBuilder::ProBuilderMesh* mesh,
                                                                      ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* faces, bool deleteSourceFaces) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ExtrudeElements*>(),
                                                           { "DetachFaces",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
                                                               ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*>(nullptr, ___internal_method, mesh, faces, deleteSourceFaces);
}
inline ::ArrayW<::UnityEngine::ProBuilder::Face*>
UnityEngine::ProBuilder::MeshOperations::ExtrudeElements::ExtrudePerFace(::UnityEngine::ProBuilder::ProBuilderMesh* pb,
                                                                         ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* faces, float_t distance) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ExtrudeElements*>(),
                                                           { "ExtrudePerFace",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
                                                               ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::ProBuilder::Face*>>(nullptr, ___internal_method, pb, faces, distance);
}
inline ::ArrayW<::UnityEngine::ProBuilder::Face*> UnityEngine::ProBuilder::MeshOperations::ExtrudeElements::ExtrudeAsGroups(
    ::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* faces, bool compensateAngleVertexDistance, float_t distance) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ExtrudeElements*>(),
                                       { "ExtrudeAsGroups",
                                         {},
                                         { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
                                           ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::ProBuilder::Face*>>(nullptr, ___internal_method, mesh, faces, compensateAngleVertexDistance, distance);
}
inline ::System::Collections::Generic::List_1<::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>*>*
UnityEngine::ProBuilder::MeshOperations::ExtrudeElements::GetFaceGroups(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>* wings) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ExtrudeElements*>(),
                                                           { "GetFaceGroups", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>*>*>(nullptr, ___internal_method, wings);
}
inline ::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::EdgeLookup, ::UnityEngine::ProBuilder::Face*>*
UnityEngine::ProBuilder::MeshOperations::ExtrudeElements::GetPerimeterEdges(::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>* faces,
                                                                            ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* lookup) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::ExtrudeElements*>(),
                                                                                         { "GetPerimeterEdges",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>*>(),
                                                                                             ::i2c::type_of<::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::EdgeLookup, ::UnityEngine::ProBuilder::Face*>*>(nullptr, ___internal_method, faces,
                                                                                                                                                                     lookup);
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::MeshOperations::ExtrudeElements::ExtrudeElements() {}
