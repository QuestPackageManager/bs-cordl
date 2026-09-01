#pragma once
// IWYU pragma private; include "GlobalNamespace\OVRSkeleton.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "GlobalNamespace/zzzz__OVRSkeleton_def.hpp"
#include "GlobalNamespace/zzzz__OVRBoneCapsule_def.hpp"
#include "GlobalNamespace/zzzz__OVRBone_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_def.hpp"
#include "GlobalNamespace/zzzz__OVRSkeleton_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider.GetSkeletonType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRSkeleton_SkeletonType (::GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider::*)()>(
    &::GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider::GetSkeletonType)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider.GetSkeletonPoseData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRSkeleton_SkeletonPoseData (::GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider::*)()>(
    &::GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider::GetSkeletonPoseData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider.get_enabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider::*)()>(&::GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider::get_enabled)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider*>(), 2 }));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::OVRSkeleton_SkeletonType GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider::GetSkeletonType() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRSkeleton_SkeletonType>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRSkeleton_SkeletonPoseData GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider::GetSkeletonPoseData() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRSkeleton_SkeletonPoseData>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider::get_enabled() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton_SkeletonPoseData.get_RootPose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRPlugin_Posef (::GlobalNamespace::OVRSkeleton_SkeletonPoseData::*)()>(
    &::GlobalNamespace::OVRSkeleton_SkeletonPoseData::get_RootPose)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5f11cdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSkeleton_SkeletonPoseData>(), { "get_RootPose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton_SkeletonPoseData.set_RootPose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSkeleton_SkeletonPoseData::*)(::GlobalNamespace::OVRPlugin_Posef)>(
    &::GlobalNamespace::OVRSkeleton_SkeletonPoseData::set_RootPose)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5f11cf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSkeleton_SkeletonPoseData>(), { "set_RootPose", {}, { ::i2c::type_of<::GlobalNamespace::OVRPlugin_Posef>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton_SkeletonPoseData.get_RootScale
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::OVRSkeleton_SkeletonPoseData::*)()>(&::GlobalNamespace::OVRSkeleton_SkeletonPoseData::get_RootScale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f11d0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSkeleton_SkeletonPoseData>(), { "get_RootScale", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton_SkeletonPoseData.set_RootScale
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSkeleton_SkeletonPoseData::*)(float_t)>(&::GlobalNamespace::OVRSkeleton_SkeletonPoseData::set_RootScale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f11d14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSkeleton_SkeletonPoseData>(), { "set_RootScale", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton_SkeletonPoseData.get_BoneRotations
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::GlobalNamespace::OVRPlugin_Quatf> (::GlobalNamespace::OVRSkeleton_SkeletonPoseData::*)()>(
    &::GlobalNamespace::OVRSkeleton_SkeletonPoseData::get_BoneRotations)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f11d1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSkeleton_SkeletonPoseData>(), { "get_BoneRotations", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton_SkeletonPoseData.set_BoneRotations
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSkeleton_SkeletonPoseData::*)(::ArrayW<::GlobalNamespace::OVRPlugin_Quatf>)>(
    &::GlobalNamespace::OVRSkeleton_SkeletonPoseData::set_BoneRotations)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f11d24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSkeleton_SkeletonPoseData>(),
                                                                                           { "set_BoneRotations", {}, { ::i2c::type_of<::ArrayW<::GlobalNamespace::OVRPlugin_Quatf>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton_SkeletonPoseData.get_IsDataValid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRSkeleton_SkeletonPoseData::*)()>(&::GlobalNamespace::OVRSkeleton_SkeletonPoseData::get_IsDataValid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f11d2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSkeleton_SkeletonPoseData>(), { "get_IsDataValid", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton_SkeletonPoseData.set_IsDataValid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSkeleton_SkeletonPoseData::*)(bool)>(&::GlobalNamespace::OVRSkeleton_SkeletonPoseData::set_IsDataValid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f11d34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSkeleton_SkeletonPoseData>(), { "set_IsDataValid", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton_SkeletonPoseData.get_IsDataHighConfidence
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRSkeleton_SkeletonPoseData::*)()>(&::GlobalNamespace::OVRSkeleton_SkeletonPoseData::get_IsDataHighConfidence)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f11d3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSkeleton_SkeletonPoseData>(), { "get_IsDataHighConfidence", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton_SkeletonPoseData.set_IsDataHighConfidence
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSkeleton_SkeletonPoseData::*)(bool)>(&::GlobalNamespace::OVRSkeleton_SkeletonPoseData::set_IsDataHighConfidence)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f11d44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSkeleton_SkeletonPoseData>(), { "set_IsDataHighConfidence", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton_SkeletonPoseData.get_BoneTranslations
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::GlobalNamespace::OVRPlugin_Vector3f> (::GlobalNamespace::OVRSkeleton_SkeletonPoseData::*)()>(
    &::GlobalNamespace::OVRSkeleton_SkeletonPoseData::get_BoneTranslations)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f11d4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSkeleton_SkeletonPoseData>(), { "get_BoneTranslations", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton_SkeletonPoseData.set_BoneTranslations
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSkeleton_SkeletonPoseData::*)(::ArrayW<::GlobalNamespace::OVRPlugin_Vector3f>)>(
    &::GlobalNamespace::OVRSkeleton_SkeletonPoseData::set_BoneTranslations)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f11d54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSkeleton_SkeletonPoseData>(),
                                                                                           { "set_BoneTranslations", {}, { ::i2c::type_of<::ArrayW<::GlobalNamespace::OVRPlugin_Vector3f>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton_SkeletonPoseData.get_SkeletonChangedCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::OVRSkeleton_SkeletonPoseData::*)()>(&::GlobalNamespace::OVRSkeleton_SkeletonPoseData::get_SkeletonChangedCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f11d5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSkeleton_SkeletonPoseData>(), { "get_SkeletonChangedCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton_SkeletonPoseData.set_SkeletonChangedCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSkeleton_SkeletonPoseData::*)(int32_t)>(
    &::GlobalNamespace::OVRSkeleton_SkeletonPoseData::set_SkeletonChangedCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f11d64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSkeleton_SkeletonPoseData>(), { "set_SkeletonChangedCount", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::OVRPlugin_Posef GlobalNamespace::OVRSkeleton_SkeletonPoseData::get_RootPose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSkeleton_SkeletonPoseData>(), { "get_RootPose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPlugin_Posef>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRSkeleton_SkeletonPoseData::set_RootPose(::GlobalNamespace::OVRPlugin_Posef value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSkeleton_SkeletonPoseData>(), { "set_RootPose", {}, { ::i2c::type_of<::GlobalNamespace::OVRPlugin_Posef>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline float_t GlobalNamespace::OVRSkeleton_SkeletonPoseData::get_RootScale() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSkeleton_SkeletonPoseData>(), { "get_RootScale", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRSkeleton_SkeletonPoseData::set_RootScale(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSkeleton_SkeletonPoseData>(), { "set_RootScale", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::ArrayW<::GlobalNamespace::OVRPlugin_Quatf> GlobalNamespace::OVRSkeleton_SkeletonPoseData::get_BoneRotations() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSkeleton_SkeletonPoseData>(), { "get_BoneRotations", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::OVRPlugin_Quatf>>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRSkeleton_SkeletonPoseData::set_BoneRotations(::ArrayW<::GlobalNamespace::OVRPlugin_Quatf> value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSkeleton_SkeletonPoseData>(),
                                                                                         { "set_BoneRotations", {}, { ::i2c::type_of<::ArrayW<::GlobalNamespace::OVRPlugin_Quatf>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool GlobalNamespace::OVRSkeleton_SkeletonPoseData::get_IsDataValid() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSkeleton_SkeletonPoseData>(), { "get_IsDataValid", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRSkeleton_SkeletonPoseData::set_IsDataValid(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSkeleton_SkeletonPoseData>(), { "set_IsDataValid", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool GlobalNamespace::OVRSkeleton_SkeletonPoseData::get_IsDataHighConfidence() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSkeleton_SkeletonPoseData>(), { "get_IsDataHighConfidence", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRSkeleton_SkeletonPoseData::set_IsDataHighConfidence(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSkeleton_SkeletonPoseData>(), { "set_IsDataHighConfidence", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::ArrayW<::GlobalNamespace::OVRPlugin_Vector3f> GlobalNamespace::OVRSkeleton_SkeletonPoseData::get_BoneTranslations() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSkeleton_SkeletonPoseData>(), { "get_BoneTranslations", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::OVRPlugin_Vector3f>>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRSkeleton_SkeletonPoseData::set_BoneTranslations(::ArrayW<::GlobalNamespace::OVRPlugin_Vector3f> value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSkeleton_SkeletonPoseData>(),
                                                                                         { "set_BoneTranslations", {}, { ::i2c::type_of<::ArrayW<::GlobalNamespace::OVRPlugin_Vector3f>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline int32_t GlobalNamespace::OVRSkeleton_SkeletonPoseData::get_SkeletonChangedCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSkeleton_SkeletonPoseData>(), { "get_SkeletonChangedCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRSkeleton_SkeletonPoseData::set_SkeletonChangedCount(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSkeleton_SkeletonPoseData>(), { "set_SkeletonChangedCount", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_RootPose_k__BackingField", ty: "::GlobalNamespace::OVRPlugin_Posef", modifiers: "", def_value: Some("{}") }, CppParam { name: "_RootScale_k__BackingField", ty:
// "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_BoneRotations_k__BackingField", ty: "::ArrayW<::GlobalNamespace::OVRPlugin_Quatf>", modifiers: "", def_value: Some("{}") },
// CppParam { name: "_IsDataValid_k__BackingField", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "_IsDataHighConfidence_k__BackingField", ty: "bool", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "_BoneTranslations_k__BackingField", ty: "::ArrayW<::GlobalNamespace::OVRPlugin_Vector3f>", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "_SkeletonChangedCount_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRSkeleton_SkeletonPoseData::OVRSkeleton_SkeletonPoseData(::GlobalNamespace::OVRPlugin_Posef _RootPose_k__BackingField, float_t _RootScale_k__BackingField,
                                                                                        ::ArrayW<::GlobalNamespace::OVRPlugin_Quatf> _BoneRotations_k__BackingField, bool _IsDataValid_k__BackingField,
                                                                                        bool _IsDataHighConfidence_k__BackingField,
                                                                                        ::ArrayW<::GlobalNamespace::OVRPlugin_Vector3f> _BoneTranslations_k__BackingField,
                                                                                        int32_t _SkeletonChangedCount_k__BackingField) noexcept {
  this->_RootPose_k__BackingField = _RootPose_k__BackingField;
  this->_RootScale_k__BackingField = _RootScale_k__BackingField;
  this->_BoneRotations_k__BackingField = _BoneRotations_k__BackingField;
  this->_IsDataValid_k__BackingField = _IsDataValid_k__BackingField;
  this->_IsDataHighConfidence_k__BackingField = _IsDataHighConfidence_k__BackingField;
  this->_BoneTranslations_k__BackingField = _BoneTranslations_k__BackingField;
  this->_SkeletonChangedCount_k__BackingField = _SkeletonChangedCount_k__BackingField;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRSkeleton_SkeletonPoseData::OVRSkeleton_SkeletonPoseData() {}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRSkeleton_SkeletonType::OVRSkeleton_SkeletonType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRSkeleton_SkeletonType::OVRSkeleton_SkeletonType() {}
constexpr ::GlobalNamespace::OVRSkeleton_SkeletonType GlobalNamespace::OVRSkeleton_SkeletonType::None{ static_cast<int32_t>(0xffffffff) };
constexpr ::GlobalNamespace::OVRSkeleton_SkeletonType GlobalNamespace::OVRSkeleton_SkeletonType::HandLeft{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::OVRSkeleton_SkeletonType GlobalNamespace::OVRSkeleton_SkeletonType::HandRight{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::OVRSkeleton_SkeletonType GlobalNamespace::OVRSkeleton_SkeletonType::Body{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::OVRSkeleton_SkeletonType GlobalNamespace::OVRSkeleton_SkeletonType::FullBody{ static_cast<int32_t>(0x3) };
constexpr ::GlobalNamespace::OVRSkeleton_SkeletonType GlobalNamespace::OVRSkeleton_SkeletonType::XRHandLeft{ static_cast<int32_t>(0x4) };
constexpr ::GlobalNamespace::OVRSkeleton_SkeletonType GlobalNamespace::OVRSkeleton_SkeletonType::XRHandRight{ static_cast<int32_t>(0x5) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRSkeleton_BoneId::OVRSkeleton_BoneId(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRSkeleton_BoneId::OVRSkeleton_BoneId() {}
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Invalid{ static_cast<int32_t>(0xffffffff) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Hand_Start{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Hand_WristRoot{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Hand_ForearmStub{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Hand_Thumb0{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Hand_Thumb1{ static_cast<int32_t>(0x3) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Hand_Thumb2{ static_cast<int32_t>(0x4) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Hand_Thumb3{ static_cast<int32_t>(0x5) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Hand_Index1{ static_cast<int32_t>(0x6) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Hand_Index2{ static_cast<int32_t>(0x7) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Hand_Index3{ static_cast<int32_t>(0x8) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Hand_Middle1{ static_cast<int32_t>(0x9) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Hand_Middle2{ static_cast<int32_t>(0xa) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Hand_Middle3{ static_cast<int32_t>(0xb) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Hand_Ring1{ static_cast<int32_t>(0xc) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Hand_Ring2{ static_cast<int32_t>(0xd) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Hand_Ring3{ static_cast<int32_t>(0xe) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Hand_Pinky0{ static_cast<int32_t>(0xf) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Hand_Pinky1{ static_cast<int32_t>(0x10) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Hand_Pinky2{ static_cast<int32_t>(0x11) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Hand_Pinky3{ static_cast<int32_t>(0x12) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Hand_MaxSkinnable{ static_cast<int32_t>(0x13) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Hand_ThumbTip{ static_cast<int32_t>(0x13) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Hand_IndexTip{ static_cast<int32_t>(0x14) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Hand_MiddleTip{ static_cast<int32_t>(0x15) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Hand_RingTip{ static_cast<int32_t>(0x16) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Hand_PinkyTip{ static_cast<int32_t>(0x17) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Hand_End{ static_cast<int32_t>(0x18) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::XRHand_Start{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::XRHand_Palm{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::XRHand_Wrist{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::XRHand_ThumbMetacarpal{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::XRHand_ThumbProximal{ static_cast<int32_t>(0x3) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::XRHand_ThumbDistal{ static_cast<int32_t>(0x4) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::XRHand_ThumbTip{ static_cast<int32_t>(0x5) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::XRHand_IndexMetacarpal{ static_cast<int32_t>(0x6) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::XRHand_IndexProximal{ static_cast<int32_t>(0x7) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::XRHand_IndexIntermediate{ static_cast<int32_t>(0x8) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::XRHand_IndexDistal{ static_cast<int32_t>(0x9) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::XRHand_IndexTip{ static_cast<int32_t>(0xa) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::XRHand_MiddleMetacarpal{ static_cast<int32_t>(0xb) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::XRHand_MiddleProximal{ static_cast<int32_t>(0xc) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::XRHand_MiddleIntermediate{ static_cast<int32_t>(0xd) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::XRHand_MiddleDistal{ static_cast<int32_t>(0xe) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::XRHand_MiddleTip{ static_cast<int32_t>(0xf) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::XRHand_RingMetacarpal{ static_cast<int32_t>(0x10) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::XRHand_RingProximal{ static_cast<int32_t>(0x11) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::XRHand_RingIntermediate{ static_cast<int32_t>(0x12) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::XRHand_RingDistal{ static_cast<int32_t>(0x13) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::XRHand_RingTip{ static_cast<int32_t>(0x14) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::XRHand_LittleMetacarpal{ static_cast<int32_t>(0x15) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::XRHand_LittleProximal{ static_cast<int32_t>(0x16) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::XRHand_LittleIntermediate{ static_cast<int32_t>(0x17) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::XRHand_LittleDistal{ static_cast<int32_t>(0x18) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::XRHand_LittleTip{ static_cast<int32_t>(0x19) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::XRHand_Max{ static_cast<int32_t>(0x1a) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::XRHand_End{ static_cast<int32_t>(0x1a) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Body_Start{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Body_Root{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Body_Hips{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Body_SpineLower{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Body_SpineMiddle{ static_cast<int32_t>(0x3) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Body_SpineUpper{ static_cast<int32_t>(0x4) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Body_Chest{ static_cast<int32_t>(0x5) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Body_Neck{ static_cast<int32_t>(0x6) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Body_Head{ static_cast<int32_t>(0x7) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Body_LeftShoulder{ static_cast<int32_t>(0x8) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Body_LeftScapula{ static_cast<int32_t>(0x9) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Body_LeftArmUpper{ static_cast<int32_t>(0xa) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Body_LeftArmLower{ static_cast<int32_t>(0xb) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Body_LeftHandWristTwist{ static_cast<int32_t>(0xc) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Body_RightShoulder{ static_cast<int32_t>(0xd) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Body_RightScapula{ static_cast<int32_t>(0xe) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Body_RightArmUpper{ static_cast<int32_t>(0xf) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Body_RightArmLower{ static_cast<int32_t>(0x10) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Body_RightHandWristTwist{ static_cast<int32_t>(0x11) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Body_LeftHandPalm{ static_cast<int32_t>(0x12) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Body_LeftHandWrist{ static_cast<int32_t>(0x13) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Body_LeftHandThumbMetacarpal{ static_cast<int32_t>(0x14) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Body_LeftHandThumbProximal{ static_cast<int32_t>(0x15) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Body_LeftHandThumbDistal{ static_cast<int32_t>(0x16) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Body_LeftHandThumbTip{ static_cast<int32_t>(0x17) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Body_LeftHandIndexMetacarpal{ static_cast<int32_t>(0x18) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Body_LeftHandIndexProximal{ static_cast<int32_t>(0x19) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Body_LeftHandIndexIntermediate{ static_cast<int32_t>(0x1a) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Body_LeftHandIndexDistal{ static_cast<int32_t>(0x1b) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Body_LeftHandIndexTip{ static_cast<int32_t>(0x1c) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Body_LeftHandMiddleMetacarpal{ static_cast<int32_t>(0x1d) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Body_LeftHandMiddleProximal{ static_cast<int32_t>(0x1e) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Body_LeftHandMiddleIntermediate{ static_cast<int32_t>(0x1f) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Body_LeftHandMiddleDistal{ static_cast<int32_t>(0x20) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Body_LeftHandMiddleTip{ static_cast<int32_t>(0x21) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Body_LeftHandRingMetacarpal{ static_cast<int32_t>(0x22) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Body_LeftHandRingProximal{ static_cast<int32_t>(0x23) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Body_LeftHandRingIntermediate{ static_cast<int32_t>(0x24) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Body_LeftHandRingDistal{ static_cast<int32_t>(0x25) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Body_LeftHandRingTip{ static_cast<int32_t>(0x26) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Body_LeftHandLittleMetacarpal{ static_cast<int32_t>(0x27) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Body_LeftHandLittleProximal{ static_cast<int32_t>(0x28) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Body_LeftHandLittleIntermediate{ static_cast<int32_t>(0x29) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Body_LeftHandLittleDistal{ static_cast<int32_t>(0x2a) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Body_LeftHandLittleTip{ static_cast<int32_t>(0x2b) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Body_RightHandPalm{ static_cast<int32_t>(0x2c) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Body_RightHandWrist{ static_cast<int32_t>(0x2d) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Body_RightHandThumbMetacarpal{ static_cast<int32_t>(0x2e) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Body_RightHandThumbProximal{ static_cast<int32_t>(0x2f) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Body_RightHandThumbDistal{ static_cast<int32_t>(0x30) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Body_RightHandThumbTip{ static_cast<int32_t>(0x31) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Body_RightHandIndexMetacarpal{ static_cast<int32_t>(0x32) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Body_RightHandIndexProximal{ static_cast<int32_t>(0x33) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Body_RightHandIndexIntermediate{ static_cast<int32_t>(0x34) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Body_RightHandIndexDistal{ static_cast<int32_t>(0x35) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Body_RightHandIndexTip{ static_cast<int32_t>(0x36) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Body_RightHandMiddleMetacarpal{ static_cast<int32_t>(0x37) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Body_RightHandMiddleProximal{ static_cast<int32_t>(0x38) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Body_RightHandMiddleIntermediate{ static_cast<int32_t>(0x39) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Body_RightHandMiddleDistal{ static_cast<int32_t>(0x3a) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Body_RightHandMiddleTip{ static_cast<int32_t>(0x3b) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Body_RightHandRingMetacarpal{ static_cast<int32_t>(0x3c) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Body_RightHandRingProximal{ static_cast<int32_t>(0x3d) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Body_RightHandRingIntermediate{ static_cast<int32_t>(0x3e) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Body_RightHandRingDistal{ static_cast<int32_t>(0x3f) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Body_RightHandRingTip{ static_cast<int32_t>(0x40) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Body_RightHandLittleMetacarpal{ static_cast<int32_t>(0x41) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Body_RightHandLittleProximal{ static_cast<int32_t>(0x42) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Body_RightHandLittleIntermediate{ static_cast<int32_t>(0x43) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Body_RightHandLittleDistal{ static_cast<int32_t>(0x44) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Body_RightHandLittleTip{ static_cast<int32_t>(0x45) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Body_End{ static_cast<int32_t>(0x46) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::FullBody_Start{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::FullBody_Root{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::FullBody_Hips{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::FullBody_SpineLower{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::FullBody_SpineMiddle{ static_cast<int32_t>(0x3) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::FullBody_SpineUpper{ static_cast<int32_t>(0x4) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::FullBody_Chest{ static_cast<int32_t>(0x5) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::FullBody_Neck{ static_cast<int32_t>(0x6) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::FullBody_Head{ static_cast<int32_t>(0x7) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::FullBody_LeftShoulder{ static_cast<int32_t>(0x8) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::FullBody_LeftScapula{ static_cast<int32_t>(0x9) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::FullBody_LeftArmUpper{ static_cast<int32_t>(0xa) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::FullBody_LeftArmLower{ static_cast<int32_t>(0xb) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::FullBody_LeftHandWristTwist{ static_cast<int32_t>(0xc) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::FullBody_RightShoulder{ static_cast<int32_t>(0xd) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::FullBody_RightScapula{ static_cast<int32_t>(0xe) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::FullBody_RightArmUpper{ static_cast<int32_t>(0xf) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::FullBody_RightArmLower{ static_cast<int32_t>(0x10) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::FullBody_RightHandWristTwist{ static_cast<int32_t>(0x11) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::FullBody_LeftHandPalm{ static_cast<int32_t>(0x12) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::FullBody_LeftHandWrist{ static_cast<int32_t>(0x13) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::FullBody_LeftHandThumbMetacarpal{ static_cast<int32_t>(0x14) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::FullBody_LeftHandThumbProximal{ static_cast<int32_t>(0x15) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::FullBody_LeftHandThumbDistal{ static_cast<int32_t>(0x16) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::FullBody_LeftHandThumbTip{ static_cast<int32_t>(0x17) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::FullBody_LeftHandIndexMetacarpal{ static_cast<int32_t>(0x18) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::FullBody_LeftHandIndexProximal{ static_cast<int32_t>(0x19) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::FullBody_LeftHandIndexIntermediate{ static_cast<int32_t>(0x1a) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::FullBody_LeftHandIndexDistal{ static_cast<int32_t>(0x1b) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::FullBody_LeftHandIndexTip{ static_cast<int32_t>(0x1c) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::FullBody_LeftHandMiddleMetacarpal{ static_cast<int32_t>(0x1d) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::FullBody_LeftHandMiddleProximal{ static_cast<int32_t>(0x1e) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::FullBody_LeftHandMiddleIntermediate{ static_cast<int32_t>(0x1f) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::FullBody_LeftHandMiddleDistal{ static_cast<int32_t>(0x20) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::FullBody_LeftHandMiddleTip{ static_cast<int32_t>(0x21) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::FullBody_LeftHandRingMetacarpal{ static_cast<int32_t>(0x22) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::FullBody_LeftHandRingProximal{ static_cast<int32_t>(0x23) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::FullBody_LeftHandRingIntermediate{ static_cast<int32_t>(0x24) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::FullBody_LeftHandRingDistal{ static_cast<int32_t>(0x25) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::FullBody_LeftHandRingTip{ static_cast<int32_t>(0x26) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::FullBody_LeftHandLittleMetacarpal{ static_cast<int32_t>(0x27) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::FullBody_LeftHandLittleProximal{ static_cast<int32_t>(0x28) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::FullBody_LeftHandLittleIntermediate{ static_cast<int32_t>(0x29) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::FullBody_LeftHandLittleDistal{ static_cast<int32_t>(0x2a) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::FullBody_LeftHandLittleTip{ static_cast<int32_t>(0x2b) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::FullBody_RightHandPalm{ static_cast<int32_t>(0x2c) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::FullBody_RightHandWrist{ static_cast<int32_t>(0x2d) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::FullBody_RightHandThumbMetacarpal{ static_cast<int32_t>(0x2e) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::FullBody_RightHandThumbProximal{ static_cast<int32_t>(0x2f) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::FullBody_RightHandThumbDistal{ static_cast<int32_t>(0x30) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::FullBody_RightHandThumbTip{ static_cast<int32_t>(0x31) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::FullBody_RightHandIndexMetacarpal{ static_cast<int32_t>(0x32) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::FullBody_RightHandIndexProximal{ static_cast<int32_t>(0x33) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::FullBody_RightHandIndexIntermediate{ static_cast<int32_t>(0x34) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::FullBody_RightHandIndexDistal{ static_cast<int32_t>(0x35) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::FullBody_RightHandIndexTip{ static_cast<int32_t>(0x36) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::FullBody_RightHandMiddleMetacarpal{ static_cast<int32_t>(0x37) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::FullBody_RightHandMiddleProximal{ static_cast<int32_t>(0x38) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::FullBody_RightHandMiddleIntermediate{ static_cast<int32_t>(0x39) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::FullBody_RightHandMiddleDistal{ static_cast<int32_t>(0x3a) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::FullBody_RightHandMiddleTip{ static_cast<int32_t>(0x3b) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::FullBody_RightHandRingMetacarpal{ static_cast<int32_t>(0x3c) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::FullBody_RightHandRingProximal{ static_cast<int32_t>(0x3d) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::FullBody_RightHandRingIntermediate{ static_cast<int32_t>(0x3e) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::FullBody_RightHandRingDistal{ static_cast<int32_t>(0x3f) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::FullBody_RightHandRingTip{ static_cast<int32_t>(0x40) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::FullBody_RightHandLittleMetacarpal{ static_cast<int32_t>(0x41) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::FullBody_RightHandLittleProximal{ static_cast<int32_t>(0x42) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::FullBody_RightHandLittleIntermediate{ static_cast<int32_t>(0x43) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::FullBody_RightHandLittleDistal{ static_cast<int32_t>(0x44) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::FullBody_RightHandLittleTip{ static_cast<int32_t>(0x45) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::FullBody_LeftUpperLeg{ static_cast<int32_t>(0x46) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::FullBody_LeftLowerLeg{ static_cast<int32_t>(0x47) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::FullBody_LeftFootAnkleTwist{ static_cast<int32_t>(0x48) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::FullBody_LeftFootAnkle{ static_cast<int32_t>(0x49) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::FullBody_LeftFootSubtalar{ static_cast<int32_t>(0x4a) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::FullBody_LeftFootTransverse{ static_cast<int32_t>(0x4b) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::FullBody_LeftFootBall{ static_cast<int32_t>(0x4c) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::FullBody_RightUpperLeg{ static_cast<int32_t>(0x4d) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::FullBody_RightLowerLeg{ static_cast<int32_t>(0x4e) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::FullBody_RightFootAnkleTwist{ static_cast<int32_t>(0x4f) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::FullBody_RightFootAnkle{ static_cast<int32_t>(0x50) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::FullBody_RightFootSubtalar{ static_cast<int32_t>(0x51) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::FullBody_RightFootTransverse{ static_cast<int32_t>(0x52) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::FullBody_RightFootBall{ static_cast<int32_t>(0x53) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::FullBody_End{ static_cast<int32_t>(0x54) };
constexpr ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton_BoneId::Max{ static_cast<int32_t>(0x54) };
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton.get_IsInitialized
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRSkeleton::*)()>(&::GlobalNamespace::OVRSkeleton::get_IsInitialized)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f0e130;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(), { "get_IsInitialized", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton.set_IsInitialized
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSkeleton::*)(bool)>(&::GlobalNamespace::OVRSkeleton::set_IsInitialized)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f0e138;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(), { "set_IsInitialized", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton.get_IsDataValid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRSkeleton::*)()>(&::GlobalNamespace::OVRSkeleton::get_IsDataValid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f0e140;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(), { "get_IsDataValid", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton.set_IsDataValid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSkeleton::*)(bool)>(&::GlobalNamespace::OVRSkeleton::set_IsDataValid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f0e148;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(), { "set_IsDataValid", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton.get_IsDataHighConfidence
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRSkeleton::*)()>(&::GlobalNamespace::OVRSkeleton::get_IsDataHighConfidence)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f0e150;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(), { "get_IsDataHighConfidence", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton.set_IsDataHighConfidence
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSkeleton::*)(bool)>(&::GlobalNamespace::OVRSkeleton::set_IsDataHighConfidence)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f0e158;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(), { "set_IsDataHighConfidence", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton.get_Bones
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBone*>* (::GlobalNamespace::OVRSkeleton::*)()>(
    &::GlobalNamespace::OVRSkeleton::get_Bones)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f0e160;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(), { "get_Bones", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton.set_Bones
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSkeleton::*)(::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBone*>*)>(
    &::GlobalNamespace::OVRSkeleton::set_Bones)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f0e168;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(), { "set_Bones", {}, { ::i2c::type_of<::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBone*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton.get_BindPoses
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBone*>* (::GlobalNamespace::OVRSkeleton::*)()>(
    &::GlobalNamespace::OVRSkeleton::get_BindPoses)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f0e170;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(), { "get_BindPoses", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton.set_BindPoses
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSkeleton::*)(::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBone*>*)>(
    &::GlobalNamespace::OVRSkeleton::set_BindPoses)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f0e178;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(), { "set_BindPoses", {}, { ::i2c::type_of<::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBone*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton.get_Capsules
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBoneCapsule*>* (::GlobalNamespace::OVRSkeleton::*)()>(
    &::GlobalNamespace::OVRSkeleton::get_Capsules)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f0e180;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(), { "get_Capsules", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton.set_Capsules
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSkeleton::*)(::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBoneCapsule*>*)>(
    &::GlobalNamespace::OVRSkeleton::set_Capsules)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f0e188;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(),
                                                             { "set_Capsules", {}, { ::i2c::type_of<::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBoneCapsule*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton.GetSkeletonType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRSkeleton_SkeletonType (::GlobalNamespace::OVRSkeleton::*)()>(&::GlobalNamespace::OVRSkeleton::GetSkeletonType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f0e190;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(), { "GetSkeletonType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton.SetSkeletonType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSkeleton::*)(::GlobalNamespace::OVRSkeleton_SkeletonType)>(&::GlobalNamespace::OVRSkeleton::SetSkeletonType)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5f0e198;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(), { ::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton.GetRequiredBodyJointSet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRPlugin_BodyJointSet (::GlobalNamespace::OVRSkeleton::*)()>(&::GlobalNamespace::OVRSkeleton::GetRequiredBodyJointSet)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5f0e318;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(), { "GetRequiredBodyJointSet", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton.IsValidBone
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRSkeleton::*)(::GlobalNamespace::OVRSkeleton_BoneId)>(&::GlobalNamespace::OVRSkeleton::IsValidBone)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5f0e334;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(), { "IsValidBone", {}, { ::i2c::type_of<::GlobalNamespace::OVRSkeleton_BoneId>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton.get_SkeletonChangedCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::OVRSkeleton::*)()>(&::GlobalNamespace::OVRSkeleton::get_SkeletonChangedCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f0e3a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(), { "get_SkeletonChangedCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton.set_SkeletonChangedCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSkeleton::*)(int32_t)>(&::GlobalNamespace::OVRSkeleton::set_SkeletonChangedCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f0e3ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(), { "set_SkeletonChangedCount", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSkeleton::*)()>(&::GlobalNamespace::OVRSkeleton::Awake)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x5f0e3b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(), { ::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton.SearchSkeletonDataProvider
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider* (::GlobalNamespace::OVRSkeleton::*)()>(
    &::GlobalNamespace::OVRSkeleton::SearchSkeletonDataProvider)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x5f0e5f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(), { "SearchSkeletonDataProvider", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSkeleton::*)()>(&::GlobalNamespace::OVRSkeleton::Start)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5f0e720;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(), { ::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton.ShouldInitialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRSkeleton::*)()>(&::GlobalNamespace::OVRSkeleton::ShouldInitialize)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5f0e7c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(), { "ShouldInitialize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSkeleton::*)()>(&::GlobalNamespace::OVRSkeleton::Initialize)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5f0e27c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(), { "Initialize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton.GetBoneTransform
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::GlobalNamespace::OVRSkeleton::*)(::GlobalNamespace::OVRSkeleton_BoneId)>(
    &::GlobalNamespace::OVRSkeleton::GetBoneTransform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f0f22c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(), { ::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton.InitializeBones
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSkeleton::*)()>(&::GlobalNamespace::OVRSkeleton::InitializeBones)> {
  constexpr static std::size_t size = 0x6e8;
  constexpr static std::size_t addrs = 0x5f0f234;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(), { ::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton.InitializeBindPose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSkeleton::*)()>(&::GlobalNamespace::OVRSkeleton::InitializeBindPose)> {
  constexpr static std::size_t size = 0x76c;
  constexpr static std::size_t addrs = 0x5f10b1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(), { ::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton.InitializeCapsules
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSkeleton::*)()>(&::GlobalNamespace::OVRSkeleton::InitializeCapsules)> {
  constexpr static std::size_t size = 0x98c;
  constexpr static std::size_t addrs = 0x5f0e8a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(), { "InitializeCapsules", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSkeleton::*)()>(&::GlobalNamespace::OVRSkeleton::Update)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f11334;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(), { ::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton.UpdateSkeleton
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSkeleton::*)()>(&::GlobalNamespace::OVRSkeleton::UpdateSkeleton)> {
  constexpr static std::size_t size = 0x5fc;
  constexpr static std::size_t addrs = 0x5f11338;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(), { "UpdateSkeleton", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton.FixedUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSkeleton::*)()>(&::GlobalNamespace::OVRSkeleton::FixedUpdate)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x5f11934;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(), { "FixedUpdate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton.GetCurrentStartBoneId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRSkeleton_BoneId (::GlobalNamespace::OVRSkeleton::*)()>(&::GlobalNamespace::OVRSkeleton::GetCurrentStartBoneId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5f11be4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(), { "GetCurrentStartBoneId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton.GetCurrentEndBoneId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRSkeleton_BoneId (::GlobalNamespace::OVRSkeleton::*)()>(&::GlobalNamespace::OVRSkeleton::GetCurrentEndBoneId)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5f11bf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(), { "GetCurrentEndBoneId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton.GetCurrentMaxSkinnableBoneId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRSkeleton_BoneId (::GlobalNamespace::OVRSkeleton::*)()>(&::GlobalNamespace::OVRSkeleton::GetCurrentMaxSkinnableBoneId)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5f11c18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(), { "GetCurrentMaxSkinnableBoneId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton.GetCurrentNumBones
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::OVRSkeleton::*)()>(&::GlobalNamespace::OVRSkeleton::GetCurrentNumBones)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5f11c3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(), { "GetCurrentNumBones", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton.GetCurrentNumSkinnableBones
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::OVRSkeleton::*)()>(&::GlobalNamespace::OVRSkeleton::GetCurrentNumSkinnableBones)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5f11c7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(), { "GetCurrentNumSkinnableBones", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton.BoneLabelFromBoneId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::GlobalNamespace::OVRSkeleton_SkeletonType, ::GlobalNamespace::OVRSkeleton_BoneId)>(
    &::GlobalNamespace::OVRSkeleton::BoneLabelFromBoneId)> {
  constexpr static std::size_t size = 0x1144;
  constexpr static std::size_t addrs = 0x5f0f9c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(),
                                         { "BoneLabelFromBoneId", {}, { ::i2c::type_of<::GlobalNamespace::OVRSkeleton_SkeletonType>(), ::i2c::type_of<::GlobalNamespace::OVRSkeleton_BoneId>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton.IsBodySkeleton
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::OVRSkeleton_SkeletonType)>(&::GlobalNamespace::OVRSkeleton::IsBodySkeleton)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5f10b0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(), { "IsBodySkeleton", {}, { ::i2c::type_of<::GlobalNamespace::OVRSkeleton_SkeletonType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton.IsHandSkeleton
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::OVRSkeleton_SkeletonType)>(&::GlobalNamespace::OVRSkeleton::IsHandSkeleton)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5f0e890;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(), { "IsHandSkeleton", {}, { ::i2c::type_of<::GlobalNamespace::OVRSkeleton_SkeletonType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSkeleton::*)()>(&::GlobalNamespace::OVRSkeleton::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5f11cbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::OVRSkeleton_SkeletonType& GlobalNamespace::OVRSkeleton::__cordl_internal_get__skeletonType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____skeletonType;
}
constexpr ::GlobalNamespace::OVRSkeleton_SkeletonType const& GlobalNamespace::OVRSkeleton::__cordl_internal_get__skeletonType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____skeletonType;
}
constexpr void GlobalNamespace::OVRSkeleton::__cordl_internal_set__skeletonType(::GlobalNamespace::OVRSkeleton_SkeletonType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____skeletonType = value;
}
constexpr ::GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider*& GlobalNamespace::OVRSkeleton::__cordl_internal_get__dataProvider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dataProvider;
}
constexpr ::GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider* const& GlobalNamespace::OVRSkeleton::__cordl_internal_get__dataProvider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dataProvider;
}
constexpr void GlobalNamespace::OVRSkeleton::__cordl_internal_set__dataProvider(::GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____dataProvider = value;
}
constexpr bool& GlobalNamespace::OVRSkeleton::__cordl_internal_get__updateRootPose() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____updateRootPose;
}
constexpr bool const& GlobalNamespace::OVRSkeleton::__cordl_internal_get__updateRootPose() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____updateRootPose;
}
constexpr void GlobalNamespace::OVRSkeleton::__cordl_internal_set__updateRootPose(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____updateRootPose = value;
}
constexpr bool& GlobalNamespace::OVRSkeleton::__cordl_internal_get__updateRootScale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____updateRootScale;
}
constexpr bool const& GlobalNamespace::OVRSkeleton::__cordl_internal_get__updateRootScale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____updateRootScale;
}
constexpr void GlobalNamespace::OVRSkeleton::__cordl_internal_set__updateRootScale(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____updateRootScale = value;
}
constexpr bool& GlobalNamespace::OVRSkeleton::__cordl_internal_get__enablePhysicsCapsules() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____enablePhysicsCapsules;
}
constexpr bool const& GlobalNamespace::OVRSkeleton::__cordl_internal_get__enablePhysicsCapsules() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____enablePhysicsCapsules;
}
constexpr void GlobalNamespace::OVRSkeleton::__cordl_internal_set__enablePhysicsCapsules(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____enablePhysicsCapsules = value;
}
constexpr bool& GlobalNamespace::OVRSkeleton::__cordl_internal_get__applyBoneTranslations() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____applyBoneTranslations;
}
constexpr bool const& GlobalNamespace::OVRSkeleton::__cordl_internal_get__applyBoneTranslations() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____applyBoneTranslations;
}
constexpr void GlobalNamespace::OVRSkeleton::__cordl_internal_set__applyBoneTranslations(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____applyBoneTranslations = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::OVRSkeleton::__cordl_internal_get__bonesGO() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bonesGO;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::OVRSkeleton::__cordl_internal_get__bonesGO() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bonesGO;
}
constexpr void GlobalNamespace::OVRSkeleton::__cordl_internal_set__bonesGO(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bonesGO = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::OVRSkeleton::__cordl_internal_get__bindPosesGO() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bindPosesGO;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::OVRSkeleton::__cordl_internal_get__bindPosesGO() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bindPosesGO;
}
constexpr void GlobalNamespace::OVRSkeleton::__cordl_internal_set__bindPosesGO(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bindPosesGO = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::OVRSkeleton::__cordl_internal_get__capsulesGO() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____capsulesGO;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::OVRSkeleton::__cordl_internal_get__capsulesGO() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____capsulesGO;
}
constexpr void GlobalNamespace::OVRSkeleton::__cordl_internal_set__capsulesGO(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____capsulesGO = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRBone*>*& GlobalNamespace::OVRSkeleton::__cordl_internal_get__bones() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bones;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRBone*>* const& GlobalNamespace::OVRSkeleton::__cordl_internal_get__bones() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bones;
}
constexpr void GlobalNamespace::OVRSkeleton::__cordl_internal_set__bones(::System::Collections::Generic::List_1<::GlobalNamespace::OVRBone*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bones = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRBone*>*& GlobalNamespace::OVRSkeleton::__cordl_internal_get__bindPoses() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bindPoses;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRBone*>* const& GlobalNamespace::OVRSkeleton::__cordl_internal_get__bindPoses() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bindPoses;
}
constexpr void GlobalNamespace::OVRSkeleton::__cordl_internal_set__bindPoses(::System::Collections::Generic::List_1<::GlobalNamespace::OVRBone*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bindPoses = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRBoneCapsule*>*& GlobalNamespace::OVRSkeleton::__cordl_internal_get__capsules() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____capsules;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRBoneCapsule*>* const& GlobalNamespace::OVRSkeleton::__cordl_internal_get__capsules() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____capsules;
}
constexpr void GlobalNamespace::OVRSkeleton::__cordl_internal_set__capsules(::System::Collections::Generic::List_1<::GlobalNamespace::OVRBoneCapsule*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____capsules = value;
}
constexpr ::GlobalNamespace::OVRPlugin_Skeleton2& GlobalNamespace::OVRSkeleton::__cordl_internal_get__skeleton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____skeleton;
}
constexpr ::GlobalNamespace::OVRPlugin_Skeleton2 const& GlobalNamespace::OVRSkeleton::__cordl_internal_get__skeleton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____skeleton;
}
constexpr void GlobalNamespace::OVRSkeleton::__cordl_internal_set__skeleton(::GlobalNamespace::OVRPlugin_Skeleton2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____skeleton = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::OVRSkeleton::__cordl_internal_get_wristFixupRotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___wristFixupRotation;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::OVRSkeleton::__cordl_internal_get_wristFixupRotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___wristFixupRotation;
}
constexpr void GlobalNamespace::OVRSkeleton::__cordl_internal_set_wristFixupRotation(::UnityEngine::Quaternion value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___wristFixupRotation = value;
}
constexpr bool& GlobalNamespace::OVRSkeleton::__cordl_internal_get__IsInitialized_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsInitialized_k__BackingField;
}
constexpr bool const& GlobalNamespace::OVRSkeleton::__cordl_internal_get__IsInitialized_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsInitialized_k__BackingField;
}
constexpr void GlobalNamespace::OVRSkeleton::__cordl_internal_set__IsInitialized_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____IsInitialized_k__BackingField = value;
}
constexpr bool& GlobalNamespace::OVRSkeleton::__cordl_internal_get__IsDataValid_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsDataValid_k__BackingField;
}
constexpr bool const& GlobalNamespace::OVRSkeleton::__cordl_internal_get__IsDataValid_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsDataValid_k__BackingField;
}
constexpr void GlobalNamespace::OVRSkeleton::__cordl_internal_set__IsDataValid_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____IsDataValid_k__BackingField = value;
}
constexpr bool& GlobalNamespace::OVRSkeleton::__cordl_internal_get__IsDataHighConfidence_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsDataHighConfidence_k__BackingField;
}
constexpr bool const& GlobalNamespace::OVRSkeleton::__cordl_internal_get__IsDataHighConfidence_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsDataHighConfidence_k__BackingField;
}
constexpr void GlobalNamespace::OVRSkeleton::__cordl_internal_set__IsDataHighConfidence_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____IsDataHighConfidence_k__BackingField = value;
}
constexpr ::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBone*>*& GlobalNamespace::OVRSkeleton::__cordl_internal_get__Bones_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Bones_k__BackingField;
}
constexpr ::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBone*>* const& GlobalNamespace::OVRSkeleton::__cordl_internal_get__Bones_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Bones_k__BackingField;
}
constexpr void GlobalNamespace::OVRSkeleton::__cordl_internal_set__Bones_k__BackingField(::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBone*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Bones_k__BackingField = value;
}
constexpr ::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBone*>*& GlobalNamespace::OVRSkeleton::__cordl_internal_get__BindPoses_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____BindPoses_k__BackingField;
}
constexpr ::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBone*>* const& GlobalNamespace::OVRSkeleton::__cordl_internal_get__BindPoses_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____BindPoses_k__BackingField;
}
constexpr void GlobalNamespace::OVRSkeleton::__cordl_internal_set__BindPoses_k__BackingField(::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBone*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____BindPoses_k__BackingField = value;
}
constexpr ::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBoneCapsule*>*& GlobalNamespace::OVRSkeleton::__cordl_internal_get__Capsules_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Capsules_k__BackingField;
}
constexpr ::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBoneCapsule*>* const& GlobalNamespace::OVRSkeleton::__cordl_internal_get__Capsules_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Capsules_k__BackingField;
}
constexpr void GlobalNamespace::OVRSkeleton::__cordl_internal_set__Capsules_k__BackingField(::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBoneCapsule*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Capsules_k__BackingField = value;
}
constexpr int32_t& GlobalNamespace::OVRSkeleton::__cordl_internal_get__SkeletonChangedCount_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____SkeletonChangedCount_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::OVRSkeleton::__cordl_internal_get__SkeletonChangedCount_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____SkeletonChangedCount_k__BackingField;
}
constexpr void GlobalNamespace::OVRSkeleton::__cordl_internal_set__SkeletonChangedCount_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____SkeletonChangedCount_k__BackingField = value;
}
inline bool GlobalNamespace::OVRSkeleton::get_IsInitialized() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(), { "get_IsInitialized", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSkeleton::set_IsInitialized(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(), { "set_IsInitialized", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::OVRSkeleton::get_IsDataValid() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(), { "get_IsDataValid", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSkeleton::set_IsDataValid(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(), { "set_IsDataValid", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::OVRSkeleton::get_IsDataHighConfidence() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(), { "get_IsDataHighConfidence", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSkeleton::set_IsDataHighConfidence(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(), { "set_IsDataHighConfidence", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBone*>* GlobalNamespace::OVRSkeleton::get_Bones() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(), { "get_Bones", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBone*>*>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSkeleton::set_Bones(::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBone*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(), { "set_Bones", {}, { ::i2c::type_of<::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBone*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBone*>* GlobalNamespace::OVRSkeleton::get_BindPoses() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(), { "get_BindPoses", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBone*>*>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSkeleton::set_BindPoses(::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBone*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(), { "set_BindPoses", {}, { ::i2c::type_of<::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBone*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBoneCapsule*>* GlobalNamespace::OVRSkeleton::get_Capsules() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(), { "get_Capsules", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBoneCapsule*>*>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSkeleton::set_Capsules(::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBoneCapsule*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(),
                                                           { "set_Capsules", {}, { ::i2c::type_of<::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBoneCapsule*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::OVRSkeleton_SkeletonType GlobalNamespace::OVRSkeleton::GetSkeletonType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(), { "GetSkeletonType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRSkeleton_SkeletonType>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSkeleton::SetSkeletonType(::GlobalNamespace::OVRSkeleton_SkeletonType type) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type);
}
inline ::GlobalNamespace::OVRPlugin_BodyJointSet GlobalNamespace::OVRSkeleton::GetRequiredBodyJointSet() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(), { "GetRequiredBodyJointSet", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPlugin_BodyJointSet>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRSkeleton::IsValidBone(::GlobalNamespace::OVRSkeleton_BoneId bone) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(), { "IsValidBone", {}, { ::i2c::type_of<::GlobalNamespace::OVRSkeleton_BoneId>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, bone);
}
inline int32_t GlobalNamespace::OVRSkeleton::get_SkeletonChangedCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(), { "get_SkeletonChangedCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSkeleton::set_SkeletonChangedCount(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(), { "set_SkeletonChangedCount", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::OVRSkeleton::Awake() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider* GlobalNamespace::OVRSkeleton::SearchSkeletonDataProvider() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(), { "SearchSkeletonDataProvider", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider*>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSkeleton::Start() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRSkeleton::ShouldInitialize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(), { "ShouldInitialize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSkeleton::Initialize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(), { "Initialize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Transform> GlobalNamespace::OVRSkeleton::GetBoneTransform(::GlobalNamespace::OVRSkeleton_BoneId boneId) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method, boneId);
}
inline void GlobalNamespace::OVRSkeleton::InitializeBones() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSkeleton::InitializeBindPose() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSkeleton::InitializeCapsules() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(), { "InitializeCapsules", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSkeleton::Update() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSkeleton::UpdateSkeleton() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(), { "UpdateSkeleton", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSkeleton::FixedUpdate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(), { "FixedUpdate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton::GetCurrentStartBoneId() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(), { "GetCurrentStartBoneId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRSkeleton_BoneId>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton::GetCurrentEndBoneId() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(), { "GetCurrentEndBoneId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRSkeleton_BoneId>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton::GetCurrentMaxSkinnableBoneId() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(), { "GetCurrentMaxSkinnableBoneId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRSkeleton_BoneId>(this, ___internal_method);
}
inline int32_t GlobalNamespace::OVRSkeleton::GetCurrentNumBones() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(), { "GetCurrentNumBones", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t GlobalNamespace::OVRSkeleton::GetCurrentNumSkinnableBones() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(), { "GetCurrentNumSkinnableBones", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::OVRSkeleton::BoneLabelFromBoneId(::GlobalNamespace::OVRSkeleton_SkeletonType skeletonType, ::GlobalNamespace::OVRSkeleton_BoneId boneId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(),
                                       { "BoneLabelFromBoneId", {}, { ::i2c::type_of<::GlobalNamespace::OVRSkeleton_SkeletonType>(), ::i2c::type_of<::GlobalNamespace::OVRSkeleton_BoneId>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, skeletonType, boneId);
}
inline bool GlobalNamespace::OVRSkeleton::IsBodySkeleton(::GlobalNamespace::OVRSkeleton_SkeletonType type) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(), { "IsBodySkeleton", {}, { ::i2c::type_of<::GlobalNamespace::OVRSkeleton_SkeletonType>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type);
}
inline bool GlobalNamespace::OVRSkeleton::IsHandSkeleton(::GlobalNamespace::OVRSkeleton_SkeletonType type) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(), { "IsHandSkeleton", {}, { ::i2c::type_of<::GlobalNamespace::OVRSkeleton_SkeletonType>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type);
}
inline void GlobalNamespace::OVRSkeleton::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRSkeleton* GlobalNamespace::OVRSkeleton::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRSkeleton*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRSkeleton::OVRSkeleton() {}
