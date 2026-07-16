#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/EdgeUtility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ProBuilder/zzzz__EdgeUtility_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__EdgeUtility_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__Edge_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__Face_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__ProBuilderMesh_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__SimpleTuple_2_def.hpp"
//  Writing Method size for method: ::UnityEngine::ProBuilder::EdgeUtility___c__DisplayClass0_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::EdgeUtility___c__DisplayClass0_0::*)()>(&::UnityEngine::ProBuilder::EdgeUtility___c__DisplayClass0_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x66b638c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::EdgeUtility___c__DisplayClass0_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::EdgeUtility___c__DisplayClass0_0._GetSharedVertexHandleEdges_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ProBuilder::Edge (::UnityEngine::ProBuilder::EdgeUtility___c__DisplayClass0_0::*)(::UnityEngine::ProBuilder::Edge)>(
    &::UnityEngine::ProBuilder::EdgeUtility___c__DisplayClass0_0::_GetSharedVertexHandleEdges_b__0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66b6c60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::EdgeUtility___c__DisplayClass0_0*>(),
                                                                                           { "<GetSharedVertexHandleEdges>b__0", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Edge>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>& UnityEngine::ProBuilder::EdgeUtility___c__DisplayClass0_0::__cordl_internal_get_mesh() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mesh;
}
constexpr ::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh> const& UnityEngine::ProBuilder::EdgeUtility___c__DisplayClass0_0::__cordl_internal_get_mesh() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mesh;
}
constexpr void UnityEngine::ProBuilder::EdgeUtility___c__DisplayClass0_0::__cordl_internal_set_mesh(::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mesh = value;
}
inline void UnityEngine::ProBuilder::EdgeUtility___c__DisplayClass0_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::EdgeUtility___c__DisplayClass0_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::ProBuilder::Edge UnityEngine::ProBuilder::EdgeUtility___c__DisplayClass0_0::_GetSharedVertexHandleEdges_b__0(::UnityEngine::ProBuilder::Edge x) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::EdgeUtility___c__DisplayClass0_0*>(),
                                                                                         { "<GetSharedVertexHandleEdges>b__0", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Edge>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Edge>(this, ___internal_method, x);
}
inline ::UnityEngine::ProBuilder::EdgeUtility___c__DisplayClass0_0* UnityEngine::ProBuilder::EdgeUtility___c__DisplayClass0_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ProBuilder::EdgeUtility___c__DisplayClass0_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::EdgeUtility___c__DisplayClass0_0::EdgeUtility___c__DisplayClass0_0() {}
//  Writing Method size for method: ::UnityEngine::ProBuilder::EdgeUtility.GetSharedVertexHandleEdges
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<
    ::UnityEngine::ProBuilder::Edge>* (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*)>(
    &::UnityEngine::ProBuilder::EdgeUtility::GetSharedVertexHandleEdges)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x66b627c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::EdgeUtility*>(),
                            { "GetSharedVertexHandleEdges",
                              {},
                              { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::EdgeUtility.GetSharedVertexHandleEdge
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ProBuilder::Edge (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::Edge)>(
    &::UnityEngine::ProBuilder::EdgeUtility::GetSharedVertexHandleEdge)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x66b6390;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::EdgeUtility*>(),
                                         { "GetSharedVertexHandleEdge", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Edge>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::EdgeUtility.GetEdgeWithSharedVertexHandles
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ProBuilder::Edge (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::Edge)>(
    &::UnityEngine::ProBuilder::EdgeUtility::GetEdgeWithSharedVertexHandles)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x66b642c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::EdgeUtility*>(),
                            { "GetEdgeWithSharedVertexHandles", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Edge>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::EdgeUtility.ValidateEdge
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::Edge,
                                                                ::by_ref<::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::Face*, ::UnityEngine::ProBuilder::Edge>>)>(
    &::UnityEngine::ProBuilder::EdgeUtility::ValidateEdge)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x66b64bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::EdgeUtility*>(),
                                                { "ValidateEdge",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Edge>(),
                                                    ::i2c::type_of<::by_ref<::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::Face*, ::UnityEngine::ProBuilder::Edge>>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::EdgeUtility.Contains
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::ArrayW<::UnityEngine::ProBuilder::Edge>, ::UnityEngine::ProBuilder::Edge)>(&::UnityEngine::ProBuilder::EdgeUtility::Contains)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x66b66fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::EdgeUtility*>(),
                                                             { "Contains", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::ProBuilder::Edge>>(), ::i2c::type_of<::UnityEngine::ProBuilder::Edge>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::EdgeUtility.Contains
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::ArrayW<::UnityEngine::ProBuilder::Edge>, int32_t, int32_t)>(&::UnityEngine::ProBuilder::EdgeUtility::Contains)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x66b67e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::EdgeUtility*>(),
                                                { "Contains", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::ProBuilder::Edge>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::EdgeUtility.IndexOf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Edge>*,
                                                                   ::UnityEngine::ProBuilder::Edge)>(&::UnityEngine::ProBuilder::EdgeUtility::IndexOf)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x66b6864;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::EdgeUtility*>(),
                                         { "IndexOf",
                                           {},
                                           { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Edge>*>(),
                                             ::i2c::type_of<::UnityEngine::ProBuilder::Edge>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::EdgeUtility.AllTriangles
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int32_t> (*)(::ArrayW<::UnityEngine::ProBuilder::Edge>)>(&::UnityEngine::ProBuilder::EdgeUtility::AllTriangles)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x66b6a10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::EdgeUtility*>(), { "AllTriangles", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::ProBuilder::Edge>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::EdgeUtility.GetFace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ProBuilder::Face* (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::Edge)>(
    &::UnityEngine::ProBuilder::EdgeUtility::GetFace)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x66b6ad0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::EdgeUtility*>(),
                                                             { "GetFace", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Edge>() } })));
    return ___internal_method;
  }
};
inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*
UnityEngine::ProBuilder::EdgeUtility::GetSharedVertexHandleEdges(::UnityEngine::ProBuilder::ProBuilderMesh* mesh,
                                                                 ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>* edges) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::EdgeUtility*>(),
                          { "GetSharedVertexHandleEdges",
                            {},
                            { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*>(nullptr, ___internal_method, mesh, edges);
}
inline ::UnityEngine::ProBuilder::Edge UnityEngine::ProBuilder::EdgeUtility::GetSharedVertexHandleEdge(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::ProBuilder::Edge edge) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::EdgeUtility*>(),
                                       { "GetSharedVertexHandleEdge", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Edge>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Edge>(nullptr, ___internal_method, mesh, edge);
}
inline ::UnityEngine::ProBuilder::Edge UnityEngine::ProBuilder::EdgeUtility::GetEdgeWithSharedVertexHandles(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::ProBuilder::Edge edge) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::EdgeUtility*>(),
                                       { "GetEdgeWithSharedVertexHandles", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Edge>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Edge>(nullptr, ___internal_method, mesh, edge);
}
inline bool UnityEngine::ProBuilder::EdgeUtility::ValidateEdge(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::ProBuilder::Edge edge,
                                                               ::by_ref<::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::Face*, ::UnityEngine::ProBuilder::Edge>> validEdge) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::EdgeUtility*>(),
                                              { "ValidateEdge",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Edge>(),
                                                  ::i2c::type_of<::by_ref<::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::Face*, ::UnityEngine::ProBuilder::Edge>>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, mesh, edge, validEdge);
}
inline bool UnityEngine::ProBuilder::EdgeUtility::Contains(::ArrayW<::UnityEngine::ProBuilder::Edge> edges, ::UnityEngine::ProBuilder::Edge edge) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::EdgeUtility*>(),
                                                           { "Contains", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::ProBuilder::Edge>>(), ::i2c::type_of<::UnityEngine::ProBuilder::Edge>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, edges, edge);
}
inline bool UnityEngine::ProBuilder::EdgeUtility::Contains(::ArrayW<::UnityEngine::ProBuilder::Edge> edges, int32_t x, int32_t y) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::EdgeUtility*>(),
                                                           { "Contains", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::ProBuilder::Edge>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, edges, x, y);
}
inline int32_t UnityEngine::ProBuilder::EdgeUtility::IndexOf(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Edge>* edges,
                                                             ::UnityEngine::ProBuilder::Edge edge) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::EdgeUtility*>(),
                                              { "IndexOf",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
                                                  ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Edge>*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Edge>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, mesh, edges, edge);
}
inline ::ArrayW<int32_t> UnityEngine::ProBuilder::EdgeUtility::AllTriangles(::ArrayW<::UnityEngine::ProBuilder::Edge> edges) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::EdgeUtility*>(), { "AllTriangles", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::ProBuilder::Edge>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>>(nullptr, ___internal_method, edges);
}
inline ::UnityEngine::ProBuilder::Face* UnityEngine::ProBuilder::EdgeUtility::GetFace(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::ProBuilder::Edge edge) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::EdgeUtility*>(),
                                                           { "GetFace", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Edge>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Face*>(nullptr, ___internal_method, mesh, edge);
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::EdgeUtility::EdgeUtility() {}
