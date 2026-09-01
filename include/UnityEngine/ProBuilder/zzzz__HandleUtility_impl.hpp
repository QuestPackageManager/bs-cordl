#pragma once
// IWYU pragma private; include "UnityEngine\ProBuilder\HandleUtility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ProBuilder/zzzz__HandleUtility_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__CullingMode_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__Edge_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__Face_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__HandleOrientation_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__ProBuilderMesh_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__RaycastHit_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__SimpleTuple_2_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Ray_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::ProBuilder::HandleUtility.ScreenToGuiPoint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Camera*, ::UnityEngine::Vector3, float_t)>(
    &::UnityEngine::ProBuilder::HandleUtility::ScreenToGuiPoint)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x66becb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::HandleUtility*>(),
                                                { "ScreenToGuiPoint", {}, { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::HandleUtility.FaceRaycast
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Ray, ::UnityEngine::ProBuilder::ProBuilderMesh*, ::by_ref<::UnityEngine::ProBuilder::RaycastHit*>,
                                                                ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>*)>(
    &::UnityEngine::ProBuilder::HandleUtility::FaceRaycast)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x66bed04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::HandleUtility*>(),
                                                                                           { "FaceRaycast",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
                                                                                               ::i2c::type_of<::by_ref<::UnityEngine::ProBuilder::RaycastHit*>>(),
                                                                                               ::i2c::type_of<::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::HandleUtility.FaceRaycast
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Ray, ::UnityEngine::ProBuilder::ProBuilderMesh*, ::by_ref<::UnityEngine::ProBuilder::RaycastHit*>, float_t,
                                                                ::UnityEngine::ProBuilder::CullingMode, ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>*)>(
    &::UnityEngine::ProBuilder::HandleUtility::FaceRaycast)> {
  constexpr static std::size_t size = 0x524;
  constexpr static std::size_t addrs = 0x66bed44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::HandleUtility*>(),
                                         { "FaceRaycast",
                                           {},
                                           { ::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
                                             ::i2c::type_of<::by_ref<::UnityEngine::ProBuilder::RaycastHit*>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::ProBuilder::CullingMode>(),
                                             ::i2c::type_of<::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::HandleUtility.FaceRaycastBothCullModes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(
    ::UnityEngine::Ray, ::UnityEngine::ProBuilder::ProBuilderMesh*, ::by_ref<::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::Face*, ::UnityEngine::Vector3>>,
    ::by_ref<::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::Face*, ::UnityEngine::Vector3>>)>(&::UnityEngine::ProBuilder::HandleUtility::FaceRaycastBothCullModes)> {
  constexpr static std::size_t size = 0x52c;
  constexpr static std::size_t addrs = 0x66bf504;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::HandleUtility*>(),
                                                             { "FaceRaycastBothCullModes",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::Face*, ::UnityEngine::Vector3>>>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::Face*, ::UnityEngine::Vector3>>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::HandleUtility.FaceRaycast
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(
    ::UnityEngine::Ray, ::UnityEngine::ProBuilder::ProBuilderMesh*, ::by_ref<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::RaycastHit*>*>, ::UnityEngine::ProBuilder::CullingMode,
    ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>*)>(&::UnityEngine::ProBuilder::HandleUtility::FaceRaycast)> {
  constexpr static std::size_t size = 0x5ac;
  constexpr static std::size_t addrs = 0x66bfa30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::HandleUtility*>(),
                            { "FaceRaycast",
                              {},
                              { ::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
                                ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::RaycastHit*>*>>(), ::i2c::type_of<::UnityEngine::ProBuilder::CullingMode>(),
                                ::i2c::type_of<::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::HandleUtility.InverseTransformRay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Ray (*)(::UnityEngine::Transform*, ::UnityEngine::Ray)>(&::UnityEngine::ProBuilder::HandleUtility::InverseTransformRay)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x66bffdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::HandleUtility*>(),
                                                             { "InverseTransformRay", {}, { ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Ray>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::HandleUtility.MeshRaycast
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Ray, ::UnityEngine::GameObject*, ::by_ref<::UnityEngine::ProBuilder::RaycastHit*>, float_t)>(
    &::UnityEngine::ProBuilder::HandleUtility::MeshRaycast)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x66c019c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::HandleUtility*>(),
                                                                                           { "MeshRaycast",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<::UnityEngine::GameObject*>(),
                                                                                               ::i2c::type_of<::by_ref<::UnityEngine::ProBuilder::RaycastHit*>>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::HandleUtility.MeshRaycast
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Ray, ::ArrayW<::UnityEngine::Vector3>, ::ArrayW<int32_t>, ::by_ref<::UnityEngine::ProBuilder::RaycastHit*>, float_t)>(
    &::UnityEngine::ProBuilder::HandleUtility::MeshRaycast)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x66c031c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::HandleUtility*>(),
                                                             { "MeshRaycast",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<int32_t>>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::ProBuilder::RaycastHit*>>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::HandleUtility.PointIsOccluded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Camera*, ::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::Vector3)>(
    &::UnityEngine::ProBuilder::HandleUtility::PointIsOccluded)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x66c07f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::ProBuilder::HandleUtility*>(),
            { "PointIsOccluded", {}, { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::HandleUtility.GetRotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<int32_t>*)>(
    &::UnityEngine::ProBuilder::HandleUtility::GetRotation)> {
  constexpr static std::size_t size = 0x6ac;
  constexpr static std::size_t addrs = 0x66c0abc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::HandleUtility*>(),
                            { "GetRotation", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::HandleUtility.GetFaceRotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::HandleOrientation,
                                                                                     ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*)>(
    &::UnityEngine::ProBuilder::HandleUtility::GetFaceRotation)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x66c1168;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::HandleUtility*>(),
                                                             { "GetFaceRotation",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::UnityEngine::ProBuilder::HandleOrientation>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::HandleUtility.GetFaceRotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::Face*)>(
    &::UnityEngine::ProBuilder::HandleUtility::GetFaceRotation)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x66c1294;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::HandleUtility*>(),
                                                { "GetFaceRotation", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Face*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::HandleUtility.GetEdgeRotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::HandleOrientation,
                                                                                     ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*)>(
    &::UnityEngine::ProBuilder::HandleUtility::GetEdgeRotation)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x66c193c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::HandleUtility*>(),
                                                             { "GetEdgeRotation",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::UnityEngine::ProBuilder::HandleOrientation>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::HandleUtility.GetEdgeRotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::Edge)>(
    &::UnityEngine::ProBuilder::HandleUtility::GetEdgeRotation)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x66c1a68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::HandleUtility*>(),
                                                { "GetEdgeRotation", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Edge>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::HandleUtility.GetVertexRotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::Quaternion (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::HandleOrientation, ::System::Collections::Generic::IEnumerable_1<int32_t>*)>(
        &::UnityEngine::ProBuilder::HandleUtility::GetVertexRotation)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x66c1b3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::HandleUtility*>(),
                                                             { "GetVertexRotation",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::UnityEngine::ProBuilder::HandleOrientation>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::HandleUtility.GetVertexRotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, int32_t)>(
    &::UnityEngine::ProBuilder::HandleUtility::GetVertexRotation)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x66c1c5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::HandleUtility*>(),
                                                             { "GetVertexRotation", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::HandleUtility.GetActiveElementPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*)>(
        &::UnityEngine::ProBuilder::HandleUtility::GetActiveElementPosition)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x66c1d8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::HandleUtility*>(),
                            { "GetActiveElementPosition",
                              {},
                              { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::HandleUtility.GetActiveElementPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*)>(
        &::UnityEngine::ProBuilder::HandleUtility::GetActiveElementPosition)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x66c2418;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::HandleUtility*>(),
                            { "GetActiveElementPosition",
                              {},
                              { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::HandleUtility.GetActiveElementPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<int32_t>*)>(
    &::UnityEngine::ProBuilder::HandleUtility::GetActiveElementPosition)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x66c250c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::ProBuilder::HandleUtility*>(),
            { "GetActiveElementPosition", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<int32_t>*>() } })));
    return ___internal_method;
  }
};
inline ::UnityEngine::Vector3 UnityEngine::ProBuilder::HandleUtility::ScreenToGuiPoint(::UnityEngine::Camera* camera, ::UnityEngine::Vector3 point, float_t pixelsPerPoint) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::HandleUtility*>(),
                                              { "ScreenToGuiPoint", {}, { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, camera, point, pixelsPerPoint);
}
inline bool UnityEngine::ProBuilder::HandleUtility::FaceRaycast(::UnityEngine::Ray worldRay, ::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::by_ref<::UnityEngine::ProBuilder::RaycastHit*> hit,
                                                                ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>* ignore) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::HandleUtility*>(),
                                                                                         { "FaceRaycast",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
                                                                                             ::i2c::type_of<::by_ref<::UnityEngine::ProBuilder::RaycastHit*>>(),
                                                                                             ::i2c::type_of<::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, worldRay, mesh, hit, ignore);
}
inline bool UnityEngine::ProBuilder::HandleUtility::FaceRaycast(::UnityEngine::Ray worldRay, ::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::by_ref<::UnityEngine::ProBuilder::RaycastHit*> hit,
                                                                float_t distance, ::UnityEngine::ProBuilder::CullingMode cullingMode,
                                                                ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>* ignore) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::HandleUtility*>(),
                                       { "FaceRaycast",
                                         {},
                                         { ::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
                                           ::i2c::type_of<::by_ref<::UnityEngine::ProBuilder::RaycastHit*>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::ProBuilder::CullingMode>(),
                                           ::i2c::type_of<::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, worldRay, mesh, hit, distance, cullingMode, ignore);
}
inline bool UnityEngine::ProBuilder::HandleUtility::FaceRaycastBothCullModes(::UnityEngine::Ray worldRay, ::UnityEngine::ProBuilder::ProBuilderMesh* mesh,
                                                                             ::by_ref<::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::Face*, ::UnityEngine::Vector3>> back,
                                                                             ::by_ref<::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::Face*, ::UnityEngine::Vector3>> front) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::HandleUtility*>(),
                                                           { "FaceRaycastBothCullModes",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
                                                               ::i2c::type_of<::by_ref<::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::Face*, ::UnityEngine::Vector3>>>(),
                                                               ::i2c::type_of<::by_ref<::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::Face*, ::UnityEngine::Vector3>>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, worldRay, mesh, back, front);
}
inline bool UnityEngine::ProBuilder::HandleUtility::FaceRaycast(::UnityEngine::Ray InWorldRay, ::UnityEngine::ProBuilder::ProBuilderMesh* mesh,
                                                                ::by_ref<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::RaycastHit*>*> hits,
                                                                ::UnityEngine::ProBuilder::CullingMode cullingMode,
                                                                ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>* ignore) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::HandleUtility*>(),
                          { "FaceRaycast",
                            {},
                            { ::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(),
                              ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::RaycastHit*>*>>(), ::i2c::type_of<::UnityEngine::ProBuilder::CullingMode>(),
                              ::i2c::type_of<::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, InWorldRay, mesh, hits, cullingMode, ignore);
}
inline ::UnityEngine::Ray UnityEngine::ProBuilder::HandleUtility::InverseTransformRay(::UnityEngine::Transform* transform, ::UnityEngine::Ray InWorldRay) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::HandleUtility*>(),
                                                           { "InverseTransformRay", {}, { ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Ray>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Ray>(nullptr, ___internal_method, transform, InWorldRay);
}
inline bool UnityEngine::ProBuilder::HandleUtility::MeshRaycast(::UnityEngine::Ray InWorldRay, ::UnityEngine::GameObject* gameObject, ::by_ref<::UnityEngine::ProBuilder::RaycastHit*> hit,
                                                                float_t distance) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::HandleUtility*>(),
                                                                                         { "MeshRaycast",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<::UnityEngine::GameObject*>(),
                                                                                             ::i2c::type_of<::by_ref<::UnityEngine::ProBuilder::RaycastHit*>>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, InWorldRay, gameObject, hit, distance);
}
inline bool UnityEngine::ProBuilder::HandleUtility::MeshRaycast(::UnityEngine::Ray InRay, ::ArrayW<::UnityEngine::Vector3> mesh, ::ArrayW<int32_t> triangles,
                                                                ::by_ref<::UnityEngine::ProBuilder::RaycastHit*> hit, float_t distance) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::HandleUtility*>(),
                                                           { "MeshRaycast",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<int32_t>>(),
                                                               ::i2c::type_of<::by_ref<::UnityEngine::ProBuilder::RaycastHit*>>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, InRay, mesh, triangles, hit, distance);
}
inline bool UnityEngine::ProBuilder::HandleUtility::PointIsOccluded(::UnityEngine::Camera* cam, ::UnityEngine::ProBuilder::ProBuilderMesh* pb, ::UnityEngine::Vector3 worldPoint) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::ProBuilder::HandleUtility*>(),
          { "PointIsOccluded", {}, { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, cam, pb, worldPoint);
}
inline ::UnityEngine::Quaternion UnityEngine::ProBuilder::HandleUtility::GetRotation(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::IEnumerable_1<int32_t>* indices) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::HandleUtility*>(),
                          { "GetRotation", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(nullptr, ___internal_method, mesh, indices);
}
inline ::UnityEngine::Quaternion UnityEngine::ProBuilder::HandleUtility::GetFaceRotation(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::ProBuilder::HandleOrientation orientation,
                                                                                         ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* faces) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::HandleUtility*>(),
                                                           { "GetFaceRotation",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::UnityEngine::ProBuilder::HandleOrientation>(),
                                                               ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(nullptr, ___internal_method, mesh, orientation, faces);
}
inline ::UnityEngine::Quaternion UnityEngine::ProBuilder::HandleUtility::GetFaceRotation(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::ProBuilder::Face* face) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::HandleUtility*>(),
                                              { "GetFaceRotation", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Face*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(nullptr, ___internal_method, mesh, face);
}
inline ::UnityEngine::Quaternion UnityEngine::ProBuilder::HandleUtility::GetEdgeRotation(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::ProBuilder::HandleOrientation orientation,
                                                                                         ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>* edges) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::HandleUtility*>(),
                                                           { "GetEdgeRotation",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::UnityEngine::ProBuilder::HandleOrientation>(),
                                                               ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(nullptr, ___internal_method, mesh, orientation, edges);
}
inline ::UnityEngine::Quaternion UnityEngine::ProBuilder::HandleUtility::GetEdgeRotation(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::ProBuilder::Edge edge) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::HandleUtility*>(),
                                              { "GetEdgeRotation", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Edge>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(nullptr, ___internal_method, mesh, edge);
}
inline ::UnityEngine::Quaternion UnityEngine::ProBuilder::HandleUtility::GetVertexRotation(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::ProBuilder::HandleOrientation orientation,
                                                                                           ::System::Collections::Generic::IEnumerable_1<int32_t>* vertices) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::HandleUtility*>(),
                                                           { "GetVertexRotation",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::UnityEngine::ProBuilder::HandleOrientation>(),
                                                               ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(nullptr, ___internal_method, mesh, orientation, vertices);
}
inline ::UnityEngine::Quaternion UnityEngine::ProBuilder::HandleUtility::GetVertexRotation(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, int32_t vertex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::HandleUtility*>(),
                                                           { "GetVertexRotation", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(nullptr, ___internal_method, mesh, vertex);
}
inline ::UnityEngine::Vector3 UnityEngine::ProBuilder::HandleUtility::GetActiveElementPosition(::UnityEngine::ProBuilder::ProBuilderMesh* mesh,
                                                                                               ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* faces) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::HandleUtility*>(),
                          { "GetActiveElementPosition",
                            {},
                            { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, mesh, faces);
}
inline ::UnityEngine::Vector3 UnityEngine::ProBuilder::HandleUtility::GetActiveElementPosition(::UnityEngine::ProBuilder::ProBuilderMesh* mesh,
                                                                                               ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>* edges) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::HandleUtility*>(),
                          { "GetActiveElementPosition",
                            {},
                            { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, mesh, edges);
}
inline ::UnityEngine::Vector3 UnityEngine::ProBuilder::HandleUtility::GetActiveElementPosition(::UnityEngine::ProBuilder::ProBuilderMesh* mesh,
                                                                                               ::System::Collections::Generic::IEnumerable_1<int32_t>* vertices) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::ProBuilder::HandleUtility*>(),
          { "GetActiveElementPosition", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, mesh, vertices);
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::HandleUtility::HandleUtility() {}
