#pragma once
// IWYU pragma private; include "UnityEngine\ProBuilder\Poly2Tri\PointSet.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__PointSet_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__DelaunayTriangle_def.hpp"
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__Triangulatable_def.hpp"
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__TriangulationContext_def.hpp"
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__TriangulationMode_def.hpp"
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__TriangulationPoint_def.hpp"
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::PointSet.get_Points
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>* (
    ::UnityEngine::ProBuilder::Poly2Tri::PointSet::*)()>(&::UnityEngine::ProBuilder::Poly2Tri::PointSet::get_Points)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66b1af4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::PointSet*>(), { "get_Points", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::PointSet.set_Points
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Poly2Tri::PointSet::*)(
    ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>*)>(&::UnityEngine::ProBuilder::Poly2Tri::PointSet::set_Points)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66b1afc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::PointSet*>(),
                                                { "set_Points", {}, { ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::PointSet.get_Triangles
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>* (
    ::UnityEngine::ProBuilder::Poly2Tri::PointSet::*)()>(&::UnityEngine::ProBuilder::Poly2Tri::PointSet::get_Triangles)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66b1b04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::PointSet*>(), { "get_Triangles", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::PointSet.set_Triangles
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Poly2Tri::PointSet::*)(
    ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>*)>(&::UnityEngine::ProBuilder::Poly2Tri::PointSet::set_Triangles)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66b1b0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::PointSet*>(),
                                                { "set_Triangles", {}, { ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::PointSet._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Poly2Tri::PointSet::*)(
    ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>*)>(&::UnityEngine::ProBuilder::Poly2Tri::PointSet::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x66b16f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::PointSet*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::PointSet.get_TriangulationMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ProBuilder::Poly2Tri::TriangulationMode (::UnityEngine::ProBuilder::Poly2Tri::PointSet::*)()>(
    &::UnityEngine::ProBuilder::Poly2Tri::PointSet::get_TriangulationMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66b1b14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::PointSet*>(), { ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::PointSet*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::PointSet.AddTriangle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Poly2Tri::PointSet::*)(::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*)>(
    &::UnityEngine::ProBuilder::Poly2Tri::PointSet::AddTriangle)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x66b1b1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::PointSet*>(),
                                                                                           { "AddTriangle", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::PointSet.AddTriangles
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Poly2Tri::PointSet::*)(
    ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>*)>(&::UnityEngine::ProBuilder::Poly2Tri::PointSet::AddTriangles)> {
  constexpr static std::size_t size = 0x334;
  constexpr static std::size_t addrs = 0x66b1bd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::PointSet*>(),
                                                { "AddTriangles", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::PointSet.ClearTriangles
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Poly2Tri::PointSet::*)()>(&::UnityEngine::ProBuilder::Poly2Tri::PointSet::ClearTriangles)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x66b1f08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::PointSet*>(), { "ClearTriangles", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::PointSet.Prepare
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Poly2Tri::PointSet::*)(::UnityEngine::ProBuilder::Poly2Tri::TriangulationContext*)>(
    &::UnityEngine::ProBuilder::Poly2Tri::PointSet::Prepare)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x66b192c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::PointSet*>(), { ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::PointSet*>(), 12 }));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>*&
UnityEngine::ProBuilder::Poly2Tri::PointSet::__cordl_internal_get__Points_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Points_k__BackingField;
}
constexpr ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>* const&
UnityEngine::ProBuilder::Poly2Tri::PointSet::__cordl_internal_get__Points_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Points_k__BackingField;
}
constexpr void
UnityEngine::ProBuilder::Poly2Tri::PointSet::__cordl_internal_set__Points_k__BackingField(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Points_k__BackingField = value;
}
constexpr ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>*&
UnityEngine::ProBuilder::Poly2Tri::PointSet::__cordl_internal_get__Triangles_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Triangles_k__BackingField;
}
constexpr ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>* const&
UnityEngine::ProBuilder::Poly2Tri::PointSet::__cordl_internal_get__Triangles_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Triangles_k__BackingField;
}
constexpr void
UnityEngine::ProBuilder::Poly2Tri::PointSet::__cordl_internal_set__Triangles_k__BackingField(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Triangles_k__BackingField = value;
}
inline ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>* UnityEngine::ProBuilder::Poly2Tri::PointSet::get_Points() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::PointSet*>(), { "get_Points", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>*>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::Poly2Tri::PointSet::set_Points(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::PointSet*>(),
                                              { "set_Points", {}, { ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>* UnityEngine::ProBuilder::Poly2Tri::PointSet::get_Triangles() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::PointSet*>(), { "get_Triangles", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>*>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::Poly2Tri::PointSet::set_Triangles(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::PointSet*>(),
                                              { "set_Triangles", {}, { ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::ProBuilder::Poly2Tri::PointSet::_ctor(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>* points) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::PointSet*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, points);
}
inline ::UnityEngine::ProBuilder::Poly2Tri::TriangulationMode UnityEngine::ProBuilder::Poly2Tri::PointSet::get_TriangulationMode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::PointSet*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Poly2Tri::TriangulationMode>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::Poly2Tri::PointSet::AddTriangle(::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* t) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::PointSet*>(),
                                                                                         { "AddTriangle", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, t);
}
inline void UnityEngine::ProBuilder::Poly2Tri::PointSet::AddTriangles(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>* list) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::PointSet*>(),
                                              { "AddTriangles", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, list);
}
inline void UnityEngine::ProBuilder::Poly2Tri::PointSet::ClearTriangles() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::PointSet*>(), { "ClearTriangles", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::Poly2Tri::PointSet::Prepare(::UnityEngine::ProBuilder::Poly2Tri::TriangulationContext* tcx) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::PointSet*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tcx);
}
inline ::UnityEngine::ProBuilder::Poly2Tri::PointSet*
UnityEngine::ProBuilder::Poly2Tri::PointSet::New_ctor(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>* points) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ProBuilder::Poly2Tri::PointSet*>(points));
}
/// @brief Convert operator to "::UnityEngine::ProBuilder::Poly2Tri::Triangulatable"
constexpr UnityEngine::ProBuilder::Poly2Tri::PointSet::operator ::UnityEngine::ProBuilder::Poly2Tri::Triangulatable*() noexcept {
  return static_cast<::UnityEngine::ProBuilder::Poly2Tri::Triangulatable*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ProBuilder::Poly2Tri::Triangulatable"
constexpr ::UnityEngine::ProBuilder::Poly2Tri::Triangulatable* UnityEngine::ProBuilder::Poly2Tri::PointSet::i___UnityEngine__ProBuilder__Poly2Tri__Triangulatable() noexcept {
  return static_cast<::UnityEngine::ProBuilder::Poly2Tri::Triangulatable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::Poly2Tri::PointSet::PointSet() {}
