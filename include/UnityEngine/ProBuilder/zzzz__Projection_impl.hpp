#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/Projection.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ProBuilder/zzzz__Projection_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__AutoUnwrapSettings_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__Face_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__ProBuilderMesh_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__ProjectionAxis_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__Projection_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__SimpleTuple_2_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__SortMethod_def.hpp"
#include "UnityEngine/zzzz__Plane_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::ProBuilder::Projection___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Projection___c::*)()>(&::UnityEngine::ProBuilder::Projection___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x66da250;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Projection___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Projection___c._Sort_b__6_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ProBuilder::Projection___c::*)(::UnityEngine::ProBuilder::SimpleTuple_2<float_t, ::UnityEngine::Vector2>,
                                                                                                              ::UnityEngine::ProBuilder::SimpleTuple_2<float_t, ::UnityEngine::Vector2>)>(
    &::UnityEngine::ProBuilder::Projection___c::_Sort_b__6_0)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x66da254;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Projection___c*>(),
                                                                                           { "<Sort>b__6_0",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::ProBuilder::SimpleTuple_2<float_t, ::UnityEngine::Vector2>>(),
                                                                                               ::i2c::type_of<::UnityEngine::ProBuilder::SimpleTuple_2<float_t, ::UnityEngine::Vector2>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Projection___c._Sort_b__6_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::ProBuilder::Projection___c::*)(
    ::UnityEngine::ProBuilder::SimpleTuple_2<float_t, ::UnityEngine::Vector2>)>(&::UnityEngine::ProBuilder::Projection___c::_Sort_b__6_1)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x66da2ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Projection___c*>(),
                                                             { "<Sort>b__6_1", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::SimpleTuple_2<float_t, ::UnityEngine::Vector2>>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::ProBuilder::Projection___c::setStaticF___9(::UnityEngine::ProBuilder::Projection___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::ProBuilder::Projection___c*, "<>9", ::UnityEngine::ProBuilder::Projection___c*>(std::forward<::UnityEngine::ProBuilder::Projection___c*>(value));
}
inline ::UnityEngine::ProBuilder::Projection___c* UnityEngine::ProBuilder::Projection___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::ProBuilder::Projection___c*, "<>9", ::UnityEngine::ProBuilder::Projection___c*>();
}
inline void UnityEngine::ProBuilder::Projection___c::setStaticF___9__6_0(::System::Comparison_1<::UnityEngine::ProBuilder::SimpleTuple_2<float_t, ::UnityEngine::Vector2>>* value) {
  ::cordl_internals::setStaticField<::System::Comparison_1<::UnityEngine::ProBuilder::SimpleTuple_2<float_t, ::UnityEngine::Vector2>>*, "<>9__6_0", ::UnityEngine::ProBuilder::Projection___c*>(
      std::forward<::System::Comparison_1<::UnityEngine::ProBuilder::SimpleTuple_2<float_t, ::UnityEngine::Vector2>>*>(value));
}
inline ::System::Comparison_1<::UnityEngine::ProBuilder::SimpleTuple_2<float_t, ::UnityEngine::Vector2>>* UnityEngine::ProBuilder::Projection___c::getStaticF___9__6_0() {
  return ::cordl_internals::getStaticField<::System::Comparison_1<::UnityEngine::ProBuilder::SimpleTuple_2<float_t, ::UnityEngine::Vector2>>*, "<>9__6_0",
                                           ::UnityEngine::ProBuilder::Projection___c*>();
}
inline void UnityEngine::ProBuilder::Projection___c::setStaticF___9__6_1(::System::Func_2<::UnityEngine::ProBuilder::SimpleTuple_2<float_t, ::UnityEngine::Vector2>, ::UnityEngine::Vector2>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::ProBuilder::SimpleTuple_2<float_t, ::UnityEngine::Vector2>, ::UnityEngine::Vector2>*, "<>9__6_1",
                                    ::UnityEngine::ProBuilder::Projection___c*>(
      std::forward<::System::Func_2<::UnityEngine::ProBuilder::SimpleTuple_2<float_t, ::UnityEngine::Vector2>, ::UnityEngine::Vector2>*>(value));
}
inline ::System::Func_2<::UnityEngine::ProBuilder::SimpleTuple_2<float_t, ::UnityEngine::Vector2>, ::UnityEngine::Vector2>* UnityEngine::ProBuilder::Projection___c::getStaticF___9__6_1() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::ProBuilder::SimpleTuple_2<float_t, ::UnityEngine::Vector2>, ::UnityEngine::Vector2>*, "<>9__6_1",
                                           ::UnityEngine::ProBuilder::Projection___c*>();
}
inline void UnityEngine::ProBuilder::Projection___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Projection___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t UnityEngine::ProBuilder::Projection___c::_Sort_b__6_0(::UnityEngine::ProBuilder::SimpleTuple_2<float_t, ::UnityEngine::Vector2> a,
                                                                     ::UnityEngine::ProBuilder::SimpleTuple_2<float_t, ::UnityEngine::Vector2> b) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Projection___c*>(),
                                                                                         { "<Sort>b__6_0",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::ProBuilder::SimpleTuple_2<float_t, ::UnityEngine::Vector2>>(),
                                                                                             ::i2c::type_of<::UnityEngine::ProBuilder::SimpleTuple_2<float_t, ::UnityEngine::Vector2>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, a, b);
}
inline ::UnityEngine::Vector2 UnityEngine::ProBuilder::Projection___c::_Sort_b__6_1(::UnityEngine::ProBuilder::SimpleTuple_2<float_t, ::UnityEngine::Vector2> x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Projection___c*>(),
                                                           { "<Sort>b__6_1", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::SimpleTuple_2<float_t, ::UnityEngine::Vector2>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method, x);
}
inline ::UnityEngine::ProBuilder::Projection___c* UnityEngine::ProBuilder::Projection___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ProBuilder::Projection___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::Projection___c::Projection___c() {}
//  Writing Method size for method: ::UnityEngine::ProBuilder::Projection.PlanarProject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Vector2> (*)(
    ::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::IList_1<int32_t>*)>(&::UnityEngine::ProBuilder::Projection::PlanarProject)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x66d7448;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::ProBuilder::Projection*>(),
            { "PlanarProject", {}, { ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<::System::Collections::Generic::IList_1<int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Projection.PlanarProject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::ArrayW<::UnityEngine::Vector2> (*)(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::IList_1<int32_t>*, ::UnityEngine::Vector3)>(
        &::UnityEngine::ProBuilder::Projection::PlanarProject)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x66d7e00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Projection*>(),
                                                             { "PlanarProject",
                                                               {},
                                                               { ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::IList_1<int32_t>*>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Projection.PlanarProject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::IList_1<int32_t>*,
                                                                ::UnityEngine::Vector3, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*)>(
    &::UnityEngine::ProBuilder::Projection::PlanarProject)> {
  constexpr static std::size_t size = 0x7c4;
  constexpr static std::size_t addrs = 0x66d7fd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Projection*>(),
                                         { "PlanarProject",
                                           {},
                                           { ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<::System::Collections::Generic::IList_1<int32_t>*>(),
                                             ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Projection.PlanarProject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, int32_t, ::UnityEngine::ProBuilder::AutoUnwrapSettings)>(
    &::UnityEngine::ProBuilder::Projection::PlanarProject)> {
  constexpr static std::size_t size = 0x4b8;
  constexpr static std::size_t addrs = 0x66d8950;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::ProBuilder::Projection*>(),
            { "PlanarProject", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::ProBuilder::AutoUnwrapSettings>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Projection.PlanarProject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::Face*, ::UnityEngine::Vector3)>(
    &::UnityEngine::ProBuilder::Projection::PlanarProject)> {
  constexpr static std::size_t size = 0x460;
  constexpr static std::size_t addrs = 0x66d8e08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::ProBuilder::Projection*>(),
            { "PlanarProject", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Face*>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Projection.SphericalProject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Vector2> (*)(
    ::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::IList_1<int32_t>*)>(&::UnityEngine::ProBuilder::Projection::SphericalProject)> {
  constexpr static std::size_t size = 0x3e8;
  constexpr static std::size_t addrs = 0x66d9268;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::ProBuilder::Projection*>(),
            { "SphericalProject", {}, { ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<::System::Collections::Generic::IList_1<int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Projection.Sort
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Collections::Generic::IList_1<::UnityEngine::Vector2>* (*)(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*, ::UnityEngine::ProBuilder::SortMethod)>(
        &::UnityEngine::ProBuilder::Projection::Sort)> {
  constexpr static std::size_t size = 0x50c;
  constexpr static std::size_t addrs = 0x66d9650;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Projection*>(),
                            { "Sort", {}, { ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*>(), ::i2c::type_of<::UnityEngine::ProBuilder::SortMethod>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Projection.GetTangentToAxis
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::ProBuilder::ProjectionAxis)>(&::UnityEngine::ProBuilder::Projection::GetTangentToAxis)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x66d8884;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Projection*>(), { "GetTangentToAxis", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProjectionAxis>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Projection.ProjectionAxisToVector
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::ProBuilder::ProjectionAxis)>(&::UnityEngine::ProBuilder::Projection::ProjectionAxisToVector)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x66d9b5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Projection*>(),
                                                                                           { "ProjectionAxisToVector", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProjectionAxis>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Projection.VectorToProjectionAxis
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ProBuilder::ProjectionAxis (*)(::UnityEngine::Vector3)>(&::UnityEngine::ProBuilder::Projection::VectorToProjectionAxis)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x66d8798;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Projection*>(), { "VectorToProjectionAxis", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Projection.FindBestPlane
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Plane (*)(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::IList_1<int32_t>*)>(
    &::UnityEngine::ProBuilder::Projection::FindBestPlane)> {
  constexpr static std::size_t size = 0x990;
  constexpr static std::size_t addrs = 0x66d7470;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::ProBuilder::Projection*>(),
            { "FindBestPlane", {}, { ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<::System::Collections::Generic::IList_1<int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Projection.FindBestPlane
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Plane (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, int32_t)>(&::UnityEngine::ProBuilder::Projection::FindBestPlane)> {
  constexpr static std::size_t size = 0x4d0;
  constexpr static std::size_t addrs = 0x66d9d2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Projection*>(),
                                                             { "FindBestPlane", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline ::ArrayW<::UnityEngine::Vector2> UnityEngine::ProBuilder::Projection::PlanarProject(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>* positions,
                                                                                           ::System::Collections::Generic::IList_1<int32_t>* indexes) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::ProBuilder::Projection*>(),
          { "PlanarProject", {}, { ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<::System::Collections::Generic::IList_1<int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Vector2>>(nullptr, ___internal_method, positions, indexes);
}
inline ::ArrayW<::UnityEngine::Vector2> UnityEngine::ProBuilder::Projection::PlanarProject(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>* positions,
                                                                                           ::System::Collections::Generic::IList_1<int32_t>* indexes, ::UnityEngine::Vector3 direction) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Projection*>(),
                                                           { "PlanarProject",
                                                             {},
                                                             { ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*>(),
                                                               ::i2c::type_of<::System::Collections::Generic::IList_1<int32_t>*>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Vector2>>(nullptr, ___internal_method, positions, indexes, direction);
}
inline void UnityEngine::ProBuilder::Projection::PlanarProject(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>* positions, ::System::Collections::Generic::IList_1<int32_t>* indexes,
                                                               ::UnityEngine::Vector3 direction, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* results) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Projection*>(),
                                       { "PlanarProject",
                                         {},
                                         { ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<::System::Collections::Generic::IList_1<int32_t>*>(),
                                           ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, positions, indexes, direction, results);
}
inline void UnityEngine::ProBuilder::Projection::PlanarProject(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, int32_t textureGroup, ::UnityEngine::ProBuilder::AutoUnwrapSettings unwrapSettings) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::ProBuilder::Projection*>(),
          { "PlanarProject", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::ProBuilder::AutoUnwrapSettings>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mesh, textureGroup, unwrapSettings);
}
inline void UnityEngine::ProBuilder::Projection::PlanarProject(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::ProBuilder::Face* face, ::UnityEngine::Vector3 projection) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::ProBuilder::Projection*>(),
          { "PlanarProject", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Face*>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mesh, face, projection);
}
inline ::ArrayW<::UnityEngine::Vector2> UnityEngine::ProBuilder::Projection::SphericalProject(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>* vertices,
                                                                                              ::System::Collections::Generic::IList_1<int32_t>* indexes) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::ProBuilder::Projection*>(),
          { "SphericalProject", {}, { ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<::System::Collections::Generic::IList_1<int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Vector2>>(nullptr, ___internal_method, vertices, indexes);
}
inline ::System::Collections::Generic::IList_1<::UnityEngine::Vector2>* UnityEngine::ProBuilder::Projection::Sort(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>* verts,
                                                                                                                  ::UnityEngine::ProBuilder::SortMethod method) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Projection*>(),
                          { "Sort", {}, { ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*>(), ::i2c::type_of<::UnityEngine::ProBuilder::SortMethod>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*>(nullptr, ___internal_method, verts, method);
}
inline ::UnityEngine::Vector3 UnityEngine::ProBuilder::Projection::GetTangentToAxis(::UnityEngine::ProBuilder::ProjectionAxis axis) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Projection*>(), { "GetTangentToAxis", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProjectionAxis>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, axis);
}
inline ::UnityEngine::Vector3 UnityEngine::ProBuilder::Projection::ProjectionAxisToVector(::UnityEngine::ProBuilder::ProjectionAxis axis) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Projection*>(), { "ProjectionAxisToVector", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProjectionAxis>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, axis);
}
inline ::UnityEngine::ProBuilder::ProjectionAxis UnityEngine::ProBuilder::Projection::VectorToProjectionAxis(::UnityEngine::Vector3 direction) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Projection*>(), { "VectorToProjectionAxis", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::ProjectionAxis>(nullptr, ___internal_method, direction);
}
inline ::UnityEngine::Plane UnityEngine::ProBuilder::Projection::FindBestPlane(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>* points,
                                                                               ::System::Collections::Generic::IList_1<int32_t>* indexes) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::ProBuilder::Projection*>(),
          { "FindBestPlane", {}, { ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<::System::Collections::Generic::IList_1<int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Plane>(nullptr, ___internal_method, points, indexes);
}
inline ::UnityEngine::Plane UnityEngine::ProBuilder::Projection::FindBestPlane(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, int32_t textureGroup) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Projection*>(),
                                                           { "FindBestPlane", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Plane>(nullptr, ___internal_method, mesh, textureGroup);
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::Projection::Projection() {}
