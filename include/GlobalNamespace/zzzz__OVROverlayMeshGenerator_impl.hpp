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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVROverlayMeshGenerator::*)()>(&::GlobalNamespace::OVROverlayMeshGenerator::OnEnable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5cebc24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator*>::get(), "OnEnable",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlayMeshGenerator.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVROverlayMeshGenerator::*)()>(&::GlobalNamespace::OVROverlayMeshGenerator::OnDestroy)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x5cebd90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator*>::get(), "OnDestroy",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlayMeshGenerator.Initialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVROverlayMeshGenerator::*)()>(&::GlobalNamespace::OVROverlayMeshGenerator::Initialize)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x5cebc28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator*>::get(), "Initialize",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlayMeshGenerator.SetOverlay
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVROverlayMeshGenerator::*)(::GlobalNamespace::OVROverlay*)>(
    &::GlobalNamespace::OVROverlayMeshGenerator::SetOverlay)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cec678;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator*>::get(), "SetOverlay", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVROverlay*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlayMeshGenerator.TryUpdateMesh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVROverlayMeshGenerator::*)()>(&::GlobalNamespace::OVROverlayMeshGenerator::TryUpdateMesh)> {
  constexpr static std::size_t size = 0x744;
  constexpr static std::size_t addrs = 0x5cebf34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator*>::get(),
                                                                               "TryUpdateMesh", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlayMeshGenerator.UpdateMesh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVROverlayMeshGenerator::*)(
    ::GlobalNamespace::OVROverlay_OverlayShape, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Rect, bool)>(
    &::GlobalNamespace::OVROverlayMeshGenerator::UpdateMesh)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x5cec680;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator*>::get(), "UpdateMesh", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVROverlay_OverlayShape>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlayMeshGenerator.GenerateMesh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*,
    ::System::Collections::Generic::List_1<int32_t>*, ::GlobalNamespace::OVROverlay_OverlayShape, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Rect)>(
    &::GlobalNamespace::OVROverlayMeshGenerator::GenerateMesh)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5cec884;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator*>::get(), "GenerateMesh", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 9>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVROverlay_OverlayShape>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlayMeshGenerator.InverseTransformVert
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (*)(
    ::ByRef<::UnityEngine::Vector3>, ::ByRef<::UnityEngine::Vector3>, ::ByRef<::UnityEngine::Vector3>, float_t)>(&::GlobalNamespace::OVROverlayMeshGenerator::InverseTransformVert)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5cee4a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator*>::get(), "InverseTransformVert", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector3>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector3>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector3>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlayMeshGenerator.GetSphereUV
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (*)(float_t, float_t, float_t)>(&::GlobalNamespace::OVROverlayMeshGenerator::GetSphereUV)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5cee4dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator*>::get(), "GetSphereUV", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlayMeshGenerator.GetSphereVert
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (*)(float_t, float_t)>(&::GlobalNamespace::OVROverlayMeshGenerator::GetSphereVert)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5cee514;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator*>::get(), "GetSphereVert", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlayMeshGenerator.BuildSphere
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::List_1<int32_t>*,
    ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Rect, float_t, int32_t, int32_t, float_t)>(&::GlobalNamespace::OVROverlayMeshGenerator::BuildSphere)> {
  constexpr static std::size_t size = 0x6d0;
  constexpr static std::size_t addrs = 0x5cec984;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator*>::get(), "BuildSphere", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 11>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlayMeshGenerator.GetCubeUV
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (*)(::GlobalNamespace::OVROverlayMeshGenerator_CubeFace, float_t, float_t, float_t, float_t)>(
    &::GlobalNamespace::OVROverlayMeshGenerator::GetCubeUV)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5cee568;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator*>::get(), "GetCubeUV", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVROverlayMeshGenerator_CubeFace>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlayMeshGenerator.GetCubeVert
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (*)(::GlobalNamespace::OVROverlayMeshGenerator_CubeFace, float_t, float_t)>(
    &::GlobalNamespace::OVROverlayMeshGenerator::GetCubeVert)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5cee64c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator*>::get(), "GetCubeVert", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVROverlayMeshGenerator_CubeFace>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlayMeshGenerator.BuildCube
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*,
    ::System::Collections::Generic::List_1<int32_t>*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, float_t, int32_t, float_t)>(
    &::GlobalNamespace::OVROverlayMeshGenerator::BuildCube)> {
  constexpr static std::size_t size = 0x83c;
  constexpr static std::size_t addrs = 0x5ced054;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator*>::get(), "BuildCube", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 10>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlayMeshGenerator.BuildQuad
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*,
                         ::System::Collections::Generic::List_1<int32_t>*, ::UnityEngine::Rect)>(&::GlobalNamespace::OVROverlayMeshGenerator::BuildQuad)> {
  constexpr static std::size_t size = 0x644;
  constexpr static std::size_t addrs = 0x5ced890;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator*>::get(), "BuildQuad", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlayMeshGenerator.BuildHemicylinder
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*,
                         ::System::Collections::Generic::List_1<int32_t>*, ::UnityEngine::Vector3, ::UnityEngine::Rect, int32_t)>(&::GlobalNamespace::OVROverlayMeshGenerator::BuildHemicylinder)> {
  constexpr static std::size_t size = 0x5cc;
  constexpr static std::size_t addrs = 0x5ceded4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator*>::get(), "BuildHemicylinder", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlayMeshGenerator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVROverlayMeshGenerator::*)()>(&::GlobalNamespace::OVROverlayMeshGenerator::_ctor)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x5cee74c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Tris)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____UV)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____CubeUV)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Verts)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____CameraRoot)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Mesh)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____MeshCollider)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____MeshFilter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____MeshRenderer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Overlay)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Transform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____PreviewMaterial)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::OVROverlayMeshGenerator::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator*>::get(), "OnEnable",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVROverlayMeshGenerator::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator*>::get(), "OnDestroy",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVROverlayMeshGenerator::Initialize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator*>::get(), "Initialize",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVROverlayMeshGenerator::SetOverlay(::GlobalNamespace::OVROverlay* overlay) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator*>::get(), "SetOverlay", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVROverlay*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, overlay);
}
inline void GlobalNamespace::OVROverlayMeshGenerator::TryUpdateMesh() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator*>::get(),
                                                                             "TryUpdateMesh", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVROverlayMeshGenerator::UpdateMesh(::GlobalNamespace::OVROverlay_OverlayShape shape, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation,
                                                                 ::UnityEngine::Vector3 scale, ::UnityEngine::Rect rect, bool cubemap) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator*>::get(), "UpdateMesh", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVROverlay_OverlayShape>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, shape, position, rotation, scale, rect, cubemap);
}
inline void GlobalNamespace::OVROverlayMeshGenerator::GenerateMesh(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* verts,
                                                                   ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* uvs,
                                                                   ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* cubeUVs, ::System::Collections::Generic::List_1<int32_t>* tris,
                                                                   ::GlobalNamespace::OVROverlay_OverlayShape shape, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation,
                                                                   ::UnityEngine::Vector3 scale, ::UnityEngine::Rect rect) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator*>::get(), "GenerateMesh", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 9>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVROverlay_OverlayShape>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, verts, uvs, cubeUVs, tris, shape, position, rotation, scale, rect);
}
inline ::UnityEngine::Vector3 GlobalNamespace::OVROverlayMeshGenerator::InverseTransformVert(::ByRef<::UnityEngine::Vector3> vert, ::ByRef<::UnityEngine::Vector3> position,
                                                                                             ::ByRef<::UnityEngine::Vector3> scale, float_t worldScale) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator*>::get(), "InverseTransformVert", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector3>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(nullptr, ___internal_method, vert, position, scale, worldScale);
}
inline ::UnityEngine::Vector2 GlobalNamespace::OVROverlayMeshGenerator::GetSphereUV(float_t theta, float_t phi, float_t expandScale) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator*>::get(), "GetSphereUV", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(nullptr, ___internal_method, theta, phi, expandScale);
}
inline ::UnityEngine::Vector3 GlobalNamespace::OVROverlayMeshGenerator::GetSphereVert(float_t theta, float_t phi) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator*>::get(), "GetSphereVert", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(nullptr, ___internal_method, theta, phi);
}
inline void GlobalNamespace::OVROverlayMeshGenerator::BuildSphere(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* verts,
                                                                  ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* uv, ::System::Collections::Generic::List_1<int32_t>* triangles,
                                                                  ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::UnityEngine::Vector3 scale, ::UnityEngine::Rect rect,
                                                                  float_t worldScale, int32_t latitudes, int32_t longitudes, float_t expandCoefficient) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator*>::get(), "BuildSphere", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 11>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, verts, uv, triangles, position, rotation, scale, rect, worldScale, latitudes, longitudes, expandCoefficient);
}
inline ::UnityEngine::Vector2 GlobalNamespace::OVROverlayMeshGenerator::GetCubeUV(::GlobalNamespace::OVROverlayMeshGenerator_CubeFace face, float_t sideU, float_t sideV, float_t expandScale,
                                                                                  float_t expandOffset) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator*>::get(), "GetCubeUV", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVROverlayMeshGenerator_CubeFace>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(nullptr, ___internal_method, face, sideU, sideV, expandScale, expandOffset);
}
inline ::UnityEngine::Vector3 GlobalNamespace::OVROverlayMeshGenerator::GetCubeVert(::GlobalNamespace::OVROverlayMeshGenerator_CubeFace face, float_t sideU, float_t sideV) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator*>::get(), "GetCubeVert", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVROverlayMeshGenerator_CubeFace>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(nullptr, ___internal_method, face, sideU, sideV);
}
inline void GlobalNamespace::OVROverlayMeshGenerator::BuildCube(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* verts,
                                                                ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* uv,
                                                                ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* cubeUV, ::System::Collections::Generic::List_1<int32_t>* triangles,
                                                                ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::UnityEngine::Vector3 scale, float_t worldScale, int32_t subQuads,
                                                                float_t expandCoefficient) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator*>::get(), "BuildCube", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 10>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>*>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, verts, uv, cubeUV, triangles, position, rotation, scale, worldScale, subQuads, expandCoefficient);
}
inline void GlobalNamespace::OVROverlayMeshGenerator::BuildQuad(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* verts,
                                                                ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* uv, ::System::Collections::Generic::List_1<int32_t>* triangles,
                                                                ::UnityEngine::Rect rect) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator*>::get(), "BuildQuad", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, verts, uv, triangles, rect);
}
inline void GlobalNamespace::OVROverlayMeshGenerator::BuildHemicylinder(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* verts,
                                                                        ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* uv, ::System::Collections::Generic::List_1<int32_t>* triangles,
                                                                        ::UnityEngine::Vector3 scale, ::UnityEngine::Rect rect, int32_t longitudes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator*>::get(), "BuildHemicylinder", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, verts, uv, triangles, scale, rect, longitudes);
}
inline void GlobalNamespace::OVROverlayMeshGenerator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVROverlayMeshGenerator*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::OVROverlayMeshGenerator* GlobalNamespace::OVROverlayMeshGenerator::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OVROverlayMeshGenerator*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVROverlayMeshGenerator::OVROverlayMeshGenerator() {}
