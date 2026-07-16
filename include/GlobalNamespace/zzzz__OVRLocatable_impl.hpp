#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRLocatable.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__OVRLocatable_def.hpp"
#include "GlobalNamespace/zzzz__IOVRAnchorComponent_1_def.hpp"
#include "GlobalNamespace/zzzz__OVRAnchor_def.hpp"
#include "GlobalNamespace/zzzz__OVRLocatable_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_def.hpp"
#include "GlobalNamespace/zzzz__OVRTask_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Jobs/zzzz__IJobFor_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
#include "UnityEngine/Jobs/zzzz__IJobParallelForTransform_def.hpp"
#include "UnityEngine/Jobs/zzzz__TransformAccessArray_def.hpp"
#include "UnityEngine/Jobs/zzzz__TransformAccess_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRLocatable_TrackingSpacePose.get_Position
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::UnityEngine::Vector3> (::GlobalNamespace::OVRLocatable_TrackingSpacePose::*)()>(
    &::GlobalNamespace::OVRLocatable_TrackingSpacePose::get_Position)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e0e088;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRLocatable_TrackingSpacePose>(), { "get_Position", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRLocatable_TrackingSpacePose.get_Rotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::UnityEngine::Quaternion> (::GlobalNamespace::OVRLocatable_TrackingSpacePose::*)()>(
    &::GlobalNamespace::OVRLocatable_TrackingSpacePose::get_Rotation)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e0e094;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRLocatable_TrackingSpacePose>(), { "get_Rotation", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRLocatable_TrackingSpacePose.get_IsPositionTracked
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRLocatable_TrackingSpacePose::*)()>(&::GlobalNamespace::OVRLocatable_TrackingSpacePose::get_IsPositionTracked)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5e0e0a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRLocatable_TrackingSpacePose>(), { "get_IsPositionTracked", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRLocatable_TrackingSpacePose.get_IsRotationTracked
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRLocatable_TrackingSpacePose::*)()>(&::GlobalNamespace::OVRLocatable_TrackingSpacePose::get_IsRotationTracked)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5e0e104;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRLocatable_TrackingSpacePose>(), { "get_IsRotationTracked", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRLocatable_TrackingSpacePose._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRLocatable_TrackingSpacePose::*)(
    ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::GlobalNamespace::OVRPlugin_SpaceLocationFlags)>(&::GlobalNamespace::OVRLocatable_TrackingSpacePose::_ctor)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x5e0cd3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::OVRLocatable_TrackingSpacePose>(),
            { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::GlobalNamespace::OVRPlugin_SpaceLocationFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRLocatable_TrackingSpacePose.ComputeWorldPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::UnityEngine::Vector3> (::GlobalNamespace::OVRLocatable_TrackingSpacePose::*)(::UnityEngine::Camera*)>(
    &::GlobalNamespace::OVRLocatable_TrackingSpacePose::ComputeWorldPosition)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x5e0e160;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRLocatable_TrackingSpacePose>(), { "ComputeWorldPosition", {}, { ::i2c::type_of<::UnityEngine::Camera*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRLocatable_TrackingSpacePose.ComputeWorldRotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::UnityEngine::Quaternion> (::GlobalNamespace::OVRLocatable_TrackingSpacePose::*)(::UnityEngine::Camera*)>(
    &::GlobalNamespace::OVRLocatable_TrackingSpacePose::ComputeWorldRotation)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x5e0e9ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRLocatable_TrackingSpacePose>(), { "ComputeWorldRotation", {}, { ::i2c::type_of<::UnityEngine::Camera*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRLocatable_TrackingSpacePose.ComputeWorldPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::UnityEngine::Vector3> (::GlobalNamespace::OVRLocatable_TrackingSpacePose::*)(::UnityEngine::Transform*)>(
    &::GlobalNamespace::OVRLocatable_TrackingSpacePose::ComputeWorldPosition)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x5e0ecb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRLocatable_TrackingSpacePose>(), { "ComputeWorldPosition", {}, { ::i2c::type_of<::UnityEngine::Transform*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRLocatable_TrackingSpacePose.ComputeWorldRotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::UnityEngine::Quaternion> (::GlobalNamespace::OVRLocatable_TrackingSpacePose::*)(::UnityEngine::Transform*)>(
    &::GlobalNamespace::OVRLocatable_TrackingSpacePose::ComputeWorldRotation)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x5e0ee04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRLocatable_TrackingSpacePose>(), { "ComputeWorldRotation", {}, { ::i2c::type_of<::UnityEngine::Transform*>() } })));
    return ___internal_method;
  }
};
inline ::System::Nullable_1<::UnityEngine::Vector3> GlobalNamespace::OVRLocatable_TrackingSpacePose::get_Position() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRLocatable_TrackingSpacePose>(), { "get_Position", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::UnityEngine::Vector3>>(*this, ___internal_method);
}
inline ::System::Nullable_1<::UnityEngine::Quaternion> GlobalNamespace::OVRLocatable_TrackingSpacePose::get_Rotation() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRLocatable_TrackingSpacePose>(), { "get_Rotation", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::UnityEngine::Quaternion>>(*this, ___internal_method);
}
inline bool GlobalNamespace::OVRLocatable_TrackingSpacePose::get_IsPositionTracked() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRLocatable_TrackingSpacePose>(), { "get_IsPositionTracked", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool GlobalNamespace::OVRLocatable_TrackingSpacePose::get_IsRotationTracked() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRLocatable_TrackingSpacePose>(), { "get_IsRotationTracked", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRLocatable_TrackingSpacePose::_ctor(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::GlobalNamespace::OVRPlugin_SpaceLocationFlags flags) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::GlobalNamespace::OVRLocatable_TrackingSpacePose>(),
                       { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::GlobalNamespace::OVRPlugin_SpaceLocationFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position, rotation, flags);
}
inline ::System::Nullable_1<::UnityEngine::Vector3> GlobalNamespace::OVRLocatable_TrackingSpacePose::ComputeWorldPosition(::UnityEngine::Camera* camera) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRLocatable_TrackingSpacePose>(), { "ComputeWorldPosition", {}, { ::i2c::type_of<::UnityEngine::Camera*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::UnityEngine::Vector3>>(*this, ___internal_method, camera);
}
inline ::System::Nullable_1<::UnityEngine::Quaternion> GlobalNamespace::OVRLocatable_TrackingSpacePose::ComputeWorldRotation(::UnityEngine::Camera* camera) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRLocatable_TrackingSpacePose>(), { "ComputeWorldRotation", {}, { ::i2c::type_of<::UnityEngine::Camera*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::UnityEngine::Quaternion>>(*this, ___internal_method, camera);
}
inline ::System::Nullable_1<::UnityEngine::Vector3> GlobalNamespace::OVRLocatable_TrackingSpacePose::ComputeWorldPosition(::UnityEngine::Transform* trackingSpaceToWorldSpaceTransform) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRLocatable_TrackingSpacePose>(), { "ComputeWorldPosition", {}, { ::i2c::type_of<::UnityEngine::Transform*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::UnityEngine::Vector3>>(*this, ___internal_method, trackingSpaceToWorldSpaceTransform);
}
inline ::System::Nullable_1<::UnityEngine::Quaternion> GlobalNamespace::OVRLocatable_TrackingSpacePose::ComputeWorldRotation(::UnityEngine::Transform* trackingSpaceToWorldSpaceTransform) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRLocatable_TrackingSpacePose>(), { "ComputeWorldRotation", {}, { ::i2c::type_of<::UnityEngine::Transform*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::UnityEngine::Quaternion>>(*this, ___internal_method, trackingSpaceToWorldSpaceTransform);
}
// Ctor Parameters [CppParam { name: "_Position_k__BackingField", ty: "::System::Nullable_1<::UnityEngine::Vector3>", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "_Rotation_k__BackingField", ty: "::System::Nullable_1<::UnityEngine::Quaternion>", modifiers: "", def_value: Some("{}") }, CppParam { name: "Flags", ty:
// "::GlobalNamespace::OVRPlugin_SpaceLocationFlags", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRLocatable_TrackingSpacePose::OVRLocatable_TrackingSpacePose(::System::Nullable_1<::UnityEngine::Vector3> _Position_k__BackingField,
                                                                                            ::System::Nullable_1<::UnityEngine::Quaternion> _Rotation_k__BackingField,
                                                                                            ::GlobalNamespace::OVRPlugin_SpaceLocationFlags Flags) noexcept {
  this->_Position_k__BackingField = _Position_k__BackingField;
  this->_Rotation_k__BackingField = _Rotation_k__BackingField;
  this->Flags = Flags;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRLocatable_TrackingSpacePose::OVRLocatable_TrackingSpacePose() {}
//  Writing Method size for method: ::GlobalNamespace::OVRLocatable.IOVRAnchorComponent_OVRLocatable__get_Type
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRPlugin_SpaceComponentType (::GlobalNamespace::OVRLocatable::*)()>(
    &::GlobalNamespace::OVRLocatable::IOVRAnchorComponent_OVRLocatable__get_Type)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5e0c358;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRLocatable>(), { "IOVRAnchorComponent<OVRLocatable>.get_Type", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRLocatable.IOVRAnchorComponent_OVRLocatable__get_Handle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::GlobalNamespace::OVRLocatable::*)()>(&::GlobalNamespace::OVRLocatable::IOVRAnchorComponent_OVRLocatable__get_Handle)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5e0c3b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRLocatable>(), { "IOVRAnchorComponent<OVRLocatable>.get_Handle", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRLocatable.IOVRAnchorComponent_OVRLocatable__FromAnchor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRLocatable (::GlobalNamespace::OVRLocatable::*)(::GlobalNamespace::OVRAnchor)>(
    &::GlobalNamespace::OVRLocatable::IOVRAnchorComponent_OVRLocatable__FromAnchor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5e0c40c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRLocatable>(), { "IOVRAnchorComponent<OVRLocatable>.FromAnchor", {}, { ::i2c::type_of<::GlobalNamespace::OVRAnchor>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRLocatable.get_IsNull
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRLocatable::*)()>(&::GlobalNamespace::OVRLocatable::get_IsNull)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5e0c4a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRLocatable>(), { "get_IsNull", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRLocatable.get_IsEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRLocatable::*)()>(&::GlobalNamespace::OVRLocatable::get_IsEnabled)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5e0c504;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRLocatable>(), { "get_IsEnabled", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRLocatable.SetEnabledAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<bool> (::GlobalNamespace::OVRLocatable::*)(bool, double_t)>(&::GlobalNamespace::OVRLocatable::SetEnabledAsync)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x5e0c5ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRLocatable>(), { "SetEnabledAsync", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRLocatable.SetEnabledSafeAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<bool> (::GlobalNamespace::OVRLocatable::*)(bool, double_t)>(
    &::GlobalNamespace::OVRLocatable::SetEnabledSafeAsync)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5e0c888;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRLocatable>(), { "SetEnabledSafeAsync", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRLocatable.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRLocatable::*)(::GlobalNamespace::OVRLocatable)>(&::GlobalNamespace::OVRLocatable::Equals)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e0c900;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRLocatable>(), { "Equals", {}, { ::i2c::type_of<::GlobalNamespace::OVRLocatable>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRLocatable.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::OVRLocatable, ::GlobalNamespace::OVRLocatable)>(&::GlobalNamespace::OVRLocatable::op_Equality)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5e0c96c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRLocatable>(),
                                                             { "op_Equality", {}, { ::i2c::type_of<::GlobalNamespace::OVRLocatable>(), ::i2c::type_of<::GlobalNamespace::OVRLocatable>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRLocatable.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::OVRLocatable, ::GlobalNamespace::OVRLocatable)>(&::GlobalNamespace::OVRLocatable::op_Inequality)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5e0c9dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRLocatable>(),
                                                             { "op_Inequality", {}, { ::i2c::type_of<::GlobalNamespace::OVRLocatable>(), ::i2c::type_of<::GlobalNamespace::OVRLocatable>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRLocatable.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRLocatable::*)(::System::Object*)>(&::GlobalNamespace::OVRLocatable::Equals)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5e0ca50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRLocatable>(), { ::i2c::class_of<::GlobalNamespace::OVRLocatable>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRLocatable.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::OVRLocatable::*)()>(&::GlobalNamespace::OVRLocatable::GetHashCode)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5e0cae0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRLocatable>(), { ::i2c::class_of<::GlobalNamespace::OVRLocatable>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRLocatable.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::OVRLocatable::*)()>(&::GlobalNamespace::OVRLocatable::ToString)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5e0cb48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRLocatable>(), { ::i2c::class_of<::GlobalNamespace::OVRLocatable>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRLocatable.get_Type
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRPlugin_SpaceComponentType (::GlobalNamespace::OVRLocatable::*)()>(&::GlobalNamespace::OVRLocatable::get_Type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e0c3ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRLocatable>(), { "get_Type", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRLocatable.get_Handle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::GlobalNamespace::OVRLocatable::*)()>(&::GlobalNamespace::OVRLocatable::get_Handle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e0cc08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRLocatable>(), { "get_Handle", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRLocatable._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRLocatable::*)(::GlobalNamespace::OVRAnchor)>(&::GlobalNamespace::OVRLocatable::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5e0c43c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRLocatable>(), { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::OVRAnchor>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRLocatable.TryGetSceneAnchorPose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRLocatable::*)(::by_ref<::GlobalNamespace::OVRLocatable_TrackingSpacePose>)>(
    &::GlobalNamespace::OVRLocatable::TryGetSceneAnchorPose)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x5e0cc10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRLocatable>(), { "TryGetSceneAnchorPose", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::OVRLocatable_TrackingSpacePose>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRLocatable.TryGetSpatialAnchorPose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRLocatable::*)(::by_ref<::GlobalNamespace::OVRLocatable_TrackingSpacePose>)>(
    &::GlobalNamespace::OVRLocatable::TryGetSpatialAnchorPose)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x5e0ceac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRLocatable>(), { "TryGetSpatialAnchorPose", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::OVRLocatable_TrackingSpacePose>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRLocatable.ScheduleUpdateTransforms
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Jobs::JobHandle (*)(::Unity::Collections::NativeArray_1<::GlobalNamespace::OVRLocatable>, ::UnityEngine::Jobs::TransformAccessArray,
                                                                                    ::UnityEngine::Transform*, ::Unity::Collections::NativeArray_1<::GlobalNamespace::OVRLocatable_TrackingSpacePose>,
                                                                                    ::Unity::Jobs::JobHandle)>(&::GlobalNamespace::OVRLocatable::ScheduleUpdateTransforms)> {
  constexpr static std::size_t size = 0x5e0;
  constexpr static std::size_t addrs = 0x5e0cfdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRLocatable>(),
                                         { "ScheduleUpdateTransforms",
                                           {},
                                           { ::i2c::type_of<::Unity::Collections::NativeArray_1<::GlobalNamespace::OVRLocatable>>(), ::i2c::type_of<::UnityEngine::Jobs::TransformAccessArray>(),
                                             ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::GlobalNamespace::OVRLocatable_TrackingSpacePose>>(),
                                             ::i2c::type_of<::Unity::Jobs::JobHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRLocatable.UpdateSceneAnchorTransforms
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(
    ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::OVRAnchor, ::UnityW<::UnityEngine::Transform>>>*, ::UnityEngine::Transform*,
    ::System::Collections::Generic::List_1<::GlobalNamespace::OVRLocatable_TrackingSpacePose>*)>(&::GlobalNamespace::OVRLocatable::UpdateSceneAnchorTransforms)> {
  constexpr static std::size_t size = 0xa34;
  constexpr static std::size_t addrs = 0x5e0d5bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::OVRLocatable>(),
            { "UpdateSceneAnchorTransforms",
              {},
              { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::OVRAnchor, ::UnityW<::UnityEngine::Transform>>>*>(),
                ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::OVRLocatable_TrackingSpacePose>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRLocatable._UpdateSceneAnchorTransforms_g__GetLocatableOrDefault_34_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRLocatable (*)(::GlobalNamespace::OVRAnchor)>(
    &::GlobalNamespace::OVRLocatable::_UpdateSceneAnchorTransforms_g__GetLocatableOrDefault_34_0)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5e0dff0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRLocatable>(),
                                                             { "<UpdateSceneAnchorTransforms>g__GetLocatableOrDefault|34_0", {}, { ::i2c::type_of<::GlobalNamespace::OVRAnchor>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRLocatable::setStaticF_Null(::GlobalNamespace::OVRLocatable value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::OVRLocatable, "Null", ::GlobalNamespace::OVRLocatable>(std::forward<::GlobalNamespace::OVRLocatable>(value));
}
inline ::GlobalNamespace::OVRLocatable GlobalNamespace::OVRLocatable::getStaticF_Null() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::OVRLocatable, "Null", ::GlobalNamespace::OVRLocatable>();
}
inline ::GlobalNamespace::OVRPlugin_SpaceComponentType GlobalNamespace::OVRLocatable::IOVRAnchorComponent_OVRLocatable__get_Type() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRLocatable>(), { "IOVRAnchorComponent<OVRLocatable>.get_Type", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPlugin_SpaceComponentType>(*this, ___internal_method);
}
inline uint64_t GlobalNamespace::OVRLocatable::IOVRAnchorComponent_OVRLocatable__get_Handle() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRLocatable>(), { "IOVRAnchorComponent<OVRLocatable>.get_Handle", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(*this, ___internal_method);
}
inline ::GlobalNamespace::OVRLocatable GlobalNamespace::OVRLocatable::IOVRAnchorComponent_OVRLocatable__FromAnchor(::GlobalNamespace::OVRAnchor anchor) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRLocatable>(),
                                                                                         { "IOVRAnchorComponent<OVRLocatable>.FromAnchor", {}, { ::i2c::type_of<::GlobalNamespace::OVRAnchor>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRLocatable>(*this, ___internal_method, anchor);
}
inline bool GlobalNamespace::OVRLocatable::get_IsNull() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRLocatable>(), { "get_IsNull", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool GlobalNamespace::OVRLocatable::get_IsEnabled() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRLocatable>(), { "get_IsEnabled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::GlobalNamespace::OVRTask_1<bool> GlobalNamespace::OVRLocatable::SetEnabledAsync(bool enabled, double_t timeout) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRLocatable>(), { "SetEnabledAsync", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<bool>>(*this, ___internal_method, enabled, timeout);
}
inline ::GlobalNamespace::OVRTask_1<bool> GlobalNamespace::OVRLocatable::SetEnabledSafeAsync(bool enabled, double_t timeout) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRLocatable>(), { "SetEnabledSafeAsync", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<bool>>(*this, ___internal_method, enabled, timeout);
}
inline bool GlobalNamespace::OVRLocatable::Equals(::GlobalNamespace::OVRLocatable other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRLocatable>(), { "Equals", {}, { ::i2c::type_of<::GlobalNamespace::OVRLocatable>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool GlobalNamespace::OVRLocatable::op_Equality(::GlobalNamespace::OVRLocatable lhs, ::GlobalNamespace::OVRLocatable rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRLocatable>(),
                                                           { "op_Equality", {}, { ::i2c::type_of<::GlobalNamespace::OVRLocatable>(), ::i2c::type_of<::GlobalNamespace::OVRLocatable>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lhs, rhs);
}
inline bool GlobalNamespace::OVRLocatable::op_Inequality(::GlobalNamespace::OVRLocatable lhs, ::GlobalNamespace::OVRLocatable rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRLocatable>(),
                                                           { "op_Inequality", {}, { ::i2c::type_of<::GlobalNamespace::OVRLocatable>(), ::i2c::type_of<::GlobalNamespace::OVRLocatable>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lhs, rhs);
}
inline bool GlobalNamespace::OVRLocatable::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OVRLocatable>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t GlobalNamespace::OVRLocatable::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OVRLocatable>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::StringW GlobalNamespace::OVRLocatable::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OVRLocatable>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::GlobalNamespace::OVRPlugin_SpaceComponentType GlobalNamespace::OVRLocatable::get_Type() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRLocatable>(), { "get_Type", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPlugin_SpaceComponentType>(*this, ___internal_method);
}
inline uint64_t GlobalNamespace::OVRLocatable::get_Handle() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRLocatable>(), { "get_Handle", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRLocatable::_ctor(::GlobalNamespace::OVRAnchor anchor) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRLocatable>(), { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::OVRAnchor>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, anchor);
}
inline bool GlobalNamespace::OVRLocatable::TryGetSceneAnchorPose(::by_ref<::GlobalNamespace::OVRLocatable_TrackingSpacePose> pose) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRLocatable>(), { "TryGetSceneAnchorPose", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::OVRLocatable_TrackingSpacePose>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, pose);
}
inline bool GlobalNamespace::OVRLocatable::TryGetSpatialAnchorPose(::by_ref<::GlobalNamespace::OVRLocatable_TrackingSpacePose> pose) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRLocatable>(), { "TryGetSpatialAnchorPose", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::OVRLocatable_TrackingSpacePose>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, pose);
}
inline ::Unity::Jobs::JobHandle GlobalNamespace::OVRLocatable::ScheduleUpdateTransforms(::Unity::Collections::NativeArray_1<::GlobalNamespace::OVRLocatable> locatables,
                                                                                        ::UnityEngine::Jobs::TransformAccessArray transforms,
                                                                                        ::UnityEngine::Transform* trackingSpaceToWorldSpaceTransform,
                                                                                        ::Unity::Collections::NativeArray_1<::GlobalNamespace::OVRLocatable_TrackingSpacePose> posesOut,
                                                                                        ::Unity::Jobs::JobHandle inputDeps) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRLocatable>(),
                                              { "ScheduleUpdateTransforms",
                                                {},
                                                { ::i2c::type_of<::Unity::Collections::NativeArray_1<::GlobalNamespace::OVRLocatable>>(), ::i2c::type_of<::UnityEngine::Jobs::TransformAccessArray>(),
                                                  ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::GlobalNamespace::OVRLocatable_TrackingSpacePose>>(),
                                                  ::i2c::type_of<::Unity::Jobs::JobHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle>(nullptr, ___internal_method, locatables, transforms, trackingSpaceToWorldSpaceTransform, posesOut, inputDeps);
}
inline void GlobalNamespace::OVRLocatable::UpdateSceneAnchorTransforms(
    ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::OVRAnchor, ::UnityW<::UnityEngine::Transform>>>* anchors,
    ::UnityEngine::Transform* trackingSpaceToWorldSpaceTransform, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRLocatable_TrackingSpacePose>* trackingSpacePoses) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::OVRLocatable>(),
          { "UpdateSceneAnchorTransforms",
            {},
            { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::OVRAnchor, ::UnityW<::UnityEngine::Transform>>>*>(),
              ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::OVRLocatable_TrackingSpacePose>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, anchors, trackingSpaceToWorldSpaceTransform, trackingSpacePoses);
}
inline ::GlobalNamespace::OVRLocatable GlobalNamespace::OVRLocatable::_UpdateSceneAnchorTransforms_g__GetLocatableOrDefault_34_0(::GlobalNamespace::OVRAnchor anchor) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRLocatable>(),
                                                           { "<UpdateSceneAnchorTransforms>g__GetLocatableOrDefault|34_0", {}, { ::i2c::type_of<::GlobalNamespace::OVRAnchor>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRLocatable>(nullptr, ___internal_method, anchor);
}
/// @brief Convert operator to "::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRLocatable>"
constexpr GlobalNamespace::OVRLocatable::operator ::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRLocatable>*() {
  return static_cast<::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRLocatable>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRLocatable>"
constexpr ::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRLocatable>* GlobalNamespace::OVRLocatable::i___GlobalNamespace__IOVRAnchorComponent_1___GlobalNamespace__OVRLocatable_() {
  return static_cast<::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRLocatable>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::OVRLocatable>"
constexpr GlobalNamespace::OVRLocatable::operator ::System::IEquatable_1<::GlobalNamespace::OVRLocatable>*() {
  return static_cast<::System::IEquatable_1<::GlobalNamespace::OVRLocatable>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::OVRLocatable>"
constexpr ::System::IEquatable_1<::GlobalNamespace::OVRLocatable>* GlobalNamespace::OVRLocatable::i___System__IEquatable_1___GlobalNamespace__OVRLocatable_() {
  return static_cast<::System::IEquatable_1<::GlobalNamespace::OVRLocatable>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_Handle_k__BackingField", ty: "uint64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRLocatable::OVRLocatable(uint64_t _Handle_k__BackingField) noexcept {
  this->_Handle_k__BackingField = _Handle_k__BackingField;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRLocatable::OVRLocatable() {}
//  Writing Method size for method: ::GlobalNamespace::OVRLocatable_GetSceneAnchorPosesJob.Unity_Jobs_IJobFor_Execute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRLocatable_GetSceneAnchorPosesJob::*)(int32_t)>(
    &::GlobalNamespace::OVRLocatable_GetSceneAnchorPosesJob::Unity_Jobs_IJobFor_Execute)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5e0efe8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRLocatable_GetSceneAnchorPosesJob>(), { "Unity.Jobs.IJobFor.Execute", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRLocatable_GetSceneAnchorPosesJob::Unity_Jobs_IJobFor_Execute(int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRLocatable_GetSceneAnchorPosesJob>(), { "Unity.Jobs.IJobFor.Execute", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index);
}
/// @brief Convert operator to "::Unity::Jobs::IJobFor"
constexpr GlobalNamespace::OVRLocatable_GetSceneAnchorPosesJob::operator ::Unity::Jobs::IJobFor*() {
  return static_cast<::Unity::Jobs::IJobFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJobFor"
constexpr ::Unity::Jobs::IJobFor* GlobalNamespace::OVRLocatable_GetSceneAnchorPosesJob::i___Unity__Jobs__IJobFor() {
  return static_cast<::Unity::Jobs::IJobFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Locatables", ty: "::Unity::Collections::NativeArray_1<::GlobalNamespace::OVRLocatable>", modifiers: "", def_value: Some("{}") }, CppParam { name: "Poses", ty:
// "::Unity::Collections::NativeArray_1<::GlobalNamespace::OVRLocatable_TrackingSpacePose>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRLocatable_GetSceneAnchorPosesJob::OVRLocatable_GetSceneAnchorPosesJob(
    ::Unity::Collections::NativeArray_1<::GlobalNamespace::OVRLocatable> Locatables, ::Unity::Collections::NativeArray_1<::GlobalNamespace::OVRLocatable_TrackingSpacePose> Poses) noexcept {
  this->Locatables = Locatables;
  this->Poses = Poses;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRLocatable_GetSceneAnchorPosesJob::OVRLocatable_GetSceneAnchorPosesJob() {}
//  Writing Method size for method: ::GlobalNamespace::OVRLocatable_GetSpatialAnchorPosesJob.Unity_Jobs_IJobFor_Execute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRLocatable_GetSpatialAnchorPosesJob::*)(int32_t)>(
    &::GlobalNamespace::OVRLocatable_GetSpatialAnchorPosesJob::Unity_Jobs_IJobFor_Execute)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5e0f0d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRLocatable_GetSpatialAnchorPosesJob>(), { "Unity.Jobs.IJobFor.Execute", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRLocatable_GetSpatialAnchorPosesJob::Unity_Jobs_IJobFor_Execute(int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRLocatable_GetSpatialAnchorPosesJob>(), { "Unity.Jobs.IJobFor.Execute", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index);
}
/// @brief Convert operator to "::Unity::Jobs::IJobFor"
constexpr GlobalNamespace::OVRLocatable_GetSpatialAnchorPosesJob::operator ::Unity::Jobs::IJobFor*() {
  return static_cast<::Unity::Jobs::IJobFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJobFor"
constexpr ::Unity::Jobs::IJobFor* GlobalNamespace::OVRLocatable_GetSpatialAnchorPosesJob::i___Unity__Jobs__IJobFor() {
  return static_cast<::Unity::Jobs::IJobFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Locatables", ty: "::Unity::Collections::NativeArray_1<::GlobalNamespace::OVRLocatable>", modifiers: "", def_value: Some("{}") }, CppParam { name: "Poses", ty:
// "::Unity::Collections::NativeArray_1<::GlobalNamespace::OVRLocatable_TrackingSpacePose>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRLocatable_GetSpatialAnchorPosesJob::OVRLocatable_GetSpatialAnchorPosesJob(
    ::Unity::Collections::NativeArray_1<::GlobalNamespace::OVRLocatable> Locatables, ::Unity::Collections::NativeArray_1<::GlobalNamespace::OVRLocatable_TrackingSpacePose> Poses) noexcept {
  this->Locatables = Locatables;
  this->Poses = Poses;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRLocatable_GetSpatialAnchorPosesJob::OVRLocatable_GetSpatialAnchorPosesJob() {}
//  Writing Method size for method: ::GlobalNamespace::OVRLocatable_TransformPosesJob.Unity_Jobs_IJobFor_Execute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRLocatable_TransformPosesJob::*)(int32_t)>(
    &::GlobalNamespace::OVRLocatable_TransformPosesJob::Unity_Jobs_IJobFor_Execute)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x5e0f1c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRLocatable_TransformPosesJob>(), { "Unity.Jobs.IJobFor.Execute", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRLocatable_TransformPosesJob::Unity_Jobs_IJobFor_Execute(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRLocatable_TransformPosesJob>(), { "Unity.Jobs.IJobFor.Execute", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index);
}
/// @brief Convert operator to "::Unity::Jobs::IJobFor"
constexpr GlobalNamespace::OVRLocatable_TransformPosesJob::operator ::Unity::Jobs::IJobFor*() {
  return static_cast<::Unity::Jobs::IJobFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJobFor"
constexpr ::Unity::Jobs::IJobFor* GlobalNamespace::OVRLocatable_TransformPosesJob::i___Unity__Jobs__IJobFor() {
  return static_cast<::Unity::Jobs::IJobFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Poses", ty: "::Unity::Collections::NativeArray_1<::GlobalNamespace::OVRLocatable_TrackingSpacePose>", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "Transform", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: Some("{}") }, CppParam { name: "Rotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRLocatable_TransformPosesJob::OVRLocatable_TransformPosesJob(::Unity::Collections::NativeArray_1<::GlobalNamespace::OVRLocatable_TrackingSpacePose> Poses,
                                                                                            ::UnityEngine::Matrix4x4 Transform, ::UnityEngine::Quaternion Rotation) noexcept {
  this->Poses = Poses;
  this->Transform = Transform;
  this->Rotation = Rotation;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRLocatable_TransformPosesJob::OVRLocatable_TransformPosesJob() {}
//  Writing Method size for method: ::GlobalNamespace::OVRLocatable_SetWorldSpaceTransformsJob.UnityEngine_Jobs_IJobParallelForTransform_Execute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRLocatable_SetWorldSpaceTransformsJob::*)(int32_t, ::UnityEngine::Jobs::TransformAccess)>(
    &::GlobalNamespace::OVRLocatable_SetWorldSpaceTransformsJob::UnityEngine_Jobs_IJobParallelForTransform_Execute)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x5e0f44c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRLocatable_SetWorldSpaceTransformsJob>(),
                                                { "UnityEngine.Jobs.IJobParallelForTransform.Execute", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Jobs::TransformAccess>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRLocatable_SetWorldSpaceTransformsJob::UnityEngine_Jobs_IJobParallelForTransform_Execute(int32_t index, ::UnityEngine::Jobs::TransformAccess transform) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRLocatable_SetWorldSpaceTransformsJob>(),
                                              { "UnityEngine.Jobs.IJobParallelForTransform.Execute", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Jobs::TransformAccess>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index, transform);
}
/// @brief Convert operator to "::UnityEngine::Jobs::IJobParallelForTransform"
constexpr GlobalNamespace::OVRLocatable_SetWorldSpaceTransformsJob::operator ::UnityEngine::Jobs::IJobParallelForTransform*() {
  return static_cast<::UnityEngine::Jobs::IJobParallelForTransform*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::UnityEngine::Jobs::IJobParallelForTransform"
constexpr ::UnityEngine::Jobs::IJobParallelForTransform* GlobalNamespace::OVRLocatable_SetWorldSpaceTransformsJob::i___UnityEngine__Jobs__IJobParallelForTransform() {
  return static_cast<::UnityEngine::Jobs::IJobParallelForTransform*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Poses", ty: "::Unity::Collections::NativeArray_1<::GlobalNamespace::OVRLocatable_TrackingSpacePose>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRLocatable_SetWorldSpaceTransformsJob::OVRLocatable_SetWorldSpaceTransformsJob(
    ::Unity::Collections::NativeArray_1<::GlobalNamespace::OVRLocatable_TrackingSpacePose> Poses) noexcept {
  this->Poses = Poses;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRLocatable_SetWorldSpaceTransformsJob::OVRLocatable_SetWorldSpaceTransformsJob() {}
//  Writing Method size for method: ::GlobalNamespace::OVRLocatable_SetLocalSpaceTransformsJob.Execute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRLocatable_SetLocalSpaceTransformsJob::*)(int32_t, ::UnityEngine::Jobs::TransformAccess)>(
    &::GlobalNamespace::OVRLocatable_SetLocalSpaceTransformsJob::Execute)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x5e0f594;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRLocatable_SetLocalSpaceTransformsJob>(),
                                                                                           { "Execute", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Jobs::TransformAccess>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRLocatable_SetLocalSpaceTransformsJob::Execute(int32_t index, ::UnityEngine::Jobs::TransformAccess transform) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRLocatable_SetLocalSpaceTransformsJob>(),
                                                                                         { "Execute", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Jobs::TransformAccess>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index, transform);
}
/// @brief Convert operator to "::UnityEngine::Jobs::IJobParallelForTransform"
constexpr GlobalNamespace::OVRLocatable_SetLocalSpaceTransformsJob::operator ::UnityEngine::Jobs::IJobParallelForTransform*() {
  return static_cast<::UnityEngine::Jobs::IJobParallelForTransform*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::UnityEngine::Jobs::IJobParallelForTransform"
constexpr ::UnityEngine::Jobs::IJobParallelForTransform* GlobalNamespace::OVRLocatable_SetLocalSpaceTransformsJob::i___UnityEngine__Jobs__IJobParallelForTransform() {
  return static_cast<::UnityEngine::Jobs::IJobParallelForTransform*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Poses", ty: "::Unity::Collections::NativeArray_1<::GlobalNamespace::OVRLocatable_TrackingSpacePose>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRLocatable_SetLocalSpaceTransformsJob::OVRLocatable_SetLocalSpaceTransformsJob(
    ::Unity::Collections::NativeArray_1<::GlobalNamespace::OVRLocatable_TrackingSpacePose> Poses) noexcept {
  this->Poses = Poses;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRLocatable_SetLocalSpaceTransformsJob::OVRLocatable_SetLocalSpaceTransformsJob() {}
//  Writing Method size for method: ::GlobalNamespace::OVRLocatable_CopyPosesJob.Execute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRLocatable_CopyPosesJob::*)(int32_t)>(&::GlobalNamespace::OVRLocatable_CopyPosesJob::Execute)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5e0f6dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRLocatable_CopyPosesJob>(), { "Execute", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRLocatable_CopyPosesJob::Execute(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRLocatable_CopyPosesJob>(), { "Execute", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index);
}
/// @brief Convert operator to "::Unity::Jobs::IJobFor"
constexpr GlobalNamespace::OVRLocatable_CopyPosesJob::operator ::Unity::Jobs::IJobFor*() {
  return static_cast<::Unity::Jobs::IJobFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJobFor"
constexpr ::Unity::Jobs::IJobFor* GlobalNamespace::OVRLocatable_CopyPosesJob::i___Unity__Jobs__IJobFor() {
  return static_cast<::Unity::Jobs::IJobFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "PosesIn", ty: "::Unity::Collections::NativeArray_1<::GlobalNamespace::OVRLocatable_TrackingSpacePose>", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "PosesOut", ty: "::Unity::Collections::NativeArray_1<::GlobalNamespace::OVRLocatable_TrackingSpacePose>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRLocatable_CopyPosesJob::OVRLocatable_CopyPosesJob(::Unity::Collections::NativeArray_1<::GlobalNamespace::OVRLocatable_TrackingSpacePose> PosesIn,
                                                                                  ::Unity::Collections::NativeArray_1<::GlobalNamespace::OVRLocatable_TrackingSpacePose> PosesOut) noexcept {
  this->PosesIn = PosesIn;
  this->PosesOut = PosesOut;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRLocatable_CopyPosesJob::OVRLocatable_CopyPosesJob() {}
