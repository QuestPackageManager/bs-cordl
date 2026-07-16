#pragma once
// IWYU pragma private; include "UnityEngine/XR/XRNodeState.hpp"
#include "UnityEngine/XR/zzzz__AvailableTrackingData_impl.hpp"
#include "UnityEngine/XR/zzzz__XRNode_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/XR/zzzz__XRNodeState_def.hpp"
#include "UnityEngine/XR/zzzz__AvailableTrackingData_def.hpp"
#include "UnityEngine/XR/zzzz__XRNode_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::XRNodeState.set_uniqueID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::XRNodeState::*)(uint64_t)>(&::UnityEngine::XR::XRNodeState::set_uniqueID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e338e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::XRNodeState>(), { "set_uniqueID", {}, { ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::XRNodeState.get_nodeType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::XRNode (::UnityEngine::XR::XRNodeState::*)()>(&::UnityEngine::XR::XRNodeState::get_nodeType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e33bc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::XRNodeState>(), { "get_nodeType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::XRNodeState.set_nodeType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::XRNodeState::*)(::UnityEngine::XR::XRNode)>(&::UnityEngine::XR::XRNodeState::set_nodeType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e338ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::XRNodeState>(), { "set_nodeType", {}, { ::i2c::type_of<::UnityEngine::XR::XRNode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::XRNodeState.set_tracked
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::XRNodeState::*)(bool)>(&::UnityEngine::XR::XRNodeState::set_tracked)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6e338f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::XRNodeState>(), { "set_tracked", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::XRNodeState.TryGetPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::XRNodeState::*)(::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::XR::XRNodeState::TryGetPosition)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6e33bd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::XRNodeState>(), { "TryGetPosition", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::XRNodeState.TryGetRotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::XRNodeState::*)(::by_ref<::UnityEngine::Quaternion>)>(&::UnityEngine::XR::XRNodeState::TryGetRotation)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6e33c60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::XRNodeState>(), { "TryGetRotation", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::XRNodeState.TryGetVelocity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::XRNodeState::*)(::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::XR::XRNodeState::TryGetVelocity)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6e33cf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::XRNodeState>(), { "TryGetVelocity", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::XRNodeState.TryGetAngularVelocity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::XRNodeState::*)(::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::XR::XRNodeState::TryGetAngularVelocity)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6e33d04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::XRNodeState>(), { "TryGetAngularVelocity", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::XRNodeState.TryGetAcceleration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::XRNodeState::*)(::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::XR::XRNodeState::TryGetAcceleration)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6e33d18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::XRNodeState>(), { "TryGetAcceleration", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::XRNodeState.TryGetAngularAcceleration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::XRNodeState::*)(::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::XR::XRNodeState::TryGetAngularAcceleration)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6e33d2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::XRNodeState>(), { "TryGetAngularAcceleration", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::XRNodeState.TryGet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::XRNodeState::*)(::UnityEngine::Vector3, ::UnityEngine::XR::AvailableTrackingData, ::by_ref<::UnityEngine::Vector3>)>(
    &::UnityEngine::XR::XRNodeState::TryGet)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6e33be4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::XR::XRNodeState>(),
            { "TryGet", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::XR::AvailableTrackingData>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::XRNodeState.TryGet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::XRNodeState::*)(::UnityEngine::Quaternion, ::UnityEngine::XR::AvailableTrackingData,
                                                                                                ::by_ref<::UnityEngine::Quaternion>)>(&::UnityEngine::XR::XRNodeState::TryGet)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6e33c74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::XR::XRNodeState>(),
            { "TryGet", {}, { ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::XR::AvailableTrackingData>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::XRNodeState::set_uniqueID(uint64_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::XRNodeState>(), { "set_uniqueID", {}, { ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::XR::XRNode UnityEngine::XR::XRNodeState::get_nodeType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::XRNodeState>(), { "get_nodeType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::XRNode>(*this, ___internal_method);
}
inline void UnityEngine::XR::XRNodeState::set_nodeType(::UnityEngine::XR::XRNode value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::XRNodeState>(), { "set_nodeType", {}, { ::i2c::type_of<::UnityEngine::XR::XRNode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::XR::XRNodeState::set_tracked(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::XRNodeState>(), { "set_tracked", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool UnityEngine::XR::XRNodeState::TryGetPosition(::by_ref<::UnityEngine::Vector3> position) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::XRNodeState>(), { "TryGetPosition", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, position);
}
inline bool UnityEngine::XR::XRNodeState::TryGetRotation(::by_ref<::UnityEngine::Quaternion> rotation) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::XRNodeState>(), { "TryGetRotation", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, rotation);
}
inline bool UnityEngine::XR::XRNodeState::TryGetVelocity(::by_ref<::UnityEngine::Vector3> velocity) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::XRNodeState>(), { "TryGetVelocity", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, velocity);
}
inline bool UnityEngine::XR::XRNodeState::TryGetAngularVelocity(::by_ref<::UnityEngine::Vector3> angularVelocity) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::XRNodeState>(), { "TryGetAngularVelocity", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, angularVelocity);
}
inline bool UnityEngine::XR::XRNodeState::TryGetAcceleration(::by_ref<::UnityEngine::Vector3> acceleration) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::XRNodeState>(), { "TryGetAcceleration", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, acceleration);
}
inline bool UnityEngine::XR::XRNodeState::TryGetAngularAcceleration(::by_ref<::UnityEngine::Vector3> angularAcceleration) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::XRNodeState>(), { "TryGetAngularAcceleration", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, angularAcceleration);
}
inline bool UnityEngine::XR::XRNodeState::TryGet(::UnityEngine::Vector3 inValue, ::UnityEngine::XR::AvailableTrackingData availabilityFlag, ::by_ref<::UnityEngine::Vector3> outValue) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::XR::XRNodeState>(),
          { "TryGet", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::XR::AvailableTrackingData>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, inValue, availabilityFlag, outValue);
}
inline bool UnityEngine::XR::XRNodeState::TryGet(::UnityEngine::Quaternion inValue, ::UnityEngine::XR::AvailableTrackingData availabilityFlag, ::by_ref<::UnityEngine::Quaternion> outValue) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::XR::XRNodeState>(),
          { "TryGet", {}, { ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::XR::AvailableTrackingData>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, inValue, availabilityFlag, outValue);
}
// Ctor Parameters [CppParam { name: "m_Type", ty: "::UnityEngine::XR::XRNode", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_AvailableFields", ty:
// "::UnityEngine::XR::AvailableTrackingData", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "m_Rotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Velocity", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") },
// CppParam { name: "m_AngularVelocity", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Acceleration", ty: "::UnityEngine::Vector3", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "m_AngularAcceleration", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Tracked", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "m_UniqueID", ty: "uint64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::XRNodeState::XRNodeState(::UnityEngine::XR::XRNode m_Type, ::UnityEngine::XR::AvailableTrackingData m_AvailableFields, ::UnityEngine::Vector3 m_Position,
                                                      ::UnityEngine::Quaternion m_Rotation, ::UnityEngine::Vector3 m_Velocity, ::UnityEngine::Vector3 m_AngularVelocity,
                                                      ::UnityEngine::Vector3 m_Acceleration, ::UnityEngine::Vector3 m_AngularAcceleration, int32_t m_Tracked, uint64_t m_UniqueID) noexcept {
  this->m_Type = m_Type;
  this->m_AvailableFields = m_AvailableFields;
  this->m_Position = m_Position;
  this->m_Rotation = m_Rotation;
  this->m_Velocity = m_Velocity;
  this->m_AngularVelocity = m_AngularVelocity;
  this->m_Acceleration = m_Acceleration;
  this->m_AngularAcceleration = m_AngularAcceleration;
  this->m_Tracked = m_Tracked;
  this->m_UniqueID = m_UniqueID;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::XRNodeState::XRNodeState() {}
