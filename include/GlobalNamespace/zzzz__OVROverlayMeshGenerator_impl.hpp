#pragma once
// IWYU pragma private; include "GlobalNamespace/OVROverlayMeshGenerator.hpp"
#include "GlobalNamespace/zzzz__OVROverlay_impl.hpp"
#include "UnityEngine/Rendering/zzzz__TextureDimension_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Rect_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__OVROverlayMeshGenerator_def.hpp"
#include "GlobalNamespace/zzzz__OVROverlayMeshGenerator_def.hpp"
#include "GlobalNamespace/zzzz__OVROverlay_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__MeshCollider_def.hpp"
#include "UnityEngine/zzzz__MeshFilter_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVROverlayMeshGenerator_CubeFace::OVROverlayMeshGenerator_CubeFace(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVROverlayMeshGenerator_CubeFace::OVROverlayMeshGenerator_CubeFace() {}
constexpr ::GlobalNamespace::OVROverlayMeshGenerator_CubeFace GlobalNamespace::OVROverlayMeshGenerator_CubeFace::Bottom{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::OVROverlayMeshGenerator_CubeFace GlobalNamespace::OVROverlayMeshGenerator_CubeFace::Front{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::OVROverlayMeshGenerator_CubeFace GlobalNamespace::OVROverlayMeshGenerator_CubeFace::Back{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::OVROverlayMeshGenerator_CubeFace GlobalNamespace::OVROverlayMeshGenerator_CubeFace::Right{ static_cast<int32_t>(0x3) };
constexpr ::GlobalNamespace::OVROverlayMeshGenerator_CubeFace GlobalNamespace::OVROverlayMeshGenerator_CubeFace::Left{ static_cast<int32_t>(0x4) };
constexpr ::GlobalNamespace::OVROverlayMeshGenerator_CubeFace GlobalNamespace::OVROverlayMeshGenerator_CubeFace::Top{ static_cast<int32_t>(0x5) };
constexpr ::GlobalNamespace::OVROverlayMeshGenerator_CubeFace GlobalNamespace::OVROverlayMeshGenerator_CubeFace::COUNT{ static_cast<int32_t>(0x6) };
//  Writing Method size for method: ::GlobalNamespace::OVROverlayMeshGenerator.OnEnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVROverlayMeshGenerator::*)()>(&::GlobalNamespace::OVROverlayMeshGenerator::OnEnable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e97eb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVROverlayMeshGenerator*>(), { "OnEnable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlayMeshGenerator.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVROverlayMeshGenerator::*)()>(&::GlobalNamespace::OVROverlayMeshGenerator::OnDestroy)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x5e98024;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVROverlayMeshGenerator*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlayMeshGenerator.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVROverlayMeshGenerator::*)()>(&::GlobalNamespace::OVROverlayMeshGenerator::Initialize)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x5e97ebc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVROverlayMeshGenerator*>(), { "Initialize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlayMeshGenerator.SetOverlay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVROverlayMeshGenerator::*)(::GlobalNamespace::OVROverlay*)>(&::GlobalNamespace::OVROverlayMeshGenerator::SetOverlay)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e9890c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVROverlayMeshGenerator*>(), { "SetOverlay", {}, { ::i2c::type_of<::GlobalNamespace::OVROverlay*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlayMeshGenerator.TryUpdateMesh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVROverlayMeshGenerator::*)()>(&::GlobalNamespace::OVROverlayMeshGenerator::TryUpdateMesh)> {
  constexpr static std::size_t size = 0x744;
  constexpr static std::size_t addrs = 0x5e981c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVROverlayMeshGenerator*>(), { "TryUpdateMesh", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlayMeshGenerator.UpdateMesh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVROverlayMeshGenerator::*)(::GlobalNamespace::OVROverlay_OverlayShape, ::UnityEngine::Vector3,
                                                                                                            ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Rect, bool)>(
    &::GlobalNamespace::OVROverlayMeshGenerator::UpdateMesh)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x5e98914;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVROverlayMeshGenerator*>(),
                                                { "UpdateMesh",
                                                  {},
                                                  { ::i2c::type_of<::GlobalNamespace::OVROverlay_OverlayShape>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(),
                                                    ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlayMeshGenerator.GenerateMesh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(
    ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*,
    ::System::Collections::Generic::List_1<int32_t>*, ::GlobalNamespace::OVROverlay_OverlayShape, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Rect)>(
    &::GlobalNamespace::OVROverlayMeshGenerator::GenerateMesh)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5e98b18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVROverlayMeshGenerator*>(),
                            { "GenerateMesh",
                              {},
                              { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>(),
                                ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>(),
                                ::i2c::type_of<::GlobalNamespace::OVROverlay_OverlayShape>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(),
                                ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Rect>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlayMeshGenerator.InverseTransformVert
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, float_t)>(
    &::GlobalNamespace::OVROverlayMeshGenerator::InverseTransformVert)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5e9a734;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVROverlayMeshGenerator*>(),
                                                                                           { "InverseTransformVert",
                                                                                             {},
                                                                                             { ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(),
                                                                                               ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlayMeshGenerator.GetSphereUV
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(float_t, float_t, float_t)>(&::GlobalNamespace::OVROverlayMeshGenerator::GetSphereUV)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5e9a770;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVROverlayMeshGenerator*>(),
                                                             { "GetSphereUV", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlayMeshGenerator.GetSphereVert
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(float_t, float_t)>(&::GlobalNamespace::OVROverlayMeshGenerator::GetSphereVert)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5e9a7a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVROverlayMeshGenerator*>(), { "GetSphereVert", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlayMeshGenerator.BuildSphere
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*,
                                                                ::System::Collections::Generic::List_1<int32_t>*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3,
                                                                ::UnityEngine::Rect, float_t, int32_t, int32_t, float_t)>(&::GlobalNamespace::OVROverlayMeshGenerator::BuildSphere)> {
  constexpr static std::size_t size = 0x6d0;
  constexpr static std::size_t addrs = 0x5e98c18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVROverlayMeshGenerator*>(),
                                         { "BuildSphere",
                                           {},
                                           { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(),
                                             ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>(),
                                             ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                             ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlayMeshGenerator.GetCubeUV
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(::GlobalNamespace::OVROverlayMeshGenerator_CubeFace, float_t, float_t, float_t, float_t)>(
    &::GlobalNamespace::OVROverlayMeshGenerator::GetCubeUV)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5e9a7fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVROverlayMeshGenerator*>(),
                                                                                           { "GetCubeUV",
                                                                                             {},
                                                                                             { ::i2c::type_of<::GlobalNamespace::OVROverlayMeshGenerator_CubeFace>(), ::i2c::type_of<float_t>(),
                                                                                               ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlayMeshGenerator.GetCubeVert
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::GlobalNamespace::OVROverlayMeshGenerator_CubeFace, float_t, float_t)>(
    &::GlobalNamespace::OVROverlayMeshGenerator::GetCubeVert)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5e9a8e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVROverlayMeshGenerator*>(),
                                         { "GetCubeVert", {}, { ::i2c::type_of<::GlobalNamespace::OVROverlayMeshGenerator_CubeFace>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlayMeshGenerator.BuildCube
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*,
                                                                ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*, ::System::Collections::Generic::List_1<int32_t>*,
                                                                ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, float_t, int32_t, float_t)>(
    &::GlobalNamespace::OVROverlayMeshGenerator::BuildCube)> {
  constexpr static std::size_t size = 0x83c;
  constexpr static std::size_t addrs = 0x5e992e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVROverlayMeshGenerator*>(),
                            { "BuildCube",
                              {},
                              { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>(),
                                ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>(),
                                ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(),
                                ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlayMeshGenerator.BuildQuad
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*,
                                                                ::System::Collections::Generic::List_1<int32_t>*, ::UnityEngine::Rect)>(&::GlobalNamespace::OVROverlayMeshGenerator::BuildQuad)> {
  constexpr static std::size_t size = 0x644;
  constexpr static std::size_t addrs = 0x5e99b24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVROverlayMeshGenerator*>(),
                            { "BuildQuad",
                              {},
                              { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>(),
                                ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>(), ::i2c::type_of<::UnityEngine::Rect>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlayMeshGenerator.BuildHemicylinder
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*,
                                                                ::System::Collections::Generic::List_1<int32_t>*, ::UnityEngine::Vector3, ::UnityEngine::Rect, int32_t)>(
    &::GlobalNamespace::OVROverlayMeshGenerator::BuildHemicylinder)> {
  constexpr static std::size_t size = 0x5cc;
  constexpr static std::size_t addrs = 0x5e9a168;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVROverlayMeshGenerator*>(),
                                         { "BuildHemicylinder",
                                           {},
                                           { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(),
                                             ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>(),
                                             ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlayMeshGenerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVROverlayMeshGenerator::*)()>(&::GlobalNamespace::OVROverlayMeshGenerator::_ctor)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x5e9a9e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVROverlayMeshGenerator*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<int32_t>*& GlobalNamespace::OVROverlayMeshGenerator::__cordl_internal_get__Tris() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Tris;
}
constexpr ::System::Collections::Generic::List_1<int32_t>* const& GlobalNamespace::OVROverlayMeshGenerator::__cordl_internal_get__Tris() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Tris;
}
constexpr void GlobalNamespace::OVROverlayMeshGenerator::__cordl_internal_set__Tris(::System::Collections::Generic::List_1<int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Tris = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*& GlobalNamespace::OVROverlayMeshGenerator::__cordl_internal_get__UV() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____UV;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* const& GlobalNamespace::OVROverlayMeshGenerator::__cordl_internal_get__UV() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____UV;
}
constexpr void GlobalNamespace::OVROverlayMeshGenerator::__cordl_internal_set__UV(::System::Collections::Generic::List_1<::UnityEngine::Vector2>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____UV = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*& GlobalNamespace::OVROverlayMeshGenerator::__cordl_internal_get__CubeUV() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CubeUV;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* const& GlobalNamespace::OVROverlayMeshGenerator::__cordl_internal_get__CubeUV() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CubeUV;
}
constexpr void GlobalNamespace::OVROverlayMeshGenerator::__cordl_internal_set__CubeUV(::System::Collections::Generic::List_1<::UnityEngine::Vector4>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____CubeUV = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& GlobalNamespace::OVROverlayMeshGenerator::__cordl_internal_get__Verts() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Verts;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* const& GlobalNamespace::OVROverlayMeshGenerator::__cordl_internal_get__Verts() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Verts;
}
constexpr void GlobalNamespace::OVROverlayMeshGenerator::__cordl_internal_set__Verts(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Verts = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::OVROverlayMeshGenerator::__cordl_internal_get__CameraRoot() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CameraRoot;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::OVROverlayMeshGenerator::__cordl_internal_get__CameraRoot() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CameraRoot;
}
constexpr void GlobalNamespace::OVROverlayMeshGenerator::__cordl_internal_set__CameraRoot(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____CameraRoot = value;
}
constexpr ::UnityEngine::Rect& GlobalNamespace::OVROverlayMeshGenerator::__cordl_internal_get__LastDestRectLeft() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____LastDestRectLeft;
}
constexpr ::UnityEngine::Rect const& GlobalNamespace::OVROverlayMeshGenerator::__cordl_internal_get__LastDestRectLeft() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____LastDestRectLeft;
}
constexpr void GlobalNamespace::OVROverlayMeshGenerator::__cordl_internal_set__LastDestRectLeft(::UnityEngine::Rect value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____LastDestRectLeft = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::OVROverlayMeshGenerator::__cordl_internal_get__LastPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____LastPosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::OVROverlayMeshGenerator::__cordl_internal_get__LastPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____LastPosition;
}
constexpr void GlobalNamespace::OVROverlayMeshGenerator::__cordl_internal_set__LastPosition(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____LastPosition = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::OVROverlayMeshGenerator::__cordl_internal_get__LastRotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____LastRotation;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::OVROverlayMeshGenerator::__cordl_internal_get__LastRotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____LastRotation;
}
constexpr void GlobalNamespace::OVROverlayMeshGenerator::__cordl_internal_set__LastRotation(::UnityEngine::Quaternion value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____LastRotation = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::OVROverlayMeshGenerator::__cordl_internal_get__LastScale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____LastScale;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::OVROverlayMeshGenerator::__cordl_internal_get__LastScale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____LastScale;
}
constexpr void GlobalNamespace::OVROverlayMeshGenerator::__cordl_internal_set__LastScale(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____LastScale = value;
}
constexpr ::UnityEngine::Rendering::TextureDimension& GlobalNamespace::OVROverlayMeshGenerator::__cordl_internal_get__LastTextureDimension() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____LastTextureDimension;
}
constexpr ::UnityEngine::Rendering::TextureDimension const& GlobalNamespace::OVROverlayMeshGenerator::__cordl_internal_get__LastTextureDimension() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____LastTextureDimension;
}
constexpr void GlobalNamespace::OVROverlayMeshGenerator::__cordl_internal_set__LastTextureDimension(::UnityEngine::Rendering::TextureDimension value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____LastTextureDimension = value;
}
constexpr ::GlobalNamespace::OVROverlay_OverlayShape& GlobalNamespace::OVROverlayMeshGenerator::__cordl_internal_get__LastShape() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____LastShape;
}
constexpr ::GlobalNamespace::OVROverlay_OverlayShape const& GlobalNamespace::OVROverlayMeshGenerator::__cordl_internal_get__LastShape() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____LastShape;
}
constexpr void GlobalNamespace::OVROverlayMeshGenerator::__cordl_internal_set__LastShape(::GlobalNamespace::OVROverlay_OverlayShape value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____LastShape = value;
}
constexpr ::UnityEngine::Rect& GlobalNamespace::OVROverlayMeshGenerator::__cordl_internal_get__LastSrcRectLeft() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____LastSrcRectLeft;
}
constexpr ::UnityEngine::Rect const& GlobalNamespace::OVROverlayMeshGenerator::__cordl_internal_get__LastSrcRectLeft() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____LastSrcRectLeft;
}
constexpr void GlobalNamespace::OVROverlayMeshGenerator::__cordl_internal_set__LastSrcRectLeft(::UnityEngine::Rect value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____LastSrcRectLeft = value;
}
constexpr ::UnityW<::UnityEngine::Mesh>& GlobalNamespace::OVROverlayMeshGenerator::__cordl_internal_get__Mesh() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Mesh;
}
constexpr ::UnityW<::UnityEngine::Mesh> const& GlobalNamespace::OVROverlayMeshGenerator::__cordl_internal_get__Mesh() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Mesh;
}
constexpr void GlobalNamespace::OVROverlayMeshGenerator::__cordl_internal_set__Mesh(::UnityW<::UnityEngine::Mesh> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Mesh = value;
}
constexpr ::UnityW<::UnityEngine::MeshCollider>& GlobalNamespace::OVROverlayMeshGenerator::__cordl_internal_get__MeshCollider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____MeshCollider;
}
constexpr ::UnityW<::UnityEngine::MeshCollider> const& GlobalNamespace::OVROverlayMeshGenerator::__cordl_internal_get__MeshCollider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____MeshCollider;
}
constexpr void GlobalNamespace::OVROverlayMeshGenerator::__cordl_internal_set__MeshCollider(::UnityW<::UnityEngine::MeshCollider> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____MeshCollider = value;
}
constexpr ::UnityW<::UnityEngine::MeshFilter>& GlobalNamespace::OVROverlayMeshGenerator::__cordl_internal_get__MeshFilter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____MeshFilter;
}
constexpr ::UnityW<::UnityEngine::MeshFilter> const& GlobalNamespace::OVROverlayMeshGenerator::__cordl_internal_get__MeshFilter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____MeshFilter;
}
constexpr void GlobalNamespace::OVROverlayMeshGenerator::__cordl_internal_set__MeshFilter(::UnityW<::UnityEngine::MeshFilter> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____MeshFilter = value;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer>& GlobalNamespace::OVROverlayMeshGenerator::__cordl_internal_get__MeshRenderer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____MeshRenderer;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer> const& GlobalNamespace::OVROverlayMeshGenerator::__cordl_internal_get__MeshRenderer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____MeshRenderer;
}
constexpr void GlobalNamespace::OVROverlayMeshGenerator::__cordl_internal_set__MeshRenderer(::UnityW<::UnityEngine::MeshRenderer> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____MeshRenderer = value;
}
constexpr ::UnityW<::GlobalNamespace::OVROverlay>& GlobalNamespace::OVROverlayMeshGenerator::__cordl_internal_get__Overlay() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Overlay;
}
constexpr ::UnityW<::GlobalNamespace::OVROverlay> const& GlobalNamespace::OVROverlayMeshGenerator::__cordl_internal_get__Overlay() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Overlay;
}
constexpr void GlobalNamespace::OVROverlayMeshGenerator::__cordl_internal_set__Overlay(::UnityW<::GlobalNamespace::OVROverlay> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Overlay = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::OVROverlayMeshGenerator::__cordl_internal_get__Transform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Transform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::OVROverlayMeshGenerator::__cordl_internal_get__Transform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Transform;
}
constexpr void GlobalNamespace::OVROverlayMeshGenerator::__cordl_internal_set__Transform(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Transform = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::OVROverlayMeshGenerator::__cordl_internal_get__PreviewMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____PreviewMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::OVROverlayMeshGenerator::__cordl_internal_get__PreviewMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____PreviewMaterial;
}
constexpr void GlobalNamespace::OVROverlayMeshGenerator::__cordl_internal_set__PreviewMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____PreviewMaterial = value;
}
inline void GlobalNamespace::OVROverlayMeshGenerator::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVROverlayMeshGenerator*>(), { "OnEnable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVROverlayMeshGenerator::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVROverlayMeshGenerator*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVROverlayMeshGenerator::Initialize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVROverlayMeshGenerator*>(), { "Initialize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVROverlayMeshGenerator::SetOverlay(::GlobalNamespace::OVROverlay* overlay) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVROverlayMeshGenerator*>(), { "SetOverlay", {}, { ::i2c::type_of<::GlobalNamespace::OVROverlay*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, overlay);
}
inline void GlobalNamespace::OVROverlayMeshGenerator::TryUpdateMesh() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVROverlayMeshGenerator*>(), { "TryUpdateMesh", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVROverlayMeshGenerator::UpdateMesh(::GlobalNamespace::OVROverlay_OverlayShape shape, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation,
                                                                 ::UnityEngine::Vector3 scale, ::UnityEngine::Rect rect, bool cubemap) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVROverlayMeshGenerator*>(),
                                              { "UpdateMesh",
                                                {},
                                                { ::i2c::type_of<::GlobalNamespace::OVROverlay_OverlayShape>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(),
                                                  ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, shape, position, rotation, scale, rect, cubemap);
}
inline void GlobalNamespace::OVROverlayMeshGenerator::GenerateMesh(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* verts,
                                                                   ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* uvs,
                                                                   ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* cubeUVs, ::System::Collections::Generic::List_1<int32_t>* tris,
                                                                   ::GlobalNamespace::OVROverlay_OverlayShape shape, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation,
                                                                   ::UnityEngine::Vector3 scale, ::UnityEngine::Rect rect) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVROverlayMeshGenerator*>(),
                          { "GenerateMesh",
                            {},
                            { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>(),
                              ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>(),
                              ::i2c::type_of<::GlobalNamespace::OVROverlay_OverlayShape>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(),
                              ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Rect>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, verts, uvs, cubeUVs, tris, shape, position, rotation, scale, rect);
}
inline ::UnityEngine::Vector3 GlobalNamespace::OVROverlayMeshGenerator::InverseTransformVert(::by_ref<::UnityEngine::Vector3> vert, ::by_ref<::UnityEngine::Vector3> position,
                                                                                             ::by_ref<::UnityEngine::Vector3> scale, float_t worldScale) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVROverlayMeshGenerator*>(),
                                                                                         { "InverseTransformVert",
                                                                                           {},
                                                                                           { ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(),
                                                                                             ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, vert, position, scale, worldScale);
}
inline ::UnityEngine::Vector2 GlobalNamespace::OVROverlayMeshGenerator::GetSphereUV(float_t theta, float_t phi, float_t expandScale) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVROverlayMeshGenerator*>(),
                                                                                         { "GetSphereUV", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, theta, phi, expandScale);
}
inline ::UnityEngine::Vector3 GlobalNamespace::OVROverlayMeshGenerator::GetSphereVert(float_t theta, float_t phi) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVROverlayMeshGenerator*>(), { "GetSphereVert", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, theta, phi);
}
inline void GlobalNamespace::OVROverlayMeshGenerator::BuildSphere(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* verts,
                                                                  ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* uv, ::System::Collections::Generic::List_1<int32_t>* triangles,
                                                                  ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::UnityEngine::Vector3 scale, ::UnityEngine::Rect rect,
                                                                  float_t worldScale, int32_t latitudes, int32_t longitudes, float_t expandCoefficient) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVROverlayMeshGenerator*>(),
                                       { "BuildSphere",
                                         {},
                                         { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(),
                                           ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>(),
                                           ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                           ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, verts, uv, triangles, position, rotation, scale, rect, worldScale, latitudes, longitudes, expandCoefficient);
}
inline ::UnityEngine::Vector2 GlobalNamespace::OVROverlayMeshGenerator::GetCubeUV(::GlobalNamespace::OVROverlayMeshGenerator_CubeFace face, float_t sideU, float_t sideV, float_t expandScale,
                                                                                  float_t expandOffset) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVROverlayMeshGenerator*>(),
                                                                                         { "GetCubeUV",
                                                                                           {},
                                                                                           { ::i2c::type_of<::GlobalNamespace::OVROverlayMeshGenerator_CubeFace>(), ::i2c::type_of<float_t>(),
                                                                                             ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, face, sideU, sideV, expandScale, expandOffset);
}
inline ::UnityEngine::Vector3 GlobalNamespace::OVROverlayMeshGenerator::GetCubeVert(::GlobalNamespace::OVROverlayMeshGenerator_CubeFace face, float_t sideU, float_t sideV) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVROverlayMeshGenerator*>(),
                                              { "GetCubeVert", {}, { ::i2c::type_of<::GlobalNamespace::OVROverlayMeshGenerator_CubeFace>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, face, sideU, sideV);
}
inline void GlobalNamespace::OVROverlayMeshGenerator::BuildCube(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* verts,
                                                                ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* uv,
                                                                ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* cubeUV, ::System::Collections::Generic::List_1<int32_t>* triangles,
                                                                ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::UnityEngine::Vector3 scale, float_t worldScale, int32_t subQuads,
                                                                float_t expandCoefficient) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVROverlayMeshGenerator*>(),
                          { "BuildCube",
                            {},
                            { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>(),
                              ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>(),
                              ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(),
                              ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, verts, uv, cubeUV, triangles, position, rotation, scale, worldScale, subQuads, expandCoefficient);
}
inline void GlobalNamespace::OVROverlayMeshGenerator::BuildQuad(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* verts,
                                                                ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* uv, ::System::Collections::Generic::List_1<int32_t>* triangles,
                                                                ::UnityEngine::Rect rect) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVROverlayMeshGenerator*>(),
                          { "BuildQuad",
                            {},
                            { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>(),
                              ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>(), ::i2c::type_of<::UnityEngine::Rect>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, verts, uv, triangles, rect);
}
inline void GlobalNamespace::OVROverlayMeshGenerator::BuildHemicylinder(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* verts,
                                                                        ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* uv, ::System::Collections::Generic::List_1<int32_t>* triangles,
                                                                        ::UnityEngine::Vector3 scale, ::UnityEngine::Rect rect, int32_t longitudes) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVROverlayMeshGenerator*>(),
                                              { "BuildHemicylinder",
                                                {},
                                                { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(),
                                                  ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>(),
                                                  ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, verts, uv, triangles, scale, rect, longitudes);
}
inline void GlobalNamespace::OVROverlayMeshGenerator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVROverlayMeshGenerator*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OVROverlayMeshGenerator* GlobalNamespace::OVROverlayMeshGenerator::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVROverlayMeshGenerator*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVROverlayMeshGenerator::OVROverlayMeshGenerator() {}
