#pragma once
// IWYU pragma private; include "UnityEngine/ModifiableContactPair.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/zzzz__ModifiableContactPair_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/zzzz__ModifiableContactPatch_def.hpp"
#include "UnityEngine/zzzz__ModifiableContact_def.hpp"
#include "UnityEngine/zzzz__ModifiableMassProperties_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::ModifiableContactPair.TranslateTriangleIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::System::IntPtr, uint32_t)>(&::UnityEngine::ModifiableContactPair::TranslateTriangleIndex)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b8c528;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ModifiableContactPair>(),
                                                                                           { "TranslateTriangleIndex", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ModifiableContactPair.ResolveShapeToInstanceID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::ModifiableContactPair::ResolveShapeToInstanceID)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b8c56c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ModifiableContactPair>(), { "ResolveShapeToInstanceID", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ModifiableContactPair.ResolveActorToInstanceID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::ModifiableContactPair::ResolveActorToInstanceID)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b8c5a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ModifiableContactPair>(), { "ResolveActorToInstanceID", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ModifiableContactPair.GetActorLinearVelocity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::System::IntPtr)>(&::UnityEngine::ModifiableContactPair::GetActorLinearVelocity)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6b8c5e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ModifiableContactPair>(), { "GetActorLinearVelocity", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ModifiableContactPair.GetActorAngularVelocity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::System::IntPtr)>(&::UnityEngine::ModifiableContactPair::GetActorAngularVelocity)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6b8c684;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ModifiableContactPair>(), { "GetActorAngularVelocity", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ModifiableContactPair.get_colliderInstanceID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ModifiableContactPair::*)()>(&::UnityEngine::ModifiableContactPair::get_colliderInstanceID)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b8c724;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ModifiableContactPair>(), { "get_colliderInstanceID", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ModifiableContactPair.get_otherColliderInstanceID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ModifiableContactPair::*)()>(&::UnityEngine::ModifiableContactPair::get_otherColliderInstanceID)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b8c760;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ModifiableContactPair>(), { "get_otherColliderInstanceID", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ModifiableContactPair.get_bodyInstanceID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ModifiableContactPair::*)()>(&::UnityEngine::ModifiableContactPair::get_bodyInstanceID)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b8c79c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ModifiableContactPair>(), { "get_bodyInstanceID", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ModifiableContactPair.get_otherBodyInstanceID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ModifiableContactPair::*)()>(&::UnityEngine::ModifiableContactPair::get_otherBodyInstanceID)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b8c7d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ModifiableContactPair>(), { "get_otherBodyInstanceID", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ModifiableContactPair.get_bodyVelocity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::ModifiableContactPair::*)()>(&::UnityEngine::ModifiableContactPair::get_bodyVelocity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b8c814;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ModifiableContactPair>(), { "get_bodyVelocity", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ModifiableContactPair.get_bodyAngularVelocity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::ModifiableContactPair::*)()>(&::UnityEngine::ModifiableContactPair::get_bodyAngularVelocity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b8c81c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ModifiableContactPair>(), { "get_bodyAngularVelocity", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ModifiableContactPair.get_otherBodyVelocity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::ModifiableContactPair::*)()>(&::UnityEngine::ModifiableContactPair::get_otherBodyVelocity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b8c824;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ModifiableContactPair>(), { "get_otherBodyVelocity", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ModifiableContactPair.get_otherBodyAngularVelocity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::ModifiableContactPair::*)()>(&::UnityEngine::ModifiableContactPair::get_otherBodyAngularVelocity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b8c82c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ModifiableContactPair>(), { "get_otherBodyAngularVelocity", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ModifiableContactPair.get_contactCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ModifiableContactPair::*)()>(&::UnityEngine::ModifiableContactPair::get_contactCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b8c834;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ModifiableContactPair>(), { "get_contactCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ModifiableContactPair.get_massProperties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ModifiableMassProperties (::UnityEngine::ModifiableContactPair::*)()>(
    &::UnityEngine::ModifiableContactPair::get_massProperties)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x6b8c83c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ModifiableContactPair>(), { "get_massProperties", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ModifiableContactPair.set_massProperties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ModifiableContactPair::*)(::UnityEngine::ModifiableMassProperties)>(
    &::UnityEngine::ModifiableContactPair::set_massProperties)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6b8c888;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ModifiableContactPair>(), { "set_massProperties", {}, { ::i2c::type_of<::UnityEngine::ModifiableMassProperties>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ModifiableContactPair.GetPoint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::ModifiableContactPair::*)(int32_t)>(&::UnityEngine::ModifiableContactPair::GetPoint)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6b8c8c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ModifiableContactPair>(), { "GetPoint", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ModifiableContactPair.SetPoint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ModifiableContactPair::*)(int32_t, ::UnityEngine::Vector3)>(&::UnityEngine::ModifiableContactPair::SetPoint)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6b8c8fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ModifiableContactPair>(), { "SetPoint", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ModifiableContactPair.GetNormal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::ModifiableContactPair::*)(int32_t)>(&::UnityEngine::ModifiableContactPair::GetNormal)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6b8c920;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ModifiableContactPair>(), { "GetNormal", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ModifiableContactPair.SetNormal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ModifiableContactPair::*)(int32_t, ::UnityEngine::Vector3)>(&::UnityEngine::ModifiableContactPair::SetNormal)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6b8c944;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ModifiableContactPair>(), { "SetNormal", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ModifiableContactPair.GetSeparation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::ModifiableContactPair::*)(int32_t)>(&::UnityEngine::ModifiableContactPair::GetSeparation)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6b8c998;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ModifiableContactPair>(), { "GetSeparation", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ModifiableContactPair.SetSeparation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ModifiableContactPair::*)(int32_t, float_t)>(&::UnityEngine::ModifiableContactPair::SetSeparation)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6b8c9b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ModifiableContactPair>(), { "SetSeparation", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ModifiableContactPair.GetTargetVelocity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::ModifiableContactPair::*)(int32_t)>(&::UnityEngine::ModifiableContactPair::GetTargetVelocity)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6b8c9d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ModifiableContactPair>(), { "GetTargetVelocity", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ModifiableContactPair.SetTargetVelocity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ModifiableContactPair::*)(int32_t, ::UnityEngine::Vector3)>(&::UnityEngine::ModifiableContactPair::SetTargetVelocity)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6b8c9fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ModifiableContactPair>(),
                                                                                           { "SetTargetVelocity", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ModifiableContactPair.GetBounciness
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::ModifiableContactPair::*)(int32_t)>(&::UnityEngine::ModifiableContactPair::GetBounciness)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6b8ca50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ModifiableContactPair>(), { "GetBounciness", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ModifiableContactPair.SetBounciness
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ModifiableContactPair::*)(int32_t, float_t)>(&::UnityEngine::ModifiableContactPair::SetBounciness)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6b8ca70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ModifiableContactPair>(), { "SetBounciness", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ModifiableContactPair.GetStaticFriction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::ModifiableContactPair::*)(int32_t)>(&::UnityEngine::ModifiableContactPair::GetStaticFriction)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6b8cabc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ModifiableContactPair>(), { "GetStaticFriction", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ModifiableContactPair.SetStaticFriction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ModifiableContactPair::*)(int32_t, float_t)>(&::UnityEngine::ModifiableContactPair::SetStaticFriction)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6b8cadc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ModifiableContactPair>(), { "SetStaticFriction", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ModifiableContactPair.GetDynamicFriction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::ModifiableContactPair::*)(int32_t)>(&::UnityEngine::ModifiableContactPair::GetDynamicFriction)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6b8cb28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ModifiableContactPair>(), { "GetDynamicFriction", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ModifiableContactPair.SetDynamicFriction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ModifiableContactPair::*)(int32_t, float_t)>(&::UnityEngine::ModifiableContactPair::SetDynamicFriction)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6b8cb48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ModifiableContactPair>(), { "SetDynamicFriction", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ModifiableContactPair.GetMaxImpulse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::ModifiableContactPair::*)(int32_t)>(&::UnityEngine::ModifiableContactPair::GetMaxImpulse)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6b8cb94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ModifiableContactPair>(), { "GetMaxImpulse", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ModifiableContactPair.SetMaxImpulse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ModifiableContactPair::*)(int32_t, float_t)>(&::UnityEngine::ModifiableContactPair::SetMaxImpulse)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6b8cbb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ModifiableContactPair>(), { "SetMaxImpulse", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ModifiableContactPair.IgnoreContact
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ModifiableContactPair::*)(int32_t)>(&::UnityEngine::ModifiableContactPair::IgnoreContact)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b8cc00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ModifiableContactPair>(), { "IgnoreContact", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ModifiableContactPair.GetFaceIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::UnityEngine::ModifiableContactPair::*)(int32_t)>(&::UnityEngine::ModifiableContactPair::GetFaceIndex)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6b8cc08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ModifiableContactPair>(), { "GetFaceIndex", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ModifiableContactPair.GetContact
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ModifiableContact* (::UnityEngine::ModifiableContactPair::*)(int32_t)>(&::UnityEngine::ModifiableContactPair::GetContact)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6b8c8ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ModifiableContactPair>(), { "GetContact", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ModifiableContactPair.GetContactPatch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ModifiableContactPatch* (::UnityEngine::ModifiableContactPair::*)()>(&::UnityEngine::ModifiableContactPair::GetContactPatch)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6b8c870;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ModifiableContactPair>(), { "GetContactPatch", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ModifiableContactPair.GetActorLinearVelocity_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::ModifiableContactPair::GetActorLinearVelocity_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b8c640;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ModifiableContactPair>(),
                                                             { "GetActorLinearVelocity_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ModifiableContactPair.GetActorAngularVelocity_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::ModifiableContactPair::GetActorAngularVelocity_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b8c6e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ModifiableContactPair>(),
                                                             { "GetActorAngularVelocity_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
    return ___internal_method;
  }
};
inline uint32_t UnityEngine::ModifiableContactPair::TranslateTriangleIndex(::System::IntPtr shapePtr, uint32_t rawIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ModifiableContactPair>(), { "TranslateTriangleIndex", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, shapePtr, rawIndex);
}
inline int32_t UnityEngine::ModifiableContactPair::ResolveShapeToInstanceID(::System::IntPtr shapePtr) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ModifiableContactPair>(), { "ResolveShapeToInstanceID", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, shapePtr);
}
inline int32_t UnityEngine::ModifiableContactPair::ResolveActorToInstanceID(::System::IntPtr actorPtr) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ModifiableContactPair>(), { "ResolveActorToInstanceID", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, actorPtr);
}
inline ::UnityEngine::Vector3 UnityEngine::ModifiableContactPair::GetActorLinearVelocity(::System::IntPtr actorPtr) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ModifiableContactPair>(), { "GetActorLinearVelocity", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, actorPtr);
}
inline ::UnityEngine::Vector3 UnityEngine::ModifiableContactPair::GetActorAngularVelocity(::System::IntPtr actorPtr) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ModifiableContactPair>(), { "GetActorAngularVelocity", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, actorPtr);
}
inline int32_t UnityEngine::ModifiableContactPair::get_colliderInstanceID() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ModifiableContactPair>(), { "get_colliderInstanceID", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t UnityEngine::ModifiableContactPair::get_otherColliderInstanceID() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ModifiableContactPair>(), { "get_otherColliderInstanceID", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t UnityEngine::ModifiableContactPair::get_bodyInstanceID() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ModifiableContactPair>(), { "get_bodyInstanceID", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t UnityEngine::ModifiableContactPair::get_otherBodyInstanceID() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ModifiableContactPair>(), { "get_otherBodyInstanceID", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::UnityEngine::Vector3 UnityEngine::ModifiableContactPair::get_bodyVelocity() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ModifiableContactPair>(), { "get_bodyVelocity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(*this, ___internal_method);
}
inline ::UnityEngine::Vector3 UnityEngine::ModifiableContactPair::get_bodyAngularVelocity() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ModifiableContactPair>(), { "get_bodyAngularVelocity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(*this, ___internal_method);
}
inline ::UnityEngine::Vector3 UnityEngine::ModifiableContactPair::get_otherBodyVelocity() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ModifiableContactPair>(), { "get_otherBodyVelocity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(*this, ___internal_method);
}
inline ::UnityEngine::Vector3 UnityEngine::ModifiableContactPair::get_otherBodyAngularVelocity() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ModifiableContactPair>(), { "get_otherBodyAngularVelocity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(*this, ___internal_method);
}
inline int32_t UnityEngine::ModifiableContactPair::get_contactCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ModifiableContactPair>(), { "get_contactCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::UnityEngine::ModifiableMassProperties UnityEngine::ModifiableContactPair::get_massProperties() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ModifiableContactPair>(), { "get_massProperties", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ModifiableMassProperties>(*this, ___internal_method);
}
inline void UnityEngine::ModifiableContactPair::set_massProperties(::UnityEngine::ModifiableMassProperties value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ModifiableContactPair>(), { "set_massProperties", {}, { ::i2c::type_of<::UnityEngine::ModifiableMassProperties>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 UnityEngine::ModifiableContactPair::GetPoint(int32_t i) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ModifiableContactPair>(), { "GetPoint", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(*this, ___internal_method, i);
}
inline void UnityEngine::ModifiableContactPair::SetPoint(int32_t i, ::UnityEngine::Vector3 v) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ModifiableContactPair>(), { "SetPoint", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, i, v);
}
inline ::UnityEngine::Vector3 UnityEngine::ModifiableContactPair::GetNormal(int32_t i) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ModifiableContactPair>(), { "GetNormal", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(*this, ___internal_method, i);
}
inline void UnityEngine::ModifiableContactPair::SetNormal(int32_t i, ::UnityEngine::Vector3 normal) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ModifiableContactPair>(), { "SetNormal", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, i, normal);
}
inline float_t UnityEngine::ModifiableContactPair::GetSeparation(int32_t i) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ModifiableContactPair>(), { "GetSeparation", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method, i);
}
inline void UnityEngine::ModifiableContactPair::SetSeparation(int32_t i, float_t separation) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ModifiableContactPair>(), { "SetSeparation", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, i, separation);
}
inline ::UnityEngine::Vector3 UnityEngine::ModifiableContactPair::GetTargetVelocity(int32_t i) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ModifiableContactPair>(), { "GetTargetVelocity", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(*this, ___internal_method, i);
}
inline void UnityEngine::ModifiableContactPair::SetTargetVelocity(int32_t i, ::UnityEngine::Vector3 velocity) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ModifiableContactPair>(), { "SetTargetVelocity", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, i, velocity);
}
inline float_t UnityEngine::ModifiableContactPair::GetBounciness(int32_t i) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ModifiableContactPair>(), { "GetBounciness", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method, i);
}
inline void UnityEngine::ModifiableContactPair::SetBounciness(int32_t i, float_t bounciness) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ModifiableContactPair>(), { "SetBounciness", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, i, bounciness);
}
inline float_t UnityEngine::ModifiableContactPair::GetStaticFriction(int32_t i) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ModifiableContactPair>(), { "GetStaticFriction", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method, i);
}
inline void UnityEngine::ModifiableContactPair::SetStaticFriction(int32_t i, float_t staticFriction) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ModifiableContactPair>(), { "SetStaticFriction", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, i, staticFriction);
}
inline float_t UnityEngine::ModifiableContactPair::GetDynamicFriction(int32_t i) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ModifiableContactPair>(), { "GetDynamicFriction", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method, i);
}
inline void UnityEngine::ModifiableContactPair::SetDynamicFriction(int32_t i, float_t dynamicFriction) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ModifiableContactPair>(), { "SetDynamicFriction", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, i, dynamicFriction);
}
inline float_t UnityEngine::ModifiableContactPair::GetMaxImpulse(int32_t i) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ModifiableContactPair>(), { "GetMaxImpulse", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method, i);
}
inline void UnityEngine::ModifiableContactPair::SetMaxImpulse(int32_t i, float_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ModifiableContactPair>(), { "SetMaxImpulse", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, i, value);
}
inline void UnityEngine::ModifiableContactPair::IgnoreContact(int32_t i) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ModifiableContactPair>(), { "IgnoreContact", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, i);
}
inline uint32_t UnityEngine::ModifiableContactPair::GetFaceIndex(int32_t i) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ModifiableContactPair>(), { "GetFaceIndex", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method, i);
}
inline ::UnityEngine::ModifiableContact* UnityEngine::ModifiableContactPair::GetContact(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ModifiableContactPair>(), { "GetContact", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ModifiableContact*>(*this, ___internal_method, index);
}
inline ::UnityEngine::ModifiableContactPatch* UnityEngine::ModifiableContactPair::GetContactPatch() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ModifiableContactPair>(), { "GetContactPatch", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ModifiableContactPatch*>(*this, ___internal_method);
}
inline void UnityEngine::ModifiableContactPair::GetActorLinearVelocity_Injected(::System::IntPtr actorPtr, ::by_ref<::UnityEngine::Vector3> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ModifiableContactPair>(),
                                                           { "GetActorLinearVelocity_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, actorPtr, ret);
}
inline void UnityEngine::ModifiableContactPair::GetActorAngularVelocity_Injected(::System::IntPtr actorPtr, ::by_ref<::UnityEngine::Vector3> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ModifiableContactPair>(),
                                                           { "GetActorAngularVelocity_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, actorPtr, ret);
}
// Ctor Parameters [CppParam { name: "actor", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "otherActor", ty: "::System::IntPtr", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "shape", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "otherShape", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "rotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: Some("{}") }, CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "otherRotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: Some("{}") }, CppParam { name: "otherPosition", ty: "::UnityEngine::Vector3", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "numContacts", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "contacts", ty: "::System::IntPtr", modifiers: "", def_value:
// Some("{}") }]
constexpr ::UnityEngine::ModifiableContactPair::ModifiableContactPair(::System::IntPtr actor, ::System::IntPtr otherActor, ::System::IntPtr shape, ::System::IntPtr otherShape,
                                                                      ::UnityEngine::Quaternion rotation, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion otherRotation,
                                                                      ::UnityEngine::Vector3 otherPosition, int32_t numContacts, ::System::IntPtr contacts) noexcept {
  this->actor = actor;
  this->otherActor = otherActor;
  this->shape = shape;
  this->otherShape = otherShape;
  this->rotation = rotation;
  this->position = position;
  this->otherRotation = otherRotation;
  this->otherPosition = otherPosition;
  this->numContacts = numContacts;
  this->contacts = contacts;
}
// Ctor Parameters []
constexpr ::UnityEngine::ModifiableContactPair::ModifiableContactPair() {}
