#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "RootMotion/FinalIK/zzzz__InteractionTrigger_def.hpp"
#include "RootMotion/FinalIK/zzzz__FullBodyBipedEffector_def.hpp"
#include "RootMotion/FinalIK/zzzz__InteractionObject_def.hpp"
#include "RootMotion/FinalIK/zzzz__InteractionTrigger_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__RaycastHit_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::RootMotion::FinalIK::__InteractionTrigger__CharacterPosition.get_offset3D
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::RootMotion::FinalIK::__InteractionTrigger__CharacterPosition::*)()>(
    &::RootMotion::FinalIK::__InteractionTrigger__CharacterPosition::get_offset3D)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x138f00c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__InteractionTrigger__CharacterPosition*>::get(), "get_offset3D",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__InteractionTrigger__CharacterPosition.get_direction3D
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::RootMotion::FinalIK::__InteractionTrigger__CharacterPosition::*)()>(
    &::RootMotion::FinalIK::__InteractionTrigger__CharacterPosition::get_direction3D)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x138f018;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__InteractionTrigger__CharacterPosition*>::get(), "get_direction3D",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__InteractionTrigger__CharacterPosition.IsInRange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::RootMotion::FinalIK::__InteractionTrigger__CharacterPosition::*)(
    ::UnityEngine::Transform*, ::UnityEngine::Transform*, ByRef<float_t>)>(&::RootMotion::FinalIK::__InteractionTrigger__CharacterPosition::IsInRange)> {
  constexpr static std::size_t size = 0x764;
  constexpr static std::size_t addrs = 0x138f0d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__InteractionTrigger__CharacterPosition*>::get(), "IsInRange", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__InteractionTrigger__CharacterPosition._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__InteractionTrigger__CharacterPosition::*)()>(
    &::RootMotion::FinalIK::__InteractionTrigger__CharacterPosition::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x138f83c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__InteractionTrigger__CharacterPosition*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr bool& RootMotion::FinalIK::__InteractionTrigger__CharacterPosition::__cordl_internal_get_use() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___use;
}
constexpr bool const& RootMotion::FinalIK::__InteractionTrigger__CharacterPosition::__cordl_internal_get_use() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___use;
}
constexpr void RootMotion::FinalIK::__InteractionTrigger__CharacterPosition::__cordl_internal_set_use(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___use = value;
}
constexpr ::UnityEngine::Vector2& RootMotion::FinalIK::__InteractionTrigger__CharacterPosition::__cordl_internal_get_offset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___offset;
}
constexpr ::UnityEngine::Vector2 const& RootMotion::FinalIK::__InteractionTrigger__CharacterPosition::__cordl_internal_get_offset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___offset;
}
constexpr void RootMotion::FinalIK::__InteractionTrigger__CharacterPosition::__cordl_internal_set_offset(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___offset = value;
}
constexpr float_t& RootMotion::FinalIK::__InteractionTrigger__CharacterPosition::__cordl_internal_get_angleOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___angleOffset;
}
constexpr float_t const& RootMotion::FinalIK::__InteractionTrigger__CharacterPosition::__cordl_internal_get_angleOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___angleOffset;
}
constexpr void RootMotion::FinalIK::__InteractionTrigger__CharacterPosition::__cordl_internal_set_angleOffset(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___angleOffset = value;
}
constexpr float_t& RootMotion::FinalIK::__InteractionTrigger__CharacterPosition::__cordl_internal_get_maxAngle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxAngle;
}
constexpr float_t const& RootMotion::FinalIK::__InteractionTrigger__CharacterPosition::__cordl_internal_get_maxAngle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxAngle;
}
constexpr void RootMotion::FinalIK::__InteractionTrigger__CharacterPosition::__cordl_internal_set_maxAngle(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maxAngle = value;
}
constexpr float_t& RootMotion::FinalIK::__InteractionTrigger__CharacterPosition::__cordl_internal_get_radius() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___radius;
}
constexpr float_t const& RootMotion::FinalIK::__InteractionTrigger__CharacterPosition::__cordl_internal_get_radius() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___radius;
}
constexpr void RootMotion::FinalIK::__InteractionTrigger__CharacterPosition::__cordl_internal_set_radius(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___radius = value;
}
constexpr bool& RootMotion::FinalIK::__InteractionTrigger__CharacterPosition::__cordl_internal_get_orbit() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___orbit;
}
constexpr bool const& RootMotion::FinalIK::__InteractionTrigger__CharacterPosition::__cordl_internal_get_orbit() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___orbit;
}
constexpr void RootMotion::FinalIK::__InteractionTrigger__CharacterPosition::__cordl_internal_set_orbit(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___orbit = value;
}
constexpr bool& RootMotion::FinalIK::__InteractionTrigger__CharacterPosition::__cordl_internal_get_fixYAxis() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fixYAxis;
}
constexpr bool const& RootMotion::FinalIK::__InteractionTrigger__CharacterPosition::__cordl_internal_get_fixYAxis() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fixYAxis;
}
constexpr void RootMotion::FinalIK::__InteractionTrigger__CharacterPosition::__cordl_internal_set_fixYAxis(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___fixYAxis = value;
}
inline ::UnityEngine::Vector3 RootMotion::FinalIK::__InteractionTrigger__CharacterPosition::get_offset3D() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__InteractionTrigger__CharacterPosition*>::get(), "get_offset3D",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 RootMotion::FinalIK::__InteractionTrigger__CharacterPosition::get_direction3D() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__InteractionTrigger__CharacterPosition*>::get(), "get_direction3D",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method);
}
inline bool RootMotion::FinalIK::__InteractionTrigger__CharacterPosition::IsInRange(::UnityEngine::Transform* character, ::UnityEngine::Transform* trigger, ByRef<float_t> error) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__InteractionTrigger__CharacterPosition*>::get(), "IsInRange", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, character, trigger, error);
}
inline ::RootMotion::FinalIK::__InteractionTrigger__CharacterPosition* RootMotion::FinalIK::__InteractionTrigger__CharacterPosition::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::RootMotion::FinalIK::__InteractionTrigger__CharacterPosition*>());
}
inline void RootMotion::FinalIK::__InteractionTrigger__CharacterPosition::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__InteractionTrigger__CharacterPosition*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::RootMotion::FinalIK::__InteractionTrigger__CharacterPosition::__InteractionTrigger__CharacterPosition() {}
//  Writing Method size for method: ::RootMotion::FinalIK::__InteractionTrigger__CameraPosition.GetRotation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (::RootMotion::FinalIK::__InteractionTrigger__CameraPosition::*)()>(
    &::RootMotion::FinalIK::__InteractionTrigger__CameraPosition::GetRotation)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x138f850;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__InteractionTrigger__CameraPosition*>::get(), "GetRotation",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__InteractionTrigger__CameraPosition.IsInRange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::RootMotion::FinalIK::__InteractionTrigger__CameraPosition::*)(
    ::UnityEngine::Transform*, ::UnityEngine::RaycastHit, ::UnityEngine::Transform*, ByRef<float_t>)>(&::RootMotion::FinalIK::__InteractionTrigger__CameraPosition::IsInRange)> {
  constexpr static std::size_t size = 0x308;
  constexpr static std::size_t addrs = 0x138f9c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__InteractionTrigger__CameraPosition*>::get(), "IsInRange", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RaycastHit>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__InteractionTrigger__CameraPosition._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__InteractionTrigger__CameraPosition::*)()>(
    &::RootMotion::FinalIK::__InteractionTrigger__CameraPosition::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x138fcd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__InteractionTrigger__CameraPosition*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Collider>& RootMotion::FinalIK::__InteractionTrigger__CameraPosition::__cordl_internal_get_lookAtTarget() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lookAtTarget;
}
constexpr ::UnityW<::UnityEngine::Collider> const& RootMotion::FinalIK::__InteractionTrigger__CameraPosition::__cordl_internal_get_lookAtTarget() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lookAtTarget;
}
constexpr void RootMotion::FinalIK::__InteractionTrigger__CameraPosition::__cordl_internal_set_lookAtTarget(::UnityW<::UnityEngine::Collider> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___lookAtTarget)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::__InteractionTrigger__CameraPosition::__cordl_internal_get_direction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___direction;
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::__InteractionTrigger__CameraPosition::__cordl_internal_get_direction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___direction;
}
constexpr void RootMotion::FinalIK::__InteractionTrigger__CameraPosition::__cordl_internal_set_direction(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___direction = value;
}
constexpr float_t& RootMotion::FinalIK::__InteractionTrigger__CameraPosition::__cordl_internal_get_maxDistance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxDistance;
}
constexpr float_t const& RootMotion::FinalIK::__InteractionTrigger__CameraPosition::__cordl_internal_get_maxDistance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxDistance;
}
constexpr void RootMotion::FinalIK::__InteractionTrigger__CameraPosition::__cordl_internal_set_maxDistance(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maxDistance = value;
}
constexpr float_t& RootMotion::FinalIK::__InteractionTrigger__CameraPosition::__cordl_internal_get_maxAngle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxAngle;
}
constexpr float_t const& RootMotion::FinalIK::__InteractionTrigger__CameraPosition::__cordl_internal_get_maxAngle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxAngle;
}
constexpr void RootMotion::FinalIK::__InteractionTrigger__CameraPosition::__cordl_internal_set_maxAngle(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maxAngle = value;
}
constexpr bool& RootMotion::FinalIK::__InteractionTrigger__CameraPosition::__cordl_internal_get_fixYAxis() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fixYAxis;
}
constexpr bool const& RootMotion::FinalIK::__InteractionTrigger__CameraPosition::__cordl_internal_get_fixYAxis() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fixYAxis;
}
constexpr void RootMotion::FinalIK::__InteractionTrigger__CameraPosition::__cordl_internal_set_fixYAxis(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___fixYAxis = value;
}
inline ::UnityEngine::Quaternion RootMotion::FinalIK::__InteractionTrigger__CameraPosition::GetRotation() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__InteractionTrigger__CameraPosition*>::get(), "GetRotation",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion, false>(this, ___internal_method);
}
inline bool RootMotion::FinalIK::__InteractionTrigger__CameraPosition::IsInRange(::UnityEngine::Transform* raycastFrom, ::UnityEngine::RaycastHit hit, ::UnityEngine::Transform* trigger,
                                                                                 ByRef<float_t> error) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__InteractionTrigger__CameraPosition*>::get(), "IsInRange", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RaycastHit>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, raycastFrom, hit, trigger, error);
}
inline ::RootMotion::FinalIK::__InteractionTrigger__CameraPosition* RootMotion::FinalIK::__InteractionTrigger__CameraPosition::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::RootMotion::FinalIK::__InteractionTrigger__CameraPosition*>());
}
inline void RootMotion::FinalIK::__InteractionTrigger__CameraPosition::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__InteractionTrigger__CameraPosition*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::RootMotion::FinalIK::__InteractionTrigger__CameraPosition::__InteractionTrigger__CameraPosition() {}
//  Writing Method size for method: ::GlobalNamespace::__InteractionTrigger__Range__Interaction._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__InteractionTrigger__Range__Interaction::*)()>(
    &::GlobalNamespace::__InteractionTrigger__Range__Interaction::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x138fd54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InteractionTrigger__Range__Interaction*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::RootMotion::FinalIK::InteractionObject>& GlobalNamespace::__InteractionTrigger__Range__Interaction::__cordl_internal_get_interactionObject() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___interactionObject;
}
constexpr ::UnityW<::RootMotion::FinalIK::InteractionObject> const& GlobalNamespace::__InteractionTrigger__Range__Interaction::__cordl_internal_get_interactionObject() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___interactionObject;
}
constexpr void GlobalNamespace::__InteractionTrigger__Range__Interaction::__cordl_internal_set_interactionObject(::UnityW<::RootMotion::FinalIK::InteractionObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___interactionObject)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::RootMotion::FinalIK::FullBodyBipedEffector, ::Array<::RootMotion::FinalIK::FullBodyBipedEffector>*>&
GlobalNamespace::__InteractionTrigger__Range__Interaction::__cordl_internal_get_effectors() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___effectors;
}
constexpr ::ArrayW<::RootMotion::FinalIK::FullBodyBipedEffector, ::Array<::RootMotion::FinalIK::FullBodyBipedEffector>*> const&
GlobalNamespace::__InteractionTrigger__Range__Interaction::__cordl_internal_get_effectors() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___effectors;
}
constexpr void GlobalNamespace::__InteractionTrigger__Range__Interaction::__cordl_internal_set_effectors(
    ::ArrayW<::RootMotion::FinalIK::FullBodyBipedEffector, ::Array<::RootMotion::FinalIK::FullBodyBipedEffector>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___effectors)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__InteractionTrigger__Range__Interaction* GlobalNamespace::__InteractionTrigger__Range__Interaction::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__InteractionTrigger__Range__Interaction*>());
}
inline void GlobalNamespace::__InteractionTrigger__Range__Interaction::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InteractionTrigger__Range__Interaction*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__InteractionTrigger__Range__Interaction::__InteractionTrigger__Range__Interaction() {}
//  Writing Method size for method: ::RootMotion::FinalIK::__InteractionTrigger__Range.IsInRange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::RootMotion::FinalIK::__InteractionTrigger__Range::*)(
    ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::RaycastHit, ::UnityEngine::Transform*, ByRef<float_t>)>(&::RootMotion::FinalIK::__InteractionTrigger__Range::IsInRange)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x138ef04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__InteractionTrigger__Range*>::get(), "IsInRange", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RaycastHit>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__InteractionTrigger__Range._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__InteractionTrigger__Range::*)()>(
    &::RootMotion::FinalIK::__InteractionTrigger__Range::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x138fd44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__InteractionTrigger__Range*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& RootMotion::FinalIK::__InteractionTrigger__Range::__cordl_internal_get_name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___name;
}
constexpr ::StringW const& RootMotion::FinalIK::__InteractionTrigger__Range::__cordl_internal_get_name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___name;
}
constexpr void RootMotion::FinalIK::__InteractionTrigger__Range::__cordl_internal_set_name(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___name)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& RootMotion::FinalIK::__InteractionTrigger__Range::__cordl_internal_get_show() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___show;
}
constexpr bool const& RootMotion::FinalIK::__InteractionTrigger__Range::__cordl_internal_get_show() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___show;
}
constexpr void RootMotion::FinalIK::__InteractionTrigger__Range::__cordl_internal_set_show(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___show = value;
}
constexpr ::RootMotion::FinalIK::__InteractionTrigger__CharacterPosition*& RootMotion::FinalIK::__InteractionTrigger__Range::__cordl_internal_get_characterPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___characterPosition;
}
constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::__InteractionTrigger__CharacterPosition*> const&
RootMotion::FinalIK::__InteractionTrigger__Range::__cordl_internal_get_characterPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___characterPosition;
}
constexpr void RootMotion::FinalIK::__InteractionTrigger__Range::__cordl_internal_set_characterPosition(::RootMotion::FinalIK::__InteractionTrigger__CharacterPosition* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___characterPosition)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::RootMotion::FinalIK::__InteractionTrigger__CameraPosition*& RootMotion::FinalIK::__InteractionTrigger__Range::__cordl_internal_get_cameraPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cameraPosition;
}
constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::__InteractionTrigger__CameraPosition*> const&
RootMotion::FinalIK::__InteractionTrigger__Range::__cordl_internal_get_cameraPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cameraPosition;
}
constexpr void RootMotion::FinalIK::__InteractionTrigger__Range::__cordl_internal_set_cameraPosition(::RootMotion::FinalIK::__InteractionTrigger__CameraPosition* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___cameraPosition)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::GlobalNamespace::__InteractionTrigger__Range__Interaction*, ::Array<::GlobalNamespace::__InteractionTrigger__Range__Interaction*>*>&
RootMotion::FinalIK::__InteractionTrigger__Range::__cordl_internal_get_interactions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___interactions;
}
constexpr ::ArrayW<::GlobalNamespace::__InteractionTrigger__Range__Interaction*, ::Array<::GlobalNamespace::__InteractionTrigger__Range__Interaction*>*> const&
RootMotion::FinalIK::__InteractionTrigger__Range::__cordl_internal_get_interactions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___interactions;
}
constexpr void RootMotion::FinalIK::__InteractionTrigger__Range::__cordl_internal_set_interactions(
    ::ArrayW<::GlobalNamespace::__InteractionTrigger__Range__Interaction*, ::Array<::GlobalNamespace::__InteractionTrigger__Range__Interaction*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___interactions)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline bool RootMotion::FinalIK::__InteractionTrigger__Range::IsInRange(::UnityEngine::Transform* character, ::UnityEngine::Transform* raycastFrom, ::UnityEngine::RaycastHit raycastHit,
                                                                        ::UnityEngine::Transform* trigger, ByRef<float_t> maxError) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__InteractionTrigger__Range*>::get(), "IsInRange", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RaycastHit>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, character, raycastFrom, raycastHit, trigger, maxError);
}
inline ::RootMotion::FinalIK::__InteractionTrigger__Range* RootMotion::FinalIK::__InteractionTrigger__Range::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::RootMotion::FinalIK::__InteractionTrigger__Range*>());
}
inline void RootMotion::FinalIK::__InteractionTrigger__Range::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__InteractionTrigger__Range*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::RootMotion::FinalIK::__InteractionTrigger__Range::__InteractionTrigger__Range() {}
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionTrigger.OpenUserManual
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::InteractionTrigger::*)()>(&::RootMotion::FinalIK::InteractionTrigger::OpenUserManual)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x138edac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionTrigger*>::get(),
                                                                               "OpenUserManual", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionTrigger.OpenScriptReference
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::InteractionTrigger::*)()>(
    &::RootMotion::FinalIK::InteractionTrigger::OpenScriptReference)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x138edf0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionTrigger*>::get(),
                                                                               "OpenScriptReference", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionTrigger.OpenTutorial4
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::InteractionTrigger::*)()>(&::RootMotion::FinalIK::InteractionTrigger::OpenTutorial4)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x138ee34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionTrigger*>::get(),
                                                                               "OpenTutorial4", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionTrigger.SupportGroup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::InteractionTrigger::*)()>(&::RootMotion::FinalIK::InteractionTrigger::SupportGroup)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x138ee78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionTrigger*>::get(),
                                                                               "SupportGroup", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionTrigger.ASThread
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::InteractionTrigger::*)()>(&::RootMotion::FinalIK::InteractionTrigger::ASThread)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x138eebc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionTrigger*>::get(), "ASThread",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionTrigger.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::InteractionTrigger::*)()>(&::RootMotion::FinalIK::InteractionTrigger::Start)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x138ef00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionTrigger*>::get(), "Start",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionTrigger.GetBestRangeIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::RootMotion::FinalIK::InteractionTrigger::*)(
    ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::RaycastHit)>(&::RootMotion::FinalIK::InteractionTrigger::GetBestRangeIndex)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x138d844;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionTrigger*>::get(), "GetBestRangeIndex", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RaycastHit>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::InteractionTrigger._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::InteractionTrigger::*)()>(&::RootMotion::FinalIK::InteractionTrigger::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x138efb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionTrigger*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::RootMotion::FinalIK::__InteractionTrigger__Range*, ::Array<::RootMotion::FinalIK::__InteractionTrigger__Range*>*>&
RootMotion::FinalIK::InteractionTrigger::__cordl_internal_get_ranges() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ranges;
}
constexpr ::ArrayW<::RootMotion::FinalIK::__InteractionTrigger__Range*, ::Array<::RootMotion::FinalIK::__InteractionTrigger__Range*>*> const&
RootMotion::FinalIK::InteractionTrigger::__cordl_internal_get_ranges() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ranges;
}
constexpr void RootMotion::FinalIK::InteractionTrigger::__cordl_internal_set_ranges(
    ::ArrayW<::RootMotion::FinalIK::__InteractionTrigger__Range*, ::Array<::RootMotion::FinalIK::__InteractionTrigger__Range*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ranges)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void RootMotion::FinalIK::InteractionTrigger::OpenUserManual() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionTrigger*>::get(),
                                                                             "OpenUserManual", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::InteractionTrigger::OpenScriptReference() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionTrigger*>::get(),
                                                                             "OpenScriptReference", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::InteractionTrigger::OpenTutorial4() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionTrigger*>::get(), "OpenTutorial4",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::InteractionTrigger::SupportGroup() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionTrigger*>::get(), "SupportGroup",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::InteractionTrigger::ASThread() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionTrigger*>::get(), "ASThread",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::InteractionTrigger::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionTrigger*>::get(), "Start",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t RootMotion::FinalIK::InteractionTrigger::GetBestRangeIndex(::UnityEngine::Transform* character, ::UnityEngine::Transform* raycastFrom, ::UnityEngine::RaycastHit raycastHit) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionTrigger*>::get(), "GetBestRangeIndex", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RaycastHit>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, character, raycastFrom, raycastHit);
}
inline ::RootMotion::FinalIK::InteractionTrigger* RootMotion::FinalIK::InteractionTrigger::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::RootMotion::FinalIK::InteractionTrigger*>());
}
inline void RootMotion::FinalIK::InteractionTrigger::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::InteractionTrigger*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::RootMotion::FinalIK::InteractionTrigger::InteractionTrigger() {}
