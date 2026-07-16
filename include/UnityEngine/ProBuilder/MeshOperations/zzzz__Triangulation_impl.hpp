#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/MeshOperations/Triangulation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ProBuilder/MeshOperations/zzzz__Triangulation_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "UnityEngine/ProBuilder/MeshOperations/zzzz__Triangulation_def.hpp"
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__PolygonPoint_def.hpp"
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__TriangulationContext_def.hpp"
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__TriangulationPoint_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__Vertex_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::Triangulation___c__DisplayClass7_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::MeshOperations::Triangulation___c__DisplayClass7_0::*)()>(
    &::UnityEngine::ProBuilder::MeshOperations::Triangulation___c__DisplayClass7_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6737b70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::Triangulation___c__DisplayClass7_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::Triangulation___c__DisplayClass7_0._Triangulate_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* (::UnityEngine::ProBuilder::MeshOperations::Triangulation___c__DisplayClass7_0::*)(::UnityEngine::Vector2)>(
        &::UnityEngine::ProBuilder::MeshOperations::Triangulation___c__DisplayClass7_0::_Triangulate_b__0)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6737b78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::Triangulation___c__DisplayClass7_0*>(),
                                                                                           { "<Triangulate>b__0", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::Triangulation___c__DisplayClass7_0._Triangulate_b__1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint* (::UnityEngine::ProBuilder::MeshOperations::Triangulation___c__DisplayClass7_0::*)(::UnityEngine::Vector2)>(
        &::UnityEngine::ProBuilder::MeshOperations::Triangulation___c__DisplayClass7_0::_Triangulate_b__1)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6737bf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::Triangulation___c__DisplayClass7_0*>(),
                                                                                           { "<Triangulate>b__1", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::ProBuilder::MeshOperations::Triangulation___c__DisplayClass7_0::__cordl_internal_get_index() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___index;
}
constexpr int32_t const& UnityEngine::ProBuilder::MeshOperations::Triangulation___c__DisplayClass7_0::__cordl_internal_get_index() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___index;
}
constexpr void UnityEngine::ProBuilder::MeshOperations::Triangulation___c__DisplayClass7_0::__cordl_internal_set_index(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___index = value;
}
inline void UnityEngine::ProBuilder::MeshOperations::Triangulation___c__DisplayClass7_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::Triangulation___c__DisplayClass7_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* UnityEngine::ProBuilder::MeshOperations::Triangulation___c__DisplayClass7_0::_Triangulate_b__0(::UnityEngine::Vector2 x) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::Triangulation___c__DisplayClass7_0*>(),
                                                                                         { "<Triangulate>b__0", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>(this, ___internal_method, x);
}
inline ::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint* UnityEngine::ProBuilder::MeshOperations::Triangulation___c__DisplayClass7_0::_Triangulate_b__1(::UnityEngine::Vector2 x) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::Triangulation___c__DisplayClass7_0*>(),
                                                                                         { "<Triangulate>b__1", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*>(this, ___internal_method, x);
}
inline ::UnityEngine::ProBuilder::MeshOperations::Triangulation___c__DisplayClass7_0* UnityEngine::ProBuilder::MeshOperations::Triangulation___c__DisplayClass7_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ProBuilder::MeshOperations::Triangulation___c__DisplayClass7_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::MeshOperations::Triangulation___c__DisplayClass7_0::Triangulation___c__DisplayClass7_0() {}
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::Triangulation___c__DisplayClass8_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::MeshOperations::Triangulation___c__DisplayClass8_0::*)()>(
    &::UnityEngine::ProBuilder::MeshOperations::Triangulation___c__DisplayClass8_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6737b74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::Triangulation___c__DisplayClass8_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::Triangulation___c__DisplayClass8_0._Triangulate_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint* (::UnityEngine::ProBuilder::MeshOperations::Triangulation___c__DisplayClass8_0::*)(::UnityEngine::Vector2)>(
        &::UnityEngine::ProBuilder::MeshOperations::Triangulation___c__DisplayClass8_0::_Triangulate_b__0)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6737c68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::Triangulation___c__DisplayClass8_0*>(),
                                                                                           { "<Triangulate>b__0", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::Triangulation___c__DisplayClass8_0._Triangulate_b__1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint* (::UnityEngine::ProBuilder::MeshOperations::Triangulation___c__DisplayClass8_0::*)(::UnityEngine::Vector2)>(
        &::UnityEngine::ProBuilder::MeshOperations::Triangulation___c__DisplayClass8_0::_Triangulate_b__1)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6737ce0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::Triangulation___c__DisplayClass8_0*>(),
                                                                                           { "<Triangulate>b__1", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::ProBuilder::MeshOperations::Triangulation___c__DisplayClass8_0::__cordl_internal_get_index() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___index;
}
constexpr int32_t const& UnityEngine::ProBuilder::MeshOperations::Triangulation___c__DisplayClass8_0::__cordl_internal_get_index() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___index;
}
constexpr void UnityEngine::ProBuilder::MeshOperations::Triangulation___c__DisplayClass8_0::__cordl_internal_set_index(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___index = value;
}
constexpr ::System::Func_2<::UnityEngine::Vector2, ::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*>*&
UnityEngine::ProBuilder::MeshOperations::Triangulation___c__DisplayClass8_0::__cordl_internal_get___9__1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____9__1;
}
constexpr ::System::Func_2<::UnityEngine::Vector2, ::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*>* const&
UnityEngine::ProBuilder::MeshOperations::Triangulation___c__DisplayClass8_0::__cordl_internal_get___9__1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____9__1;
}
constexpr void UnityEngine::ProBuilder::MeshOperations::Triangulation___c__DisplayClass8_0::__cordl_internal_set___9__1(
    ::System::Func_2<::UnityEngine::Vector2, ::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____9__1 = value;
}
inline void UnityEngine::ProBuilder::MeshOperations::Triangulation___c__DisplayClass8_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::Triangulation___c__DisplayClass8_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint* UnityEngine::ProBuilder::MeshOperations::Triangulation___c__DisplayClass8_0::_Triangulate_b__0(::UnityEngine::Vector2 x) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::Triangulation___c__DisplayClass8_0*>(),
                                                                                         { "<Triangulate>b__0", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*>(this, ___internal_method, x);
}
inline ::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint* UnityEngine::ProBuilder::MeshOperations::Triangulation___c__DisplayClass8_0::_Triangulate_b__1(::UnityEngine::Vector2 x) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::Triangulation___c__DisplayClass8_0*>(),
                                                                                         { "<Triangulate>b__1", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*>(this, ___internal_method, x);
}
inline ::UnityEngine::ProBuilder::MeshOperations::Triangulation___c__DisplayClass8_0* UnityEngine::ProBuilder::MeshOperations::Triangulation___c__DisplayClass8_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ProBuilder::MeshOperations::Triangulation___c__DisplayClass8_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::MeshOperations::Triangulation___c__DisplayClass8_0::Triangulation___c__DisplayClass8_0() {}
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::Triangulation.get_triangulationContext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ProBuilder::Poly2Tri::TriangulationContext* (*)()>(
    &::UnityEngine::ProBuilder::MeshOperations::Triangulation::get_triangulationContext)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6735a4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::Triangulation*>(), { "get_triangulationContext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::Triangulation.SortAndTriangulate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*, ::by_ref<::System::Collections::Generic::List_1<int32_t>*>, bool)>(
    &::UnityEngine::ProBuilder::MeshOperations::Triangulation::SortAndTriangulate)> {
  constexpr static std::size_t size = 0x358;
  constexpr static std::size_t addrs = 0x6735ae0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::Triangulation*>(),
                                                             { "SortAndTriangulate",
                                                               {},
                                                               { ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*>(),
                                                                 ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<int32_t>*>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::Triangulation.TriangulateVertices
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<bool (*)(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>*, ::by_ref<::System::Collections::Generic::List_1<int32_t>*>, bool, bool)>(
        &::UnityEngine::ProBuilder::MeshOperations::Triangulation::TriangulateVertices)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x67369bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::Triangulation*>(),
                                                             { "TriangulateVertices",
                                                               {},
                                                               { ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>*>(),
                                                                 ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<int32_t>*>>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::Triangulation.TriangulateVertices
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::ArrayW<::UnityEngine::Vector3>, ::by_ref<::System::Collections::Generic::List_1<int32_t>*>,
                                                                ::ArrayW<::ArrayW<::UnityEngine::Vector3>>)>(&::UnityEngine::ProBuilder::MeshOperations::Triangulation::TriangulateVertices)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x6736e0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::Triangulation*>(),
                                                             { "TriangulateVertices",
                                                               {},
                                                               { ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<int32_t>*>>(),
                                                                 ::i2c::type_of<::ArrayW<::ArrayW<::UnityEngine::Vector3>>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::Triangulation.TriangulateVertices
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::ArrayW<::UnityEngine::Vector3>, ::by_ref<::System::Collections::Generic::List_1<int32_t>*>, bool, bool)>(
    &::UnityEngine::ProBuilder::MeshOperations::Triangulation::TriangulateVertices)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x6736bd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::Triangulation*>(),
                                                             { "TriangulateVertices",
                                                               {},
                                                               { ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<int32_t>*>>(),
                                                                 ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::Triangulation.Triangulate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*, ::by_ref<::System::Collections::Generic::List_1<int32_t>*>, bool)>(
    &::UnityEngine::ProBuilder::MeshOperations::Triangulation::Triangulate)> {
  constexpr static std::size_t size = 0xb84;
  constexpr static std::size_t addrs = 0x6735e38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::Triangulation*>(),
                                                             { "Triangulate",
                                                               {},
                                                               { ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*>(),
                                                                 ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<int32_t>*>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::Triangulation.Triangulate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<bool (*)(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::IList_1<::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*>*,
                         ::by_ref<::System::Collections::Generic::List_1<int32_t>*>)>(&::UnityEngine::ProBuilder::MeshOperations::Triangulation::Triangulate)> {
  constexpr static std::size_t size = 0xbec;
  constexpr static std::size_t addrs = 0x6736f84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::Triangulation*>(),
                                                             { "Triangulate",
                                                               {},
                                                               { ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::IList_1<::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*>*>(),
                                                                 ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<int32_t>*>>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::ProBuilder::MeshOperations::Triangulation::setStaticF_s_TriangulationContext(::UnityEngine::ProBuilder::Poly2Tri::TriangulationContext* value) {
  ::cordl_internals::setStaticField<::UnityEngine::ProBuilder::Poly2Tri::TriangulationContext*, "s_TriangulationContext", ::UnityEngine::ProBuilder::MeshOperations::Triangulation*>(
      std::forward<::UnityEngine::ProBuilder::Poly2Tri::TriangulationContext*>(value));
}
inline ::UnityEngine::ProBuilder::Poly2Tri::TriangulationContext* UnityEngine::ProBuilder::MeshOperations::Triangulation::getStaticF_s_TriangulationContext() {
  return ::cordl_internals::getStaticField<::UnityEngine::ProBuilder::Poly2Tri::TriangulationContext*, "s_TriangulationContext", ::UnityEngine::ProBuilder::MeshOperations::Triangulation*>();
}
inline ::UnityEngine::ProBuilder::Poly2Tri::TriangulationContext* UnityEngine::ProBuilder::MeshOperations::Triangulation::get_triangulationContext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::Triangulation*>(), { "get_triangulationContext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Poly2Tri::TriangulationContext*>(nullptr, ___internal_method);
}
inline bool UnityEngine::ProBuilder::MeshOperations::Triangulation::SortAndTriangulate(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>* points,
                                                                                       ::by_ref<::System::Collections::Generic::List_1<int32_t>*> indexes, bool convex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::Triangulation*>(),
                                                           { "SortAndTriangulate",
                                                             {},
                                                             { ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*>(),
                                                               ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<int32_t>*>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, points, indexes, convex);
}
inline bool UnityEngine::ProBuilder::MeshOperations::Triangulation::TriangulateVertices(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>* vertices,
                                                                                        ::by_ref<::System::Collections::Generic::List_1<int32_t>*> triangles, bool unordered, bool convex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::Triangulation*>(),
                                                           { "TriangulateVertices",
                                                             {},
                                                             { ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>*>(),
                                                               ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<int32_t>*>>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, vertices, triangles, unordered, convex);
}
inline bool UnityEngine::ProBuilder::MeshOperations::Triangulation::TriangulateVertices(::ArrayW<::UnityEngine::Vector3> vertices, ::by_ref<::System::Collections::Generic::List_1<int32_t>*> triangles,
                                                                                        ::ArrayW<::ArrayW<::UnityEngine::Vector3>> holes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::Triangulation*>(),
                                                           { "TriangulateVertices",
                                                             {},
                                                             { ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<int32_t>*>>(),
                                                               ::i2c::type_of<::ArrayW<::ArrayW<::UnityEngine::Vector3>>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, vertices, triangles, holes);
}
inline bool UnityEngine::ProBuilder::MeshOperations::Triangulation::TriangulateVertices(::ArrayW<::UnityEngine::Vector3> vertices, ::by_ref<::System::Collections::Generic::List_1<int32_t>*> triangles,
                                                                                        bool unordered, bool convex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::Triangulation*>(),
                                                           { "TriangulateVertices",
                                                             {},
                                                             { ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<int32_t>*>>(),
                                                               ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, vertices, triangles, unordered, convex);
}
inline bool UnityEngine::ProBuilder::MeshOperations::Triangulation::Triangulate(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>* points,
                                                                                ::by_ref<::System::Collections::Generic::List_1<int32_t>*> indexes, bool convex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::Triangulation*>(),
                                                           { "Triangulate",
                                                             {},
                                                             { ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*>(),
                                                               ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<int32_t>*>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, points, indexes, convex);
}
inline bool UnityEngine::ProBuilder::MeshOperations::Triangulation::Triangulate(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>* points,
                                                                                ::System::Collections::Generic::IList_1<::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*>* holes,
                                                                                ::by_ref<::System::Collections::Generic::List_1<int32_t>*> indexes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::MeshOperations::Triangulation*>(),
                                                           { "Triangulate",
                                                             {},
                                                             { ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*>(),
                                                               ::i2c::type_of<::System::Collections::Generic::IList_1<::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*>*>(),
                                                               ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<int32_t>*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, points, holes, indexes);
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::MeshOperations::Triangulation::Triangulation() {}
