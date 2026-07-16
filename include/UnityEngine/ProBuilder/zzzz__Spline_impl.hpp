#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/Spline.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ProBuilder/zzzz__Spline_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__BezierPoint_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__ProBuilderMesh_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::ProBuilder::Spline.Extrude
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh> (*)(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::BezierPoint>*,
                                                                                                               float_t, int32_t, int32_t, bool, bool)>(&::UnityEngine::ProBuilder::Spline::Extrude)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x66eff08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Spline*>(),
                                                             { "Extrude",
                                                               {},
                                                               { ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::BezierPoint>*>(), ::i2c::type_of<float_t>(),
                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Spline.Extrude
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::BezierPoint>*, float_t, int32_t, int32_t, bool, bool,
                                                                ::by_ref<::UnityEngine::ProBuilder::ProBuilderMesh*>)>(&::UnityEngine::ProBuilder::Spline::Extrude)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x66eff20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Spline*>(),
                                         { "Extrude",
                                           {},
                                           { ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::BezierPoint>*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(),
                                             ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::UnityEngine::ProBuilder::ProBuilderMesh*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Spline.GetControlPoints
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<
    ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* (*)(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::BezierPoint>*, int32_t, bool,
                                                                        ::System::Collections::Generic::List_1<::UnityEngine::Quaternion>*)>(&::UnityEngine::ProBuilder::Spline::GetControlPoints)> {
  constexpr static std::size_t size = 0x540;
  constexpr static std::size_t addrs = 0x66efff4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Spline*>(),
                                                             { "GetControlPoints",
                                                               {},
                                                               { ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::BezierPoint>*>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<bool>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Quaternion>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Spline.Extrude
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*, float_t, int32_t, bool, bool,
                                                                ::by_ref<::UnityEngine::ProBuilder::ProBuilderMesh*>, ::System::Collections::Generic::IList_1<::UnityEngine::Quaternion>*)>(
    &::UnityEngine::ProBuilder::Spline::Extrude)> {
  constexpr static std::size_t size = 0x994;
  constexpr static std::size_t addrs = 0x66f0534;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Spline*>(),
                                                { "Extrude",
                                                  {},
                                                  { ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(),
                                                    ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::UnityEngine::ProBuilder::ProBuilderMesh*>>(),
                                                    ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::Quaternion>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Spline.GetRingRotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (*)(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*, int32_t, bool, ::by_ref<float_t>)>(
    &::UnityEngine::ProBuilder::Spline::GetRingRotation)> {
  constexpr static std::size_t size = 0x8f0;
  constexpr static std::size_t addrs = 0x66f0ec8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Spline*>(), { "GetRingRotation",
                                                                                                  {},
                                                                                                  { ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*>(),
                                                                                                    ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<float_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Spline.VertexRing
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Vector3> (*)(::UnityEngine::Quaternion, ::UnityEngine::Vector3, float_t, int32_t)>(
    &::UnityEngine::ProBuilder::Spline::VertexRing)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x66f17b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Spline*>(),
                            { "VertexRing", {}, { ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline ::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh> UnityEngine::ProBuilder::Spline::Extrude(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::BezierPoint>* points,
                                                                                                    float_t radius, int32_t columns, int32_t rows, bool closeLoop, bool smooth) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Spline*>(),
                                                           { "Extrude",
                                                             {},
                                                             { ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::BezierPoint>*>(), ::i2c::type_of<float_t>(),
                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>(nullptr, ___internal_method, points, radius, columns, rows, closeLoop, smooth);
}
inline void UnityEngine::ProBuilder::Spline::Extrude(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::BezierPoint>* bezierPoints, float_t radius, int32_t columns, int32_t rows,
                                                     bool closeLoop, bool smooth, ::by_ref<::UnityEngine::ProBuilder::ProBuilderMesh*> target) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Spline*>(),
                                       { "Extrude",
                                         {},
                                         { ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::BezierPoint>*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(),
                                           ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::UnityEngine::ProBuilder::ProBuilderMesh*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, bezierPoints, radius, columns, rows, closeLoop, smooth, target);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*
UnityEngine::ProBuilder::Spline::GetControlPoints(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::BezierPoint>* bezierPoints, int32_t subdivisionsPerSegment, bool closeLoop,
                                                  ::System::Collections::Generic::List_1<::UnityEngine::Quaternion>* rotations) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Spline*>(),
                                                           { "GetControlPoints",
                                                             {},
                                                             { ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::BezierPoint>*>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<bool>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Quaternion>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(nullptr, ___internal_method, bezierPoints, subdivisionsPerSegment, closeLoop, rotations);
}
inline void UnityEngine::ProBuilder::Spline::Extrude(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>* points, float_t radius, int32_t radiusRows, bool closeLoop, bool smooth,
                                                     ::by_ref<::UnityEngine::ProBuilder::ProBuilderMesh*> target, ::System::Collections::Generic::IList_1<::UnityEngine::Quaternion>* pointRotations) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Spline*>(),
                                                           { "Extrude",
                                                             {},
                                                             { ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::UnityEngine::ProBuilder::ProBuilderMesh*>>(),
                                                               ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::Quaternion>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, points, radius, radiusRows, closeLoop, smooth, target, pointRotations);
}
inline ::UnityEngine::Quaternion UnityEngine::ProBuilder::Spline::GetRingRotation(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>* points, int32_t i, bool closeLoop,
                                                                                  ::by_ref<float_t> secant) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Spline*>(), { "GetRingRotation",
                                                                                                       {},
                                                                                                       { ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*>(),
                                                                                                         ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<float_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(nullptr, ___internal_method, points, i, closeLoop, secant);
}
inline ::ArrayW<::UnityEngine::Vector3> UnityEngine::ProBuilder::Spline::VertexRing(::UnityEngine::Quaternion orientation, ::UnityEngine::Vector3 offset, float_t radius, int32_t segments) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Spline*>(),
                          { "VertexRing", {}, { ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Vector3>>(nullptr, ___internal_method, orientation, offset, radius, segments);
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::Spline::Spline() {}
