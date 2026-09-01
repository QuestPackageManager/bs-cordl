#pragma once
// IWYU pragma private; include "UnityEngine\ProBuilder\MeshOperations\AppendElements.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ProBuilder/MeshOperations/zzzz__AppendElements_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "UnityEngine/ProBuilder/MeshOperations/zzzz__AppendElements_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__ActionResult_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__EdgeLookup_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__Edge_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__FaceRebuildData_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__Face_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__PolyShape_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__ProBuilderMesh_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__Vertex_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::AppendElements___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::MeshOperations::AppendElements___c::*)()>(
    &::UnityEngine::ProBuilder::MeshOperations::AppendElements___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6717878;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::AppendElements___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::AppendElements___c._CreateShapeFromPolygon_b__8_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ProBuilder::MeshOperations::AppendElements___c::*)(::ArrayW<::UnityEngine::Vector3>)>(
    &::UnityEngine::ProBuilder::MeshOperations::AppendElements___c::_CreateShapeFromPolygon_b__8_0)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x671787c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::AppendElements___c*>(),
                                                                                           { "<CreateShapeFromPolygon>b__8_0", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::AppendElements___c._FaceWithVerticesAndHole_b__10_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::ProBuilder::MeshOperations::AppendElements___c::*)(::UnityEngine::ProBuilder::Vertex*)>(
    &::UnityEngine::ProBuilder::MeshOperations::AppendElements___c::_FaceWithVerticesAndHole_b__10_0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6717890;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::AppendElements___c*>(),
                                                                                           { "<FaceWithVerticesAndHole>b__10_0", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Vertex*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::AppendElements___c._FaceWithVerticesAndHole_b__10_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::ProBuilder::MeshOperations::AppendElements___c::*)(::UnityEngine::ProBuilder::Vertex*)>(
    &::UnityEngine::ProBuilder::MeshOperations::AppendElements___c::_FaceWithVerticesAndHole_b__10_1)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x67178a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::AppendElements___c*>(),
                                                                                           { "<FaceWithVerticesAndHole>b__10_1", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Vertex*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::AppendElements___c._InsertVertexInFace_b__18_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::ProBuilder::Face* (::UnityEngine::ProBuilder::MeshOperations::AppendElements___c::*)(::UnityEngine::ProBuilder::FaceRebuildData*)>(
        &::UnityEngine::ProBuilder::MeshOperations::AppendElements___c::_InsertVertexInFace_b__18_0)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x67178c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::AppendElements___c*>(),
                                                                                           { "<InsertVertexInFace>b__18_0", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::FaceRebuildData*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::ProBuilder::MeshOperations::AppendElements___c::setStaticF___9(::UnityEngine::ProBuilder::MeshOperations::AppendElements___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::ProBuilder::MeshOperations::AppendElements___c*, "<>9", ::UnityEngine::ProBuilder::MeshOperations::AppendElements___c*>(
      std::forward<::UnityEngine::ProBuilder::MeshOperations::AppendElements___c*>(value));
}
inline ::UnityEngine::ProBuilder::MeshOperations::AppendElements___c* UnityEngine::ProBuilder::MeshOperations::AppendElements___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::ProBuilder::MeshOperations::AppendElements___c*, "<>9", ::UnityEngine::ProBuilder::MeshOperations::AppendElements___c*>();
}
inline void UnityEngine::ProBuilder::MeshOperations::AppendElements___c::setStaticF___9__8_0(::System::Func_2<::ArrayW<::UnityEngine::Vector3>, int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::ArrayW<::UnityEngine::Vector3>, int32_t>*, "<>9__8_0", ::UnityEngine::ProBuilder::MeshOperations::AppendElements___c*>(
      std::forward<::System::Func_2<::ArrayW<::UnityEngine::Vector3>, int32_t>*>(value));
}
inline ::System::Func_2<::ArrayW<::UnityEngine::Vector3>, int32_t>* UnityEngine::ProBuilder::MeshOperations::AppendElements___c::getStaticF___9__8_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::ArrayW<::UnityEngine::Vector3>, int32_t>*, "<>9__8_0", ::UnityEngine::ProBuilder::MeshOperations::AppendElements___c*>();
}
inline void UnityEngine::ProBuilder::MeshOperations::AppendElements___c::setStaticF___9__10_0(::System::Func_2<::UnityEngine::ProBuilder::Vertex*, ::UnityEngine::Vector3>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::ProBuilder::Vertex*, ::UnityEngine::Vector3>*, "<>9__10_0", ::UnityEngine::ProBuilder::MeshOperations::AppendElements___c*>(
      std::forward<::System::Func_2<::UnityEngine::ProBuilder::Vertex*, ::UnityEngine::Vector3>*>(value));
}
inline ::System::Func_2<::UnityEngine::ProBuilder::Vertex*, ::UnityEngine::Vector3>* UnityEngine::ProBuilder::MeshOperations::AppendElements___c::getStaticF___9__10_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::ProBuilder::Vertex*, ::UnityEngine::Vector3>*, "<>9__10_0",
                                           ::UnityEngine::ProBuilder::MeshOperations::AppendElements___c*>();
}
inline void UnityEngine::ProBuilder::MeshOperations::AppendElements___c::setStaticF___9__10_1(::System::Func_2<::UnityEngine::ProBuilder::Vertex*, ::UnityEngine::Vector3>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::ProBuilder::Vertex*, ::UnityEngine::Vector3>*, "<>9__10_1", ::UnityEngine::ProBuilder::MeshOperations::AppendElements___c*>(
      std::forward<::System::Func_2<::UnityEngine::ProBuilder::Vertex*, ::UnityEngine::Vector3>*>(value));
}
inline ::System::Func_2<::UnityEngine::ProBuilder::Vertex*, ::UnityEngine::Vector3>* UnityEngine::ProBuilder::MeshOperations::AppendElements___c::getStaticF___9__10_1() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::ProBuilder::Vertex*, ::UnityEngine::Vector3>*, "<>9__10_1",
                                           ::UnityEngine::ProBuilder::MeshOperations::AppendElements___c*>();
}
inline void UnityEngine::ProBuilder::MeshOperations::AppendElements___c::setStaticF___9__18_0(::System::Func_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::UnityEngine::ProBuilder::Face*>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::UnityEngine::ProBuilder::Face*>*, "<>9__18_0",
                                    ::UnityEngine::ProBuilder::MeshOperations::AppendElements___c*>(
      std::forward<::System::Func_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::UnityEngine::ProBuilder::Face*>*>(value));
}
inline ::System::Func_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::UnityEngine::ProBuilder::Face*>* UnityEngine::ProBuilder::MeshOperations::AppendElements___c::getStaticF___9__18_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::UnityEngine::ProBuilder::Face*>*, "<>9__18_0",
                                           ::UnityEngine::ProBuilder::MeshOperations::AppendElements___c*>();
}
inline void UnityEngine::ProBuilder::MeshOperations::AppendElements___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::AppendElements___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t UnityEngine::ProBuilder::MeshOperations::AppendElements___c::_CreateShapeFromPolygon_b__8_0(::ArrayW<::UnityEngine::Vector3> arr) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::AppendElements___c*>(),
                                                                                         { "<CreateShapeFromPolygon>b__8_0", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, arr);
}
inline ::UnityEngine::Vector3 UnityEngine::ProBuilder::MeshOperations::AppendElements___c::_FaceWithVerticesAndHole_b__10_0(::UnityEngine::ProBuilder::Vertex* v) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::AppendElements___c*>(),
                                                                                         { "<FaceWithVerticesAndHole>b__10_0", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Vertex*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, v);
}
inline ::UnityEngine::Vector3 UnityEngine::ProBuilder::MeshOperations::AppendElements___c::_FaceWithVerticesAndHole_b__10_1(::UnityEngine::ProBuilder::Vertex* v) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::AppendElements___c*>(),
                                                                                         { "<FaceWithVerticesAndHole>b__10_1", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Vertex*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, v);
}
inline ::UnityEngine::ProBuilder::Face* UnityEngine::ProBuilder::MeshOperations::AppendElements___c::_InsertVertexInFace_b__18_0(::UnityEngine::ProBuilder::FaceRebuildData* f) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::AppendElements___c*>(),
                                                                                         { "<InsertVertexInFace>b__18_0", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::FaceRebuildData*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Face*>(this, ___internal_method, f);
}
inline ::UnityEngine::ProBuilder::MeshOperations::AppendElements___c* UnityEngine::ProBuilder::MeshOperations::AppendElements___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ProBuilder::MeshOperations::AppendElements___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::MeshOperations::AppendElements___c::AppendElements___c() {}
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::AppendElements___c__DisplayClass17_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::MeshOperations::AppendElements___c__DisplayClass17_0::*)()>(
    &::UnityEngine::ProBuilder::MeshOperations::AppendElements___c__DisplayClass17_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6714bf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::AppendElements___c__DisplayClass17_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::AppendElements___c__DisplayClass17_0._AppendVerticesToEdge_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ProBuilder::Edge (::UnityEngine::ProBuilder::MeshOperations::AppendElements___c__DisplayClass17_0::*)(
    ::UnityEngine::ProBuilder::EdgeLookup)>(&::UnityEngine::ProBuilder::MeshOperations::AppendElements___c__DisplayClass17_0::_AppendVerticesToEdge_b__0)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x67178d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::AppendElements___c__DisplayClass17_0*>(),
                                                                                           { "<AppendVerticesToEdge>b__0", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::EdgeLookup>() } })));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::ProBuilder::MeshOperations::AppendElements___c__DisplayClass17_0::__cordl_internal_get_delCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___delCount;
}
constexpr int32_t const& UnityEngine::ProBuilder::MeshOperations::AppendElements___c__DisplayClass17_0::__cordl_internal_get_delCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___delCount;
}
constexpr void UnityEngine::ProBuilder::MeshOperations::AppendElements___c__DisplayClass17_0::__cordl_internal_set_delCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___delCount = value;
}
inline void UnityEngine::ProBuilder::MeshOperations::AppendElements___c__DisplayClass17_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::AppendElements___c__DisplayClass17_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::ProBuilder::Edge UnityEngine::ProBuilder::MeshOperations::AppendElements___c__DisplayClass17_0::_AppendVerticesToEdge_b__0(::UnityEngine::ProBuilder::EdgeLookup x) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::AppendElements___c__DisplayClass17_0*>(),
                                                                                         { "<AppendVerticesToEdge>b__0", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::EdgeLookup>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Edge>(this, ___internal_method, x);
}
inline ::UnityEngine::ProBuilder::MeshOperations::AppendElements___c__DisplayClass17_0* UnityEngine::ProBuilder::MeshOperations::AppendElements___c__DisplayClass17_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ProBuilder::MeshOperations::AppendElements___c__DisplayClass17_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::MeshOperations::AppendElements___c__DisplayClass17_0::AppendElements___c__DisplayClass17_0() {}
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::AppendElements.AppendFace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::ProBuilder::Face* (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::ArrayW<::UnityEngine::Vector3>, ::ArrayW<::UnityEngine::Color>, ::ArrayW<::UnityEngine::Vector2>,
                                                     ::ArrayW<::UnityEngine::Vector4>, ::ArrayW<::UnityEngine::Vector4>, ::UnityEngine::ProBuilder::Face*, ::ArrayW<int32_t>)>(
        &::UnityEngine::ProBuilder::MeshOperations::AppendElements::AppendFace)> {
  constexpr static std::size_t size = 0x8b0;
  constexpr static std::size_t addrs = 0x670d29c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::AppendElements*>(),
                                         { "AppendFace",
                                           {},
                                           { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(),
                                             ::i2c::type_of<::ArrayW<::UnityEngine::Color>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector2>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector4>>(),
                                             ::i2c::type_of<::ArrayW<::UnityEngine::Vector4>>(), ::i2c::type_of<::UnityEngine::ProBuilder::Face*>(), ::i2c::type_of<::ArrayW<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::AppendElements.AppendFaces
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::ProBuilder::Face*> (*)(
    ::UnityEngine::ProBuilder::ProBuilderMesh*, ::ArrayW<::ArrayW<::UnityEngine::Vector3>>, ::ArrayW<::ArrayW<::UnityEngine::Color>>, ::ArrayW<::ArrayW<::UnityEngine::Vector2>>,
    ::ArrayW<::UnityEngine::ProBuilder::Face*>, ::ArrayW<::ArrayW<int32_t>>)>(&::UnityEngine::ProBuilder::MeshOperations::AppendElements::AppendFaces)> {
  constexpr static std::size_t size = 0x65c;
  constexpr static std::size_t addrs = 0x670db4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::AppendElements*>(),
                                                             { "AppendFaces",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::ArrayW<::ArrayW<::UnityEngine::Vector3>>>(),
                                                                 ::i2c::type_of<::ArrayW<::ArrayW<::UnityEngine::Color>>>(), ::i2c::type_of<::ArrayW<::ArrayW<::UnityEngine::Vector2>>>(),
                                                                 ::i2c::type_of<::ArrayW<::UnityEngine::ProBuilder::Face*>>(), ::i2c::type_of<::ArrayW<::ArrayW<int32_t>>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::AppendElements.CreatePolygon
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ProBuilder::Face* (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IList_1<int32_t>*, bool)>(
    &::UnityEngine::ProBuilder::MeshOperations::AppendElements::CreatePolygon)> {
  constexpr static std::size_t size = 0x518;
  constexpr static std::size_t addrs = 0x670e1a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::AppendElements*>(),
            { "CreatePolygon", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::System::Collections::Generic::IList_1<int32_t>*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::AppendElements.CreatePolygonWithHole
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ProBuilder::Face* (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IList_1<int32_t>*,
                                                                                            ::System::Collections::Generic::IList_1<::System::Collections::Generic::IList_1<int32_t>*>*)>(
    &::UnityEngine::ProBuilder::MeshOperations::AppendElements::CreatePolygonWithHole)> {
  constexpr static std::size_t size = 0x8e8;
  constexpr static std::size_t addrs = 0x670e788;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::AppendElements*>(),
                                                             { "CreatePolygonWithHole",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::System::Collections::Generic::IList_1<int32_t>*>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::IList_1<::System::Collections::Generic::IList_1<int32_t>*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::AppendElements.CreateShapeFromPolygon
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ProBuilder::ActionResult* (*)(::UnityEngine::ProBuilder::PolyShape*)>(
    &::UnityEngine::ProBuilder::MeshOperations::AppendElements::CreateShapeFromPolygon)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x670f4dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::AppendElements*>(),
                                                                                           { "CreateShapeFromPolygon", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::PolyShape*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::AppendElements.ClearAndRefreshMesh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::ProBuilder::ProBuilderMesh*)>(&::UnityEngine::ProBuilder::MeshOperations::AppendElements::ClearAndRefreshMesh)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x670f514;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::AppendElements*>(),
                                                                                           { "ClearAndRefreshMesh", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::AppendElements.CreateShapeFromPolygon
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::ProBuilder::ActionResult* (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*, float_t, bool)>(
        &::UnityEngine::ProBuilder::MeshOperations::AppendElements::CreateShapeFromPolygon)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x670f50c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::AppendElements*>(),
                                                { "CreateShapeFromPolygon",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*>(),
                                                    ::i2c::type_of<float_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::AppendElements.CreateShapeFromPolygon
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::ProBuilder::ActionResult* (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*, float_t, bool,
                                                             ::UnityEngine::Vector3, ::System::Collections::Generic::IList_1<::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*>*)>(
        &::UnityEngine::ProBuilder::MeshOperations::AppendElements::CreateShapeFromPolygon)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67100f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::AppendElements*>(),
                                                { "CreateShapeFromPolygon",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*>(),
                                                    ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                    ::i2c::type_of<::System::Collections::Generic::IList_1<::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::AppendElements.CreateShapeFromPolygon
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::ProBuilder::ActionResult* (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*, float_t, bool,
                                                             ::System::Collections::Generic::IList_1<::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*>*)>(
        &::UnityEngine::ProBuilder::MeshOperations::AppendElements::CreateShapeFromPolygon)> {
  constexpr static std::size_t size = 0xba4;
  constexpr static std::size_t addrs = 0x670f550;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::AppendElements*>(),
                                                             { "CreateShapeFromPolygon",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::IList_1<::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::AppendElements.FaceWithVertices
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ProBuilder::FaceRebuildData* (*)(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*, bool)>(
    &::UnityEngine::ProBuilder::MeshOperations::AppendElements::FaceWithVertices)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x670e6c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::AppendElements*>(),
                                         { "FaceWithVertices", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::AppendElements.FaceWithVerticesAndHole
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::ProBuilder::FaceRebuildData* (*)(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*,
                                                                ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*>*)>(
        &::UnityEngine::ProBuilder::MeshOperations::AppendElements::FaceWithVerticesAndHole)> {
  constexpr static std::size_t size = 0x46c;
  constexpr static std::size_t addrs = 0x670f070;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::AppendElements*>(),
                                                { "FaceWithVerticesAndHole",
                                                  {},
                                                  { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*>(),
                                                    ::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::AppendElements.TentCapWithVertices
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::FaceRebuildData*>* (*)(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*)>(
        &::UnityEngine::ProBuilder::MeshOperations::AppendElements::TentCapWithVertices)> {
  constexpr static std::size_t size = 0x3a8;
  constexpr static std::size_t addrs = 0x67107f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::AppendElements*>(),
                                                             { "TentCapWithVertices", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::AppendElements.DuplicateAndFlip
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::ArrayW<::UnityEngine::ProBuilder::Face*>)>(
    &::UnityEngine::ProBuilder::MeshOperations::AppendElements::DuplicateAndFlip)> {
  constexpr static std::size_t size = 0x6f4;
  constexpr static std::size_t addrs = 0x67100fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::AppendElements*>(),
                                         { "DuplicateAndFlip", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::ArrayW<::UnityEngine::ProBuilder::Face*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::AppendElements.Bridge
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::ProBuilder::Face* (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::Edge, ::UnityEngine::ProBuilder::Edge, bool)>(
        &::UnityEngine::ProBuilder::MeshOperations::AppendElements::Bridge)> {
  constexpr static std::size_t size = 0x13c0;
  constexpr static std::size_t addrs = 0x6710b98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::AppendElements*>(),
                                                             { "Bridge",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Edge>(),
                                                                 ::i2c::type_of<::UnityEngine::ProBuilder::Edge>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::AppendElements.AppendVerticesToFace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::ProBuilder::Face* (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::Face*, ::ArrayW<::UnityEngine::Vector3>)>(
        &::UnityEngine::ProBuilder::MeshOperations::AppendElements::AppendVerticesToFace)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6712228;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::AppendElements*>(),
                                                             { "AppendVerticesToFace",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Face*>(),
                                                                 ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::AppendElements.AppendVerticesToFace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::ProBuilder::Face* (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::Face*, ::ArrayW<::UnityEngine::Vector3>, bool)>(
        &::UnityEngine::ProBuilder::MeshOperations::AppendElements::AppendVerticesToFace)> {
  constexpr static std::size_t size = 0xc54;
  constexpr static std::size_t addrs = 0x6712230;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::AppendElements*>(),
                                                             { "AppendVerticesToFace",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Face*>(),
                                                                 ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::AppendElements.AppendVerticesToEdge
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>* (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::Edge, int32_t)>(
        &::UnityEngine::ProBuilder::MeshOperations::AppendElements::AppendVerticesToEdge)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6712f00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::AppendElements*>(),
            { "AppendVerticesToEdge", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Edge>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::AppendElements.AppendVerticesToEdge
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<
    ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>* (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Edge>*,
                                                                                 int32_t)>(&::UnityEngine::ProBuilder::MeshOperations::AppendElements::AppendVerticesToEdge)> {
  constexpr static std::size_t size = 0x1c70;
  constexpr static std::size_t addrs = 0x6712f84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::AppendElements*>(),
                                                             { "AppendVerticesToEdge",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Edge>*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::AppendElements.InsertVertexInFace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::ProBuilder::Face*> (*)(
    ::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::Face*, ::UnityEngine::Vector3)>(&::UnityEngine::ProBuilder::MeshOperations::AppendElements::InsertVertexInFace)> {
  constexpr static std::size_t size = 0xe74;
  constexpr static std::size_t addrs = 0x67151e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::AppendElements*>(),
                            { "InsertVertexInFace",
                              {},
                              { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Face*>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::AppendElements.InsertVertexOnEdge
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ProBuilder::Vertex* (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::Edge, ::UnityEngine::Vector3)>(
    &::UnityEngine::ProBuilder::MeshOperations::AppendElements::InsertVertexOnEdge)> {
  constexpr static std::size_t size = 0x13c0;
  constexpr static std::size_t addrs = 0x6716054;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::AppendElements*>(),
                            { "InsertVertexOnEdge",
                              {},
                              { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Edge>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::AppendElements.InsertVertexInMesh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ProBuilder::Vertex* (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(
    &::UnityEngine::ProBuilder::MeshOperations::AppendElements::InsertVertexInMesh)> {
  constexpr static std::size_t size = 0x410;
  constexpr static std::size_t addrs = 0x6717414;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::AppendElements*>(),
            { "InsertVertexInMesh", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
inline ::UnityEngine::ProBuilder::Face* UnityEngine::ProBuilder::MeshOperations::AppendElements::AppendFace(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::ArrayW<::UnityEngine::Vector3> positions,
                                                                                                            ::ArrayW<::UnityEngine::Color> colors, ::ArrayW<::UnityEngine::Vector2> uv0s,
                                                                                                            ::ArrayW<::UnityEngine::Vector4> uv2s, ::ArrayW<::UnityEngine::Vector4> uv3s,
                                                                                                            ::UnityEngine::ProBuilder::Face* face, ::ArrayW<int32_t> common) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::AppendElements*>(),
                                       { "AppendFace",
                                         {},
                                         { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(),
                                           ::i2c::type_of<::ArrayW<::UnityEngine::Color>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector2>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector4>>(),
                                           ::i2c::type_of<::ArrayW<::UnityEngine::Vector4>>(), ::i2c::type_of<::UnityEngine::ProBuilder::Face*>(), ::i2c::type_of<::ArrayW<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Face*>(nullptr, ___internal_method, mesh, positions, colors, uv0s, uv2s, uv3s, face, common);
}
inline ::ArrayW<::UnityEngine::ProBuilder::Face*>
UnityEngine::ProBuilder::MeshOperations::AppendElements::AppendFaces(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::ArrayW<::ArrayW<::UnityEngine::Vector3>> positions,
                                                                     ::ArrayW<::ArrayW<::UnityEngine::Color>> colors, ::ArrayW<::ArrayW<::UnityEngine::Vector2>> uvs,
                                                                     ::ArrayW<::UnityEngine::ProBuilder::Face*> faces, ::ArrayW<::ArrayW<int32_t>> shared) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::AppendElements*>(),
                                                           { "AppendFaces",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::ArrayW<::ArrayW<::UnityEngine::Vector3>>>(),
                                                               ::i2c::type_of<::ArrayW<::ArrayW<::UnityEngine::Color>>>(), ::i2c::type_of<::ArrayW<::ArrayW<::UnityEngine::Vector2>>>(),
                                                               ::i2c::type_of<::ArrayW<::UnityEngine::ProBuilder::Face*>>(), ::i2c::type_of<::ArrayW<::ArrayW<int32_t>>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::ProBuilder::Face*>>(nullptr, ___internal_method, mesh, positions, colors, uvs, faces, shared);
}
inline ::UnityEngine::ProBuilder::Face* UnityEngine::ProBuilder::MeshOperations::AppendElements::CreatePolygon(::UnityEngine::ProBuilder::ProBuilderMesh* mesh,
                                                                                                               ::System::Collections::Generic::IList_1<int32_t>* indexes, bool unordered) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::AppendElements*>(),
          { "CreatePolygon", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::System::Collections::Generic::IList_1<int32_t>*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Face*>(nullptr, ___internal_method, mesh, indexes, unordered);
}
inline ::UnityEngine::ProBuilder::Face*
UnityEngine::ProBuilder::MeshOperations::AppendElements::CreatePolygonWithHole(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::IList_1<int32_t>* indexes,
                                                                               ::System::Collections::Generic::IList_1<::System::Collections::Generic::IList_1<int32_t>*>* holes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::AppendElements*>(),
                                                           { "CreatePolygonWithHole",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::System::Collections::Generic::IList_1<int32_t>*>(),
                                                               ::i2c::type_of<::System::Collections::Generic::IList_1<::System::Collections::Generic::IList_1<int32_t>*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Face*>(nullptr, ___internal_method, mesh, indexes, holes);
}
inline ::UnityEngine::ProBuilder::ActionResult* UnityEngine::ProBuilder::MeshOperations::AppendElements::CreateShapeFromPolygon(::UnityEngine::ProBuilder::PolyShape* poly) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::AppendElements*>(),
                                                                                         { "CreateShapeFromPolygon", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::PolyShape*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::ActionResult*>(nullptr, ___internal_method, poly);
}
inline void UnityEngine::ProBuilder::MeshOperations::AppendElements::ClearAndRefreshMesh(::UnityEngine::ProBuilder::ProBuilderMesh* mesh) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::AppendElements*>(),
                                                                                         { "ClearAndRefreshMesh", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mesh);
}
inline ::UnityEngine::ProBuilder::ActionResult* UnityEngine::ProBuilder::MeshOperations::AppendElements::CreateShapeFromPolygon(::UnityEngine::ProBuilder::ProBuilderMesh* mesh,
                                                                                                                                ::System::Collections::Generic::IList_1<::UnityEngine::Vector3>* points,
                                                                                                                                float_t extrude, bool flipNormals) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::AppendElements*>(),
                                              { "CreateShapeFromPolygon",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*>(),
                                                  ::i2c::type_of<float_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::ActionResult*>(nullptr, ___internal_method, mesh, points, extrude, flipNormals);
}
inline ::UnityEngine::ProBuilder::ActionResult* UnityEngine::ProBuilder::MeshOperations::AppendElements::CreateShapeFromPolygon(
    ::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::IList_1<::UnityEngine::Vector3>* points, float_t extrude, bool flipNormals, ::UnityEngine::Vector3 cameraLookAt,
    ::System::Collections::Generic::IList_1<::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*>* holePoints) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::AppendElements*>(),
                                              { "CreateShapeFromPolygon",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*>(),
                                                  ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                  ::i2c::type_of<::System::Collections::Generic::IList_1<::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::ActionResult*>(nullptr, ___internal_method, mesh, points, extrude, flipNormals, cameraLookAt, holePoints);
}
inline ::UnityEngine::ProBuilder::ActionResult*
UnityEngine::ProBuilder::MeshOperations::AppendElements::CreateShapeFromPolygon(::UnityEngine::ProBuilder::ProBuilderMesh* mesh,
                                                                                ::System::Collections::Generic::IList_1<::UnityEngine::Vector3>* points, float_t extrude, bool flipNormals,
                                                                                ::System::Collections::Generic::IList_1<::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*>* holePoints) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::AppendElements*>(),
                                                           { "CreateShapeFromPolygon",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
                                                               ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(),
                                                               ::i2c::type_of<::System::Collections::Generic::IList_1<::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::ActionResult*>(nullptr, ___internal_method, mesh, points, extrude, flipNormals, holePoints);
}
inline ::UnityEngine::ProBuilder::FaceRebuildData*
UnityEngine::ProBuilder::MeshOperations::AppendElements::FaceWithVertices(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>* vertices, bool unordered) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::AppendElements*>(),
                                              { "FaceWithVertices", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::FaceRebuildData*>(nullptr, ___internal_method, vertices, unordered);
}
inline ::UnityEngine::ProBuilder::FaceRebuildData* UnityEngine::ProBuilder::MeshOperations::AppendElements::FaceWithVerticesAndHole(
    ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>* borderVertices,
    ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*>* holes) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::AppendElements*>(),
                                              { "FaceWithVerticesAndHole",
                                                {},
                                                { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*>(),
                                                  ::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::FaceRebuildData*>(nullptr, ___internal_method, borderVertices, holes);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::FaceRebuildData*>*
UnityEngine::ProBuilder::MeshOperations::AppendElements::TentCapWithVertices(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>* path) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::AppendElements*>(),
                                                           { "TentCapWithVertices", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::FaceRebuildData*>*>(nullptr, ___internal_method, path);
}
inline void UnityEngine::ProBuilder::MeshOperations::AppendElements::DuplicateAndFlip(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::ArrayW<::UnityEngine::ProBuilder::Face*> faces) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::AppendElements*>(),
                                       { "DuplicateAndFlip", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::ArrayW<::UnityEngine::ProBuilder::Face*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mesh, faces);
}
inline ::UnityEngine::ProBuilder::Face* UnityEngine::ProBuilder::MeshOperations::AppendElements::Bridge(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::ProBuilder::Edge a,
                                                                                                        ::UnityEngine::ProBuilder::Edge b, bool allowNonManifoldGeometry) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::AppendElements*>(),
                                                           { "Bridge",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Edge>(),
                                                               ::i2c::type_of<::UnityEngine::ProBuilder::Edge>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Face*>(nullptr, ___internal_method, mesh, a, b, allowNonManifoldGeometry);
}
inline ::UnityEngine::ProBuilder::Face* UnityEngine::ProBuilder::MeshOperations::AppendElements::AppendVerticesToFace(::UnityEngine::ProBuilder::ProBuilderMesh* mesh,
                                                                                                                      ::UnityEngine::ProBuilder::Face* face, ::ArrayW<::UnityEngine::Vector3> points) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::AppendElements*>(),
                                                           { "AppendVerticesToFace",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Face*>(),
                                                               ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Face*>(nullptr, ___internal_method, mesh, face, points);
}
inline ::UnityEngine::ProBuilder::Face* UnityEngine::ProBuilder::MeshOperations::AppendElements::AppendVerticesToFace(::UnityEngine::ProBuilder::ProBuilderMesh* mesh,
                                                                                                                      ::UnityEngine::ProBuilder::Face* face, ::ArrayW<::UnityEngine::Vector3> points,
                                                                                                                      bool insertOnEdge) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::AppendElements*>(),
                                                           { "AppendVerticesToFace",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Face*>(),
                                                               ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Face*>(nullptr, ___internal_method, mesh, face, points, insertOnEdge);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>*
UnityEngine::ProBuilder::MeshOperations::AppendElements::AppendVerticesToEdge(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::ProBuilder::Edge edge, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::AppendElements*>(),
          { "AppendVerticesToEdge", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Edge>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>*>(nullptr, ___internal_method, mesh, edge, count);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>*
UnityEngine::ProBuilder::MeshOperations::AppendElements::AppendVerticesToEdge(::UnityEngine::ProBuilder::ProBuilderMesh* mesh,
                                                                              ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Edge>* edges, int32_t count) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::AppendElements*>(),
                                                           { "AppendVerticesToEdge",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
                                                               ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Edge>*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>*>(nullptr, ___internal_method, mesh, edges, count);
}
inline ::ArrayW<::UnityEngine::ProBuilder::Face*> UnityEngine::ProBuilder::MeshOperations::AppendElements::InsertVertexInFace(::UnityEngine::ProBuilder::ProBuilderMesh* mesh,
                                                                                                                              ::UnityEngine::ProBuilder::Face* face, ::UnityEngine::Vector3 point) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::AppendElements*>(),
                          { "InsertVertexInFace",
                            {},
                            { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Face*>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::ProBuilder::Face*>>(nullptr, ___internal_method, mesh, face, point);
}
inline ::UnityEngine::ProBuilder::Vertex* UnityEngine::ProBuilder::MeshOperations::AppendElements::InsertVertexOnEdge(::UnityEngine::ProBuilder::ProBuilderMesh* mesh,
                                                                                                                      ::UnityEngine::ProBuilder::Edge originalEdge, ::UnityEngine::Vector3 point) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::AppendElements*>(),
                          { "InsertVertexOnEdge",
                            {},
                            { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Edge>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Vertex*>(nullptr, ___internal_method, mesh, originalEdge, point);
}
inline ::UnityEngine::ProBuilder::Vertex* UnityEngine::ProBuilder::MeshOperations::AppendElements::InsertVertexInMesh(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::Vector3 point,
                                                                                                                      ::UnityEngine::Vector3 normal) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::AppendElements*>(),
          { "InsertVertexInMesh", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Vertex*>(nullptr, ___internal_method, mesh, point, normal);
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::MeshOperations::AppendElements::AppendElements() {}
