#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__OVRExtensions_def.hpp"
#include "GlobalNamespace/zzzz__OVREnumerable_1_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_def.hpp"
#include "GlobalNamespace/zzzz__OVRPose_def.hpp"
#include "GlobalNamespace/zzzz__OVRSpace_def.hpp"
#include "GlobalNamespace/zzzz__OVRTracker_def.hpp"
#include "OVR/OpenVR/zzzz__HmdMatrix34_t_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "Unity/Collections/zzzz__Allocator_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Gradient_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRExtensions.ToTrackingSpacePose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRPose (*)(::UnityEngine::Transform*, ::UnityEngine::Camera*)>(&::GlobalNamespace::OVRExtensions::ToTrackingSpacePose)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x5e1a9f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRExtensions*>(),
                                                             { "ToTrackingSpacePose", {}, { ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Camera*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRExtensions.ToWorldSpacePose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRPose (*)(::GlobalNamespace::OVRPose)>(&::GlobalNamespace::OVRExtensions::ToWorldSpacePose)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5e1ad94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRExtensions*>(), { "ToWorldSpacePose", {}, { ::i2c::type_of<::GlobalNamespace::OVRPose>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRExtensions.ToWorldSpacePose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRPose (*)(::GlobalNamespace::OVRPose, ::UnityEngine::Camera*)>(&::GlobalNamespace::OVRExtensions::ToWorldSpacePose)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x5e1ade4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRExtensions*>(),
                                                             { "ToWorldSpacePose", {}, { ::i2c::type_of<::GlobalNamespace::OVRPose>(), ::i2c::type_of<::UnityEngine::Camera*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRExtensions.ToHeadSpacePose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRPose (*)(::GlobalNamespace::OVRPose)>(&::GlobalNamespace::OVRExtensions::ToHeadSpacePose)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x5e1af68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRExtensions*>(), { "ToHeadSpacePose", {}, { ::i2c::type_of<::GlobalNamespace::OVRPose>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRExtensions.ToHeadSpacePose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRPose (*)(::UnityEngine::Transform*, ::UnityEngine::Camera*)>(&::GlobalNamespace::OVRExtensions::ToHeadSpacePose)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x5e1ab00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRExtensions*>(),
                                                             { "ToHeadSpacePose", {}, { ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Camera*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRExtensions.ToOVRPose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRPose (*)(::UnityEngine::Transform*, bool)>(&::GlobalNamespace::OVRExtensions::ToOVRPose)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5e1b080;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRExtensions*>(), { "ToOVRPose", {}, { ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRExtensions.FromOVRPose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Transform*, ::GlobalNamespace::OVRPose, bool)>(&::GlobalNamespace::OVRExtensions::FromOVRPose)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5e187f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRExtensions*>(),
                                                { "FromOVRPose", {}, { ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::GlobalNamespace::OVRPose>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRExtensions.ToOVRPose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRPose (*)(::GlobalNamespace::OVRPlugin_Posef)>(&::GlobalNamespace::OVRExtensions::ToOVRPose)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5e1b120;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRExtensions*>(), { "ToOVRPose", {}, { ::i2c::type_of<::GlobalNamespace::OVRPlugin_Posef>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRExtensions.ToFrustum
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTracker_Frustum (*)(::GlobalNamespace::OVRPlugin_Frustumf)>(&::GlobalNamespace::OVRExtensions::ToFrustum)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e1b148;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRExtensions*>(), { "ToFrustum", {}, { ::i2c::type_of<::GlobalNamespace::OVRPlugin_Frustumf>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRExtensions.FromColorf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (*)(::GlobalNamespace::OVRPlugin_Colorf)>(&::GlobalNamespace::OVRExtensions::FromColorf)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e1b15c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRExtensions*>(), { "FromColorf", {}, { ::i2c::type_of<::GlobalNamespace::OVRPlugin_Colorf>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRExtensions.ToColorf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRPlugin_Colorf (*)(::UnityEngine::Color)>(&::GlobalNamespace::OVRExtensions::ToColorf)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e1b160;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRExtensions*>(), { "ToColorf", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRExtensions.FromSizef
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(::GlobalNamespace::OVRPlugin_Sizef)>(&::GlobalNamespace::OVRExtensions::FromSizef)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e10fac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRExtensions*>(), { "FromSizef", {}, { ::i2c::type_of<::GlobalNamespace::OVRPlugin_Sizef>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRExtensions.ToSizef
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRPlugin_Sizef (*)(::UnityEngine::Vector2)>(&::GlobalNamespace::OVRExtensions::ToSizef)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e1b164;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRExtensions*>(), { "ToSizef", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRExtensions.FromVector2f
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(::GlobalNamespace::OVRPlugin_Vector2f)>(&::GlobalNamespace::OVRExtensions::FromVector2f)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e1b168;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRExtensions*>(), { "FromVector2f", {}, { ::i2c::type_of<::GlobalNamespace::OVRPlugin_Vector2f>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRExtensions.FromFlippedXVector2f
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(::GlobalNamespace::OVRPlugin_Vector2f)>(&::GlobalNamespace::OVRExtensions::FromFlippedXVector2f)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e10fb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRExtensions*>(), { "FromFlippedXVector2f", {}, { ::i2c::type_of<::GlobalNamespace::OVRPlugin_Vector2f>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRExtensions.ToVector2f
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRPlugin_Vector2f (*)(::UnityEngine::Vector2)>(&::GlobalNamespace::OVRExtensions::ToVector2f)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e1b16c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRExtensions*>(), { "ToVector2f", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRExtensions.FromSize3f
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::GlobalNamespace::OVRPlugin_Size3f)>(&::GlobalNamespace::OVRExtensions::FromSize3f)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e1197c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRExtensions*>(), { "FromSize3f", {}, { ::i2c::type_of<::GlobalNamespace::OVRPlugin_Size3f>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRExtensions.ToSize3f
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRPlugin_Size3f (*)(::UnityEngine::Vector3)>(&::GlobalNamespace::OVRExtensions::ToSize3f)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e1b170;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRExtensions*>(), { "ToSize3f", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRExtensions.FromVector3f
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::GlobalNamespace::OVRPlugin_Vector3f)>(&::GlobalNamespace::OVRExtensions::FromVector3f)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e16ae8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRExtensions*>(), { "FromVector3f", {}, { ::i2c::type_of<::GlobalNamespace::OVRPlugin_Vector3f>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRExtensions.FromFlippedXVector3f
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::GlobalNamespace::OVRPlugin_Vector3f)>(&::GlobalNamespace::OVRExtensions::FromFlippedXVector3f)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e11980;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRExtensions*>(), { "FromFlippedXVector3f", {}, { ::i2c::type_of<::GlobalNamespace::OVRPlugin_Vector3f>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRExtensions.FromFlippedZVector3f
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::GlobalNamespace::OVRPlugin_Vector3f)>(&::GlobalNamespace::OVRExtensions::FromFlippedZVector3f)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e0cd34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRExtensions*>(), { "FromFlippedZVector3f", {}, { ::i2c::type_of<::GlobalNamespace::OVRPlugin_Vector3f>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRExtensions.ToVector3f
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRPlugin_Vector3f (*)(::UnityEngine::Vector3)>(&::GlobalNamespace::OVRExtensions::ToVector3f)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e1b174;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRExtensions*>(), { "ToVector3f", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRExtensions.ToFlippedXVector3f
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRPlugin_Vector3f (*)(::UnityEngine::Vector3)>(&::GlobalNamespace::OVRExtensions::ToFlippedXVector3f)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e1b178;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRExtensions*>(), { "ToFlippedXVector3f", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRExtensions.ToFlippedZVector3f
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRPlugin_Vector3f (*)(::UnityEngine::Vector3)>(&::GlobalNamespace::OVRExtensions::ToFlippedZVector3f)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e165f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRExtensions*>(), { "ToFlippedZVector3f", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRExtensions.FromVector4f
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (*)(::GlobalNamespace::OVRPlugin_Vector4f)>(&::GlobalNamespace::OVRExtensions::FromVector4f)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e1b180;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRExtensions*>(), { "FromVector4f", {}, { ::i2c::type_of<::GlobalNamespace::OVRPlugin_Vector4f>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRExtensions.ToVector4f
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRPlugin_Vector4f (*)(::UnityEngine::Vector4)>(&::GlobalNamespace::OVRExtensions::ToVector4f)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e1b184;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRExtensions*>(), { "ToVector4f", {}, { ::i2c::type_of<::UnityEngine::Vector4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRExtensions.FromQuatf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (*)(::GlobalNamespace::OVRPlugin_Quatf)>(&::GlobalNamespace::OVRExtensions::FromQuatf)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e1b188;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRExtensions*>(), { "FromQuatf", {}, { ::i2c::type_of<::GlobalNamespace::OVRPlugin_Quatf>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRExtensions.FromFlippedXQuatf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (*)(::GlobalNamespace::OVRPlugin_Quatf)>(&::GlobalNamespace::OVRExtensions::FromFlippedXQuatf)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e1b18c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRExtensions*>(), { "FromFlippedXQuatf", {}, { ::i2c::type_of<::GlobalNamespace::OVRPlugin_Quatf>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRExtensions.FromFlippedZQuatf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (*)(::GlobalNamespace::OVRPlugin_Quatf)>(&::GlobalNamespace::OVRExtensions::FromFlippedZQuatf)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e0cfd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRExtensions*>(), { "FromFlippedZQuatf", {}, { ::i2c::type_of<::GlobalNamespace::OVRPlugin_Quatf>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRExtensions.ToQuatf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRPlugin_Quatf (*)(::UnityEngine::Quaternion)>(&::GlobalNamespace::OVRExtensions::ToQuatf)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e1b198;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRExtensions*>(), { "ToQuatf", {}, { ::i2c::type_of<::UnityEngine::Quaternion>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRExtensions.ToFlippedXQuatf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRPlugin_Quatf (*)(::UnityEngine::Quaternion)>(&::GlobalNamespace::OVRExtensions::ToFlippedXQuatf)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e1b19c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRExtensions*>(), { "ToFlippedXQuatf", {}, { ::i2c::type_of<::UnityEngine::Quaternion>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRExtensions.ToFlippedZQuatf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRPlugin_Quatf (*)(::UnityEngine::Quaternion)>(&::GlobalNamespace::OVRExtensions::ToFlippedZQuatf)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e1b1a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRExtensions*>(), { "ToFlippedZQuatf", {}, { ::i2c::type_of<::UnityEngine::Quaternion>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRExtensions.ConvertToHMDMatrix34
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::HmdMatrix34_t (*)(::UnityEngine::Matrix4x4)>(&::GlobalNamespace::OVRExtensions::ConvertToHMDMatrix34)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5e1b1b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRExtensions*>(), { "ConvertToHMDMatrix34", {}, { ::i2c::type_of<::UnityEngine::Matrix4x4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRExtensions.FindChildRecursive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (*)(::UnityEngine::Transform*, ::StringW)>(&::GlobalNamespace::OVRExtensions::FindChildRecursive)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5e1b204;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRExtensions*>(), { "FindChildRecursive", {}, { ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRExtensions.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Gradient*, ::UnityEngine::Gradient*)>(&::GlobalNamespace::OVRExtensions::Equals)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x5e1b304;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRExtensions*>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::Gradient*>(), ::i2c::type_of<::UnityEngine::Gradient*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRExtensions.CopyFrom
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Gradient*, ::UnityEngine::Gradient*)>(&::GlobalNamespace::OVRExtensions::CopyFrom)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x5e1b4fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRExtensions*>(), { "CopyFrom", {}, { ::i2c::type_of<::UnityEngine::Gradient*>(), ::i2c::type_of<::UnityEngine::Gradient*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRExtensions.ToSpaceStorageLocation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRPlugin_SpaceStorageLocation (*)(::GlobalNamespace::OVRSpace_StorageLocation)>(
    &::GlobalNamespace::OVRExtensions::ToSpaceStorageLocation)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5e0ac4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRExtensions*>(), { "ToSpaceStorageLocation", {}, { ::i2c::type_of<::GlobalNamespace::OVRSpace_StorageLocation>() } })));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::OVRPose GlobalNamespace::OVRExtensions::ToTrackingSpacePose(::UnityEngine::Transform* transform, ::UnityEngine::Camera* camera) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRExtensions*>(),
                                                           { "ToTrackingSpacePose", {}, { ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Camera*>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPose>(nullptr, ___internal_method, transform, camera);
}
inline ::GlobalNamespace::OVRPose GlobalNamespace::OVRExtensions::ToWorldSpacePose(::GlobalNamespace::OVRPose trackingSpacePose) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRExtensions*>(), { "ToWorldSpacePose", {}, { ::i2c::type_of<::GlobalNamespace::OVRPose>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPose>(nullptr, ___internal_method, trackingSpacePose);
}
inline ::GlobalNamespace::OVRPose GlobalNamespace::OVRExtensions::ToWorldSpacePose(::GlobalNamespace::OVRPose trackingSpacePose, ::UnityEngine::Camera* mainCamera) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRExtensions*>(),
                                                           { "ToWorldSpacePose", {}, { ::i2c::type_of<::GlobalNamespace::OVRPose>(), ::i2c::type_of<::UnityEngine::Camera*>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPose>(nullptr, ___internal_method, trackingSpacePose, mainCamera);
}
inline ::GlobalNamespace::OVRPose GlobalNamespace::OVRExtensions::ToHeadSpacePose(::GlobalNamespace::OVRPose trackingSpacePose) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRExtensions*>(), { "ToHeadSpacePose", {}, { ::i2c::type_of<::GlobalNamespace::OVRPose>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPose>(nullptr, ___internal_method, trackingSpacePose);
}
inline ::GlobalNamespace::OVRPose GlobalNamespace::OVRExtensions::ToHeadSpacePose(::UnityEngine::Transform* transform, ::UnityEngine::Camera* camera) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRExtensions*>(), { "ToHeadSpacePose", {}, { ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Camera*>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPose>(nullptr, ___internal_method, transform, camera);
}
inline ::GlobalNamespace::OVRPose GlobalNamespace::OVRExtensions::ToOVRPose(::UnityEngine::Transform* t, bool isLocal) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRExtensions*>(), { "ToOVRPose", {}, { ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPose>(nullptr, ___internal_method, t, isLocal);
}
inline void GlobalNamespace::OVRExtensions::FromOVRPose(::UnityEngine::Transform* t, ::GlobalNamespace::OVRPose pose, bool isLocal) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRExtensions*>(),
                                              { "FromOVRPose", {}, { ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::GlobalNamespace::OVRPose>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, t, pose, isLocal);
}
inline ::GlobalNamespace::OVRPose GlobalNamespace::OVRExtensions::ToOVRPose(::GlobalNamespace::OVRPlugin_Posef p) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRExtensions*>(), { "ToOVRPose", {}, { ::i2c::type_of<::GlobalNamespace::OVRPlugin_Posef>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPose>(nullptr, ___internal_method, p);
}
inline ::GlobalNamespace::OVRTracker_Frustum GlobalNamespace::OVRExtensions::ToFrustum(::GlobalNamespace::OVRPlugin_Frustumf f) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRExtensions*>(), { "ToFrustum", {}, { ::i2c::type_of<::GlobalNamespace::OVRPlugin_Frustumf>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTracker_Frustum>(nullptr, ___internal_method, f);
}
inline ::UnityEngine::Color GlobalNamespace::OVRExtensions::FromColorf(::GlobalNamespace::OVRPlugin_Colorf c) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRExtensions*>(), { "FromColorf", {}, { ::i2c::type_of<::GlobalNamespace::OVRPlugin_Colorf>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(nullptr, ___internal_method, c);
}
inline ::GlobalNamespace::OVRPlugin_Colorf GlobalNamespace::OVRExtensions::ToColorf(::UnityEngine::Color c) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRExtensions*>(), { "ToColorf", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPlugin_Colorf>(nullptr, ___internal_method, c);
}
inline ::UnityEngine::Vector2 GlobalNamespace::OVRExtensions::FromSizef(::GlobalNamespace::OVRPlugin_Sizef v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRExtensions*>(), { "FromSizef", {}, { ::i2c::type_of<::GlobalNamespace::OVRPlugin_Sizef>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, v);
}
inline ::GlobalNamespace::OVRPlugin_Sizef GlobalNamespace::OVRExtensions::ToSizef(::UnityEngine::Vector2 v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRExtensions*>(), { "ToSizef", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPlugin_Sizef>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector2 GlobalNamespace::OVRExtensions::FromVector2f(::GlobalNamespace::OVRPlugin_Vector2f v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRExtensions*>(), { "FromVector2f", {}, { ::i2c::type_of<::GlobalNamespace::OVRPlugin_Vector2f>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector2 GlobalNamespace::OVRExtensions::FromFlippedXVector2f(::GlobalNamespace::OVRPlugin_Vector2f v) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRExtensions*>(), { "FromFlippedXVector2f", {}, { ::i2c::type_of<::GlobalNamespace::OVRPlugin_Vector2f>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, v);
}
inline ::GlobalNamespace::OVRPlugin_Vector2f GlobalNamespace::OVRExtensions::ToVector2f(::UnityEngine::Vector2 v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRExtensions*>(), { "ToVector2f", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPlugin_Vector2f>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector3 GlobalNamespace::OVRExtensions::FromSize3f(::GlobalNamespace::OVRPlugin_Size3f v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRExtensions*>(), { "FromSize3f", {}, { ::i2c::type_of<::GlobalNamespace::OVRPlugin_Size3f>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, v);
}
inline ::GlobalNamespace::OVRPlugin_Size3f GlobalNamespace::OVRExtensions::ToSize3f(::UnityEngine::Vector3 v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRExtensions*>(), { "ToSize3f", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPlugin_Size3f>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector3 GlobalNamespace::OVRExtensions::FromVector3f(::GlobalNamespace::OVRPlugin_Vector3f v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRExtensions*>(), { "FromVector3f", {}, { ::i2c::type_of<::GlobalNamespace::OVRPlugin_Vector3f>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector3 GlobalNamespace::OVRExtensions::FromFlippedXVector3f(::GlobalNamespace::OVRPlugin_Vector3f v) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRExtensions*>(), { "FromFlippedXVector3f", {}, { ::i2c::type_of<::GlobalNamespace::OVRPlugin_Vector3f>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector3 GlobalNamespace::OVRExtensions::FromFlippedZVector3f(::GlobalNamespace::OVRPlugin_Vector3f v) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRExtensions*>(), { "FromFlippedZVector3f", {}, { ::i2c::type_of<::GlobalNamespace::OVRPlugin_Vector3f>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, v);
}
inline ::GlobalNamespace::OVRPlugin_Vector3f GlobalNamespace::OVRExtensions::ToVector3f(::UnityEngine::Vector3 v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRExtensions*>(), { "ToVector3f", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPlugin_Vector3f>(nullptr, ___internal_method, v);
}
inline ::GlobalNamespace::OVRPlugin_Vector3f GlobalNamespace::OVRExtensions::ToFlippedXVector3f(::UnityEngine::Vector3 v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRExtensions*>(), { "ToFlippedXVector3f", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPlugin_Vector3f>(nullptr, ___internal_method, v);
}
inline ::GlobalNamespace::OVRPlugin_Vector3f GlobalNamespace::OVRExtensions::ToFlippedZVector3f(::UnityEngine::Vector3 v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRExtensions*>(), { "ToFlippedZVector3f", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPlugin_Vector3f>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector4 GlobalNamespace::OVRExtensions::FromVector4f(::GlobalNamespace::OVRPlugin_Vector4f v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRExtensions*>(), { "FromVector4f", {}, { ::i2c::type_of<::GlobalNamespace::OVRPlugin_Vector4f>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(nullptr, ___internal_method, v);
}
inline ::GlobalNamespace::OVRPlugin_Vector4f GlobalNamespace::OVRExtensions::ToVector4f(::UnityEngine::Vector4 v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRExtensions*>(), { "ToVector4f", {}, { ::i2c::type_of<::UnityEngine::Vector4>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPlugin_Vector4f>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Quaternion GlobalNamespace::OVRExtensions::FromQuatf(::GlobalNamespace::OVRPlugin_Quatf q) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRExtensions*>(), { "FromQuatf", {}, { ::i2c::type_of<::GlobalNamespace::OVRPlugin_Quatf>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(nullptr, ___internal_method, q);
}
inline ::UnityEngine::Quaternion GlobalNamespace::OVRExtensions::FromFlippedXQuatf(::GlobalNamespace::OVRPlugin_Quatf q) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRExtensions*>(), { "FromFlippedXQuatf", {}, { ::i2c::type_of<::GlobalNamespace::OVRPlugin_Quatf>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(nullptr, ___internal_method, q);
}
inline ::UnityEngine::Quaternion GlobalNamespace::OVRExtensions::FromFlippedZQuatf(::GlobalNamespace::OVRPlugin_Quatf q) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRExtensions*>(), { "FromFlippedZQuatf", {}, { ::i2c::type_of<::GlobalNamespace::OVRPlugin_Quatf>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(nullptr, ___internal_method, q);
}
inline ::GlobalNamespace::OVRPlugin_Quatf GlobalNamespace::OVRExtensions::ToQuatf(::UnityEngine::Quaternion q) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRExtensions*>(), { "ToQuatf", {}, { ::i2c::type_of<::UnityEngine::Quaternion>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPlugin_Quatf>(nullptr, ___internal_method, q);
}
inline ::GlobalNamespace::OVRPlugin_Quatf GlobalNamespace::OVRExtensions::ToFlippedXQuatf(::UnityEngine::Quaternion q) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRExtensions*>(), { "ToFlippedXQuatf", {}, { ::i2c::type_of<::UnityEngine::Quaternion>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPlugin_Quatf>(nullptr, ___internal_method, q);
}
inline ::GlobalNamespace::OVRPlugin_Quatf GlobalNamespace::OVRExtensions::ToFlippedZQuatf(::UnityEngine::Quaternion q) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRExtensions*>(), { "ToFlippedZQuatf", {}, { ::i2c::type_of<::UnityEngine::Quaternion>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPlugin_Quatf>(nullptr, ___internal_method, q);
}
inline ::OVR::OpenVR::HmdMatrix34_t GlobalNamespace::OVRExtensions::ConvertToHMDMatrix34(::UnityEngine::Matrix4x4 m) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRExtensions*>(), { "ConvertToHMDMatrix34", {}, { ::i2c::type_of<::UnityEngine::Matrix4x4>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::HmdMatrix34_t>(nullptr, ___internal_method, m);
}
inline ::UnityW<::UnityEngine::Transform> GlobalNamespace::OVRExtensions::FindChildRecursive(::UnityEngine::Transform* parent, ::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRExtensions*>(),
                                                                                         { "FindChildRecursive", {}, { ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(nullptr, ___internal_method, parent, name);
}
inline bool GlobalNamespace::OVRExtensions::Equals(::UnityEngine::Gradient* gradient, ::UnityEngine::Gradient* otherGradient) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRExtensions*>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::Gradient*>(), ::i2c::type_of<::UnityEngine::Gradient*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, gradient, otherGradient);
}
inline void GlobalNamespace::OVRExtensions::CopyFrom(::UnityEngine::Gradient* gradient, ::UnityEngine::Gradient* otherGradient) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRExtensions*>(), { "CopyFrom", {}, { ::i2c::type_of<::UnityEngine::Gradient*>(), ::i2c::type_of<::UnityEngine::Gradient*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, gradient, otherGradient);
}
inline ::GlobalNamespace::OVRPlugin_SpaceStorageLocation GlobalNamespace::OVRExtensions::ToSpaceStorageLocation(::GlobalNamespace::OVRSpace_StorageLocation storageLocation) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRExtensions*>(), { "ToSpaceStorageLocation", {}, { ::i2c::type_of<::GlobalNamespace::OVRSpace_StorageLocation>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPlugin_SpaceStorageLocation>(nullptr, ___internal_method, storageLocation);
}
template <typename T> inline ::GlobalNamespace::OVREnumerable_1<T> GlobalNamespace::OVRExtensions::ToNonAlloc(::System::Collections::Generic::IEnumerable_1<T>* enumerable) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRExtensions*>(), { "ToNonAlloc", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<T>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVREnumerable_1<T>>(nullptr, ___internal_method, enumerable);
}
template <typename T>
inline ::Unity::Collections::NativeArray_1<T> GlobalNamespace::OVRExtensions::ToNativeArray(::System::Collections::Generic::IEnumerable_1<T>* enumerable, ::Unity::Collections::Allocator allocator) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRExtensions*>(),
                          { "ToNativeArray", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<T>*>(), ::i2c::type_of<::Unity::Collections::Allocator>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<T>>(nullptr, ___internal_method, enumerable, allocator);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRExtensions::OVRExtensions() {}
