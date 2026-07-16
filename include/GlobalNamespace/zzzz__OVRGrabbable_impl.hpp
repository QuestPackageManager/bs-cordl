#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRGrabbable.hpp"
#include "UnityEngine/zzzz__Collider_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__OVRGrabbable_def.hpp"
#include "GlobalNamespace/zzzz__OVRGrabber_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRGrabbable.get_allowOffhandGrab
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRGrabbable::*)()>(&::GlobalNamespace::OVRGrabbable::get_allowOffhandGrab)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ef9a24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGrabbable*>(), { "get_allowOffhandGrab", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGrabbable.get_isGrabbed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRGrabbable::*)()>(&::GlobalNamespace::OVRGrabbable::get_isGrabbed)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5ef9a2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGrabbable*>(), { "get_isGrabbed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGrabbable.get_snapPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRGrabbable::*)()>(&::GlobalNamespace::OVRGrabbable::get_snapPosition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ef9a90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGrabbable*>(), { "get_snapPosition", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGrabbable.get_snapOrientation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRGrabbable::*)()>(&::GlobalNamespace::OVRGrabbable::get_snapOrientation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ef9a98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGrabbable*>(), { "get_snapOrientation", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGrabbable.get_snapOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::GlobalNamespace::OVRGrabbable::*)()>(&::GlobalNamespace::OVRGrabbable::get_snapOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ef9aa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGrabbable*>(), { "get_snapOffset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGrabbable.get_grabbedBy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::OVRGrabber> (::GlobalNamespace::OVRGrabbable::*)()>(&::GlobalNamespace::OVRGrabbable::get_grabbedBy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ef9aa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGrabbable*>(), { "get_grabbedBy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGrabbable.get_grabbedTransform
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::GlobalNamespace::OVRGrabbable::*)()>(&::GlobalNamespace::OVRGrabbable::get_grabbedTransform)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5ef9ab0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGrabbable*>(), { "get_grabbedTransform", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGrabbable.get_grabbedRigidbody
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Rigidbody> (::GlobalNamespace::OVRGrabbable::*)()>(&::GlobalNamespace::OVRGrabbable::get_grabbedRigidbody)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5ef9ac8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGrabbable*>(), { "get_grabbedRigidbody", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGrabbable.get_grabPoints
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::UnityEngine::Collider>> (::GlobalNamespace::OVRGrabbable::*)()>(&::GlobalNamespace::OVRGrabbable::get_grabPoints)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ef9ae0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGrabbable*>(), { "get_grabPoints", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGrabbable.GrabBegin
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRGrabbable::*)(::GlobalNamespace::OVRGrabber*, ::UnityEngine::Collider*)>(
    &::GlobalNamespace::OVRGrabbable::GrabBegin)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5ef9ae8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGrabbable*>(), { ::i2c::class_of<::GlobalNamespace::OVRGrabbable*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGrabbable.GrabEnd
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRGrabbable::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::GlobalNamespace::OVRGrabbable::GrabEnd)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5ef9b68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGrabbable*>(), { ::i2c::class_of<::GlobalNamespace::OVRGrabbable*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGrabbable.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRGrabbable::*)()>(&::GlobalNamespace::OVRGrabbable::Awake)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x5ef9c40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGrabbable*>(), { "Awake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGrabbable.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRGrabbable::*)()>(&::GlobalNamespace::OVRGrabbable::Start)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5ef9d94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGrabbable*>(), { ::i2c::class_of<::GlobalNamespace::OVRGrabbable*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGrabbable.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRGrabbable::*)()>(&::GlobalNamespace::OVRGrabbable::OnDestroy)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5ef9dfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGrabbable*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGrabbable._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRGrabbable::*)()>(&::GlobalNamespace::OVRGrabbable::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5ef9f38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGrabbable*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::OVRGrabbable::__cordl_internal_get_m_allowOffhandGrab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_allowOffhandGrab;
}
constexpr bool const& GlobalNamespace::OVRGrabbable::__cordl_internal_get_m_allowOffhandGrab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_allowOffhandGrab;
}
constexpr void GlobalNamespace::OVRGrabbable::__cordl_internal_set_m_allowOffhandGrab(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_allowOffhandGrab = value;
}
constexpr bool& GlobalNamespace::OVRGrabbable::__cordl_internal_get_m_snapPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_snapPosition;
}
constexpr bool const& GlobalNamespace::OVRGrabbable::__cordl_internal_get_m_snapPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_snapPosition;
}
constexpr void GlobalNamespace::OVRGrabbable::__cordl_internal_set_m_snapPosition(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_snapPosition = value;
}
constexpr bool& GlobalNamespace::OVRGrabbable::__cordl_internal_get_m_snapOrientation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_snapOrientation;
}
constexpr bool const& GlobalNamespace::OVRGrabbable::__cordl_internal_get_m_snapOrientation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_snapOrientation;
}
constexpr void GlobalNamespace::OVRGrabbable::__cordl_internal_set_m_snapOrientation(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_snapOrientation = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::OVRGrabbable::__cordl_internal_get_m_snapOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_snapOffset;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::OVRGrabbable::__cordl_internal_get_m_snapOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_snapOffset;
}
constexpr void GlobalNamespace::OVRGrabbable::__cordl_internal_set_m_snapOffset(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_snapOffset = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>>& GlobalNamespace::OVRGrabbable::__cordl_internal_get_m_grabPoints() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_grabPoints;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>> const& GlobalNamespace::OVRGrabbable::__cordl_internal_get_m_grabPoints() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_grabPoints;
}
constexpr void GlobalNamespace::OVRGrabbable::__cordl_internal_set_m_grabPoints(::ArrayW<::UnityW<::UnityEngine::Collider>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_grabPoints = value;
}
constexpr bool& GlobalNamespace::OVRGrabbable::__cordl_internal_get_m_grabbedKinematic() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_grabbedKinematic;
}
constexpr bool const& GlobalNamespace::OVRGrabbable::__cordl_internal_get_m_grabbedKinematic() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_grabbedKinematic;
}
constexpr void GlobalNamespace::OVRGrabbable::__cordl_internal_set_m_grabbedKinematic(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_grabbedKinematic = value;
}
constexpr ::UnityW<::UnityEngine::Collider>& GlobalNamespace::OVRGrabbable::__cordl_internal_get_m_grabbedCollider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_grabbedCollider;
}
constexpr ::UnityW<::UnityEngine::Collider> const& GlobalNamespace::OVRGrabbable::__cordl_internal_get_m_grabbedCollider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_grabbedCollider;
}
constexpr void GlobalNamespace::OVRGrabbable::__cordl_internal_set_m_grabbedCollider(::UnityW<::UnityEngine::Collider> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_grabbedCollider = value;
}
constexpr ::UnityW<::GlobalNamespace::OVRGrabber>& GlobalNamespace::OVRGrabbable::__cordl_internal_get_m_grabbedBy() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_grabbedBy;
}
constexpr ::UnityW<::GlobalNamespace::OVRGrabber> const& GlobalNamespace::OVRGrabbable::__cordl_internal_get_m_grabbedBy() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_grabbedBy;
}
constexpr void GlobalNamespace::OVRGrabbable::__cordl_internal_set_m_grabbedBy(::UnityW<::GlobalNamespace::OVRGrabber> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_grabbedBy = value;
}
inline bool GlobalNamespace::OVRGrabbable::get_allowOffhandGrab() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGrabbable*>(), { "get_allowOffhandGrab", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRGrabbable::get_isGrabbed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGrabbable*>(), { "get_isGrabbed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRGrabbable::get_snapPosition() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGrabbable*>(), { "get_snapPosition", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRGrabbable::get_snapOrientation() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGrabbable*>(), { "get_snapOrientation", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Transform> GlobalNamespace::OVRGrabbable::get_snapOffset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGrabbable*>(), { "get_snapOffset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::OVRGrabber> GlobalNamespace::OVRGrabbable::get_grabbedBy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGrabbable*>(), { "get_grabbedBy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::OVRGrabber>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Transform> GlobalNamespace::OVRGrabbable::get_grabbedTransform() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGrabbable*>(), { "get_grabbedTransform", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Rigidbody> GlobalNamespace::OVRGrabbable::get_grabbedRigidbody() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGrabbable*>(), { "get_grabbedRigidbody", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Rigidbody>>(this, ___internal_method);
}
inline ::ArrayW<::UnityW<::UnityEngine::Collider>> GlobalNamespace::OVRGrabbable::get_grabPoints() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGrabbable*>(), { "get_grabPoints", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::Collider>>>(this, ___internal_method);
}
inline void GlobalNamespace::OVRGrabbable::GrabBegin(::GlobalNamespace::OVRGrabber* hand, ::UnityEngine::Collider* grabPoint) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OVRGrabbable*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hand, grabPoint);
}
inline void GlobalNamespace::OVRGrabbable::GrabEnd(::UnityEngine::Vector3 linearVelocity, ::UnityEngine::Vector3 angularVelocity) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OVRGrabbable*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, linearVelocity, angularVelocity);
}
inline void GlobalNamespace::OVRGrabbable::Awake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGrabbable*>(), { "Awake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRGrabbable::Start() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OVRGrabbable*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRGrabbable::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGrabbable*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRGrabbable::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGrabbable*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRGrabbable* GlobalNamespace::OVRGrabbable::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRGrabbable*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRGrabbable::OVRGrabbable() {}
